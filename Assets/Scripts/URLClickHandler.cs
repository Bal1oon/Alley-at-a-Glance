using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class URLClickHandler : MonoBehaviour
{
    [SerializeField]
    private string url; // URL to be specified in the Inspector

    private Camera arCamera;
    private float lastTouchTime;
    private const float doubleClickTimeThreshold = 0.3f; // Double click time threshold for detection

    private void Start()
    {
        // Reference the AR camera
        arCamera = Camera.main;
    }

    private void Update()
    {
        // Check for screen touch input
        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            Touch touch = Input.GetTouch(0);

            // Shoot a raycast from the touch position
            Ray ray = arCamera.ScreenPointToRay(touch.position);
            RaycastHit hit;

            // Check for objects hit by the raycast
            if (Physics.Raycast(ray, out hit))
            {
                // If the hit object is a cube
                if (hit.collider.gameObject == gameObject)
                {
                    // Calculate the time difference between the current touch and the last touch
                    float touchTime = Time.time;
                    float timeSinceLastTouch = touchTime - lastTouchTime;
                    lastTouchTime = touchTime;

                    // Detect double click
                    if (timeSinceLastTouch <= doubleClickTimeThreshold)
                    {
                        // Open the specified URL from the Inspector
                        Application.OpenURL(url);
                    }
                }
            }
        }
    }
}
