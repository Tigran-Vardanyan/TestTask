using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Test : MonoBehaviour
{
    [Serializable]
    public class Root
    {
        public string status;
        public string country;
        public string countryCode;
        public string region;
        public string regionName;
        public string city;
        public string zip;
        public double lat;
        public double lon;
        public string timezone;
        public string isp ;
        public string org ;
        public string @as;
        public string query;
    }
}
