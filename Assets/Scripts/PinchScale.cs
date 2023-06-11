using UnityEngine;

public class PinchScale : MonoBehaviour
{
    private float initialDistance;
    private Vector3 initialScale;

    private void Update()
    {
        if (Input.touchCount == 2)
        {
            Touch touch0 = Input.GetTouch(0);
            Touch touch1 = Input.GetTouch(1);

            // 터치 입력이 해당 객체와 충돌하는지 확인
            if (IsTouchCollidingWithObject(touch0) && IsTouchCollidingWithObject(touch1))
            {
                if (touch1.phase == TouchPhase.Began)
                {
                    initialDistance = Vector2.Distance(touch0.position, touch1.position);
                    initialScale = transform.localScale;
                }
                else if (touch0.phase == TouchPhase.Moved || touch1.phase == TouchPhase.Moved)
                {
                    float currentDistance = Vector2.Distance(touch0.position, touch1.position);
                    float scaleFactor = currentDistance / initialDistance;

                    transform.localScale = initialScale * scaleFactor;
                }
            }
        }
    }

    private bool IsTouchCollidingWithObject(Touch touch)
    {
        Ray ray = Camera.main.ScreenPointToRay(touch.position);
        RaycastHit hit;

        // Box Collider와 충돌하는지 확인
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
