using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DoubleTapRotate : MonoBehaviour
{
    public Vector3 rotationAxis = Vector3.up; // Allows selecting the rotation axis in the Inspector
    public float rotationSpeed = 90f; // Allows adjusting the rotation speed in the Inspector

    private bool isRotating = false;

    private void Update()
    {
        if (Input.touchCount == 2 && Input.GetTouch(0).phase == TouchPhase.Began && Input.GetTouch(1).phase == TouchPhase.Began)
        {
            // Start rotation when two touches are recognized
            if (!isRotating)
            {
                isRotating = true;
                StartCoroutine(RotateObject());
            }
        }
    }

    private IEnumerator RotateObject()
    {
        float elapsedTime = 0f;
        Quaternion startingRotation = transform.rotation;

        while (elapsedTime < 2f)
        {
            // Rotate the object based on the rotation speed
            float rotationAmount = rotationSpeed * Time.deltaTime;
            Quaternion rotation = Quaternion.AngleAxis(rotationAmount, rotationAxis);
            transform.rotation = rotation * transform.rotation;

            elapsedTime += Time.deltaTime;
            yield return null;
        }

        // End rotation when completed
        isRotating = false;
        transform.rotation = startingRotation; // Return to the initial rotation state after the rotation is completed
    }
}
