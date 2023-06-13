using UnityEngine;

public class PinchScaleChild : MonoBehaviour
{
    public GameObject targetObject; // The child object to which PinchScale will be applied

    private float initialDistance;
    private Vector3 initialScale;

    private void Update()
    {
        if (Input.touchCount == 2)
        {
            Touch touch0 = Input.GetTouch(0);
            Touch touch1 = Input.GetTouch(1);

            // Check if touch input is colliding with the object
            if (IsTouchCollidingWithObject(touch0) && IsTouchCollidingWithObject(touch1))
            {
                // Scale change for the target child object
                if (touch1.phase == TouchPhase.Began)
                {
                    initialDistance = Vector2.Distance(touch0.position, touch1.position);
                    initialScale = targetObject.transform.localScale;
                }
                else if (touch0.phase == TouchPhase.Moved || touch1.phase == TouchPhase.Moved)
                {
                    float currentDistance = Vector2.Distance(touch0.position, touch1.position);
                    float scaleFactor = currentDistance / initialDistance;

                    targetObject.transform.localScale = initialScale * scaleFactor;
                }
            }
        }
    }

    private bool IsTouchCollidingWithObject(Touch touch)
    {
        Ray ray = Camera.main.ScreenPointToRay(touch.position);
        RaycastHit hit;

        // Check for collision with the collider of object A
        if (Physics.Raycast(ray, out hit))
        {
            if (hit.collider.gameObject == gameObject)
            {
                return true;
            }
        }

        return false;
    }
}
