using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpherMuves : MonoBehaviour
{
    public GameObject Spher;
    [SerializeField] float speed;
    bool muveingRight=true;
    // Start is called before the first frame update
    void Start()
    {
         speed=0+Random.Range(0,10);
    }

    // Update is called once per frame
    void Update()
    {
        if(transform.position.z >1 )
      {
          muveingRight=false;
      }
      else if(transform.position.z < 0)
      {
          muveingRight=true;
      }
      if(muveingRight)
      {
          transform.position = new Vector3(transform.position.x,transform.position.y,transform.position.z+speed*Time.deltaTime);
      }
      else
      {
           transform.position = new Vector3(transform.position.x,transform.position.y,transform.position.z-speed*Time.deltaTime);
      }
    }
}
