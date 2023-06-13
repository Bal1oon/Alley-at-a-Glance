using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DoubleTapRotateChild : MonoBehaviour
{
    public GameObject targetObject; // Variable to assign object B in the Inspector
    public Vector3 rotationAxis = Vector3.up; // Allows selection of the rotation axis in the Inspector
    public float rotationSpeed = 90f; // Allows adjustment of the rotation speed in the Inspector
    public float rotationTime = 2f; // Allows adjustment of the rotation time in the Inspector

    private bool isRotating = false;
    private float rotationTimer = 0f;
    private Quaternion initialRotation; // Variable to store the initial rotation state
    private Quaternion initialTargetRotation; // Variable to store the initial rotation state of the targetObject

    private void Start()
    {
        initialRotation = transform.rotation; // Stores the initial rotation state of the current object
        initialTargetRotation = targetObject.transform.rotation; // Stores the initial rotation state of the targetObject
    }

    private void Update()
    {
        if (Input.touchCount == 1 && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            if (!isRotating)
            {
                if (rotationTimer > 0f)
                {
                    // If a second touch occurs during rotation, reset the rotation timer
                    rotationTimer = 0f;
                }
                else
                {
                    // Start the rotation when the first touch event occurs
                    StartCoroutine(RotateObject());
                }
            }
        }

        // Measure the rotation time if rotating
        if (isRotating)
        {
            rotationTimer += Time.deltaTime;

            // Stop the rotation if the rotation time exceeds the specified time
            if (rotationTimer >= rotationTime)
            {
                StopRotation();
            }
        }
    }

    private IEnumerator RotateObject()
    {
        isRotating = true;
        Quaternion startingRotation = transform.rotation;
        float elapsedTime = 0f;

        while (elapsedTime < rotationTime)
        {
            // Rotate the current object based on the rotation speed
            float rotationAmount = rotationSpeed * Time.deltaTime;
            Quaternion rotation = Quaternion.AngleAxis(rotationAmount, rotationAxis);
            transform.rotation = rotation * transform.rotation;

            elapsedTime += Time.deltaTime;
            yield return null;
        }

        StopRotation();
    }

    private void StopRotation()
    {
        isRotating = false;
        rotationTimer = 0f;
        transform.rotation = initialRotation; // Reset the rotation state of the current object to the initial state
        targetObject.transform.rotation = initialTargetRotation; // Reset the rotation state of the targetObject to the initial state
    }
}