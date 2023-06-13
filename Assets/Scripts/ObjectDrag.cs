using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectDrag : MonoBehaviour
{
    private bool isDragging = false;
    private float zOffset;

    private void Update()
    {
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);

            switch (touch.phase)
            {
                case TouchPhase.Began:
                    OnTouchBegin(touch);
                    break;
                case TouchPhase.Moved:
                    OnTouchMoved(touch);
                    break;
                case TouchPhase.Ended:
                    OnTouchEnded(touch);
                    break;
            }
        }
    }

    private void OnTouchBegin(Touch touch)
    {
        Ray ray = Camera.main.ScreenPointToRay(touch.position);
        RaycastHit hit;

        if (Physics.Raycast(ray, out hit))
        {
            if (hit.collider.gameObject == gameObject)
            {
                isDragging = true;
                zOffset = Camera.main.WorldToScreenPoint(transform.position).z - ray.origin.z;
            }
        }
    }

    private void OnTouchMoved(Touch touch)
    {
        if (isDragging)
        {
            Ray ray = Camera.main.ScreenPointToRay(touch.position);
            float distance = (zOffset - ray.origin.z) / ray.direction.z;
            Vector3 touchPosition = ray.GetPoint(distance);
            transform.position = touchPosition;
        }
    }

    private void OnTouchEnded(Touch touch)
    {
        if (isDragging)
        {
            isDragging = false;
        }
    }
}
