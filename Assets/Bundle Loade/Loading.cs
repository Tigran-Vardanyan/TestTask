using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class Loading : MonoBehaviour
{
    string Url = "https://cat-fact.herokuapp.com/facts/random?animal_type=cat,dog,horse&amount=10";
    // public Text temp;
    public GameObject[] categorys;
    public Button[] button1;
    public Transform Greed1;
    public GameObject Base1;
    public Button button;
    public Texture2D[] tex;
    
    public Text Detiles;
    public RawImage pic;
    public GameObject panel;
    public int a;
   
    



    // Start is called before the first frame update
    void Start()
    {

        StartCoroutine(TestJson(Url));


    }

    // Update is called once per frame
    void Update()
    {

    }

    public void Refresh()
    {
        if(Greed1.transform.childCount != null)
        {
            foreach (Transform child in Greed1.transform)
            {
                GameObject.Destroy(child.gameObject);
            }
        }
        StartCoroutine(TestJson(Url));
    }
    IEnumerator TestJson(string Url)
    {

        UnityWebRequest rec = UnityWebRequest.Get(Url);
        yield return rec.SendWebRequest();

        if (rec.isNetworkError || rec.isHttpError)
        {
            Debug.LogError(rec.error);
            yield break;
        }
        else
        {

            //Debug.LogError(rec.downloadHandler.text);
            //Categorys.Root Root = JsonUtility.FromJson<Categorys.Root>(rec.downloadHandler.text);
            Categorys.Root[] Root = JsonHelper.getJsonArray<Categorys.Root>(rec.downloadHandler.text);

            button1 = new Button[Root.Length];
            
            for (int i = 0; i < Root.Length; i++)

            {
                int sentcount = Root[i].status.sentCount;
                string id = Root[i]._id;
                string Type = Root[i].type;
                string text = Root[i].text;
                
                //Debug.LogError(sentcount.ToString());
                //Debug.LogError(id);
                //Debug.LogError(Type);
                //Debug.LogError(Text);
                
                button1[i] = Instantiate(button, Greed1);
                int t = 0;
                switch (Root[i].type)
                {
                    case "cat":
                            t = 0;
                        button1[i].GetComponent<RawImage>().texture = tex[0];
                        break;
                    case "dog":
                            t = 1;
                        button1[i].GetComponent<RawImage>().texture = tex[1];
                        break;
                    case "horse":
                            t = 2;
                        button1[i].GetComponent<RawImage>().texture = tex[2];
                        break;
                }
                        
                        int buttonIndex = Root[i].status.sentCount;
                        button1[i].onClick.AddListener(() => TaskOnClick(Type, text, t));
                        void TaskOnClick(string tip, string text, int t)
                        {

                            
                            Detiles.text = text;
                            pic.texture = tex[t];
                                Base1.SetActive(false);
                                panel.SetActive(true);
                        }

                            
             



                 

                        button1[i].GetComponentInChildren<Text>().text = Root[i].type;


            }
        }
    }



    
}
