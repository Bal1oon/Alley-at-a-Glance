using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FloatingEffect : MonoBehaviour
{
    public float floatSpeed = 1.0f; // Floating speed
    public float floatHeight = 0.5f; // Floating height
    public bool moveUpFirst = true; // Whether to move up first

    private Vector3 startPosition;
    private bool movingUp;

    private void Start()
    {
        startPosition = transform.position;
        movingUp = moveUpFirst;
    }

    private void Update()
    {
        // Float the object up and down
        float floatingOffset = Mathf.Sin(Time.time * floatSpeed) * floatHeight;

        if (movingUp)
            floatingOffset = -floatingOffset;

        Vector3 floatOffset = new Vector3(0, floatingOffset, 0);
        transform.position = startPosition + floatOffset;

        // Check for direction change
        if (floatingOffset <= 0.01f)
            movingUp = !movingUp;
    }
}
