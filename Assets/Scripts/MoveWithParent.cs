using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Lean.Touch;

public class MoveWithParent : MonoBehaviour
{
    private Vector3 offset;

    private void OnEnable()
    {
        LeanTouch.OnFingerDown += OnFingerDown;
        LeanTouch.OnFingerUpdate += OnFingerUpdate;
    }

    private void OnDisable()
    {
        LeanTouch.OnFingerDown -= OnFingerDown;
        LeanTouch.OnFingerUpdate -= OnFingerUpdate;
    }

    private void OnFingerDown(LeanFinger finger)
    {
        // Calculate the offset between the finger and the parent object
        offset = transform.position - finger.GetWorldPosition(0);
    }

    private void OnFingerUpdate(LeanFinger finger)
    {
        // Calculate the new position of the parent object
        Vector3 newPosition = finger.GetWorldPosition(0) + offset;

        // Update the position of the parent object
        transform.position = newPosition;

        // Update the positions of the child objects
        foreach (Transform child in transform)
        {
            child.position = newPosition;
        }
    }
}
