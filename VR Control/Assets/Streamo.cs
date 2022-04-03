using System.Collections;
using System.Collections.Generic;
using Netcode.Transports.WebSocket;

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

    private string url = "ws://192.168.18.11:8080/ws";

    // Start is called before the first frame update
    void Start()
    {
        s = GetComponent<Renderer>();
        client = WebSocketClientFactory.Create(url);
        client.Connect();
        Debug.Log("[Streamo] on create");
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