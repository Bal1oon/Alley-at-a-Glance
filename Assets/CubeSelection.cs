using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CubeSelection : MonoBehaviour
{
    private Camera arCamera;

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
            // 터치 위치로 레이캐스트 발사
            Ray ray = arCamera.ScreenPointToRay(Input.GetTouch(0).position);
            RaycastHit hit;

            // 레이캐스트와 충돌한 오브젝트 확인
            if (Physics.Raycast(ray, out hit))
            {
                // 충돌한 오브젝트가 큐브인 경우
                if (hit.collider.gameObject == gameObject)
                {
                    // 특정 URL로 이동 (예시: 구글 홈페이지)
                    string url = "https://www.google.com";
                    Application.OpenURL(url);
                }
            }
        }
    }
}
