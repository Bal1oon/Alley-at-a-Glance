using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class spinZ : MonoBehaviour
{
    public float freq;

    // Update is called once per frame
    void Update()
    {
        transform.Rotate(0f, 0f, freq * Time.deltaTime,Space.Self);
    }
}
