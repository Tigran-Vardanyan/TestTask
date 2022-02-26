using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;

public class LoadBundle : MonoBehaviour
{

    InputField outputArea;

    private void Start()
    {
        outputArea = GameObject.Find("InputField").GetComponent<InputField>();
        GameObject.Find("Button").GetComponent<Button>().onClick.AddListener(GetData);
    }
    void GetData() => StartCoroutine(GetDataCoroutine());
    IEnumerator GetDataCoroutine()
    {
        outputArea.text = "Loding...";
        string url = "https://www.example.com";
        using (UnityWebRequest rec = UnityWebRequest.Get(url))
        {
            yield return rec.SendWebRequest();
            if (rec.isNetworkError || rec.isHttpError)
            {
                outputArea.text = rec.error;
            }
            else
            {
                outputArea.text = rec.downloadHandler.text;
            }
        }
    }
}
