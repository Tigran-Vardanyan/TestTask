#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void UnityEngine.AssetBundle::.ctor()
extern void AssetBundle__ctor_mCE6DB7758AAD0EDDB044FC67C5BC7EC987BF3F71 (void);
// 0x00000002 UnityEngine.AssetBundle UnityEngine.AssetBundle::LoadFromFile_Internal(System.String,System.UInt32,System.UInt64)
extern void AssetBundle_LoadFromFile_Internal_m27AD5A25C493DDF033E2C0EB8B5E73D1A498D3D9 (void);
// 0x00000003 UnityEngine.AssetBundle UnityEngine.AssetBundle::LoadFromFile(System.String)
extern void AssetBundle_LoadFromFile_m326379558FA2CA731C294D5F9905EA3EAE3B5E52 (void);
// 0x00000004 T UnityEngine.AssetBundle::LoadAsset(System.String)
// 0x00000005 UnityEngine.Object UnityEngine.AssetBundle::LoadAsset(System.String,System.Type)
extern void AssetBundle_LoadAsset_m9139320F8B6D3E43B7D29AA7A60030306AE0A2C6 (void);
// 0x00000006 UnityEngine.Object UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)
extern void AssetBundle_LoadAsset_Internal_mFB165539087545C4B5763BA8B590D84318C6FE1B (void);
// 0x00000007 UnityEngine.AssetBundleRequest UnityEngine.AssetBundle::LoadAllAssetsAsync()
extern void AssetBundle_LoadAllAssetsAsync_mFBD03164799EA8A821309FBE8C4C08340943A5E5 (void);
// 0x00000008 UnityEngine.AssetBundleRequest UnityEngine.AssetBundle::LoadAllAssetsAsync(System.Type)
extern void AssetBundle_LoadAllAssetsAsync_m213D935C1F40DB2098F00BD852B5799F00542137 (void);
// 0x00000009 System.Void UnityEngine.AssetBundle::Unload(System.Boolean)
extern void AssetBundle_Unload_m0DEBACB284F6CECA8DF21486D1BBE1189F6A5D66 (void);
// 0x0000000A UnityEngine.AssetBundleRequest UnityEngine.AssetBundle::LoadAssetWithSubAssetsAsync_Internal(System.String,System.Type)
extern void AssetBundle_LoadAssetWithSubAssetsAsync_Internal_mD671A7674C5E61F00AF0127C2D92F56DD34E3DCB (void);
// 0x0000000B UnityEngine.Object UnityEngine.AssetBundleRequest::GetResult()
extern void AssetBundleRequest_GetResult_m792F2C703230D18A0B6B18C86636961125B1B9A2 (void);
// 0x0000000C UnityEngine.Object UnityEngine.AssetBundleRequest::get_asset()
extern void AssetBundleRequest_get_asset_mB0A96FBC026D143638E467DEB37228ACD55F1813 (void);
// 0x0000000D System.Void UnityEngine.AssetBundleRequest::.ctor()
extern void AssetBundleRequest__ctor_mD09AF030644EF7F3386ABB3B5C593F61ADE25017 (void);
static Il2CppMethodPointer s_methodPointers[13] = 
{
	AssetBundle__ctor_mCE6DB7758AAD0EDDB044FC67C5BC7EC987BF3F71,
	AssetBundle_LoadFromFile_Internal_m27AD5A25C493DDF033E2C0EB8B5E73D1A498D3D9,
	AssetBundle_LoadFromFile_m326379558FA2CA731C294D5F9905EA3EAE3B5E52,
	NULL,
	AssetBundle_LoadAsset_m9139320F8B6D3E43B7D29AA7A60030306AE0A2C6,
	AssetBundle_LoadAsset_Internal_mFB165539087545C4B5763BA8B590D84318C6FE1B,
	AssetBundle_LoadAllAssetsAsync_mFBD03164799EA8A821309FBE8C4C08340943A5E5,
	AssetBundle_LoadAllAssetsAsync_m213D935C1F40DB2098F00BD852B5799F00542137,
	AssetBundle_Unload_m0DEBACB284F6CECA8DF21486D1BBE1189F6A5D66,
	AssetBundle_LoadAssetWithSubAssetsAsync_Internal_mD671A7674C5E61F00AF0127C2D92F56DD34E3DCB,
	AssetBundleRequest_GetResult_m792F2C703230D18A0B6B18C86636961125B1B9A2,
	AssetBundleRequest_get_asset_mB0A96FBC026D143638E467DEB37228ACD55F1813,
	AssetBundleRequest__ctor_mD09AF030644EF7F3386ABB3B5C593F61ADE25017,
};
static const int32_t s_InvokerIndices[13] = 
{
	1137,
	1471,
	1840,
	-1,
	500,
	500,
	1106,
	791,
	992,
	500,
	1106,
	1106,
	1137,
};
static const Il2CppTokenRangePair s_rgctxIndices[1] = 
{
	{ 0x06000004, { 0, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[2] = 
{
	{ (Il2CppRGCTXDataType)1, 69 },
	{ (Il2CppRGCTXDataType)2, 69 },
};
extern const CustomAttributesCacheGenerator g_UnityEngine_AssetBundleModule_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_AssetBundleModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_AssetBundleModule_CodeGenModule = 
{
	"UnityEngine.AssetBundleModule.dll",
	13,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	1,
	s_rgctxIndices,
	2,
	s_rgctxValues,
	NULL,
	g_UnityEngine_AssetBundleModule_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
