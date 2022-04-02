using System.Collections;
using System.Collections.Generic;
using Netcode.Transports.WebSocket;

using UnityEngine;

public class StreamController : MonoBehaviour
{
    // Rigidbody variable to hold the player ball's rigidbody instance
    private SpriteRenderer s;

    private IWebSocketClient client;

    // Start is called before the first frame update
    void Start()
    {
        s = GetComponent<SpriteRenderer>();
        client = WebSocketClientFactory.Create("http://localhost:3000");
    }

    // Update is called once per frame
    void Update()
    {
        WebSocketEvent wsEvent = client.Poll();
        if (wsEvent.Type == WebSocketEvent.WebSocketEventType.Payload)
        {
            Debug.Log("got data!");
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
