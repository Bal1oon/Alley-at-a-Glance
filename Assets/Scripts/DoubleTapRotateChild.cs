using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DoubleTapRotateChild : MonoBehaviour
{
    public GameObject targetObject; // Inspector에서 B 객체를 할당할 변수입니다.
    public Vector3 rotationAxis = Vector3.up; // Inspector에서 회전 축을 선택할 수 있게 합니다.
    public float rotationSpeed = 90f; // Inspector에서 회전 속도를 조정할 수 있게 합니다.
    public float rotationTime = 2f; // Inspector에서 회전 시간을 조정할 수 있게 합니다.

    private bool isRotating = false;
    private float rotationTimer = 0f;
    private Quaternion initialRotation; // 초기 회전 상태를 저장하기 위한 변수입니다.
    private Quaternion initialTargetRotation; // targetObject의 초기 회전 상태를 저장하기 위한 변수입니다.

    private void Start()
    {
        initialRotation = transform.rotation; // 현재 객체의 초기 회전 상태를 저장합니다.
        initialTargetRotation = targetObject.transform.rotation; // targetObject의 초기 회전 상태를 저장합니다.
    }

    private void Update()
    {
        if (Input.touchCount == 1 && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            if (!isRotating)
            {
                if (rotationTimer > 0f)
                {
                    // 회전 중에 두 번째 터치가 발생한 경우, 회전 시간을 초기화합니다.
                    rotationTimer = 0f;
                }
                else
                {
                    // 첫 번째 터치 이벤트 발생 시 회전을 시작합니다.
                    StartCoroutine(RotateObject());
                }
            }
        }

        // 회전 중인 경우 회전 시간을 측정합니다.
        if (isRotating)
        {
            rotationTimer += Time.deltaTime;

            // 회전 시간이 지정된 시간을 초과하면 회전을 종료합니다.
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
            // 회전 속도에 따라 현재 객체를 회전시킵니다.
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
        transform.rotation = initialRotation; // 회전이 완료되면 현재 객체의 초기 회전 상태로 돌아갑니다.
        targetObject.transform.rotation = initialTargetRotation; // 회전이 완료되면 targetObject의 초기 회전 상태로 돌아갑니다.
    }
}
