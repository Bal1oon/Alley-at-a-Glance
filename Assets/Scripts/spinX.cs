using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class spinX : MonoBehaviour
{
    public float freq;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        transform.Rotate(freq * Time.deltaTime, 0f, 0f, Space.Self);
    }
}
