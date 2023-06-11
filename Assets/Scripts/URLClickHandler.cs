using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class URLClickHandler : MonoBehaviour
{
    [SerializeField]
    private string url; // Inspector에서 지정할 URL

    private Camera arCamera;
    private float lastTouchTime;
    private const float doubleClickTimeThreshold = 0.3f; // 더블 클릭 감지 시간 임계값

    private void Start()
    {
        // AR 카메라 참조
        arCamera = Camera.main;
    }

    private void Update()
    {
        // 스크린 터치 입력 확인
        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            Touch touch = Input.GetTouch(0);

            // 터치 위치로 레이캐스트 발사
            Ray ray = arCamera.ScreenPointToRay(touch.position);
            RaycastHit hit;

            // 레이캐스트와 충돌한 오브젝트 확인
            if (Physics.Raycast(ray, out hit))
            {
                // 충돌한 오브젝트가 큐브인 경우
                if (hit.collider.gameObject == gameObject)
                {
                    // 현재 터치 시간과 마지막 터치 시간의 차이 계산
                    float touchTime = Time.time;
                    float timeSinceLastTouch = touchTime - lastTouchTime;
                    lastTouchTime = touchTime;

                    // 더블 클릭 감지
                    if (timeSinceLastTouch <= doubleClickTimeThreshold)
                    {
                        // Inspector에서 지정한 URL로 이동
                        Application.OpenURL(url);
                    }
                }
            }
        }
    }
}
