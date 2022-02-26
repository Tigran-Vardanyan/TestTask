using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class BundledObjectLoader : MonoBehaviour
{
     public string bundleName = "spher";
       public string assetName = "spher";
    // Start is called before the first frame update
    void Start()
    {
        AssetBundle localAssetBundle = AssetBundle.LoadFromFile(Path.Combine(@"C:\Royal Platform\AssetBundle\Assets\AssetBundles",bundleName));
        if(localAssetBundle==null)
        {
            Debug.LogError("Failed to load AssetBundle");
            return;
        }
        var asset = localAssetBundle.LoadAllAssetsAsync();
        Instantiate(asset.asset);
        localAssetBundle.Unload(false);
    }

   
}
