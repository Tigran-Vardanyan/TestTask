using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;

public class WebRec : MonoBehaviour
{
    InputField outputArea;
    public GameObject Progres;
    public bool isDownload = false;
    UnityWebRequest rec;

    private void Start()
    {
        outputArea = GameObject.Find("InputField").GetComponent<InputField>();
        GameObject.Find("Load").GetComponent<Button>().onClick.AddListener(GetData);
       // GameObject.Find("Load").GetComponent<Button>().onClick.AddListener(Data);
      //  GameObject Progres = GameObject.Find("Downloadprogres");
        
    }
    private void Update()
    {
      // Progres.GetComponent<Slider>().value = a;
    }


    void GetData() => StartCoroutine(GetDataCoroutine());
   // void Data() => StartCoroutine(progress(rec));
    IEnumerator GetDataCoroutine()
    {
        outputArea.text = "Loding...";
        isDownload = true;
       



        UnityWebRequest rec = UnityWebRequestAssetBundle.GetAssetBundle("https://cdn72733121.blazingcdn.net/medias/Nb8BY0jbUH3hvKxN.bundle");
        
            Progres.SetActive(true);
            StartCoroutine(ShowDownloadProgress(rec));
            yield return rec.SendWebRequest();
            if (rec.result != UnityWebRequest.Result.Success)
            {
                Debug.Log(rec.error);
                isDownload = false;

            }
            else
            {
                AssetBundle bundl = DownloadHandlerAssetBundle.GetContent(rec);
                outputArea.text = "Loding Complite";
                var prefab = bundl.LoadAsset<GameObject>("sahnil");
                Instantiate(prefab);
                
                isDownload = false;
                bundl.Unload(false);
            }
           
        
         
        
    }
    public IEnumerator ShowDownloadProgress(UnityWebRequest rec)
    {
        while (!rec.isDone)
        {
            Progres.GetComponent<Slider>().value = rec.downloadProgress;
            yield return new WaitForSeconds(.01f);
        }
        Progres.GetComponent<Slider>().value = 0;
        Progres.SetActive(false);
    }
    /*  IEnumerator progress(UnityWebRequest rec)
      {
          while (isDownload)
          {
              Progres.GetComponent<Slider>().value = rec.downloadProgress;

              yield return null;
          }
      }*/
}
