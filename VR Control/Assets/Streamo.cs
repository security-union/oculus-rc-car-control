using System.Collections;
using System.Collections.Generic;
using Netcode.Transports.WebSocket;
using Google.Protobuf;


using UnityEngine;

public class VideoPacket
{
    public string data;
    public string frameType;
    public int epochTime;
    public string encoding;
}

public class Streamo : MonoBehaviour
{
    // Rigidbody variable to hold the player ball's rigidbody instance
    private Renderer s;

    private IWebSocketClient client;

    private OVRManager manager;

    public string url = "ws://192.168.18.11:8080/ws";

    // Start is called before the first frame update
    void Start()
    {
        s = GetComponent<Renderer>();
        client = WebSocketClientFactory.Create(url);
        client.Connect();
        Debug.Log("[Streamo] on create");
        manager = new OVRManager();
    }

    // Update is called once per frame
    void Update()
    {
        if (client == null)
        {
            client = WebSocketClientFactory.Create(url);
            client.Connect();
            Debug.Log("client is null, c# sucks");
            return;
        }
        if (client.ReadyState == WebSocketSharp.WebSocketState.Open)
        {
            OVRInput.Update();
            var primaryThumbstick = OVRInput.Get(OVRInput.Axis2D.PrimaryThumbstick);
            var secondaryThumbstick = OVRInput.Get(OVRInput.Axis2D.SecondaryThumbstick);

            OculusControllerState state = new OculusControllerState();
            state.PrimaryThumbstick = new OculusControllerState.Types.Vector2();
            state.PrimaryThumbstick.X = primaryThumbstick.x;
            state.PrimaryThumbstick.Y = primaryThumbstick.y;
            state.SecondaryThumbstick = new OculusControllerState.Types.Vector2();
            state.SecondaryThumbstick.X = secondaryThumbstick.x;
            state.SecondaryThumbstick.Y = secondaryThumbstick.y;
            client.Send(state.ToByteArray());
        }
        WebSocketEvent wsEvent = client.Poll();
        client.EventQueue.Clear();
        Debug.Log("ws event " + wsEvent.Type);
        if (wsEvent.Type == WebSocketEvent.WebSocketEventType.Payload)
        {
            Debug.Log("got data!");
            //string result = System.Text.Encoding.UTF8.GetString(wsEvent.Payload);
            //VideoPacket packet = JsonUtility.FromJson< VideoPacket>(result);
            //Debug.Log("parsed data!" + packet);
            //byte[] data = System.Convert.FromBase64String(packet.data);
            Texture2D tex = new Texture2D(2, 2);
            tex.LoadImage(wsEvent.Payload);
            GetComponent<Renderer>().material.mainTexture = tex;
            Resources.UnloadUnusedAssets();
        }

        if (wsEvent.Type == WebSocketEvent.WebSocketEventType.Error)
        {
            Debug.Log("error " + wsEvent.Error);
        }

        if (wsEvent.Type == WebSocketEvent.WebSocketEventType.Open)
        {
            Debug.Log("ws connected");
        }
    }
}