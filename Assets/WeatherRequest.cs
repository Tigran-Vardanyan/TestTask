using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class WeatherRequest : MonoBehaviour
{
   // string url = "api.openweathermap.org/data/2.5/weather?lat=35&lon=139&units=metric&appid==37fd2e7ee5e691d08c6fbf7a95e68993";
    string url = "http://ip-api.com/json";
    public Text temp;
   

   /* IEnumerator Weather ()
    {
        UnityWebRequest rec = UnityWebRequest.Get(url);
        yield return rec.SendWebRequest();

        if (rec.isNetworkError || rec.isHttpError)
        {
            Debug.Log(rec.error);
        }
        else
        {
            // var weather =  Newtonsoft.Json.JsonConvert.DeserializeObject<ResposWeather>(rec.downloadHandler.text);
            ResposWeather.Main weather = JsonUtility.FromJson<ResposWeather.Main>(rec.downloadHandler.text);
            temp = GameObject.Find("WeaterTemp").GetComponent<Text>();
            temp.text = weather.temp.ToString();
        }
    }*/
    IEnumerator TestJson()
    {
        UnityWebRequest rec = UnityWebRequest.Get(url);
        yield return rec.SendWebRequest();

        if (rec.isNetworkError || rec.isHttpError)
        {
            Debug.Log("1");
        }
        else
        {
            // var weather =  Newtonsoft.Json.JsonConvert.DeserializeObject<ResposWeather>(rec.downloadHandler.text);
            Test.Root weather = JsonUtility.FromJson<Test.Root>(rec.downloadHandler.text);
           // temp = GameObject.Find("WeaterTemp").GetComponent<Text>();
            temp.text = weather.country;
            Debug.Log(weather.country);
        }
    }
    public void GetWeather()
    {
       // StartCoroutine(Weather());
        StartCoroutine(TestJson());
    }
}
