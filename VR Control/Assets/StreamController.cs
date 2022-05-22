using Netcode.Transports.WebSocket;
using Google.Protobuf;


using UnityEngine;

public class StreamController : MonoBehaviour
{
    private IWebSocketClient client;

    // Per Oculus documentation, needs to be initialized to receive
    // controller updates via OVRInput.
    private OVRManager manager;

    // Url to receive video frames from.
    public string url = "";

    // Url to push controller updates.
    public string controlUrl = "";

    // Sample Oculus controller data.
    // It sends a websocket updated only when ControllerSampler == 0 and IsController == true
    private int ControllerSampler = 0;

    // If true, this class is responsible for sending Oculus controller updates, else
    // just send video.
    public bool IsController = true;

    // Socket used for sending controller updates.
    private IWebSocketClient controlSocket;

    // Start is called before the first frame update
    void Start()
    {
        client = WebSocketClientFactory.Create(url);
        client.Connect();
        manager = new OVRManager();
    }

    // Update is called once per frame
    void Update()
    {
        if (client == null)
        {
            client = WebSocketClientFactory.Create(url);
            client.Connect();
            Debug.Log("client is null");
            return;
        }
        if (controlSocket == null && IsController == true)
        {
            controlSocket = WebSocketClientFactory.Create(controlUrl);
            controlSocket.Connect();
            Debug.Log("controlSocket is null");
            return;
        }
        if (controlSocket != null && IsController == true)
        {
            controlSocket.Poll();
        }
        if (IsController && controlSocket != null &&
            controlSocket.ReadyState == WebSocketSharp.WebSocketState.Open
            && ControllerSampler == 0)
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
            controlSocket.Send(state.ToByteArray());
        } else if (IsController && ControllerSampler == 0)
        {
            Debug.Log("dropping control message url " + controlUrl);
        }
        ControllerSampler = (ControllerSampler + 1) % 2;
        WebSocketEvent wsEvent = client.Poll();
        client.EventQueue.Clear();
        Debug.Log("ws event " + wsEvent.Type);
        if (wsEvent.Type == WebSocketEvent.WebSocketEventType.Payload)
        {
            Texture2D tex = new Texture2D(2, 2);
            tex.LoadImage(wsEvent.Payload);
            GetComponent<Renderer>().material.mainTexture = tex;
            // This is a bug in the garbage collection.
            // We trigger this manually to avoid running out of memory.
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