using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController2 : MonoBehaviour
{
    // Appears in the Inspector view from where you can set the speed
    public float speed;

    // Rigidbody variable to hold the player ball's rigidbody instance
    private Rigidbody rb;

    // Called before the first frame update
    void Start()
    {
        // Assigns the player ball's rigidbody instance to the variable
        rb = GetComponent<Rigidbody>();
    }

    // Called once per frame
    private void Update()
    {
        // The float variables, moveHorizontal and moveVertical, holds the value of the virtual axes, X and Z.

        // It records input from the keyboard.
        float moveHorizontal = Input.GetAxis("Horizontal");
        float moveVertical = Input.GetAxis("Vertical");

        // Vector3 variable, movement, holds 3D positions of the player ball in form of X, Y, and Z axes in the space.
        Vector3 movement = new Vector3(moveHorizontal, 0.0f, moveVertical);

        // Adds force to the player ball to move around.
        rb.AddForce(movement * speed * Time.deltaTime);
    }
}