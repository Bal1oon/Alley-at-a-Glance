using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DoubleTapRotate : MonoBehaviour
{
    public Vector3 rotationAxis = Vector3.up; // Inspector에서 회전 축을 선택할 수 있게 합니다.
    public float rotationSpeed = 90f; // Inspector에서 회전 속도를 조정할 수 있게 합니다.

    private bool isRotating = false;

    private void Update()
    {
        if (Input.touchCount == 2 && Input.GetTouch(0).phase == TouchPhase.Began && Input.GetTouch(1).phase == TouchPhase.Began)
        {
            // 두 개의 터치로 인식되면 회전 시작
            if (!isRotating)
            {
                isRotating = true;
                StartCoroutine(RotateObject());
            }
        }
    }

    private System.Collections.IEnumerator RotateObject()
    {
        float elapsedTime = 0f;
        Quaternion startingRotation = transform.rotation;

        while (elapsedTime < 2f)
        {
            // 회전 속도에 따라 객체를 회전시킵니다.
            float rotationAmount = rotationSpeed * Time.deltaTime;
            Quaternion rotation = Quaternion.AngleAxis(rotationAmount, rotationAxis);
            transform.rotation = rotation * transform.rotation;

            elapsedTime += Time.deltaTime;
            yield return null;
        }

        // 회전이 완료되면 회전 종료
        isRotating = false;
        transform.rotation = startingRotation; // 회전 완료 후 초기 회전 상태로 돌아갑니다.
    }
}

