using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Categorys : MonoBehaviour
{
    [Serializable]
    public class Status
    {
        public bool? verified;
        public int sentCount ;
    }
    [Serializable]
    public class Root
    {
        public Status status ;
        public string _id ;
        public DateTime updatedAt ;
        public DateTime createdAt ;
        public string user ;
        public string text ;
        public bool deleted ;
        public string source ;
        public int __v ;
        public string type ;
        public bool used ;
    }

   



}
