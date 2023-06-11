using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FloatingEffect : MonoBehaviour
{
    public float floatSpeed = 1.0f; // 부동 속도
    public float floatHeight = 0.5f; // 부동 높이
    public bool moveUpFirst = true; // 위로 먼저 움직일지 여부

    private Vector3 startPosition;
    private bool movingUp;

    private void Start()
    {
        startPosition = transform.position;
        movingUp = moveUpFirst;
    }

    private void Update()
    {
        // 오브젝트를 위아래로 부동시킴
        float floatingOffset = Mathf.Sin(Time.time * floatSpeed) * floatHeight;

        if (movingUp)
            floatingOffset = -floatingOffset;

        Vector3 floatOffset = new Vector3(0, floatingOffset, 0);
        transform.position = startPosition + floatOffset;

        // 부동 방향 전환을 위한 체크
        if (floatingOffset <= 0.01f)
            movingUp = !movingUp;
    }
}
