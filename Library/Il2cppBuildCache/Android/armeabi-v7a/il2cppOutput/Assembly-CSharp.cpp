#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,JSONObject>
struct Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.IEnumerable`1<JSONObject>
struct IEnumerable_1_tF4B16C9400B7CBAC9C59894A5878C230079AEB9F;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,JSONObject>
struct KeyCollection_t8394EC9CE67058B23CB1F3E043B24DE2EA46FFAA;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<JSONObject>
struct List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<ResposWeather/Weather>
struct List_1_t774C79438C4B75766B7464E65F132BA08F0BD74A;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,JSONObject>
struct ValueCollection_t8D8A56C06E996E3CFBAD59E6272CAA58669C6A95;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/Entry<System.String,JSONObject>[]
struct EntryU5BU5D_t8404F3DFD50F3CD5644CB25FC492541D1A3B8951;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// JSONObject[]
struct JSONObjectU5BU5D_tFB4FA33E0B9559355A1E9D5BFE4DBF2B68B7B96E;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// Categorys/Root[]
struct RootU5BU5D_t632F3B7EF48973C939950798ACE5B91D5E29EF30;
// ResposWeather/Weather[]
struct WeatherU5BU5D_tB8DD1595B5DD6D96D0EAF325D8CED919F924DB32;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.AssetBundle
struct AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4;
// UnityEngine.AssetBundleRequest
struct AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// BundledObjectLoader
struct BundledObjectLoader_tCF7915F0B058BAD21E4B9C37ED5ABADE52DDBDCD;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// Categorys
struct Categorys_t0D83D62AC2CF4157DB440E2A3B3F3F05E699D910;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerable
struct IEnumerable_t47A618747A1BB2A868710316F7372094849163A2;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// JSONObject
struct JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722;
// JsonHelper
struct JsonHelper_t6C3440889C2487EBAC7F6E08707670E4CE60DD97;
// LoadBundle
struct LoadBundle_tCCF56ED79520467E367004790C0CE3B5E1EEE9AC;
// Loading
struct Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityEngine.UI.RawImage
struct RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// ResposWeather
struct ResposWeather_t5747578C4FEE44A4A5185FD803B35062CFFFD08E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// SpherMuves
struct SpherMuves_t5654ADC5514C34DC1B962C4C4BD628DB1E7A0035;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// Test
struct Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40;
// WeatherRequest
struct WeatherRequest_t239B2216025DFDE4ECF3A8FC584B8AB2A68F9814;
// WebRec
struct WebRec_t29F0736489F17B673ED3C779F877C39FFA79DBE6;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// Categorys/Root
struct Root_tC9A64770600B9FA62079AE4160AB035C6597B841;
// Categorys/Status
struct Status_t40E98624315AB90AFA291CBCB4FDCB5449DB1AA1;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9;
// JSONObject/<BakeAsync>d__107
struct U3CBakeAsyncU3Ed__107_t8E955808B36BA1E7480E5519CC31A36000C8ECC8;
// JSONObject/<PrintAsync>d__109
struct U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7;
// JSONObject/<StringifyAsync>d__112
struct U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124;
// JSONObject/AddJSONContents
struct AddJSONContents_t30D87492AD29D0086FE679779BD8E02620377B16;
// JSONObject/FieldNotFound
struct FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6;
// JSONObject/GetFieldResponse
struct GetFieldResponse_t43D0287B1D77E67E63ED111DCD7C7BE0EC183345;
// LoadBundle/<GetDataCoroutine>d__3
struct U3CGetDataCoroutineU3Ed__3_t1DB663A49515F78190F39164B3EA3A56BB70159C;
// Loading/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_tF2FB2E5FB66F24FBD986C98569C62F25795EEAC0;
// Loading/<TestJson>d__14
struct U3CTestJsonU3Ed__14_t0E0F080D1E6BE65AE94DA84D527DC6AE18884C84;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// ResposWeather/Clouds
struct Clouds_t7DAE7314B38FF4F1C2BB162D9FB52CE7128D300A;
// ResposWeather/Coord
struct Coord_t327D69B3A98A66AF89AE0D823C4FC094097B9FA8;
// ResposWeather/Main
struct Main_t7F967EE4D57213963EC2DB4BD709C31F5BC93B0E;
// ResposWeather/Root
struct Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC;
// ResposWeather/Sys
struct Sys_t564A056DB449365FEFEEB84F10D06C20124F7D60;
// ResposWeather/Weather
struct Weather_t8395B1725DA8287B2A3602260F265B80BEDCB649;
// ResposWeather/Wind
struct Wind_t39FDA91D941BFD913D074304D03C907489ED6334;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;
// Test/Root
struct Root_t9023D5FD4704C6B8D12E0FAB93277288A86EBA21;
// WeatherRequest/<TestJson>d__2
struct U3CTestJsonU3Ed__2_t35860833CDAEE846BC940352E6837E64BFAA9284;
// WebRec/<GetDataCoroutine>d__7
struct U3CGetDataCoroutineU3Ed__7_t89F45FF117149FD57F06486198C50A74E853E0EF;
// WebRec/<ShowDownloadProgress>d__8
struct U3CShowDownloadProgressU3Ed__8_t441A453F57AACFFD32E89B9B6CAC8D6FE4E915EB;

IL2CPP_EXTERN_C RuntimeClass* ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CBakeAsyncU3Ed__107_t8E955808B36BA1E7480E5519CC31A36000C8ECC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetDataCoroutineU3Ed__3_t1DB663A49515F78190F39164B3EA3A56BB70159C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetDataCoroutineU3Ed__7_t89F45FF117149FD57F06486198C50A74E853E0EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShowDownloadProgressU3Ed__8_t441A453F57AACFFD32E89B9B6CAC8D6FE4E915EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTestJsonU3Ed__14_t0E0F080D1E6BE65AE94DA84D527DC6AE18884C84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTestJsonU3Ed__2_t35860833CDAEE846BC940352E6837E64BFAA9284_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass14_0_tF2FB2E5FB66F24FBD986C98569C62F25795EEAC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____13BA99FB374DE24EB2656ACE253C54E2DA7EBAEDA4DD3DAB04852553EAF91EF6_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0023AF2F00FCDB066CC6D76D920DA0ADE90EF647;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral08F863EBBB3CD717E71656C5810CF3AA8D6D381F;
IL2CPP_EXTERN_C String_t* _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral0DFA9AA29082727751167EB3C54FCAD0F9EDC665;
IL2CPP_EXTERN_C String_t* _stringLiteral11BAC12861C1231E69A3D9E3993E11F5A9173918;
IL2CPP_EXTERN_C String_t* _stringLiteral1D1E412C01FCBEED5A211176F17ED68673F59FC1;
IL2CPP_EXTERN_C String_t* _stringLiteral1F0A8088BDF598E9F1F5BA0F804AD53FE59C96A9;
IL2CPP_EXTERN_C String_t* _stringLiteral1F3CB6FE5728826A05CCF58048480DF05ADEF3F1;
IL2CPP_EXTERN_C String_t* _stringLiteral204DBBDBB1BC14C7A1E61266CACCC3443D6AF93D;
IL2CPP_EXTERN_C String_t* _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3;
IL2CPP_EXTERN_C String_t* _stringLiteral29CEE6C774C2A6B13349634187AB40A780AAC0C0;
IL2CPP_EXTERN_C String_t* _stringLiteral2AF66D673D5606DC936304135AADFD7E6F41F5B9;
IL2CPP_EXTERN_C String_t* _stringLiteral2AFB4A15BB943C9B43BCD4B91C5D42F852B50C23;
IL2CPP_EXTERN_C String_t* _stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1;
IL2CPP_EXTERN_C String_t* _stringLiteral3307E245CDDD41589E1B19DE33F9663FAC31171F;
IL2CPP_EXTERN_C String_t* _stringLiteral38D8A462D47C64F68E51BD85F680B75C2FD01C8D;
IL2CPP_EXTERN_C String_t* _stringLiteral3B410239A5DA9E7F2D3ECE5DD4A2D021AB58C943;
IL2CPP_EXTERN_C String_t* _stringLiteral3BBACF750288F79E7BBD3BA07C3968948FA6AB7F;
IL2CPP_EXTERN_C String_t* _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5;
IL2CPP_EXTERN_C String_t* _stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral49A5AAB83859C60FC692064F7CA72853E8B6B189;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral5283890AF3274AE0B569B81DE511DDAFAA6A8E2B;
IL2CPP_EXTERN_C String_t* _stringLiteral58996B06CA854E96768D85CEA7C32D4965B0C68C;
IL2CPP_EXTERN_C String_t* _stringLiteral58ABB89C55D9FF13B0579EB00C732346BD685849;
IL2CPP_EXTERN_C String_t* _stringLiteral59E22C292F27E6EDE5644C7B811538F78C4ACAB0;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral5D29CA7C6B00DD1F9A49A832DAB607381505F8E9;
IL2CPP_EXTERN_C String_t* _stringLiteral5DA19BCBB223DAB0C347965DD4F20F5DC6CF93ED;
IL2CPP_EXTERN_C String_t* _stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563;
IL2CPP_EXTERN_C String_t* _stringLiteral671C1DF09673D5A10E0257535A26C5752938E413;
IL2CPP_EXTERN_C String_t* _stringLiteral6A719B16F03E18E6ED7CE19A6F58C0FEF4C3D978;
IL2CPP_EXTERN_C String_t* _stringLiteral763076C684EFEFA1B5A84D92C472EA6FF54AB95D;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870;
IL2CPP_EXTERN_C String_t* _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2;
IL2CPP_EXTERN_C String_t* _stringLiteral8F54CEEFF983948E06DCCCCFDA5A16768EC0E196;
IL2CPP_EXTERN_C String_t* _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1;
IL2CPP_EXTERN_C String_t* _stringLiteral93B98C3040BF26B2D68E7DD514A4EE37837430F3;
IL2CPP_EXTERN_C String_t* _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1;
IL2CPP_EXTERN_C String_t* _stringLiteralA11BC0AB16491B5DAEE99EAA33CF52FE6BC826E3;
IL2CPP_EXTERN_C String_t* _stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423;
IL2CPP_EXTERN_C String_t* _stringLiteralA57F692809412BBB13F764D9044820BC70823E64;
IL2CPP_EXTERN_C String_t* _stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907;
IL2CPP_EXTERN_C String_t* _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralB7FC20D01D11E8D793D9DCF4138B825F64D86676;
IL2CPP_EXTERN_C String_t* _stringLiteralB908FB7F7ED69D055FB898CBD750D2E37D443679;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC694605EDB4754DFB110F22B720D5DA5A045094A;
IL2CPP_EXTERN_C String_t* _stringLiteralC93B50DB5A16A30443D060A92DCF406D5233A92B;
IL2CPP_EXTERN_C String_t* _stringLiteralD78D112848D426A98044320516AE321116F74C50;
IL2CPP_EXTERN_C String_t* _stringLiteralD8975005FF8BAF05F5CE496C89F3918E82AEB419;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE1FF38972D317F4695BFAF4B7DACF42CBE04CCC6;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralEB72A6C142E7E7CA3E0AA267ECA659778C8218FE;
IL2CPP_EXTERN_C String_t* _stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralFAD7C7DBDDF9CF5538F439C2160072CE8F47C9AC;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mD5F29E323D31B110F267B79CAF2E456F4C77ECE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssetBundle_LoadAsset_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m63A1BA42E676CD4031EDA86CF3BFB9811E7A67B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mEFB8C40CB9606CC28E04D45092013ED9B5C70E9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m4EBF914F9BDA85AAF1017608946F83B5D0CB392E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m99F282CCCADABD18013C7C39BEB31BD5E60D3F2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m217D5D7E8406422DB793EC2B6F914101D73A7A56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2CACA29BDF60CD27C12E402A5C91A0E2954550A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_m3E3EE98663CCC30776E0944E1D251294B327691C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mCF2C6D0E8D0B7E12C53CF51A613D9A6545FC05F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonHelper_getJsonArray_TisRoot_tC9A64770600B9FA62079AE4160AB035C6597B841_m1DE7EEF7E1680755D305ECEAD640ED0231ABB922_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisRoot_t9023D5FD4704C6B8D12E0FAB93277288A86EBA21_mBAB79FAE1F8A5B181AA06A58CC710E95CC15C16D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m4BF4E7D9E3BE57B982A403C1AA5144962A065A75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m2642B52554EFD93A21D9591EC5FA523844453EB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m67797787DD90CC9BC8EC6EA8EA1E1760EF88302C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m8CAAD59303D53F10C2B7DDD2C88C2AF7D0F4ADC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mDA321A60902EA5DFB3B4B97E348FA9464F2DC50D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m5E4C1305E9BFAB895715B5636E5AA158528134EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m0D6661E1ED36AA5F2B55676BBB46999DCE36E380_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m31C26124B7BB19A0E5C12113701DDE5046272F70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4853D5C6453425D8A779EC4A51C90D5BE068A8F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m4FA2E1C601928A6BA4BBA78642C50486DBB164B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoadBundle_GetData_mF9291C829B6717D2336106491B59D877267D1F4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m253C81629213F944DA2E187C83D50559CCE75B89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBakeAsyncU3Ed__107_System_Collections_IEnumerator_Reset_mB663489A420331DFC88394DAE3E09A86A714647C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetDataCoroutineU3Ed__3_System_Collections_IEnumerator_Reset_m2E1D7C8592F314F8E3C413969C4F68DD2AAC75B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetDataCoroutineU3Ed__7_System_Collections_IEnumerator_Reset_m818C018F548889B11D07A7067A45F447C9A597E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPrintAsyncU3Ed__109_System_Collections_IEnumerator_Reset_m2FA7BB628F3594C50DD1F1097D7712595666D605_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShowDownloadProgressU3Ed__8_System_Collections_IEnumerator_Reset_m48AB56625779123D02ACE1FFC27A9C5237CA39DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStringifyAsyncU3Ed__112_System_Collections_IEnumerator_Reset_mC6FEAD91AB08C04448B4499AA642FE1633FD6E3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTestJsonU3Ed__14_System_Collections_IEnumerator_Reset_m54DE9C214BCD25588585E981E547FBA17292B2CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTestJsonU3Ed__2_System_Collections_IEnumerator_Reset_mA3A2FACA9564C3F3829DFA6390FDBAE6209C4835_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass14_0_U3CTestJsonU3Eb__0_mB68D5C9377C08E62143909B697C38A0CEADBE914_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRec_GetData_mE7DCB5321DA6A378EBDC0A48C0718D9B113803F4_RuntimeMethod_var;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;

struct ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct JSONObjectU5BU5D_tFB4FA33E0B9559355A1E9D5BFE4DBF2B68B7B96E;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316;
struct RootU5BU5D_t632F3B7EF48973C939950798ACE5B91D5E29EF30;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,JSONObject>
struct Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t8404F3DFD50F3CD5644CB25FC492541D1A3B8951* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t8394EC9CE67058B23CB1F3E043B24DE2EA46FFAA * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t8D8A56C06E996E3CFBAD59E6272CAA58669C6A95 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F, ___entries_1)); }
	inline EntryU5BU5D_t8404F3DFD50F3CD5644CB25FC492541D1A3B8951* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t8404F3DFD50F3CD5644CB25FC492541D1A3B8951** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t8404F3DFD50F3CD5644CB25FC492541D1A3B8951* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F, ___keys_7)); }
	inline KeyCollection_t8394EC9CE67058B23CB1F3E043B24DE2EA46FFAA * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t8394EC9CE67058B23CB1F3E043B24DE2EA46FFAA ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t8394EC9CE67058B23CB1F3E043B24DE2EA46FFAA * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F, ___values_8)); }
	inline ValueCollection_t8D8A56C06E996E3CFBAD59E6272CAA58669C6A95 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t8D8A56C06E996E3CFBAD59E6272CAA58669C6A95 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t8D8A56C06E996E3CFBAD59E6272CAA58669C6A95 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<JSONObject>
struct List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	JSONObjectU5BU5D_tFB4FA33E0B9559355A1E9D5BFE4DBF2B68B7B96E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D, ____items_1)); }
	inline JSONObjectU5BU5D_tFB4FA33E0B9559355A1E9D5BFE4DBF2B68B7B96E* get__items_1() const { return ____items_1; }
	inline JSONObjectU5BU5D_tFB4FA33E0B9559355A1E9D5BFE4DBF2B68B7B96E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(JSONObjectU5BU5D_tFB4FA33E0B9559355A1E9D5BFE4DBF2B68B7B96E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	JSONObjectU5BU5D_tFB4FA33E0B9559355A1E9D5BFE4DBF2B68B7B96E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_StaticFields, ____emptyArray_5)); }
	inline JSONObjectU5BU5D_tFB4FA33E0B9559355A1E9D5BFE4DBF2B68B7B96E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline JSONObjectU5BU5D_tFB4FA33E0B9559355A1E9D5BFE4DBF2B68B7B96E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(JSONObjectU5BU5D_tFB4FA33E0B9559355A1E9D5BFE4DBF2B68B7B96E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<ResposWeather/Weather>
struct List_1_t774C79438C4B75766B7464E65F132BA08F0BD74A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	WeatherU5BU5D_tB8DD1595B5DD6D96D0EAF325D8CED919F924DB32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t774C79438C4B75766B7464E65F132BA08F0BD74A, ____items_1)); }
	inline WeatherU5BU5D_tB8DD1595B5DD6D96D0EAF325D8CED919F924DB32* get__items_1() const { return ____items_1; }
	inline WeatherU5BU5D_tB8DD1595B5DD6D96D0EAF325D8CED919F924DB32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(WeatherU5BU5D_tB8DD1595B5DD6D96D0EAF325D8CED919F924DB32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t774C79438C4B75766B7464E65F132BA08F0BD74A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t774C79438C4B75766B7464E65F132BA08F0BD74A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t774C79438C4B75766B7464E65F132BA08F0BD74A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t774C79438C4B75766B7464E65F132BA08F0BD74A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	WeatherU5BU5D_tB8DD1595B5DD6D96D0EAF325D8CED919F924DB32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t774C79438C4B75766B7464E65F132BA08F0BD74A_StaticFields, ____emptyArray_5)); }
	inline WeatherU5BU5D_tB8DD1595B5DD6D96D0EAF325D8CED919F924DB32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline WeatherU5BU5D_tB8DD1595B5DD6D96D0EAF325D8CED919F924DB32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(WeatherU5BU5D_tB8DD1595B5DD6D96D0EAF325D8CED919F924DB32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// JSONTemplates
struct JSONTemplates_tF15C9B6DD3FAA1F2F943DE572F56D89BC273905D  : public RuntimeObject
{
public:

public:
};


// JsonHelper
struct JsonHelper_t6C3440889C2487EBAC7F6E08707670E4CE60DD97  : public RuntimeObject
{
public:

public:
};


// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// JSONObject/<BakeAsync>d__107
struct U3CBakeAsyncU3Ed__107_t8E955808B36BA1E7480E5519CC31A36000C8ECC8  : public RuntimeObject
{
public:
	// System.Int32 JSONObject/<BakeAsync>d__107::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object JSONObject/<BakeAsync>d__107::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int32 JSONObject/<BakeAsync>d__107::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// JSONObject JSONObject/<BakeAsync>d__107::<>4__this
	JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___U3CU3E4__this_3;
	// System.Collections.Generic.IEnumerator`1<System.String> JSONObject/<BakeAsync>d__107::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CBakeAsyncU3Ed__107_t8E955808B36BA1E7480E5519CC31A36000C8ECC8, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CBakeAsyncU3Ed__107_t8E955808B36BA1E7480E5519CC31A36000C8ECC8, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CBakeAsyncU3Ed__107_t8E955808B36BA1E7480E5519CC31A36000C8ECC8, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CBakeAsyncU3Ed__107_t8E955808B36BA1E7480E5519CC31A36000C8ECC8, ___U3CU3E4__this_3)); }
	inline JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3CBakeAsyncU3Ed__107_t8E955808B36BA1E7480E5519CC31A36000C8ECC8, ___U3CU3E7__wrap1_4)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_4), (void*)value);
	}
};


// JSONObject/<PrintAsync>d__109
struct U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7  : public RuntimeObject
{
public:
	// System.Int32 JSONObject/<PrintAsync>d__109::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String JSONObject/<PrintAsync>d__109::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 JSONObject/<PrintAsync>d__109::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// JSONObject JSONObject/<PrintAsync>d__109::<>4__this
	JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___U3CU3E4__this_3;
	// System.Boolean JSONObject/<PrintAsync>d__109::pretty
	bool ___pretty_4;
	// System.Boolean JSONObject/<PrintAsync>d__109::<>3__pretty
	bool ___U3CU3E3__pretty_5;
	// System.Text.StringBuilder JSONObject/<PrintAsync>d__109::<builder>5__2
	StringBuilder_t * ___U3CbuilderU3E5__2_6;
	// System.Collections.IEnumerator JSONObject/<PrintAsync>d__109::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7, ___U3CU3E2__current_1)); }
	inline String_t* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline String_t** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(String_t* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7, ___U3CU3E4__this_3)); }
	inline JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_pretty_4() { return static_cast<int32_t>(offsetof(U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7, ___pretty_4)); }
	inline bool get_pretty_4() const { return ___pretty_4; }
	inline bool* get_address_of_pretty_4() { return &___pretty_4; }
	inline void set_pretty_4(bool value)
	{
		___pretty_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__pretty_5() { return static_cast<int32_t>(offsetof(U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7, ___U3CU3E3__pretty_5)); }
	inline bool get_U3CU3E3__pretty_5() const { return ___U3CU3E3__pretty_5; }
	inline bool* get_address_of_U3CU3E3__pretty_5() { return &___U3CU3E3__pretty_5; }
	inline void set_U3CU3E3__pretty_5(bool value)
	{
		___U3CU3E3__pretty_5 = value;
	}

	inline static int32_t get_offset_of_U3CbuilderU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7, ___U3CbuilderU3E5__2_6)); }
	inline StringBuilder_t * get_U3CbuilderU3E5__2_6() const { return ___U3CbuilderU3E5__2_6; }
	inline StringBuilder_t ** get_address_of_U3CbuilderU3E5__2_6() { return &___U3CbuilderU3E5__2_6; }
	inline void set_U3CbuilderU3E5__2_6(StringBuilder_t * value)
	{
		___U3CbuilderU3E5__2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbuilderU3E5__2_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_7() { return static_cast<int32_t>(offsetof(U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7, ___U3CU3E7__wrap2_7)); }
	inline RuntimeObject* get_U3CU3E7__wrap2_7() const { return ___U3CU3E7__wrap2_7; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap2_7() { return &___U3CU3E7__wrap2_7; }
	inline void set_U3CU3E7__wrap2_7(RuntimeObject* value)
	{
		___U3CU3E7__wrap2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap2_7), (void*)value);
	}
};


// JSONObject/<StringifyAsync>d__112
struct U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124  : public RuntimeObject
{
public:
	// System.Int32 JSONObject/<StringifyAsync>d__112::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object JSONObject/<StringifyAsync>d__112::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int32 JSONObject/<StringifyAsync>d__112::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Int32 JSONObject/<StringifyAsync>d__112::depth
	int32_t ___depth_3;
	// System.Int32 JSONObject/<StringifyAsync>d__112::<>3__depth
	int32_t ___U3CU3E3__depth_4;
	// JSONObject JSONObject/<StringifyAsync>d__112::<>4__this
	JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___U3CU3E4__this_5;
	// System.Text.StringBuilder JSONObject/<StringifyAsync>d__112::builder
	StringBuilder_t * ___builder_6;
	// System.Text.StringBuilder JSONObject/<StringifyAsync>d__112::<>3__builder
	StringBuilder_t * ___U3CU3E3__builder_7;
	// System.Boolean JSONObject/<StringifyAsync>d__112::pretty
	bool ___pretty_8;
	// System.Boolean JSONObject/<StringifyAsync>d__112::<>3__pretty
	bool ___U3CU3E3__pretty_9;
	// System.Int32 JSONObject/<StringifyAsync>d__112::<i>5__2
	int32_t ___U3CiU3E5__2_10;
	// System.Collections.IEnumerator JSONObject/<StringifyAsync>d__112::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_11;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_depth_3() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124, ___depth_3)); }
	inline int32_t get_depth_3() const { return ___depth_3; }
	inline int32_t* get_address_of_depth_3() { return &___depth_3; }
	inline void set_depth_3(int32_t value)
	{
		___depth_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__depth_4() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124, ___U3CU3E3__depth_4)); }
	inline int32_t get_U3CU3E3__depth_4() const { return ___U3CU3E3__depth_4; }
	inline int32_t* get_address_of_U3CU3E3__depth_4() { return &___U3CU3E3__depth_4; }
	inline void set_U3CU3E3__depth_4(int32_t value)
	{
		___U3CU3E3__depth_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124, ___U3CU3E4__this_5)); }
	inline JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_builder_6() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124, ___builder_6)); }
	inline StringBuilder_t * get_builder_6() const { return ___builder_6; }
	inline StringBuilder_t ** get_address_of_builder_6() { return &___builder_6; }
	inline void set_builder_6(StringBuilder_t * value)
	{
		___builder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___builder_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__builder_7() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124, ___U3CU3E3__builder_7)); }
	inline StringBuilder_t * get_U3CU3E3__builder_7() const { return ___U3CU3E3__builder_7; }
	inline StringBuilder_t ** get_address_of_U3CU3E3__builder_7() { return &___U3CU3E3__builder_7; }
	inline void set_U3CU3E3__builder_7(StringBuilder_t * value)
	{
		___U3CU3E3__builder_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__builder_7), (void*)value);
	}

	inline static int32_t get_offset_of_pretty_8() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124, ___pretty_8)); }
	inline bool get_pretty_8() const { return ___pretty_8; }
	inline bool* get_address_of_pretty_8() { return &___pretty_8; }
	inline void set_pretty_8(bool value)
	{
		___pretty_8 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__pretty_9() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124, ___U3CU3E3__pretty_9)); }
	inline bool get_U3CU3E3__pretty_9() const { return ___U3CU3E3__pretty_9; }
	inline bool* get_address_of_U3CU3E3__pretty_9() { return &___U3CU3E3__pretty_9; }
	inline void set_U3CU3E3__pretty_9(bool value)
	{
		___U3CU3E3__pretty_9 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_10() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124, ___U3CiU3E5__2_10)); }
	inline int32_t get_U3CiU3E5__2_10() const { return ___U3CiU3E5__2_10; }
	inline int32_t* get_address_of_U3CiU3E5__2_10() { return &___U3CiU3E5__2_10; }
	inline void set_U3CiU3E5__2_10(int32_t value)
	{
		___U3CiU3E5__2_10 = value;
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_11() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124, ___U3CU3E7__wrap2_11)); }
	inline RuntimeObject* get_U3CU3E7__wrap2_11() const { return ___U3CU3E7__wrap2_11; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap2_11() { return &___U3CU3E7__wrap2_11; }
	inline void set_U3CU3E7__wrap2_11(RuntimeObject* value)
	{
		___U3CU3E7__wrap2_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap2_11), (void*)value);
	}
};


// LoadBundle/<GetDataCoroutine>d__3
struct U3CGetDataCoroutineU3Ed__3_t1DB663A49515F78190F39164B3EA3A56BB70159C  : public RuntimeObject
{
public:
	// System.Int32 LoadBundle/<GetDataCoroutine>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LoadBundle/<GetDataCoroutine>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// LoadBundle LoadBundle/<GetDataCoroutine>d__3::<>4__this
	LoadBundle_tCCF56ED79520467E367004790C0CE3B5E1EEE9AC * ___U3CU3E4__this_2;
	// UnityEngine.Networking.UnityWebRequest LoadBundle/<GetDataCoroutine>d__3::<rec>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CrecU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetDataCoroutineU3Ed__3_t1DB663A49515F78190F39164B3EA3A56BB70159C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetDataCoroutineU3Ed__3_t1DB663A49515F78190F39164B3EA3A56BB70159C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetDataCoroutineU3Ed__3_t1DB663A49515F78190F39164B3EA3A56BB70159C, ___U3CU3E4__this_2)); }
	inline LoadBundle_tCCF56ED79520467E367004790C0CE3B5E1EEE9AC * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline LoadBundle_tCCF56ED79520467E367004790C0CE3B5E1EEE9AC ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(LoadBundle_tCCF56ED79520467E367004790C0CE3B5E1EEE9AC * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrecU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CGetDataCoroutineU3Ed__3_t1DB663A49515F78190F39164B3EA3A56BB70159C, ___U3CrecU3E5__2_3)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CrecU3E5__2_3() const { return ___U3CrecU3E5__2_3; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CrecU3E5__2_3() { return &___U3CrecU3E5__2_3; }
	inline void set_U3CrecU3E5__2_3(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CrecU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrecU3E5__2_3), (void*)value);
	}
};


// Loading/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_tF2FB2E5FB66F24FBD986C98569C62F25795EEAC0  : public RuntimeObject
{
public:
	// System.String Loading/<>c__DisplayClass14_0::Type
	String_t* ___Type_0;
	// System.String Loading/<>c__DisplayClass14_0::text
	String_t* ___text_1;
	// System.Int32 Loading/<>c__DisplayClass14_0::t
	int32_t ___t_2;
	// Loading Loading/<>c__DisplayClass14_0::<>4__this
	Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_tF2FB2E5FB66F24FBD986C98569C62F25795EEAC0, ___Type_0)); }
	inline String_t* get_Type_0() const { return ___Type_0; }
	inline String_t** get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(String_t* value)
	{
		___Type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Type_0), (void*)value);
	}

	inline static int32_t get_offset_of_text_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_tF2FB2E5FB66F24FBD986C98569C62F25795EEAC0, ___text_1)); }
	inline String_t* get_text_1() const { return ___text_1; }
	inline String_t** get_address_of_text_1() { return &___text_1; }
	inline void set_text_1(String_t* value)
	{
		___text_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_1), (void*)value);
	}

	inline static int32_t get_offset_of_t_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_tF2FB2E5FB66F24FBD986C98569C62F25795EEAC0, ___t_2)); }
	inline int32_t get_t_2() const { return ___t_2; }
	inline int32_t* get_address_of_t_2() { return &___t_2; }
	inline void set_t_2(int32_t value)
	{
		___t_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_tF2FB2E5FB66F24FBD986C98569C62F25795EEAC0, ___U3CU3E4__this_3)); }
	inline Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// Loading/<TestJson>d__14
struct U3CTestJsonU3Ed__14_t0E0F080D1E6BE65AE94DA84D527DC6AE18884C84  : public RuntimeObject
{
public:
	// System.Int32 Loading/<TestJson>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Loading/<TestJson>d__14::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.String Loading/<TestJson>d__14::Url
	String_t* ___Url_2;
	// Loading Loading/<TestJson>d__14::<>4__this
	Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 * ___U3CU3E4__this_3;
	// UnityEngine.Networking.UnityWebRequest Loading/<TestJson>d__14::<rec>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CrecU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTestJsonU3Ed__14_t0E0F080D1E6BE65AE94DA84D527DC6AE18884C84, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTestJsonU3Ed__14_t0E0F080D1E6BE65AE94DA84D527DC6AE18884C84, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_Url_2() { return static_cast<int32_t>(offsetof(U3CTestJsonU3Ed__14_t0E0F080D1E6BE65AE94DA84D527DC6AE18884C84, ___Url_2)); }
	inline String_t* get_Url_2() const { return ___Url_2; }
	inline String_t** get_address_of_Url_2() { return &___Url_2; }
	inline void set_Url_2(String_t* value)
	{
		___Url_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Url_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CTestJsonU3Ed__14_t0E0F080D1E6BE65AE94DA84D527DC6AE18884C84, ___U3CU3E4__this_3)); }
	inline Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrecU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CTestJsonU3Ed__14_t0E0F080D1E6BE65AE94DA84D527DC6AE18884C84, ___U3CrecU3E5__2_4)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CrecU3E5__2_4() const { return ___U3CrecU3E5__2_4; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CrecU3E5__2_4() { return &___U3CrecU3E5__2_4; }
	inline void set_U3CrecU3E5__2_4(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CrecU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrecU3E5__2_4), (void*)value);
	}
};


// ResposWeather/Clouds
struct Clouds_t7DAE7314B38FF4F1C2BB162D9FB52CE7128D300A  : public RuntimeObject
{
public:
	// System.Int32 ResposWeather/Clouds::<all>k__BackingField
	int32_t ___U3CallU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CallU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Clouds_t7DAE7314B38FF4F1C2BB162D9FB52CE7128D300A, ___U3CallU3Ek__BackingField_0)); }
	inline int32_t get_U3CallU3Ek__BackingField_0() const { return ___U3CallU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CallU3Ek__BackingField_0() { return &___U3CallU3Ek__BackingField_0; }
	inline void set_U3CallU3Ek__BackingField_0(int32_t value)
	{
		___U3CallU3Ek__BackingField_0 = value;
	}
};


// ResposWeather/Coord
struct Coord_t327D69B3A98A66AF89AE0D823C4FC094097B9FA8  : public RuntimeObject
{
public:
	// System.Double ResposWeather/Coord::<lon>k__BackingField
	double ___U3ClonU3Ek__BackingField_0;
	// System.Double ResposWeather/Coord::<lat>k__BackingField
	double ___U3ClatU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3ClonU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Coord_t327D69B3A98A66AF89AE0D823C4FC094097B9FA8, ___U3ClonU3Ek__BackingField_0)); }
	inline double get_U3ClonU3Ek__BackingField_0() const { return ___U3ClonU3Ek__BackingField_0; }
	inline double* get_address_of_U3ClonU3Ek__BackingField_0() { return &___U3ClonU3Ek__BackingField_0; }
	inline void set_U3ClonU3Ek__BackingField_0(double value)
	{
		___U3ClonU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3ClatU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Coord_t327D69B3A98A66AF89AE0D823C4FC094097B9FA8, ___U3ClatU3Ek__BackingField_1)); }
	inline double get_U3ClatU3Ek__BackingField_1() const { return ___U3ClatU3Ek__BackingField_1; }
	inline double* get_address_of_U3ClatU3Ek__BackingField_1() { return &___U3ClatU3Ek__BackingField_1; }
	inline void set_U3ClatU3Ek__BackingField_1(double value)
	{
		___U3ClatU3Ek__BackingField_1 = value;
	}
};


// ResposWeather/Main
struct Main_t7F967EE4D57213963EC2DB4BD709C31F5BC93B0E  : public RuntimeObject
{
public:
	// System.Double ResposWeather/Main::<temp>k__BackingField
	double ___U3CtempU3Ek__BackingField_0;
	// System.Double ResposWeather/Main::<feels_like>k__BackingField
	double ___U3Cfeels_likeU3Ek__BackingField_1;
	// System.Double ResposWeather/Main::<temp_min>k__BackingField
	double ___U3Ctemp_minU3Ek__BackingField_2;
	// System.Double ResposWeather/Main::<temp_max>k__BackingField
	double ___U3Ctemp_maxU3Ek__BackingField_3;
	// System.Int32 ResposWeather/Main::<pressure>k__BackingField
	int32_t ___U3CpressureU3Ek__BackingField_4;
	// System.Int32 ResposWeather/Main::<humidity>k__BackingField
	int32_t ___U3ChumidityU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CtempU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Main_t7F967EE4D57213963EC2DB4BD709C31F5BC93B0E, ___U3CtempU3Ek__BackingField_0)); }
	inline double get_U3CtempU3Ek__BackingField_0() const { return ___U3CtempU3Ek__BackingField_0; }
	inline double* get_address_of_U3CtempU3Ek__BackingField_0() { return &___U3CtempU3Ek__BackingField_0; }
	inline void set_U3CtempU3Ek__BackingField_0(double value)
	{
		___U3CtempU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3Cfeels_likeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Main_t7F967EE4D57213963EC2DB4BD709C31F5BC93B0E, ___U3Cfeels_likeU3Ek__BackingField_1)); }
	inline double get_U3Cfeels_likeU3Ek__BackingField_1() const { return ___U3Cfeels_likeU3Ek__BackingField_1; }
	inline double* get_address_of_U3Cfeels_likeU3Ek__BackingField_1() { return &___U3Cfeels_likeU3Ek__BackingField_1; }
	inline void set_U3Cfeels_likeU3Ek__BackingField_1(double value)
	{
		___U3Cfeels_likeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3Ctemp_minU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Main_t7F967EE4D57213963EC2DB4BD709C31F5BC93B0E, ___U3Ctemp_minU3Ek__BackingField_2)); }
	inline double get_U3Ctemp_minU3Ek__BackingField_2() const { return ___U3Ctemp_minU3Ek__BackingField_2; }
	inline double* get_address_of_U3Ctemp_minU3Ek__BackingField_2() { return &___U3Ctemp_minU3Ek__BackingField_2; }
	inline void set_U3Ctemp_minU3Ek__BackingField_2(double value)
	{
		___U3Ctemp_minU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3Ctemp_maxU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Main_t7F967EE4D57213963EC2DB4BD709C31F5BC93B0E, ___U3Ctemp_maxU3Ek__BackingField_3)); }
	inline double get_U3Ctemp_maxU3Ek__BackingField_3() const { return ___U3Ctemp_maxU3Ek__BackingField_3; }
	inline double* get_address_of_U3Ctemp_maxU3Ek__BackingField_3() { return &___U3Ctemp_maxU3Ek__BackingField_3; }
	inline void set_U3Ctemp_maxU3Ek__BackingField_3(double value)
	{
		___U3Ctemp_maxU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CpressureU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Main_t7F967EE4D57213963EC2DB4BD709C31F5BC93B0E, ___U3CpressureU3Ek__BackingField_4)); }
	inline int32_t get_U3CpressureU3Ek__BackingField_4() const { return ___U3CpressureU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CpressureU3Ek__BackingField_4() { return &___U3CpressureU3Ek__BackingField_4; }
	inline void set_U3CpressureU3Ek__BackingField_4(int32_t value)
	{
		___U3CpressureU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3ChumidityU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Main_t7F967EE4D57213963EC2DB4BD709C31F5BC93B0E, ___U3ChumidityU3Ek__BackingField_5)); }
	inline int32_t get_U3ChumidityU3Ek__BackingField_5() const { return ___U3ChumidityU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3ChumidityU3Ek__BackingField_5() { return &___U3ChumidityU3Ek__BackingField_5; }
	inline void set_U3ChumidityU3Ek__BackingField_5(int32_t value)
	{
		___U3ChumidityU3Ek__BackingField_5 = value;
	}
};


// ResposWeather/Root
struct Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC  : public RuntimeObject
{
public:
	// ResposWeather/Coord ResposWeather/Root::<coord>k__BackingField
	Coord_t327D69B3A98A66AF89AE0D823C4FC094097B9FA8 * ___U3CcoordU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<ResposWeather/Weather> ResposWeather/Root::<weather>k__BackingField
	List_1_t774C79438C4B75766B7464E65F132BA08F0BD74A * ___U3CweatherU3Ek__BackingField_1;
	// System.String ResposWeather/Root::<base>k__BackingField
	String_t* ___U3CbaseU3Ek__BackingField_2;
	// ResposWeather/Main ResposWeather/Root::<main>k__BackingField
	Main_t7F967EE4D57213963EC2DB4BD709C31F5BC93B0E * ___U3CmainU3Ek__BackingField_3;
	// System.Int32 ResposWeather/Root::<visibility>k__BackingField
	int32_t ___U3CvisibilityU3Ek__BackingField_4;
	// ResposWeather/Wind ResposWeather/Root::<wind>k__BackingField
	Wind_t39FDA91D941BFD913D074304D03C907489ED6334 * ___U3CwindU3Ek__BackingField_5;
	// ResposWeather/Clouds ResposWeather/Root::<clouds>k__BackingField
	Clouds_t7DAE7314B38FF4F1C2BB162D9FB52CE7128D300A * ___U3CcloudsU3Ek__BackingField_6;
	// System.Int32 ResposWeather/Root::<dt>k__BackingField
	int32_t ___U3CdtU3Ek__BackingField_7;
	// ResposWeather/Sys ResposWeather/Root::<sys>k__BackingField
	Sys_t564A056DB449365FEFEEB84F10D06C20124F7D60 * ___U3CsysU3Ek__BackingField_8;
	// System.Int32 ResposWeather/Root::<timezone>k__BackingField
	int32_t ___U3CtimezoneU3Ek__BackingField_9;
	// System.Int32 ResposWeather/Root::<id>k__BackingField
	int32_t ___U3CidU3Ek__BackingField_10;
	// System.String ResposWeather/Root::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_11;
	// System.Int32 ResposWeather/Root::<cod>k__BackingField
	int32_t ___U3CcodU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_U3CcoordU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC, ___U3CcoordU3Ek__BackingField_0)); }
	inline Coord_t327D69B3A98A66AF89AE0D823C4FC094097B9FA8 * get_U3CcoordU3Ek__BackingField_0() const { return ___U3CcoordU3Ek__BackingField_0; }
	inline Coord_t327D69B3A98A66AF89AE0D823C4FC094097B9FA8 ** get_address_of_U3CcoordU3Ek__BackingField_0() { return &___U3CcoordU3Ek__BackingField_0; }
	inline void set_U3CcoordU3Ek__BackingField_0(Coord_t327D69B3A98A66AF89AE0D823C4FC094097B9FA8 * value)
	{
		___U3CcoordU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcoordU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CweatherU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC, ___U3CweatherU3Ek__BackingField_1)); }
	inline List_1_t774C79438C4B75766B7464E65F132BA08F0BD74A * get_U3CweatherU3Ek__BackingField_1() const { return ___U3CweatherU3Ek__BackingField_1; }
	inline List_1_t774C79438C4B75766B7464E65F132BA08F0BD74A ** get_address_of_U3CweatherU3Ek__BackingField_1() { return &___U3CweatherU3Ek__BackingField_1; }
	inline void set_U3CweatherU3Ek__BackingField_1(List_1_t774C79438C4B75766B7464E65F132BA08F0BD74A * value)
	{
		___U3CweatherU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CweatherU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbaseU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC, ___U3CbaseU3Ek__BackingField_2)); }
	inline String_t* get_U3CbaseU3Ek__BackingField_2() const { return ___U3CbaseU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CbaseU3Ek__BackingField_2() { return &___U3CbaseU3Ek__BackingField_2; }
	inline void set_U3CbaseU3Ek__BackingField_2(String_t* value)
	{
		___U3CbaseU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbaseU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmainU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC, ___U3CmainU3Ek__BackingField_3)); }
	inline Main_t7F967EE4D57213963EC2DB4BD709C31F5BC93B0E * get_U3CmainU3Ek__BackingField_3() const { return ___U3CmainU3Ek__BackingField_3; }
	inline Main_t7F967EE4D57213963EC2DB4BD709C31F5BC93B0E ** get_address_of_U3CmainU3Ek__BackingField_3() { return &___U3CmainU3Ek__BackingField_3; }
	inline void set_U3CmainU3Ek__BackingField_3(Main_t7F967EE4D57213963EC2DB4BD709C31F5BC93B0E * value)
	{
		___U3CmainU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmainU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CvisibilityU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC, ___U3CvisibilityU3Ek__BackingField_4)); }
	inline int32_t get_U3CvisibilityU3Ek__BackingField_4() const { return ___U3CvisibilityU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CvisibilityU3Ek__BackingField_4() { return &___U3CvisibilityU3Ek__BackingField_4; }
	inline void set_U3CvisibilityU3Ek__BackingField_4(int32_t value)
	{
		___U3CvisibilityU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CwindU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC, ___U3CwindU3Ek__BackingField_5)); }
	inline Wind_t39FDA91D941BFD913D074304D03C907489ED6334 * get_U3CwindU3Ek__BackingField_5() const { return ___U3CwindU3Ek__BackingField_5; }
	inline Wind_t39FDA91D941BFD913D074304D03C907489ED6334 ** get_address_of_U3CwindU3Ek__BackingField_5() { return &___U3CwindU3Ek__BackingField_5; }
	inline void set_U3CwindU3Ek__BackingField_5(Wind_t39FDA91D941BFD913D074304D03C907489ED6334 * value)
	{
		___U3CwindU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwindU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcloudsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC, ___U3CcloudsU3Ek__BackingField_6)); }
	inline Clouds_t7DAE7314B38FF4F1C2BB162D9FB52CE7128D300A * get_U3CcloudsU3Ek__BackingField_6() const { return ___U3CcloudsU3Ek__BackingField_6; }
	inline Clouds_t7DAE7314B38FF4F1C2BB162D9FB52CE7128D300A ** get_address_of_U3CcloudsU3Ek__BackingField_6() { return &___U3CcloudsU3Ek__BackingField_6; }
	inline void set_U3CcloudsU3Ek__BackingField_6(Clouds_t7DAE7314B38FF4F1C2BB162D9FB52CE7128D300A * value)
	{
		___U3CcloudsU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcloudsU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdtU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC, ___U3CdtU3Ek__BackingField_7)); }
	inline int32_t get_U3CdtU3Ek__BackingField_7() const { return ___U3CdtU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CdtU3Ek__BackingField_7() { return &___U3CdtU3Ek__BackingField_7; }
	inline void set_U3CdtU3Ek__BackingField_7(int32_t value)
	{
		___U3CdtU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CsysU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC, ___U3CsysU3Ek__BackingField_8)); }
	inline Sys_t564A056DB449365FEFEEB84F10D06C20124F7D60 * get_U3CsysU3Ek__BackingField_8() const { return ___U3CsysU3Ek__BackingField_8; }
	inline Sys_t564A056DB449365FEFEEB84F10D06C20124F7D60 ** get_address_of_U3CsysU3Ek__BackingField_8() { return &___U3CsysU3Ek__BackingField_8; }
	inline void set_U3CsysU3Ek__BackingField_8(Sys_t564A056DB449365FEFEEB84F10D06C20124F7D60 * value)
	{
		___U3CsysU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsysU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtimezoneU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC, ___U3CtimezoneU3Ek__BackingField_9)); }
	inline int32_t get_U3CtimezoneU3Ek__BackingField_9() const { return ___U3CtimezoneU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CtimezoneU3Ek__BackingField_9() { return &___U3CtimezoneU3Ek__BackingField_9; }
	inline void set_U3CtimezoneU3Ek__BackingField_9(int32_t value)
	{
		___U3CtimezoneU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC, ___U3CidU3Ek__BackingField_10)); }
	inline int32_t get_U3CidU3Ek__BackingField_10() const { return ___U3CidU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CidU3Ek__BackingField_10() { return &___U3CidU3Ek__BackingField_10; }
	inline void set_U3CidU3Ek__BackingField_10(int32_t value)
	{
		___U3CidU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC, ___U3CnameU3Ek__BackingField_11)); }
	inline String_t* get_U3CnameU3Ek__BackingField_11() const { return ___U3CnameU3Ek__BackingField_11; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_11() { return &___U3CnameU3Ek__BackingField_11; }
	inline void set_U3CnameU3Ek__BackingField_11(String_t* value)
	{
		___U3CnameU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcodU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC, ___U3CcodU3Ek__BackingField_12)); }
	inline int32_t get_U3CcodU3Ek__BackingField_12() const { return ___U3CcodU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CcodU3Ek__BackingField_12() { return &___U3CcodU3Ek__BackingField_12; }
	inline void set_U3CcodU3Ek__BackingField_12(int32_t value)
	{
		___U3CcodU3Ek__BackingField_12 = value;
	}
};


// ResposWeather/Sys
struct Sys_t564A056DB449365FEFEEB84F10D06C20124F7D60  : public RuntimeObject
{
public:
	// System.Int32 ResposWeather/Sys::<type>k__BackingField
	int32_t ___U3CtypeU3Ek__BackingField_0;
	// System.Int32 ResposWeather/Sys::<id>k__BackingField
	int32_t ___U3CidU3Ek__BackingField_1;
	// System.Double ResposWeather/Sys::<message>k__BackingField
	double ___U3CmessageU3Ek__BackingField_2;
	// System.String ResposWeather/Sys::<country>k__BackingField
	String_t* ___U3CcountryU3Ek__BackingField_3;
	// System.Int32 ResposWeather/Sys::<sunrise>k__BackingField
	int32_t ___U3CsunriseU3Ek__BackingField_4;
	// System.Int32 ResposWeather/Sys::<sunset>k__BackingField
	int32_t ___U3CsunsetU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Sys_t564A056DB449365FEFEEB84F10D06C20124F7D60, ___U3CtypeU3Ek__BackingField_0)); }
	inline int32_t get_U3CtypeU3Ek__BackingField_0() const { return ___U3CtypeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CtypeU3Ek__BackingField_0() { return &___U3CtypeU3Ek__BackingField_0; }
	inline void set_U3CtypeU3Ek__BackingField_0(int32_t value)
	{
		___U3CtypeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Sys_t564A056DB449365FEFEEB84F10D06C20124F7D60, ___U3CidU3Ek__BackingField_1)); }
	inline int32_t get_U3CidU3Ek__BackingField_1() const { return ___U3CidU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CidU3Ek__BackingField_1() { return &___U3CidU3Ek__BackingField_1; }
	inline void set_U3CidU3Ek__BackingField_1(int32_t value)
	{
		___U3CidU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CmessageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Sys_t564A056DB449365FEFEEB84F10D06C20124F7D60, ___U3CmessageU3Ek__BackingField_2)); }
	inline double get_U3CmessageU3Ek__BackingField_2() const { return ___U3CmessageU3Ek__BackingField_2; }
	inline double* get_address_of_U3CmessageU3Ek__BackingField_2() { return &___U3CmessageU3Ek__BackingField_2; }
	inline void set_U3CmessageU3Ek__BackingField_2(double value)
	{
		___U3CmessageU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CcountryU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Sys_t564A056DB449365FEFEEB84F10D06C20124F7D60, ___U3CcountryU3Ek__BackingField_3)); }
	inline String_t* get_U3CcountryU3Ek__BackingField_3() const { return ___U3CcountryU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CcountryU3Ek__BackingField_3() { return &___U3CcountryU3Ek__BackingField_3; }
	inline void set_U3CcountryU3Ek__BackingField_3(String_t* value)
	{
		___U3CcountryU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcountryU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsunriseU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Sys_t564A056DB449365FEFEEB84F10D06C20124F7D60, ___U3CsunriseU3Ek__BackingField_4)); }
	inline int32_t get_U3CsunriseU3Ek__BackingField_4() const { return ___U3CsunriseU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CsunriseU3Ek__BackingField_4() { return &___U3CsunriseU3Ek__BackingField_4; }
	inline void set_U3CsunriseU3Ek__BackingField_4(int32_t value)
	{
		___U3CsunriseU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsunsetU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Sys_t564A056DB449365FEFEEB84F10D06C20124F7D60, ___U3CsunsetU3Ek__BackingField_5)); }
	inline int32_t get_U3CsunsetU3Ek__BackingField_5() const { return ___U3CsunsetU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CsunsetU3Ek__BackingField_5() { return &___U3CsunsetU3Ek__BackingField_5; }
	inline void set_U3CsunsetU3Ek__BackingField_5(int32_t value)
	{
		___U3CsunsetU3Ek__BackingField_5 = value;
	}
};


// ResposWeather/Weather
struct Weather_t8395B1725DA8287B2A3602260F265B80BEDCB649  : public RuntimeObject
{
public:
	// System.Int32 ResposWeather/Weather::<id>k__BackingField
	int32_t ___U3CidU3Ek__BackingField_0;
	// System.String ResposWeather/Weather::<main>k__BackingField
	String_t* ___U3CmainU3Ek__BackingField_1;
	// System.String ResposWeather/Weather::<description>k__BackingField
	String_t* ___U3CdescriptionU3Ek__BackingField_2;
	// System.String ResposWeather/Weather::<icon>k__BackingField
	String_t* ___U3CiconU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Weather_t8395B1725DA8287B2A3602260F265B80BEDCB649, ___U3CidU3Ek__BackingField_0)); }
	inline int32_t get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(int32_t value)
	{
		___U3CidU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CmainU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Weather_t8395B1725DA8287B2A3602260F265B80BEDCB649, ___U3CmainU3Ek__BackingField_1)); }
	inline String_t* get_U3CmainU3Ek__BackingField_1() const { return ___U3CmainU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CmainU3Ek__BackingField_1() { return &___U3CmainU3Ek__BackingField_1; }
	inline void set_U3CmainU3Ek__BackingField_1(String_t* value)
	{
		___U3CmainU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmainU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdescriptionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Weather_t8395B1725DA8287B2A3602260F265B80BEDCB649, ___U3CdescriptionU3Ek__BackingField_2)); }
	inline String_t* get_U3CdescriptionU3Ek__BackingField_2() const { return ___U3CdescriptionU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CdescriptionU3Ek__BackingField_2() { return &___U3CdescriptionU3Ek__BackingField_2; }
	inline void set_U3CdescriptionU3Ek__BackingField_2(String_t* value)
	{
		___U3CdescriptionU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdescriptionU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiconU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Weather_t8395B1725DA8287B2A3602260F265B80BEDCB649, ___U3CiconU3Ek__BackingField_3)); }
	inline String_t* get_U3CiconU3Ek__BackingField_3() const { return ___U3CiconU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CiconU3Ek__BackingField_3() { return &___U3CiconU3Ek__BackingField_3; }
	inline void set_U3CiconU3Ek__BackingField_3(String_t* value)
	{
		___U3CiconU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CiconU3Ek__BackingField_3), (void*)value);
	}
};


// ResposWeather/Wind
struct Wind_t39FDA91D941BFD913D074304D03C907489ED6334  : public RuntimeObject
{
public:
	// System.Double ResposWeather/Wind::<speed>k__BackingField
	double ___U3CspeedU3Ek__BackingField_0;
	// System.Int32 ResposWeather/Wind::<deg>k__BackingField
	int32_t ___U3CdegU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CspeedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Wind_t39FDA91D941BFD913D074304D03C907489ED6334, ___U3CspeedU3Ek__BackingField_0)); }
	inline double get_U3CspeedU3Ek__BackingField_0() const { return ___U3CspeedU3Ek__BackingField_0; }
	inline double* get_address_of_U3CspeedU3Ek__BackingField_0() { return &___U3CspeedU3Ek__BackingField_0; }
	inline void set_U3CspeedU3Ek__BackingField_0(double value)
	{
		___U3CspeedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CdegU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Wind_t39FDA91D941BFD913D074304D03C907489ED6334, ___U3CdegU3Ek__BackingField_1)); }
	inline int32_t get_U3CdegU3Ek__BackingField_1() const { return ___U3CdegU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CdegU3Ek__BackingField_1() { return &___U3CdegU3Ek__BackingField_1; }
	inline void set_U3CdegU3Ek__BackingField_1(int32_t value)
	{
		___U3CdegU3Ek__BackingField_1 = value;
	}
};


// Test/Root
struct Root_t9023D5FD4704C6B8D12E0FAB93277288A86EBA21  : public RuntimeObject
{
public:
	// System.String Test/Root::status
	String_t* ___status_0;
	// System.String Test/Root::country
	String_t* ___country_1;
	// System.String Test/Root::countryCode
	String_t* ___countryCode_2;
	// System.String Test/Root::region
	String_t* ___region_3;
	// System.String Test/Root::regionName
	String_t* ___regionName_4;
	// System.String Test/Root::city
	String_t* ___city_5;
	// System.String Test/Root::zip
	String_t* ___zip_6;
	// System.Double Test/Root::lat
	double ___lat_7;
	// System.Double Test/Root::lon
	double ___lon_8;
	// System.String Test/Root::timezone
	String_t* ___timezone_9;
	// System.String Test/Root::isp
	String_t* ___isp_10;
	// System.String Test/Root::org
	String_t* ___org_11;
	// System.String Test/Root::as
	String_t* ___as_12;
	// System.String Test/Root::query
	String_t* ___query_13;

public:
	inline static int32_t get_offset_of_status_0() { return static_cast<int32_t>(offsetof(Root_t9023D5FD4704C6B8D12E0FAB93277288A86EBA21, ___status_0)); }
	inline String_t* get_status_0() const { return ___status_0; }
	inline String_t** get_address_of_status_0() { return &___status_0; }
	inline void set_status_0(String_t* value)
	{
		___status_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___status_0), (void*)value);
	}

	inline static int32_t get_offset_of_country_1() { return static_cast<int32_t>(offsetof(Root_t9023D5FD4704C6B8D12E0FAB93277288A86EBA21, ___country_1)); }
	inline String_t* get_country_1() const { return ___country_1; }
	inline String_t** get_address_of_country_1() { return &___country_1; }
	inline void set_country_1(String_t* value)
	{
		___country_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___country_1), (void*)value);
	}

	inline static int32_t get_offset_of_countryCode_2() { return static_cast<int32_t>(offsetof(Root_t9023D5FD4704C6B8D12E0FAB93277288A86EBA21, ___countryCode_2)); }
	inline String_t* get_countryCode_2() const { return ___countryCode_2; }
	inline String_t** get_address_of_countryCode_2() { return &___countryCode_2; }
	inline void set_countryCode_2(String_t* value)
	{
		___countryCode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___countryCode_2), (void*)value);
	}

	inline static int32_t get_offset_of_region_3() { return static_cast<int32_t>(offsetof(Root_t9023D5FD4704C6B8D12E0FAB93277288A86EBA21, ___region_3)); }
	inline String_t* get_region_3() const { return ___region_3; }
	inline String_t** get_address_of_region_3() { return &___region_3; }
	inline void set_region_3(String_t* value)
	{
		___region_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___region_3), (void*)value);
	}

	inline static int32_t get_offset_of_regionName_4() { return static_cast<int32_t>(offsetof(Root_t9023D5FD4704C6B8D12E0FAB93277288A86EBA21, ___regionName_4)); }
	inline String_t* get_regionName_4() const { return ___regionName_4; }
	inline String_t** get_address_of_regionName_4() { return &___regionName_4; }
	inline void set_regionName_4(String_t* value)
	{
		___regionName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___regionName_4), (void*)value);
	}

	inline static int32_t get_offset_of_city_5() { return static_cast<int32_t>(offsetof(Root_t9023D5FD4704C6B8D12E0FAB93277288A86EBA21, ___city_5)); }
	inline String_t* get_city_5() const { return ___city_5; }
	inline String_t** get_address_of_city_5() { return &___city_5; }
	inline void set_city_5(String_t* value)
	{
		___city_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___city_5), (void*)value);
	}

	inline static int32_t get_offset_of_zip_6() { return static_cast<int32_t>(offsetof(Root_t9023D5FD4704C6B8D12E0FAB93277288A86EBA21, ___zip_6)); }
	inline String_t* get_zip_6() const { return ___zip_6; }
	inline String_t** get_address_of_zip_6() { return &___zip_6; }
	inline void set_zip_6(String_t* value)
	{
		___zip_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___zip_6), (void*)value);
	}

	inline static int32_t get_offset_of_lat_7() { return static_cast<int32_t>(offsetof(Root_t9023D5FD4704C6B8D12E0FAB93277288A86EBA21, ___lat_7)); }
	inline double get_lat_7() const { return ___lat_7; }
	inline double* get_address_of_lat_7() { return &___lat_7; }
	inline void set_lat_7(double value)
	{
		___lat_7 = value;
	}

	inline static int32_t get_offset_of_lon_8() { return static_cast<int32_t>(offsetof(Root_t9023D5FD4704C6B8D12E0FAB93277288A86EBA21, ___lon_8)); }
	inline double get_lon_8() const { return ___lon_8; }
	inline double* get_address_of_lon_8() { return &___lon_8; }
	inline void set_lon_8(double value)
	{
		___lon_8 = value;
	}

	inline static int32_t get_offset_of_timezone_9() { return static_cast<int32_t>(offsetof(Root_t9023D5FD4704C6B8D12E0FAB93277288A86EBA21, ___timezone_9)); }
	inline String_t* get_timezone_9() const { return ___timezone_9; }
	inline String_t** get_address_of_timezone_9() { return &___timezone_9; }
	inline void set_timezone_9(String_t* value)
	{
		___timezone_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timezone_9), (void*)value);
	}

	inline static int32_t get_offset_of_isp_10() { return static_cast<int32_t>(offsetof(Root_t9023D5FD4704C6B8D12E0FAB93277288A86EBA21, ___isp_10)); }
	inline String_t* get_isp_10() const { return ___isp_10; }
	inline String_t** get_address_of_isp_10() { return &___isp_10; }
	inline void set_isp_10(String_t* value)
	{
		___isp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isp_10), (void*)value);
	}

	inline static int32_t get_offset_of_org_11() { return static_cast<int32_t>(offsetof(Root_t9023D5FD4704C6B8D12E0FAB93277288A86EBA21, ___org_11)); }
	inline String_t* get_org_11() const { return ___org_11; }
	inline String_t** get_address_of_org_11() { return &___org_11; }
	inline void set_org_11(String_t* value)
	{
		___org_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___org_11), (void*)value);
	}

	inline static int32_t get_offset_of_as_12() { return static_cast<int32_t>(offsetof(Root_t9023D5FD4704C6B8D12E0FAB93277288A86EBA21, ___as_12)); }
	inline String_t* get_as_12() const { return ___as_12; }
	inline String_t** get_address_of_as_12() { return &___as_12; }
	inline void set_as_12(String_t* value)
	{
		___as_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___as_12), (void*)value);
	}

	inline static int32_t get_offset_of_query_13() { return static_cast<int32_t>(offsetof(Root_t9023D5FD4704C6B8D12E0FAB93277288A86EBA21, ___query_13)); }
	inline String_t* get_query_13() const { return ___query_13; }
	inline String_t** get_address_of_query_13() { return &___query_13; }
	inline void set_query_13(String_t* value)
	{
		___query_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___query_13), (void*)value);
	}
};


// WeatherRequest/<TestJson>d__2
struct U3CTestJsonU3Ed__2_t35860833CDAEE846BC940352E6837E64BFAA9284  : public RuntimeObject
{
public:
	// System.Int32 WeatherRequest/<TestJson>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object WeatherRequest/<TestJson>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// WeatherRequest WeatherRequest/<TestJson>d__2::<>4__this
	WeatherRequest_t239B2216025DFDE4ECF3A8FC584B8AB2A68F9814 * ___U3CU3E4__this_2;
	// UnityEngine.Networking.UnityWebRequest WeatherRequest/<TestJson>d__2::<rec>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CrecU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTestJsonU3Ed__2_t35860833CDAEE846BC940352E6837E64BFAA9284, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTestJsonU3Ed__2_t35860833CDAEE846BC940352E6837E64BFAA9284, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTestJsonU3Ed__2_t35860833CDAEE846BC940352E6837E64BFAA9284, ___U3CU3E4__this_2)); }
	inline WeatherRequest_t239B2216025DFDE4ECF3A8FC584B8AB2A68F9814 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WeatherRequest_t239B2216025DFDE4ECF3A8FC584B8AB2A68F9814 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WeatherRequest_t239B2216025DFDE4ECF3A8FC584B8AB2A68F9814 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrecU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CTestJsonU3Ed__2_t35860833CDAEE846BC940352E6837E64BFAA9284, ___U3CrecU3E5__2_3)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CrecU3E5__2_3() const { return ___U3CrecU3E5__2_3; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CrecU3E5__2_3() { return &___U3CrecU3E5__2_3; }
	inline void set_U3CrecU3E5__2_3(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CrecU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrecU3E5__2_3), (void*)value);
	}
};


// WebRec/<GetDataCoroutine>d__7
struct U3CGetDataCoroutineU3Ed__7_t89F45FF117149FD57F06486198C50A74E853E0EF  : public RuntimeObject
{
public:
	// System.Int32 WebRec/<GetDataCoroutine>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object WebRec/<GetDataCoroutine>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// WebRec WebRec/<GetDataCoroutine>d__7::<>4__this
	WebRec_t29F0736489F17B673ED3C779F877C39FFA79DBE6 * ___U3CU3E4__this_2;
	// UnityEngine.Networking.UnityWebRequest WebRec/<GetDataCoroutine>d__7::<rec>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CrecU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetDataCoroutineU3Ed__7_t89F45FF117149FD57F06486198C50A74E853E0EF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetDataCoroutineU3Ed__7_t89F45FF117149FD57F06486198C50A74E853E0EF, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetDataCoroutineU3Ed__7_t89F45FF117149FD57F06486198C50A74E853E0EF, ___U3CU3E4__this_2)); }
	inline WebRec_t29F0736489F17B673ED3C779F877C39FFA79DBE6 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WebRec_t29F0736489F17B673ED3C779F877C39FFA79DBE6 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WebRec_t29F0736489F17B673ED3C779F877C39FFA79DBE6 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrecU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CGetDataCoroutineU3Ed__7_t89F45FF117149FD57F06486198C50A74E853E0EF, ___U3CrecU3E5__2_3)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CrecU3E5__2_3() const { return ___U3CrecU3E5__2_3; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CrecU3E5__2_3() { return &___U3CrecU3E5__2_3; }
	inline void set_U3CrecU3E5__2_3(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CrecU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrecU3E5__2_3), (void*)value);
	}
};


// WebRec/<ShowDownloadProgress>d__8
struct U3CShowDownloadProgressU3Ed__8_t441A453F57AACFFD32E89B9B6CAC8D6FE4E915EB  : public RuntimeObject
{
public:
	// System.Int32 WebRec/<ShowDownloadProgress>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object WebRec/<ShowDownloadProgress>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// WebRec WebRec/<ShowDownloadProgress>d__8::<>4__this
	WebRec_t29F0736489F17B673ED3C779F877C39FFA79DBE6 * ___U3CU3E4__this_2;
	// UnityEngine.Networking.UnityWebRequest WebRec/<ShowDownloadProgress>d__8::rec
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___rec_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CShowDownloadProgressU3Ed__8_t441A453F57AACFFD32E89B9B6CAC8D6FE4E915EB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CShowDownloadProgressU3Ed__8_t441A453F57AACFFD32E89B9B6CAC8D6FE4E915EB, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CShowDownloadProgressU3Ed__8_t441A453F57AACFFD32E89B9B6CAC8D6FE4E915EB, ___U3CU3E4__this_2)); }
	inline WebRec_t29F0736489F17B673ED3C779F877C39FFA79DBE6 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WebRec_t29F0736489F17B673ED3C779F877C39FFA79DBE6 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WebRec_t29F0736489F17B673ED3C779F877C39FFA79DBE6 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_rec_3() { return static_cast<int32_t>(offsetof(U3CShowDownloadProgressU3Ed__8_t441A453F57AACFFD32E89B9B6CAC8D6FE4E915EB, ___rec_3)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_rec_3() const { return ___rec_3; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_rec_3() { return &___rec_3; }
	inline void set_rec_3(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___rec_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rec_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,JSONObject>
struct KeyValuePair_2_t4140A3D2CCD94C85AD96660948A0C670123AE464 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4140A3D2CCD94C85AD96660948A0C670123AE464, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4140A3D2CCD94C85AD96660948A0C670123AE464, ___value_1)); }
	inline JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * get_value_1() const { return ___value_1; }
	inline JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794__padding[12];
	};

public:
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,JSONObject>
struct Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t4140A3D2CCD94C85AD96660948A0C670123AE464  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033, ___dictionary_0)); }
	inline Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033, ___current_3)); }
	inline KeyValuePair_2_t4140A3D2CCD94C85AD96660948A0C670123AE464  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t4140A3D2CCD94C85AD96660948A0C670123AE464 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t4140A3D2CCD94C85AD96660948A0C670123AE464  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___dictionary_0)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___current_3)); }
	inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::13BA99FB374DE24EB2656ACE253C54E2DA7EBAEDA4DD3DAB04852553EAF91EF6
	__StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794  ___13BA99FB374DE24EB2656ACE253C54E2DA7EBAEDA4DD3DAB04852553EAF91EF6_0;

public:
	inline static int32_t get_offset_of_U313BA99FB374DE24EB2656ACE253C54E2DA7EBAEDA4DD3DAB04852553EAF91EF6_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___13BA99FB374DE24EB2656ACE253C54E2DA7EBAEDA4DD3DAB04852553EAF91EF6_0)); }
	inline __StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794  get_U313BA99FB374DE24EB2656ACE253C54E2DA7EBAEDA4DD3DAB04852553EAF91EF6_0() const { return ___13BA99FB374DE24EB2656ACE253C54E2DA7EBAEDA4DD3DAB04852553EAF91EF6_0; }
	inline __StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794 * get_address_of_U313BA99FB374DE24EB2656ACE253C54E2DA7EBAEDA4DD3DAB04852553EAF91EF6_0() { return &___13BA99FB374DE24EB2656ACE253C54E2DA7EBAEDA4DD3DAB04852553EAF91EF6_0; }
	inline void set_U313BA99FB374DE24EB2656ACE253C54E2DA7EBAEDA4DD3DAB04852553EAF91EF6_0(__StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794  value)
	{
		___13BA99FB374DE24EB2656ACE253C54E2DA7EBAEDA4DD3DAB04852553EAF91EF6_0 = value;
	}
};


// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// UnityEngine.TouchScreenKeyboardType
struct TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// Categorys/Root
struct Root_tC9A64770600B9FA62079AE4160AB035C6597B841  : public RuntimeObject
{
public:
	// Categorys/Status Categorys/Root::status
	Status_t40E98624315AB90AFA291CBCB4FDCB5449DB1AA1 * ___status_0;
	// System.String Categorys/Root::_id
	String_t* ____id_1;
	// System.DateTime Categorys/Root::updatedAt
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___updatedAt_2;
	// System.DateTime Categorys/Root::createdAt
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___createdAt_3;
	// System.String Categorys/Root::user
	String_t* ___user_4;
	// System.String Categorys/Root::text
	String_t* ___text_5;
	// System.Boolean Categorys/Root::deleted
	bool ___deleted_6;
	// System.String Categorys/Root::source
	String_t* ___source_7;
	// System.Int32 Categorys/Root::__v
	int32_t _____v_8;
	// System.String Categorys/Root::type
	String_t* ___type_9;
	// System.Boolean Categorys/Root::used
	bool ___used_10;

public:
	inline static int32_t get_offset_of_status_0() { return static_cast<int32_t>(offsetof(Root_tC9A64770600B9FA62079AE4160AB035C6597B841, ___status_0)); }
	inline Status_t40E98624315AB90AFA291CBCB4FDCB5449DB1AA1 * get_status_0() const { return ___status_0; }
	inline Status_t40E98624315AB90AFA291CBCB4FDCB5449DB1AA1 ** get_address_of_status_0() { return &___status_0; }
	inline void set_status_0(Status_t40E98624315AB90AFA291CBCB4FDCB5449DB1AA1 * value)
	{
		___status_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___status_0), (void*)value);
	}

	inline static int32_t get_offset_of__id_1() { return static_cast<int32_t>(offsetof(Root_tC9A64770600B9FA62079AE4160AB035C6597B841, ____id_1)); }
	inline String_t* get__id_1() const { return ____id_1; }
	inline String_t** get_address_of__id_1() { return &____id_1; }
	inline void set__id_1(String_t* value)
	{
		____id_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____id_1), (void*)value);
	}

	inline static int32_t get_offset_of_updatedAt_2() { return static_cast<int32_t>(offsetof(Root_tC9A64770600B9FA62079AE4160AB035C6597B841, ___updatedAt_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_updatedAt_2() const { return ___updatedAt_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_updatedAt_2() { return &___updatedAt_2; }
	inline void set_updatedAt_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___updatedAt_2 = value;
	}

	inline static int32_t get_offset_of_createdAt_3() { return static_cast<int32_t>(offsetof(Root_tC9A64770600B9FA62079AE4160AB035C6597B841, ___createdAt_3)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_createdAt_3() const { return ___createdAt_3; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_createdAt_3() { return &___createdAt_3; }
	inline void set_createdAt_3(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___createdAt_3 = value;
	}

	inline static int32_t get_offset_of_user_4() { return static_cast<int32_t>(offsetof(Root_tC9A64770600B9FA62079AE4160AB035C6597B841, ___user_4)); }
	inline String_t* get_user_4() const { return ___user_4; }
	inline String_t** get_address_of_user_4() { return &___user_4; }
	inline void set_user_4(String_t* value)
	{
		___user_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___user_4), (void*)value);
	}

	inline static int32_t get_offset_of_text_5() { return static_cast<int32_t>(offsetof(Root_tC9A64770600B9FA62079AE4160AB035C6597B841, ___text_5)); }
	inline String_t* get_text_5() const { return ___text_5; }
	inline String_t** get_address_of_text_5() { return &___text_5; }
	inline void set_text_5(String_t* value)
	{
		___text_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_5), (void*)value);
	}

	inline static int32_t get_offset_of_deleted_6() { return static_cast<int32_t>(offsetof(Root_tC9A64770600B9FA62079AE4160AB035C6597B841, ___deleted_6)); }
	inline bool get_deleted_6() const { return ___deleted_6; }
	inline bool* get_address_of_deleted_6() { return &___deleted_6; }
	inline void set_deleted_6(bool value)
	{
		___deleted_6 = value;
	}

	inline static int32_t get_offset_of_source_7() { return static_cast<int32_t>(offsetof(Root_tC9A64770600B9FA62079AE4160AB035C6597B841, ___source_7)); }
	inline String_t* get_source_7() const { return ___source_7; }
	inline String_t** get_address_of_source_7() { return &___source_7; }
	inline void set_source_7(String_t* value)
	{
		___source_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_7), (void*)value);
	}

	inline static int32_t get_offset_of___v_8() { return static_cast<int32_t>(offsetof(Root_tC9A64770600B9FA62079AE4160AB035C6597B841, _____v_8)); }
	inline int32_t get___v_8() const { return _____v_8; }
	inline int32_t* get_address_of___v_8() { return &_____v_8; }
	inline void set___v_8(int32_t value)
	{
		_____v_8 = value;
	}

	inline static int32_t get_offset_of_type_9() { return static_cast<int32_t>(offsetof(Root_tC9A64770600B9FA62079AE4160AB035C6597B841, ___type_9)); }
	inline String_t* get_type_9() const { return ___type_9; }
	inline String_t** get_address_of_type_9() { return &___type_9; }
	inline void set_type_9(String_t* value)
	{
		___type_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_9), (void*)value);
	}

	inline static int32_t get_offset_of_used_10() { return static_cast<int32_t>(offsetof(Root_tC9A64770600B9FA62079AE4160AB035C6597B841, ___used_10)); }
	inline bool get_used_10() const { return ___used_10; }
	inline bool* get_address_of_used_10() { return &___used_10; }
	inline void set_used_10(bool value)
	{
		___used_10 = value;
	}
};


// Categorys/Status
struct Status_t40E98624315AB90AFA291CBCB4FDCB5449DB1AA1  : public RuntimeObject
{
public:
	// System.Nullable`1<System.Boolean> Categorys/Status::verified
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___verified_0;
	// System.Int32 Categorys/Status::sentCount
	int32_t ___sentCount_1;

public:
	inline static int32_t get_offset_of_verified_0() { return static_cast<int32_t>(offsetof(Status_t40E98624315AB90AFA291CBCB4FDCB5449DB1AA1, ___verified_0)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_verified_0() const { return ___verified_0; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_verified_0() { return &___verified_0; }
	inline void set_verified_0(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___verified_0 = value;
	}

	inline static int32_t get_offset_of_sentCount_1() { return static_cast<int32_t>(offsetof(Status_t40E98624315AB90AFA291CBCB4FDCB5449DB1AA1, ___sentCount_1)); }
	inline int32_t get_sentCount_1() const { return ___sentCount_1; }
	inline int32_t* get_address_of_sentCount_1() { return &___sentCount_1; }
	inline void set_sentCount_1(int32_t value)
	{
		___sentCount_1 = value;
	}
};


// UnityEngine.UI.InputField/CharacterValidation
struct CharacterValidation_t03AFB752BBD6215579765978CE67D7159431FC41 
{
public:
	// System.Int32 UnityEngine.UI.InputField/CharacterValidation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharacterValidation_t03AFB752BBD6215579765978CE67D7159431FC41, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/ContentType
struct ContentType_t15FD47A38F32CADD417E3A07C787F1B3997B9AC1 
{
public:
	// System.Int32 UnityEngine.UI.InputField/ContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ContentType_t15FD47A38F32CADD417E3A07C787F1B3997B9AC1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/InputType
struct InputType_t43FE97C0C3EE1F7DB81E2F34420780D1DFBF03D2 
{
public:
	// System.Int32 UnityEngine.UI.InputField/InputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputType_t43FE97C0C3EE1F7DB81E2F34420780D1DFBF03D2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/LineType
struct LineType_t3249F1C248D9D12DE265C49F371F2C3618AFEFCE 
{
public:
	// System.Int32 UnityEngine.UI.InputField/LineType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LineType_t3249F1C248D9D12DE265C49F371F2C3618AFEFCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// JSONObject/Type
struct Type_tFB7AD7B1ACDF9E6885ACE5620CA86463D26225EF 
{
public:
	// System.Int32 JSONObject/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tFB7AD7B1ACDF9E6885ACE5620CA86463D26225EF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.UnityWebRequest/Result
struct Result_t3233C0F690EC3844C8E0C4649568659679AFBE75 
{
public:
	// System.Int32 UnityEngine.Networking.UnityWebRequest/Result::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Result_t3233C0F690EC3844C8E0C4649568659679AFBE75, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AssetBundle
struct AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// JSONObject
struct JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722  : public RuntimeObject
{
public:
	// JSONObject/Type JSONObject::type
	int32_t ___type_6;
	// System.Collections.Generic.List`1<JSONObject> JSONObject::list
	List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * ___list_7;
	// System.Collections.Generic.List`1<System.String> JSONObject::keys
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___keys_8;
	// System.String JSONObject::str
	String_t* ___str_9;
	// System.Single JSONObject::n
	float ___n_10;
	// System.Boolean JSONObject::useInt
	bool ___useInt_11;
	// System.Int64 JSONObject::i
	int64_t ___i_12;
	// System.Boolean JSONObject::b
	bool ___b_13;

public:
	inline static int32_t get_offset_of_type_6() { return static_cast<int32_t>(offsetof(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722, ___type_6)); }
	inline int32_t get_type_6() const { return ___type_6; }
	inline int32_t* get_address_of_type_6() { return &___type_6; }
	inline void set_type_6(int32_t value)
	{
		___type_6 = value;
	}

	inline static int32_t get_offset_of_list_7() { return static_cast<int32_t>(offsetof(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722, ___list_7)); }
	inline List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * get_list_7() const { return ___list_7; }
	inline List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D ** get_address_of_list_7() { return &___list_7; }
	inline void set_list_7(List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * value)
	{
		___list_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_7), (void*)value);
	}

	inline static int32_t get_offset_of_keys_8() { return static_cast<int32_t>(offsetof(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722, ___keys_8)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_keys_8() const { return ___keys_8; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_keys_8() { return &___keys_8; }
	inline void set_keys_8(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___keys_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_8), (void*)value);
	}

	inline static int32_t get_offset_of_str_9() { return static_cast<int32_t>(offsetof(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722, ___str_9)); }
	inline String_t* get_str_9() const { return ___str_9; }
	inline String_t** get_address_of_str_9() { return &___str_9; }
	inline void set_str_9(String_t* value)
	{
		___str_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___str_9), (void*)value);
	}

	inline static int32_t get_offset_of_n_10() { return static_cast<int32_t>(offsetof(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722, ___n_10)); }
	inline float get_n_10() const { return ___n_10; }
	inline float* get_address_of_n_10() { return &___n_10; }
	inline void set_n_10(float value)
	{
		___n_10 = value;
	}

	inline static int32_t get_offset_of_useInt_11() { return static_cast<int32_t>(offsetof(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722, ___useInt_11)); }
	inline bool get_useInt_11() const { return ___useInt_11; }
	inline bool* get_address_of_useInt_11() { return &___useInt_11; }
	inline void set_useInt_11(bool value)
	{
		___useInt_11 = value;
	}

	inline static int32_t get_offset_of_i_12() { return static_cast<int32_t>(offsetof(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722, ___i_12)); }
	inline int64_t get_i_12() const { return ___i_12; }
	inline int64_t* get_address_of_i_12() { return &___i_12; }
	inline void set_i_12(int64_t value)
	{
		___i_12 = value;
	}

	inline static int32_t get_offset_of_b_13() { return static_cast<int32_t>(offsetof(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722, ___b_13)); }
	inline bool get_b_13() const { return ___b_13; }
	inline bool* get_address_of_b_13() { return &___b_13; }
	inline void set_b_13(bool value)
	{
		___b_13 = value;
	}
};

struct JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_StaticFields
{
public:
	// System.Char[] JSONObject::WHITESPACE
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___WHITESPACE_5;
	// System.Diagnostics.Stopwatch JSONObject::printWatch
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___printWatch_15;

public:
	inline static int32_t get_offset_of_WHITESPACE_5() { return static_cast<int32_t>(offsetof(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_StaticFields, ___WHITESPACE_5)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_WHITESPACE_5() const { return ___WHITESPACE_5; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_WHITESPACE_5() { return &___WHITESPACE_5; }
	inline void set_WHITESPACE_5(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___WHITESPACE_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WHITESPACE_5), (void*)value);
	}

	inline static int32_t get_offset_of_printWatch_15() { return static_cast<int32_t>(offsetof(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_StaticFields, ___printWatch_15)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_printWatch_15() const { return ___printWatch_15; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_printWatch_15() { return &___printWatch_15; }
	inline void set_printWatch_15(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___printWatch_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___printWatch_15), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.ResourceRequest
struct ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// System.String UnityEngine.ResourceRequest::m_Path
	String_t* ___m_Path_2;
	// System.Type UnityEngine.ResourceRequest::m_Type
	Type_t * ___m_Type_3;

public:
	inline static int32_t get_offset_of_m_Path_2() { return static_cast<int32_t>(offsetof(ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD, ___m_Path_2)); }
	inline String_t* get_m_Path_2() const { return ___m_Path_2; }
	inline String_t** get_address_of_m_Path_2() { return &___m_Path_2; }
	inline void set_m_Path_2(String_t* value)
	{
		___m_Path_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_3() { return static_cast<int32_t>(offsetof(ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD, ___m_Type_3)); }
	inline Type_t * get_m_Type_3() const { return ___m_Type_3; }
	inline Type_t ** get_address_of_m_Type_3() { return &___m_Type_3; }
	inline void set_m_Type_3(Type_t * value)
	{
		___m_Type_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Type_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	char* ___m_Path_2;
	Type_t * ___m_Type_3;
};
// Native definition for COM marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	Il2CppChar* ___m_Path_2;
	Type_t * ___m_Type_3;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_DownloadHandler_1)); }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_UploadHandler_2)); }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Uri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com* ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.AssetBundleRequest
struct AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A  : public ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.AssetBundleRequest
struct AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A_marshaled_pinvoke : public ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.AssetBundleRequest
struct AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A_marshaled_com : public ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD_marshaled_com
{
};

// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.FormatException
struct FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// JSONObject/AddJSONContents
struct AddJSONContents_t30D87492AD29D0086FE679779BD8E02620377B16  : public MulticastDelegate_t
{
public:

public:
};


// JSONObject/FieldNotFound
struct FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6  : public MulticastDelegate_t
{
public:

public:
};


// JSONObject/GetFieldResponse
struct GetFieldResponse_t43D0287B1D77E67E63ED111DCD7C7BE0EC183345  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// BundledObjectLoader
struct BundledObjectLoader_tCF7915F0B058BAD21E4B9C37ED5ABADE52DDBDCD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String BundledObjectLoader::bundleName
	String_t* ___bundleName_4;
	// System.String BundledObjectLoader::assetName
	String_t* ___assetName_5;

public:
	inline static int32_t get_offset_of_bundleName_4() { return static_cast<int32_t>(offsetof(BundledObjectLoader_tCF7915F0B058BAD21E4B9C37ED5ABADE52DDBDCD, ___bundleName_4)); }
	inline String_t* get_bundleName_4() const { return ___bundleName_4; }
	inline String_t** get_address_of_bundleName_4() { return &___bundleName_4; }
	inline void set_bundleName_4(String_t* value)
	{
		___bundleName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bundleName_4), (void*)value);
	}

	inline static int32_t get_offset_of_assetName_5() { return static_cast<int32_t>(offsetof(BundledObjectLoader_tCF7915F0B058BAD21E4B9C37ED5ABADE52DDBDCD, ___assetName_5)); }
	inline String_t* get_assetName_5() const { return ___assetName_5; }
	inline String_t** get_address_of_assetName_5() { return &___assetName_5; }
	inline void set_assetName_5(String_t* value)
	{
		___assetName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assetName_5), (void*)value);
	}
};


// Categorys
struct Categorys_t0D83D62AC2CF4157DB440E2A3B3F3F05E699D910  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// LoadBundle
struct LoadBundle_tCCF56ED79520467E367004790C0CE3B5E1EEE9AC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.InputField LoadBundle::outputArea
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___outputArea_4;

public:
	inline static int32_t get_offset_of_outputArea_4() { return static_cast<int32_t>(offsetof(LoadBundle_tCCF56ED79520467E367004790C0CE3B5E1EEE9AC, ___outputArea_4)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_outputArea_4() const { return ___outputArea_4; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_outputArea_4() { return &___outputArea_4; }
	inline void set_outputArea_4(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___outputArea_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outputArea_4), (void*)value);
	}
};


// Loading
struct Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String Loading::Url
	String_t* ___Url_4;
	// UnityEngine.GameObject[] Loading::categorys
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___categorys_5;
	// UnityEngine.UI.Button[] Loading::button1
	ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* ___button1_6;
	// UnityEngine.Transform Loading::Greed1
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___Greed1_7;
	// UnityEngine.GameObject Loading::Base1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Base1_8;
	// UnityEngine.UI.Button Loading::button
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___button_9;
	// UnityEngine.Texture2D[] Loading::tex
	Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* ___tex_10;
	// UnityEngine.UI.Text Loading::Detiles
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Detiles_11;
	// UnityEngine.UI.RawImage Loading::pic
	RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * ___pic_12;
	// UnityEngine.GameObject Loading::panel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___panel_13;
	// System.Int32 Loading::a
	int32_t ___a_14;

public:
	inline static int32_t get_offset_of_Url_4() { return static_cast<int32_t>(offsetof(Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7, ___Url_4)); }
	inline String_t* get_Url_4() const { return ___Url_4; }
	inline String_t** get_address_of_Url_4() { return &___Url_4; }
	inline void set_Url_4(String_t* value)
	{
		___Url_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Url_4), (void*)value);
	}

	inline static int32_t get_offset_of_categorys_5() { return static_cast<int32_t>(offsetof(Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7, ___categorys_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_categorys_5() const { return ___categorys_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_categorys_5() { return &___categorys_5; }
	inline void set_categorys_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___categorys_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categorys_5), (void*)value);
	}

	inline static int32_t get_offset_of_button1_6() { return static_cast<int32_t>(offsetof(Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7, ___button1_6)); }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* get_button1_6() const { return ___button1_6; }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B** get_address_of_button1_6() { return &___button1_6; }
	inline void set_button1_6(ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* value)
	{
		___button1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___button1_6), (void*)value);
	}

	inline static int32_t get_offset_of_Greed1_7() { return static_cast<int32_t>(offsetof(Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7, ___Greed1_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_Greed1_7() const { return ___Greed1_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_Greed1_7() { return &___Greed1_7; }
	inline void set_Greed1_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___Greed1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Greed1_7), (void*)value);
	}

	inline static int32_t get_offset_of_Base1_8() { return static_cast<int32_t>(offsetof(Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7, ___Base1_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Base1_8() const { return ___Base1_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Base1_8() { return &___Base1_8; }
	inline void set_Base1_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Base1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Base1_8), (void*)value);
	}

	inline static int32_t get_offset_of_button_9() { return static_cast<int32_t>(offsetof(Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7, ___button_9)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_button_9() const { return ___button_9; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_button_9() { return &___button_9; }
	inline void set_button_9(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___button_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___button_9), (void*)value);
	}

	inline static int32_t get_offset_of_tex_10() { return static_cast<int32_t>(offsetof(Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7, ___tex_10)); }
	inline Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* get_tex_10() const { return ___tex_10; }
	inline Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316** get_address_of_tex_10() { return &___tex_10; }
	inline void set_tex_10(Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* value)
	{
		___tex_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tex_10), (void*)value);
	}

	inline static int32_t get_offset_of_Detiles_11() { return static_cast<int32_t>(offsetof(Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7, ___Detiles_11)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Detiles_11() const { return ___Detiles_11; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Detiles_11() { return &___Detiles_11; }
	inline void set_Detiles_11(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Detiles_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Detiles_11), (void*)value);
	}

	inline static int32_t get_offset_of_pic_12() { return static_cast<int32_t>(offsetof(Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7, ___pic_12)); }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * get_pic_12() const { return ___pic_12; }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A ** get_address_of_pic_12() { return &___pic_12; }
	inline void set_pic_12(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * value)
	{
		___pic_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pic_12), (void*)value);
	}

	inline static int32_t get_offset_of_panel_13() { return static_cast<int32_t>(offsetof(Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7, ___panel_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_panel_13() const { return ___panel_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_panel_13() { return &___panel_13; }
	inline void set_panel_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___panel_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___panel_13), (void*)value);
	}

	inline static int32_t get_offset_of_a_14() { return static_cast<int32_t>(offsetof(Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7, ___a_14)); }
	inline int32_t get_a_14() const { return ___a_14; }
	inline int32_t* get_address_of_a_14() { return &___a_14; }
	inline void set_a_14(int32_t value)
	{
		___a_14 = value;
	}
};


// ResposWeather
struct ResposWeather_t5747578C4FEE44A4A5185FD803B35062CFFFD08E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// SpherMuves
struct SpherMuves_t5654ADC5514C34DC1B962C4C4BD628DB1E7A0035  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject SpherMuves::Spher
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Spher_4;
	// System.Single SpherMuves::speed
	float ___speed_5;
	// System.Boolean SpherMuves::muveingRight
	bool ___muveingRight_6;

public:
	inline static int32_t get_offset_of_Spher_4() { return static_cast<int32_t>(offsetof(SpherMuves_t5654ADC5514C34DC1B962C4C4BD628DB1E7A0035, ___Spher_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Spher_4() const { return ___Spher_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Spher_4() { return &___Spher_4; }
	inline void set_Spher_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Spher_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Spher_4), (void*)value);
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(SpherMuves_t5654ADC5514C34DC1B962C4C4BD628DB1E7A0035, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_muveingRight_6() { return static_cast<int32_t>(offsetof(SpherMuves_t5654ADC5514C34DC1B962C4C4BD628DB1E7A0035, ___muveingRight_6)); }
	inline bool get_muveingRight_6() const { return ___muveingRight_6; }
	inline bool* get_address_of_muveingRight_6() { return &___muveingRight_6; }
	inline void set_muveingRight_6(bool value)
	{
		___muveingRight_6 = value;
	}
};


// Test
struct Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// WeatherRequest
struct WeatherRequest_t239B2216025DFDE4ECF3A8FC584B8AB2A68F9814  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String WeatherRequest::url
	String_t* ___url_4;
	// UnityEngine.UI.Text WeatherRequest::temp
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___temp_5;

public:
	inline static int32_t get_offset_of_url_4() { return static_cast<int32_t>(offsetof(WeatherRequest_t239B2216025DFDE4ECF3A8FC584B8AB2A68F9814, ___url_4)); }
	inline String_t* get_url_4() const { return ___url_4; }
	inline String_t** get_address_of_url_4() { return &___url_4; }
	inline void set_url_4(String_t* value)
	{
		___url_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_4), (void*)value);
	}

	inline static int32_t get_offset_of_temp_5() { return static_cast<int32_t>(offsetof(WeatherRequest_t239B2216025DFDE4ECF3A8FC584B8AB2A68F9814, ___temp_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_temp_5() const { return ___temp_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_temp_5() { return &___temp_5; }
	inline void set_temp_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___temp_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___temp_5), (void*)value);
	}
};


// WebRec
struct WebRec_t29F0736489F17B673ED3C779F877C39FFA79DBE6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.InputField WebRec::outputArea
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___outputArea_4;
	// UnityEngine.GameObject WebRec::Progres
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Progres_5;
	// System.Boolean WebRec::isDownload
	bool ___isDownload_6;
	// UnityEngine.Networking.UnityWebRequest WebRec::rec
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___rec_7;

public:
	inline static int32_t get_offset_of_outputArea_4() { return static_cast<int32_t>(offsetof(WebRec_t29F0736489F17B673ED3C779F877C39FFA79DBE6, ___outputArea_4)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_outputArea_4() const { return ___outputArea_4; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_outputArea_4() { return &___outputArea_4; }
	inline void set_outputArea_4(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___outputArea_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outputArea_4), (void*)value);
	}

	inline static int32_t get_offset_of_Progres_5() { return static_cast<int32_t>(offsetof(WebRec_t29F0736489F17B673ED3C779F877C39FFA79DBE6, ___Progres_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Progres_5() const { return ___Progres_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Progres_5() { return &___Progres_5; }
	inline void set_Progres_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Progres_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Progres_5), (void*)value);
	}

	inline static int32_t get_offset_of_isDownload_6() { return static_cast<int32_t>(offsetof(WebRec_t29F0736489F17B673ED3C779F877C39FFA79DBE6, ___isDownload_6)); }
	inline bool get_isDownload_6() const { return ___isDownload_6; }
	inline bool* get_address_of_isDownload_6() { return &___isDownload_6; }
	inline void set_isDownload_6(bool value)
	{
		___isDownload_6 = value;
	}

	inline static int32_t get_offset_of_rec_7() { return static_cast<int32_t>(offsetof(WebRec_t29F0736489F17B673ED3C779F877C39FFA79DBE6, ___rec_7)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_rec_7() const { return ___rec_7; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_rec_7() { return &___rec_7; }
	inline void set_rec_7(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___rec_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rec_7), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_TextComponent_22;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_Placeholder_23;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_24;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_25;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_26;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_27;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_28;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_29;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_30;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_31;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnEndEdit
	SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * ___m_OnEndEdit_32;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * ___m_OnValueChanged_33;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * ___m_OnValidateInput_34;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_CaretColor_35;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_36;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectionColor_37;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_38;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_39;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_40;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_41;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_43;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_44;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___caretRectTrans_45;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_CursorVerts_46;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_InputTextCache_47;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CachedInputRenderer_48;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_49;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_Mesh_50;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_51;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_52;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_53;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_54;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_57;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_BlinkCoroutine_58;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_59;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_60;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_61;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_DragCoroutine_62;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_63;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_64;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_65;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * ___m_WaitForSecondsRealtime_66;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_67;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___m_ProcessingEvent_69;

public:
	inline static int32_t get_offset_of_m_Keyboard_20() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Keyboard_20)); }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * get_m_Keyboard_20() const { return ___m_Keyboard_20; }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E ** get_address_of_m_Keyboard_20() { return &___m_Keyboard_20; }
	inline void set_m_Keyboard_20(TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * value)
	{
		___m_Keyboard_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Keyboard_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextComponent_22() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_TextComponent_22)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_TextComponent_22() const { return ___m_TextComponent_22; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_TextComponent_22() { return &___m_TextComponent_22; }
	inline void set_m_TextComponent_22(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_TextComponent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_Placeholder_23() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Placeholder_23)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_Placeholder_23() const { return ___m_Placeholder_23; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_Placeholder_23() { return &___m_Placeholder_23; }
	inline void set_m_Placeholder_23(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_Placeholder_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Placeholder_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentType_24() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ContentType_24)); }
	inline int32_t get_m_ContentType_24() const { return ___m_ContentType_24; }
	inline int32_t* get_address_of_m_ContentType_24() { return &___m_ContentType_24; }
	inline void set_m_ContentType_24(int32_t value)
	{
		___m_ContentType_24 = value;
	}

	inline static int32_t get_offset_of_m_InputType_25() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_InputType_25)); }
	inline int32_t get_m_InputType_25() const { return ___m_InputType_25; }
	inline int32_t* get_address_of_m_InputType_25() { return &___m_InputType_25; }
	inline void set_m_InputType_25(int32_t value)
	{
		___m_InputType_25 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_26() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_AsteriskChar_26)); }
	inline Il2CppChar get_m_AsteriskChar_26() const { return ___m_AsteriskChar_26; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_26() { return &___m_AsteriskChar_26; }
	inline void set_m_AsteriskChar_26(Il2CppChar value)
	{
		___m_AsteriskChar_26 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_27() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_KeyboardType_27)); }
	inline int32_t get_m_KeyboardType_27() const { return ___m_KeyboardType_27; }
	inline int32_t* get_address_of_m_KeyboardType_27() { return &___m_KeyboardType_27; }
	inline void set_m_KeyboardType_27(int32_t value)
	{
		___m_KeyboardType_27 = value;
	}

	inline static int32_t get_offset_of_m_LineType_28() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_LineType_28)); }
	inline int32_t get_m_LineType_28() const { return ___m_LineType_28; }
	inline int32_t* get_address_of_m_LineType_28() { return &___m_LineType_28; }
	inline void set_m_LineType_28(int32_t value)
	{
		___m_LineType_28 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_29() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_HideMobileInput_29)); }
	inline bool get_m_HideMobileInput_29() const { return ___m_HideMobileInput_29; }
	inline bool* get_address_of_m_HideMobileInput_29() { return &___m_HideMobileInput_29; }
	inline void set_m_HideMobileInput_29(bool value)
	{
		___m_HideMobileInput_29 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_30() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CharacterValidation_30)); }
	inline int32_t get_m_CharacterValidation_30() const { return ___m_CharacterValidation_30; }
	inline int32_t* get_address_of_m_CharacterValidation_30() { return &___m_CharacterValidation_30; }
	inline void set_m_CharacterValidation_30(int32_t value)
	{
		___m_CharacterValidation_30 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_31() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CharacterLimit_31)); }
	inline int32_t get_m_CharacterLimit_31() const { return ___m_CharacterLimit_31; }
	inline int32_t* get_address_of_m_CharacterLimit_31() { return &___m_CharacterLimit_31; }
	inline void set_m_CharacterLimit_31(int32_t value)
	{
		___m_CharacterLimit_31 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_32() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnEndEdit_32)); }
	inline SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * get_m_OnEndEdit_32() const { return ___m_OnEndEdit_32; }
	inline SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 ** get_address_of_m_OnEndEdit_32() { return &___m_OnEndEdit_32; }
	inline void set_m_OnEndEdit_32(SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * value)
	{
		___m_OnEndEdit_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEndEdit_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_33() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnValueChanged_33)); }
	inline OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * get_m_OnValueChanged_33() const { return ___m_OnValueChanged_33; }
	inline OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 ** get_address_of_m_OnValueChanged_33() { return &___m_OnValueChanged_33; }
	inline void set_m_OnValueChanged_33(OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * value)
	{
		___m_OnValueChanged_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_34() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnValidateInput_34)); }
	inline OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * get_m_OnValidateInput_34() const { return ___m_OnValidateInput_34; }
	inline OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F ** get_address_of_m_OnValidateInput_34() { return &___m_OnValidateInput_34; }
	inline void set_m_OnValidateInput_34(OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * value)
	{
		___m_OnValidateInput_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValidateInput_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretColor_35() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretColor_35)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_CaretColor_35() const { return ___m_CaretColor_35; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_CaretColor_35() { return &___m_CaretColor_35; }
	inline void set_m_CaretColor_35(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_CaretColor_35 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_36() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CustomCaretColor_36)); }
	inline bool get_m_CustomCaretColor_36() const { return ___m_CustomCaretColor_36; }
	inline bool* get_address_of_m_CustomCaretColor_36() { return &___m_CustomCaretColor_36; }
	inline void set_m_CustomCaretColor_36(bool value)
	{
		___m_CustomCaretColor_36 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_37() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_SelectionColor_37)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectionColor_37() const { return ___m_SelectionColor_37; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectionColor_37() { return &___m_SelectionColor_37; }
	inline void set_m_SelectionColor_37(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectionColor_37 = value;
	}

	inline static int32_t get_offset_of_m_Text_38() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Text_38)); }
	inline String_t* get_m_Text_38() const { return ___m_Text_38; }
	inline String_t** get_address_of_m_Text_38() { return &___m_Text_38; }
	inline void set_m_Text_38(String_t* value)
	{
		___m_Text_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_39() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretBlinkRate_39)); }
	inline float get_m_CaretBlinkRate_39() const { return ___m_CaretBlinkRate_39; }
	inline float* get_address_of_m_CaretBlinkRate_39() { return &___m_CaretBlinkRate_39; }
	inline void set_m_CaretBlinkRate_39(float value)
	{
		___m_CaretBlinkRate_39 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_40() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretWidth_40)); }
	inline int32_t get_m_CaretWidth_40() const { return ___m_CaretWidth_40; }
	inline int32_t* get_address_of_m_CaretWidth_40() { return &___m_CaretWidth_40; }
	inline void set_m_CaretWidth_40(int32_t value)
	{
		___m_CaretWidth_40 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_41() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ReadOnly_41)); }
	inline bool get_m_ReadOnly_41() const { return ___m_ReadOnly_41; }
	inline bool* get_address_of_m_ReadOnly_41() { return &___m_ReadOnly_41; }
	inline void set_m_ReadOnly_41(bool value)
	{
		___m_ReadOnly_41 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateOnSelect_42() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ShouldActivateOnSelect_42)); }
	inline bool get_m_ShouldActivateOnSelect_42() const { return ___m_ShouldActivateOnSelect_42; }
	inline bool* get_address_of_m_ShouldActivateOnSelect_42() { return &___m_ShouldActivateOnSelect_42; }
	inline void set_m_ShouldActivateOnSelect_42(bool value)
	{
		___m_ShouldActivateOnSelect_42 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_43() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretPosition_43)); }
	inline int32_t get_m_CaretPosition_43() const { return ___m_CaretPosition_43; }
	inline int32_t* get_address_of_m_CaretPosition_43() { return &___m_CaretPosition_43; }
	inline void set_m_CaretPosition_43(int32_t value)
	{
		___m_CaretPosition_43 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_44() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretSelectPosition_44)); }
	inline int32_t get_m_CaretSelectPosition_44() const { return ___m_CaretSelectPosition_44; }
	inline int32_t* get_address_of_m_CaretSelectPosition_44() { return &___m_CaretSelectPosition_44; }
	inline void set_m_CaretSelectPosition_44(int32_t value)
	{
		___m_CaretSelectPosition_44 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_45() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___caretRectTrans_45)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_caretRectTrans_45() const { return ___caretRectTrans_45; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_caretRectTrans_45() { return &___caretRectTrans_45; }
	inline void set_caretRectTrans_45(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___caretRectTrans_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caretRectTrans_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_46() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CursorVerts_46)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_CursorVerts_46() const { return ___m_CursorVerts_46; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_CursorVerts_46() { return &___m_CursorVerts_46; }
	inline void set_m_CursorVerts_46(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_CursorVerts_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CursorVerts_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputTextCache_47() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_InputTextCache_47)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_InputTextCache_47() const { return ___m_InputTextCache_47; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_InputTextCache_47() { return &___m_InputTextCache_47; }
	inline void set_m_InputTextCache_47(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_InputTextCache_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputTextCache_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_48() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CachedInputRenderer_48)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CachedInputRenderer_48() const { return ___m_CachedInputRenderer_48; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CachedInputRenderer_48() { return &___m_CachedInputRenderer_48; }
	inline void set_m_CachedInputRenderer_48(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CachedInputRenderer_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedInputRenderer_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreventFontCallback_49() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_PreventFontCallback_49)); }
	inline bool get_m_PreventFontCallback_49() const { return ___m_PreventFontCallback_49; }
	inline bool* get_address_of_m_PreventFontCallback_49() { return &___m_PreventFontCallback_49; }
	inline void set_m_PreventFontCallback_49(bool value)
	{
		___m_PreventFontCallback_49 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_50() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Mesh_50)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_Mesh_50() const { return ___m_Mesh_50; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_Mesh_50() { return &___m_Mesh_50; }
	inline void set_m_Mesh_50(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_Mesh_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mesh_50), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllowInput_51() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_AllowInput_51)); }
	inline bool get_m_AllowInput_51() const { return ___m_AllowInput_51; }
	inline bool* get_address_of_m_AllowInput_51() { return &___m_AllowInput_51; }
	inline void set_m_AllowInput_51(bool value)
	{
		___m_AllowInput_51 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_52() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ShouldActivateNextUpdate_52)); }
	inline bool get_m_ShouldActivateNextUpdate_52() const { return ___m_ShouldActivateNextUpdate_52; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_52() { return &___m_ShouldActivateNextUpdate_52; }
	inline void set_m_ShouldActivateNextUpdate_52(bool value)
	{
		___m_ShouldActivateNextUpdate_52 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_53() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_UpdateDrag_53)); }
	inline bool get_m_UpdateDrag_53() const { return ___m_UpdateDrag_53; }
	inline bool* get_address_of_m_UpdateDrag_53() { return &___m_UpdateDrag_53; }
	inline void set_m_UpdateDrag_53(bool value)
	{
		___m_UpdateDrag_53 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_54() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DragPositionOutOfBounds_54)); }
	inline bool get_m_DragPositionOutOfBounds_54() const { return ___m_DragPositionOutOfBounds_54; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_54() { return &___m_DragPositionOutOfBounds_54; }
	inline void set_m_DragPositionOutOfBounds_54(bool value)
	{
		___m_DragPositionOutOfBounds_54 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_57() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretVisible_57)); }
	inline bool get_m_CaretVisible_57() const { return ___m_CaretVisible_57; }
	inline bool* get_address_of_m_CaretVisible_57() { return &___m_CaretVisible_57; }
	inline void set_m_CaretVisible_57(bool value)
	{
		___m_CaretVisible_57 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_58() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_BlinkCoroutine_58)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_BlinkCoroutine_58() const { return ___m_BlinkCoroutine_58; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_BlinkCoroutine_58() { return &___m_BlinkCoroutine_58; }
	inline void set_m_BlinkCoroutine_58(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_BlinkCoroutine_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlinkCoroutine_58), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_59() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_BlinkStartTime_59)); }
	inline float get_m_BlinkStartTime_59() const { return ___m_BlinkStartTime_59; }
	inline float* get_address_of_m_BlinkStartTime_59() { return &___m_BlinkStartTime_59; }
	inline void set_m_BlinkStartTime_59(float value)
	{
		___m_BlinkStartTime_59 = value;
	}

	inline static int32_t get_offset_of_m_DrawStart_60() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DrawStart_60)); }
	inline int32_t get_m_DrawStart_60() const { return ___m_DrawStart_60; }
	inline int32_t* get_address_of_m_DrawStart_60() { return &___m_DrawStart_60; }
	inline void set_m_DrawStart_60(int32_t value)
	{
		___m_DrawStart_60 = value;
	}

	inline static int32_t get_offset_of_m_DrawEnd_61() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DrawEnd_61)); }
	inline int32_t get_m_DrawEnd_61() const { return ___m_DrawEnd_61; }
	inline int32_t* get_address_of_m_DrawEnd_61() { return &___m_DrawEnd_61; }
	inline void set_m_DrawEnd_61(int32_t value)
	{
		___m_DrawEnd_61 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_62() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DragCoroutine_62)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_DragCoroutine_62() const { return ___m_DragCoroutine_62; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_DragCoroutine_62() { return &___m_DragCoroutine_62; }
	inline void set_m_DragCoroutine_62(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_DragCoroutine_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DragCoroutine_62), (void*)value);
	}

	inline static int32_t get_offset_of_m_OriginalText_63() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OriginalText_63)); }
	inline String_t* get_m_OriginalText_63() const { return ___m_OriginalText_63; }
	inline String_t** get_address_of_m_OriginalText_63() { return &___m_OriginalText_63; }
	inline void set_m_OriginalText_63(String_t* value)
	{
		___m_OriginalText_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OriginalText_63), (void*)value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_64() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_WasCanceled_64)); }
	inline bool get_m_WasCanceled_64() const { return ___m_WasCanceled_64; }
	inline bool* get_address_of_m_WasCanceled_64() { return &___m_WasCanceled_64; }
	inline void set_m_WasCanceled_64(bool value)
	{
		___m_WasCanceled_64 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_65() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_HasDoneFocusTransition_65)); }
	inline bool get_m_HasDoneFocusTransition_65() const { return ___m_HasDoneFocusTransition_65; }
	inline bool* get_address_of_m_HasDoneFocusTransition_65() { return &___m_HasDoneFocusTransition_65; }
	inline void set_m_HasDoneFocusTransition_65(bool value)
	{
		___m_HasDoneFocusTransition_65 = value;
	}

	inline static int32_t get_offset_of_m_WaitForSecondsRealtime_66() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_WaitForSecondsRealtime_66)); }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * get_m_WaitForSecondsRealtime_66() const { return ___m_WaitForSecondsRealtime_66; }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 ** get_address_of_m_WaitForSecondsRealtime_66() { return &___m_WaitForSecondsRealtime_66; }
	inline void set_m_WaitForSecondsRealtime_66(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * value)
	{
		___m_WaitForSecondsRealtime_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitForSecondsRealtime_66), (void*)value);
	}

	inline static int32_t get_offset_of_m_TouchKeyboardAllowsInPlaceEditing_67() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_TouchKeyboardAllowsInPlaceEditing_67)); }
	inline bool get_m_TouchKeyboardAllowsInPlaceEditing_67() const { return ___m_TouchKeyboardAllowsInPlaceEditing_67; }
	inline bool* get_address_of_m_TouchKeyboardAllowsInPlaceEditing_67() { return &___m_TouchKeyboardAllowsInPlaceEditing_67; }
	inline void set_m_TouchKeyboardAllowsInPlaceEditing_67(bool value)
	{
		___m_TouchKeyboardAllowsInPlaceEditing_67 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_69() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ProcessingEvent_69)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_m_ProcessingEvent_69() const { return ___m_ProcessingEvent_69; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_m_ProcessingEvent_69() { return &___m_ProcessingEvent_69; }
	inline void set_m_ProcessingEvent_69(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___m_ProcessingEvent_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProcessingEvent_69), (void*)value);
	}
};

struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_StaticFields
{
public:
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___kSeparators_21;

public:
	inline static int32_t get_offset_of_kSeparators_21() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_StaticFields, ___kSeparators_21)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_kSeparators_21() const { return ___kSeparators_21; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_kSeparators_21() { return &___kSeparators_21; }
	inline void set_kSeparators_21(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___kSeparators_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kSeparators_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.RawImage
struct RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_36;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_UVRect_37;

public:
	inline static int32_t get_offset_of_m_Texture_36() { return static_cast<int32_t>(offsetof(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A, ___m_Texture_36)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_m_Texture_36() const { return ___m_Texture_36; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_m_Texture_36() { return &___m_Texture_36; }
	inline void set_m_Texture_36(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___m_Texture_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Texture_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_UVRect_37() { return static_cast<int32_t>(offsetof(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A, ___m_UVRect_37)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_UVRect_37() const { return ___m_UVRect_37; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_UVRect_37() { return &___m_UVRect_37; }
	inline void set_m_UVRect_37(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_UVRect_37 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// JSONObject[]
struct JSONObjectU5BU5D_tFB4FA33E0B9559355A1E9D5BFE4DBF2B68B7B96E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * m_Items[1];

public:
	inline JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * m_Items[1];

public:
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Categorys/Root[]
struct RootU5BU5D_t632F3B7EF48973C939950798ACE5B91D5E29EF30  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Root_tC9A64770600B9FA62079AE4160AB035C6597B841 * m_Items[1];

public:
	inline Root_tC9A64770600B9FA62079AE4160AB035C6597B841 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Root_tC9A64770600B9FA62079AE4160AB035C6597B841 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Root_tC9A64770600B9FA62079AE4160AB035C6597B841 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Root_tC9A64770600B9FA62079AE4160AB035C6597B841 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Root_tC9A64770600B9FA62079AE4160AB035C6597B841 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Root_tC9A64770600B9FA62079AE4160AB035C6597B841 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * m_Items[1];

public:
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Int32 System.Array::IndexOf<System.Char>(!!0[],!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mD5F29E323D31B110F267B79CAF2E456F4C77ECE4_gshared (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___array0, Il2CppChar ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// T[] JsonHelper::getJsonArray<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* JsonHelper_getJsonArray_TisRuntimeObject_m8806B094904D150DFDB1657E3CFA5DC628A61E0E_gshared (String_t* ___json0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared (String_t* ___json0, const RuntimeMethod* method);
// !!0 UnityEngine.AssetBundle::LoadAsset<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AssetBundle_LoadAsset_TisRuntimeObject_m5C55BB9F750DD28D2C89E2FED48B01FE3CF18158_gshared (AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);

// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// UnityEngine.AssetBundle UnityEngine.AssetBundle::LoadFromFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * AssetBundle_LoadFromFile_m326379558FA2CA731C294D5F9905EA3EAE3B5E52 (String_t* ___path0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.AssetBundleRequest UnityEngine.AssetBundle::LoadAllAssetsAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * AssetBundle_LoadAllAssetsAsync_mFBD03164799EA8A821309FBE8C4C08340943A5E5 (AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * __this, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.AssetBundleRequest::get_asset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * AssetBundleRequest_get_asset_mB0A96FBC026D143638E467DEB37228ACD55F1813 (AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * __this, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Object_Instantiate_m565A02EA45AEA7442E19FDC8E82695491938CB5A (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___original0, const RuntimeMethod* method);
// System.Void UnityEngine.AssetBundle::Unload(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetBundle_Unload_m0DEBACB284F6CECA8DF21486D1BBE1189F6A5D66 (AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * __this, bool ___unloadAllLoadedObjects0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<JSONObject>::get_Count()
inline int32_t List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// JSONObject JSONObject::Create(JSONObject/Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_Create_m168E1FB446E57A739497DA9DE25269CF9C224B7D (int32_t ___t0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<JSONObject>::.ctor()
inline void List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890 (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_inline (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  (*) (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *, const RuntimeMethod*))Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// JSONObject JSONObject::CreateStringObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_CreateStringObject_m4FE0CF34A1B7810B54654B6E66C5EBC579EE8E02 (String_t* ___val0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<JSONObject>::Add(!0)
inline void List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296 (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * __this, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8 (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22 (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,JSONObject>::GetEnumerator()
inline Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033  Dictionary_2_GetEnumerator_m4EBF914F9BDA85AAF1017608946F83B5D0CB392E (Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033  (*) (Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,JSONObject>::get_Current()
inline KeyValuePair_2_t4140A3D2CCD94C85AD96660948A0C670123AE464  Enumerator_get_Current_m2CACA29BDF60CD27C12E402A5C91A0E2954550A0_inline (Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t4140A3D2CCD94C85AD96660948A0C670123AE464  (*) (Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033 *, const RuntimeMethod*))Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,JSONObject>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m4BF4E7D9E3BE57B982A403C1AA5144962A065A75_inline (KeyValuePair_2_t4140A3D2CCD94C85AD96660948A0C670123AE464 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t4140A3D2CCD94C85AD96660948A0C670123AE464 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,JSONObject>::get_Value()
inline JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * KeyValuePair_2_get_Value_m2642B52554EFD93A21D9591EC5FA523844453EB4_inline (KeyValuePair_2_t4140A3D2CCD94C85AD96660948A0C670123AE464 * __this, const RuntimeMethod* method)
{
	return ((  JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * (*) (KeyValuePair_2_t4140A3D2CCD94C85AD96660948A0C670123AE464 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,JSONObject>::MoveNext()
inline bool Enumerator_MoveNext_m217D5D7E8406422DB793EC2B6F914101D73A7A56 (Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033 *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,JSONObject>::Dispose()
inline void Enumerator_Dispose_m99F282CCCADABD18013C7C39BEB31BD5E60D3F2E (Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033 *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// System.Void JSONObject/AddJSONContents::Invoke(JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddJSONContents_Invoke_m5EB8C5BFCDB131C8317BE615AE64AB300FF77008 (AddJSONContents_t30D87492AD29D0086FE679779BD8E02620377B16 * __this, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___self0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<JSONObject>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m4853D5C6453425D8A779EC4A51C90D5BE068A8F3 (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<JSONObject>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m8CAAD59303D53F10C2B7DDD2C88C2AF7D0F4ADC1 (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m67797787DD90CC9BC8EC6EA8EA1E1760EF88302C (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared)(__this, ___collection0, method);
}
// System.Void JSONObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_mAD15D168DB9973AE0F2B2954CE31C2CBC772D2C8 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method);
// JSONObject JSONObject::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_Create_m56FF68A8DD4EBDBB25F11DA3D69853FDF544EEDE (const RuntimeMethod* method);
// System.Void JSONObject::Parse(System.String,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Parse_m37AF1F1D86E0D2CE4873C410679DD9F003AD793B (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___str0, int32_t ___maxDepth1, bool ___storeExcessLevels2, bool ___strict3, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Trim(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m10D967E03EDCB170227406426558B7FEA27CD6CC (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___trimChars0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_m3B98D489EF23605CC97E9907AAF1E5E99BBF6A62 (String_t* ___strA0, String_t* ___strB1, bool ___ignoreCase2, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Single System.Convert::ToSingle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Convert_ToSingle_mF0B86032F39B1D435590B5751039905B93BE7A1F (String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int64 System.Convert::ToInt64(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_m301151C65034D45DEF914FC0A2598C782836BDE9 (String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.Array::IndexOf<System.Char>(!!0[],!!0)
inline int32_t Array_IndexOf_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mD5F29E323D31B110F267B79CAF2E456F4C77ECE4 (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___array0, Il2CppChar ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, Il2CppChar, const RuntimeMethod*))Array_IndexOf_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mD5F29E323D31B110F267B79CAF2E456F4C77ECE4_gshared)(___array0, ___value1, method);
}
// JSONObject JSONObject::Create(System.String,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_Create_m6869838BC7DFE7BA8C73FF0CDC7DAB93B25F3C73 (String_t* ___val0, int32_t ___maxDepth1, bool ___storeExcessLevels2, bool ___strict3, const RuntimeMethod* method);
// JSONObject JSONObject::CreateBakedObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_CreateBakedObject_mD1360B3E5E493D5647B64617F0E894A42307FCDD (String_t* ___val0, const RuntimeMethod* method);
// JSONObject JSONObject::Create(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_Create_m0C889649B7E0EC710E0CC1E8DB8A847CECBF0108 (bool ___val0, const RuntimeMethod* method);
// System.Void JSONObject::Add(JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Add_mFA608D8951A1CB1FE608B4E1B0E69D55CBCD21F8 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___obj0, const RuntimeMethod* method);
// JSONObject JSONObject::Create(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_Create_m56DE67DE24BC7876C3524F1C9EB996DF73C4AAE4 (float ___val0, const RuntimeMethod* method);
// JSONObject JSONObject::Create(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_Create_m7607C428C178C76F59C1A431F810F601F90B78E2 (int32_t ___val0, const RuntimeMethod* method);
// JSONObject JSONObject::Create(JSONObject/AddJSONContents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_Create_mAB52FC035F2BB8998E2F36C840605B466157A88E (AddJSONContents_t30D87492AD29D0086FE679779BD8E02620377B16 * ___content0, const RuntimeMethod* method);
// System.Boolean JSONObject::op_Implicit(JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___o0, const RuntimeMethod* method);
// System.Void JSONObject::AddField(System.String,JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_AddField_m040F25BA9B3A4BDEBAAE2332096F3DCC3FDA538A (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___obj1, const RuntimeMethod* method);
// JSONObject JSONObject::Create(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_Create_m344E63B4E4A74F15284F157069013679E9F9BC0A (int64_t ___val0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void JSONObject::SetField(System.String,JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_SetField_m76DD197843038E35B835B8FE6585432219750040 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___obj1, const RuntimeMethod* method);
// System.Boolean JSONObject::HasField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_HasField_m0716AE8AC84412AFADF939A64D923C6B9C91E6B1 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, const RuntimeMethod* method);
// JSONObject JSONObject::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___index0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<JSONObject>::Remove(!0)
inline bool List_1_Remove_m0D6661E1ED36AA5F2B55676BBB46999DCE36E380 (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * __this, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<System.String>::Remove(!0)
inline bool List_1_Remove_m31C26124B7BB19A0E5C12113701DDE5046272F70 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::IndexOf(!0)
inline int32_t List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<JSONObject>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m5E4C1305E9BFAB895715B5636E5AA158528134EF (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// System.Boolean JSONObject::GetField(System.Boolean&,System.String,JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_mB39F437E39BE18848FA47612216038F35970AD14 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, bool* ___field0, String_t* ___name1, FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * ___fail2, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<JSONObject>::get_Item(System.Int32)
inline JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_inline (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * (*) (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void JSONObject/FieldNotFound::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldNotFound_Invoke_mF93C65AD79D8DEC6373E56CA7B9862F9E72EA18C (FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean JSONObject::GetField(System.Single&,System.String,JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m37FA2DD85D282EF09CD3790ECFAD348DACEF06B2 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, float* ___field0, String_t* ___name1, FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * ___fail2, const RuntimeMethod* method);
// System.Boolean JSONObject::GetField(System.Int32&,System.String,JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m75931E7F217795B23CE49E908882C35D623DDBB6 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, int32_t* ___field0, String_t* ___name1, FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * ___fail2, const RuntimeMethod* method);
// System.Boolean JSONObject::get_IsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_get_IsObject_m8AEF0729E0189B47917B081AA25536A699D108FB (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method);
// System.Boolean JSONObject::GetField(System.Int64&,System.String,JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m43C478E125C950A25092B00522F4D8C06123CE25 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, int64_t* ___field0, String_t* ___name1, FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * ___fail2, const RuntimeMethod* method);
// System.Boolean JSONObject::GetField(System.UInt32&,System.String,JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m6A8761BFDC11E5DFBDF08B2120BA0D0395BE0A2F (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, uint32_t* ___field0, String_t* ___name1, FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * ___fail2, const RuntimeMethod* method);
// System.Boolean JSONObject::GetField(System.String&,System.String,JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m34E78B3470121297625809968A259E7FD9BD0792 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t** ___field0, String_t* ___name1, FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * ___fail2, const RuntimeMethod* method);
// System.Void JSONObject/GetFieldResponse::Invoke(JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFieldResponse_Invoke_mF1BEAD17E9225211812605D01371DE9834947986 (GetFieldResponse_t43D0287B1D77E67E63ED111DCD7C7BE0EC183345 * __this, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___obj0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(!0)
inline bool List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<JSONObject>::Clear()
inline void List_1_Clear_mDA321A60902EA5DFB3B4B97E348FA9464F2DC50D (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
inline void List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.String JSONObject::Print(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONObject_Print_mCDAA742C47882262F801B45D3004ED7CEFB6BEB6 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, bool ___pretty0, const RuntimeMethod* method);
// System.Void JSONObject::MergeRecur(JSONObject,JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_MergeRecur_m9D1F0F685C959F0C564D775FF96EC620EA27E828 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___left0, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___right1, const RuntimeMethod* method);
// System.Void JSONObject::Absorb(JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Absorb_mDBE9D614A08AACFFBAA3CBC8AEF44C34C9C0C208 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___obj0, const RuntimeMethod* method);
// JSONObject JSONObject::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean JSONObject::get_isContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_get_isContainer_mE8E9995704509192E5B1958110C461BAC07B8C67 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method);
// System.Int32 JSONObject::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONObject_get_Count_m04F6896A6527D124CB068FDD945872BD698AF9BA (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method);
// System.Void JSONObject::set_Item(System.Int32,JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_set_Item_mA2253EB63C14426FD03F768405554601E47A56A0 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, int32_t ___index0, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___value1, const RuntimeMethod* method);
// System.Void JSONObject/<BakeAsync>d__107::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBakeAsyncU3Ed__107__ctor_m295B00065E6C1BF9A6A24DF11DB0506055DEA222 (U3CBakeAsyncU3Ed__107_t8E955808B36BA1E7480E5519CC31A36000C8ECC8 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void JSONObject::Stringify(System.Int32,System.Text.StringBuilder,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Stringify_m4F8AD45CB5A773F4867A19F25300BF2689574BB2 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, int32_t ___depth0, StringBuilder_t * ___builder1, bool ___pretty2, const RuntimeMethod* method);
// System.Void JSONObject/<PrintAsync>d__109::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrintAsyncU3Ed__109__ctor_m128B53CFBBBCE75AC44803F0DCBFF5EE2DDDAE7B (U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void JSONObject/<StringifyAsync>d__112::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStringifyAsyncU3Ed__112__ctor_m1E81AEAC2CD745EDB141D3F776D608F93B77E89E (U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F (int64_t* __this, const RuntimeMethod* method);
// System.Boolean System.Single::IsInfinity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_IsInfinity_m10D3B235800230231AFC34AFEC4D320D06F794C1 (float ___f0, const RuntimeMethod* method);
// System.Boolean System.Single::IsNegativeInfinity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_IsNegativeInfinity_m08D484739F9E73C171CFC2819E30A983E87C68AB (float ___f0, const RuntimeMethod* method);
// System.Boolean System.Single::IsNaN(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599 (float ___f0, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A (StringBuilder_t * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<JSONObject>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m4FA2E1C601928A6BA4BBA78642C50486DBB164B7 (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * __this, int32_t ___index0, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *, int32_t, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 *, const RuntimeMethod*))List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared)(__this, ___index0, ___value1, method);
}
// JSONObject JSONObject::GetField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_GetField_m3181F5223EF85F862D7C542FA18FD9AC1C626F2F (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(!0,!1)
inline void Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C (bool* __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Single JSONObject::get_f()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// JSONObject JSONObject::get_obj()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_get_obj_m3D2F576AAA7F2C22058E1D9B8D06514D1CE76DAD (const RuntimeMethod* method);
// System.Void JSONObject::AddField(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, float ___val1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_get_value_m6380C7449537F99361797225E179A9448A53DDF9 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * __this, const RuntimeMethod* method);
// System.Void JSONObject::AddField(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_AddField_m1B10F39E3871FB04D76FD982AF5BE52395D32079 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, int32_t ___val1, const RuntimeMethod* method);
// System.Void UnityEngine.LayerMask::set_value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayerMask_set_value_mE825B6131A75814FCF2EA32ECBE2A205E6531585 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.RectOffset::get_bottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_bottom_mDDEBF1389FC1B8DCD9FC15DF91E51D264925C00D (RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.RectOffset::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_left_m3B3066D09D8C9C94826258386B609CDBFFF11910 (RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.RectOffset::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_right_m889468939F3F926FE21F8E81E23C0342D45615C6 (RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.RectOffset::get_top()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_top_m42000C7682185F03F23E7E0C3E8EC026FDBAB9D1 (RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RectOffset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectOffset__ctor_m83529BADBE62C2D61ABEE8EB774BAB2D38DCF2AD (RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RectOffset::set_bottom(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectOffset_set_bottom_m9DD7D8F63F7ED6F22A3981E064F6D4DB0527A45E (RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RectOffset::set_left(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectOffset_set_left_m1D87F31ED5C73CEC8F5C42D9013FBB1527A34E36 (RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RectOffset::set_right(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectOffset_set_right_m63D81A7E7FF7060DA8E7C518105C7E2649A5AA1E (RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RectOffset::set_top(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectOffset_set_top_m647BE16B99A85B3FFEE89141EE084E9FBEBF0E86 (RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.InputField>()
inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_m3E3EE98663CCC30776E0944E1D251294B327691C (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Collections.IEnumerator LoadBundle::GetDataCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoadBundle_GetDataCoroutine_m736A3341FBEFDBB3110180D19D002F9775A7E3D2 (LoadBundle_tCCF56ED79520467E367004790C0CE3B5E1EEE9AC * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void LoadBundle/<GetDataCoroutine>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDataCoroutineU3Ed__3__ctor_m30CFDC7676B8D31C3BFE4B31CC735B5535649A6E (U3CGetDataCoroutineU3Ed__3_t1DB663A49515F78190F39164B3EA3A56BB70159C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator Loading::TestJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Loading_TestJson_mA53194C83BBE70C3364E9331C914B507EB5DAE89 (Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 * __this, String_t* ___Url0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void Loading/<TestJson>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTestJsonU3Ed__14__ctor_m46D12F456AE8D592319D54F72748BD67FC7955A7 (U3CTestJsonU3Ed__14_t0E0F080D1E6BE65AE94DA84D527DC6AE18884C84 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99 (RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void WeatherRequest/<TestJson>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTestJsonU3Ed__2__ctor_mC433A3D2F07074FCDE49FDE8DFE7C09802BABCF3 (U3CTestJsonU3Ed__2_t35860833CDAEE846BC940352E6837E64BFAA9284 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator WeatherRequest::TestJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeatherRequest_TestJson_m2CB7F2A49D7D5F9B6A9C9DF00E7AEDF06F329D65 (WeatherRequest_t239B2216025DFDE4ECF3A8FC584B8AB2A68F9814 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator WebRec::GetDataCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebRec_GetDataCoroutine_m38A53A2E6B77A358D89989954D4A17478DCCB379 (WebRec_t29F0736489F17B673ED3C779F877C39FFA79DBE6 * __this, const RuntimeMethod* method);
// System.Void WebRec/<GetDataCoroutine>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDataCoroutineU3Ed__7__ctor_m886E6D93AFE4FC2FF3AFD69B536D32139E813550 (U3CGetDataCoroutineU3Ed__7_t89F45FF117149FD57F06486198C50A74E853E0EF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void WebRec/<ShowDownloadProgress>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowDownloadProgressU3Ed__8__ctor_m4354E5F15C156BF6FFC02841D329FDA1E823D3FA (U3CShowDownloadProgressU3Ed__8_t441A453F57AACFFD32E89B9B6CAC8D6FE4E915EB * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.Void JSONObject/<BakeAsync>d__107::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBakeAsyncU3Ed__107_U3CU3Em__Finally1_m5D00B52B5C1E5A8A8396AFA309F546CFAB4DD4A2 (U3CBakeAsyncU3Ed__107_t8E955808B36BA1E7480E5519CC31A36000C8ECC8 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.String> JSONObject::PrintAsync(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONObject_PrintAsync_m109E1BB961985C7BA46DBD74D2569BDB3DB0412A (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, bool ___pretty0, const RuntimeMethod* method);
// System.Void JSONObject/<BakeAsync>d__107::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBakeAsyncU3Ed__107_System_IDisposable_Dispose_mB99F15612806D71A45B92713B6BC4D4102550B8E (U3CBakeAsyncU3Ed__107_t8E955808B36BA1E7480E5519CC31A36000C8ECC8 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Object> JSONObject/<BakeAsync>d__107::System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBakeAsyncU3Ed__107_System_Collections_Generic_IEnumerableU3CSystem_ObjectU3E_GetEnumerator_mCC6C96701DBF5E159EC0CB84B81ED9349B00EDE4 (U3CBakeAsyncU3Ed__107_t8E955808B36BA1E7480E5519CC31A36000C8ECC8 * __this, const RuntimeMethod* method);
// System.Void JSONObject/<PrintAsync>d__109::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrintAsyncU3Ed__109_U3CU3Em__Finally1_m72AACDC1785FBEF01E4AA2BD2DC779AC621BF951 (U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Reset_m79B1D65568465AE5B1A68EF3A2A65218590ABD14 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerable JSONObject::StringifyAsync(System.Int32,System.Text.StringBuilder,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONObject_StringifyAsync_m1FDB9203BA364F417A9DD46DA8D6739AA126EAEA (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, int32_t ___depth0, StringBuilder_t * ___builder1, bool ___pretty2, const RuntimeMethod* method);
// System.Void JSONObject/<PrintAsync>d__109::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrintAsyncU3Ed__109_System_IDisposable_Dispose_m2F69091A70FF3F0838389123E81E666B036CCBEF (U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.String> JSONObject/<PrintAsync>d__109::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPrintAsyncU3Ed__109_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m009FC84C5E75F00409E63673DD6D99DDB7181DEC (U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7 * __this, const RuntimeMethod* method);
// System.Void JSONObject/<StringifyAsync>d__112::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStringifyAsyncU3Ed__112_U3CU3Em__Finally1_m539FBD93318D1FE346BBF25E84BB17C6C842E802 (U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124 * __this, const RuntimeMethod* method);
// System.Void JSONObject/<StringifyAsync>d__112::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStringifyAsyncU3Ed__112_U3CU3Em__Finally2_m09772A53FCB3C6092DA0A77AAC969111CAE8DF6F (U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124 * __this, const RuntimeMethod* method);
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  Stopwatch_get_Elapsed_m75C9FF87F9007FC8738B722002A8F8C302F5CFA6 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.Void JSONObject/<StringifyAsync>d__112::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStringifyAsyncU3Ed__112_System_IDisposable_Dispose_m1B455C9D97ADD81D46CAAFB0C4583F03B0AC0422 (U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Object> JSONObject/<StringifyAsync>d__112::System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStringifyAsyncU3Ed__112_System_Collections_Generic_IEnumerableU3CSystem_ObjectU3E_GetEnumerator_m377422C04D744EE89A37EE56AB2B78A0D10ED705 (U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124 * __this, const RuntimeMethod* method);
// System.Void LoadBundle/<GetDataCoroutine>d__3::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDataCoroutineU3Ed__3_U3CU3Em__Finally1_m9237390DB74027A0508070995FBA7A2DA42FC89D (U3CGetDataCoroutineU3Ed__3_t1DB663A49515F78190F39164B3EA3A56BB70159C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A (String_t* ___uri0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isNetworkError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isNetworkError_m0126D38DA9B39159CB12F8DE0C3962A4BEEE5C03 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isHttpError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isHttpError_m23ADCBE1CF082A940EF6AA75A15051583228B616 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method);
// System.Void LoadBundle/<GetDataCoroutine>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDataCoroutineU3Ed__3_System_IDisposable_Dispose_mC3935F228FD0DBBAA6CAFABFA066F7F8B9DA12DC (U3CGetDataCoroutineU3Ed__3_t1DB663A49515F78190F39164B3EA3A56BB70159C * __this, const RuntimeMethod* method);
// System.Void Loading::<TestJson>g__TaskOnClick|14_1(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loading_U3CTestJsonU3Eg__TaskOnClickU7C14_1_m5EB3DB80C537E2E21B664D7D0F0CB556351F0B89 (Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 * __this, String_t* ___tip0, String_t* ___text1, int32_t ___t2, const RuntimeMethod* method);
// T[] JsonHelper::getJsonArray<Categorys/Root>(System.String)
inline RootU5BU5D_t632F3B7EF48973C939950798ACE5B91D5E29EF30* JsonHelper_getJsonArray_TisRoot_tC9A64770600B9FA62079AE4160AB035C6597B841_m1DE7EEF7E1680755D305ECEAD640ED0231ABB922 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  RootU5BU5D_t632F3B7EF48973C939950798ACE5B91D5E29EF30* (*) (String_t*, const RuntimeMethod*))JsonHelper_getJsonArray_TisRuntimeObject_m8806B094904D150DFDB1657E3CFA5DC628A61E0E_gshared)(___json0, method);
}
// System.Void Loading/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_mB64A06A2A7C94D64F50F370326A9D8B2BFB3A760 (U3CU3Ec__DisplayClass14_0_tF2FB2E5FB66F24FBD986C98569C62F25795EEAC0 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.UI.Button>(!!0,UnityEngine.Transform)
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * Object_Instantiate_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m253C81629213F944DA2E187C83D50559CCE75B89 (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared)(___original0, ___parent1, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.RawImage>()
inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * Component_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mEFB8C40CB9606CC28E04D45092013ED9B5C70E9A (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<Test/Root>(System.String)
inline Root_t9023D5FD4704C6B8D12E0FAB93277288A86EBA21 * JsonUtility_FromJson_TisRoot_t9023D5FD4704C6B8D12E0FAB93277288A86EBA21_mBAB79FAE1F8A5B181AA06A58CC710E95CC15C16D (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  Root_t9023D5FD4704C6B8D12E0FAB93277288A86EBA21 * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAssetBundle::GetAssetBundle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequestAssetBundle_GetAssetBundle_m59D1CAF6EBF34A45A33EE4627AFED7109FF99B26 (String_t* ___uri0, const RuntimeMethod* method);
// System.Collections.IEnumerator WebRec::ShowDownloadProgress(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebRec_ShowDownloadProgress_m8C30CF9C09A4FD13C40654992A3DB014363E1A18 (WebRec_t29F0736489F17B673ED3C779F877C39FFA79DBE6 * __this, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___rec0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.AssetBundle UnityEngine.Networking.DownloadHandlerAssetBundle::GetContent(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * DownloadHandlerAssetBundle_GetContent_mB1D51000A1B402A8045228FC6399315D82916463 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___www0, const RuntimeMethod* method);
// !!0 UnityEngine.AssetBundle::LoadAsset<UnityEngine.GameObject>(System.String)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * AssetBundle_LoadAsset_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m63A1BA42E676CD4031EDA86CF3BFB9811E7A67B5 (AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 *, String_t*, const RuntimeMethod*))AssetBundle_LoadAsset_TisRuntimeObject_m5C55BB9F750DD28D2C89E2FED48B01FE3CF18158_gshared)(__this, ___name0, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Slider>()
inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * GameObject_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mCF2C6D0E8D0B7E12C53CF51A613D9A6545FC05F9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Single UnityEngine.Networking.UnityWebRequest::get_downloadProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityWebRequest_get_downloadProgress_m364504584506899F3E60F0D67017C290526D5636 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isDone_mF8C92D10767B80877BCFE6D119CBE9090ACCDFBD (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BundledObjectLoader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BundledObjectLoader_Start_mA7E613F3C5A607EB0C2490584CEA3476678C0A97 (BundledObjectLoader_tCF7915F0B058BAD21E4B9C37ED5ABADE52DDBDCD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58ABB89C55D9FF13B0579EB00C732346BD685849);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D29CA7C6B00DD1F9A49A832DAB607381505F8E9);
		s_Il2CppMethodInitialized = true;
	}
	AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * V_0 = NULL;
	{
		// AssetBundle localAssetBundle = AssetBundle.LoadFromFile(Path.Combine(@"C:\Royal Platform\AssetBundle\Assets\AssetBundles",bundleName));
		String_t* L_0 = __this->get_bundleName_4();
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(_stringLiteral5D29CA7C6B00DD1F9A49A832DAB607381505F8E9, L_0, /*hidden argument*/NULL);
		AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * L_2;
		L_2 = AssetBundle_LoadFromFile_m326379558FA2CA731C294D5F9905EA3EAE3B5E52(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if(localAssetBundle==null)
		AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// Debug.LogError("Failed to load AssetBundle");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral58ABB89C55D9FF13B0579EB00C732346BD685849, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_002a:
	{
		// var asset = localAssetBundle.LoadAllAssetsAsync();
		AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * L_5 = V_0;
		NullCheck(L_5);
		AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * L_6;
		L_6 = AssetBundle_LoadAllAssetsAsync_mFBD03164799EA8A821309FBE8C4C08340943A5E5(L_5, /*hidden argument*/NULL);
		// Instantiate(asset.asset);
		NullCheck(L_6);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_7;
		L_7 = AssetBundleRequest_get_asset_mB0A96FBC026D143638E467DEB37228ACD55F1813(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_8;
		L_8 = Object_Instantiate_m565A02EA45AEA7442E19FDC8E82695491938CB5A(L_7, /*hidden argument*/NULL);
		// localAssetBundle.Unload(false);
		AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * L_9 = V_0;
		NullCheck(L_9);
		AssetBundle_Unload_m0DEBACB284F6CECA8DF21486D1BBE1189F6A5D66(L_9, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BundledObjectLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BundledObjectLoader__ctor_mD1B2B245352196FDEF495B0CF2039A98C38C8D09 (BundledObjectLoader_tCF7915F0B058BAD21E4B9C37ED5ABADE52DDBDCD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DA19BCBB223DAB0C347965DD4F20F5DC6CF93ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string bundleName = "spher";
		__this->set_bundleName_4(_stringLiteral5DA19BCBB223DAB0C347965DD4F20F5DC6CF93ED);
		// public string assetName = "spher";
		__this->set_assetName_5(_stringLiteral5DA19BCBB223DAB0C347965DD4F20F5DC6CF93ED);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Categorys::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Categorys__ctor_m69E6F33B77B3122FD0E5EE2ADB1B365C197D4720 (Categorys_t0D83D62AC2CF4157DB440E2A3B3F3F05E699D910 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean JSONObject::get_isContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_get_isContainer_mE8E9995704509192E5B1958110C461BAC07B8C67 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method)
{
	{
		// public bool isContainer { get { return (type == Type.ARRAY || type == Type.OBJECT); } }
		int32_t L_0 = __this->get_type_6();
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = __this->get_type_6();
		return (bool)((((int32_t)L_1) == ((int32_t)3))? 1 : 0);
	}

IL_0013:
	{
		return (bool)1;
	}
}
// System.Int32 JSONObject::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONObject_get_Count_m04F6896A6527D124CB068FDD945872BD698AF9BA (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(list == null)
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_0 = __this->get_list_7();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_000a:
	{
		// return list.Count;
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_1 = __this->get_list_7();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_1, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		return L_2;
	}
}
// System.Single JSONObject::get_f()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method)
{
	{
		// return n;
		float L_0 = __this->get_n_10();
		return L_0;
	}
}
// JSONObject JSONObject::get_nullJO()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_get_nullJO_m0D646D2F8C911B89621E263C61A821DCCD792214 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static JSONObject nullJO { get { return Create(Type.NULL); } }    //an empty, null object
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0;
		L_0 = JSONObject_Create_m168E1FB446E57A739497DA9DE25269CF9C224B7D(0, /*hidden argument*/NULL);
		return L_0;
	}
}
// JSONObject JSONObject::get_obj()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_get_obj_m3D2F576AAA7F2C22058E1D9B8D06514D1CE76DAD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static JSONObject obj { get { return Create(Type.OBJECT); } }        //an empty object
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0;
		L_0 = JSONObject_Create_m168E1FB446E57A739497DA9DE25269CF9C224B7D(3, /*hidden argument*/NULL);
		return L_0;
	}
}
// JSONObject JSONObject::get_arr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_get_arr_mF5F58F56AC6036E10D447CF19C8ED64EE1A049A1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static JSONObject arr { get { return Create(Type.ARRAY); } }        //an empty array
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0;
		L_0 = JSONObject_Create_m168E1FB446E57A739497DA9DE25269CF9C224B7D(4, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void JSONObject::.ctor(JSONObject/Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_m3F4051FBBEFCF51ECCCB431AF81C21A6D9603B37 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, int32_t ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JSONObject(Type t) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// type = t;
		int32_t L_0 = ___t0;
		__this->set_type_6(L_0);
		int32_t L_1 = ___t0;
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2 = ___t0;
		if ((!(((uint32_t)L_2) == ((uint32_t)4))))
		{
			goto IL_0037;
		}
	}
	{
		// list = new List<JSONObject>();
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_3 = (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *)il2cpp_codegen_object_new(List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890(L_3, /*hidden argument*/List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		__this->set_list_7(L_3);
		// break;
		return;
	}

IL_0021:
	{
		// list = new List<JSONObject>();
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_4 = (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *)il2cpp_codegen_object_new(List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890(L_4, /*hidden argument*/List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		__this->set_list_7(L_4);
		// keys = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_5 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_5, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_keys_8(L_5);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void JSONObject::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_mA8F45F91955DFCD22F3497C487E05FFB457DA1A5 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, bool ___b0, const RuntimeMethod* method)
{
	{
		// public JSONObject(bool b) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// type = Type.BOOL;
		__this->set_type_6(5);
		// this.b = b;
		bool L_0 = ___b0;
		__this->set_b_13(L_0);
		// }
		return;
	}
}
// System.Void JSONObject::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_mB76245AD61F313859EAB4BB02F6762E2478D7712 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, float ___f0, const RuntimeMethod* method)
{
	{
		// public JSONObject(float f) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// type = Type.NUMBER;
		__this->set_type_6(2);
		// n = f;
		float L_0 = ___f0;
		__this->set_n_10(L_0);
		// }
		return;
	}
}
// System.Void JSONObject::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_mBE6DB3AE057F8ADB880F7B2E62FFDA98A39A77EE (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		// public JSONObject(int i) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// type = Type.NUMBER;
		__this->set_type_6(2);
		// this.i = i;
		int32_t L_0 = ___i0;
		__this->set_i_12(((int64_t)((int64_t)L_0)));
		// useInt = true;
		__this->set_useInt_11((bool)1);
		// n = i;
		int32_t L_1 = ___i0;
		__this->set_n_10(((float)((float)L_1)));
		// }
		return;
	}
}
// System.Void JSONObject::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_m94F9DBC5031AE589A3532B23131341954C32ED8F (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, int64_t ___l0, const RuntimeMethod* method)
{
	{
		// public JSONObject(long l) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// type = Type.NUMBER;
		__this->set_type_6(2);
		// i = l;
		int64_t L_0 = ___l0;
		__this->set_i_12(L_0);
		// useInt = true;
		__this->set_useInt_11((bool)1);
		// n = l;
		int64_t L_1 = ___l0;
		__this->set_n_10(((float)((float)L_1)));
		// }
		return;
	}
}
// System.Void JSONObject::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_mA2BE23A318B156071B9EF78B86DD2FFAA8298D8C (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___dic0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// public JSONObject(Dictionary<string, string> dic) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// type = Type.OBJECT;
		__this->set_type_6(3);
		// keys = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_keys_8(L_0);
		// list = new List<JSONObject>();
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_1 = (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *)il2cpp_codegen_object_new(List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890(L_1, /*hidden argument*/List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		__this->set_list_7(L_1);
		// foreach(KeyValuePair<string, string> kvp in dic) {
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_2 = ___dic0;
		NullCheck(L_2);
		Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  L_3;
		L_3 = Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5(L_2, /*hidden argument*/Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005d;
		}

IL_002c:
		{
			// foreach(KeyValuePair<string, string> kvp in dic) {
			KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  L_4;
			L_4 = Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_inline((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_0), /*hidden argument*/Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var);
			V_1 = L_4;
			// keys.Add(kvp.Key);
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_5 = __this->get_keys_8();
			String_t* L_6;
			L_6 = KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
			NullCheck(L_5);
			List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_5, L_6, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
			// list.Add(CreateStringObject(kvp.Value));
			List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_7 = __this->get_list_7();
			String_t* L_8;
			L_8 = KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_9;
			L_9 = JSONObject_CreateStringObject_m4FE0CF34A1B7810B54654B6E66C5EBC579EE8E02(L_8, /*hidden argument*/NULL);
			NullCheck(L_7);
			List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296(L_7, L_9, /*hidden argument*/List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296_RuntimeMethod_var);
		}

IL_005d:
		{
			// foreach(KeyValuePair<string, string> kvp in dic) {
			bool L_10;
			L_10 = Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_002c;
			}
		}

IL_0066:
		{
			IL2CPP_LEAVE(0x76, FINALLY_0068);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0068;
	}

FINALLY_0068:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_0), /*hidden argument*/Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var);
		IL2CPP_END_FINALLY(104)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(104)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x76, IL_0076)
	}

IL_0076:
	{
		// }
		return;
	}
}
// System.Void JSONObject::.ctor(System.Collections.Generic.Dictionary`2<System.String,JSONObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_m99526F073BE03527E424E3A3D44419524520A685 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F * ___dic0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m4EBF914F9BDA85AAF1017608946F83B5D0CB392E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m99F282CCCADABD18013C7C39BEB31BD5E60D3F2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m217D5D7E8406422DB793EC2B6F914101D73A7A56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2CACA29BDF60CD27C12E402A5C91A0E2954550A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m4BF4E7D9E3BE57B982A403C1AA5144962A065A75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m2642B52554EFD93A21D9591EC5FA523844453EB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t4140A3D2CCD94C85AD96660948A0C670123AE464  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// public JSONObject(Dictionary<string, JSONObject> dic) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// type = Type.OBJECT;
		__this->set_type_6(3);
		// keys = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_keys_8(L_0);
		// list = new List<JSONObject>();
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_1 = (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *)il2cpp_codegen_object_new(List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890(L_1, /*hidden argument*/List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		__this->set_list_7(L_1);
		// foreach(KeyValuePair<string, JSONObject> kvp in dic) {
		Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F * L_2 = ___dic0;
		NullCheck(L_2);
		Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033  L_3;
		L_3 = Dictionary_2_GetEnumerator_m4EBF914F9BDA85AAF1017608946F83B5D0CB392E(L_2, /*hidden argument*/Dictionary_2_GetEnumerator_m4EBF914F9BDA85AAF1017608946F83B5D0CB392E_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0058;
		}

IL_002c:
		{
			// foreach(KeyValuePair<string, JSONObject> kvp in dic) {
			KeyValuePair_2_t4140A3D2CCD94C85AD96660948A0C670123AE464  L_4;
			L_4 = Enumerator_get_Current_m2CACA29BDF60CD27C12E402A5C91A0E2954550A0_inline((Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m2CACA29BDF60CD27C12E402A5C91A0E2954550A0_RuntimeMethod_var);
			V_1 = L_4;
			// keys.Add(kvp.Key);
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_5 = __this->get_keys_8();
			String_t* L_6;
			L_6 = KeyValuePair_2_get_Key_m4BF4E7D9E3BE57B982A403C1AA5144962A065A75_inline((KeyValuePair_2_t4140A3D2CCD94C85AD96660948A0C670123AE464 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m4BF4E7D9E3BE57B982A403C1AA5144962A065A75_RuntimeMethod_var);
			NullCheck(L_5);
			List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_5, L_6, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
			// list.Add(kvp.Value);
			List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_7 = __this->get_list_7();
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_8;
			L_8 = KeyValuePair_2_get_Value_m2642B52554EFD93A21D9591EC5FA523844453EB4_inline((KeyValuePair_2_t4140A3D2CCD94C85AD96660948A0C670123AE464 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m2642B52554EFD93A21D9591EC5FA523844453EB4_RuntimeMethod_var);
			NullCheck(L_7);
			List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296(L_7, L_8, /*hidden argument*/List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296_RuntimeMethod_var);
		}

IL_0058:
		{
			// foreach(KeyValuePair<string, JSONObject> kvp in dic) {
			bool L_9;
			L_9 = Enumerator_MoveNext_m217D5D7E8406422DB793EC2B6F914101D73A7A56((Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m217D5D7E8406422DB793EC2B6F914101D73A7A56_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_002c;
			}
		}

IL_0061:
		{
			IL2CPP_LEAVE(0x71, FINALLY_0063);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0063;
	}

FINALLY_0063:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m99F282CCCADABD18013C7C39BEB31BD5E60D3F2E((Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m99F282CCCADABD18013C7C39BEB31BD5E60D3F2E_RuntimeMethod_var);
		IL2CPP_END_FINALLY(99)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(99)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x71, IL_0071)
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void JSONObject::.ctor(JSONObject/AddJSONContents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_m75891E139819C16F694D11DEBFBF045165960AAE (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, AddJSONContents_t30D87492AD29D0086FE679779BD8E02620377B16 * ___content0, const RuntimeMethod* method)
{
	{
		// public JSONObject(AddJSONContents content) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// content.Invoke(this);
		AddJSONContents_t30D87492AD29D0086FE679779BD8E02620377B16 * L_0 = ___content0;
		NullCheck(L_0);
		AddJSONContents_Invoke_m5EB8C5BFCDB131C8317BE615AE64AB300FF77008(L_0, __this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JSONObject::.ctor(JSONObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_m3D456512E7A14D5A25FBBC6E2CCF4F3517C92331 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, JSONObjectU5BU5D_tFB4FA33E0B9559355A1E9D5BFE4DBF2B68B7B96E* ___objs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4853D5C6453425D8A779EC4A51C90D5BE068A8F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JSONObject(JSONObject[] objs) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// type = Type.ARRAY;
		__this->set_type_6(4);
		// list = new List<JSONObject>(objs);
		JSONObjectU5BU5D_tFB4FA33E0B9559355A1E9D5BFE4DBF2B68B7B96E* L_0 = ___objs0;
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_1 = (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *)il2cpp_codegen_object_new(List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		List_1__ctor_m4853D5C6453425D8A779EC4A51C90D5BE068A8F3(L_1, (RuntimeObject*)(RuntimeObject*)L_0, /*hidden argument*/List_1__ctor_m4853D5C6453425D8A779EC4A51C90D5BE068A8F3_RuntimeMethod_var);
		__this->set_list_7(L_1);
		// }
		return;
	}
}
// JSONObject JSONObject::StringObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_StringObject_mB7B0A6791AE600E2D61D41D0C706BB7CF8C33D50 (String_t* ___val0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static JSONObject StringObject(string val) { return CreateStringObject(val); }
		String_t* L_0 = ___val0;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1;
		L_1 = JSONObject_CreateStringObject_m4FE0CF34A1B7810B54654B6E66C5EBC579EE8E02(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void JSONObject::Absorb(JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Absorb_mDBE9D614A08AACFFBAA3CBC8AEF44C34C9C0C208 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m67797787DD90CC9BC8EC6EA8EA1E1760EF88302C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m8CAAD59303D53F10C2B7DDD2C88C2AF7D0F4ADC1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// list.AddRange(obj.list);
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_0 = __this->get_list_7();
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1 = ___obj0;
		NullCheck(L_1);
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_2 = L_1->get_list_7();
		NullCheck(L_0);
		List_1_AddRange_m8CAAD59303D53F10C2B7DDD2C88C2AF7D0F4ADC1(L_0, L_2, /*hidden argument*/List_1_AddRange_m8CAAD59303D53F10C2B7DDD2C88C2AF7D0F4ADC1_RuntimeMethod_var);
		// keys.AddRange(obj.keys);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_3 = __this->get_keys_8();
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_4 = ___obj0;
		NullCheck(L_4);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_5 = L_4->get_keys_8();
		NullCheck(L_3);
		List_1_AddRange_m67797787DD90CC9BC8EC6EA8EA1E1760EF88302C(L_3, L_5, /*hidden argument*/List_1_AddRange_m67797787DD90CC9BC8EC6EA8EA1E1760EF88302C_RuntimeMethod_var);
		// str = obj.str;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_6 = ___obj0;
		NullCheck(L_6);
		String_t* L_7 = L_6->get_str_9();
		__this->set_str_9(L_7);
		// n = obj.n;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_8 = ___obj0;
		NullCheck(L_8);
		float L_9 = L_8->get_n_10();
		__this->set_n_10(L_9);
		// useInt = obj.useInt;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_10 = ___obj0;
		NullCheck(L_10);
		bool L_11 = L_10->get_useInt_11();
		__this->set_useInt_11(L_11);
		// i = obj.i;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_12 = ___obj0;
		NullCheck(L_12);
		int64_t L_13 = L_12->get_i_12();
		__this->set_i_12(L_13);
		// b = obj.b;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_14 = ___obj0;
		NullCheck(L_14);
		bool L_15 = L_14->get_b_13();
		__this->set_b_13(L_15);
		// type = obj.type;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_16 = ___obj0;
		NullCheck(L_16);
		int32_t L_17 = L_16->get_type_6();
		__this->set_type_6(L_17);
		// }
		return;
	}
}
// JSONObject JSONObject::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_Create_m56FF68A8DD4EBDBB25F11DA3D69853FDF544EEDE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new JSONObject();
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0 = (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 *)il2cpp_codegen_object_new(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject__ctor_mAD15D168DB9973AE0F2B2954CE31C2CBC772D2C8(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// JSONObject JSONObject::Create(JSONObject/Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_Create_m168E1FB446E57A739497DA9DE25269CF9C224B7D (int32_t ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * V_0 = NULL;
	{
		// JSONObject obj = Create();
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0;
		L_0 = JSONObject_Create_m56FF68A8DD4EBDBB25F11DA3D69853FDF544EEDE(/*hidden argument*/NULL);
		V_0 = L_0;
		// obj.type = t;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1 = V_0;
		int32_t L_2 = ___t0;
		NullCheck(L_1);
		L_1->set_type_6(L_2);
		int32_t L_3 = ___t0;
		if ((((int32_t)L_3) == ((int32_t)3)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___t0;
		if ((!(((uint32_t)L_4) == ((uint32_t)4))))
		{
			goto IL_0038;
		}
	}
	{
		// obj.list = new List<JSONObject>();
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_5 = V_0;
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_6 = (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *)il2cpp_codegen_object_new(List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890(L_6, /*hidden argument*/List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		NullCheck(L_5);
		L_5->set_list_7(L_6);
		// break;
		goto IL_0038;
	}

IL_0022:
	{
		// obj.list = new List<JSONObject>();
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_7 = V_0;
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_8 = (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *)il2cpp_codegen_object_new(List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890(L_8, /*hidden argument*/List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		NullCheck(L_7);
		L_7->set_list_7(L_8);
		// obj.keys = new List<string>();
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_9 = V_0;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_10 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_10, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		NullCheck(L_9);
		L_9->set_keys_8(L_10);
	}

IL_0038:
	{
		// return obj;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_11 = V_0;
		return L_11;
	}
}
// JSONObject JSONObject::Create(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_Create_m0C889649B7E0EC710E0CC1E8DB8A847CECBF0108 (bool ___val0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JSONObject obj = Create();
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0;
		L_0 = JSONObject_Create_m56FF68A8DD4EBDBB25F11DA3D69853FDF544EEDE(/*hidden argument*/NULL);
		// obj.type = Type.BOOL;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_type_6(5);
		// obj.b = val;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2 = L_1;
		bool L_3 = ___val0;
		NullCheck(L_2);
		L_2->set_b_13(L_3);
		// return obj;
		return L_2;
	}
}
// JSONObject JSONObject::Create(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_Create_m56DE67DE24BC7876C3524F1C9EB996DF73C4AAE4 (float ___val0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JSONObject obj = Create();
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0;
		L_0 = JSONObject_Create_m56FF68A8DD4EBDBB25F11DA3D69853FDF544EEDE(/*hidden argument*/NULL);
		// obj.type = Type.NUMBER;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_type_6(2);
		// obj.n = val;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2 = L_1;
		float L_3 = ___val0;
		NullCheck(L_2);
		L_2->set_n_10(L_3);
		// return obj;
		return L_2;
	}
}
// JSONObject JSONObject::Create(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_Create_m7607C428C178C76F59C1A431F810F601F90B78E2 (int32_t ___val0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JSONObject obj = Create();
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0;
		L_0 = JSONObject_Create_m56FF68A8DD4EBDBB25F11DA3D69853FDF544EEDE(/*hidden argument*/NULL);
		// obj.type = Type.NUMBER;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_type_6(2);
		// obj.n = val;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2 = L_1;
		int32_t L_3 = ___val0;
		NullCheck(L_2);
		L_2->set_n_10(((float)((float)L_3)));
		// obj.useInt = true;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_4 = L_2;
		NullCheck(L_4);
		L_4->set_useInt_11((bool)1);
		// obj.i = val;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_5 = L_4;
		int32_t L_6 = ___val0;
		NullCheck(L_5);
		L_5->set_i_12(((int64_t)((int64_t)L_6)));
		// return obj;
		return L_5;
	}
}
// JSONObject JSONObject::Create(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_Create_m344E63B4E4A74F15284F157069013679E9F9BC0A (int64_t ___val0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JSONObject obj = Create();
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0;
		L_0 = JSONObject_Create_m56FF68A8DD4EBDBB25F11DA3D69853FDF544EEDE(/*hidden argument*/NULL);
		// obj.type = Type.NUMBER;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_type_6(2);
		// obj.n = val;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2 = L_1;
		int64_t L_3 = ___val0;
		NullCheck(L_2);
		L_2->set_n_10(((float)((float)L_3)));
		// obj.useInt = true;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_4 = L_2;
		NullCheck(L_4);
		L_4->set_useInt_11((bool)1);
		// obj.i = val;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_5 = L_4;
		int64_t L_6 = ___val0;
		NullCheck(L_5);
		L_5->set_i_12(L_6);
		// return obj;
		return L_5;
	}
}
// JSONObject JSONObject::CreateStringObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_CreateStringObject_m4FE0CF34A1B7810B54654B6E66C5EBC579EE8E02 (String_t* ___val0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JSONObject obj = Create();
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0;
		L_0 = JSONObject_Create_m56FF68A8DD4EBDBB25F11DA3D69853FDF544EEDE(/*hidden argument*/NULL);
		// obj.type = Type.STRING;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_type_6(1);
		// obj.str = val;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2 = L_1;
		String_t* L_3 = ___val0;
		NullCheck(L_2);
		L_2->set_str_9(L_3);
		// return obj;
		return L_2;
	}
}
// JSONObject JSONObject::CreateBakedObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_CreateBakedObject_mD1360B3E5E493D5647B64617F0E894A42307FCDD (String_t* ___val0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JSONObject bakedObject = Create();
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0;
		L_0 = JSONObject_Create_m56FF68A8DD4EBDBB25F11DA3D69853FDF544EEDE(/*hidden argument*/NULL);
		// bakedObject.type = Type.BAKED;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_type_6(6);
		// bakedObject.str = val;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2 = L_1;
		String_t* L_3 = ___val0;
		NullCheck(L_2);
		L_2->set_str_9(L_3);
		// return bakedObject;
		return L_2;
	}
}
// JSONObject JSONObject::Create(System.String,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_Create_m6869838BC7DFE7BA8C73FF0CDC7DAB93B25F3C73 (String_t* ___val0, int32_t ___maxDepth1, bool ___storeExcessLevels2, bool ___strict3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JSONObject obj = Create();
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0;
		L_0 = JSONObject_Create_m56FF68A8DD4EBDBB25F11DA3D69853FDF544EEDE(/*hidden argument*/NULL);
		// obj.Parse(val, maxDepth, storeExcessLevels, strict);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1 = L_0;
		String_t* L_2 = ___val0;
		int32_t L_3 = ___maxDepth1;
		bool L_4 = ___storeExcessLevels2;
		bool L_5 = ___strict3;
		NullCheck(L_1);
		JSONObject_Parse_m37AF1F1D86E0D2CE4873C410679DD9F003AD793B(L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		// return obj;
		return L_1;
	}
}
// JSONObject JSONObject::Create(JSONObject/AddJSONContents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_Create_mAB52FC035F2BB8998E2F36C840605B466157A88E (AddJSONContents_t30D87492AD29D0086FE679779BD8E02620377B16 * ___content0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * V_0 = NULL;
	{
		// JSONObject obj = Create();
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0;
		L_0 = JSONObject_Create_m56FF68A8DD4EBDBB25F11DA3D69853FDF544EEDE(/*hidden argument*/NULL);
		V_0 = L_0;
		// content.Invoke(obj);
		AddJSONContents_t30D87492AD29D0086FE679779BD8E02620377B16 * L_1 = ___content0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2 = V_0;
		NullCheck(L_1);
		AddJSONContents_Invoke_m5EB8C5BFCDB131C8317BE615AE64AB300FF77008(L_1, L_2, /*hidden argument*/NULL);
		// return obj;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_3 = V_0;
		return L_3;
	}
}
// JSONObject JSONObject::Create(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_Create_mF957FF6A085214A0CEFA80D3AAB55815586685C2 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___dic0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * V_0 = NULL;
	Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// JSONObject obj = Create();
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0;
		L_0 = JSONObject_Create_m56FF68A8DD4EBDBB25F11DA3D69853FDF544EEDE(/*hidden argument*/NULL);
		V_0 = L_0;
		// obj.type = Type.OBJECT;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_type_6(3);
		// obj.keys = new List<string>();
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2 = V_0;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_3 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_3, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->set_keys_8(L_3);
		// obj.list = new List<JSONObject>();
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_4 = V_0;
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_5 = (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *)il2cpp_codegen_object_new(List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890(L_5, /*hidden argument*/List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->set_list_7(L_5);
		// foreach(KeyValuePair<string, string> kvp in dic) {
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_6 = ___dic0;
		NullCheck(L_6);
		Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  L_7;
		L_7 = Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5(L_6, /*hidden argument*/Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var);
		V_1 = L_7;
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005d;
		}

IL_002c:
		{
			// foreach(KeyValuePair<string, string> kvp in dic) {
			KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  L_8;
			L_8 = Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_inline((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_1), /*hidden argument*/Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var);
			V_2 = L_8;
			// obj.keys.Add(kvp.Key);
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_9 = V_0;
			NullCheck(L_9);
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_10 = L_9->get_keys_8();
			String_t* L_11;
			L_11 = KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
			NullCheck(L_10);
			List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_10, L_11, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
			// obj.list.Add(CreateStringObject(kvp.Value));
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_12 = V_0;
			NullCheck(L_12);
			List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_13 = L_12->get_list_7();
			String_t* L_14;
			L_14 = KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_15;
			L_15 = JSONObject_CreateStringObject_m4FE0CF34A1B7810B54654B6E66C5EBC579EE8E02(L_14, /*hidden argument*/NULL);
			NullCheck(L_13);
			List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296(L_13, L_15, /*hidden argument*/List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296_RuntimeMethod_var);
		}

IL_005d:
		{
			// foreach(KeyValuePair<string, string> kvp in dic) {
			bool L_16;
			L_16 = Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var);
			if (L_16)
			{
				goto IL_002c;
			}
		}

IL_0066:
		{
			IL2CPP_LEAVE(0x76, FINALLY_0068);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0068;
	}

FINALLY_0068:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_1), /*hidden argument*/Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var);
		IL2CPP_END_FINALLY(104)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(104)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x76, IL_0076)
	}

IL_0076:
	{
		// return obj;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_17 = V_0;
		return L_17;
	}
}
// System.Void JSONObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_mAD15D168DB9973AE0F2B2954CE31C2CBC772D2C8 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method)
{
	{
		// public JSONObject() { }
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public JSONObject() { }
		return;
	}
}
// System.Void JSONObject::.ctor(System.String,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_m2066661B920923AFFFC27D7682DBC76E6A13F9CB (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___str0, int32_t ___maxDepth1, bool ___storeExcessLevels2, bool ___strict3, const RuntimeMethod* method)
{
	{
		// public JSONObject(string str, int maxDepth = -2, bool storeExcessLevels = false, bool strict = false) {    //create a new JSONObject from a string (this will also create any children, and parse the whole string)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Parse(str, maxDepth, storeExcessLevels, strict);
		String_t* L_0 = ___str0;
		int32_t L_1 = ___maxDepth1;
		bool L_2 = ___storeExcessLevels2;
		bool L_3 = ___strict3;
		JSONObject_Parse_m37AF1F1D86E0D2CE4873C410679DD9F003AD793B(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JSONObject::Parse(System.String,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Parse_m37AF1F1D86E0D2CE4873C410679DD9F003AD793B (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___str0, int32_t ___maxDepth1, bool ___storeExcessLevels2, bool ___strict3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mD5F29E323D31B110F267B79CAF2E456F4C77ECE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59E22C292F27E6EDE5644C7B811538F78C4ACAB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA57F692809412BBB13F764D9044820BC70823E64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC93B50DB5A16A30443D060A92DCF406D5233A92B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	Il2CppChar V_6 = 0x0;
	String_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	String_t* G_B65_0 = NULL;
	List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * G_B65_1 = NULL;
	String_t* G_B64_0 = NULL;
	List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * G_B64_1 = NULL;
	int32_t G_B66_0 = 0;
	String_t* G_B66_1 = NULL;
	List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * G_B66_2 = NULL;
	{
		// if(!string.IsNullOrEmpty(str)) {
		String_t* L_0 = ___str0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_032e;
		}
	}
	{
		// str = str.Trim(WHITESPACE);
		String_t* L_2 = ___str0;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ((JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_StaticFields*)il2cpp_codegen_static_fields_for(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var))->get_WHITESPACE_5();
		NullCheck(L_2);
		String_t* L_4;
		L_4 = String_Trim_m10D967E03EDCB170227406426558B7FEA27CD6CC(L_2, L_3, /*hidden argument*/NULL);
		___str0 = L_4;
		// if(strict) {
		bool L_5 = ___strict3;
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		// if(str[0] != '[' && str[0] != '{') {
		String_t* L_6 = ___str0;
		NullCheck(L_6);
		Il2CppChar L_7;
		L_7 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_6, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)91))))
		{
			goto IL_003a;
		}
	}
	{
		String_t* L_8 = ___str0;
		NullCheck(L_8);
		Il2CppChar L_9;
		L_9 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_8, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_9) == ((int32_t)((int32_t)123))))
		{
			goto IL_003a;
		}
	}
	{
		// type = Type.NULL;
		__this->set_type_6(0);
		// return;
		return;
	}

IL_003a:
	{
		// if(str.Length > 0) {
		String_t* L_10 = ___str0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0326;
		}
	}
	{
		// if(string.Compare(str, "true", true) == 0) {
		String_t* L_12 = ___str0;
		int32_t L_13;
		L_13 = String_Compare_m3B98D489EF23605CC97E9907AAF1E5E99BBF6A62(L_12, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, (bool)1, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0063;
		}
	}
	{
		// type = Type.BOOL;
		__this->set_type_6(5);
		// b = true;
		__this->set_b_13((bool)1);
		// } else if(string.Compare(str, "false", true) == 0) {
		return;
	}

IL_0063:
	{
		// } else if(string.Compare(str, "false", true) == 0) {
		String_t* L_14 = ___str0;
		int32_t L_15;
		L_15 = String_Compare_m3B98D489EF23605CC97E9907AAF1E5E99BBF6A62(L_14, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, (bool)1, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0080;
		}
	}
	{
		// type = Type.BOOL;
		__this->set_type_6(5);
		// b = false;
		__this->set_b_13((bool)0);
		// } else if(string.Compare(str, "null", true) == 0) {
		return;
	}

IL_0080:
	{
		// } else if(string.Compare(str, "null", true) == 0) {
		String_t* L_16 = ___str0;
		int32_t L_17;
		L_17 = String_Compare_m3B98D489EF23605CC97E9907AAF1E5E99BBF6A62(L_16, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, (bool)1, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_0096;
		}
	}
	{
		// type = Type.NULL;
		__this->set_type_6(0);
		// } else if(str == INFINITY) {
		return;
	}

IL_0096:
	{
		// } else if(str == INFINITY) {
		String_t* L_18 = ___str0;
		bool L_19;
		L_19 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_18, _stringLiteralA57F692809412BBB13F764D9044820BC70823E64, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00b6;
		}
	}
	{
		// type = Type.NUMBER;
		__this->set_type_6(2);
		// n = float.PositiveInfinity;
		__this->set_n_10((std::numeric_limits<float>::infinity()));
		// } else if(str == NEGINFINITY) {
		return;
	}

IL_00b6:
	{
		// } else if(str == NEGINFINITY) {
		String_t* L_20 = ___str0;
		bool L_21;
		L_21 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_20, _stringLiteralC93B50DB5A16A30443D060A92DCF406D5233A92B, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00d6;
		}
	}
	{
		// type = Type.NUMBER;
		__this->set_type_6(2);
		// n = float.NegativeInfinity;
		__this->set_n_10((-std::numeric_limits<float>::infinity()));
		// } else if(str == NaN) {
		return;
	}

IL_00d6:
	{
		// } else if(str == NaN) {
		String_t* L_22 = ___str0;
		bool L_23;
		L_23 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_22, _stringLiteral59E22C292F27E6EDE5644C7B811538F78C4ACAB0, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00f6;
		}
	}
	{
		// type = Type.NUMBER;
		__this->set_type_6(2);
		// n = float.NaN;
		__this->set_n_10((std::numeric_limits<float>::quiet_NaN()));
		// } else if(str[0] == '"') {
		return;
	}

IL_00f6:
	{
		// } else if(str[0] == '"') {
		String_t* L_24 = ___str0;
		NullCheck(L_24);
		Il2CppChar L_25;
		L_25 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_24, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_011e;
		}
	}
	{
		// type = Type.STRING;
		__this->set_type_6(1);
		// this.str = str.Substring(1, str.Length - 2);
		String_t* L_26 = ___str0;
		String_t* L_27 = ___str0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		String_t* L_29;
		L_29 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_26, 1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)2)), /*hidden argument*/NULL);
		__this->set_str_9(L_29);
		// } else {
		return;
	}

IL_011e:
	{
		// int tokenTmp = 1;
		V_0 = 1;
		// int offset = 0;
		V_1 = 0;
		// switch(str[offset]) {
		String_t* L_30 = ___str0;
		int32_t L_31 = V_1;
		NullCheck(L_30);
		Il2CppChar L_32;
		L_32 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_30, L_31, /*hidden argument*/NULL);
		V_6 = L_32;
		Il2CppChar L_33 = V_6;
		if ((((int32_t)L_33) == ((int32_t)((int32_t)91))))
		{
			goto IL_0156;
		}
	}
	{
		Il2CppChar L_34 = V_6;
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)123)))))
		{
			goto IL_016a;
		}
	}
	{
		// type = Type.OBJECT;
		__this->set_type_6(3);
		// keys = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_35 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_35, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_keys_8(L_35);
		// list = new List<JSONObject>();
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_36 = (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *)il2cpp_codegen_object_new(List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890(L_36, /*hidden argument*/List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		__this->set_list_7(L_36);
		// break;
		goto IL_01ab;
	}

IL_0156:
	{
		// type = Type.ARRAY;
		__this->set_type_6(4);
		// list = new List<JSONObject>();
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_37 = (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *)il2cpp_codegen_object_new(List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890(L_37, /*hidden argument*/List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		__this->set_list_7(L_37);
		// break;
		goto IL_01ab;
	}

IL_016a:
	{
	}

IL_016b:
	try
	{ // begin try (depth: 1)
		{
			// n = System.Convert.ToSingle(str);
			String_t* L_38 = ___str0;
			IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
			float L_39;
			L_39 = Convert_ToSingle_mF0B86032F39B1D435590B5751039905B93BE7A1F(L_38, /*hidden argument*/NULL);
			__this->set_n_10(L_39);
			// if(!str.Contains(".")) {
			String_t* L_40 = ___str0;
			NullCheck(L_40);
			bool L_41;
			L_41 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_40, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, /*hidden argument*/NULL);
			if (L_41)
			{
				goto IL_0197;
			}
		}

IL_0184:
		{
			// i = System.Convert.ToInt64(str);
			String_t* L_42 = ___str0;
			IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
			int64_t L_43;
			L_43 = Convert_ToInt64_m301151C65034D45DEF914FC0A2598C782836BDE9(L_42, /*hidden argument*/NULL);
			__this->set_i_12(L_43);
			// useInt = true;
			__this->set_useInt_11((bool)1);
		}

IL_0197:
		{
			// type = Type.NUMBER;
			__this->set_type_6(2);
			// } catch(System.FormatException) {
			goto IL_01aa;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01a0;
		}
		throw e;
	}

CATCH_01a0:
	{ // begin catch(System.FormatException)
		// } catch(System.FormatException) {
		// type = Type.NULL;
		__this->set_type_6(0);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01aa;
	} // end catch (depth: 1)

IL_01aa:
	{
		// return;
		return;
	}

IL_01ab:
	{
		// string propName = "";
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// bool openQuote = false;
		V_3 = (bool)0;
		// bool inProp = false;
		V_4 = (bool)0;
		// int depth = 0;
		V_5 = 0;
		goto IL_0315;
	}

IL_01be:
	{
		// if(System.Array.IndexOf(WHITESPACE, str[offset]) > -1)
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_44 = ((JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_StaticFields*)il2cpp_codegen_static_fields_for(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var))->get_WHITESPACE_5();
		String_t* L_45 = ___str0;
		int32_t L_46 = V_1;
		NullCheck(L_45);
		Il2CppChar L_47;
		L_47 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_45, L_46, /*hidden argument*/NULL);
		int32_t L_48;
		L_48 = Array_IndexOf_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mD5F29E323D31B110F267B79CAF2E456F4C77ECE4(L_44, L_47, /*hidden argument*/Array_IndexOf_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mD5F29E323D31B110F267B79CAF2E456F4C77ECE4_RuntimeMethod_var);
		if ((((int32_t)L_48) > ((int32_t)(-1))))
		{
			goto IL_0315;
		}
	}
	{
		// if(str[offset] == '\\') {
		String_t* L_49 = ___str0;
		int32_t L_50 = V_1;
		NullCheck(L_49);
		Il2CppChar L_51;
		L_51 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_49, L_50, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_51) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_01e9;
		}
	}
	{
		// offset += 1;
		int32_t L_52 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
		// continue;
		goto IL_0315;
	}

IL_01e9:
	{
		// if(str[offset] == '"') {
		String_t* L_53 = ___str0;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		Il2CppChar L_55;
		L_55 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_53, L_54, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_55) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_022c;
		}
	}
	{
		// if(openQuote) {
		bool L_56 = V_3;
		if (!L_56)
		{
			goto IL_021b;
		}
	}
	{
		// if(!inProp && depth == 0 && type == Type.OBJECT)
		bool L_57 = V_4;
		if (L_57)
		{
			goto IL_0217;
		}
	}
	{
		int32_t L_58 = V_5;
		if (L_58)
		{
			goto IL_0217;
		}
	}
	{
		int32_t L_59 = __this->get_type_6();
		if ((!(((uint32_t)L_59) == ((uint32_t)3))))
		{
			goto IL_0217;
		}
	}
	{
		// propName = str.Substring(tokenTmp + 1, offset - tokenTmp - 1);
		String_t* L_60 = ___str0;
		int32_t L_61 = V_0;
		int32_t L_62 = V_1;
		int32_t L_63 = V_0;
		NullCheck(L_60);
		String_t* L_64;
		L_64 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_60, ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_62, (int32_t)L_63)), (int32_t)1)), /*hidden argument*/NULL);
		V_2 = L_64;
	}

IL_0217:
	{
		// openQuote = false;
		V_3 = (bool)0;
		// } else {
		goto IL_022c;
	}

IL_021b:
	{
		// if(depth == 0 && type == Type.OBJECT)
		int32_t L_65 = V_5;
		if (L_65)
		{
			goto IL_022a;
		}
	}
	{
		int32_t L_66 = __this->get_type_6();
		if ((!(((uint32_t)L_66) == ((uint32_t)3))))
		{
			goto IL_022a;
		}
	}
	{
		// tokenTmp = offset;
		int32_t L_67 = V_1;
		V_0 = L_67;
	}

IL_022a:
	{
		// openQuote = true;
		V_3 = (bool)1;
	}

IL_022c:
	{
		// if(openQuote)
		bool L_68 = V_3;
		if (L_68)
		{
			goto IL_0315;
		}
	}
	{
		// if(type == Type.OBJECT && depth == 0) {
		int32_t L_69 = __this->get_type_6();
		if ((!(((uint32_t)L_69) == ((uint32_t)3))))
		{
			goto IL_0251;
		}
	}
	{
		int32_t L_70 = V_5;
		if (L_70)
		{
			goto IL_0251;
		}
	}
	{
		// if(str[offset] == ':') {
		String_t* L_71 = ___str0;
		int32_t L_72 = V_1;
		NullCheck(L_71);
		Il2CppChar L_73;
		L_73 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_71, L_72, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_73) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0251;
		}
	}
	{
		// tokenTmp = offset + 1;
		int32_t L_74 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1));
		// inProp = true;
		V_4 = (bool)1;
	}

IL_0251:
	{
		// if(str[offset] == '[' || str[offset] == '{') {
		String_t* L_75 = ___str0;
		int32_t L_76 = V_1;
		NullCheck(L_75);
		Il2CppChar L_77;
		L_77 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_75, L_76, /*hidden argument*/NULL);
		if ((((int32_t)L_77) == ((int32_t)((int32_t)91))))
		{
			goto IL_0267;
		}
	}
	{
		String_t* L_78 = ___str0;
		int32_t L_79 = V_1;
		NullCheck(L_78);
		Il2CppChar L_80;
		L_80 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_78, L_79, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_80) == ((uint32_t)((int32_t)123)))))
		{
			goto IL_026f;
		}
	}

IL_0267:
	{
		// depth++;
		int32_t L_81 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)1));
		// } else if(str[offset] == ']' || str[offset] == '}') {
		goto IL_028b;
	}

IL_026f:
	{
		// } else if(str[offset] == ']' || str[offset] == '}') {
		String_t* L_82 = ___str0;
		int32_t L_83 = V_1;
		NullCheck(L_82);
		Il2CppChar L_84;
		L_84 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_82, L_83, /*hidden argument*/NULL);
		if ((((int32_t)L_84) == ((int32_t)((int32_t)93))))
		{
			goto IL_0285;
		}
	}
	{
		String_t* L_85 = ___str0;
		int32_t L_86 = V_1;
		NullCheck(L_85);
		Il2CppChar L_87;
		L_87 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_85, L_86, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_87) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_028b;
		}
	}

IL_0285:
	{
		// depth--;
		int32_t L_88 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_88, (int32_t)1));
	}

IL_028b:
	{
		// if((str[offset] == ',' && depth == 0) || depth < 0) {
		String_t* L_89 = ___str0;
		int32_t L_90 = V_1;
		NullCheck(L_89);
		Il2CppChar L_91;
		L_91 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_89, L_90, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_91) == ((uint32_t)((int32_t)44)))))
		{
			goto IL_029a;
		}
	}
	{
		int32_t L_92 = V_5;
		if (!L_92)
		{
			goto IL_029f;
		}
	}

IL_029a:
	{
		int32_t L_93 = V_5;
		if ((((int32_t)L_93) >= ((int32_t)0)))
		{
			goto IL_0315;
		}
	}

IL_029f:
	{
		// inProp = false;
		V_4 = (bool)0;
		// string inner = str.Substring(tokenTmp, offset - tokenTmp).Trim(WHITESPACE);
		String_t* L_94 = ___str0;
		int32_t L_95 = V_0;
		int32_t L_96 = V_1;
		int32_t L_97 = V_0;
		NullCheck(L_94);
		String_t* L_98;
		L_98 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_94, L_95, ((int32_t)il2cpp_codegen_subtract((int32_t)L_96, (int32_t)L_97)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_99 = ((JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_StaticFields*)il2cpp_codegen_static_fields_for(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var))->get_WHITESPACE_5();
		NullCheck(L_98);
		String_t* L_100;
		L_100 = String_Trim_m10D967E03EDCB170227406426558B7FEA27CD6CC(L_98, L_99, /*hidden argument*/NULL);
		V_7 = L_100;
		// if(inner.Length > 0) {
		String_t* L_101 = V_7;
		NullCheck(L_101);
		int32_t L_102;
		L_102 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_101, /*hidden argument*/NULL);
		if ((((int32_t)L_102) <= ((int32_t)0)))
		{
			goto IL_0311;
		}
	}
	{
		// if(type == Type.OBJECT)
		int32_t L_103 = __this->get_type_6();
		if ((!(((uint32_t)L_103) == ((uint32_t)3))))
		{
			goto IL_02d7;
		}
	}
	{
		// keys.Add(propName);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_104 = __this->get_keys_8();
		String_t* L_105 = V_2;
		NullCheck(L_104);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_104, L_105, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
	}

IL_02d7:
	{
		// if(maxDepth != -1)                                                            //maxDepth of -1 is the end of the line
		int32_t L_106 = ___maxDepth1;
		if ((((int32_t)L_106) == ((int32_t)(-1))))
		{
			goto IL_02fc;
		}
	}
	{
		// list.Add(Create(inner, (maxDepth < -1) ? -2 : maxDepth - 1));
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_107 = __this->get_list_7();
		String_t* L_108 = V_7;
		int32_t L_109 = ___maxDepth1;
		G_B64_0 = L_108;
		G_B64_1 = L_107;
		if ((((int32_t)L_109) < ((int32_t)(-1))))
		{
			G_B65_0 = L_108;
			G_B65_1 = L_107;
			goto IL_02ec;
		}
	}
	{
		int32_t L_110 = ___maxDepth1;
		G_B66_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_110, (int32_t)1));
		G_B66_1 = G_B64_0;
		G_B66_2 = G_B64_1;
		goto IL_02ee;
	}

IL_02ec:
	{
		G_B66_0 = ((int32_t)-2);
		G_B66_1 = G_B65_0;
		G_B66_2 = G_B65_1;
	}

IL_02ee:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_111;
		L_111 = JSONObject_Create_m6869838BC7DFE7BA8C73FF0CDC7DAB93B25F3C73(G_B66_1, G_B66_0, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(G_B66_2);
		List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296(G_B66_2, L_111, /*hidden argument*/List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296_RuntimeMethod_var);
		goto IL_0311;
	}

IL_02fc:
	{
		// else if(storeExcessLevels)
		bool L_112 = ___storeExcessLevels2;
		if (!L_112)
		{
			goto IL_0311;
		}
	}
	{
		// list.Add(CreateBakedObject(inner));
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_113 = __this->get_list_7();
		String_t* L_114 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_115;
		L_115 = JSONObject_CreateBakedObject_mD1360B3E5E493D5647B64617F0E894A42307FCDD(L_114, /*hidden argument*/NULL);
		NullCheck(L_113);
		List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296(L_113, L_115, /*hidden argument*/List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296_RuntimeMethod_var);
	}

IL_0311:
	{
		// tokenTmp = offset + 1;
		int32_t L_116 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_116, (int32_t)1));
	}

IL_0315:
	{
		// while(++offset < str.Length) {
		int32_t L_117 = V_1;
		int32_t L_118 = ((int32_t)il2cpp_codegen_add((int32_t)L_117, (int32_t)1));
		V_1 = L_118;
		String_t* L_119 = ___str0;
		NullCheck(L_119);
		int32_t L_120;
		L_120 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_119, /*hidden argument*/NULL);
		if ((((int32_t)L_118) < ((int32_t)L_120)))
		{
			goto IL_01be;
		}
	}
	{
		// } else type = Type.NULL;
		return;
	}

IL_0326:
	{
		// } else type = Type.NULL;
		__this->set_type_6(0);
		// } else type = Type.NULL;    //If the string is missing, this is a null
		return;
	}

IL_032e:
	{
		// } else type = Type.NULL;    //If the string is missing, this is a null
		__this->set_type_6(0);
		// }
		return;
	}
}
// System.Boolean JSONObject::get_IsNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_get_IsNumber_m4E4594E71166114D029A040E3EB3DD6900A8860A (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsNumber { get { return type == Type.NUMBER; } }
		int32_t L_0 = __this->get_type_6();
		return (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// System.Boolean JSONObject::get_IsNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_get_IsNull_m0E158ED45DCA8AD40311E32DC9A709B3F7BBAF72 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsNull { get { return type == Type.NULL; } }
		int32_t L_0 = __this->get_type_6();
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean JSONObject::get_IsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_get_IsString_mEEFCDDA3881856A47DC2A4A0A857EA703E7A4147 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsString { get { return type == Type.STRING; } }
		int32_t L_0 = __this->get_type_6();
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean JSONObject::get_IsBool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_get_IsBool_m2165D4FD068B192D13EEE1A2BAB22295934D9A66 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsBool { get { return type == Type.BOOL; } }
		int32_t L_0 = __this->get_type_6();
		return (bool)((((int32_t)L_0) == ((int32_t)5))? 1 : 0);
	}
}
// System.Boolean JSONObject::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_get_IsArray_m192D16D4CC2C846BC1F6FA1A3CFE7A76369738C3 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsArray { get { return type == Type.ARRAY; } }
		int32_t L_0 = __this->get_type_6();
		return (bool)((((int32_t)L_0) == ((int32_t)4))? 1 : 0);
	}
}
// System.Boolean JSONObject::get_IsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_get_IsObject_m8AEF0729E0189B47917B081AA25536A699D108FB (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsObject { get { return type == Type.OBJECT || type == Type.BAKED; } }
		int32_t L_0 = __this->get_type_6();
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = __this->get_type_6();
		return (bool)((((int32_t)L_1) == ((int32_t)6))? 1 : 0);
	}

IL_0013:
	{
		return (bool)1;
	}
}
// System.Void JSONObject::Add(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Add_m9E8891A06BB81D8DAF1B53014C0DAA52192ED050 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, bool ___val0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Add(Create(val));
		bool L_0 = ___val0;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1;
		L_1 = JSONObject_Create_m0C889649B7E0EC710E0CC1E8DB8A847CECBF0108(L_0, /*hidden argument*/NULL);
		JSONObject_Add_mFA608D8951A1CB1FE608B4E1B0E69D55CBCD21F8(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JSONObject::Add(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Add_mB7F8E61C3481B5CA83507A64FA21C0A7928B3D95 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, float ___val0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Add(Create(val));
		float L_0 = ___val0;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1;
		L_1 = JSONObject_Create_m56DE67DE24BC7876C3524F1C9EB996DF73C4AAE4(L_0, /*hidden argument*/NULL);
		JSONObject_Add_mFA608D8951A1CB1FE608B4E1B0E69D55CBCD21F8(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JSONObject::Add(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Add_m6032D06170CE9AED6FDD3197232AA527952E2DBC (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, int32_t ___val0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Add(Create(val));
		int32_t L_0 = ___val0;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1;
		L_1 = JSONObject_Create_m7607C428C178C76F59C1A431F810F601F90B78E2(L_0, /*hidden argument*/NULL);
		JSONObject_Add_mFA608D8951A1CB1FE608B4E1B0E69D55CBCD21F8(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JSONObject::Add(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Add_mA5E8C6770E68239DC7CD1959EED03CDD78B381AF (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Add(CreateStringObject(str));
		String_t* L_0 = ___str0;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1;
		L_1 = JSONObject_CreateStringObject_m4FE0CF34A1B7810B54654B6E66C5EBC579EE8E02(L_0, /*hidden argument*/NULL);
		JSONObject_Add_mFA608D8951A1CB1FE608B4E1B0E69D55CBCD21F8(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JSONObject::Add(JSONObject/AddJSONContents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Add_m86C27DC89F36D514791A10B1FA218386E64825EA (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, AddJSONContents_t30D87492AD29D0086FE679779BD8E02620377B16 * ___content0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Add(Create(content));
		AddJSONContents_t30D87492AD29D0086FE679779BD8E02620377B16 * L_0 = ___content0;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1;
		L_1 = JSONObject_Create_mAB52FC035F2BB8998E2F36C840605B466157A88E(L_0, /*hidden argument*/NULL);
		JSONObject_Add_mFA608D8951A1CB1FE608B4E1B0E69D55CBCD21F8(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JSONObject::Add(JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Add_mFA608D8951A1CB1FE608B4E1B0E69D55CBCD21F8 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(obj) {        //Don't do anything if the object is null
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// if(type != Type.ARRAY) {
		int32_t L_2 = __this->get_type_6();
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_002b;
		}
	}
	{
		// type = Type.ARRAY;        //Congratulations, son, you're an ARRAY now
		__this->set_type_6(4);
		// if(list == null)
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_3 = __this->get_list_7();
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		// list = new List<JSONObject>();
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_4 = (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *)il2cpp_codegen_object_new(List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890(L_4, /*hidden argument*/List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		__this->set_list_7(L_4);
	}

IL_002b:
	{
		// list.Add(obj);
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_5 = __this->get_list_7();
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_6 = ___obj0;
		NullCheck(L_5);
		List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296(L_5, L_6, /*hidden argument*/List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296_RuntimeMethod_var);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void JSONObject::AddField(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_AddField_m473954FA7B650FBD5C47FB79AC05759E0E82C2C9 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, bool ___val1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddField(name, Create(val));
		String_t* L_0 = ___name0;
		bool L_1 = ___val1;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2;
		L_2 = JSONObject_Create_m0C889649B7E0EC710E0CC1E8DB8A847CECBF0108(L_1, /*hidden argument*/NULL);
		JSONObject_AddField_m040F25BA9B3A4BDEBAAE2332096F3DCC3FDA538A(__this, L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JSONObject::AddField(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, float ___val1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddField(name, Create(val));
		String_t* L_0 = ___name0;
		float L_1 = ___val1;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2;
		L_2 = JSONObject_Create_m56DE67DE24BC7876C3524F1C9EB996DF73C4AAE4(L_1, /*hidden argument*/NULL);
		JSONObject_AddField_m040F25BA9B3A4BDEBAAE2332096F3DCC3FDA538A(__this, L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JSONObject::AddField(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_AddField_m1B10F39E3871FB04D76FD982AF5BE52395D32079 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, int32_t ___val1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddField(name, Create(val));
		String_t* L_0 = ___name0;
		int32_t L_1 = ___val1;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2;
		L_2 = JSONObject_Create_m7607C428C178C76F59C1A431F810F601F90B78E2(L_1, /*hidden argument*/NULL);
		JSONObject_AddField_m040F25BA9B3A4BDEBAAE2332096F3DCC3FDA538A(__this, L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JSONObject::AddField(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_AddField_m3A9FD559E8B99D1A371178610DF29021060E078A (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, int64_t ___val1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddField(name, Create(val));
		String_t* L_0 = ___name0;
		int64_t L_1 = ___val1;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2;
		L_2 = JSONObject_Create_m344E63B4E4A74F15284F157069013679E9F9BC0A(L_1, /*hidden argument*/NULL);
		JSONObject_AddField_m040F25BA9B3A4BDEBAAE2332096F3DCC3FDA538A(__this, L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JSONObject::AddField(System.String,JSONObject/AddJSONContents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_AddField_mCD42D97A60905B34919D38C732B391BDE0071E4F (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, AddJSONContents_t30D87492AD29D0086FE679779BD8E02620377B16 * ___content1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddField(name, Create(content));
		String_t* L_0 = ___name0;
		AddJSONContents_t30D87492AD29D0086FE679779BD8E02620377B16 * L_1 = ___content1;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2;
		L_2 = JSONObject_Create_mAB52FC035F2BB8998E2F36C840605B466157A88E(L_1, /*hidden argument*/NULL);
		JSONObject_AddField_m040F25BA9B3A4BDEBAAE2332096F3DCC3FDA538A(__this, L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JSONObject::AddField(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_AddField_m6FDFFDC2CD1CDF0C0D83B776B6F56C04630337AD (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, String_t* ___val1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddField(name, CreateStringObject(val));
		String_t* L_0 = ___name0;
		String_t* L_1 = ___val1;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2;
		L_2 = JSONObject_CreateStringObject_m4FE0CF34A1B7810B54654B6E66C5EBC579EE8E02(L_1, /*hidden argument*/NULL);
		JSONObject_AddField_m040F25BA9B3A4BDEBAAE2332096F3DCC3FDA538A(__this, L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JSONObject::AddField(System.String,JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_AddField_m040F25BA9B3A4BDEBAAE2332096F3DCC3FDA538A (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* G_B8_0 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * G_B8_1 = NULL;
	String_t* G_B7_0 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * G_B7_1 = NULL;
	{
		// if(obj) {        //Don't do anything if the object is null
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0 = ___obj1;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0095;
		}
	}
	{
		// if(type != Type.OBJECT) {
		int32_t L_2 = __this->get_type_6();
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_007d;
		}
	}
	{
		// if(keys == null)
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_3 = __this->get_keys_8();
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		// keys = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_4 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_4, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_keys_8(L_4);
	}

IL_0027:
	{
		// if(type == Type.ARRAY) {
		int32_t L_5 = __this->get_type_6();
		if ((!(((uint32_t)L_5) == ((uint32_t)4))))
		{
			goto IL_0063;
		}
	}
	{
		// for(int i = 0; i < list.Count; i++)
		V_0 = 0;
		goto IL_0053;
	}

IL_0034:
	{
		// keys.Add(i + "");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_6 = __this->get_keys_8();
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_8 = L_7;
		G_B7_0 = L_8;
		G_B7_1 = L_6;
		if (L_8)
		{
			G_B8_0 = L_8;
			G_B8_1 = L_6;
			goto IL_004a;
		}
	}
	{
		G_B8_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B8_1 = G_B7_1;
	}

IL_004a:
	{
		NullCheck(G_B8_1);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(G_B8_1, G_B8_0, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// for(int i = 0; i < list.Count; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0053:
	{
		// for(int i = 0; i < list.Count; i++)
		int32_t L_10 = V_0;
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_11 = __this->get_list_7();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_11, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0034;
		}
	}
	{
		// } else
		goto IL_0076;
	}

IL_0063:
	{
		// if(list == null)
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_13 = __this->get_list_7();
		if (L_13)
		{
			goto IL_0076;
		}
	}
	{
		// list = new List<JSONObject>();
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_14 = (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *)il2cpp_codegen_object_new(List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890(L_14, /*hidden argument*/List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		__this->set_list_7(L_14);
	}

IL_0076:
	{
		// type = Type.OBJECT;        //Congratulations, son, you're an OBJECT now
		__this->set_type_6(3);
	}

IL_007d:
	{
		// keys.Add(name);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_15 = __this->get_keys_8();
		String_t* L_16 = ___name0;
		NullCheck(L_15);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_15, L_16, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// list.Add(obj);
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_17 = __this->get_list_7();
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_18 = ___obj1;
		NullCheck(L_17);
		List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296(L_17, L_18, /*hidden argument*/List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296_RuntimeMethod_var);
	}

IL_0095:
	{
		// }
		return;
	}
}
// System.Void JSONObject::SetField(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_SetField_m0281566F0843A106A7EEB655F5A24027D455EA52 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, String_t* ___val1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void SetField(string name, string val) { SetField(name, CreateStringObject(val)); }
		String_t* L_0 = ___name0;
		String_t* L_1 = ___val1;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2;
		L_2 = JSONObject_CreateStringObject_m4FE0CF34A1B7810B54654B6E66C5EBC579EE8E02(L_1, /*hidden argument*/NULL);
		JSONObject_SetField_m76DD197843038E35B835B8FE6585432219750040(__this, L_0, L_2, /*hidden argument*/NULL);
		// public void SetField(string name, string val) { SetField(name, CreateStringObject(val)); }
		return;
	}
}
// System.Void JSONObject::SetField(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_SetField_m071329AF191E505434081C28E629236EDA1FF06F (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, bool ___val1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void SetField(string name, bool val) { SetField(name, Create(val)); }
		String_t* L_0 = ___name0;
		bool L_1 = ___val1;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2;
		L_2 = JSONObject_Create_m0C889649B7E0EC710E0CC1E8DB8A847CECBF0108(L_1, /*hidden argument*/NULL);
		JSONObject_SetField_m76DD197843038E35B835B8FE6585432219750040(__this, L_0, L_2, /*hidden argument*/NULL);
		// public void SetField(string name, bool val) { SetField(name, Create(val)); }
		return;
	}
}
// System.Void JSONObject::SetField(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_SetField_mE3391C9C14A060679EB6129FF9458AC36FB62584 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, float ___val1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void SetField(string name, float val) { SetField(name, Create(val)); }
		String_t* L_0 = ___name0;
		float L_1 = ___val1;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2;
		L_2 = JSONObject_Create_m56DE67DE24BC7876C3524F1C9EB996DF73C4AAE4(L_1, /*hidden argument*/NULL);
		JSONObject_SetField_m76DD197843038E35B835B8FE6585432219750040(__this, L_0, L_2, /*hidden argument*/NULL);
		// public void SetField(string name, float val) { SetField(name, Create(val)); }
		return;
	}
}
// System.Void JSONObject::SetField(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_SetField_m9898DB789550E7EFCF1994D04261566AEAB93151 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, int32_t ___val1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void SetField(string name, int val) { SetField(name, Create(val)); }
		String_t* L_0 = ___name0;
		int32_t L_1 = ___val1;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2;
		L_2 = JSONObject_Create_m7607C428C178C76F59C1A431F810F601F90B78E2(L_1, /*hidden argument*/NULL);
		JSONObject_SetField_m76DD197843038E35B835B8FE6585432219750040(__this, L_0, L_2, /*hidden argument*/NULL);
		// public void SetField(string name, int val) { SetField(name, Create(val)); }
		return;
	}
}
// System.Void JSONObject::SetField(System.String,JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_SetField_m76DD197843038E35B835B8FE6585432219750040 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m0D6661E1ED36AA5F2B55676BBB46999DCE36E380_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m31C26124B7BB19A0E5C12113701DDE5046272F70_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(HasField(name)) {
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = JSONObject_HasField_m0716AE8AC84412AFADF939A64D923C6B9C91E6B1(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// list.Remove(this[name]);
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_2 = __this->get_list_7();
		String_t* L_3 = ___name0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_4;
		L_4 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(__this, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = List_1_Remove_m0D6661E1ED36AA5F2B55676BBB46999DCE36E380(L_2, L_4, /*hidden argument*/List_1_Remove_m0D6661E1ED36AA5F2B55676BBB46999DCE36E380_RuntimeMethod_var);
		// keys.Remove(name);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_6 = __this->get_keys_8();
		String_t* L_7 = ___name0;
		NullCheck(L_6);
		bool L_8;
		L_8 = List_1_Remove_m31C26124B7BB19A0E5C12113701DDE5046272F70(L_6, L_7, /*hidden argument*/List_1_Remove_m31C26124B7BB19A0E5C12113701DDE5046272F70_RuntimeMethod_var);
	}

IL_0029:
	{
		// AddField(name, obj);
		String_t* L_9 = ___name0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_10 = ___obj1;
		JSONObject_AddField_m040F25BA9B3A4BDEBAAE2332096F3DCC3FDA538A(__this, L_9, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JSONObject::RemoveField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_RemoveField_m7B5CAC5F31249ECA5E3D2292DAD83C8511EAC692 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m5E4C1305E9BFAB895715B5636E5AA158528134EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m31C26124B7BB19A0E5C12113701DDE5046272F70_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(keys.IndexOf(name) > -1) {
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_keys_8();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A(L_0, L_1, /*hidden argument*/List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)(-1))))
		{
			goto IL_0033;
		}
	}
	{
		// list.RemoveAt(keys.IndexOf(name));
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_3 = __this->get_list_7();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_4 = __this->get_keys_8();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A(L_4, L_5, /*hidden argument*/List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var);
		NullCheck(L_3);
		List_1_RemoveAt_m5E4C1305E9BFAB895715B5636E5AA158528134EF(L_3, L_6, /*hidden argument*/List_1_RemoveAt_m5E4C1305E9BFAB895715B5636E5AA158528134EF_RuntimeMethod_var);
		// keys.Remove(name);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_7 = __this->get_keys_8();
		String_t* L_8 = ___name0;
		NullCheck(L_7);
		bool L_9;
		L_9 = List_1_Remove_m31C26124B7BB19A0E5C12113701DDE5046272F70(L_7, L_8, /*hidden argument*/List_1_Remove_m31C26124B7BB19A0E5C12113701DDE5046272F70_RuntimeMethod_var);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Boolean JSONObject::GetField(System.Boolean&,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_mCEED58296E9649B0394055298B9F0D96D60A45F8 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, bool* ___field0, String_t* ___name1, bool ___fallback2, const RuntimeMethod* method)
{
	{
		// field = fallback;
		bool* L_0 = ___field0;
		bool L_1 = ___fallback2;
		*((int8_t*)L_0) = (int8_t)L_1;
		// return GetField(ref field, name);
		bool* L_2 = ___field0;
		String_t* L_3 = ___name1;
		bool L_4;
		L_4 = JSONObject_GetField_mB39F437E39BE18848FA47612216038F35970AD14(__this, (bool*)L_2, L_3, (FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 *)NULL, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean JSONObject::GetField(System.Boolean&,System.String,JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_mB39F437E39BE18848FA47612216038F35970AD14 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, bool* ___field0, String_t* ___name1, FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * ___fail2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(type == Type.OBJECT) {
		int32_t L_0 = __this->get_type_6();
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_002f;
		}
	}
	{
		// int index = keys.IndexOf(name);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = __this->get_keys_8();
		String_t* L_2 = ___name1;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A(L_1, L_2, /*hidden argument*/List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var);
		V_0 = L_3;
		// if(index >= 0) {
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		// field = list[index].b;
		bool* L_5 = ___field0;
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_6 = __this->get_list_7();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_8;
		L_8 = List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		NullCheck(L_8);
		bool L_9 = L_8->get_b_13();
		*((int8_t*)L_5) = (int8_t)L_9;
		// return true;
		return (bool)1;
	}

IL_002f:
	{
		// if(fail != null) fail.Invoke(name);
		FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * L_10 = ___fail2;
		if (!L_10)
		{
			goto IL_0039;
		}
	}
	{
		// if(fail != null) fail.Invoke(name);
		FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * L_11 = ___fail2;
		String_t* L_12 = ___name1;
		NullCheck(L_11);
		FieldNotFound_Invoke_mF93C65AD79D8DEC6373E56CA7B9862F9E72EA18C(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean JSONObject::GetField(System.Single&,System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m8099EA01695975436FA9EB5B0B02889979312399 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, float* ___field0, String_t* ___name1, float ___fallback2, const RuntimeMethod* method)
{
	{
		// field = fallback;
		float* L_0 = ___field0;
		float L_1 = ___fallback2;
		*((float*)L_0) = (float)L_1;
		// return GetField(ref field, name);
		float* L_2 = ___field0;
		String_t* L_3 = ___name1;
		bool L_4;
		L_4 = JSONObject_GetField_m37FA2DD85D282EF09CD3790ECFAD348DACEF06B2(__this, (float*)L_2, L_3, (FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 *)NULL, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean JSONObject::GetField(System.Single&,System.String,JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m37FA2DD85D282EF09CD3790ECFAD348DACEF06B2 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, float* ___field0, String_t* ___name1, FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * ___fail2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(type == Type.OBJECT) {
		int32_t L_0 = __this->get_type_6();
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_002f;
		}
	}
	{
		// int index = keys.IndexOf(name);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = __this->get_keys_8();
		String_t* L_2 = ___name1;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A(L_1, L_2, /*hidden argument*/List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var);
		V_0 = L_3;
		// if(index >= 0) {
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		// field = list[index].n;
		float* L_5 = ___field0;
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_6 = __this->get_list_7();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_8;
		L_8 = List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		NullCheck(L_8);
		float L_9 = L_8->get_n_10();
		*((float*)L_5) = (float)L_9;
		// return true;
		return (bool)1;
	}

IL_002f:
	{
		// if(fail != null) fail.Invoke(name);
		FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * L_10 = ___fail2;
		if (!L_10)
		{
			goto IL_0039;
		}
	}
	{
		// if(fail != null) fail.Invoke(name);
		FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * L_11 = ___fail2;
		String_t* L_12 = ___name1;
		NullCheck(L_11);
		FieldNotFound_Invoke_mF93C65AD79D8DEC6373E56CA7B9862F9E72EA18C(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean JSONObject::GetField(System.Int32&,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m18AE2E516E49DD3312C1E4F44F961BD2199B74DA (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, int32_t* ___field0, String_t* ___name1, int32_t ___fallback2, const RuntimeMethod* method)
{
	{
		// field = fallback;
		int32_t* L_0 = ___field0;
		int32_t L_1 = ___fallback2;
		*((int32_t*)L_0) = (int32_t)L_1;
		// return GetField(ref field, name);
		int32_t* L_2 = ___field0;
		String_t* L_3 = ___name1;
		bool L_4;
		L_4 = JSONObject_GetField_m75931E7F217795B23CE49E908882C35D623DDBB6(__this, (int32_t*)L_2, L_3, (FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 *)NULL, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean JSONObject::GetField(System.Int32&,System.String,JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m75931E7F217795B23CE49E908882C35D623DDBB6 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, int32_t* ___field0, String_t* ___name1, FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * ___fail2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(IsObject) {
		bool L_0;
		L_0 = JSONObject_get_IsObject_m8AEF0729E0189B47917B081AA25536A699D108FB(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		// int index = keys.IndexOf(name);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = __this->get_keys_8();
		String_t* L_2 = ___name1;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A(L_1, L_2, /*hidden argument*/List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var);
		V_0 = L_3;
		// if(index >= 0) {
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		// field = (int)list[index].n;
		int32_t* L_5 = ___field0;
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_6 = __this->get_list_7();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_8;
		L_8 = List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		NullCheck(L_8);
		float L_9 = L_8->get_n_10();
		*((int32_t*)L_5) = (int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_9);
		// return true;
		return (bool)1;
	}

IL_002f:
	{
		// if(fail != null) fail.Invoke(name);
		FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * L_10 = ___fail2;
		if (!L_10)
		{
			goto IL_0039;
		}
	}
	{
		// if(fail != null) fail.Invoke(name);
		FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * L_11 = ___fail2;
		String_t* L_12 = ___name1;
		NullCheck(L_11);
		FieldNotFound_Invoke_mF93C65AD79D8DEC6373E56CA7B9862F9E72EA18C(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean JSONObject::GetField(System.Int64&,System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m332921E122984F9C95C3B11503CA9C5389C141E6 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, int64_t* ___field0, String_t* ___name1, int64_t ___fallback2, const RuntimeMethod* method)
{
	{
		// field = fallback;
		int64_t* L_0 = ___field0;
		int64_t L_1 = ___fallback2;
		*((int64_t*)L_0) = (int64_t)L_1;
		// return GetField(ref field, name);
		int64_t* L_2 = ___field0;
		String_t* L_3 = ___name1;
		bool L_4;
		L_4 = JSONObject_GetField_m43C478E125C950A25092B00522F4D8C06123CE25(__this, (int64_t*)L_2, L_3, (FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 *)NULL, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean JSONObject::GetField(System.Int64&,System.String,JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m43C478E125C950A25092B00522F4D8C06123CE25 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, int64_t* ___field0, String_t* ___name1, FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * ___fail2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(IsObject) {
		bool L_0;
		L_0 = JSONObject_get_IsObject_m8AEF0729E0189B47917B081AA25536A699D108FB(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		// int index = keys.IndexOf(name);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = __this->get_keys_8();
		String_t* L_2 = ___name1;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A(L_1, L_2, /*hidden argument*/List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var);
		V_0 = L_3;
		// if(index >= 0) {
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		// field = (long)list[index].n;
		int64_t* L_5 = ___field0;
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_6 = __this->get_list_7();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_8;
		L_8 = List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		NullCheck(L_8);
		float L_9 = L_8->get_n_10();
		*((int64_t*)L_5) = (int64_t)il2cpp_codegen_cast_double_to_int<int64_t>(L_9);
		// return true;
		return (bool)1;
	}

IL_002f:
	{
		// if(fail != null) fail.Invoke(name);
		FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * L_10 = ___fail2;
		if (!L_10)
		{
			goto IL_0039;
		}
	}
	{
		// if(fail != null) fail.Invoke(name);
		FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * L_11 = ___fail2;
		String_t* L_12 = ___name1;
		NullCheck(L_11);
		FieldNotFound_Invoke_mF93C65AD79D8DEC6373E56CA7B9862F9E72EA18C(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean JSONObject::GetField(System.UInt32&,System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m36CB490D4F51DD3CB76DE8075DE4B0B7B71E5680 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, uint32_t* ___field0, String_t* ___name1, uint32_t ___fallback2, const RuntimeMethod* method)
{
	{
		// field = fallback;
		uint32_t* L_0 = ___field0;
		uint32_t L_1 = ___fallback2;
		*((int32_t*)L_0) = (int32_t)L_1;
		// return GetField(ref field, name);
		uint32_t* L_2 = ___field0;
		String_t* L_3 = ___name1;
		bool L_4;
		L_4 = JSONObject_GetField_m6A8761BFDC11E5DFBDF08B2120BA0D0395BE0A2F(__this, (uint32_t*)L_2, L_3, (FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 *)NULL, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean JSONObject::GetField(System.UInt32&,System.String,JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m6A8761BFDC11E5DFBDF08B2120BA0D0395BE0A2F (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, uint32_t* ___field0, String_t* ___name1, FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * ___fail2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(IsObject) {
		bool L_0;
		L_0 = JSONObject_get_IsObject_m8AEF0729E0189B47917B081AA25536A699D108FB(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		// int index = keys.IndexOf(name);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = __this->get_keys_8();
		String_t* L_2 = ___name1;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A(L_1, L_2, /*hidden argument*/List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var);
		V_0 = L_3;
		// if(index >= 0) {
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		// field = (uint)list[index].n;
		uint32_t* L_5 = ___field0;
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_6 = __this->get_list_7();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_8;
		L_8 = List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		NullCheck(L_8);
		float L_9 = L_8->get_n_10();
		*((int32_t*)L_5) = (int32_t)il2cpp_codegen_cast_floating_point<uint32_t, int32_t, float>(L_9);
		// return true;
		return (bool)1;
	}

IL_002f:
	{
		// if(fail != null) fail.Invoke(name);
		FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * L_10 = ___fail2;
		if (!L_10)
		{
			goto IL_0039;
		}
	}
	{
		// if(fail != null) fail.Invoke(name);
		FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * L_11 = ___fail2;
		String_t* L_12 = ___name1;
		NullCheck(L_11);
		FieldNotFound_Invoke_mF93C65AD79D8DEC6373E56CA7B9862F9E72EA18C(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean JSONObject::GetField(System.String&,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m2F8C472193223B08DA0282C1F5A1BD121032984F (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t** ___field0, String_t* ___name1, String_t* ___fallback2, const RuntimeMethod* method)
{
	{
		// field = fallback;
		String_t** L_0 = ___field0;
		String_t* L_1 = ___fallback2;
		*((RuntimeObject **)L_0) = (RuntimeObject *)L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)L_1);
		// return GetField(ref field, name);
		String_t** L_2 = ___field0;
		String_t* L_3 = ___name1;
		bool L_4;
		L_4 = JSONObject_GetField_m34E78B3470121297625809968A259E7FD9BD0792(__this, (String_t**)L_2, L_3, (FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 *)NULL, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean JSONObject::GetField(System.String&,System.String,JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m34E78B3470121297625809968A259E7FD9BD0792 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t** ___field0, String_t* ___name1, FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * ___fail2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(IsObject) {
		bool L_0;
		L_0 = JSONObject_get_IsObject_m8AEF0729E0189B47917B081AA25536A699D108FB(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		// int index = keys.IndexOf(name);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = __this->get_keys_8();
		String_t* L_2 = ___name1;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A(L_1, L_2, /*hidden argument*/List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var);
		V_0 = L_3;
		// if(index >= 0) {
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		// field = list[index].str;
		String_t** L_5 = ___field0;
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_6 = __this->get_list_7();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_8;
		L_8 = List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		NullCheck(L_8);
		String_t* L_9 = L_8->get_str_9();
		*((RuntimeObject **)L_5) = (RuntimeObject *)L_9;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_5, (void*)(RuntimeObject *)L_9);
		// return true;
		return (bool)1;
	}

IL_002e:
	{
		// if(fail != null) fail.Invoke(name);
		FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * L_10 = ___fail2;
		if (!L_10)
		{
			goto IL_0038;
		}
	}
	{
		// if(fail != null) fail.Invoke(name);
		FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * L_11 = ___fail2;
		String_t* L_12 = ___name1;
		NullCheck(L_11);
		FieldNotFound_Invoke_mF93C65AD79D8DEC6373E56CA7B9862F9E72EA18C(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void JSONObject::GetField(System.String,JSONObject/GetFieldResponse,JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_GetField_m55157D70DF9CD7505A29E4B3961DE0354B665E52 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, GetFieldResponse_t43D0287B1D77E67E63ED111DCD7C7BE0EC183345 * ___response1, FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * ___fail2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(response != null && IsObject) {
		GetFieldResponse_t43D0287B1D77E67E63ED111DCD7C7BE0EC183345 * L_0 = ___response1;
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		bool L_1;
		L_1 = JSONObject_get_IsObject_m8AEF0729E0189B47917B081AA25536A699D108FB(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		// int index = keys.IndexOf(name);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = __this->get_keys_8();
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A(L_2, L_3, /*hidden argument*/List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var);
		V_0 = L_4;
		// if(index >= 0) {
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		// response.Invoke(list[index]);
		GetFieldResponse_t43D0287B1D77E67E63ED111DCD7C7BE0EC183345 * L_6 = ___response1;
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_7 = __this->get_list_7();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_9;
		L_9 = List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_inline(L_7, L_8, /*hidden argument*/List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		NullCheck(L_6);
		GetFieldResponse_Invoke_mF1BEAD17E9225211812605D01371DE9834947986(L_6, L_9, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_002f:
	{
		// if(fail != null) fail.Invoke(name);
		FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * L_10 = ___fail2;
		if (!L_10)
		{
			goto IL_0039;
		}
	}
	{
		// if(fail != null) fail.Invoke(name);
		FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * L_11 = ___fail2;
		String_t* L_12 = ___name0;
		NullCheck(L_11);
		FieldNotFound_Invoke_mF93C65AD79D8DEC6373E56CA7B9862F9E72EA18C(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// JSONObject JSONObject::GetField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_GetField_m3181F5223EF85F862D7C542FA18FD9AC1C626F2F (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(IsObject)
		bool L_0;
		L_0 = JSONObject_get_IsObject_m8AEF0729E0189B47917B081AA25536A699D108FB(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		// for(int i = 0; i < keys.Count; i++)
		V_0 = 0;
		goto IL_0031;
	}

IL_000c:
	{
		// if(keys[i] == name)
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = __this->get_keys_8();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		String_t* L_3;
		L_3 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_1, L_2, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		String_t* L_4 = ___name0;
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		// return list[i];
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_6 = __this->get_list_7();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_8;
		L_8 = List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		return L_8;
	}

IL_002d:
	{
		// for(int i = 0; i < keys.Count; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0031:
	{
		// for(int i = 0; i < keys.Count; i++)
		int32_t L_10 = V_0;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_11 = __this->get_keys_8();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_11, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_000c;
		}
	}

IL_003f:
	{
		// return null;
		return (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 *)NULL;
	}
}
// System.Boolean JSONObject::HasFields(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_HasFields_mCC80238F0239667B83D74505982D657DA8015B29 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___names0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(!IsObject)
		bool L_0;
		L_0 = JSONObject_get_IsObject_m8AEF0729E0189B47917B081AA25536A699D108FB(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// for(int i = 0; i < names.Length; i++)
		V_0 = 0;
		goto IL_0024;
	}

IL_000e:
	{
		// if(!keys.Contains(names[i]))
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = __this->get_keys_8();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = ___names0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_1);
		bool L_6;
		L_6 = List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F(L_1, L_5, /*hidden argument*/List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0020;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0020:
	{
		// for(int i = 0; i < names.Length; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0024:
	{
		// for(int i = 0; i < names.Length; i++)
		int32_t L_8 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = ___names0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean JSONObject::HasField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_HasField_m0716AE8AC84412AFADF939A64D923C6B9C91E6B1 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(!IsObject)
		bool L_0;
		L_0 = JSONObject_get_IsObject_m8AEF0729E0189B47917B081AA25536A699D108FB(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// for(int i = 0; i < keys.Count; i++)
		V_0 = 0;
		goto IL_0028;
	}

IL_000e:
	{
		// if(keys[i] == name)
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = __this->get_keys_8();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		String_t* L_3;
		L_3 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_1, L_2, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		String_t* L_4 = ___name0;
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0024:
	{
		// for(int i = 0; i < keys.Count; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0028:
	{
		// for(int i = 0; i < keys.Count; i++)
		int32_t L_7 = V_0;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_8 = __this->get_keys_8();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_8, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_000e;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// System.Void JSONObject::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Clear_m488A29091C76A26DD7243E16B52B5869A0CC5D3E (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mDA321A60902EA5DFB3B4B97E348FA9464F2DC50D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// type = Type.NULL;
		__this->set_type_6(0);
		// if(list != null)
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_0 = __this->get_list_7();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// list.Clear();
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_1 = __this->get_list_7();
		NullCheck(L_1);
		List_1_Clear_mDA321A60902EA5DFB3B4B97E348FA9464F2DC50D(L_1, /*hidden argument*/List_1_Clear_mDA321A60902EA5DFB3B4B97E348FA9464F2DC50D_RuntimeMethod_var);
	}

IL_001a:
	{
		// if(keys != null)
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = __this->get_keys_8();
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// keys.Clear();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_3 = __this->get_keys_8();
		NullCheck(L_3);
		List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640(L_3, /*hidden argument*/List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
	}

IL_002d:
	{
		// str = "";
		__this->set_str_9(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// n = 0;
		__this->set_n_10((0.0f));
		// b = false;
		__this->set_b_13((bool)0);
		// }
		return;
	}
}
// JSONObject JSONObject::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_Copy_m386F06A2A5D438174A9ACE83BFB639437C5A04CC (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Create(Print());
		String_t* L_0;
		L_0 = JSONObject_Print_mCDAA742C47882262F801B45D3004ED7CEFB6BEB6(__this, (bool)0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1;
		L_1 = JSONObject_Create_m6869838BC7DFE7BA8C73FF0CDC7DAB93B25F3C73(L_0, ((int32_t)-2), (bool)0, (bool)0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void JSONObject::Merge(JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Merge_m3B1ED6AA5ED31DA9A87D573707D6630653D823B1 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MergeRecur(this, obj);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_MergeRecur_m9D1F0F685C959F0C564D775FF96EC620EA27E828(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JSONObject::MergeRecur(JSONObject,JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_MergeRecur_m9D1F0F685C959F0C564D775FF96EC620EA27E828 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___left0, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___right1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// if(left.type == Type.NULL)
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0 = ___left0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_type_6();
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		// left.Absorb(right);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2 = ___left0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_3 = ___right1;
		NullCheck(L_2);
		JSONObject_Absorb_mDBE9D614A08AACFFBAA3CBC8AEF44C34C9C0C208(L_2, L_3, /*hidden argument*/NULL);
		return;
	}

IL_0010:
	{
		// else if(left.type == Type.OBJECT && right.type == Type.OBJECT) {
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_4 = ___left0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_type_6();
		if ((!(((uint32_t)L_5) == ((uint32_t)3))))
		{
			goto IL_00b2;
		}
	}
	{
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_6 = ___right1;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_type_6();
		if ((!(((uint32_t)L_7) == ((uint32_t)3))))
		{
			goto IL_00b2;
		}
	}
	{
		// for(int i = 0; i < right.list.Count; i++) {
		V_0 = 0;
		goto IL_00a0;
	}

IL_002c:
	{
		// string key = right.keys[i];
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_8 = ___right1;
		NullCheck(L_8);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_9 = L_8->get_keys_8();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		String_t* L_11;
		L_11 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_9, L_10, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		V_1 = L_11;
		// if(right[i].isContainer) {
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_12 = ___right1;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_14;
		L_14 = JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B(L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		bool L_15;
		L_15 = JSONObject_get_isContainer_mE8E9995704509192E5B1958110C461BAC07B8C67(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0075;
		}
	}
	{
		// if(left.HasField(key))
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_16 = ___left0;
		String_t* L_17 = V_1;
		NullCheck(L_16);
		bool L_18;
		L_18 = JSONObject_HasField_m0716AE8AC84412AFADF939A64D923C6B9C91E6B1(L_16, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0065;
		}
	}
	{
		// MergeRecur(left[key], right[i]);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_19 = ___left0;
		String_t* L_20 = V_1;
		NullCheck(L_19);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_21;
		L_21 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_19, L_20, /*hidden argument*/NULL);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_22 = ___right1;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_24;
		L_24 = JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B(L_22, L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_MergeRecur_m9D1F0F685C959F0C564D775FF96EC620EA27E828(L_21, L_24, /*hidden argument*/NULL);
		goto IL_009c;
	}

IL_0065:
	{
		// left.AddField(key, right[i]);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_25 = ___left0;
		String_t* L_26 = V_1;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_27 = ___right1;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_29;
		L_29 = JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B(L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_25);
		JSONObject_AddField_m040F25BA9B3A4BDEBAAE2332096F3DCC3FDA538A(L_25, L_26, L_29, /*hidden argument*/NULL);
		// } else {
		goto IL_009c;
	}

IL_0075:
	{
		// if(left.HasField(key))
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_30 = ___left0;
		String_t* L_31 = V_1;
		NullCheck(L_30);
		bool L_32;
		L_32 = JSONObject_HasField_m0716AE8AC84412AFADF939A64D923C6B9C91E6B1(L_30, L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_008e;
		}
	}
	{
		// left.SetField(key, right[i]);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_33 = ___left0;
		String_t* L_34 = V_1;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_35 = ___right1;
		int32_t L_36 = V_0;
		NullCheck(L_35);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_37;
		L_37 = JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B(L_35, L_36, /*hidden argument*/NULL);
		NullCheck(L_33);
		JSONObject_SetField_m76DD197843038E35B835B8FE6585432219750040(L_33, L_34, L_37, /*hidden argument*/NULL);
		goto IL_009c;
	}

IL_008e:
	{
		// left.AddField(key, right[i]);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_38 = ___left0;
		String_t* L_39 = V_1;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_40 = ___right1;
		int32_t L_41 = V_0;
		NullCheck(L_40);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_42;
		L_42 = JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B(L_40, L_41, /*hidden argument*/NULL);
		NullCheck(L_38);
		JSONObject_AddField_m040F25BA9B3A4BDEBAAE2332096F3DCC3FDA538A(L_38, L_39, L_42, /*hidden argument*/NULL);
	}

IL_009c:
	{
		// for(int i = 0; i < right.list.Count; i++) {
		int32_t L_43 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
	}

IL_00a0:
	{
		// for(int i = 0; i < right.list.Count; i++) {
		int32_t L_44 = V_0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_45 = ___right1;
		NullCheck(L_45);
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_46 = L_45->get_list_7();
		NullCheck(L_46);
		int32_t L_47;
		L_47 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_46, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		if ((((int32_t)L_44) < ((int32_t)L_47)))
		{
			goto IL_002c;
		}
	}
	{
		// } else if(left.type == Type.ARRAY && right.type == Type.ARRAY) {
		return;
	}

IL_00b2:
	{
		// } else if(left.type == Type.ARRAY && right.type == Type.ARRAY) {
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_48 = ___left0;
		NullCheck(L_48);
		int32_t L_49 = L_48->get_type_6();
		if ((!(((uint32_t)L_49) == ((uint32_t)4))))
		{
			goto IL_0134;
		}
	}
	{
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_50 = ___right1;
		NullCheck(L_50);
		int32_t L_51 = L_50->get_type_6();
		if ((!(((uint32_t)L_51) == ((uint32_t)4))))
		{
			goto IL_0134;
		}
	}
	{
		// if(right.Count > left.Count) {
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_52 = ___right1;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = JSONObject_get_Count_m04F6896A6527D124CB068FDD945872BD698AF9BA(L_52, /*hidden argument*/NULL);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_54 = ___left0;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = JSONObject_get_Count_m04F6896A6527D124CB068FDD945872BD698AF9BA(L_54, /*hidden argument*/NULL);
		if ((((int32_t)L_53) <= ((int32_t)L_55)))
		{
			goto IL_00d3;
		}
	}
	{
		// return;
		return;
	}

IL_00d3:
	{
		// for(int i = 0; i < right.list.Count; i++) {
		V_2 = 0;
		goto IL_0126;
	}

IL_00d7:
	{
		// if(left[i].type == right[i].type) {            //Only overwrite with the same type
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_56 = ___left0;
		int32_t L_57 = V_2;
		NullCheck(L_56);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_58;
		L_58 = JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B(L_56, L_57, /*hidden argument*/NULL);
		NullCheck(L_58);
		int32_t L_59 = L_58->get_type_6();
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_60 = ___right1;
		int32_t L_61 = V_2;
		NullCheck(L_60);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_62;
		L_62 = JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B(L_60, L_61, /*hidden argument*/NULL);
		NullCheck(L_62);
		int32_t L_63 = L_62->get_type_6();
		if ((!(((uint32_t)L_59) == ((uint32_t)L_63))))
		{
			goto IL_0122;
		}
	}
	{
		// if(left[i].isContainer)
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_64 = ___left0;
		int32_t L_65 = V_2;
		NullCheck(L_64);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_66;
		L_66 = JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B(L_64, L_65, /*hidden argument*/NULL);
		NullCheck(L_66);
		bool L_67;
		L_67 = JSONObject_get_isContainer_mE8E9995704509192E5B1958110C461BAC07B8C67(L_66, /*hidden argument*/NULL);
		if (!L_67)
		{
			goto IL_0114;
		}
	}
	{
		// MergeRecur(left[i], right[i]);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_68 = ___left0;
		int32_t L_69 = V_2;
		NullCheck(L_68);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_70;
		L_70 = JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B(L_68, L_69, /*hidden argument*/NULL);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_71 = ___right1;
		int32_t L_72 = V_2;
		NullCheck(L_71);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_73;
		L_73 = JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B(L_71, L_72, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_MergeRecur_m9D1F0F685C959F0C564D775FF96EC620EA27E828(L_70, L_73, /*hidden argument*/NULL);
		goto IL_0122;
	}

IL_0114:
	{
		// left[i] = right[i];
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_74 = ___left0;
		int32_t L_75 = V_2;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_76 = ___right1;
		int32_t L_77 = V_2;
		NullCheck(L_76);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_78;
		L_78 = JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B(L_76, L_77, /*hidden argument*/NULL);
		NullCheck(L_74);
		JSONObject_set_Item_mA2253EB63C14426FD03F768405554601E47A56A0(L_74, L_75, L_78, /*hidden argument*/NULL);
	}

IL_0122:
	{
		// for(int i = 0; i < right.list.Count; i++) {
		int32_t L_79 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)1));
	}

IL_0126:
	{
		// for(int i = 0; i < right.list.Count; i++) {
		int32_t L_80 = V_2;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_81 = ___right1;
		NullCheck(L_81);
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_82 = L_81->get_list_7();
		NullCheck(L_82);
		int32_t L_83;
		L_83 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_82, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		if ((((int32_t)L_80) < ((int32_t)L_83)))
		{
			goto IL_00d7;
		}
	}

IL_0134:
	{
		// }
		return;
	}
}
// System.Void JSONObject::Bake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Bake_m2718B90679717E9954FBE62FA62E4DF4A053164B (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method)
{
	{
		// if(type != Type.BAKED) {
		int32_t L_0 = __this->get_type_6();
		if ((((int32_t)L_0) == ((int32_t)6)))
		{
			goto IL_001d;
		}
	}
	{
		// str = Print();
		String_t* L_1;
		L_1 = JSONObject_Print_mCDAA742C47882262F801B45D3004ED7CEFB6BEB6(__this, (bool)0, /*hidden argument*/NULL);
		__this->set_str_9(L_1);
		// type = Type.BAKED;
		__this->set_type_6(6);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerable JSONObject::BakeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONObject_BakeAsync_mEE8F51D3F53E1472AA4C8A6033C17D2FDDC6669F (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CBakeAsyncU3Ed__107_t8E955808B36BA1E7480E5519CC31A36000C8ECC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CBakeAsyncU3Ed__107_t8E955808B36BA1E7480E5519CC31A36000C8ECC8 * L_0 = (U3CBakeAsyncU3Ed__107_t8E955808B36BA1E7480E5519CC31A36000C8ECC8 *)il2cpp_codegen_object_new(U3CBakeAsyncU3Ed__107_t8E955808B36BA1E7480E5519CC31A36000C8ECC8_il2cpp_TypeInfo_var);
		U3CBakeAsyncU3Ed__107__ctor_m295B00065E6C1BF9A6A24DF11DB0506055DEA222(L_0, ((int32_t)-2), /*hidden argument*/NULL);
		U3CBakeAsyncU3Ed__107_t8E955808B36BA1E7480E5519CC31A36000C8ECC8 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		return L_1;
	}
}
// System.String JSONObject::Print(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONObject_Print_mCDAA742C47882262F801B45D3004ED7CEFB6BEB6 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, bool ___pretty0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		// StringBuilder builder = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// Stringify(0, builder, pretty);
		StringBuilder_t * L_1 = V_0;
		bool L_2 = ___pretty0;
		JSONObject_Stringify_m4F8AD45CB5A773F4867A19F25300BF2689574BB2(__this, 0, L_1, L_2, /*hidden argument*/NULL);
		// return builder.ToString();
		StringBuilder_t * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		return L_4;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> JSONObject::PrintAsync(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONObject_PrintAsync_m109E1BB961985C7BA46DBD74D2569BDB3DB0412A (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, bool ___pretty0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7 * L_0 = (U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7 *)il2cpp_codegen_object_new(U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7_il2cpp_TypeInfo_var);
		U3CPrintAsyncU3Ed__109__ctor_m128B53CFBBBCE75AC44803F0DCBFF5EE2DDDAE7B(L_0, ((int32_t)-2), /*hidden argument*/NULL);
		U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7 * L_2 = L_1;
		bool L_3 = ___pretty0;
		NullCheck(L_2);
		L_2->set_U3CU3E3__pretty_5(L_3);
		return L_2;
	}
}
// System.Collections.IEnumerable JSONObject::StringifyAsync(System.Int32,System.Text.StringBuilder,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONObject_StringifyAsync_m1FDB9203BA364F417A9DD46DA8D6739AA126EAEA (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, int32_t ___depth0, StringBuilder_t * ___builder1, bool ___pretty2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124 * L_0 = (U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124 *)il2cpp_codegen_object_new(U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124_il2cpp_TypeInfo_var);
		U3CStringifyAsyncU3Ed__112__ctor_m1E81AEAC2CD745EDB141D3F776D608F93B77E89E(L_0, ((int32_t)-2), /*hidden argument*/NULL);
		U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_5(__this);
		U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124 * L_2 = L_1;
		int32_t L_3 = ___depth0;
		NullCheck(L_2);
		L_2->set_U3CU3E3__depth_4(L_3);
		U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124 * L_4 = L_2;
		StringBuilder_t * L_5 = ___builder1;
		NullCheck(L_4);
		L_4->set_U3CU3E3__builder_7(L_5);
		U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124 * L_6 = L_4;
		bool L_7 = ___pretty2;
		NullCheck(L_6);
		L_6->set_U3CU3E3__pretty_9(L_7);
		return L_6;
	}
}
// System.Void JSONObject::Stringify(System.Int32,System.Text.StringBuilder,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Stringify_m4F8AD45CB5A773F4867A19F25300BF2689574BB2 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, int32_t ___depth0, StringBuilder_t * ___builder1, bool ___pretty2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49A5AAB83859C60FC692064F7CA72853E8B6B189);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59E22C292F27E6EDE5644C7B811538F78C4ACAB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral763076C684EFEFA1B5A84D92C472EA6FF54AB95D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA57F692809412BBB13F764D9044820BC70823E64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC93B50DB5A16A30443D060A92DCF406D5233A92B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		// if(depth++ > MAX_DEPTH) {
		int32_t L_0 = ___depth0;
		int32_t L_1 = L_0;
		___depth0 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)100))))
		{
			goto IL_000b;
		}
	}
	{
		// return;
		return;
	}

IL_000b:
	{
		// switch(type) {
		int32_t L_2 = __this->get_type_6();
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_032e;
			}
			case 1:
			{
				goto IL_0043;
			}
			case 2:
			{
				goto IL_0056;
			}
			case 3:
			{
				goto IL_00d2;
			}
			case 4:
			{
				goto IL_01f6;
			}
			case 5:
			{
				goto IL_030c;
			}
			case 6:
			{
				goto IL_0035;
			}
		}
	}
	{
		return;
	}

IL_0035:
	{
		// builder.Append(str);
		StringBuilder_t * L_4 = ___builder1;
		String_t* L_5 = __this->get_str_9();
		NullCheck(L_4);
		StringBuilder_t * L_6;
		L_6 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_4, L_5, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0043:
	{
		// builder.AppendFormat("\"{0}\"", str);
		StringBuilder_t * L_7 = ___builder1;
		String_t* L_8 = __this->get_str_9();
		NullCheck(L_7);
		StringBuilder_t * L_9;
		L_9 = StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E(L_7, _stringLiteral49A5AAB83859C60FC692064F7CA72853E8B6B189, L_8, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0056:
	{
		// if(useInt) {
		bool L_10 = __this->get_useInt_11();
		if (!L_10)
		{
			goto IL_0071;
		}
	}
	{
		// builder.Append(i.ToString());
		StringBuilder_t * L_11 = ___builder1;
		int64_t* L_12 = __this->get_address_of_i_12();
		String_t* L_13;
		L_13 = Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F((int64_t*)L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		StringBuilder_t * L_14;
		L_14 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_11, L_13, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_0071:
	{
		// if(float.IsInfinity(n))
		float L_15 = __this->get_n_10();
		bool L_16;
		L_16 = Single_IsInfinity_m10D3B235800230231AFC34AFEC4D320D06F794C1(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_008b;
		}
	}
	{
		// builder.Append(INFINITY);
		StringBuilder_t * L_17 = ___builder1;
		NullCheck(L_17);
		StringBuilder_t * L_18;
		L_18 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_17, _stringLiteralA57F692809412BBB13F764D9044820BC70823E64, /*hidden argument*/NULL);
		return;
	}

IL_008b:
	{
		// else if(float.IsNegativeInfinity(n))
		float L_19 = __this->get_n_10();
		bool L_20;
		L_20 = Single_IsNegativeInfinity_m08D484739F9E73C171CFC2819E30A983E87C68AB(L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00a5;
		}
	}
	{
		// builder.Append(NEGINFINITY);
		StringBuilder_t * L_21 = ___builder1;
		NullCheck(L_21);
		StringBuilder_t * L_22;
		L_22 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_21, _stringLiteralC93B50DB5A16A30443D060A92DCF406D5233A92B, /*hidden argument*/NULL);
		return;
	}

IL_00a5:
	{
		// else if(float.IsNaN(n))
		float L_23 = __this->get_n_10();
		bool L_24;
		L_24 = Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599(L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00bf;
		}
	}
	{
		// builder.Append(NaN);
		StringBuilder_t * L_25 = ___builder1;
		NullCheck(L_25);
		StringBuilder_t * L_26;
		L_26 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_25, _stringLiteral59E22C292F27E6EDE5644C7B811538F78C4ACAB0, /*hidden argument*/NULL);
		return;
	}

IL_00bf:
	{
		// builder.Append(n.ToString());
		StringBuilder_t * L_27 = ___builder1;
		float* L_28 = __this->get_address_of_n_10();
		String_t* L_29;
		L_29 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		StringBuilder_t * L_30;
		L_30 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_27, L_29, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00d2:
	{
		// builder.Append("{");
		StringBuilder_t * L_31 = ___builder1;
		NullCheck(L_31);
		StringBuilder_t * L_32;
		L_32 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_31, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, /*hidden argument*/NULL);
		// if(list.Count > 0) {
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_33 = __this->get_list_7();
		NullCheck(L_33);
		int32_t L_34;
		L_34 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_33, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		if ((((int32_t)L_34) <= ((int32_t)0)))
		{
			goto IL_01ae;
		}
	}
	{
		// if(pretty)
		bool L_35 = ___pretty2;
		if (!L_35)
		{
			goto IL_00fe;
		}
	}
	{
		// builder.Append("\n");
		StringBuilder_t * L_36 = ___builder1;
		NullCheck(L_36);
		StringBuilder_t * L_37;
		L_37 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_36, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, /*hidden argument*/NULL);
	}

IL_00fe:
	{
		// for(int i = 0; i < list.Count; i++) {
		V_1 = 0;
		goto IL_0178;
	}

IL_0102:
	{
		// string key = keys[i];
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_38 = __this->get_keys_8();
		int32_t L_39 = V_1;
		NullCheck(L_38);
		String_t* L_40;
		L_40 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_38, L_39, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		V_2 = L_40;
		// JSONObject obj = list[i];
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_41 = __this->get_list_7();
		int32_t L_42 = V_1;
		NullCheck(L_41);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_43;
		L_43 = List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_inline(L_41, L_42, /*hidden argument*/List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		V_3 = L_43;
		// if(obj) {
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_44 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_44, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_0174;
		}
	}
	{
		// if(pretty)
		bool L_46 = ___pretty2;
		if (!L_46)
		{
			goto IL_0143;
		}
	}
	{
		// for(int j = 0; j < depth; j++)
		V_4 = 0;
		goto IL_013e;
	}

IL_012c:
	{
		// builder.Append("\t"); //for a bit more readability
		StringBuilder_t * L_47 = ___builder1;
		NullCheck(L_47);
		StringBuilder_t * L_48;
		L_48 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_47, _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3, /*hidden argument*/NULL);
		// for(int j = 0; j < depth; j++)
		int32_t L_49 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_013e:
	{
		// for(int j = 0; j < depth; j++)
		int32_t L_50 = V_4;
		int32_t L_51 = ___depth0;
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_012c;
		}
	}

IL_0143:
	{
		// builder.AppendFormat("\"{0}\":", key);
		StringBuilder_t * L_52 = ___builder1;
		String_t* L_53 = V_2;
		NullCheck(L_52);
		StringBuilder_t * L_54;
		L_54 = StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E(L_52, _stringLiteral763076C684EFEFA1B5A84D92C472EA6FF54AB95D, L_53, /*hidden argument*/NULL);
		// obj.Stringify(depth, builder, pretty);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_55 = V_3;
		int32_t L_56 = ___depth0;
		StringBuilder_t * L_57 = ___builder1;
		bool L_58 = ___pretty2;
		NullCheck(L_55);
		JSONObject_Stringify_m4F8AD45CB5A773F4867A19F25300BF2689574BB2(L_55, L_56, L_57, L_58, /*hidden argument*/NULL);
		// builder.Append(",");
		StringBuilder_t * L_59 = ___builder1;
		NullCheck(L_59);
		StringBuilder_t * L_60;
		L_60 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_59, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, /*hidden argument*/NULL);
		// if(pretty)
		bool L_61 = ___pretty2;
		if (!L_61)
		{
			goto IL_0174;
		}
	}
	{
		// builder.Append("\n");
		StringBuilder_t * L_62 = ___builder1;
		NullCheck(L_62);
		StringBuilder_t * L_63;
		L_63 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_62, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, /*hidden argument*/NULL);
	}

IL_0174:
	{
		// for(int i = 0; i < list.Count; i++) {
		int32_t L_64 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
	}

IL_0178:
	{
		// for(int i = 0; i < list.Count; i++) {
		int32_t L_65 = V_1;
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_66 = __this->get_list_7();
		NullCheck(L_66);
		int32_t L_67;
		L_67 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_66, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		if ((((int32_t)L_65) < ((int32_t)L_67)))
		{
			goto IL_0102;
		}
	}
	{
		// if(pretty)
		bool L_68 = ___pretty2;
		if (!L_68)
		{
			goto IL_019c;
		}
	}
	{
		// builder.Length -= 2;
		StringBuilder_t * L_69 = ___builder1;
		StringBuilder_t * L_70 = L_69;
		NullCheck(L_70);
		int32_t L_71;
		L_71 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_70, /*hidden argument*/NULL);
		NullCheck(L_70);
		StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A(L_70, ((int32_t)il2cpp_codegen_subtract((int32_t)L_71, (int32_t)2)), /*hidden argument*/NULL);
		goto IL_01ae;
	}

IL_019c:
	{
		// builder.Length--;
		StringBuilder_t * L_72 = ___builder1;
		StringBuilder_t * L_73 = L_72;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_73, /*hidden argument*/NULL);
		V_5 = L_74;
		int32_t L_75 = V_5;
		NullCheck(L_73);
		StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A(L_73, ((int32_t)il2cpp_codegen_subtract((int32_t)L_75, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_01ae:
	{
		// if(pretty && list.Count > 0) {
		bool L_76 = ___pretty2;
		if (!L_76)
		{
			goto IL_01e9;
		}
	}
	{
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_77 = __this->get_list_7();
		NullCheck(L_77);
		int32_t L_78;
		L_78 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_77, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		if ((((int32_t)L_78) <= ((int32_t)0)))
		{
			goto IL_01e9;
		}
	}
	{
		// builder.Append("\n");
		StringBuilder_t * L_79 = ___builder1;
		NullCheck(L_79);
		StringBuilder_t * L_80;
		L_80 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_79, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, /*hidden argument*/NULL);
		// for(int j = 0; j < depth - 1; j++)
		V_6 = 0;
		goto IL_01e2;
	}

IL_01d0:
	{
		// builder.Append("\t"); //for a bit more readability
		StringBuilder_t * L_81 = ___builder1;
		NullCheck(L_81);
		StringBuilder_t * L_82;
		L_82 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_81, _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3, /*hidden argument*/NULL);
		// for(int j = 0; j < depth - 1; j++)
		int32_t L_83 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)1));
	}

IL_01e2:
	{
		// for(int j = 0; j < depth - 1; j++)
		int32_t L_84 = V_6;
		int32_t L_85 = ___depth0;
		if ((((int32_t)L_84) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_85, (int32_t)1)))))
		{
			goto IL_01d0;
		}
	}

IL_01e9:
	{
		// builder.Append("}");
		StringBuilder_t * L_86 = ___builder1;
		NullCheck(L_86);
		StringBuilder_t * L_87;
		L_87 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_86, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_01f6:
	{
		// builder.Append("[");
		StringBuilder_t * L_88 = ___builder1;
		NullCheck(L_88);
		StringBuilder_t * L_89;
		L_89 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_88, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, /*hidden argument*/NULL);
		// if(list.Count > 0) {
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_90 = __this->get_list_7();
		NullCheck(L_90);
		int32_t L_91;
		L_91 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_90, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		if ((((int32_t)L_91) <= ((int32_t)0)))
		{
			goto IL_02c4;
		}
	}
	{
		// if(pretty)
		bool L_92 = ___pretty2;
		if (!L_92)
		{
			goto IL_0222;
		}
	}
	{
		// builder.Append("\n"); //for a bit more readability
		StringBuilder_t * L_93 = ___builder1;
		NullCheck(L_93);
		StringBuilder_t * L_94;
		L_94 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_93, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, /*hidden argument*/NULL);
	}

IL_0222:
	{
		// for(int i = 0; i < list.Count; i++) {
		V_7 = 0;
		goto IL_0290;
	}

IL_0227:
	{
		// if(list[i]) {
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_95 = __this->get_list_7();
		int32_t L_96 = V_7;
		NullCheck(L_95);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_97;
		L_97 = List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_inline(L_95, L_96, /*hidden argument*/List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		bool L_98;
		L_98 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_97, /*hidden argument*/NULL);
		if (!L_98)
		{
			goto IL_028a;
		}
	}
	{
		// if(pretty)
		bool L_99 = ___pretty2;
		if (!L_99)
		{
			goto IL_025a;
		}
	}
	{
		// for(int j = 0; j < depth; j++)
		V_8 = 0;
		goto IL_0255;
	}

IL_0243:
	{
		// builder.Append("\t"); //for a bit more readability
		StringBuilder_t * L_100 = ___builder1;
		NullCheck(L_100);
		StringBuilder_t * L_101;
		L_101 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_100, _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3, /*hidden argument*/NULL);
		// for(int j = 0; j < depth; j++)
		int32_t L_102 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_102, (int32_t)1));
	}

IL_0255:
	{
		// for(int j = 0; j < depth; j++)
		int32_t L_103 = V_8;
		int32_t L_104 = ___depth0;
		if ((((int32_t)L_103) < ((int32_t)L_104)))
		{
			goto IL_0243;
		}
	}

IL_025a:
	{
		// list[i].Stringify(depth, builder, pretty);
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_105 = __this->get_list_7();
		int32_t L_106 = V_7;
		NullCheck(L_105);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_107;
		L_107 = List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_inline(L_105, L_106, /*hidden argument*/List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		int32_t L_108 = ___depth0;
		StringBuilder_t * L_109 = ___builder1;
		bool L_110 = ___pretty2;
		NullCheck(L_107);
		JSONObject_Stringify_m4F8AD45CB5A773F4867A19F25300BF2689574BB2(L_107, L_108, L_109, L_110, /*hidden argument*/NULL);
		// builder.Append(",");
		StringBuilder_t * L_111 = ___builder1;
		NullCheck(L_111);
		StringBuilder_t * L_112;
		L_112 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_111, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, /*hidden argument*/NULL);
		// if(pretty)
		bool L_113 = ___pretty2;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		// builder.Append("\n"); //for a bit more readability
		StringBuilder_t * L_114 = ___builder1;
		NullCheck(L_114);
		StringBuilder_t * L_115;
		L_115 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_114, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, /*hidden argument*/NULL);
	}

IL_028a:
	{
		// for(int i = 0; i < list.Count; i++) {
		int32_t L_116 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_116, (int32_t)1));
	}

IL_0290:
	{
		// for(int i = 0; i < list.Count; i++) {
		int32_t L_117 = V_7;
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_118 = __this->get_list_7();
		NullCheck(L_118);
		int32_t L_119;
		L_119 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_118, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		if ((((int32_t)L_117) < ((int32_t)L_119)))
		{
			goto IL_0227;
		}
	}
	{
		// if(pretty)
		bool L_120 = ___pretty2;
		if (!L_120)
		{
			goto IL_02b2;
		}
	}
	{
		// builder.Length -= 2;
		StringBuilder_t * L_121 = ___builder1;
		StringBuilder_t * L_122 = L_121;
		NullCheck(L_122);
		int32_t L_123;
		L_123 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_122, /*hidden argument*/NULL);
		NullCheck(L_122);
		StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A(L_122, ((int32_t)il2cpp_codegen_subtract((int32_t)L_123, (int32_t)2)), /*hidden argument*/NULL);
		goto IL_02c4;
	}

IL_02b2:
	{
		// builder.Length--;
		StringBuilder_t * L_124 = ___builder1;
		StringBuilder_t * L_125 = L_124;
		NullCheck(L_125);
		int32_t L_126;
		L_126 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_125, /*hidden argument*/NULL);
		V_5 = L_126;
		int32_t L_127 = V_5;
		NullCheck(L_125);
		StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A(L_125, ((int32_t)il2cpp_codegen_subtract((int32_t)L_127, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_02c4:
	{
		// if(pretty && list.Count > 0) {
		bool L_128 = ___pretty2;
		if (!L_128)
		{
			goto IL_02ff;
		}
	}
	{
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_129 = __this->get_list_7();
		NullCheck(L_129);
		int32_t L_130;
		L_130 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_129, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		if ((((int32_t)L_130) <= ((int32_t)0)))
		{
			goto IL_02ff;
		}
	}
	{
		// builder.Append("\n");
		StringBuilder_t * L_131 = ___builder1;
		NullCheck(L_131);
		StringBuilder_t * L_132;
		L_132 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_131, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, /*hidden argument*/NULL);
		// for(int j = 0; j < depth - 1; j++)
		V_9 = 0;
		goto IL_02f8;
	}

IL_02e6:
	{
		// builder.Append("\t"); //for a bit more readability
		StringBuilder_t * L_133 = ___builder1;
		NullCheck(L_133);
		StringBuilder_t * L_134;
		L_134 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_133, _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3, /*hidden argument*/NULL);
		// for(int j = 0; j < depth - 1; j++)
		int32_t L_135 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_135, (int32_t)1));
	}

IL_02f8:
	{
		// for(int j = 0; j < depth - 1; j++)
		int32_t L_136 = V_9;
		int32_t L_137 = ___depth0;
		if ((((int32_t)L_136) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_137, (int32_t)1)))))
		{
			goto IL_02e6;
		}
	}

IL_02ff:
	{
		// builder.Append("]");
		StringBuilder_t * L_138 = ___builder1;
		NullCheck(L_138);
		StringBuilder_t * L_139;
		L_139 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_138, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_030c:
	{
		// if(b)
		bool L_140 = __this->get_b_13();
		if (!L_140)
		{
			goto IL_0321;
		}
	}
	{
		// builder.Append("true");
		StringBuilder_t * L_141 = ___builder1;
		NullCheck(L_141);
		StringBuilder_t * L_142;
		L_142 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_141, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, /*hidden argument*/NULL);
		return;
	}

IL_0321:
	{
		// builder.Append("false");
		StringBuilder_t * L_143 = ___builder1;
		NullCheck(L_143);
		StringBuilder_t * L_144;
		L_144 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_143, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_032e:
	{
		// builder.Append("null");
		StringBuilder_t * L_145 = ___builder1;
		NullCheck(L_145);
		StringBuilder_t * L_146;
		L_146 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_145, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, /*hidden argument*/NULL);
		// }
		return;
	}
}
// JSONObject JSONObject::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(list.Count > index) return list[index];
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_0 = __this->get_list_7();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_0, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		int32_t L_2 = ___index0;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_001b;
		}
	}
	{
		// if(list.Count > index) return list[index];
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_3 = __this->get_list_7();
		int32_t L_4 = ___index0;
		NullCheck(L_3);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_5;
		L_5 = List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		return L_5;
	}

IL_001b:
	{
		// return null;
		return (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 *)NULL;
	}
}
// System.Void JSONObject::set_Item(System.Int32,JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_set_Item_mA2253EB63C14426FD03F768405554601E47A56A0 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, int32_t ___index0, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m4FA2E1C601928A6BA4BBA78642C50486DBB164B7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(list.Count > index)
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_0 = __this->get_list_7();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_0, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		int32_t L_2 = ___index0;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_001b;
		}
	}
	{
		// list[index] = value;
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_3 = __this->get_list_7();
		int32_t L_4 = ___index0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_5 = ___value1;
		NullCheck(L_3);
		List_1_set_Item_m4FA2E1C601928A6BA4BBA78642C50486DBB164B7(L_3, L_4, L_5, /*hidden argument*/List_1_set_Item_m4FA2E1C601928A6BA4BBA78642C50486DBB164B7_RuntimeMethod_var);
	}

IL_001b:
	{
		// }
		return;
	}
}
// JSONObject JSONObject::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___index0, const RuntimeMethod* method)
{
	{
		// return GetField(index);
		String_t* L_0 = ___index0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1;
		L_1 = JSONObject_GetField_m3181F5223EF85F862D7C542FA18FD9AC1C626F2F(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void JSONObject::set_Item(System.String,JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_set_Item_m25E4D8996F85E2EF36AE3FF5EE5FAA1E9D495D0E (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___index0, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___value1, const RuntimeMethod* method)
{
	{
		// SetField(index, value);
		String_t* L_0 = ___index0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1 = ___value1;
		JSONObject_SetField_m76DD197843038E35B835B8FE6585432219750040(__this, L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String JSONObject::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONObject_ToString_mFB3BD00B7F09089A55DB7147281D3BBC1E98FF8A (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method)
{
	{
		// return Print();
		String_t* L_0;
		L_0 = JSONObject_Print_mCDAA742C47882262F801B45D3004ED7CEFB6BEB6(__this, (bool)0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String JSONObject::ToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONObject_ToString_mA7A46B5ECAAC77D702D61EC8314EF75F6C7B9308 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, bool ___pretty0, const RuntimeMethod* method)
{
	{
		// return Print(pretty);
		bool L_0 = ___pretty0;
		String_t* L_1;
		L_1 = JSONObject_Print_mCDAA742C47882262F801B45D3004ED7CEFB6BEB6(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> JSONObject::ToDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * JSONObject_ToDictionary_mDF496D107AD5ECF06B83E7213FD5483FC8EE95BC (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * V_0 = NULL;
	int32_t V_1 = 0;
	JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * V_2 = NULL;
	int32_t V_3 = 0;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * G_B7_2 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * G_B6_2 = NULL;
	String_t* G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * G_B10_2 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * G_B9_2 = NULL;
	{
		// if(type == Type.OBJECT) {
		int32_t L_0 = __this->get_type_6();
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_00ca;
		}
	}
	{
		// Dictionary<string, string> result = new Dictionary<string, string>();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_1 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_1, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		V_0 = L_1;
		// for(int i = 0; i < list.Count; i++) {
		V_1 = 0;
		goto IL_00b7;
	}

IL_0019:
	{
		// JSONObject val = list[i];
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_2 = __this->get_list_7();
		int32_t L_3 = V_1;
		NullCheck(L_2);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_4;
		L_4 = List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		V_2 = L_4;
		// switch(val.type) {
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_5 = V_2;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_type_6();
		V_3 = L_6;
		int32_t L_7 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)))
		{
			case 0:
			{
				goto IL_004b;
			}
			case 1:
			{
				goto IL_0065;
			}
			case 2:
			{
				goto IL_00b3;
			}
			case 3:
			{
				goto IL_00b3;
			}
			case 4:
			{
				goto IL_008d;
			}
		}
	}
	{
		goto IL_00b3;
	}

IL_004b:
	{
		// case Type.STRING: result.Add(keys[i], val.str); break;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_8 = V_0;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_9 = __this->get_keys_8();
		int32_t L_10 = V_1;
		NullCheck(L_9);
		String_t* L_11;
		L_11 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_9, L_10, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13 = L_12->get_str_9();
		NullCheck(L_8);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_8, L_11, L_13, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		// case Type.STRING: result.Add(keys[i], val.str); break;
		goto IL_00b3;
	}

IL_0065:
	{
		// case Type.NUMBER: result.Add(keys[i], val.n + ""); break;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_14 = V_0;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_15 = __this->get_keys_8();
		int32_t L_16 = V_1;
		NullCheck(L_15);
		String_t* L_17;
		L_17 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_15, L_16, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_18 = V_2;
		NullCheck(L_18);
		float* L_19 = L_18->get_address_of_n_10();
		String_t* L_20;
		L_20 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_19, /*hidden argument*/NULL);
		String_t* L_21 = L_20;
		G_B6_0 = L_21;
		G_B6_1 = L_17;
		G_B6_2 = L_14;
		if (L_21)
		{
			G_B7_0 = L_21;
			G_B7_1 = L_17;
			G_B7_2 = L_14;
			goto IL_0086;
		}
	}
	{
		G_B7_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B7_1 = G_B6_1;
		G_B7_2 = G_B6_2;
	}

IL_0086:
	{
		NullCheck(G_B7_2);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(G_B7_2, G_B7_1, G_B7_0, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		// case Type.NUMBER: result.Add(keys[i], val.n + ""); break;
		goto IL_00b3;
	}

IL_008d:
	{
		// case Type.BOOL: result.Add(keys[i], val.b + ""); break;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_22 = V_0;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_23 = __this->get_keys_8();
		int32_t L_24 = V_1;
		NullCheck(L_23);
		String_t* L_25;
		L_25 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_23, L_24, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_26 = V_2;
		NullCheck(L_26);
		bool* L_27 = L_26->get_address_of_b_13();
		String_t* L_28;
		L_28 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)L_27, /*hidden argument*/NULL);
		String_t* L_29 = L_28;
		G_B9_0 = L_29;
		G_B9_1 = L_25;
		G_B9_2 = L_22;
		if (L_29)
		{
			G_B10_0 = L_29;
			G_B10_1 = L_25;
			G_B10_2 = L_22;
			goto IL_00ae;
		}
	}
	{
		G_B10_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
	}

IL_00ae:
	{
		NullCheck(G_B10_2);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(G_B10_2, G_B10_1, G_B10_0, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
	}

IL_00b3:
	{
		// for(int i = 0; i < list.Count; i++) {
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_00b7:
	{
		// for(int i = 0; i < list.Count; i++) {
		int32_t L_31 = V_1;
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_32 = __this->get_list_7();
		NullCheck(L_32);
		int32_t L_33;
		L_33 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_32, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		if ((((int32_t)L_31) < ((int32_t)L_33)))
		{
			goto IL_0019;
		}
	}
	{
		// return result;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_34 = V_0;
		return L_34;
	}

IL_00ca:
	{
		// return null;
		return (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)NULL;
	}
}
// System.Boolean JSONObject::op_Implicit(JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___o0, const RuntimeMethod* method)
{
	{
		// return o != null;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0 = ___o0;
		return (bool)((!(((RuntimeObject*)(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Void JSONObject::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__cctor_m81436211E2DF4F069A4ADBF9E24636EC678EB83D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____13BA99FB374DE24EB2656ACE253C54E2DA7EBAEDA4DD3DAB04852553EAF91EF6_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly char[] WHITESPACE = { ' ', '\r', '\n', '\t', '\uFEFF', '\u0009' };
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)6);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____13BA99FB374DE24EB2656ACE253C54E2DA7EBAEDA4DD3DAB04852553EAF91EF6_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_StaticFields*)il2cpp_codegen_static_fields_for(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var))->set_WHITESPACE_5(L_1);
		// static readonly Stopwatch printWatch = new Stopwatch();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_3 = (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)il2cpp_codegen_object_new(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7(L_3, /*hidden argument*/NULL);
		((JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_StaticFields*)il2cpp_codegen_static_fields_for(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var))->set_printWatch_15(L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector2 JSONTemplates::ToVector2(JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  JSONTemplates_ToVector2_m59DE5B82DD79A6F9F7B1964C703DBD15A5E72EEF (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B5_0 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	{
		// float x = obj["x"] ? obj["x"].f : 0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0 = ___obj0;
		NullCheck(L_0);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1;
		L_1 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_0, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		G_B3_0 = (0.0f);
		goto IL_0029;
	}

IL_0019:
	{
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_3 = ___obj0;
		NullCheck(L_3);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_4;
		L_4 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_3, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, /*hidden argument*/NULL);
		NullCheck(L_4);
		float L_5;
		L_5 = JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline(L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_0029:
	{
		// float y = obj["y"] ? obj["y"].f : 0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_6 = ___obj0;
		NullCheck(L_6);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_7;
		L_7 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_6, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_7, /*hidden argument*/NULL);
		G_B4_0 = G_B3_0;
		if (L_8)
		{
			G_B5_0 = G_B3_0;
			goto IL_0042;
		}
	}
	{
		G_B6_0 = (0.0f);
		G_B6_1 = G_B4_0;
		goto IL_0052;
	}

IL_0042:
	{
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_9 = ___obj0;
		NullCheck(L_9);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_10;
		L_10 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_9, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, /*hidden argument*/NULL);
		NullCheck(L_10);
		float L_11;
		L_11 = JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline(L_10, /*hidden argument*/NULL);
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
	}

IL_0052:
	{
		V_0 = G_B6_0;
		// return new Vector2(x, y);
		float L_12 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_13), G_B6_1, L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// JSONObject JSONTemplates::FromVector2(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONTemplates_FromVector2_mCBFAD5C2257317DE3DBDC0B49ED847B0A54F169F (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * V_0 = NULL;
	{
		// JSONObject vdata = JSONObject.obj;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0;
		L_0 = JSONObject_get_obj_m3D2F576AAA7F2C22058E1D9B8D06514D1CE76DAD(/*hidden argument*/NULL);
		V_0 = L_0;
		// if(v.x != 0)    vdata.AddField("x", v.x);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___v0;
		float L_2 = L_1.get_x_0();
		if ((((float)L_2) == ((float)(0.0f))))
		{
			goto IL_0024;
		}
	}
	{
		// if(v.x != 0)    vdata.AddField("x", v.x);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_3 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___v0;
		float L_5 = L_4.get_x_0();
		NullCheck(L_3);
		JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061(L_3, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_5, /*hidden argument*/NULL);
	}

IL_0024:
	{
		// if(v.y != 0)    vdata.AddField("y", v.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___v0;
		float L_7 = L_6.get_y_1();
		if ((((float)L_7) == ((float)(0.0f))))
		{
			goto IL_0042;
		}
	}
	{
		// if(v.y != 0)    vdata.AddField("y", v.y);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_8 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = ___v0;
		float L_10 = L_9.get_y_1();
		NullCheck(L_8);
		JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061(L_8, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, L_10, /*hidden argument*/NULL);
	}

IL_0042:
	{
		// return vdata;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_11 = V_0;
		return L_11;
	}
}
// JSONObject JSONTemplates::FromVector3(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONTemplates_FromVector3_mC5AC2F5EF2F9D0BAE103033104554461D161BA54 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * V_0 = NULL;
	{
		// JSONObject vdata = JSONObject.obj;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0;
		L_0 = JSONObject_get_obj_m3D2F576AAA7F2C22058E1D9B8D06514D1CE76DAD(/*hidden argument*/NULL);
		V_0 = L_0;
		// if(v.x != 0)    vdata.AddField("x", v.x);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___v0;
		float L_2 = L_1.get_x_2();
		if ((((float)L_2) == ((float)(0.0f))))
		{
			goto IL_0024;
		}
	}
	{
		// if(v.x != 0)    vdata.AddField("x", v.x);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_3 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___v0;
		float L_5 = L_4.get_x_2();
		NullCheck(L_3);
		JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061(L_3, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_5, /*hidden argument*/NULL);
	}

IL_0024:
	{
		// if(v.y != 0)    vdata.AddField("y", v.y);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___v0;
		float L_7 = L_6.get_y_3();
		if ((((float)L_7) == ((float)(0.0f))))
		{
			goto IL_0042;
		}
	}
	{
		// if(v.y != 0)    vdata.AddField("y", v.y);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_8 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___v0;
		float L_10 = L_9.get_y_3();
		NullCheck(L_8);
		JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061(L_8, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, L_10, /*hidden argument*/NULL);
	}

IL_0042:
	{
		// if(v.z != 0)    vdata.AddField("z", v.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___v0;
		float L_12 = L_11.get_z_4();
		if ((((float)L_12) == ((float)(0.0f))))
		{
			goto IL_0060;
		}
	}
	{
		// if(v.z != 0)    vdata.AddField("z", v.z);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_13 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = ___v0;
		float L_15 = L_14.get_z_4();
		NullCheck(L_13);
		JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061(L_13, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, L_15, /*hidden argument*/NULL);
	}

IL_0060:
	{
		// return vdata;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_16 = V_0;
		return L_16;
	}
}
// UnityEngine.Vector3 JSONTemplates::ToVector3(JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  JSONTemplates_ToVector3_m98B8B2CC14910424104A6F2A4EBE4AE8948BABBD (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B5_0 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	float G_B8_0 = 0.0f;
	float G_B7_0 = 0.0f;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	{
		// float x = obj["x"] ? obj["x"].f : 0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0 = ___obj0;
		NullCheck(L_0);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1;
		L_1 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_0, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		G_B3_0 = (0.0f);
		goto IL_0029;
	}

IL_0019:
	{
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_3 = ___obj0;
		NullCheck(L_3);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_4;
		L_4 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_3, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, /*hidden argument*/NULL);
		NullCheck(L_4);
		float L_5;
		L_5 = JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline(L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_0029:
	{
		// float y = obj["y"] ? obj["y"].f : 0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_6 = ___obj0;
		NullCheck(L_6);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_7;
		L_7 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_6, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_7, /*hidden argument*/NULL);
		G_B4_0 = G_B3_0;
		if (L_8)
		{
			G_B5_0 = G_B3_0;
			goto IL_0042;
		}
	}
	{
		G_B6_0 = (0.0f);
		G_B6_1 = G_B4_0;
		goto IL_0052;
	}

IL_0042:
	{
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_9 = ___obj0;
		NullCheck(L_9);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_10;
		L_10 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_9, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, /*hidden argument*/NULL);
		NullCheck(L_10);
		float L_11;
		L_11 = JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline(L_10, /*hidden argument*/NULL);
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
	}

IL_0052:
	{
		V_0 = G_B6_0;
		// float z = obj["z"] ? obj["z"].f : 0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_12 = ___obj0;
		NullCheck(L_12);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_13;
		L_13 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_12, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_13, /*hidden argument*/NULL);
		G_B7_0 = G_B6_1;
		if (L_14)
		{
			G_B8_0 = G_B6_1;
			goto IL_006c;
		}
	}
	{
		G_B9_0 = (0.0f);
		G_B9_1 = G_B7_0;
		goto IL_007c;
	}

IL_006c:
	{
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_15 = ___obj0;
		NullCheck(L_15);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_16;
		L_16 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_15, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, /*hidden argument*/NULL);
		NullCheck(L_16);
		float L_17;
		L_17 = JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline(L_16, /*hidden argument*/NULL);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_0;
	}

IL_007c:
	{
		V_1 = G_B9_0;
		// return new Vector3(x, y, z);
		float L_18 = V_0;
		float L_19 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_20), G_B9_1, L_18, L_19, /*hidden argument*/NULL);
		return L_20;
	}
}
// JSONObject JSONTemplates::FromVector4(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONTemplates_FromVector4_mACE1E11E43EF08D8345EF5447BECF49658A30842 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * V_0 = NULL;
	{
		// JSONObject vdata = JSONObject.obj;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0;
		L_0 = JSONObject_get_obj_m3D2F576AAA7F2C22058E1D9B8D06514D1CE76DAD(/*hidden argument*/NULL);
		V_0 = L_0;
		// if(v.x != 0)    vdata.AddField("x", v.x);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1 = ___v0;
		float L_2 = L_1.get_x_1();
		if ((((float)L_2) == ((float)(0.0f))))
		{
			goto IL_0024;
		}
	}
	{
		// if(v.x != 0)    vdata.AddField("x", v.x);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_3 = V_0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_4 = ___v0;
		float L_5 = L_4.get_x_1();
		NullCheck(L_3);
		JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061(L_3, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_5, /*hidden argument*/NULL);
	}

IL_0024:
	{
		// if(v.y != 0)    vdata.AddField("y", v.y);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_6 = ___v0;
		float L_7 = L_6.get_y_2();
		if ((((float)L_7) == ((float)(0.0f))))
		{
			goto IL_0042;
		}
	}
	{
		// if(v.y != 0)    vdata.AddField("y", v.y);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_8 = V_0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_9 = ___v0;
		float L_10 = L_9.get_y_2();
		NullCheck(L_8);
		JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061(L_8, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, L_10, /*hidden argument*/NULL);
	}

IL_0042:
	{
		// if(v.z != 0)    vdata.AddField("z", v.z);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_11 = ___v0;
		float L_12 = L_11.get_z_3();
		if ((((float)L_12) == ((float)(0.0f))))
		{
			goto IL_0060;
		}
	}
	{
		// if(v.z != 0)    vdata.AddField("z", v.z);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_13 = V_0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_14 = ___v0;
		float L_15 = L_14.get_z_3();
		NullCheck(L_13);
		JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061(L_13, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, L_15, /*hidden argument*/NULL);
	}

IL_0060:
	{
		// if(v.w != 0)    vdata.AddField("w", v.w);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_16 = ___v0;
		float L_17 = L_16.get_w_4();
		if ((((float)L_17) == ((float)(0.0f))))
		{
			goto IL_007e;
		}
	}
	{
		// if(v.w != 0)    vdata.AddField("w", v.w);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_18 = V_0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_19 = ___v0;
		float L_20 = L_19.get_w_4();
		NullCheck(L_18);
		JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061(L_18, _stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907, L_20, /*hidden argument*/NULL);
	}

IL_007e:
	{
		// return vdata;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_21 = V_0;
		return L_21;
	}
}
// UnityEngine.Vector4 JSONTemplates::ToVector4(JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  JSONTemplates_ToVector4_mDBE4329643985394BDA833ADE19DD130987BF7A6 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B5_0 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	float G_B8_0 = 0.0f;
	float G_B7_0 = 0.0f;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	float G_B11_0 = 0.0f;
	float G_B10_0 = 0.0f;
	float G_B12_0 = 0.0f;
	float G_B12_1 = 0.0f;
	{
		// float x = obj["x"] ? obj["x"].f : 0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0 = ___obj0;
		NullCheck(L_0);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1;
		L_1 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_0, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		G_B3_0 = (0.0f);
		goto IL_0029;
	}

IL_0019:
	{
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_3 = ___obj0;
		NullCheck(L_3);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_4;
		L_4 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_3, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, /*hidden argument*/NULL);
		NullCheck(L_4);
		float L_5;
		L_5 = JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline(L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_0029:
	{
		// float y = obj["y"] ? obj["y"].f : 0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_6 = ___obj0;
		NullCheck(L_6);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_7;
		L_7 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_6, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_7, /*hidden argument*/NULL);
		G_B4_0 = G_B3_0;
		if (L_8)
		{
			G_B5_0 = G_B3_0;
			goto IL_0042;
		}
	}
	{
		G_B6_0 = (0.0f);
		G_B6_1 = G_B4_0;
		goto IL_0052;
	}

IL_0042:
	{
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_9 = ___obj0;
		NullCheck(L_9);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_10;
		L_10 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_9, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, /*hidden argument*/NULL);
		NullCheck(L_10);
		float L_11;
		L_11 = JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline(L_10, /*hidden argument*/NULL);
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
	}

IL_0052:
	{
		V_0 = G_B6_0;
		// float z = obj["z"] ? obj["z"].f : 0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_12 = ___obj0;
		NullCheck(L_12);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_13;
		L_13 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_12, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_13, /*hidden argument*/NULL);
		G_B7_0 = G_B6_1;
		if (L_14)
		{
			G_B8_0 = G_B6_1;
			goto IL_006c;
		}
	}
	{
		G_B9_0 = (0.0f);
		G_B9_1 = G_B7_0;
		goto IL_007c;
	}

IL_006c:
	{
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_15 = ___obj0;
		NullCheck(L_15);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_16;
		L_16 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_15, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, /*hidden argument*/NULL);
		NullCheck(L_16);
		float L_17;
		L_17 = JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline(L_16, /*hidden argument*/NULL);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_0;
	}

IL_007c:
	{
		V_1 = G_B9_0;
		// float w = obj["w"] ? obj["w"].f : 0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_18 = ___obj0;
		NullCheck(L_18);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_19;
		L_19 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_18, _stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_19, /*hidden argument*/NULL);
		G_B10_0 = G_B9_1;
		if (L_20)
		{
			G_B11_0 = G_B9_1;
			goto IL_0096;
		}
	}
	{
		G_B12_0 = (0.0f);
		G_B12_1 = G_B10_0;
		goto IL_00a6;
	}

IL_0096:
	{
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_21 = ___obj0;
		NullCheck(L_21);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_22;
		L_22 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_21, _stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907, /*hidden argument*/NULL);
		NullCheck(L_22);
		float L_23;
		L_23 = JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline(L_22, /*hidden argument*/NULL);
		G_B12_0 = L_23;
		G_B12_1 = G_B11_0;
	}

IL_00a6:
	{
		V_2 = G_B12_0;
		// return new Vector4(x, y, z, w);
		float L_24 = V_0;
		float L_25 = V_1;
		float L_26 = V_2;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_27), G_B12_1, L_24, L_25, L_26, /*hidden argument*/NULL);
		return L_27;
	}
}
// JSONObject JSONTemplates::FromMatrix4x4(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONTemplates_FromMatrix4x4_mF8F4F9243DBDE87A9EEC5D0BB075DDAD9A9922F0 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0023AF2F00FCDB066CC6D76D920DA0ADE90EF647);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08F863EBBB3CD717E71656C5810CF3AA8D6D381F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D1E412C01FCBEED5A211176F17ED68673F59FC1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F0A8088BDF598E9F1F5BA0F804AD53FE59C96A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral204DBBDBB1BC14C7A1E61266CACCC3443D6AF93D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AF66D673D5606DC936304135AADFD7E6F41F5B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AFB4A15BB943C9B43BCD4B91C5D42F852B50C23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B410239A5DA9E7F2D3ECE5DD4A2D021AB58C943);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5283890AF3274AE0B569B81DE511DDAFAA6A8E2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F54CEEFF983948E06DCCCCFDA5A16768EC0E196);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB908FB7F7ED69D055FB898CBD750D2E37D443679);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD78D112848D426A98044320516AE321116F74C50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8975005FF8BAF05F5CE496C89F3918E82AEB419);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1FF38972D317F4695BFAF4B7DACF42CBE04CCC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB72A6C142E7E7CA3E0AA267ECA659778C8218FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAD7C7DBDDF9CF5538F439C2160072CE8F47C9AC);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * V_0 = NULL;
	{
		// JSONObject mdata = JSONObject.obj;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0;
		L_0 = JSONObject_get_obj_m3D2F576AAA7F2C22058E1D9B8D06514D1CE76DAD(/*hidden argument*/NULL);
		V_0 = L_0;
		// if(m.m00 != 0) mdata.AddField("m00", m.m00);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_1 = ___m0;
		float L_2 = L_1.get_m00_0();
		if ((((float)L_2) == ((float)(0.0f))))
		{
			goto IL_0024;
		}
	}
	{
		// if(m.m00 != 0) mdata.AddField("m00", m.m00);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_3 = V_0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_4 = ___m0;
		float L_5 = L_4.get_m00_0();
		NullCheck(L_3);
		JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061(L_3, _stringLiteral2AFB4A15BB943C9B43BCD4B91C5D42F852B50C23, L_5, /*hidden argument*/NULL);
	}

IL_0024:
	{
		// if(m.m01 != 0) mdata.AddField("m01", m.m01);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_6 = ___m0;
		float L_7 = L_6.get_m01_4();
		if ((((float)L_7) == ((float)(0.0f))))
		{
			goto IL_0042;
		}
	}
	{
		// if(m.m01 != 0) mdata.AddField("m01", m.m01);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_8 = V_0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_9 = ___m0;
		float L_10 = L_9.get_m01_4();
		NullCheck(L_8);
		JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061(L_8, _stringLiteral08F863EBBB3CD717E71656C5810CF3AA8D6D381F, L_10, /*hidden argument*/NULL);
	}

IL_0042:
	{
		// if(m.m02 != 0) mdata.AddField("m02", m.m02);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_11 = ___m0;
		float L_12 = L_11.get_m02_8();
		if ((((float)L_12) == ((float)(0.0f))))
		{
			goto IL_0060;
		}
	}
	{
		// if(m.m02 != 0) mdata.AddField("m02", m.m02);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_13 = V_0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_14 = ___m0;
		float L_15 = L_14.get_m02_8();
		NullCheck(L_13);
		JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061(L_13, _stringLiteralFAD7C7DBDDF9CF5538F439C2160072CE8F47C9AC, L_15, /*hidden argument*/NULL);
	}

IL_0060:
	{
		// if(m.m03 != 0) mdata.AddField("m03", m.m03);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_16 = ___m0;
		float L_17 = L_16.get_m03_12();
		if ((((float)L_17) == ((float)(0.0f))))
		{
			goto IL_007e;
		}
	}
	{
		// if(m.m03 != 0) mdata.AddField("m03", m.m03);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_18 = V_0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_19 = ___m0;
		float L_20 = L_19.get_m03_12();
		NullCheck(L_18);
		JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061(L_18, _stringLiteralEB72A6C142E7E7CA3E0AA267ECA659778C8218FE, L_20, /*hidden argument*/NULL);
	}

IL_007e:
	{
		// if(m.m10 != 0) mdata.AddField("m10", m.m10);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_21 = ___m0;
		float L_22 = L_21.get_m10_1();
		if ((((float)L_22) == ((float)(0.0f))))
		{
			goto IL_009c;
		}
	}
	{
		// if(m.m10 != 0) mdata.AddField("m10", m.m10);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_23 = V_0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_24 = ___m0;
		float L_25 = L_24.get_m10_1();
		NullCheck(L_23);
		JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061(L_23, _stringLiteral1D1E412C01FCBEED5A211176F17ED68673F59FC1, L_25, /*hidden argument*/NULL);
	}

IL_009c:
	{
		// if(m.m11 != 0) mdata.AddField("m11", m.m11);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_26 = ___m0;
		float L_27 = L_26.get_m11_5();
		if ((((float)L_27) == ((float)(0.0f))))
		{
			goto IL_00ba;
		}
	}
	{
		// if(m.m11 != 0) mdata.AddField("m11", m.m11);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_28 = V_0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_29 = ___m0;
		float L_30 = L_29.get_m11_5();
		NullCheck(L_28);
		JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061(L_28, _stringLiteral8F54CEEFF983948E06DCCCCFDA5A16768EC0E196, L_30, /*hidden argument*/NULL);
	}

IL_00ba:
	{
		// if(m.m12 != 0) mdata.AddField("m12", m.m12);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_31 = ___m0;
		float L_32 = L_31.get_m12_9();
		if ((((float)L_32) == ((float)(0.0f))))
		{
			goto IL_00d8;
		}
	}
	{
		// if(m.m12 != 0) mdata.AddField("m12", m.m12);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_33 = V_0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_34 = ___m0;
		float L_35 = L_34.get_m12_9();
		NullCheck(L_33);
		JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061(L_33, _stringLiteralE1FF38972D317F4695BFAF4B7DACF42CBE04CCC6, L_35, /*hidden argument*/NULL);
	}

IL_00d8:
	{
		// if(m.m13 != 0) mdata.AddField("m13", m.m13);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_36 = ___m0;
		float L_37 = L_36.get_m13_13();
		if ((((float)L_37) == ((float)(0.0f))))
		{
			goto IL_00f6;
		}
	}
	{
		// if(m.m13 != 0) mdata.AddField("m13", m.m13);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_38 = V_0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_39 = ___m0;
		float L_40 = L_39.get_m13_13();
		NullCheck(L_38);
		JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061(L_38, _stringLiteralD8975005FF8BAF05F5CE496C89F3918E82AEB419, L_40, /*hidden argument*/NULL);
	}

IL_00f6:
	{
		// if(m.m20 != 0) mdata.AddField("m20", m.m20);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_41 = ___m0;
		float L_42 = L_41.get_m20_2();
		if ((((float)L_42) == ((float)(0.0f))))
		{
			goto IL_0114;
		}
	}
	{
		// if(m.m20 != 0) mdata.AddField("m20", m.m20);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_43 = V_0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_44 = ___m0;
		float L_45 = L_44.get_m20_2();
		NullCheck(L_43);
		JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061(L_43, _stringLiteral5283890AF3274AE0B569B81DE511DDAFAA6A8E2B, L_45, /*hidden argument*/NULL);
	}

IL_0114:
	{
		// if(m.m21 != 0) mdata.AddField("m21", m.m21);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_46 = ___m0;
		float L_47 = L_46.get_m21_6();
		if ((((float)L_47) == ((float)(0.0f))))
		{
			goto IL_0132;
		}
	}
	{
		// if(m.m21 != 0) mdata.AddField("m21", m.m21);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_48 = V_0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_49 = ___m0;
		float L_50 = L_49.get_m21_6();
		NullCheck(L_48);
		JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061(L_48, _stringLiteral0023AF2F00FCDB066CC6D76D920DA0ADE90EF647, L_50, /*hidden argument*/NULL);
	}

IL_0132:
	{
		// if(m.m22 != 0) mdata.AddField("m22", m.m22);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_51 = ___m0;
		float L_52 = L_51.get_m22_10();
		if ((((float)L_52) == ((float)(0.0f))))
		{
			goto IL_0150;
		}
	}
	{
		// if(m.m22 != 0) mdata.AddField("m22", m.m22);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_53 = V_0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_54 = ___m0;
		float L_55 = L_54.get_m22_10();
		NullCheck(L_53);
		JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061(L_53, _stringLiteral204DBBDBB1BC14C7A1E61266CACCC3443D6AF93D, L_55, /*hidden argument*/NULL);
	}

IL_0150:
	{
		// if(m.m23 != 0) mdata.AddField("m23", m.m23);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_56 = ___m0;
		float L_57 = L_56.get_m23_14();
		if ((((float)L_57) == ((float)(0.0f))))
		{
			goto IL_016e;
		}
	}
	{
		// if(m.m23 != 0) mdata.AddField("m23", m.m23);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_58 = V_0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_59 = ___m0;
		float L_60 = L_59.get_m23_14();
		NullCheck(L_58);
		JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061(L_58, _stringLiteral3B410239A5DA9E7F2D3ECE5DD4A2D021AB58C943, L_60, /*hidden argument*/NULL);
	}

IL_016e:
	{
		// if(m.m30 != 0) mdata.AddField("m30", m.m30);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_61 = ___m0;
		float L_62 = L_61.get_m30_3();
		if ((((float)L_62) == ((float)(0.0f))))
		{
			goto IL_018c;
		}
	}
	{
		// if(m.m30 != 0) mdata.AddField("m30", m.m30);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_63 = V_0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_64 = ___m0;
		float L_65 = L_64.get_m30_3();
		NullCheck(L_63);
		JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061(L_63, _stringLiteralB908FB7F7ED69D055FB898CBD750D2E37D443679, L_65, /*hidden argument*/NULL);
	}

IL_018c:
	{
		// if(m.m31 != 0) mdata.AddField("m31", m.m31);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_66 = ___m0;
		float L_67 = L_66.get_m31_7();
		if ((((float)L_67) == ((float)(0.0f))))
		{
			goto IL_01aa;
		}
	}
	{
		// if(m.m31 != 0) mdata.AddField("m31", m.m31);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_68 = V_0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_69 = ___m0;
		float L_70 = L_69.get_m31_7();
		NullCheck(L_68);
		JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061(L_68, _stringLiteral1F0A8088BDF598E9F1F5BA0F804AD53FE59C96A9, L_70, /*hidden argument*/NULL);
	}

IL_01aa:
	{
		// if(m.m32 != 0) mdata.AddField("m32", m.m32);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_71 = ___m0;
		float L_72 = L_71.get_m32_11();
		if ((((float)L_72) == ((float)(0.0f))))
		{
			goto IL_01c8;
		}
	}
	{
		// if(m.m32 != 0) mdata.AddField("m32", m.m32);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_73 = V_0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_74 = ___m0;
		float L_75 = L_74.get_m32_11();
		NullCheck(L_73);
		JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061(L_73, _stringLiteralD78D112848D426A98044320516AE321116F74C50, L_75, /*hidden argument*/NULL);
	}

IL_01c8:
	{
		// if(m.m33 != 0) mdata.AddField("m33", m.m33);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_76 = ___m0;
		float L_77 = L_76.get_m33_15();
		if ((((float)L_77) == ((float)(0.0f))))
		{
			goto IL_01e6;
		}
	}
	{
		// if(m.m33 != 0) mdata.AddField("m33", m.m33);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_78 = V_0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_79 = ___m0;
		float L_80 = L_79.get_m33_15();
		NullCheck(L_78);
		JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061(L_78, _stringLiteral2AF66D673D5606DC936304135AADFD7E6F41F5B9, L_80, /*hidden argument*/NULL);
	}

IL_01e6:
	{
		// return mdata;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_81 = V_0;
		return L_81;
	}
}
// UnityEngine.Matrix4x4 JSONTemplates::ToMatrix4x4(JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  JSONTemplates_ToMatrix4x4_mD77C6408BB82B63E92FEBDFC574998302F2A499E (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0023AF2F00FCDB066CC6D76D920DA0ADE90EF647);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08F863EBBB3CD717E71656C5810CF3AA8D6D381F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D1E412C01FCBEED5A211176F17ED68673F59FC1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F0A8088BDF598E9F1F5BA0F804AD53FE59C96A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral204DBBDBB1BC14C7A1E61266CACCC3443D6AF93D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AF66D673D5606DC936304135AADFD7E6F41F5B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AFB4A15BB943C9B43BCD4B91C5D42F852B50C23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B410239A5DA9E7F2D3ECE5DD4A2D021AB58C943);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5283890AF3274AE0B569B81DE511DDAFAA6A8E2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F54CEEFF983948E06DCCCCFDA5A16768EC0E196);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB908FB7F7ED69D055FB898CBD750D2E37D443679);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD78D112848D426A98044320516AE321116F74C50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8975005FF8BAF05F5CE496C89F3918E82AEB419);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1FF38972D317F4695BFAF4B7DACF42CBE04CCC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB72A6C142E7E7CA3E0AA267ECA659778C8218FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAD7C7DBDDF9CF5538F439C2160072CE8F47C9AC);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Matrix4x4 result = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 ));
		// if(obj["m00"]) result.m00 = obj["m00"].f;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0 = ___obj0;
		NullCheck(L_0);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1;
		L_1 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_0, _stringLiteral2AFB4A15BB943C9B43BCD4B91C5D42F852B50C23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// if(obj["m00"]) result.m00 = obj["m00"].f;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_3 = ___obj0;
		NullCheck(L_3);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_4;
		L_4 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_3, _stringLiteral2AFB4A15BB943C9B43BCD4B91C5D42F852B50C23, /*hidden argument*/NULL);
		NullCheck(L_4);
		float L_5;
		L_5 = JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline(L_4, /*hidden argument*/NULL);
		(&V_0)->set_m00_0(L_5);
	}

IL_0031:
	{
		// if(obj["m01"]) result.m01 = obj["m01"].f;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_6 = ___obj0;
		NullCheck(L_6);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_7;
		L_7 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_6, _stringLiteral08F863EBBB3CD717E71656C5810CF3AA8D6D381F, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_005a;
		}
	}
	{
		// if(obj["m01"]) result.m01 = obj["m01"].f;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_9 = ___obj0;
		NullCheck(L_9);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_10;
		L_10 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_9, _stringLiteral08F863EBBB3CD717E71656C5810CF3AA8D6D381F, /*hidden argument*/NULL);
		NullCheck(L_10);
		float L_11;
		L_11 = JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline(L_10, /*hidden argument*/NULL);
		(&V_0)->set_m01_4(L_11);
	}

IL_005a:
	{
		// if(obj["m02"]) result.m02 = obj["m02"].f;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_12 = ___obj0;
		NullCheck(L_12);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_13;
		L_13 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_12, _stringLiteralFAD7C7DBDDF9CF5538F439C2160072CE8F47C9AC, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0083;
		}
	}
	{
		// if(obj["m02"]) result.m02 = obj["m02"].f;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_15 = ___obj0;
		NullCheck(L_15);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_16;
		L_16 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_15, _stringLiteralFAD7C7DBDDF9CF5538F439C2160072CE8F47C9AC, /*hidden argument*/NULL);
		NullCheck(L_16);
		float L_17;
		L_17 = JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline(L_16, /*hidden argument*/NULL);
		(&V_0)->set_m02_8(L_17);
	}

IL_0083:
	{
		// if(obj["m03"]) result.m03 = obj["m03"].f;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_18 = ___obj0;
		NullCheck(L_18);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_19;
		L_19 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_18, _stringLiteralEB72A6C142E7E7CA3E0AA267ECA659778C8218FE, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00ac;
		}
	}
	{
		// if(obj["m03"]) result.m03 = obj["m03"].f;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_21 = ___obj0;
		NullCheck(L_21);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_22;
		L_22 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_21, _stringLiteralEB72A6C142E7E7CA3E0AA267ECA659778C8218FE, /*hidden argument*/NULL);
		NullCheck(L_22);
		float L_23;
		L_23 = JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline(L_22, /*hidden argument*/NULL);
		(&V_0)->set_m03_12(L_23);
	}

IL_00ac:
	{
		// if(obj["m10"]) result.m10 = obj["m10"].f;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_24 = ___obj0;
		NullCheck(L_24);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_25;
		L_25 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_24, _stringLiteral1D1E412C01FCBEED5A211176F17ED68673F59FC1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00d5;
		}
	}
	{
		// if(obj["m10"]) result.m10 = obj["m10"].f;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_27 = ___obj0;
		NullCheck(L_27);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_28;
		L_28 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_27, _stringLiteral1D1E412C01FCBEED5A211176F17ED68673F59FC1, /*hidden argument*/NULL);
		NullCheck(L_28);
		float L_29;
		L_29 = JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline(L_28, /*hidden argument*/NULL);
		(&V_0)->set_m10_1(L_29);
	}

IL_00d5:
	{
		// if(obj["m11"]) result.m11 = obj["m11"].f;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_30 = ___obj0;
		NullCheck(L_30);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_31;
		L_31 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_30, _stringLiteral8F54CEEFF983948E06DCCCCFDA5A16768EC0E196, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00fe;
		}
	}
	{
		// if(obj["m11"]) result.m11 = obj["m11"].f;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_33 = ___obj0;
		NullCheck(L_33);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_34;
		L_34 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_33, _stringLiteral8F54CEEFF983948E06DCCCCFDA5A16768EC0E196, /*hidden argument*/NULL);
		NullCheck(L_34);
		float L_35;
		L_35 = JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline(L_34, /*hidden argument*/NULL);
		(&V_0)->set_m11_5(L_35);
	}

IL_00fe:
	{
		// if(obj["m12"]) result.m12 = obj["m12"].f;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_36 = ___obj0;
		NullCheck(L_36);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_37;
		L_37 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_36, _stringLiteralE1FF38972D317F4695BFAF4B7DACF42CBE04CCC6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_37, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0127;
		}
	}
	{
		// if(obj["m12"]) result.m12 = obj["m12"].f;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_39 = ___obj0;
		NullCheck(L_39);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_40;
		L_40 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_39, _stringLiteralE1FF38972D317F4695BFAF4B7DACF42CBE04CCC6, /*hidden argument*/NULL);
		NullCheck(L_40);
		float L_41;
		L_41 = JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline(L_40, /*hidden argument*/NULL);
		(&V_0)->set_m12_9(L_41);
	}

IL_0127:
	{
		// if(obj["m13"]) result.m13 = obj["m13"].f;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_42 = ___obj0;
		NullCheck(L_42);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_43;
		L_43 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_42, _stringLiteralD8975005FF8BAF05F5CE496C89F3918E82AEB419, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_43, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_0150;
		}
	}
	{
		// if(obj["m13"]) result.m13 = obj["m13"].f;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_45 = ___obj0;
		NullCheck(L_45);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_46;
		L_46 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_45, _stringLiteralD8975005FF8BAF05F5CE496C89F3918E82AEB419, /*hidden argument*/NULL);
		NullCheck(L_46);
		float L_47;
		L_47 = JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline(L_46, /*hidden argument*/NULL);
		(&V_0)->set_m13_13(L_47);
	}

IL_0150:
	{
		// if(obj["m20"]) result.m20 = obj["m20"].f;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_48 = ___obj0;
		NullCheck(L_48);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_49;
		L_49 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_48, _stringLiteral5283890AF3274AE0B569B81DE511DDAFAA6A8E2B, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		bool L_50;
		L_50 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_0179;
		}
	}
	{
		// if(obj["m20"]) result.m20 = obj["m20"].f;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_51 = ___obj0;
		NullCheck(L_51);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_52;
		L_52 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_51, _stringLiteral5283890AF3274AE0B569B81DE511DDAFAA6A8E2B, /*hidden argument*/NULL);
		NullCheck(L_52);
		float L_53;
		L_53 = JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline(L_52, /*hidden argument*/NULL);
		(&V_0)->set_m20_2(L_53);
	}

IL_0179:
	{
		// if(obj["m21"]) result.m21 = obj["m21"].f;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_54 = ___obj0;
		NullCheck(L_54);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_55;
		L_55 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_54, _stringLiteral0023AF2F00FCDB066CC6D76D920DA0ADE90EF647, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		bool L_56;
		L_56 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_55, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_01a2;
		}
	}
	{
		// if(obj["m21"]) result.m21 = obj["m21"].f;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_57 = ___obj0;
		NullCheck(L_57);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_58;
		L_58 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_57, _stringLiteral0023AF2F00FCDB066CC6D76D920DA0ADE90EF647, /*hidden argument*/NULL);
		NullCheck(L_58);
		float L_59;
		L_59 = JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline(L_58, /*hidden argument*/NULL);
		(&V_0)->set_m21_6(L_59);
	}

IL_01a2:
	{
		// if(obj["m22"]) result.m22 = obj["m22"].f;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_60 = ___obj0;
		NullCheck(L_60);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_61;
		L_61 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_60, _stringLiteral204DBBDBB1BC14C7A1E61266CACCC3443D6AF93D, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		bool L_62;
		L_62 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_61, /*hidden argument*/NULL);
		if (!L_62)
		{
			goto IL_01cb;
		}
	}
	{
		// if(obj["m22"]) result.m22 = obj["m22"].f;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_63 = ___obj0;
		NullCheck(L_63);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_64;
		L_64 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_63, _stringLiteral204DBBDBB1BC14C7A1E61266CACCC3443D6AF93D, /*hidden argument*/NULL);
		NullCheck(L_64);
		float L_65;
		L_65 = JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline(L_64, /*hidden argument*/NULL);
		(&V_0)->set_m22_10(L_65);
	}

IL_01cb:
	{
		// if(obj["m23"]) result.m23 = obj["m23"].f;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_66 = ___obj0;
		NullCheck(L_66);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_67;
		L_67 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_66, _stringLiteral3B410239A5DA9E7F2D3ECE5DD4A2D021AB58C943, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		bool L_68;
		L_68 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_67, /*hidden argument*/NULL);
		if (!L_68)
		{
			goto IL_01f4;
		}
	}
	{
		// if(obj["m23"]) result.m23 = obj["m23"].f;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_69 = ___obj0;
		NullCheck(L_69);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_70;
		L_70 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_69, _stringLiteral3B410239A5DA9E7F2D3ECE5DD4A2D021AB58C943, /*hidden argument*/NULL);
		NullCheck(L_70);
		float L_71;
		L_71 = JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline(L_70, /*hidden argument*/NULL);
		(&V_0)->set_m23_14(L_71);
	}

IL_01f4:
	{
		// if(obj["m30"]) result.m30 = obj["m30"].f;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_72 = ___obj0;
		NullCheck(L_72);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_73;
		L_73 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_72, _stringLiteralB908FB7F7ED69D055FB898CBD750D2E37D443679, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		bool L_74;
		L_74 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_73, /*hidden argument*/NULL);
		if (!L_74)
		{
			goto IL_021d;
		}
	}
	{
		// if(obj["m30"]) result.m30 = obj["m30"].f;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_75 = ___obj0;
		NullCheck(L_75);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_76;
		L_76 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_75, _stringLiteralB908FB7F7ED69D055FB898CBD750D2E37D443679, /*hidden argument*/NULL);
		NullCheck(L_76);
		float L_77;
		L_77 = JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline(L_76, /*hidden argument*/NULL);
		(&V_0)->set_m30_3(L_77);
	}

IL_021d:
	{
		// if(obj["m31"]) result.m31 = obj["m31"].f;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_78 = ___obj0;
		NullCheck(L_78);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_79;
		L_79 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_78, _stringLiteral1F0A8088BDF598E9F1F5BA0F804AD53FE59C96A9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		bool L_80;
		L_80 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_79, /*hidden argument*/NULL);
		if (!L_80)
		{
			goto IL_0246;
		}
	}
	{
		// if(obj["m31"]) result.m31 = obj["m31"].f;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_81 = ___obj0;
		NullCheck(L_81);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_82;
		L_82 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_81, _stringLiteral1F0A8088BDF598E9F1F5BA0F804AD53FE59C96A9, /*hidden argument*/NULL);
		NullCheck(L_82);
		float L_83;
		L_83 = JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline(L_82, /*hidden argument*/NULL);
		(&V_0)->set_m31_7(L_83);
	}

IL_0246:
	{
		// if(obj["m32"]) result.m32 = obj["m32"].f;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_84 = ___obj0;
		NullCheck(L_84);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_85;
		L_85 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_84, _stringLiteralD78D112848D426A98044320516AE321116F74C50, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		bool L_86;
		L_86 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_85, /*hidden argument*/NULL);
		if (!L_86)
		{
			goto IL_026f;
		}
	}
	{
		// if(obj["m32"]) result.m32 = obj["m32"].f;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_87 = ___obj0;
		NullCheck(L_87);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_88;
		L_88 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_87, _stringLiteralD78D112848D426A98044320516AE321116F74C50, /*hidden argument*/NULL);
		NullCheck(L_88);
		float L_89;
		L_89 = JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline(L_88, /*hidden argument*/NULL);
		(&V_0)->set_m32_11(L_89);
	}

IL_026f:
	{
		// if(obj["m33"]) result.m33 = obj["m33"].f;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_90 = ___obj0;
		NullCheck(L_90);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_91;
		L_91 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_90, _stringLiteral2AF66D673D5606DC936304135AADFD7E6F41F5B9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		bool L_92;
		L_92 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_91, /*hidden argument*/NULL);
		if (!L_92)
		{
			goto IL_0298;
		}
	}
	{
		// if(obj["m33"]) result.m33 = obj["m33"].f;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_93 = ___obj0;
		NullCheck(L_93);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_94;
		L_94 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_93, _stringLiteral2AF66D673D5606DC936304135AADFD7E6F41F5B9, /*hidden argument*/NULL);
		NullCheck(L_94);
		float L_95;
		L_95 = JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline(L_94, /*hidden argument*/NULL);
		(&V_0)->set_m33_15(L_95);
	}

IL_0298:
	{
		// return result;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_96 = V_0;
		return L_96;
	}
}
// JSONObject JSONTemplates::FromQuaternion(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONTemplates_FromQuaternion_m42731418B2151E58EC0ADE5CE65CADACF9A35702 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___q0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * V_0 = NULL;
	{
		// JSONObject qdata = JSONObject.obj;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0;
		L_0 = JSONObject_get_obj_m3D2F576AAA7F2C22058E1D9B8D06514D1CE76DAD(/*hidden argument*/NULL);
		V_0 = L_0;
		// if(q.w != 0)    qdata.AddField("w", q.w);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = ___q0;
		float L_2 = L_1.get_w_3();
		if ((((float)L_2) == ((float)(0.0f))))
		{
			goto IL_0024;
		}
	}
	{
		// if(q.w != 0)    qdata.AddField("w", q.w);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_3 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4 = ___q0;
		float L_5 = L_4.get_w_3();
		NullCheck(L_3);
		JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061(L_3, _stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907, L_5, /*hidden argument*/NULL);
	}

IL_0024:
	{
		// if(q.x != 0)    qdata.AddField("x", q.x);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6 = ___q0;
		float L_7 = L_6.get_x_0();
		if ((((float)L_7) == ((float)(0.0f))))
		{
			goto IL_0042;
		}
	}
	{
		// if(q.x != 0)    qdata.AddField("x", q.x);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_8 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9 = ___q0;
		float L_10 = L_9.get_x_0();
		NullCheck(L_8);
		JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061(L_8, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_10, /*hidden argument*/NULL);
	}

IL_0042:
	{
		// if(q.y != 0)    qdata.AddField("y", q.y);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11 = ___q0;
		float L_12 = L_11.get_y_1();
		if ((((float)L_12) == ((float)(0.0f))))
		{
			goto IL_0060;
		}
	}
	{
		// if(q.y != 0)    qdata.AddField("y", q.y);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_13 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14 = ___q0;
		float L_15 = L_14.get_y_1();
		NullCheck(L_13);
		JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061(L_13, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, L_15, /*hidden argument*/NULL);
	}

IL_0060:
	{
		// if(q.z != 0)    qdata.AddField("z", q.z);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16 = ___q0;
		float L_17 = L_16.get_z_2();
		if ((((float)L_17) == ((float)(0.0f))))
		{
			goto IL_007e;
		}
	}
	{
		// if(q.z != 0)    qdata.AddField("z", q.z);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_18 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19 = ___q0;
		float L_20 = L_19.get_z_2();
		NullCheck(L_18);
		JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061(L_18, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, L_20, /*hidden argument*/NULL);
	}

IL_007e:
	{
		// return qdata;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_21 = V_0;
		return L_21;
	}
}
// UnityEngine.Quaternion JSONTemplates::ToQuaternion(JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  JSONTemplates_ToQuaternion_m5AB45C698B4B267D3ABE69E846ECEA5C1BBA677D (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B5_0 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	float G_B8_0 = 0.0f;
	float G_B7_0 = 0.0f;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	float G_B11_0 = 0.0f;
	float G_B10_0 = 0.0f;
	float G_B12_0 = 0.0f;
	float G_B12_1 = 0.0f;
	{
		// float x = obj["x"] ? obj["x"].f : 0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0 = ___obj0;
		NullCheck(L_0);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1;
		L_1 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_0, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		G_B3_0 = (0.0f);
		goto IL_0029;
	}

IL_0019:
	{
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_3 = ___obj0;
		NullCheck(L_3);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_4;
		L_4 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_3, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, /*hidden argument*/NULL);
		NullCheck(L_4);
		float L_5;
		L_5 = JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline(L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_0029:
	{
		// float y = obj["y"] ? obj["y"].f : 0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_6 = ___obj0;
		NullCheck(L_6);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_7;
		L_7 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_6, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_7, /*hidden argument*/NULL);
		G_B4_0 = G_B3_0;
		if (L_8)
		{
			G_B5_0 = G_B3_0;
			goto IL_0042;
		}
	}
	{
		G_B6_0 = (0.0f);
		G_B6_1 = G_B4_0;
		goto IL_0052;
	}

IL_0042:
	{
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_9 = ___obj0;
		NullCheck(L_9);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_10;
		L_10 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_9, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, /*hidden argument*/NULL);
		NullCheck(L_10);
		float L_11;
		L_11 = JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline(L_10, /*hidden argument*/NULL);
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
	}

IL_0052:
	{
		V_0 = G_B6_0;
		// float z = obj["z"] ? obj["z"].f : 0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_12 = ___obj0;
		NullCheck(L_12);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_13;
		L_13 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_12, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_13, /*hidden argument*/NULL);
		G_B7_0 = G_B6_1;
		if (L_14)
		{
			G_B8_0 = G_B6_1;
			goto IL_006c;
		}
	}
	{
		G_B9_0 = (0.0f);
		G_B9_1 = G_B7_0;
		goto IL_007c;
	}

IL_006c:
	{
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_15 = ___obj0;
		NullCheck(L_15);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_16;
		L_16 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_15, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, /*hidden argument*/NULL);
		NullCheck(L_16);
		float L_17;
		L_17 = JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline(L_16, /*hidden argument*/NULL);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_0;
	}

IL_007c:
	{
		V_1 = G_B9_0;
		// float w = obj["w"] ? obj["w"].f : 0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_18 = ___obj0;
		NullCheck(L_18);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_19;
		L_19 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_18, _stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_19, /*hidden argument*/NULL);
		G_B10_0 = G_B9_1;
		if (L_20)
		{
			G_B11_0 = G_B9_1;
			goto IL_0096;
		}
	}
	{
		G_B12_0 = (0.0f);
		G_B12_1 = G_B10_0;
		goto IL_00a6;
	}

IL_0096:
	{
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_21 = ___obj0;
		NullCheck(L_21);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_22;
		L_22 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_21, _stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907, /*hidden argument*/NULL);
		NullCheck(L_22);
		float L_23;
		L_23 = JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline(L_22, /*hidden argument*/NULL);
		G_B12_0 = L_23;
		G_B12_1 = G_B11_0;
	}

IL_00a6:
	{
		V_2 = G_B12_0;
		// return new Quaternion(x, y, z, w);
		float L_24 = V_0;
		float L_25 = V_1;
		float L_26 = V_2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421((&L_27), G_B12_1, L_24, L_25, L_26, /*hidden argument*/NULL);
		return L_27;
	}
}
// JSONObject JSONTemplates::FromColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONTemplates_FromColor_m539C28ACC65BAD94AD163B1A3F2E3B221510BD67 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * V_0 = NULL;
	{
		// JSONObject cdata = JSONObject.obj;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0;
		L_0 = JSONObject_get_obj_m3D2F576AAA7F2C22058E1D9B8D06514D1CE76DAD(/*hidden argument*/NULL);
		V_0 = L_0;
		// if(c.r != 0)    cdata.AddField("r", c.r);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = ___c0;
		float L_2 = L_1.get_r_0();
		if ((((float)L_2) == ((float)(0.0f))))
		{
			goto IL_0024;
		}
	}
	{
		// if(c.r != 0)    cdata.AddField("r", c.r);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_3 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = ___c0;
		float L_5 = L_4.get_r_0();
		NullCheck(L_3);
		JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061(L_3, _stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423, L_5, /*hidden argument*/NULL);
	}

IL_0024:
	{
		// if(c.g != 0)    cdata.AddField("g", c.g);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6 = ___c0;
		float L_7 = L_6.get_g_1();
		if ((((float)L_7) == ((float)(0.0f))))
		{
			goto IL_0042;
		}
	}
	{
		// if(c.g != 0)    cdata.AddField("g", c.g);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_8 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9 = ___c0;
		float L_10 = L_9.get_g_1();
		NullCheck(L_8);
		JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061(L_8, _stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1, L_10, /*hidden argument*/NULL);
	}

IL_0042:
	{
		// if(c.b != 0)    cdata.AddField("b", c.b);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11 = ___c0;
		float L_12 = L_11.get_b_2();
		if ((((float)L_12) == ((float)(0.0f))))
		{
			goto IL_0060;
		}
	}
	{
		// if(c.b != 0)    cdata.AddField("b", c.b);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_13 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14 = ___c0;
		float L_15 = L_14.get_b_2();
		NullCheck(L_13);
		JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061(L_13, _stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C, L_15, /*hidden argument*/NULL);
	}

IL_0060:
	{
		// if(c.a != 0)    cdata.AddField("a", c.a);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_16 = ___c0;
		float L_17 = L_16.get_a_3();
		if ((((float)L_17) == ((float)(0.0f))))
		{
			goto IL_007e;
		}
	}
	{
		// if(c.a != 0)    cdata.AddField("a", c.a);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_18 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_19 = ___c0;
		float L_20 = L_19.get_a_3();
		NullCheck(L_18);
		JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061(L_18, _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78, L_20, /*hidden argument*/NULL);
	}

IL_007e:
	{
		// return cdata;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_21 = V_0;
		return L_21;
	}
}
// UnityEngine.Color JSONTemplates::ToColor(JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  JSONTemplates_ToColor_mAE8130F0A6420A456EDFB5FABB51A3DE21629CAF (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423);
		s_Il2CppMethodInitialized = true;
	}
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// Color c = new Color();
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 ));
		// for(int i = 0; i < obj.Count; i++) {
		V_1 = 0;
		goto IL_00ae;
	}

IL_000f:
	{
		// switch(obj.keys[i]) {
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0 = ___obj0;
		NullCheck(L_0);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = L_0->get_keys_8();
		int32_t L_2 = V_1;
		NullCheck(L_1);
		String_t* L_3;
		L_3 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_1, L_2, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		V_2 = L_3;
		String_t* L_4 = V_2;
		if (!L_4)
		{
			goto IL_00aa;
		}
	}
	{
		String_t* L_5 = V_2;
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		String_t* L_7 = V_2;
		bool L_8;
		L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_7, _stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_006d;
		}
	}
	{
		String_t* L_9 = V_2;
		bool L_10;
		L_10 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_9, _stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0082;
		}
	}
	{
		String_t* L_11 = V_2;
		bool L_12;
		L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_11, _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0097;
		}
	}
	{
		goto IL_00aa;
	}

IL_0058:
	{
		// case "r": c.r = obj[i].f; break;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_13 = ___obj0;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_15;
		L_15 = JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B(L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		float L_16;
		L_16 = JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline(L_15, /*hidden argument*/NULL);
		(&V_0)->set_r_0(L_16);
		// case "r": c.r = obj[i].f; break;
		goto IL_00aa;
	}

IL_006d:
	{
		// case "g": c.g = obj[i].f; break;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_17 = ___obj0;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_19;
		L_19 = JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B(L_17, L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		float L_20;
		L_20 = JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline(L_19, /*hidden argument*/NULL);
		(&V_0)->set_g_1(L_20);
		// case "g": c.g = obj[i].f; break;
		goto IL_00aa;
	}

IL_0082:
	{
		// case "b": c.b = obj[i].f; break;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_21 = ___obj0;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_23;
		L_23 = JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B(L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		float L_24;
		L_24 = JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline(L_23, /*hidden argument*/NULL);
		(&V_0)->set_b_2(L_24);
		// case "b": c.b = obj[i].f; break;
		goto IL_00aa;
	}

IL_0097:
	{
		// case "a": c.a = obj[i].f; break;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_25 = ___obj0;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_27;
		L_27 = JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B(L_25, L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		float L_28;
		L_28 = JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline(L_27, /*hidden argument*/NULL);
		(&V_0)->set_a_3(L_28);
	}

IL_00aa:
	{
		// for(int i = 0; i < obj.Count; i++) {
		int32_t L_29 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_00ae:
	{
		// for(int i = 0; i < obj.Count; i++) {
		int32_t L_30 = V_1;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_31 = ___obj0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = JSONObject_get_Count_m04F6896A6527D124CB068FDD945872BD698AF9BA(L_31, /*hidden argument*/NULL);
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_000f;
		}
	}
	{
		// return c;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_33 = V_0;
		return L_33;
	}
}
// JSONObject JSONTemplates::FromLayerMask(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONTemplates_FromLayerMask_mA9D2569A4CFDAF3BD1F2192F47E89B587D7CCEF5 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___l0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JSONObject result = JSONObject.obj;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0;
		L_0 = JSONObject_get_obj_m3D2F576AAA7F2C22058E1D9B8D06514D1CE76DAD(/*hidden argument*/NULL);
		// result.AddField("value", l.value);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1 = L_0;
		int32_t L_2;
		L_2 = LayerMask_get_value_m6380C7449537F99361797225E179A9448A53DDF9((LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 *)(&___l0), /*hidden argument*/NULL);
		NullCheck(L_1);
		JSONObject_AddField_m1B10F39E3871FB04D76FD982AF5BE52395D32079(L_1, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, L_2, /*hidden argument*/NULL);
		// return result;
		return L_1;
	}
}
// UnityEngine.LayerMask JSONTemplates::ToLayerMask(JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  JSONTemplates_ToLayerMask_m68B8F9516A748EF8EC91B6E21640CC846EA7AA89 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// LayerMask l = new LayerMask {value = (int)obj["value"].n};
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 ));
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0 = ___obj0;
		NullCheck(L_0);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1;
		L_1 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, /*hidden argument*/NULL);
		NullCheck(L_1);
		float L_2 = L_1->get_n_10();
		LayerMask_set_value_mE825B6131A75814FCF2EA32ECBE2A205E6531585((LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 *)(&V_0), il2cpp_codegen_cast_double_to_int<int32_t>(L_2), /*hidden argument*/NULL);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_3 = V_0;
		// return l;
		return L_3;
	}
}
// JSONObject JSONTemplates::FromRect(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONTemplates_FromRect_m9C956DF420F6BDE8EF59B4844465C52E3089E711 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___r0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * V_0 = NULL;
	{
		// JSONObject result = JSONObject.obj;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0;
		L_0 = JSONObject_get_obj_m3D2F576AAA7F2C22058E1D9B8D06514D1CE76DAD(/*hidden argument*/NULL);
		V_0 = L_0;
		// if(r.x != 0)        result.AddField("x", r.x);
		float L_1;
		L_1 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___r0), /*hidden argument*/NULL);
		if ((((float)L_1) == ((float)(0.0f))))
		{
			goto IL_0026;
		}
	}
	{
		// if(r.x != 0)        result.AddField("x", r.x);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2 = V_0;
		float L_3;
		L_3 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___r0), /*hidden argument*/NULL);
		NullCheck(L_2);
		JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061(L_2, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_3, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// if(r.y != 0)        result.AddField("y", r.y);
		float L_4;
		L_4 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___r0), /*hidden argument*/NULL);
		if ((((float)L_4) == ((float)(0.0f))))
		{
			goto IL_0046;
		}
	}
	{
		// if(r.y != 0)        result.AddField("y", r.y);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_5 = V_0;
		float L_6;
		L_6 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___r0), /*hidden argument*/NULL);
		NullCheck(L_5);
		JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061(L_5, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, L_6, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// if(r.height != 0)    result.AddField("height", r.height);
		float L_7;
		L_7 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___r0), /*hidden argument*/NULL);
		if ((((float)L_7) == ((float)(0.0f))))
		{
			goto IL_0066;
		}
	}
	{
		// if(r.height != 0)    result.AddField("height", r.height);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_8 = V_0;
		float L_9;
		L_9 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___r0), /*hidden argument*/NULL);
		NullCheck(L_8);
		JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061(L_8, _stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563, L_9, /*hidden argument*/NULL);
	}

IL_0066:
	{
		// if(r.width != 0)    result.AddField("width", r.width);
		float L_10;
		L_10 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___r0), /*hidden argument*/NULL);
		if ((((float)L_10) == ((float)(0.0f))))
		{
			goto IL_0086;
		}
	}
	{
		// if(r.width != 0)    result.AddField("width", r.width);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_11 = V_0;
		float L_12;
		L_12 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___r0), /*hidden argument*/NULL);
		NullCheck(L_11);
		JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061(L_11, _stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84, L_12, /*hidden argument*/NULL);
	}

IL_0086:
	{
		// return result;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_13 = V_0;
		return L_13;
	}
}
// UnityEngine.Rect JSONTemplates::ToRect(JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  JSONTemplates_ToRect_mA897244625695F163E9FD24F80A78484CBDF3BF0 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// Rect r = new Rect();
		il2cpp_codegen_initobj((&V_0), sizeof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 ));
		// for(int i = 0; i < obj.Count; i++) {
		V_1 = 0;
		goto IL_00ae;
	}

IL_000f:
	{
		// switch(obj.keys[i]) {
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0 = ___obj0;
		NullCheck(L_0);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = L_0->get_keys_8();
		int32_t L_2 = V_1;
		NullCheck(L_1);
		String_t* L_3;
		L_3 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_1, L_2, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		V_2 = L_3;
		String_t* L_4 = V_2;
		if (!L_4)
		{
			goto IL_00aa;
		}
	}
	{
		String_t* L_5 = V_2;
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		String_t* L_7 = V_2;
		bool L_8;
		L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_7, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_006d;
		}
	}
	{
		String_t* L_9 = V_2;
		bool L_10;
		L_10 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_9, _stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0082;
		}
	}
	{
		String_t* L_11 = V_2;
		bool L_12;
		L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_11, _stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0097;
		}
	}
	{
		goto IL_00aa;
	}

IL_0058:
	{
		// case "x": r.x = obj[i].f; break;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_13 = ___obj0;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_15;
		L_15 = JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B(L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		float L_16;
		L_16 = JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline(L_15, /*hidden argument*/NULL);
		Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), L_16, /*hidden argument*/NULL);
		// case "x": r.x = obj[i].f; break;
		goto IL_00aa;
	}

IL_006d:
	{
		// case "y": r.y = obj[i].f; break;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_17 = ___obj0;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_19;
		L_19 = JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B(L_17, L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		float L_20;
		L_20 = JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline(L_19, /*hidden argument*/NULL);
		Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), L_20, /*hidden argument*/NULL);
		// case "y": r.y = obj[i].f; break;
		goto IL_00aa;
	}

IL_0082:
	{
		// case "height": r.height = obj[i].f; break;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_21 = ___obj0;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_23;
		L_23 = JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B(L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		float L_24;
		L_24 = JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline(L_23, /*hidden argument*/NULL);
		Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), L_24, /*hidden argument*/NULL);
		// case "height": r.height = obj[i].f; break;
		goto IL_00aa;
	}

IL_0097:
	{
		// case "width": r.width = obj[i].f; break;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_25 = ___obj0;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_27;
		L_27 = JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B(L_25, L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		float L_28;
		L_28 = JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline(L_27, /*hidden argument*/NULL);
		Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), L_28, /*hidden argument*/NULL);
	}

IL_00aa:
	{
		// for(int i = 0; i < obj.Count; i++) {
		int32_t L_29 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_00ae:
	{
		// for(int i = 0; i < obj.Count; i++) {
		int32_t L_30 = V_1;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_31 = ___obj0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = JSONObject_get_Count_m04F6896A6527D124CB068FDD945872BD698AF9BA(L_31, /*hidden argument*/NULL);
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_000f;
		}
	}
	{
		// return r;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_33 = V_0;
		return L_33;
	}
}
// JSONObject JSONTemplates::FromRectOffset(UnityEngine.RectOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONTemplates_FromRectOffset_mBF66B7270D5B40C11991CA11FA4B4B687D2D0AED (RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___r0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DFA9AA29082727751167EB3C54FCAD0F9EDC665);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA11BC0AB16491B5DAEE99EAA33CF52FE6BC826E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * V_0 = NULL;
	{
		// JSONObject result = JSONObject.obj;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0;
		L_0 = JSONObject_get_obj_m3D2F576AAA7F2C22058E1D9B8D06514D1CE76DAD(/*hidden argument*/NULL);
		V_0 = L_0;
		// if(r.bottom != 0)        result.AddField("bottom", r.bottom);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_1 = ___r0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = RectOffset_get_bottom_mDDEBF1389FC1B8DCD9FC15DF91E51D264925C00D(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// if(r.bottom != 0)        result.AddField("bottom", r.bottom);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_3 = V_0;
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_4 = ___r0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = RectOffset_get_bottom_mDDEBF1389FC1B8DCD9FC15DF91E51D264925C00D(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		JSONObject_AddField_m1B10F39E3871FB04D76FD982AF5BE52395D32079(L_3, _stringLiteral0DFA9AA29082727751167EB3C54FCAD0F9EDC665, L_5, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// if(r.left != 0)            result.AddField("left", r.left);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_6 = ___r0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = RectOffset_get_left_m3B3066D09D8C9C94826258386B609CDBFFF11910(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		// if(r.left != 0)            result.AddField("left", r.left);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_8 = V_0;
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_9 = ___r0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = RectOffset_get_left_m3B3066D09D8C9C94826258386B609CDBFFF11910(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		JSONObject_AddField_m1B10F39E3871FB04D76FD982AF5BE52395D32079(L_8, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, L_10, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// if(r.right != 0)        result.AddField("right", r.right);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_11 = ___r0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = RectOffset_get_right_m889468939F3F926FE21F8E81E23C0342D45615C6(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0051;
		}
	}
	{
		// if(r.right != 0)        result.AddField("right", r.right);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_13 = V_0;
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_14 = ___r0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = RectOffset_get_right_m889468939F3F926FE21F8E81E23C0342D45615C6(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		JSONObject_AddField_m1B10F39E3871FB04D76FD982AF5BE52395D32079(L_13, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, L_15, /*hidden argument*/NULL);
	}

IL_0051:
	{
		// if(r.top != 0)            result.AddField("top", r.top);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_16 = ___r0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = RectOffset_get_top_m42000C7682185F03F23E7E0C3E8EC026FDBAB9D1(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_006a;
		}
	}
	{
		// if(r.top != 0)            result.AddField("top", r.top);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_18 = V_0;
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_19 = ___r0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = RectOffset_get_top_m42000C7682185F03F23E7E0C3E8EC026FDBAB9D1(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		JSONObject_AddField_m1B10F39E3871FB04D76FD982AF5BE52395D32079(L_18, _stringLiteralA11BC0AB16491B5DAEE99EAA33CF52FE6BC826E3, L_20, /*hidden argument*/NULL);
	}

IL_006a:
	{
		// return result;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_21 = V_0;
		return L_21;
	}
}
// UnityEngine.RectOffset JSONTemplates::ToRectOffset(JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * JSONTemplates_ToRectOffset_m0732B6A9F604FFE2200C1A73F4718BFA5AEF0BC9 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DFA9AA29082727751167EB3C54FCAD0F9EDC665);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA11BC0AB16491B5DAEE99EAA33CF52FE6BC826E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		s_Il2CppMethodInitialized = true;
	}
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// RectOffset r = new RectOffset();
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_0 = (RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 *)il2cpp_codegen_object_new(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_il2cpp_TypeInfo_var);
		RectOffset__ctor_m83529BADBE62C2D61ABEE8EB774BAB2D38DCF2AD(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// for(int i = 0; i < obj.Count; i++) {
		V_1 = 0;
		goto IL_00ac;
	}

IL_000d:
	{
		// switch(obj.keys[i]) {
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1 = ___obj0;
		NullCheck(L_1);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = L_1->get_keys_8();
		int32_t L_3 = V_1;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		V_2 = L_4;
		String_t* L_5 = V_2;
		if (!L_5)
		{
			goto IL_00a8;
		}
	}
	{
		String_t* L_6 = V_2;
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, _stringLiteral0DFA9AA29082727751167EB3C54FCAD0F9EDC665, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_8 = V_2;
		bool L_9;
		L_9 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_006b;
		}
	}
	{
		String_t* L_10 = V_2;
		bool L_11;
		L_11 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_10, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0080;
		}
	}
	{
		String_t* L_12 = V_2;
		bool L_13;
		L_13 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_12, _stringLiteralA11BC0AB16491B5DAEE99EAA33CF52FE6BC826E3, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0095;
		}
	}
	{
		goto IL_00a8;
	}

IL_0056:
	{
		// case "bottom": r.bottom = (int)obj[i].n; break;
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_14 = V_0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_15 = ___obj0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_17;
		L_17 = JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B(L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		float L_18 = L_17->get_n_10();
		NullCheck(L_14);
		RectOffset_set_bottom_m9DD7D8F63F7ED6F22A3981E064F6D4DB0527A45E(L_14, il2cpp_codegen_cast_double_to_int<int32_t>(L_18), /*hidden argument*/NULL);
		// case "bottom": r.bottom = (int)obj[i].n; break;
		goto IL_00a8;
	}

IL_006b:
	{
		// case "left": r.left = (int)obj[i].n; break;
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_19 = V_0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_20 = ___obj0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_22;
		L_22 = JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B(L_20, L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		float L_23 = L_22->get_n_10();
		NullCheck(L_19);
		RectOffset_set_left_m1D87F31ED5C73CEC8F5C42D9013FBB1527A34E36(L_19, il2cpp_codegen_cast_double_to_int<int32_t>(L_23), /*hidden argument*/NULL);
		// case "left": r.left = (int)obj[i].n; break;
		goto IL_00a8;
	}

IL_0080:
	{
		// case "right": r.right =    (int)obj[i].n; break;
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_24 = V_0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_25 = ___obj0;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_27;
		L_27 = JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B(L_25, L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		float L_28 = L_27->get_n_10();
		NullCheck(L_24);
		RectOffset_set_right_m63D81A7E7FF7060DA8E7C518105C7E2649A5AA1E(L_24, il2cpp_codegen_cast_double_to_int<int32_t>(L_28), /*hidden argument*/NULL);
		// case "right": r.right =    (int)obj[i].n; break;
		goto IL_00a8;
	}

IL_0095:
	{
		// case "top": r.top = (int)obj[i].n; break;
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_29 = V_0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_30 = ___obj0;
		int32_t L_31 = V_1;
		NullCheck(L_30);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_32;
		L_32 = JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B(L_30, L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		float L_33 = L_32->get_n_10();
		NullCheck(L_29);
		RectOffset_set_top_m647BE16B99A85B3FFEE89141EE084E9FBEBF0E86(L_29, il2cpp_codegen_cast_double_to_int<int32_t>(L_33), /*hidden argument*/NULL);
	}

IL_00a8:
	{
		// for(int i = 0; i < obj.Count; i++) {
		int32_t L_34 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00ac:
	{
		// for(int i = 0; i < obj.Count; i++) {
		int32_t L_35 = V_1;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_36 = ___obj0;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = JSONObject_get_Count_m04F6896A6527D124CB068FDD945872BD698AF9BA(L_36, /*hidden argument*/NULL);
		if ((((int32_t)L_35) < ((int32_t)L_37)))
		{
			goto IL_000d;
		}
	}
	{
		// return r;
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_38 = V_0;
		return L_38;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void JsonHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHelper__ctor_mD3FCC876B35655F0018C89924306B1023F6FBAB6 (JsonHelper_t6C3440889C2487EBAC7F6E08707670E4CE60DD97 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LoadBundle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBundle_Start_mA6E0DC263030E8CA50C2C18F46CC2E017B40C043 (LoadBundle_tCCF56ED79520467E367004790C0CE3B5E1EEE9AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_m3E3EE98663CCC30776E0944E1D251294B327691C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadBundle_GetData_mF9291C829B6717D2336106491B59D877267D1F4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3307E245CDDD41589E1B19DE33F9663FAC31171F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870);
		s_Il2CppMethodInitialized = true;
	}
	{
		// outputArea = GameObject.Find("InputField").GetComponent<InputField>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral3307E245CDDD41589E1B19DE33F9663FAC31171F, /*hidden argument*/NULL);
		NullCheck(L_0);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_1;
		L_1 = GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_m3E3EE98663CCC30776E0944E1D251294B327691C(L_0, /*hidden argument*/GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_m3E3EE98663CCC30776E0944E1D251294B327691C_RuntimeMethod_var);
		__this->set_outputArea_4(L_1);
		// GameObject.Find("Button").GetComponent<Button>().onClick.AddListener(GetData);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870, /*hidden argument*/NULL);
		NullCheck(L_2);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_3;
		L_3 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_2, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		NullCheck(L_3);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_4;
		L_4 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_3, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_5 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_5, __this, (intptr_t)((intptr_t)LoadBundle_GetData_mF9291C829B6717D2336106491B59D877267D1F4B_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoadBundle::GetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBundle_GetData_mF9291C829B6717D2336106491B59D877267D1F4B (LoadBundle_tCCF56ED79520467E367004790C0CE3B5E1EEE9AC * __this, const RuntimeMethod* method)
{
	{
		// void GetData() => StartCoroutine(GetDataCoroutine());
		RuntimeObject* L_0;
		L_0 = LoadBundle_GetDataCoroutine_m736A3341FBEFDBB3110180D19D002F9775A7E3D2(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator LoadBundle::GetDataCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoadBundle_GetDataCoroutine_m736A3341FBEFDBB3110180D19D002F9775A7E3D2 (LoadBundle_tCCF56ED79520467E367004790C0CE3B5E1EEE9AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetDataCoroutineU3Ed__3_t1DB663A49515F78190F39164B3EA3A56BB70159C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetDataCoroutineU3Ed__3_t1DB663A49515F78190F39164B3EA3A56BB70159C * L_0 = (U3CGetDataCoroutineU3Ed__3_t1DB663A49515F78190F39164B3EA3A56BB70159C *)il2cpp_codegen_object_new(U3CGetDataCoroutineU3Ed__3_t1DB663A49515F78190F39164B3EA3A56BB70159C_il2cpp_TypeInfo_var);
		U3CGetDataCoroutineU3Ed__3__ctor_m30CFDC7676B8D31C3BFE4B31CC735B5535649A6E(L_0, 0, /*hidden argument*/NULL);
		U3CGetDataCoroutineU3Ed__3_t1DB663A49515F78190F39164B3EA3A56BB70159C * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void LoadBundle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBundle__ctor_mAAD285361E7E9ECB16F8C024707ECE8B637D5265 (LoadBundle_tCCF56ED79520467E367004790C0CE3B5E1EEE9AC * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Loading::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loading_Start_m1316F0CDD41DDDAD4416B98FCFF89ED3228ABE42 (Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(TestJson(Url));
		String_t* L_0 = __this->get_Url_4();
		RuntimeObject* L_1;
		L_1 = Loading_TestJson_mA53194C83BBE70C3364E9331C914B507EB5DAE89(__this, L_0, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Loading::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loading_Update_m3387E377C5F2EB1A36FF2B0DD0ABE39E29368E93 (Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Loading::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loading_Refresh_m32119ADE5E2B6EFB9C3FA8989EC79771988C99A1 (Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if(Greed1.transform.childCount != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_Greed1_7();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_1, /*hidden argument*/NULL);
		// foreach (Transform child in Greed1.transform)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_Greed1_7();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0039;
		}

IL_0024:
		{
			// foreach (Transform child in Greed1.transform)
			RuntimeObject* L_6 = V_0;
			NullCheck(L_6);
			RuntimeObject * L_7;
			L_7 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_6);
			// GameObject.Destroy(child.gameObject);
			NullCheck(((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_7, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var)));
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
			L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_7, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_8, /*hidden argument*/NULL);
		}

IL_0039:
		{
			// foreach (Transform child in Greed1.transform)
			RuntimeObject* L_9 = V_0;
			NullCheck(L_9);
			bool L_10;
			L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_9);
			if (L_10)
			{
				goto IL_0024;
			}
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x54, FINALLY_0043);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0043;
	}

FINALLY_0043:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_11 = V_0;
			V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_11, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_12 = V_1;
			if (!L_12)
			{
				goto IL_0053;
			}
		}

IL_004d:
		{
			RuntimeObject* L_13 = V_1;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_13);
		}

IL_0053:
		{
			IL2CPP_END_FINALLY(67)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x54, IL_0054)
	}

IL_0054:
	{
		// StartCoroutine(TestJson(Url));
		String_t* L_14 = __this->get_Url_4();
		RuntimeObject* L_15;
		L_15 = Loading_TestJson_mA53194C83BBE70C3364E9331C914B507EB5DAE89(__this, L_14, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_16;
		L_16 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Loading::TestJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Loading_TestJson_mA53194C83BBE70C3364E9331C914B507EB5DAE89 (Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 * __this, String_t* ___Url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTestJsonU3Ed__14_t0E0F080D1E6BE65AE94DA84D527DC6AE18884C84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTestJsonU3Ed__14_t0E0F080D1E6BE65AE94DA84D527DC6AE18884C84 * L_0 = (U3CTestJsonU3Ed__14_t0E0F080D1E6BE65AE94DA84D527DC6AE18884C84 *)il2cpp_codegen_object_new(U3CTestJsonU3Ed__14_t0E0F080D1E6BE65AE94DA84D527DC6AE18884C84_il2cpp_TypeInfo_var);
		U3CTestJsonU3Ed__14__ctor_m46D12F456AE8D592319D54F72748BD67FC7955A7(L_0, 0, /*hidden argument*/NULL);
		U3CTestJsonU3Ed__14_t0E0F080D1E6BE65AE94DA84D527DC6AE18884C84 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CTestJsonU3Ed__14_t0E0F080D1E6BE65AE94DA84D527DC6AE18884C84 * L_2 = L_1;
		String_t* L_3 = ___Url0;
		NullCheck(L_2);
		L_2->set_Url_2(L_3);
		return L_2;
	}
}
// System.Void Loading::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loading__ctor_mE163CCF6BD5A7EDA90F61A352261F32C2DE99FFB (Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F3CB6FE5728826A05CCF58048480DF05ADEF3F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string Url = "https://cat-fact.herokuapp.com/facts/random?animal_type=cat,dog,horse&amount=10";
		__this->set_Url_4(_stringLiteral1F3CB6FE5728826A05CCF58048480DF05ADEF3F1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Loading::<TestJson>g__TaskOnClick|14_1(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loading_U3CTestJsonU3Eg__TaskOnClickU7C14_1_m5EB3DB80C537E2E21B664D7D0F0CB556351F0B89 (Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 * __this, String_t* ___tip0, String_t* ___text1, int32_t ___t2, const RuntimeMethod* method)
{
	{
		// Detiles.text = text;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_Detiles_11();
		String_t* L_1 = ___text1;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// pic.texture = tex[t];
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_2 = __this->get_pic_12();
		Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* L_3 = __this->get_tex_10();
		int32_t L_4 = ___t2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_2);
		RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99(L_2, L_6, /*hidden argument*/NULL);
		// Base1.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_Base1_8();
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
		// panel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_panel_13();
		NullCheck(L_8);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ResposWeather::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResposWeather__ctor_m34A6489CBD1DB99538C06C6B09DF4EC5E9FBA716 (ResposWeather_t5747578C4FEE44A4A5185FD803B35062CFFFD08E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SpherMuves::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpherMuves_Start_m3B31B3BC37712EAE1178439D32FA214BC4F75623 (SpherMuves_t5654ADC5514C34DC1B962C4C4BD628DB1E7A0035 * __this, const RuntimeMethod* method)
{
	{
		// speed=0+Random.Range(0,10);
		int32_t L_0;
		L_0 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)10), /*hidden argument*/NULL);
		__this->set_speed_5(((float)((float)L_0)));
		// }
		return;
	}
}
// System.Void SpherMuves::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpherMuves_Update_m536A1C673BD73620FA41603B9C1C688EAA7E6C94 (SpherMuves_t5654ADC5514C34DC1B962C4C4BD628DB1E7A0035 * __this, const RuntimeMethod* method)
{
	{
		// if(transform.position.z >1 )
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_z_4();
		if ((!(((float)L_2) > ((float)(1.0f)))))
		{
			goto IL_0020;
		}
	}
	{
		// muveingRight=false;
		__this->set_muveingRight_6((bool)0);
		// }
		goto IL_003e;
	}

IL_0020:
	{
		// else if(transform.position.z < 0)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_z_4();
		if ((!(((float)L_5) < ((float)(0.0f)))))
		{
			goto IL_003e;
		}
	}
	{
		// muveingRight=true;
		__this->set_muveingRight_6((bool)1);
	}

IL_003e:
	{
		// if(muveingRight)
		bool L_6 = __this->get_muveingRight_6();
		if (!L_6)
		{
			goto IL_0094;
		}
	}
	{
		// transform.position = new Vector3(transform.position.x,transform.position.y,transform.position.z+speed*Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_z_4();
		float L_17 = __this->get_speed_5();
		float L_18;
		L_18 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_19), L_10, L_13, ((float)il2cpp_codegen_add((float)L_16, (float)((float)il2cpp_codegen_multiply((float)L_17, (float)L_18)))), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_7, L_19, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0094:
	{
		// transform.position = new Vector3(transform.position.x,transform.position.y,transform.position.z-speed*Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		float L_23 = L_22.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_27, /*hidden argument*/NULL);
		float L_29 = L_28.get_z_4();
		float L_30 = __this->get_speed_5();
		float L_31;
		L_31 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_32), L_23, L_26, ((float)il2cpp_codegen_subtract((float)L_29, (float)((float)il2cpp_codegen_multiply((float)L_30, (float)L_31)))), /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_20, L_32, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SpherMuves::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpherMuves__ctor_mC364DE81E66ACF7DE8DDF9FA06BB05D9551B8034 (SpherMuves_t5654ADC5514C34DC1B962C4C4BD628DB1E7A0035 * __this, const RuntimeMethod* method)
{
	{
		// bool muveingRight=true;
		__this->set_muveingRight_6((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Test::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Test__ctor_m1C2B5E11A339FD79C0C458FB86723E5F2B74545C (Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.IEnumerator WeatherRequest::TestJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeatherRequest_TestJson_m2CB7F2A49D7D5F9B6A9C9DF00E7AEDF06F329D65 (WeatherRequest_t239B2216025DFDE4ECF3A8FC584B8AB2A68F9814 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTestJsonU3Ed__2_t35860833CDAEE846BC940352E6837E64BFAA9284_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTestJsonU3Ed__2_t35860833CDAEE846BC940352E6837E64BFAA9284 * L_0 = (U3CTestJsonU3Ed__2_t35860833CDAEE846BC940352E6837E64BFAA9284 *)il2cpp_codegen_object_new(U3CTestJsonU3Ed__2_t35860833CDAEE846BC940352E6837E64BFAA9284_il2cpp_TypeInfo_var);
		U3CTestJsonU3Ed__2__ctor_mC433A3D2F07074FCDE49FDE8DFE7C09802BABCF3(L_0, 0, /*hidden argument*/NULL);
		U3CTestJsonU3Ed__2_t35860833CDAEE846BC940352E6837E64BFAA9284 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void WeatherRequest::GetWeather()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeatherRequest_GetWeather_m00221B632C94AB703BC527C047752D5C0AF7E689 (WeatherRequest_t239B2216025DFDE4ECF3A8FC584B8AB2A68F9814 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(TestJson());
		RuntimeObject* L_0;
		L_0 = WeatherRequest_TestJson_m2CB7F2A49D7D5F9B6A9C9DF00E7AEDF06F329D65(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WeatherRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeatherRequest__ctor_m787629FB2F640D4AACDA015A72CBD9C8745315A5 (WeatherRequest_t239B2216025DFDE4ECF3A8FC584B8AB2A68F9814 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38D8A462D47C64F68E51BD85F680B75C2FD01C8D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string url = "http://ip-api.com/json";
		__this->set_url_4(_stringLiteral38D8A462D47C64F68E51BD85F680B75C2FD01C8D);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebRec::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRec_Start_mDAC3E7D72B9B989C82B030E990893EE9B0C427B4 (WebRec_t29F0736489F17B673ED3C779F877C39FFA79DBE6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_m3E3EE98663CCC30776E0944E1D251294B327691C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRec_GetData_mE7DCB5321DA6A378EBDC0A48C0718D9B113803F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3307E245CDDD41589E1B19DE33F9663FAC31171F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A719B16F03E18E6ED7CE19A6F58C0FEF4C3D978);
		s_Il2CppMethodInitialized = true;
	}
	{
		// outputArea = GameObject.Find("InputField").GetComponent<InputField>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral3307E245CDDD41589E1B19DE33F9663FAC31171F, /*hidden argument*/NULL);
		NullCheck(L_0);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_1;
		L_1 = GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_m3E3EE98663CCC30776E0944E1D251294B327691C(L_0, /*hidden argument*/GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_m3E3EE98663CCC30776E0944E1D251294B327691C_RuntimeMethod_var);
		__this->set_outputArea_4(L_1);
		// GameObject.Find("Load").GetComponent<Button>().onClick.AddListener(GetData);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral6A719B16F03E18E6ED7CE19A6F58C0FEF4C3D978, /*hidden argument*/NULL);
		NullCheck(L_2);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_3;
		L_3 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_2, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		NullCheck(L_3);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_4;
		L_4 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_3, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_5 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_5, __this, (intptr_t)((intptr_t)WebRec_GetData_mE7DCB5321DA6A378EBDC0A48C0718D9B113803F4_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebRec::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRec_Update_m9DAD91B2EFC928A6C68CD92897719433EFA40CBE (WebRec_t29F0736489F17B673ED3C779F877C39FFA79DBE6 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void WebRec::GetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRec_GetData_mE7DCB5321DA6A378EBDC0A48C0718D9B113803F4 (WebRec_t29F0736489F17B673ED3C779F877C39FFA79DBE6 * __this, const RuntimeMethod* method)
{
	{
		// void GetData() => StartCoroutine(GetDataCoroutine());
		RuntimeObject* L_0;
		L_0 = WebRec_GetDataCoroutine_m38A53A2E6B77A358D89989954D4A17478DCCB379(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator WebRec::GetDataCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebRec_GetDataCoroutine_m38A53A2E6B77A358D89989954D4A17478DCCB379 (WebRec_t29F0736489F17B673ED3C779F877C39FFA79DBE6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetDataCoroutineU3Ed__7_t89F45FF117149FD57F06486198C50A74E853E0EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetDataCoroutineU3Ed__7_t89F45FF117149FD57F06486198C50A74E853E0EF * L_0 = (U3CGetDataCoroutineU3Ed__7_t89F45FF117149FD57F06486198C50A74E853E0EF *)il2cpp_codegen_object_new(U3CGetDataCoroutineU3Ed__7_t89F45FF117149FD57F06486198C50A74E853E0EF_il2cpp_TypeInfo_var);
		U3CGetDataCoroutineU3Ed__7__ctor_m886E6D93AFE4FC2FF3AFD69B536D32139E813550(L_0, 0, /*hidden argument*/NULL);
		U3CGetDataCoroutineU3Ed__7_t89F45FF117149FD57F06486198C50A74E853E0EF * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator WebRec::ShowDownloadProgress(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebRec_ShowDownloadProgress_m8C30CF9C09A4FD13C40654992A3DB014363E1A18 (WebRec_t29F0736489F17B673ED3C779F877C39FFA79DBE6 * __this, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___rec0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShowDownloadProgressU3Ed__8_t441A453F57AACFFD32E89B9B6CAC8D6FE4E915EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShowDownloadProgressU3Ed__8_t441A453F57AACFFD32E89B9B6CAC8D6FE4E915EB * L_0 = (U3CShowDownloadProgressU3Ed__8_t441A453F57AACFFD32E89B9B6CAC8D6FE4E915EB *)il2cpp_codegen_object_new(U3CShowDownloadProgressU3Ed__8_t441A453F57AACFFD32E89B9B6CAC8D6FE4E915EB_il2cpp_TypeInfo_var);
		U3CShowDownloadProgressU3Ed__8__ctor_m4354E5F15C156BF6FFC02841D329FDA1E823D3FA(L_0, 0, /*hidden argument*/NULL);
		U3CShowDownloadProgressU3Ed__8_t441A453F57AACFFD32E89B9B6CAC8D6FE4E915EB * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CShowDownloadProgressU3Ed__8_t441A453F57AACFFD32E89B9B6CAC8D6FE4E915EB * L_2 = L_1;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_3 = ___rec0;
		NullCheck(L_2);
		L_2->set_rec_3(L_3);
		return L_2;
	}
}
// System.Void WebRec::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRec__ctor_m65F2AD1C739F7E420ED2E41090BC0145B486BE2C (WebRec_t29F0736489F17B673ED3C779F877C39FFA79DBE6 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Categorys/Root::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Root__ctor_m84429ABA6626556E116522F8241BD551035BBB55 (Root_tC9A64770600B9FA62079AE4160AB035C6597B841 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Categorys/Status::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Status__ctor_m7CA6CFD90659F234665D49D71C71CB16A2419FFA (Status_t40E98624315AB90AFA291CBCB4FDCB5449DB1AA1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void JSONObject/<BakeAsync>d__107::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBakeAsyncU3Ed__107__ctor_m295B00065E6C1BF9A6A24DF11DB0506055DEA222 (U3CBakeAsyncU3Ed__107_t8E955808B36BA1E7480E5519CC31A36000C8ECC8 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void JSONObject/<BakeAsync>d__107::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBakeAsyncU3Ed__107_System_IDisposable_Dispose_mB99F15612806D71A45B92713B6BC4D4102550B8E (U3CBakeAsyncU3Ed__107_t8E955808B36BA1E7480E5519CC31A36000C8ECC8 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CBakeAsyncU3Ed__107_U3CU3Em__Finally1_m5D00B52B5C1E5A8A8396AFA309F546CFAB4DD4A2(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean JSONObject/<BakeAsync>d__107::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBakeAsyncU3Ed__107_MoveNext_m54FCA10F56F7C6C8C873885164AAF463EF2C54F5 (U3CBakeAsyncU3Ed__107_t8E955808B36BA1E7480E5519CC31A36000C8ECC8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * V_2 = NULL;
	String_t* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1 = __this->get_U3CU3E4__this_3();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_001c;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0069;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_00a6;
		}

IL_001c:
		{
			__this->set_U3CU3E1__state_0((-1));
			// if(type != Type.BAKED) {
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_4 = V_2;
			NullCheck(L_4);
			int32_t L_5 = L_4->get_type_6();
			if ((((int32_t)L_5) == ((int32_t)6)))
			{
				goto IL_009b;
			}
		}

IL_002c:
		{
			// foreach(string s in PrintAsync()) {
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_6 = V_2;
			NullCheck(L_6);
			RuntimeObject* L_7;
			L_7 = JSONObject_PrintAsync_m109E1BB961985C7BA46DBD74D2569BDB3DB0412A(L_6, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_7);
			RuntimeObject* L_8;
			L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2_il2cpp_TypeInfo_var, L_7);
			__this->set_U3CU3E7__wrap1_4(L_8);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_007a;
		}

IL_0048:
		{
			// foreach(string s in PrintAsync()) {
			RuntimeObject* L_9 = __this->get_U3CU3E7__wrap1_4();
			NullCheck(L_9);
			String_t* L_10;
			L_10 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var, L_9);
			V_3 = L_10;
			// if(s == null)
			String_t* L_11 = V_3;
			if (L_11)
			{
				goto IL_0073;
			}
		}

IL_0057:
		{
			// yield return s;
			String_t* L_12 = V_3;
			__this->set_U3CU3E2__current_1(L_12);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_00a6;
		}

IL_0069:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_007a;
		}

IL_0073:
		{
			// str = s;
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_13 = V_2;
			String_t* L_14 = V_3;
			NullCheck(L_13);
			L_13->set_str_9(L_14);
		}

IL_007a:
		{
			// foreach(string s in PrintAsync()) {
			RuntimeObject* L_15 = __this->get_U3CU3E7__wrap1_4();
			NullCheck(L_15);
			bool L_16;
			L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_15);
			if (L_16)
			{
				goto IL_0048;
			}
		}

IL_0087:
		{
			U3CBakeAsyncU3Ed__107_U3CU3Em__Finally1_m5D00B52B5C1E5A8A8396AFA309F546CFAB4DD4A2(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_4((RuntimeObject*)NULL);
			// type = Type.BAKED;
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_17 = V_2;
			NullCheck(L_17);
			L_17->set_type_6(6);
		}

IL_009b:
		{
			// }
			V_0 = (bool)0;
			goto IL_00a6;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_009f;
	}

FAULT_009f:
	{ // begin fault (depth: 1)
		U3CBakeAsyncU3Ed__107_System_IDisposable_Dispose_mB99F15612806D71A45B92713B6BC4D4102550B8E(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(159)
	} // end fault
	IL2CPP_CLEANUP(159)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00a6:
	{
		bool L_18 = V_0;
		return L_18;
	}
}
// System.Void JSONObject/<BakeAsync>d__107::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBakeAsyncU3Ed__107_U3CU3Em__Finally1_m5D00B52B5C1E5A8A8396AFA309F546CFAB4DD4A2 (U3CBakeAsyncU3Ed__107_t8E955808B36BA1E7480E5519CC31A36000C8ECC8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap1_4();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Object JSONObject/<BakeAsync>d__107::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBakeAsyncU3Ed__107_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8A0327D76BC0CA5C27733DEAEEED6FE95397042D (U3CBakeAsyncU3Ed__107_t8E955808B36BA1E7480E5519CC31A36000C8ECC8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void JSONObject/<BakeAsync>d__107::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBakeAsyncU3Ed__107_System_Collections_IEnumerator_Reset_mB663489A420331DFC88394DAE3E09A86A714647C (U3CBakeAsyncU3Ed__107_t8E955808B36BA1E7480E5519CC31A36000C8ECC8 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CBakeAsyncU3Ed__107_System_Collections_IEnumerator_Reset_mB663489A420331DFC88394DAE3E09A86A714647C_RuntimeMethod_var)));
	}
}
// System.Object JSONObject/<BakeAsync>d__107::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBakeAsyncU3Ed__107_System_Collections_IEnumerator_get_Current_mCD4266658CD061C87F9C0514A1884323CC0BD818 (U3CBakeAsyncU3Ed__107_t8E955808B36BA1E7480E5519CC31A36000C8ECC8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Object> JSONObject/<BakeAsync>d__107::System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBakeAsyncU3Ed__107_System_Collections_Generic_IEnumerableU3CSystem_ObjectU3E_GetEnumerator_mCC6C96701DBF5E159EC0CB84B81ED9349B00EDE4 (U3CBakeAsyncU3Ed__107_t8E955808B36BA1E7480E5519CC31A36000C8ECC8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CBakeAsyncU3Ed__107_t8E955808B36BA1E7480E5519CC31A36000C8ECC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CBakeAsyncU3Ed__107_t8E955808B36BA1E7480E5519CC31A36000C8ECC8 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CBakeAsyncU3Ed__107_t8E955808B36BA1E7480E5519CC31A36000C8ECC8 * L_3 = (U3CBakeAsyncU3Ed__107_t8E955808B36BA1E7480E5519CC31A36000C8ECC8 *)il2cpp_codegen_object_new(U3CBakeAsyncU3Ed__107_t8E955808B36BA1E7480E5519CC31A36000C8ECC8_il2cpp_TypeInfo_var);
		U3CBakeAsyncU3Ed__107__ctor_m295B00065E6C1BF9A6A24DF11DB0506055DEA222(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CBakeAsyncU3Ed__107_t8E955808B36BA1E7480E5519CC31A36000C8ECC8 * L_4 = V_0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3CBakeAsyncU3Ed__107_t8E955808B36BA1E7480E5519CC31A36000C8ECC8 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator JSONObject/<BakeAsync>d__107::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBakeAsyncU3Ed__107_System_Collections_IEnumerable_GetEnumerator_mDB70AD3844FB51542CCE3BA5F4CC0D79539DF5D3 (U3CBakeAsyncU3Ed__107_t8E955808B36BA1E7480E5519CC31A36000C8ECC8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CBakeAsyncU3Ed__107_System_Collections_Generic_IEnumerableU3CSystem_ObjectU3E_GetEnumerator_mCC6C96701DBF5E159EC0CB84B81ED9349B00EDE4(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void JSONObject/<PrintAsync>d__109::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrintAsyncU3Ed__109__ctor_m128B53CFBBBCE75AC44803F0DCBFF5EE2DDDAE7B (U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void JSONObject/<PrintAsync>d__109::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrintAsyncU3Ed__109_System_IDisposable_Dispose_m2F69091A70FF3F0838389123E81E666B036CCBEF (U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CPrintAsyncU3Ed__109_U3CU3Em__Finally1_m72AACDC1785FBEF01E4AA2BD2DC779AC621BF951(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean JSONObject/<PrintAsync>d__109::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPrintAsyncU3Ed__109_MoveNext_m37E5D82F2E15FE9AFB584B0C4A25E2720FCE9123 (U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1 = __this->get_U3CU3E4__this_3();
			V_2 = L_1;
			int32_t L_2 = V_1;
			switch (L_2)
			{
				case 0:
				{
					goto IL_0027;
				}
				case 1:
				{
					goto IL_0098;
				}
				case 2:
				{
					goto IL_00d6;
				}
			}
		}

IL_0020:
		{
			V_0 = (bool)0;
			goto IL_00e8;
		}

IL_0027:
		{
			__this->set_U3CU3E1__state_0((-1));
			// StringBuilder builder = new StringBuilder();
			StringBuilder_t * L_3 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
			StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_3, /*hidden argument*/NULL);
			__this->set_U3CbuilderU3E5__2_6(L_3);
			// printWatch.Reset();
			IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
			Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_4 = ((JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_StaticFields*)il2cpp_codegen_static_fields_for(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var))->get_printWatch_15();
			NullCheck(L_4);
			Stopwatch_Reset_m79B1D65568465AE5B1A68EF3A2A65218590ABD14(L_4, /*hidden argument*/NULL);
			// printWatch.Start();
			Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_5 = ((JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_StaticFields*)il2cpp_codegen_static_fields_for(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var))->get_printWatch_15();
			NullCheck(L_5);
			Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE(L_5, /*hidden argument*/NULL);
			// foreach(IEnumerable e in StringifyAsync(0, builder, pretty)) {
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_6 = V_2;
			StringBuilder_t * L_7 = __this->get_U3CbuilderU3E5__2_6();
			bool L_8 = __this->get_pretty_4();
			NullCheck(L_6);
			RuntimeObject* L_9;
			L_9 = JSONObject_StringifyAsync_m1FDB9203BA364F417A9DD46DA8D6739AA126EAEA(L_6, 0, L_7, L_8, /*hidden argument*/NULL);
			NullCheck(L_9);
			RuntimeObject* L_10;
			L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_9);
			__this->set_U3CU3E7__wrap2_7(L_10);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_00a0;
		}

IL_0075:
		{
			// foreach(IEnumerable e in StringifyAsync(0, builder, pretty)) {
			RuntimeObject* L_11 = __this->get_U3CU3E7__wrap2_7();
			NullCheck(L_11);
			RuntimeObject * L_12;
			L_12 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_11);
			// yield return null;
			__this->set_U3CU3E2__current_1((String_t*)NULL);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_00e8;
		}

IL_0098:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_00a0:
		{
			// foreach(IEnumerable e in StringifyAsync(0, builder, pretty)) {
			RuntimeObject* L_13 = __this->get_U3CU3E7__wrap2_7();
			NullCheck(L_13);
			bool L_14;
			L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_0075;
			}
		}

IL_00ad:
		{
			U3CPrintAsyncU3Ed__109_U3CU3Em__Finally1_m72AACDC1785FBEF01E4AA2BD2DC779AC621BF951(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap2_7((RuntimeObject*)NULL);
			// yield return builder.ToString();
			StringBuilder_t * L_15 = __this->get_U3CbuilderU3E5__2_6();
			NullCheck(L_15);
			String_t* L_16;
			L_16 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
			__this->set_U3CU3E2__current_1(L_16);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_00e8;
		}

IL_00d6:
		{
			__this->set_U3CU3E1__state_0((-1));
			// }
			V_0 = (bool)0;
			goto IL_00e8;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00e1;
	}

FAULT_00e1:
	{ // begin fault (depth: 1)
		U3CPrintAsyncU3Ed__109_System_IDisposable_Dispose_m2F69091A70FF3F0838389123E81E666B036CCBEF(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(225)
	} // end fault
	IL2CPP_CLEANUP(225)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00e8:
	{
		bool L_17 = V_0;
		return L_17;
	}
}
// System.Void JSONObject/<PrintAsync>d__109::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrintAsyncU3Ed__109_U3CU3Em__Finally1_m72AACDC1785FBEF01E4AA2BD2DC779AC621BF951 (U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap2_7();
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_2);
	}

IL_001c:
	{
		return;
	}
}
// System.String JSONObject/<PrintAsync>d__109::System.Collections.Generic.IEnumerator<System.String>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CPrintAsyncU3Ed__109_System_Collections_Generic_IEnumeratorU3CSystem_StringU3E_get_Current_m0131BEA1DCF15ED631D4B2F058C6E261E6991959 (U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void JSONObject/<PrintAsync>d__109::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrintAsyncU3Ed__109_System_Collections_IEnumerator_Reset_m2FA7BB628F3594C50DD1F1097D7712595666D605 (U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPrintAsyncU3Ed__109_System_Collections_IEnumerator_Reset_m2FA7BB628F3594C50DD1F1097D7712595666D605_RuntimeMethod_var)));
	}
}
// System.Object JSONObject/<PrintAsync>d__109::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPrintAsyncU3Ed__109_System_Collections_IEnumerator_get_Current_m3D3BD374CCA4CFE747DBCD9208F00FD346EECF34 (U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.String> JSONObject/<PrintAsync>d__109::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPrintAsyncU3Ed__109_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m009FC84C5E75F00409E63673DD6D99DDB7181DEC (U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7 * L_3 = (U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7 *)il2cpp_codegen_object_new(U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7_il2cpp_TypeInfo_var);
		U3CPrintAsyncU3Ed__109__ctor_m128B53CFBBBCE75AC44803F0DCBFF5EE2DDDAE7B(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7 * L_4 = V_0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7 * L_6 = V_0;
		bool L_7 = __this->get_U3CU3E3__pretty_5();
		NullCheck(L_6);
		L_6->set_pretty_4(L_7);
		U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7 * L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator JSONObject/<PrintAsync>d__109::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPrintAsyncU3Ed__109_System_Collections_IEnumerable_GetEnumerator_mCCD7508205D78F5C187D28C0096483D63A570083 (U3CPrintAsyncU3Ed__109_t29B509D076882FAE33972485E8303A84657D2BD7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CPrintAsyncU3Ed__109_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m009FC84C5E75F00409E63673DD6D99DDB7181DEC(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void JSONObject/<StringifyAsync>d__112::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStringifyAsyncU3Ed__112__ctor_m1E81AEAC2CD745EDB141D3F776D608F93B77E89E (U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void JSONObject/<StringifyAsync>d__112::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStringifyAsyncU3Ed__112_System_IDisposable_Dispose_m1B455C9D97ADD81D46CAAFB0C4583F03B0AC0422 (U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)-3))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)-4))))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0020;
		}
	}
	{
		return;
	}

IL_0017:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)3)))
		{
			goto IL_002a;
		}
	}
	{
		return;
	}

IL_0020:
	{
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x34, FINALLY_0023);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0023;
	}

FINALLY_0023:
	{ // begin finally (depth: 1)
		U3CStringifyAsyncU3Ed__112_U3CU3Em__Finally1_m539FBD93318D1FE346BBF25E84BB17C6C842E802(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(35)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(35)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x34, IL_0034)
	}

IL_002a:
	{
	}

IL_002b:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x34, FINALLY_002d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		U3CStringifyAsyncU3Ed__112_U3CU3Em__Finally2_m09772A53FCB3C6092DA0A77AAC969111CAE8DF6F(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(45)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x34, IL_0034)
	}

IL_0034:
	{
		return;
	}
}
// System.Boolean JSONObject/<StringifyAsync>d__112::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStringifyAsyncU3Ed__112_MoveNext_m18D29135D82D84D4A8AD77A03592E160680FFE30 (U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49A5AAB83859C60FC692064F7CA72853E8B6B189);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59E22C292F27E6EDE5644C7B811538F78C4ACAB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral763076C684EFEFA1B5A84D92C472EA6FF54AB95D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA57F692809412BBB13F764D9044820BC70823E64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC93B50DB5A16A30443D060A92DCF406D5233A92B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * V_2 = NULL;
	int32_t V_3 = 0;
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	String_t* V_6 = NULL;
	JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * V_7 = NULL;
	int32_t V_8 = 0;
	RuntimeObject* V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	RuntimeObject* V_12 = NULL;
	int32_t V_13 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 6> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1 = __this->get_U3CU3E4__this_5();
			V_2 = L_1;
			int32_t L_2 = V_1;
			switch (L_2)
			{
				case 0:
				{
					goto IL_002b;
				}
				case 1:
				{
					goto IL_008b;
				}
				case 2:
				{
					goto IL_02b8;
				}
				case 3:
				{
					goto IL_04b6;
				}
			}
		}

IL_0024:
		{
			V_0 = (bool)0;
			goto IL_0606;
		}

IL_002b:
		{
			__this->set_U3CU3E1__state_0((-1));
			// if(depth++ > MAX_DEPTH) {
			int32_t L_3 = __this->get_depth_3();
			V_3 = L_3;
			int32_t L_4 = V_3;
			__this->set_depth_3(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
			int32_t L_5 = V_3;
			if ((((int32_t)L_5) <= ((int32_t)((int32_t)100))))
			{
				goto IL_004e;
			}
		}

IL_0047:
		{
			// yield break;
			V_0 = (bool)0;
			goto IL_0606;
		}

IL_004e:
		{
			// if(printWatch.Elapsed.TotalSeconds > maxFrameTime) {
			IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
			Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_6 = ((JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_StaticFields*)il2cpp_codegen_static_fields_for(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var))->get_printWatch_15();
			NullCheck(L_6);
			TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_7;
			L_7 = Stopwatch_get_Elapsed_m75C9FF87F9007FC8738B722002A8F8C302F5CFA6(L_6, /*hidden argument*/NULL);
			V_4 = L_7;
			double L_8;
			L_8 = TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_4), /*hidden argument*/NULL);
			if ((!(((double)L_8) > ((double)(0.0080000003799796104)))))
			{
				goto IL_009c;
			}
		}

IL_006c:
		{
			// printWatch.Reset();
			IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
			Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_9 = ((JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_StaticFields*)il2cpp_codegen_static_fields_for(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var))->get_printWatch_15();
			NullCheck(L_9);
			Stopwatch_Reset_m79B1D65568465AE5B1A68EF3A2A65218590ABD14(L_9, /*hidden argument*/NULL);
			// yield return null;
			__this->set_U3CU3E2__current_1(NULL);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0606;
		}

IL_008b:
		{
			__this->set_U3CU3E1__state_0((-1));
			// printWatch.Start();
			IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
			Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_10 = ((JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_StaticFields*)il2cpp_codegen_static_fields_for(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var))->get_printWatch_15();
			NullCheck(L_10);
			Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE(L_10, /*hidden argument*/NULL);
		}

IL_009c:
		{
			// switch(type) {
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_11 = V_2;
			NullCheck(L_11);
			int32_t L_12 = L_11->get_type_6();
			V_5 = L_12;
			int32_t L_13 = V_5;
			switch (L_13)
			{
				case 0:
				{
					goto IL_05ea;
				}
				case 1:
				{
					goto IL_00e3;
				}
				case 2:
				{
					goto IL_00ff;
				}
				case 3:
				{
					goto IL_01a8;
				}
				case 4:
				{
					goto IL_03c1;
				}
				case 5:
				{
					goto IL_05bc;
				}
				case 6:
				{
					goto IL_00cc;
				}
			}
		}

IL_00c7:
		{
			goto IL_05fb;
		}

IL_00cc:
		{
			// builder.Append(str);
			StringBuilder_t * L_14 = __this->get_builder_6();
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_15 = V_2;
			NullCheck(L_15);
			String_t* L_16 = L_15->get_str_9();
			NullCheck(L_14);
			StringBuilder_t * L_17;
			L_17 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_14, L_16, /*hidden argument*/NULL);
			// break;
			goto IL_05fb;
		}

IL_00e3:
		{
			// builder.AppendFormat("\"{0}\"", str);
			StringBuilder_t * L_18 = __this->get_builder_6();
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_19 = V_2;
			NullCheck(L_19);
			String_t* L_20 = L_19->get_str_9();
			NullCheck(L_18);
			StringBuilder_t * L_21;
			L_21 = StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E(L_18, _stringLiteral49A5AAB83859C60FC692064F7CA72853E8B6B189, L_20, /*hidden argument*/NULL);
			// break;
			goto IL_05fb;
		}

IL_00ff:
		{
			// if(useInt) {
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_22 = V_2;
			NullCheck(L_22);
			bool L_23 = L_22->get_useInt_11();
			if (!L_23)
			{
				goto IL_0123;
			}
		}

IL_0107:
		{
			// builder.Append(i.ToString());
			StringBuilder_t * L_24 = __this->get_builder_6();
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_25 = V_2;
			NullCheck(L_25);
			int64_t* L_26 = L_25->get_address_of_i_12();
			String_t* L_27;
			L_27 = Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F((int64_t*)L_26, /*hidden argument*/NULL);
			NullCheck(L_24);
			StringBuilder_t * L_28;
			L_28 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_24, L_27, /*hidden argument*/NULL);
			// } else {
			goto IL_05fb;
		}

IL_0123:
		{
			// if(float.IsInfinity(n))
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_29 = V_2;
			NullCheck(L_29);
			float L_30 = L_29->get_n_10();
			bool L_31;
			L_31 = Single_IsInfinity_m10D3B235800230231AFC34AFEC4D320D06F794C1(L_30, /*hidden argument*/NULL);
			if (!L_31)
			{
				goto IL_0146;
			}
		}

IL_0130:
		{
			// builder.Append(INFINITY);
			StringBuilder_t * L_32 = __this->get_builder_6();
			NullCheck(L_32);
			StringBuilder_t * L_33;
			L_33 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_32, _stringLiteralA57F692809412BBB13F764D9044820BC70823E64, /*hidden argument*/NULL);
			goto IL_05fb;
		}

IL_0146:
		{
			// else if(float.IsNegativeInfinity(n))
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_34 = V_2;
			NullCheck(L_34);
			float L_35 = L_34->get_n_10();
			bool L_36;
			L_36 = Single_IsNegativeInfinity_m08D484739F9E73C171CFC2819E30A983E87C68AB(L_35, /*hidden argument*/NULL);
			if (!L_36)
			{
				goto IL_0169;
			}
		}

IL_0153:
		{
			// builder.Append(NEGINFINITY);
			StringBuilder_t * L_37 = __this->get_builder_6();
			NullCheck(L_37);
			StringBuilder_t * L_38;
			L_38 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_37, _stringLiteralC93B50DB5A16A30443D060A92DCF406D5233A92B, /*hidden argument*/NULL);
			goto IL_05fb;
		}

IL_0169:
		{
			// else if(float.IsNaN(n))
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_39 = V_2;
			NullCheck(L_39);
			float L_40 = L_39->get_n_10();
			bool L_41;
			L_41 = Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599(L_40, /*hidden argument*/NULL);
			if (!L_41)
			{
				goto IL_018c;
			}
		}

IL_0176:
		{
			// builder.Append(NaN);
			StringBuilder_t * L_42 = __this->get_builder_6();
			NullCheck(L_42);
			StringBuilder_t * L_43;
			L_43 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_42, _stringLiteral59E22C292F27E6EDE5644C7B811538F78C4ACAB0, /*hidden argument*/NULL);
			goto IL_05fb;
		}

IL_018c:
		{
			// builder.Append(n.ToString());
			StringBuilder_t * L_44 = __this->get_builder_6();
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_45 = V_2;
			NullCheck(L_45);
			float* L_46 = L_45->get_address_of_n_10();
			String_t* L_47;
			L_47 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_46, /*hidden argument*/NULL);
			NullCheck(L_44);
			StringBuilder_t * L_48;
			L_48 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_44, L_47, /*hidden argument*/NULL);
			// break;
			goto IL_05fb;
		}

IL_01a8:
		{
			// builder.Append("{");
			StringBuilder_t * L_49 = __this->get_builder_6();
			NullCheck(L_49);
			StringBuilder_t * L_50;
			L_50 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_49, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, /*hidden argument*/NULL);
			// if(list.Count > 0) {
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_51 = V_2;
			NullCheck(L_51);
			List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_52 = L_51->get_list_7();
			NullCheck(L_52);
			int32_t L_53;
			L_53 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_52, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
			if ((((int32_t)L_53) <= ((int32_t)0)))
			{
				goto IL_035c;
			}
		}

IL_01ca:
		{
			// if(pretty)
			bool L_54 = __this->get_pretty_8();
			if (!L_54)
			{
				goto IL_01e3;
			}
		}

IL_01d2:
		{
			// builder.Append(NEWLINE);
			StringBuilder_t * L_55 = __this->get_builder_6();
			NullCheck(L_55);
			StringBuilder_t * L_56;
			L_56 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_55, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, /*hidden argument*/NULL);
		}

IL_01e3:
		{
			// for(int i = 0; i < list.Count; i++) {
			__this->set_U3CiU3E5__2_10(0);
			goto IL_0314;
		}

IL_01ef:
		{
			// string key = keys[i];
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_57 = V_2;
			NullCheck(L_57);
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_58 = L_57->get_keys_8();
			int32_t L_59 = __this->get_U3CiU3E5__2_10();
			NullCheck(L_58);
			String_t* L_60;
			L_60 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_58, L_59, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
			V_6 = L_60;
			// JSONObject obj = list[i];
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_61 = V_2;
			NullCheck(L_61);
			List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_62 = L_61->get_list_7();
			int32_t L_63 = __this->get_U3CiU3E5__2_10();
			NullCheck(L_62);
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_64;
			L_64 = List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_inline(L_62, L_63, /*hidden argument*/List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
			V_7 = L_64;
			// if(obj) {
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_65 = V_7;
			IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
			bool L_66;
			L_66 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_65, /*hidden argument*/NULL);
			if (!L_66)
			{
				goto IL_0304;
			}
		}

IL_0221:
		{
			// if(pretty)
			bool L_67 = __this->get_pretty_8();
			if (!L_67)
			{
				goto IL_024f;
			}
		}

IL_0229:
		{
			// for(int j = 0; j < depth; j++)
			V_8 = 0;
			goto IL_0245;
		}

IL_022e:
		{
			// builder.Append("\t"); //for a bit more readability
			StringBuilder_t * L_68 = __this->get_builder_6();
			NullCheck(L_68);
			StringBuilder_t * L_69;
			L_69 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_68, _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3, /*hidden argument*/NULL);
			// for(int j = 0; j < depth; j++)
			int32_t L_70 = V_8;
			V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
		}

IL_0245:
		{
			// for(int j = 0; j < depth; j++)
			int32_t L_71 = V_8;
			int32_t L_72 = __this->get_depth_3();
			if ((((int32_t)L_71) < ((int32_t)L_72)))
			{
				goto IL_022e;
			}
		}

IL_024f:
		{
			// builder.AppendFormat("\"{0}\":", key);
			StringBuilder_t * L_73 = __this->get_builder_6();
			String_t* L_74 = V_6;
			NullCheck(L_73);
			StringBuilder_t * L_75;
			L_75 = StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E(L_73, _stringLiteral763076C684EFEFA1B5A84D92C472EA6FF54AB95D, L_74, /*hidden argument*/NULL);
			// foreach(IEnumerable e in obj.StringifyAsync(depth, builder, pretty))
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_76 = V_7;
			int32_t L_77 = __this->get_depth_3();
			StringBuilder_t * L_78 = __this->get_builder_6();
			bool L_79 = __this->get_pretty_8();
			NullCheck(L_76);
			RuntimeObject* L_80;
			L_80 = JSONObject_StringifyAsync_m1FDB9203BA364F417A9DD46DA8D6739AA126EAEA(L_76, L_77, L_78, L_79, /*hidden argument*/NULL);
			NullCheck(L_80);
			RuntimeObject* L_81;
			L_81 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_80);
			__this->set_U3CU3E7__wrap2_11(L_81);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_02c0;
		}

IL_0290:
		{
			// foreach(IEnumerable e in obj.StringifyAsync(depth, builder, pretty))
			RuntimeObject* L_82 = __this->get_U3CU3E7__wrap2_11();
			NullCheck(L_82);
			RuntimeObject * L_83;
			L_83 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_82);
			V_9 = ((RuntimeObject*)Castclass((RuntimeObject*)L_83, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var));
			// yield return e;
			RuntimeObject* L_84 = V_9;
			__this->set_U3CU3E2__current_1(L_84);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_0606;
		}

IL_02b8:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_02c0:
		{
			// foreach(IEnumerable e in obj.StringifyAsync(depth, builder, pretty))
			RuntimeObject* L_85 = __this->get_U3CU3E7__wrap2_11();
			NullCheck(L_85);
			bool L_86;
			L_86 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_85);
			if (L_86)
			{
				goto IL_0290;
			}
		}

IL_02cd:
		{
			U3CStringifyAsyncU3Ed__112_U3CU3Em__Finally1_m539FBD93318D1FE346BBF25E84BB17C6C842E802(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap2_11((RuntimeObject*)NULL);
			// builder.Append(",");
			StringBuilder_t * L_87 = __this->get_builder_6();
			NullCheck(L_87);
			StringBuilder_t * L_88;
			L_88 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_87, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, /*hidden argument*/NULL);
			// if(pretty)
			bool L_89 = __this->get_pretty_8();
			if (!L_89)
			{
				goto IL_0304;
			}
		}

IL_02f3:
		{
			// builder.Append(NEWLINE);
			StringBuilder_t * L_90 = __this->get_builder_6();
			NullCheck(L_90);
			StringBuilder_t * L_91;
			L_91 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_90, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, /*hidden argument*/NULL);
		}

IL_0304:
		{
			// for(int i = 0; i < list.Count; i++) {
			int32_t L_92 = __this->get_U3CiU3E5__2_10();
			V_3 = L_92;
			int32_t L_93 = V_3;
			__this->set_U3CiU3E5__2_10(((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)1)));
		}

IL_0314:
		{
			// for(int i = 0; i < list.Count; i++) {
			int32_t L_94 = __this->get_U3CiU3E5__2_10();
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_95 = V_2;
			NullCheck(L_95);
			List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_96 = L_95->get_list_7();
			NullCheck(L_96);
			int32_t L_97;
			L_97 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_96, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
			if ((((int32_t)L_94) < ((int32_t)L_97)))
			{
				goto IL_01ef;
			}
		}

IL_032a:
		{
			// if(pretty)
			bool L_98 = __this->get_pretty_8();
			if (!L_98)
			{
				goto IL_0347;
			}
		}

IL_0332:
		{
			// builder.Length -= 2;
			StringBuilder_t * L_99 = __this->get_builder_6();
			StringBuilder_t * L_100 = L_99;
			NullCheck(L_100);
			int32_t L_101;
			L_101 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_100, /*hidden argument*/NULL);
			NullCheck(L_100);
			StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A(L_100, ((int32_t)il2cpp_codegen_subtract((int32_t)L_101, (int32_t)2)), /*hidden argument*/NULL);
			goto IL_035c;
		}

IL_0347:
		{
			// builder.Length--;
			StringBuilder_t * L_102 = __this->get_builder_6();
			StringBuilder_t * L_103 = L_102;
			NullCheck(L_103);
			int32_t L_104;
			L_104 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_103, /*hidden argument*/NULL);
			V_3 = L_104;
			int32_t L_105 = V_3;
			NullCheck(L_103);
			StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A(L_103, ((int32_t)il2cpp_codegen_subtract((int32_t)L_105, (int32_t)1)), /*hidden argument*/NULL);
		}

IL_035c:
		{
			// if(pretty && list.Count > 0) {
			bool L_106 = __this->get_pretty_8();
			if (!L_106)
			{
				goto IL_03ab;
			}
		}

IL_0364:
		{
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_107 = V_2;
			NullCheck(L_107);
			List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_108 = L_107->get_list_7();
			NullCheck(L_108);
			int32_t L_109;
			L_109 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_108, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
			if ((((int32_t)L_109) <= ((int32_t)0)))
			{
				goto IL_03ab;
			}
		}

IL_0372:
		{
			// builder.Append(NEWLINE);
			StringBuilder_t * L_110 = __this->get_builder_6();
			NullCheck(L_110);
			StringBuilder_t * L_111;
			L_111 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_110, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, /*hidden argument*/NULL);
			// for(int j = 0; j < depth - 1; j++)
			V_10 = 0;
			goto IL_039f;
		}

IL_0388:
		{
			// builder.Append("\t"); //for a bit more readability
			StringBuilder_t * L_112 = __this->get_builder_6();
			NullCheck(L_112);
			StringBuilder_t * L_113;
			L_113 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_112, _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3, /*hidden argument*/NULL);
			// for(int j = 0; j < depth - 1; j++)
			int32_t L_114 = V_10;
			V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_114, (int32_t)1));
		}

IL_039f:
		{
			// for(int j = 0; j < depth - 1; j++)
			int32_t L_115 = V_10;
			int32_t L_116 = __this->get_depth_3();
			if ((((int32_t)L_115) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_116, (int32_t)1)))))
			{
				goto IL_0388;
			}
		}

IL_03ab:
		{
			// builder.Append("}");
			StringBuilder_t * L_117 = __this->get_builder_6();
			NullCheck(L_117);
			StringBuilder_t * L_118;
			L_118 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_117, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, /*hidden argument*/NULL);
			// break;
			goto IL_05fb;
		}

IL_03c1:
		{
			// builder.Append("[");
			StringBuilder_t * L_119 = __this->get_builder_6();
			NullCheck(L_119);
			StringBuilder_t * L_120;
			L_120 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_119, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, /*hidden argument*/NULL);
			// if(list.Count > 0) {
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_121 = V_2;
			NullCheck(L_121);
			List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_122 = L_121->get_list_7();
			NullCheck(L_122);
			int32_t L_123;
			L_123 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_122, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
			if ((((int32_t)L_123) <= ((int32_t)0)))
			{
				goto IL_055a;
			}
		}

IL_03e3:
		{
			// if(pretty)
			bool L_124 = __this->get_pretty_8();
			if (!L_124)
			{
				goto IL_03fc;
			}
		}

IL_03eb:
		{
			// builder.Append(NEWLINE); //for a bit more readability
			StringBuilder_t * L_125 = __this->get_builder_6();
			NullCheck(L_125);
			StringBuilder_t * L_126;
			L_126 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_125, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, /*hidden argument*/NULL);
		}

IL_03fc:
		{
			// for(int i = 0; i < list.Count; i++) {
			__this->set_U3CiU3E5__2_10(0);
			goto IL_0512;
		}

IL_0408:
		{
			// if(list[i]) {
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_127 = V_2;
			NullCheck(L_127);
			List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_128 = L_127->get_list_7();
			int32_t L_129 = __this->get_U3CiU3E5__2_10();
			NullCheck(L_128);
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_130;
			L_130 = List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_inline(L_128, L_129, /*hidden argument*/List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
			bool L_131;
			L_131 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_130, /*hidden argument*/NULL);
			if (!L_131)
			{
				goto IL_0502;
			}
		}

IL_0423:
		{
			// if(pretty)
			bool L_132 = __this->get_pretty_8();
			if (!L_132)
			{
				goto IL_0451;
			}
		}

IL_042b:
		{
			// for(int j = 0; j < depth; j++)
			V_11 = 0;
			goto IL_0447;
		}

IL_0430:
		{
			// builder.Append("\t"); //for a bit more readability
			StringBuilder_t * L_133 = __this->get_builder_6();
			NullCheck(L_133);
			StringBuilder_t * L_134;
			L_134 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_133, _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3, /*hidden argument*/NULL);
			// for(int j = 0; j < depth; j++)
			int32_t L_135 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_135, (int32_t)1));
		}

IL_0447:
		{
			// for(int j = 0; j < depth; j++)
			int32_t L_136 = V_11;
			int32_t L_137 = __this->get_depth_3();
			if ((((int32_t)L_136) < ((int32_t)L_137)))
			{
				goto IL_0430;
			}
		}

IL_0451:
		{
			// foreach(IEnumerable e in list[i].StringifyAsync(depth, builder, pretty))
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_138 = V_2;
			NullCheck(L_138);
			List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_139 = L_138->get_list_7();
			int32_t L_140 = __this->get_U3CiU3E5__2_10();
			NullCheck(L_139);
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_141;
			L_141 = List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_inline(L_139, L_140, /*hidden argument*/List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
			int32_t L_142 = __this->get_depth_3();
			StringBuilder_t * L_143 = __this->get_builder_6();
			bool L_144 = __this->get_pretty_8();
			NullCheck(L_141);
			RuntimeObject* L_145;
			L_145 = JSONObject_StringifyAsync_m1FDB9203BA364F417A9DD46DA8D6739AA126EAEA(L_141, L_142, L_143, L_144, /*hidden argument*/NULL);
			NullCheck(L_145);
			RuntimeObject* L_146;
			L_146 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_145);
			__this->set_U3CU3E7__wrap2_11(L_146);
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			goto IL_04be;
		}

IL_048e:
		{
			// foreach(IEnumerable e in list[i].StringifyAsync(depth, builder, pretty))
			RuntimeObject* L_147 = __this->get_U3CU3E7__wrap2_11();
			NullCheck(L_147);
			RuntimeObject * L_148;
			L_148 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_147);
			V_12 = ((RuntimeObject*)Castclass((RuntimeObject*)L_148, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var));
			// yield return e;
			RuntimeObject* L_149 = V_12;
			__this->set_U3CU3E2__current_1(L_149);
			__this->set_U3CU3E1__state_0(3);
			V_0 = (bool)1;
			goto IL_0606;
		}

IL_04b6:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
		}

IL_04be:
		{
			// foreach(IEnumerable e in list[i].StringifyAsync(depth, builder, pretty))
			RuntimeObject* L_150 = __this->get_U3CU3E7__wrap2_11();
			NullCheck(L_150);
			bool L_151;
			L_151 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_150);
			if (L_151)
			{
				goto IL_048e;
			}
		}

IL_04cb:
		{
			U3CStringifyAsyncU3Ed__112_U3CU3Em__Finally2_m09772A53FCB3C6092DA0A77AAC969111CAE8DF6F(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap2_11((RuntimeObject*)NULL);
			// builder.Append(",");
			StringBuilder_t * L_152 = __this->get_builder_6();
			NullCheck(L_152);
			StringBuilder_t * L_153;
			L_153 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_152, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, /*hidden argument*/NULL);
			// if(pretty)
			bool L_154 = __this->get_pretty_8();
			if (!L_154)
			{
				goto IL_0502;
			}
		}

IL_04f1:
		{
			// builder.Append(NEWLINE); //for a bit more readability
			StringBuilder_t * L_155 = __this->get_builder_6();
			NullCheck(L_155);
			StringBuilder_t * L_156;
			L_156 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_155, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, /*hidden argument*/NULL);
		}

IL_0502:
		{
			// for(int i = 0; i < list.Count; i++) {
			int32_t L_157 = __this->get_U3CiU3E5__2_10();
			V_3 = L_157;
			int32_t L_158 = V_3;
			__this->set_U3CiU3E5__2_10(((int32_t)il2cpp_codegen_add((int32_t)L_158, (int32_t)1)));
		}

IL_0512:
		{
			// for(int i = 0; i < list.Count; i++) {
			int32_t L_159 = __this->get_U3CiU3E5__2_10();
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_160 = V_2;
			NullCheck(L_160);
			List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_161 = L_160->get_list_7();
			NullCheck(L_161);
			int32_t L_162;
			L_162 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_161, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
			if ((((int32_t)L_159) < ((int32_t)L_162)))
			{
				goto IL_0408;
			}
		}

IL_0528:
		{
			// if(pretty)
			bool L_163 = __this->get_pretty_8();
			if (!L_163)
			{
				goto IL_0545;
			}
		}

IL_0530:
		{
			// builder.Length -= 2;
			StringBuilder_t * L_164 = __this->get_builder_6();
			StringBuilder_t * L_165 = L_164;
			NullCheck(L_165);
			int32_t L_166;
			L_166 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_165, /*hidden argument*/NULL);
			NullCheck(L_165);
			StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A(L_165, ((int32_t)il2cpp_codegen_subtract((int32_t)L_166, (int32_t)2)), /*hidden argument*/NULL);
			goto IL_055a;
		}

IL_0545:
		{
			// builder.Length--;
			StringBuilder_t * L_167 = __this->get_builder_6();
			StringBuilder_t * L_168 = L_167;
			NullCheck(L_168);
			int32_t L_169;
			L_169 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_168, /*hidden argument*/NULL);
			V_3 = L_169;
			int32_t L_170 = V_3;
			NullCheck(L_168);
			StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A(L_168, ((int32_t)il2cpp_codegen_subtract((int32_t)L_170, (int32_t)1)), /*hidden argument*/NULL);
		}

IL_055a:
		{
			// if(pretty && list.Count > 0) {
			bool L_171 = __this->get_pretty_8();
			if (!L_171)
			{
				goto IL_05a9;
			}
		}

IL_0562:
		{
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_172 = V_2;
			NullCheck(L_172);
			List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_173 = L_172->get_list_7();
			NullCheck(L_173);
			int32_t L_174;
			L_174 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_173, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
			if ((((int32_t)L_174) <= ((int32_t)0)))
			{
				goto IL_05a9;
			}
		}

IL_0570:
		{
			// builder.Append(NEWLINE);
			StringBuilder_t * L_175 = __this->get_builder_6();
			NullCheck(L_175);
			StringBuilder_t * L_176;
			L_176 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_175, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, /*hidden argument*/NULL);
			// for(int j = 0; j < depth - 1; j++)
			V_13 = 0;
			goto IL_059d;
		}

IL_0586:
		{
			// builder.Append("\t"); //for a bit more readability
			StringBuilder_t * L_177 = __this->get_builder_6();
			NullCheck(L_177);
			StringBuilder_t * L_178;
			L_178 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_177, _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3, /*hidden argument*/NULL);
			// for(int j = 0; j < depth - 1; j++)
			int32_t L_179 = V_13;
			V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_179, (int32_t)1));
		}

IL_059d:
		{
			// for(int j = 0; j < depth - 1; j++)
			int32_t L_180 = V_13;
			int32_t L_181 = __this->get_depth_3();
			if ((((int32_t)L_180) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_181, (int32_t)1)))))
			{
				goto IL_0586;
			}
		}

IL_05a9:
		{
			// builder.Append("]");
			StringBuilder_t * L_182 = __this->get_builder_6();
			NullCheck(L_182);
			StringBuilder_t * L_183;
			L_183 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_182, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, /*hidden argument*/NULL);
			// break;
			goto IL_05fb;
		}

IL_05bc:
		{
			// if(b)
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_184 = V_2;
			NullCheck(L_184);
			bool L_185 = L_184->get_b_13();
			if (!L_185)
			{
				goto IL_05d7;
			}
		}

IL_05c4:
		{
			// builder.Append("true");
			StringBuilder_t * L_186 = __this->get_builder_6();
			NullCheck(L_186);
			StringBuilder_t * L_187;
			L_187 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_186, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, /*hidden argument*/NULL);
			goto IL_05fb;
		}

IL_05d7:
		{
			// builder.Append("false");
			StringBuilder_t * L_188 = __this->get_builder_6();
			NullCheck(L_188);
			StringBuilder_t * L_189;
			L_189 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_188, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, /*hidden argument*/NULL);
			// break;
			goto IL_05fb;
		}

IL_05ea:
		{
			// builder.Append("null");
			StringBuilder_t * L_190 = __this->get_builder_6();
			NullCheck(L_190);
			StringBuilder_t * L_191;
			L_191 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_190, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, /*hidden argument*/NULL);
		}

IL_05fb:
		{
			// }
			V_0 = (bool)0;
			goto IL_0606;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_05ff;
	}

FAULT_05ff:
	{ // begin fault (depth: 1)
		U3CStringifyAsyncU3Ed__112_System_IDisposable_Dispose_m1B455C9D97ADD81D46CAAFB0C4583F03B0AC0422(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(1535)
	} // end fault
	IL2CPP_CLEANUP(1535)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0606:
	{
		bool L_192 = V_0;
		return L_192;
	}
}
// System.Void JSONObject/<StringifyAsync>d__112::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStringifyAsyncU3Ed__112_U3CU3Em__Finally1_m539FBD93318D1FE346BBF25E84BB17C6C842E802 (U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap2_11();
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_2);
	}

IL_001c:
	{
		return;
	}
}
// System.Void JSONObject/<StringifyAsync>d__112::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStringifyAsyncU3Ed__112_U3CU3Em__Finally2_m09772A53FCB3C6092DA0A77AAC969111CAE8DF6F (U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap2_11();
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_2);
	}

IL_001c:
	{
		return;
	}
}
// System.Object JSONObject/<StringifyAsync>d__112::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStringifyAsyncU3Ed__112_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6858EA68BD544892B80EF0181DEBE0668633F761 (U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void JSONObject/<StringifyAsync>d__112::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStringifyAsyncU3Ed__112_System_Collections_IEnumerator_Reset_mC6FEAD91AB08C04448B4499AA642FE1633FD6E3B (U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStringifyAsyncU3Ed__112_System_Collections_IEnumerator_Reset_mC6FEAD91AB08C04448B4499AA642FE1633FD6E3B_RuntimeMethod_var)));
	}
}
// System.Object JSONObject/<StringifyAsync>d__112::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStringifyAsyncU3Ed__112_System_Collections_IEnumerator_get_Current_mF13DBDBCA665304E5829920C0399F35633E2FCA9 (U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Object> JSONObject/<StringifyAsync>d__112::System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStringifyAsyncU3Ed__112_System_Collections_Generic_IEnumerableU3CSystem_ObjectU3E_GetEnumerator_m377422C04D744EE89A37EE56AB2B78A0D10ED705 (U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124 * L_3 = (U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124 *)il2cpp_codegen_object_new(U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124_il2cpp_TypeInfo_var);
		U3CStringifyAsyncU3Ed__112__ctor_m1E81AEAC2CD745EDB141D3F776D608F93B77E89E(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124 * L_4 = V_0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_5 = __this->get_U3CU3E4__this_5();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_5(L_5);
	}

IL_0035:
	{
		U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124 * L_6 = V_0;
		int32_t L_7 = __this->get_U3CU3E3__depth_4();
		NullCheck(L_6);
		L_6->set_depth_3(L_7);
		U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124 * L_8 = V_0;
		StringBuilder_t * L_9 = __this->get_U3CU3E3__builder_7();
		NullCheck(L_8);
		L_8->set_builder_6(L_9);
		U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124 * L_10 = V_0;
		bool L_11 = __this->get_U3CU3E3__pretty_9();
		NullCheck(L_10);
		L_10->set_pretty_8(L_11);
		U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124 * L_12 = V_0;
		return L_12;
	}
}
// System.Collections.IEnumerator JSONObject/<StringifyAsync>d__112::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStringifyAsyncU3Ed__112_System_Collections_IEnumerable_GetEnumerator_m694AA091B132732587C27B890E1254197E9140B4 (U3CStringifyAsyncU3Ed__112_t856C2311D9EF222E0C4CD1613A2805C4979E4124 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CStringifyAsyncU3Ed__112_System_Collections_Generic_IEnumerableU3CSystem_ObjectU3E_GetEnumerator_m377422C04D744EE89A37EE56AB2B78A0D10ED705(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void JSONObject/AddJSONContents::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddJSONContents__ctor_m3801B37D16BD141741DC59B0E4D28E76C1C8F9A6 (AddJSONContents_t30D87492AD29D0086FE679779BD8E02620377B16 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void JSONObject/AddJSONContents::Invoke(JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddJSONContents_Invoke_m5EB8C5BFCDB131C8317BE615AE64AB300FF77008 (AddJSONContents_t30D87492AD29D0086FE679779BD8E02620377B16 * __this, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___self0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___self0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___self0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___self0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___self0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___self0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___self0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___self0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * >::Invoke(targetMethod, targetThis, ___self0);
					else
						GenericVirtActionInvoker1< JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * >::Invoke(targetMethod, targetThis, ___self0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___self0);
					else
						VirtActionInvoker1< JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___self0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___self0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___self0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult JSONObject/AddJSONContents::BeginInvoke(JSONObject,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AddJSONContents_BeginInvoke_mBCE82C571050260B1783F47BD7F8D46B7CD23A40 (AddJSONContents_t30D87492AD29D0086FE679779BD8E02620377B16 * __this, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___self0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___self0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void JSONObject/AddJSONContents::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddJSONContents_EndInvoke_mA46FC0F113838FD67CB6ECCDB1E13818B32E7FBC (AddJSONContents_t30D87492AD29D0086FE679779BD8E02620377B16 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 (FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___name0' to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	il2cppPInvokeFunc(____name0_marshaled);

	// Marshaling cleanup of parameter '___name0' native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

}
// System.Void JSONObject/FieldNotFound::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldNotFound__ctor_mCFB4DEAAF2D417190F98569EBA765ACF98116DF1 (FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void JSONObject/FieldNotFound::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldNotFound_Invoke_mF93C65AD79D8DEC6373E56CA7B9862F9E72EA18C (FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___name0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___name0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___name0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___name0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___name0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___name0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___name0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___name0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___name0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___name0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___name0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___name0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___name0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult JSONObject/FieldNotFound::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FieldNotFound_BeginInvoke_m3951685348C652B0B4FDB3B02F3E72D7ACFCEA74 (FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * __this, String_t* ___name0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___name0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void JSONObject/FieldNotFound::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldNotFound_EndInvoke_mAA32D67E1B11FFA096184B170FB2D17BB80743BA (FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void JSONObject/GetFieldResponse::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFieldResponse__ctor_m275436EE4E4888F0F10608380E57E45F150C436B (GetFieldResponse_t43D0287B1D77E67E63ED111DCD7C7BE0EC183345 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void JSONObject/GetFieldResponse::Invoke(JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFieldResponse_Invoke_mF1BEAD17E9225211812605D01371DE9834947986 (GetFieldResponse_t43D0287B1D77E67E63ED111DCD7C7BE0EC183345 * __this, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___obj0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___obj0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___obj0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___obj0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___obj0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___obj0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___obj0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * >::Invoke(targetMethod, targetThis, ___obj0);
					else
						GenericVirtActionInvoker1< JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * >::Invoke(targetMethod, targetThis, ___obj0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0);
					else
						VirtActionInvoker1< JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___obj0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult JSONObject/GetFieldResponse::BeginInvoke(JSONObject,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetFieldResponse_BeginInvoke_m63A990050272CF5B41F19C3C9328933CDA5C30AE (GetFieldResponse_t43D0287B1D77E67E63ED111DCD7C7BE0EC183345 * __this, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___obj0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___obj0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void JSONObject/GetFieldResponse::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFieldResponse_EndInvoke_m09C7B468D4E25709C135705737A93E2E49EED3C3 (GetFieldResponse_t43D0287B1D77E67E63ED111DCD7C7BE0EC183345 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LoadBundle/<GetDataCoroutine>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDataCoroutineU3Ed__3__ctor_m30CFDC7676B8D31C3BFE4B31CC735B5535649A6E (U3CGetDataCoroutineU3Ed__3_t1DB663A49515F78190F39164B3EA3A56BB70159C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void LoadBundle/<GetDataCoroutine>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDataCoroutineU3Ed__3_System_IDisposable_Dispose_mC3935F228FD0DBBAA6CAFABFA066F7F8B9DA12DC (U3CGetDataCoroutineU3Ed__3_t1DB663A49515F78190F39164B3EA3A56BB70159C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CGetDataCoroutineU3Ed__3_U3CU3Em__Finally1_m9237390DB74027A0508070995FBA7A2DA42FC89D(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean LoadBundle/<GetDataCoroutine>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetDataCoroutineU3Ed__3_MoveNext_m6B8D4F134B7B452A760BF4D7961A52BF1765E62C (U3CGetDataCoroutineU3Ed__3_t1DB663A49515F78190F39164B3EA3A56BB70159C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11BAC12861C1231E69A3D9E3993E11F5A9173918);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7FC20D01D11E8D793D9DCF4138B825F64D86676);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	LoadBundle_tCCF56ED79520467E367004790C0CE3B5E1EEE9AC * V_2 = NULL;
	String_t* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			LoadBundle_tCCF56ED79520467E367004790C0CE3B5E1EEE9AC * L_1 = __this->get_U3CU3E4__this_2();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_001c;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0069;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_00d6;
		}

IL_001c:
		{
			__this->set_U3CU3E1__state_0((-1));
			// outputArea.text = "Loding...";
			LoadBundle_tCCF56ED79520467E367004790C0CE3B5E1EEE9AC * L_4 = V_2;
			NullCheck(L_4);
			InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_5 = L_4->get_outputArea_4();
			NullCheck(L_5);
			InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_5, _stringLiteralB7FC20D01D11E8D793D9DCF4138B825F64D86676, /*hidden argument*/NULL);
			// string url = "https://www.example.com";
			V_3 = _stringLiteral11BAC12861C1231E69A3D9E3993E11F5A9173918;
			// using (UnityWebRequest rec = UnityWebRequest.Get(url))
			String_t* L_6 = V_3;
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_7;
			L_7 = UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A(L_6, /*hidden argument*/NULL);
			__this->set_U3CrecU3E5__2_3(L_7);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return rec.SendWebRequest();
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_8 = __this->get_U3CrecU3E5__2_3();
			NullCheck(L_8);
			UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_9;
			L_9 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_8, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_9);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_00d6;
		}

IL_0069:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// if (rec.isNetworkError || rec.isHttpError)
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_10 = __this->get_U3CrecU3E5__2_3();
			NullCheck(L_10);
			bool L_11;
			L_11 = UnityWebRequest_get_isNetworkError_m0126D38DA9B39159CB12F8DE0C3962A4BEEE5C03(L_10, /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_008b;
			}
		}

IL_007e:
		{
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_12 = __this->get_U3CrecU3E5__2_3();
			NullCheck(L_12);
			bool L_13;
			L_13 = UnityWebRequest_get_isHttpError_m23ADCBE1CF082A940EF6AA75A15051583228B616(L_12, /*hidden argument*/NULL);
			if (!L_13)
			{
				goto IL_00a3;
			}
		}

IL_008b:
		{
			// outputArea.text = rec.error;
			LoadBundle_tCCF56ED79520467E367004790C0CE3B5E1EEE9AC * L_14 = V_2;
			NullCheck(L_14);
			InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_15 = L_14->get_outputArea_4();
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_16 = __this->get_U3CrecU3E5__2_3();
			NullCheck(L_16);
			String_t* L_17;
			L_17 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_16, /*hidden argument*/NULL);
			NullCheck(L_15);
			InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_15, L_17, /*hidden argument*/NULL);
			// }
			goto IL_00be;
		}

IL_00a3:
		{
			// outputArea.text = rec.downloadHandler.text;
			LoadBundle_tCCF56ED79520467E367004790C0CE3B5E1EEE9AC * L_18 = V_2;
			NullCheck(L_18);
			InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_19 = L_18->get_outputArea_4();
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_20 = __this->get_U3CrecU3E5__2_3();
			NullCheck(L_20);
			DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_21;
			L_21 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_20, /*hidden argument*/NULL);
			NullCheck(L_21);
			String_t* L_22;
			L_22 = DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A(L_21, /*hidden argument*/NULL);
			NullCheck(L_19);
			InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_19, L_22, /*hidden argument*/NULL);
		}

IL_00be:
		{
			// }
			U3CGetDataCoroutineU3Ed__3_U3CU3Em__Finally1_m9237390DB74027A0508070995FBA7A2DA42FC89D(__this, /*hidden argument*/NULL);
			__this->set_U3CrecU3E5__2_3((UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)NULL);
			// }
			V_0 = (bool)0;
			goto IL_00d6;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00cf;
	}

FAULT_00cf:
	{ // begin fault (depth: 1)
		U3CGetDataCoroutineU3Ed__3_System_IDisposable_Dispose_mC3935F228FD0DBBAA6CAFABFA066F7F8B9DA12DC(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(207)
	} // end fault
	IL2CPP_CLEANUP(207)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00d6:
	{
		bool L_23 = V_0;
		return L_23;
	}
}
// System.Void LoadBundle/<GetDataCoroutine>d__3::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDataCoroutineU3Ed__3_U3CU3Em__Finally1_m9237390DB74027A0508070995FBA7A2DA42FC89D (U3CGetDataCoroutineU3Ed__3_t1DB663A49515F78190F39164B3EA3A56BB70159C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0 = __this->get_U3CrecU3E5__2_3();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_1 = __this->get_U3CrecU3E5__2_3();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Object LoadBundle/<GetDataCoroutine>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetDataCoroutineU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m606287AD4480474016DD34E27CA298CE78F5708D (U3CGetDataCoroutineU3Ed__3_t1DB663A49515F78190F39164B3EA3A56BB70159C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void LoadBundle/<GetDataCoroutine>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDataCoroutineU3Ed__3_System_Collections_IEnumerator_Reset_m2E1D7C8592F314F8E3C413969C4F68DD2AAC75B4 (U3CGetDataCoroutineU3Ed__3_t1DB663A49515F78190F39164B3EA3A56BB70159C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetDataCoroutineU3Ed__3_System_Collections_IEnumerator_Reset_m2E1D7C8592F314F8E3C413969C4F68DD2AAC75B4_RuntimeMethod_var)));
	}
}
// System.Object LoadBundle/<GetDataCoroutine>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetDataCoroutineU3Ed__3_System_Collections_IEnumerator_get_Current_m5459A4C1A097F5B78C6ED3EB6BEE2C45C3BAC596 (U3CGetDataCoroutineU3Ed__3_t1DB663A49515F78190F39164B3EA3A56BB70159C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Loading/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_mB64A06A2A7C94D64F50F370326A9D8B2BFB3A760 (U3CU3Ec__DisplayClass14_0_tF2FB2E5FB66F24FBD986C98569C62F25795EEAC0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Loading/<>c__DisplayClass14_0::<TestJson>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0_U3CTestJsonU3Eb__0_mB68D5C9377C08E62143909B697C38A0CEADBE914 (U3CU3Ec__DisplayClass14_0_tF2FB2E5FB66F24FBD986C98569C62F25795EEAC0 * __this, const RuntimeMethod* method)
{
	{
		// button1[i].onClick.AddListener(() => TaskOnClick(Type, text, t));
		Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 * L_0 = __this->get_U3CU3E4__this_3();
		String_t* L_1 = __this->get_Type_0();
		String_t* L_2 = __this->get_text_1();
		int32_t L_3 = __this->get_t_2();
		NullCheck(L_0);
		Loading_U3CTestJsonU3Eg__TaskOnClickU7C14_1_m5EB3DB80C537E2E21B664D7D0F0CB556351F0B89(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Loading/<TestJson>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTestJsonU3Ed__14__ctor_m46D12F456AE8D592319D54F72748BD67FC7955A7 (U3CTestJsonU3Ed__14_t0E0F080D1E6BE65AE94DA84D527DC6AE18884C84 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Loading/<TestJson>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTestJsonU3Ed__14_System_IDisposable_Dispose_m4A73EB6AFE190364DE77B4B1859DB08F4C2AD886 (U3CTestJsonU3Ed__14_t0E0F080D1E6BE65AE94DA84D527DC6AE18884C84 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Loading/<TestJson>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTestJsonU3Ed__14_MoveNext_m2E0A8BAC7487350A02A533D9190D1CD8F56D5336 (U3CTestJsonU3Ed__14_t0E0F080D1E6BE65AE94DA84D527DC6AE18884C84 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mEFB8C40CB9606CC28E04D45092013ED9B5C70E9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonHelper_getJsonArray_TisRoot_tC9A64770600B9FA62079AE4160AB035C6597B841_m1DE7EEF7E1680755D305ECEAD640ED0231ABB922_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m253C81629213F944DA2E187C83D50559CCE75B89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_U3CTestJsonU3Eb__0_mB68D5C9377C08E62143909B697C38A0CEADBE914_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_tF2FB2E5FB66F24FBD986C98569C62F25795EEAC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29CEE6C774C2A6B13349634187AB40A780AAC0C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58996B06CA854E96768D85CEA7C32D4965B0C68C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93B98C3040BF26B2D68E7DD514A4EE37837430F3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 * V_1 = NULL;
	RootU5BU5D_t632F3B7EF48973C939950798ACE5B91D5E29EF30* V_2 = NULL;
	int32_t V_3 = 0;
	U3CU3Ec__DisplayClass14_0_tF2FB2E5FB66F24FBD986C98569C62F25795EEAC0 * V_4 = NULL;
	String_t* V_5 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// UnityWebRequest rec = UnityWebRequest.Get(Url);
		String_t* L_4 = __this->get_Url_2();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_5;
		L_5 = UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A(L_4, /*hidden argument*/NULL);
		__this->set_U3CrecU3E5__2_4(L_5);
		// yield return rec.SendWebRequest();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_6 = __this->get_U3CrecU3E5__2_4();
		NullCheck(L_6);
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_7;
		L_7 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_6, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0049:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (rec.isNetworkError || rec.isHttpError)
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_8 = __this->get_U3CrecU3E5__2_4();
		NullCheck(L_8);
		bool L_9;
		L_9 = UnityWebRequest_get_isNetworkError_m0126D38DA9B39159CB12F8DE0C3962A4BEEE5C03(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_006a;
		}
	}
	{
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_10 = __this->get_U3CrecU3E5__2_4();
		NullCheck(L_10);
		bool L_11;
		L_11 = UnityWebRequest_get_isHttpError_m23ADCBE1CF082A940EF6AA75A15051583228B616(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_007c;
		}
	}

IL_006a:
	{
		// Debug.LogError(rec.error);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_12 = __this->get_U3CrecU3E5__2_4();
		NullCheck(L_12);
		String_t* L_13;
		L_13 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_13, /*hidden argument*/NULL);
		// yield break;
		return (bool)0;
	}

IL_007c:
	{
		// Categorys.Root[] Root = JsonHelper.getJsonArray<Categorys.Root>(rec.downloadHandler.text);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_14 = __this->get_U3CrecU3E5__2_4();
		NullCheck(L_14);
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_15;
		L_15 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A(L_15, /*hidden argument*/NULL);
		RootU5BU5D_t632F3B7EF48973C939950798ACE5B91D5E29EF30* L_17;
		L_17 = JsonHelper_getJsonArray_TisRoot_tC9A64770600B9FA62079AE4160AB035C6597B841_m1DE7EEF7E1680755D305ECEAD640ED0231ABB922(L_16, /*hidden argument*/JsonHelper_getJsonArray_TisRoot_tC9A64770600B9FA62079AE4160AB035C6597B841_m1DE7EEF7E1680755D305ECEAD640ED0231ABB922_RuntimeMethod_var);
		V_2 = L_17;
		// button1 = new Button[Root.Length];
		Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 * L_18 = V_1;
		RootU5BU5D_t632F3B7EF48973C939950798ACE5B91D5E29EF30* L_19 = V_2;
		NullCheck(L_19);
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_20 = (ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B*)(ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B*)SZArrayNew(ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))));
		NullCheck(L_18);
		L_18->set_button1_6(L_20);
		// for (int i = 0; i < Root.Length; i++)
		V_3 = 0;
		goto IL_01fe;
	}

IL_00a7:
	{
		U3CU3Ec__DisplayClass14_0_tF2FB2E5FB66F24FBD986C98569C62F25795EEAC0 * L_21 = (U3CU3Ec__DisplayClass14_0_tF2FB2E5FB66F24FBD986C98569C62F25795EEAC0 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass14_0_tF2FB2E5FB66F24FBD986C98569C62F25795EEAC0_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass14_0__ctor_mB64A06A2A7C94D64F50F370326A9D8B2BFB3A760(L_21, /*hidden argument*/NULL);
		V_4 = L_21;
		U3CU3Ec__DisplayClass14_0_tF2FB2E5FB66F24FBD986C98569C62F25795EEAC0 * L_22 = V_4;
		Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 * L_23 = V_1;
		NullCheck(L_22);
		L_22->set_U3CU3E4__this_3(L_23);
		// int sentcount = Root[i].status.sentCount;
		RootU5BU5D_t632F3B7EF48973C939950798ACE5B91D5E29EF30* L_24 = V_2;
		int32_t L_25 = V_3;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		Root_tC9A64770600B9FA62079AE4160AB035C6597B841 * L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		Status_t40E98624315AB90AFA291CBCB4FDCB5449DB1AA1 * L_28 = L_27->get_status_0();
		NullCheck(L_28);
		int32_t L_29 = L_28->get_sentCount_1();
		// string id = Root[i]._id;
		RootU5BU5D_t632F3B7EF48973C939950798ACE5B91D5E29EF30* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		Root_tC9A64770600B9FA62079AE4160AB035C6597B841 * L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_33);
		String_t* L_34 = L_33->get__id_1();
		// string Type = Root[i].type;
		U3CU3Ec__DisplayClass14_0_tF2FB2E5FB66F24FBD986C98569C62F25795EEAC0 * L_35 = V_4;
		RootU5BU5D_t632F3B7EF48973C939950798ACE5B91D5E29EF30* L_36 = V_2;
		int32_t L_37 = V_3;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		Root_tC9A64770600B9FA62079AE4160AB035C6597B841 * L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_39);
		String_t* L_40 = L_39->get_type_9();
		NullCheck(L_35);
		L_35->set_Type_0(L_40);
		// string text = Root[i].text;
		U3CU3Ec__DisplayClass14_0_tF2FB2E5FB66F24FBD986C98569C62F25795EEAC0 * L_41 = V_4;
		RootU5BU5D_t632F3B7EF48973C939950798ACE5B91D5E29EF30* L_42 = V_2;
		int32_t L_43 = V_3;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		Root_tC9A64770600B9FA62079AE4160AB035C6597B841 * L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_45);
		String_t* L_46 = L_45->get_text_5();
		NullCheck(L_41);
		L_41->set_text_1(L_46);
		// button1[i] = Instantiate(button, Greed1);
		Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 * L_47 = V_1;
		NullCheck(L_47);
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_48 = L_47->get_button1_6();
		int32_t L_49 = V_3;
		Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 * L_50 = V_1;
		NullCheck(L_50);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_51 = L_50->get_button_9();
		Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 * L_52 = V_1;
		NullCheck(L_52);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53 = L_52->get_Greed1_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_54;
		L_54 = Object_Instantiate_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m253C81629213F944DA2E187C83D50559CCE75B89(L_51, L_53, /*hidden argument*/Object_Instantiate_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m253C81629213F944DA2E187C83D50559CCE75B89_RuntimeMethod_var);
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_54);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D *)L_54);
		// int t = 0;
		U3CU3Ec__DisplayClass14_0_tF2FB2E5FB66F24FBD986C98569C62F25795EEAC0 * L_55 = V_4;
		NullCheck(L_55);
		L_55->set_t_2(0);
		// switch (Root[i].type)
		RootU5BU5D_t632F3B7EF48973C939950798ACE5B91D5E29EF30* L_56 = V_2;
		int32_t L_57 = V_3;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		Root_tC9A64770600B9FA62079AE4160AB035C6597B841 * L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_59);
		String_t* L_60 = L_59->get_type_9();
		V_5 = L_60;
		String_t* L_61 = V_5;
		if (!L_61)
		{
			goto IL_01b3;
		}
	}
	{
		String_t* L_62 = V_5;
		bool L_63;
		L_63 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_62, _stringLiteral93B98C3040BF26B2D68E7DD514A4EE37837430F3, /*hidden argument*/NULL);
		if (L_63)
		{
			goto IL_0149;
		}
	}
	{
		String_t* L_64 = V_5;
		bool L_65;
		L_65 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_64, _stringLiteral58996B06CA854E96768D85CEA7C32D4965B0C68C, /*hidden argument*/NULL);
		if (L_65)
		{
			goto IL_016d;
		}
	}
	{
		String_t* L_66 = V_5;
		bool L_67;
		L_67 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_66, _stringLiteral29CEE6C774C2A6B13349634187AB40A780AAC0C0, /*hidden argument*/NULL);
		if (L_67)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01b3;
	}

IL_0149:
	{
		// t = 0;
		U3CU3Ec__DisplayClass14_0_tF2FB2E5FB66F24FBD986C98569C62F25795EEAC0 * L_68 = V_4;
		NullCheck(L_68);
		L_68->set_t_2(0);
		// button1[i].GetComponent<RawImage>().texture = tex[0];
		Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 * L_69 = V_1;
		NullCheck(L_69);
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_70 = L_69->get_button1_6();
		int32_t L_71 = V_3;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_73);
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_74;
		L_74 = Component_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mEFB8C40CB9606CC28E04D45092013ED9B5C70E9A(L_73, /*hidden argument*/Component_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mEFB8C40CB9606CC28E04D45092013ED9B5C70E9A_RuntimeMethod_var);
		Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 * L_75 = V_1;
		NullCheck(L_75);
		Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* L_76 = L_75->get_tex_10();
		NullCheck(L_76);
		int32_t L_77 = 0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_78 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		NullCheck(L_74);
		RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99(L_74, L_78, /*hidden argument*/NULL);
		// break;
		goto IL_01b3;
	}

IL_016d:
	{
		// t = 1;
		U3CU3Ec__DisplayClass14_0_tF2FB2E5FB66F24FBD986C98569C62F25795EEAC0 * L_79 = V_4;
		NullCheck(L_79);
		L_79->set_t_2(1);
		// button1[i].GetComponent<RawImage>().texture = tex[1];
		Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 * L_80 = V_1;
		NullCheck(L_80);
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_81 = L_80->get_button1_6();
		int32_t L_82 = V_3;
		NullCheck(L_81);
		int32_t L_83 = L_82;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(L_84);
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_85;
		L_85 = Component_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mEFB8C40CB9606CC28E04D45092013ED9B5C70E9A(L_84, /*hidden argument*/Component_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mEFB8C40CB9606CC28E04D45092013ED9B5C70E9A_RuntimeMethod_var);
		Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 * L_86 = V_1;
		NullCheck(L_86);
		Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* L_87 = L_86->get_tex_10();
		NullCheck(L_87);
		int32_t L_88 = 1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_89 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		NullCheck(L_85);
		RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99(L_85, L_89, /*hidden argument*/NULL);
		// break;
		goto IL_01b3;
	}

IL_0191:
	{
		// t = 2;
		U3CU3Ec__DisplayClass14_0_tF2FB2E5FB66F24FBD986C98569C62F25795EEAC0 * L_90 = V_4;
		NullCheck(L_90);
		L_90->set_t_2(2);
		// button1[i].GetComponent<RawImage>().texture = tex[2];
		Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 * L_91 = V_1;
		NullCheck(L_91);
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_92 = L_91->get_button1_6();
		int32_t L_93 = V_3;
		NullCheck(L_92);
		int32_t L_94 = L_93;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_95 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		NullCheck(L_95);
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_96;
		L_96 = Component_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mEFB8C40CB9606CC28E04D45092013ED9B5C70E9A(L_95, /*hidden argument*/Component_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mEFB8C40CB9606CC28E04D45092013ED9B5C70E9A_RuntimeMethod_var);
		Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 * L_97 = V_1;
		NullCheck(L_97);
		Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* L_98 = L_97->get_tex_10();
		NullCheck(L_98);
		int32_t L_99 = 2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_100 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		NullCheck(L_96);
		RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99(L_96, L_100, /*hidden argument*/NULL);
	}

IL_01b3:
	{
		// int buttonIndex = Root[i].status.sentCount;
		RootU5BU5D_t632F3B7EF48973C939950798ACE5B91D5E29EF30* L_101 = V_2;
		int32_t L_102 = V_3;
		NullCheck(L_101);
		int32_t L_103 = L_102;
		Root_tC9A64770600B9FA62079AE4160AB035C6597B841 * L_104 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		NullCheck(L_104);
		Status_t40E98624315AB90AFA291CBCB4FDCB5449DB1AA1 * L_105 = L_104->get_status_0();
		NullCheck(L_105);
		int32_t L_106 = L_105->get_sentCount_1();
		// button1[i].onClick.AddListener(() => TaskOnClick(Type, text, t));
		Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 * L_107 = V_1;
		NullCheck(L_107);
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_108 = L_107->get_button1_6();
		int32_t L_109 = V_3;
		NullCheck(L_108);
		int32_t L_110 = L_109;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		NullCheck(L_111);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_112;
		L_112 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_111, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass14_0_tF2FB2E5FB66F24FBD986C98569C62F25795EEAC0 * L_113 = V_4;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_114 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_114, L_113, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass14_0_U3CTestJsonU3Eb__0_mB68D5C9377C08E62143909B697C38A0CEADBE914_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_112);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_112, L_114, /*hidden argument*/NULL);
		// button1[i].GetComponentInChildren<Text>().text = Root[i].type;
		Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 * L_115 = V_1;
		NullCheck(L_115);
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_116 = L_115->get_button1_6();
		int32_t L_117 = V_3;
		NullCheck(L_116);
		int32_t L_118 = L_117;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_119 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		NullCheck(L_119);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_120;
		L_120 = Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3(L_119, /*hidden argument*/Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3_RuntimeMethod_var);
		RootU5BU5D_t632F3B7EF48973C939950798ACE5B91D5E29EF30* L_121 = V_2;
		int32_t L_122 = V_3;
		NullCheck(L_121);
		int32_t L_123 = L_122;
		Root_tC9A64770600B9FA62079AE4160AB035C6597B841 * L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		NullCheck(L_124);
		String_t* L_125 = L_124->get_type_9();
		NullCheck(L_120);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_120, L_125);
		// for (int i = 0; i < Root.Length; i++)
		int32_t L_126 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_126, (int32_t)1));
	}

IL_01fe:
	{
		// for (int i = 0; i < Root.Length; i++)
		int32_t L_127 = V_3;
		RootU5BU5D_t632F3B7EF48973C939950798ACE5B91D5E29EF30* L_128 = V_2;
		NullCheck(L_128);
		if ((((int32_t)L_127) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_128)->max_length))))))
		{
			goto IL_00a7;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Loading/<TestJson>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTestJsonU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFBB1A0D0330E4FCDCA0372637FD6DA23C1071C53 (U3CTestJsonU3Ed__14_t0E0F080D1E6BE65AE94DA84D527DC6AE18884C84 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Loading/<TestJson>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTestJsonU3Ed__14_System_Collections_IEnumerator_Reset_m54DE9C214BCD25588585E981E547FBA17292B2CB (U3CTestJsonU3Ed__14_t0E0F080D1E6BE65AE94DA84D527DC6AE18884C84 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTestJsonU3Ed__14_System_Collections_IEnumerator_Reset_m54DE9C214BCD25588585E981E547FBA17292B2CB_RuntimeMethod_var)));
	}
}
// System.Object Loading/<TestJson>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTestJsonU3Ed__14_System_Collections_IEnumerator_get_Current_mC7C7D811433B587527F59395FF9158D601F06191 (U3CTestJsonU3Ed__14_t0E0F080D1E6BE65AE94DA84D527DC6AE18884C84 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 ResposWeather/Clouds::get_all()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Clouds_get_all_m012DE17C79F83260D22AC80B6C6109FCD243FC3A (Clouds_t7DAE7314B38FF4F1C2BB162D9FB52CE7128D300A * __this, const RuntimeMethod* method)
{
	{
		// public int all { get; set; }
		int32_t L_0 = __this->get_U3CallU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void ResposWeather/Clouds::set_all(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Clouds_set_all_m83B3D8DCCF77B9923E25E48946C8481D9422B050 (Clouds_t7DAE7314B38FF4F1C2BB162D9FB52CE7128D300A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int all { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CallU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void ResposWeather/Clouds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Clouds__ctor_mFB8BE0525D3E4C6250F41051EBB5503F9E7C2FFE (Clouds_t7DAE7314B38FF4F1C2BB162D9FB52CE7128D300A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Double ResposWeather/Coord::get_lon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Coord_get_lon_m0197FBBBDFAB3EB290DAB74B3230278B2C1BD967 (Coord_t327D69B3A98A66AF89AE0D823C4FC094097B9FA8 * __this, const RuntimeMethod* method)
{
	{
		// public double lon { get; set; }
		double L_0 = __this->get_U3ClonU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void ResposWeather/Coord::set_lon(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Coord_set_lon_m1D1D7A17941F60A45E8E10619C35B6AC47D36559 (Coord_t327D69B3A98A66AF89AE0D823C4FC094097B9FA8 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// public double lon { get; set; }
		double L_0 = ___value0;
		__this->set_U3ClonU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Double ResposWeather/Coord::get_lat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Coord_get_lat_m4DC730E7EE83FCDB1D0EBE55DB4DF1428A63244E (Coord_t327D69B3A98A66AF89AE0D823C4FC094097B9FA8 * __this, const RuntimeMethod* method)
{
	{
		// public double lat { get; set; }
		double L_0 = __this->get_U3ClatU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void ResposWeather/Coord::set_lat(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Coord_set_lat_m9F96DBF98EDDD6F7D9549C290F90A2AD5CFDDA89 (Coord_t327D69B3A98A66AF89AE0D823C4FC094097B9FA8 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// public double lat { get; set; }
		double L_0 = ___value0;
		__this->set_U3ClatU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void ResposWeather/Coord::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Coord__ctor_mB36D6D7F627A3450B151A0F873B4257E98AB7BDC (Coord_t327D69B3A98A66AF89AE0D823C4FC094097B9FA8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Double ResposWeather/Main::get_temp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Main_get_temp_m4F2626FB34D0978633DD924072E42882778FEBB0 (Main_t7F967EE4D57213963EC2DB4BD709C31F5BC93B0E * __this, const RuntimeMethod* method)
{
	{
		// public double temp { get; set; }
		double L_0 = __this->get_U3CtempU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void ResposWeather/Main::set_temp(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_set_temp_mA4A11560C2120D994F4F721FAF0F1370ED9B6C86 (Main_t7F967EE4D57213963EC2DB4BD709C31F5BC93B0E * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// public double temp { get; set; }
		double L_0 = ___value0;
		__this->set_U3CtempU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Double ResposWeather/Main::get_feels_like()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Main_get_feels_like_m6A0AC9F286A203E55B67C15BA92142E8E0FB74F7 (Main_t7F967EE4D57213963EC2DB4BD709C31F5BC93B0E * __this, const RuntimeMethod* method)
{
	{
		// public double feels_like { get; set; }
		double L_0 = __this->get_U3Cfeels_likeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void ResposWeather/Main::set_feels_like(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_set_feels_like_mD0165CE9EB3C57B0BFDBD326F26036191B753A7D (Main_t7F967EE4D57213963EC2DB4BD709C31F5BC93B0E * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// public double feels_like { get; set; }
		double L_0 = ___value0;
		__this->set_U3Cfeels_likeU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Double ResposWeather/Main::get_temp_min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Main_get_temp_min_m65005CFF58F919421351F3AE2888A64DAC630BC8 (Main_t7F967EE4D57213963EC2DB4BD709C31F5BC93B0E * __this, const RuntimeMethod* method)
{
	{
		// public double temp_min { get; set; }
		double L_0 = __this->get_U3Ctemp_minU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void ResposWeather/Main::set_temp_min(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_set_temp_min_m2EE3CE43E14D86EBE9CDB80E9422F4549CC072CD (Main_t7F967EE4D57213963EC2DB4BD709C31F5BC93B0E * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// public double temp_min { get; set; }
		double L_0 = ___value0;
		__this->set_U3Ctemp_minU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Double ResposWeather/Main::get_temp_max()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Main_get_temp_max_mE5DE162D9C1DACD798D5FD7197F7183523DEA1B7 (Main_t7F967EE4D57213963EC2DB4BD709C31F5BC93B0E * __this, const RuntimeMethod* method)
{
	{
		// public double temp_max { get; set; }
		double L_0 = __this->get_U3Ctemp_maxU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void ResposWeather/Main::set_temp_max(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_set_temp_max_m8A256678CE31FDE140EF7E75401C99839B33B839 (Main_t7F967EE4D57213963EC2DB4BD709C31F5BC93B0E * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// public double temp_max { get; set; }
		double L_0 = ___value0;
		__this->set_U3Ctemp_maxU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 ResposWeather/Main::get_pressure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Main_get_pressure_mCA9291C48BD4020B90AF63A477B512B0FEBA9018 (Main_t7F967EE4D57213963EC2DB4BD709C31F5BC93B0E * __this, const RuntimeMethod* method)
{
	{
		// public int pressure { get; set; }
		int32_t L_0 = __this->get_U3CpressureU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void ResposWeather/Main::set_pressure(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_set_pressure_m43F080FBEEFFFD39B5EFBCB73E0E028020B9875D (Main_t7F967EE4D57213963EC2DB4BD709C31F5BC93B0E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int pressure { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CpressureU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int32 ResposWeather/Main::get_humidity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Main_get_humidity_mC13C4C319AF9FA618214DA547D19739EF32495EC (Main_t7F967EE4D57213963EC2DB4BD709C31F5BC93B0E * __this, const RuntimeMethod* method)
{
	{
		// public int humidity { get; set; }
		int32_t L_0 = __this->get_U3ChumidityU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void ResposWeather/Main::set_humidity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_set_humidity_m46F43067146C5F66CB8169123AEC5A620D03718C (Main_t7F967EE4D57213963EC2DB4BD709C31F5BC93B0E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int humidity { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3ChumidityU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void ResposWeather/Main::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main__ctor_mA435A1FA1C577396AC6EE39C720B72C4316081FA (Main_t7F967EE4D57213963EC2DB4BD709C31F5BC93B0E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ResposWeather/Coord ResposWeather/Root::get_coord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coord_t327D69B3A98A66AF89AE0D823C4FC094097B9FA8 * Root_get_coord_m404BFF35DABE37291B93010650CBFC2A177811FD (Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC * __this, const RuntimeMethod* method)
{
	{
		// public Coord coord { get; set; }
		Coord_t327D69B3A98A66AF89AE0D823C4FC094097B9FA8 * L_0 = __this->get_U3CcoordU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void ResposWeather/Root::set_coord(ResposWeather/Coord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Root_set_coord_mF2ECD8ED2A860285F44BF6E9BD38EEE0DF243A4A (Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC * __this, Coord_t327D69B3A98A66AF89AE0D823C4FC094097B9FA8 * ___value0, const RuntimeMethod* method)
{
	{
		// public Coord coord { get; set; }
		Coord_t327D69B3A98A66AF89AE0D823C4FC094097B9FA8 * L_0 = ___value0;
		__this->set_U3CcoordU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<ResposWeather/Weather> ResposWeather/Root::get_weather()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t774C79438C4B75766B7464E65F132BA08F0BD74A * Root_get_weather_m10825CDECA7FD44B068A618C15623FBF23F4494E (Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC * __this, const RuntimeMethod* method)
{
	{
		// public List<Weather> weather { get; set; }
		List_1_t774C79438C4B75766B7464E65F132BA08F0BD74A * L_0 = __this->get_U3CweatherU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void ResposWeather/Root::set_weather(System.Collections.Generic.List`1<ResposWeather/Weather>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Root_set_weather_mF3311BA3A92068DFEA795BD65D8CB6E07AB7EC39 (Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC * __this, List_1_t774C79438C4B75766B7464E65F132BA08F0BD74A * ___value0, const RuntimeMethod* method)
{
	{
		// public List<Weather> weather { get; set; }
		List_1_t774C79438C4B75766B7464E65F132BA08F0BD74A * L_0 = ___value0;
		__this->set_U3CweatherU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String ResposWeather/Root::get_base()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Root_get_base_m53AC8208E11422BE4E4DED32664D718F29E191B1 (Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC * __this, const RuntimeMethod* method)
{
	{
		// public string @base { get; set; }
		String_t* L_0 = __this->get_U3CbaseU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void ResposWeather/Root::set_base(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Root_set_base_mD5F97E9752EDD7C3CEED20783AF22E22AC361B25 (Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string @base { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CbaseU3Ek__BackingField_2(L_0);
		return;
	}
}
// ResposWeather/Main ResposWeather/Root::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Main_t7F967EE4D57213963EC2DB4BD709C31F5BC93B0E * Root_get_main_m22CCEADF2A8CC4AE8F3D457D1C7C731CC77AC793 (Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC * __this, const RuntimeMethod* method)
{
	{
		// public Main main { get; set; }
		Main_t7F967EE4D57213963EC2DB4BD709C31F5BC93B0E * L_0 = __this->get_U3CmainU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void ResposWeather/Root::set_main(ResposWeather/Main)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Root_set_main_mA589E22D2FA5D9F996BC5E1548BF04A1F102B69F (Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC * __this, Main_t7F967EE4D57213963EC2DB4BD709C31F5BC93B0E * ___value0, const RuntimeMethod* method)
{
	{
		// public Main main { get; set; }
		Main_t7F967EE4D57213963EC2DB4BD709C31F5BC93B0E * L_0 = ___value0;
		__this->set_U3CmainU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 ResposWeather/Root::get_visibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Root_get_visibility_m899CE40023E41E98F795EA5D1E3F97A97DA1057A (Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC * __this, const RuntimeMethod* method)
{
	{
		// public int visibility { get; set; }
		int32_t L_0 = __this->get_U3CvisibilityU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void ResposWeather/Root::set_visibility(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Root_set_visibility_m9822710C542BFB92D29D517A3B4C606787351C91 (Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int visibility { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CvisibilityU3Ek__BackingField_4(L_0);
		return;
	}
}
// ResposWeather/Wind ResposWeather/Root::get_wind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Wind_t39FDA91D941BFD913D074304D03C907489ED6334 * Root_get_wind_mE1171F62D1955CB8F5B9A843DF45EA5042C81AFC (Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC * __this, const RuntimeMethod* method)
{
	{
		// public Wind wind { get; set; }
		Wind_t39FDA91D941BFD913D074304D03C907489ED6334 * L_0 = __this->get_U3CwindU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void ResposWeather/Root::set_wind(ResposWeather/Wind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Root_set_wind_m68D18B93B7E47B64F67DD4D7284A13321C2B584F (Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC * __this, Wind_t39FDA91D941BFD913D074304D03C907489ED6334 * ___value0, const RuntimeMethod* method)
{
	{
		// public Wind wind { get; set; }
		Wind_t39FDA91D941BFD913D074304D03C907489ED6334 * L_0 = ___value0;
		__this->set_U3CwindU3Ek__BackingField_5(L_0);
		return;
	}
}
// ResposWeather/Clouds ResposWeather/Root::get_clouds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Clouds_t7DAE7314B38FF4F1C2BB162D9FB52CE7128D300A * Root_get_clouds_m66F7FD9735EC7E146099ECA9CD79196ADEA9E28C (Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC * __this, const RuntimeMethod* method)
{
	{
		// public Clouds clouds { get; set; }
		Clouds_t7DAE7314B38FF4F1C2BB162D9FB52CE7128D300A * L_0 = __this->get_U3CcloudsU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void ResposWeather/Root::set_clouds(ResposWeather/Clouds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Root_set_clouds_m3A0AD8D53C4949B44B158C87F32E3670DE0AC134 (Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC * __this, Clouds_t7DAE7314B38FF4F1C2BB162D9FB52CE7128D300A * ___value0, const RuntimeMethod* method)
{
	{
		// public Clouds clouds { get; set; }
		Clouds_t7DAE7314B38FF4F1C2BB162D9FB52CE7128D300A * L_0 = ___value0;
		__this->set_U3CcloudsU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Int32 ResposWeather/Root::get_dt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Root_get_dt_m4E6038FDA97DEC6C6D21E5B39C16682A0CEDF359 (Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC * __this, const RuntimeMethod* method)
{
	{
		// public int dt { get; set; }
		int32_t L_0 = __this->get_U3CdtU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void ResposWeather/Root::set_dt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Root_set_dt_m9F06A6E9C7E383510A8B340749A86E14F711C5C9 (Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int dt { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CdtU3Ek__BackingField_7(L_0);
		return;
	}
}
// ResposWeather/Sys ResposWeather/Root::get_sys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sys_t564A056DB449365FEFEEB84F10D06C20124F7D60 * Root_get_sys_m3270C0EA87BFB662B233D288E25C33179B7B53E7 (Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC * __this, const RuntimeMethod* method)
{
	{
		// public Sys sys { get; set; }
		Sys_t564A056DB449365FEFEEB84F10D06C20124F7D60 * L_0 = __this->get_U3CsysU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void ResposWeather/Root::set_sys(ResposWeather/Sys)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Root_set_sys_m940857F3E601304C1AA02B458588F21A05751260 (Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC * __this, Sys_t564A056DB449365FEFEEB84F10D06C20124F7D60 * ___value0, const RuntimeMethod* method)
{
	{
		// public Sys sys { get; set; }
		Sys_t564A056DB449365FEFEEB84F10D06C20124F7D60 * L_0 = ___value0;
		__this->set_U3CsysU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Int32 ResposWeather/Root::get_timezone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Root_get_timezone_mE834A9D78DF6D1823070907C60D3683FACF554BE (Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC * __this, const RuntimeMethod* method)
{
	{
		// public int timezone { get; set; }
		int32_t L_0 = __this->get_U3CtimezoneU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void ResposWeather/Root::set_timezone(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Root_set_timezone_m67BA705772149EB65BD2DD5B08AA7BE0F2FB59E2 (Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int timezone { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CtimezoneU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Int32 ResposWeather/Root::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Root_get_id_m2015C2B2783C37C3480A85A24FBFE9B33C4E1494 (Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC * __this, const RuntimeMethod* method)
{
	{
		// public int id { get; set; }
		int32_t L_0 = __this->get_U3CidU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void ResposWeather/Root::set_id(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Root_set_id_m608FF89400E6A90609156418B260406E200B3B60 (Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int id { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.String ResposWeather/Root::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Root_get_name_m6A2D438A8C4720674A7D175175BDD36777AD170A (Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC * __this, const RuntimeMethod* method)
{
	{
		// public string name { get; set; }
		String_t* L_0 = __this->get_U3CnameU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void ResposWeather/Root::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Root_set_name_m46F5C4FDFB8E0D67F42692C2591641FECCC8C78B (Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string name { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Int32 ResposWeather/Root::get_cod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Root_get_cod_m24695A054FBAE5D7518B55F062F7D22AC6BD9531 (Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC * __this, const RuntimeMethod* method)
{
	{
		// public int cod { get; set; }
		int32_t L_0 = __this->get_U3CcodU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void ResposWeather/Root::set_cod(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Root_set_cod_m3C06EE46E9A34E38725AD7F5729FEC7C93DCDC01 (Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int cod { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CcodU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.Void ResposWeather/Root::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Root__ctor_m3569445F5E2112756C46E14E10E8BE3CE807390A (Root_t85511BB38B05C22424B9C1871CA3ECDDCE6CE6BC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 ResposWeather/Sys::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sys_get_type_m503EC5B95AB4CDC7B2683749E2A299ECB72B4DD5 (Sys_t564A056DB449365FEFEEB84F10D06C20124F7D60 * __this, const RuntimeMethod* method)
{
	{
		// public int type { get; set; }
		int32_t L_0 = __this->get_U3CtypeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void ResposWeather/Sys::set_type(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sys_set_type_mAC05F74CFD94DC43438B37594F5B3A2DAE681881 (Sys_t564A056DB449365FEFEEB84F10D06C20124F7D60 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int type { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CtypeU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 ResposWeather/Sys::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sys_get_id_m480D8083F5025D792358CEDB9A83C4E54CD160DF (Sys_t564A056DB449365FEFEEB84F10D06C20124F7D60 * __this, const RuntimeMethod* method)
{
	{
		// public int id { get; set; }
		int32_t L_0 = __this->get_U3CidU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void ResposWeather/Sys::set_id(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sys_set_id_mE692CA43A10E4B47528A5677EC8A6CC7A76E0969 (Sys_t564A056DB449365FEFEEB84F10D06C20124F7D60 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int id { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Double ResposWeather/Sys::get_message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Sys_get_message_m77FDCA10D5E645B6CE82A1241B9133C322C381C0 (Sys_t564A056DB449365FEFEEB84F10D06C20124F7D60 * __this, const RuntimeMethod* method)
{
	{
		// public double message { get; set; }
		double L_0 = __this->get_U3CmessageU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void ResposWeather/Sys::set_message(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sys_set_message_m7B19BC926EFFEC73E8B0AFB275EAD7BA321E5C20 (Sys_t564A056DB449365FEFEEB84F10D06C20124F7D60 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// public double message { get; set; }
		double L_0 = ___value0;
		__this->set_U3CmessageU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String ResposWeather/Sys::get_country()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Sys_get_country_m319A31AD80A4ADC4D910296310B3A6D100FA6EB2 (Sys_t564A056DB449365FEFEEB84F10D06C20124F7D60 * __this, const RuntimeMethod* method)
{
	{
		// public string country { get; set; }
		String_t* L_0 = __this->get_U3CcountryU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void ResposWeather/Sys::set_country(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sys_set_country_m042A643056EB927F69BDBA5152694A379A1C5004 (Sys_t564A056DB449365FEFEEB84F10D06C20124F7D60 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string country { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CcountryU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 ResposWeather/Sys::get_sunrise()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sys_get_sunrise_mCA724C1A4B500BD75396D7D57ADFF19AC29C09A5 (Sys_t564A056DB449365FEFEEB84F10D06C20124F7D60 * __this, const RuntimeMethod* method)
{
	{
		// public int sunrise { get; set; }
		int32_t L_0 = __this->get_U3CsunriseU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void ResposWeather/Sys::set_sunrise(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sys_set_sunrise_m6919DA627F5FD413B7937A583C7FACA9925B9E11 (Sys_t564A056DB449365FEFEEB84F10D06C20124F7D60 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int sunrise { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CsunriseU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int32 ResposWeather/Sys::get_sunset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sys_get_sunset_m7D587DDEE4B4F9277DADAD730F78A1FFC6E24523 (Sys_t564A056DB449365FEFEEB84F10D06C20124F7D60 * __this, const RuntimeMethod* method)
{
	{
		// public int sunset { get; set; }
		int32_t L_0 = __this->get_U3CsunsetU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void ResposWeather/Sys::set_sunset(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sys_set_sunset_m0FCF7A777D6E38CE4BF3F69D18D169AE79B203DF (Sys_t564A056DB449365FEFEEB84F10D06C20124F7D60 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int sunset { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CsunsetU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void ResposWeather/Sys::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sys__ctor_m093DFE1DC21840C60EFF0DBBA5043285F4CB7CA5 (Sys_t564A056DB449365FEFEEB84F10D06C20124F7D60 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 ResposWeather/Weather::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Weather_get_id_m040FAE5648FF2C244B02FD7156C7E3685AFA6DAF (Weather_t8395B1725DA8287B2A3602260F265B80BEDCB649 * __this, const RuntimeMethod* method)
{
	{
		// public int id { get; set; }
		int32_t L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void ResposWeather/Weather::set_id(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weather_set_id_m2FDC5BC68D4896496C6F4659DD737E2D0B08BAFC (Weather_t8395B1725DA8287B2A3602260F265B80BEDCB649 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int id { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String ResposWeather/Weather::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Weather_get_main_m527D4C2CF42095349484CEE09DFD44958B0734C6 (Weather_t8395B1725DA8287B2A3602260F265B80BEDCB649 * __this, const RuntimeMethod* method)
{
	{
		// public string main { get; set; }
		String_t* L_0 = __this->get_U3CmainU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void ResposWeather/Weather::set_main(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weather_set_main_m4278F011CF421F13A5A7C4CC92E5914E456E7B48 (Weather_t8395B1725DA8287B2A3602260F265B80BEDCB649 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string main { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CmainU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String ResposWeather/Weather::get_description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Weather_get_description_m39106724C28D05812C2B8902905D4A0E14D2373A (Weather_t8395B1725DA8287B2A3602260F265B80BEDCB649 * __this, const RuntimeMethod* method)
{
	{
		// public string description { get; set; }
		String_t* L_0 = __this->get_U3CdescriptionU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void ResposWeather/Weather::set_description(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weather_set_description_m4847E87D9702F7AB857770E857E757537206113D (Weather_t8395B1725DA8287B2A3602260F265B80BEDCB649 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string description { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CdescriptionU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String ResposWeather/Weather::get_icon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Weather_get_icon_mD09F01BC34FB342DFCC8A3D798225CE5C6A9C6A8 (Weather_t8395B1725DA8287B2A3602260F265B80BEDCB649 * __this, const RuntimeMethod* method)
{
	{
		// public string icon { get; set; }
		String_t* L_0 = __this->get_U3CiconU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void ResposWeather/Weather::set_icon(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weather_set_icon_mBC98CB628C1D085A0716B97B6C3CB1E1A7518162 (Weather_t8395B1725DA8287B2A3602260F265B80BEDCB649 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string icon { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CiconU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void ResposWeather/Weather::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weather__ctor_mD18A9FD5C353BF7613649F9A8E998209B4B3C769 (Weather_t8395B1725DA8287B2A3602260F265B80BEDCB649 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Double ResposWeather/Wind::get_speed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Wind_get_speed_m88E575FBCEBCFCF3F9678BB422B5E9D6F6149AAF (Wind_t39FDA91D941BFD913D074304D03C907489ED6334 * __this, const RuntimeMethod* method)
{
	{
		// public double speed { get; set; }
		double L_0 = __this->get_U3CspeedU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void ResposWeather/Wind::set_speed(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wind_set_speed_mE0E4042047B573465EC3B2A906961B0E4CD88BE1 (Wind_t39FDA91D941BFD913D074304D03C907489ED6334 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// public double speed { get; set; }
		double L_0 = ___value0;
		__this->set_U3CspeedU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 ResposWeather/Wind::get_deg()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Wind_get_deg_mCD58C539146A1A6AC9BC14C288241B59B96A48D3 (Wind_t39FDA91D941BFD913D074304D03C907489ED6334 * __this, const RuntimeMethod* method)
{
	{
		// public int deg { get; set; }
		int32_t L_0 = __this->get_U3CdegU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void ResposWeather/Wind::set_deg(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wind_set_deg_m21662FDFE91B24B6BE2914DA44FD9C9DEEEE04FA (Wind_t39FDA91D941BFD913D074304D03C907489ED6334 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int deg { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CdegU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void ResposWeather/Wind::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wind__ctor_mFB9641C5EDC8A805BB6C6E5247B92E771FCE7821 (Wind_t39FDA91D941BFD913D074304D03C907489ED6334 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Test/Root::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Root__ctor_m731E1DC1111CB333461F1D33F1D74FA259906CC1 (Root_t9023D5FD4704C6B8D12E0FAB93277288A86EBA21 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WeatherRequest/<TestJson>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTestJsonU3Ed__2__ctor_mC433A3D2F07074FCDE49FDE8DFE7C09802BABCF3 (U3CTestJsonU3Ed__2_t35860833CDAEE846BC940352E6837E64BFAA9284 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void WeatherRequest/<TestJson>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTestJsonU3Ed__2_System_IDisposable_Dispose_m1642784AFDD3D62E159A4FB9E9FD17FA4603F4C5 (U3CTestJsonU3Ed__2_t35860833CDAEE846BC940352E6837E64BFAA9284 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean WeatherRequest/<TestJson>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTestJsonU3Ed__2_MoveNext_mB3BA45411D85665DA4117335E0A15DBCD455EE3B (U3CTestJsonU3Ed__2_t35860833CDAEE846BC940352E6837E64BFAA9284 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisRoot_t9023D5FD4704C6B8D12E0FAB93277288A86EBA21_mBAB79FAE1F8A5B181AA06A58CC710E95CC15C16D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WeatherRequest_t239B2216025DFDE4ECF3A8FC584B8AB2A68F9814 * V_1 = NULL;
	Root_t9023D5FD4704C6B8D12E0FAB93277288A86EBA21 * V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WeatherRequest_t239B2216025DFDE4ECF3A8FC584B8AB2A68F9814 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// UnityWebRequest rec = UnityWebRequest.Get(url);
		WeatherRequest_t239B2216025DFDE4ECF3A8FC584B8AB2A68F9814 * L_4 = V_1;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_url_4();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_6;
		L_6 = UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A(L_5, /*hidden argument*/NULL);
		__this->set_U3CrecU3E5__2_3(L_6);
		// yield return rec.SendWebRequest();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_7 = __this->get_U3CrecU3E5__2_3();
		NullCheck(L_7);
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_8;
		L_8 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_7, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_8);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0049:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (rec.isNetworkError || rec.isHttpError)
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_9 = __this->get_U3CrecU3E5__2_3();
		NullCheck(L_9);
		bool L_10;
		L_10 = UnityWebRequest_get_isNetworkError_m0126D38DA9B39159CB12F8DE0C3962A4BEEE5C03(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_006a;
		}
	}
	{
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_11 = __this->get_U3CrecU3E5__2_3();
		NullCheck(L_11);
		bool L_12;
		L_12 = UnityWebRequest_get_isHttpError_m23ADCBE1CF082A940EF6AA75A15051583228B616(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0076;
		}
	}

IL_006a:
	{
		// Debug.Log("1");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, /*hidden argument*/NULL);
		// }
		goto IL_00a8;
	}

IL_0076:
	{
		// Test.Root weather = JsonUtility.FromJson<Test.Root>(rec.downloadHandler.text);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_13 = __this->get_U3CrecU3E5__2_3();
		NullCheck(L_13);
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_14;
		L_14 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A(L_14, /*hidden argument*/NULL);
		Root_t9023D5FD4704C6B8D12E0FAB93277288A86EBA21 * L_16;
		L_16 = JsonUtility_FromJson_TisRoot_t9023D5FD4704C6B8D12E0FAB93277288A86EBA21_mBAB79FAE1F8A5B181AA06A58CC710E95CC15C16D(L_15, /*hidden argument*/JsonUtility_FromJson_TisRoot_t9023D5FD4704C6B8D12E0FAB93277288A86EBA21_mBAB79FAE1F8A5B181AA06A58CC710E95CC15C16D_RuntimeMethod_var);
		V_2 = L_16;
		// temp.text = weather.country;
		WeatherRequest_t239B2216025DFDE4ECF3A8FC584B8AB2A68F9814 * L_17 = V_1;
		NullCheck(L_17);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_18 = L_17->get_temp_5();
		Root_t9023D5FD4704C6B8D12E0FAB93277288A86EBA21 * L_19 = V_2;
		NullCheck(L_19);
		String_t* L_20 = L_19->get_country_1();
		NullCheck(L_18);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, L_20);
		// Debug.Log(weather.country);
		Root_t9023D5FD4704C6B8D12E0FAB93277288A86EBA21 * L_21 = V_2;
		NullCheck(L_21);
		String_t* L_22 = L_21->get_country_1();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_22, /*hidden argument*/NULL);
	}

IL_00a8:
	{
		// }
		return (bool)0;
	}
}
// System.Object WeatherRequest/<TestJson>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTestJsonU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4512E0153A974175EAC7917B586C1C7C8EC14AFB (U3CTestJsonU3Ed__2_t35860833CDAEE846BC940352E6837E64BFAA9284 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void WeatherRequest/<TestJson>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTestJsonU3Ed__2_System_Collections_IEnumerator_Reset_mA3A2FACA9564C3F3829DFA6390FDBAE6209C4835 (U3CTestJsonU3Ed__2_t35860833CDAEE846BC940352E6837E64BFAA9284 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTestJsonU3Ed__2_System_Collections_IEnumerator_Reset_mA3A2FACA9564C3F3829DFA6390FDBAE6209C4835_RuntimeMethod_var)));
	}
}
// System.Object WeatherRequest/<TestJson>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTestJsonU3Ed__2_System_Collections_IEnumerator_get_Current_m206163A4782B2C86C69E693AF6CA5FEBE40E4BD8 (U3CTestJsonU3Ed__2_t35860833CDAEE846BC940352E6837E64BFAA9284 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebRec/<GetDataCoroutine>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDataCoroutineU3Ed__7__ctor_m886E6D93AFE4FC2FF3AFD69B536D32139E813550 (U3CGetDataCoroutineU3Ed__7_t89F45FF117149FD57F06486198C50A74E853E0EF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void WebRec/<GetDataCoroutine>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDataCoroutineU3Ed__7_System_IDisposable_Dispose_m925A0A73A040CD212CE1135060694CE2584E0B5F (U3CGetDataCoroutineU3Ed__7_t89F45FF117149FD57F06486198C50A74E853E0EF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean WebRec/<GetDataCoroutine>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetDataCoroutineU3Ed__7_MoveNext_m3DDE0C2B80CA985AE1AFFAA10CACC5C16CDE1A05 (U3CGetDataCoroutineU3Ed__7_t89F45FF117149FD57F06486198C50A74E853E0EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetBundle_LoadAsset_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m63A1BA42E676CD4031EDA86CF3BFB9811E7A67B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BBACF750288F79E7BBD3BA07C3968948FA6AB7F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral671C1DF09673D5A10E0257535A26C5752938E413);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7FC20D01D11E8D793D9DCF4138B825F64D86676);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC694605EDB4754DFB110F22B720D5DA5A045094A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebRec_t29F0736489F17B673ED3C779F877C39FFA79DBE6 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WebRec_t29F0736489F17B673ED3C779F877C39FFA79DBE6 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_007e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// outputArea.text = "Loding...";
		WebRec_t29F0736489F17B673ED3C779F877C39FFA79DBE6 * L_4 = V_1;
		NullCheck(L_4);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_5 = L_4->get_outputArea_4();
		NullCheck(L_5);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_5, _stringLiteralB7FC20D01D11E8D793D9DCF4138B825F64D86676, /*hidden argument*/NULL);
		// isDownload = true;
		WebRec_t29F0736489F17B673ED3C779F877C39FFA79DBE6 * L_6 = V_1;
		NullCheck(L_6);
		L_6->set_isDownload_6((bool)1);
		// UnityWebRequest rec = UnityWebRequestAssetBundle.GetAssetBundle("https://cdn72733121.blazingcdn.net/medias/Nb8BY0jbUH3hvKxN.bundle");
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_7;
		L_7 = UnityWebRequestAssetBundle_GetAssetBundle_m59D1CAF6EBF34A45A33EE4627AFED7109FF99B26(_stringLiteral3BBACF750288F79E7BBD3BA07C3968948FA6AB7F, /*hidden argument*/NULL);
		__this->set_U3CrecU3E5__2_3(L_7);
		// Progres.SetActive(true);
		WebRec_t29F0736489F17B673ED3C779F877C39FFA79DBE6 * L_8 = V_1;
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = L_8->get_Progres_5();
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)1, /*hidden argument*/NULL);
		// StartCoroutine(ShowDownloadProgress(rec));
		WebRec_t29F0736489F17B673ED3C779F877C39FFA79DBE6 * L_10 = V_1;
		WebRec_t29F0736489F17B673ED3C779F877C39FFA79DBE6 * L_11 = V_1;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_12 = __this->get_U3CrecU3E5__2_3();
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = WebRec_ShowDownloadProgress_m8C30CF9C09A4FD13C40654992A3DB014363E1A18(L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_14;
		L_14 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_10, L_13, /*hidden argument*/NULL);
		// yield return rec.SendWebRequest();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_15 = __this->get_U3CrecU3E5__2_3();
		NullCheck(L_15);
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_16;
		L_16 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_15, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_16);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_007e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (rec.result != UnityWebRequest.Result.Success)
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_17 = __this->get_U3CrecU3E5__2_3();
		NullCheck(L_17);
		int32_t L_18;
		L_18 = UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6(L_17, /*hidden argument*/NULL);
		if ((((int32_t)L_18) == ((int32_t)1)))
		{
			goto IL_00ac;
		}
	}
	{
		// Debug.Log(rec.error);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_19 = __this->get_U3CrecU3E5__2_3();
		NullCheck(L_19);
		String_t* L_20;
		L_20 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_20, /*hidden argument*/NULL);
		// isDownload = false;
		WebRec_t29F0736489F17B673ED3C779F877C39FFA79DBE6 * L_21 = V_1;
		NullCheck(L_21);
		L_21->set_isDownload_6((bool)0);
		// }
		goto IL_00e5;
	}

IL_00ac:
	{
		// AssetBundle bundl = DownloadHandlerAssetBundle.GetContent(rec);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_22 = __this->get_U3CrecU3E5__2_3();
		AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * L_23;
		L_23 = DownloadHandlerAssetBundle_GetContent_mB1D51000A1B402A8045228FC6399315D82916463(L_22, /*hidden argument*/NULL);
		// outputArea.text = "Loding Complite";
		WebRec_t29F0736489F17B673ED3C779F877C39FFA79DBE6 * L_24 = V_1;
		NullCheck(L_24);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_25 = L_24->get_outputArea_4();
		NullCheck(L_25);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_25, _stringLiteral671C1DF09673D5A10E0257535A26C5752938E413, /*hidden argument*/NULL);
		// var prefab = bundl.LoadAsset<GameObject>("sahnil");
		AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * L_26 = L_23;
		NullCheck(L_26);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
		L_27 = AssetBundle_LoadAsset_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m63A1BA42E676CD4031EDA86CF3BFB9811E7A67B5(L_26, _stringLiteralC694605EDB4754DFB110F22B720D5DA5A045094A, /*hidden argument*/AssetBundle_LoadAsset_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m63A1BA42E676CD4031EDA86CF3BFB9811E7A67B5_RuntimeMethod_var);
		// Instantiate(prefab);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28;
		L_28 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_27, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		// isDownload = false;
		WebRec_t29F0736489F17B673ED3C779F877C39FFA79DBE6 * L_29 = V_1;
		NullCheck(L_29);
		L_29->set_isDownload_6((bool)0);
		// bundl.Unload(false);
		NullCheck(L_26);
		AssetBundle_Unload_m0DEBACB284F6CECA8DF21486D1BBE1189F6A5D66(L_26, (bool)0, /*hidden argument*/NULL);
	}

IL_00e5:
	{
		// }
		return (bool)0;
	}
}
// System.Object WebRec/<GetDataCoroutine>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetDataCoroutineU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF397894D420731277D1DBC09E9FBC1E391C8B12C (U3CGetDataCoroutineU3Ed__7_t89F45FF117149FD57F06486198C50A74E853E0EF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void WebRec/<GetDataCoroutine>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDataCoroutineU3Ed__7_System_Collections_IEnumerator_Reset_m818C018F548889B11D07A7067A45F447C9A597E8 (U3CGetDataCoroutineU3Ed__7_t89F45FF117149FD57F06486198C50A74E853E0EF * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetDataCoroutineU3Ed__7_System_Collections_IEnumerator_Reset_m818C018F548889B11D07A7067A45F447C9A597E8_RuntimeMethod_var)));
	}
}
// System.Object WebRec/<GetDataCoroutine>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetDataCoroutineU3Ed__7_System_Collections_IEnumerator_get_Current_m3F7C67A6FC363AD324E7215474C1BAEBD096AB20 (U3CGetDataCoroutineU3Ed__7_t89F45FF117149FD57F06486198C50A74E853E0EF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebRec/<ShowDownloadProgress>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowDownloadProgressU3Ed__8__ctor_m4354E5F15C156BF6FFC02841D329FDA1E823D3FA (U3CShowDownloadProgressU3Ed__8_t441A453F57AACFFD32E89B9B6CAC8D6FE4E915EB * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void WebRec/<ShowDownloadProgress>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowDownloadProgressU3Ed__8_System_IDisposable_Dispose_mCBA482141A1A821D6AD2D47CF1683ADE9DB4F3FF (U3CShowDownloadProgressU3Ed__8_t441A453F57AACFFD32E89B9B6CAC8D6FE4E915EB * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean WebRec/<ShowDownloadProgress>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShowDownloadProgressU3Ed__8_MoveNext_m33552F9328513C9F5CAF7645E0639E694471E394 (U3CShowDownloadProgressU3Ed__8_t441A453F57AACFFD32E89B9B6CAC8D6FE4E915EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mCF2C6D0E8D0B7E12C53CF51A613D9A6545FC05F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebRec_t29F0736489F17B673ED3C779F877C39FFA79DBE6 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WebRec_t29F0736489F17B673ED3C779F877C39FFA79DBE6 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0054;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_005b;
	}

IL_0020:
	{
		// Progres.GetComponent<Slider>().value = rec.downloadProgress;
		WebRec_t29F0736489F17B673ED3C779F877C39FFA79DBE6 * L_4 = V_1;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4->get_Progres_5();
		NullCheck(L_5);
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_6;
		L_6 = GameObject_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mCF2C6D0E8D0B7E12C53CF51A613D9A6545FC05F9(L_5, /*hidden argument*/GameObject_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mCF2C6D0E8D0B7E12C53CF51A613D9A6545FC05F9_RuntimeMethod_var);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_7 = __this->get_rec_3();
		NullCheck(L_7);
		float L_8;
		L_8 = UnityWebRequest_get_downloadProgress_m364504584506899F3E60F0D67017C290526D5636(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_6, L_8);
		// yield return new WaitForSeconds(.01f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_9 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_9, (0.00999999978f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_9);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0054:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_005b:
	{
		// while (!rec.isDone)
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_10 = __this->get_rec_3();
		NullCheck(L_10);
		bool L_11;
		L_11 = UnityWebRequest_get_isDone_mF8C92D10767B80877BCFE6D119CBE9090ACCDFBD(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0020;
		}
	}
	{
		// Progres.GetComponent<Slider>().value = 0;
		WebRec_t29F0736489F17B673ED3C779F877C39FFA79DBE6 * L_12 = V_1;
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = L_12->get_Progres_5();
		NullCheck(L_13);
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_14;
		L_14 = GameObject_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mCF2C6D0E8D0B7E12C53CF51A613D9A6545FC05F9(L_13, /*hidden argument*/GameObject_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mCF2C6D0E8D0B7E12C53CF51A613D9A6545FC05F9_RuntimeMethod_var);
		NullCheck(L_14);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_14, (0.0f));
		// Progres.SetActive(false);
		WebRec_t29F0736489F17B673ED3C779F877C39FFA79DBE6 * L_15 = V_1;
		NullCheck(L_15);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = L_15->get_Progres_5();
		NullCheck(L_16);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_16, (bool)0, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object WebRec/<ShowDownloadProgress>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShowDownloadProgressU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD9B8DE373856A87A844A375B112434976B4B85BE (U3CShowDownloadProgressU3Ed__8_t441A453F57AACFFD32E89B9B6CAC8D6FE4E915EB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void WebRec/<ShowDownloadProgress>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowDownloadProgressU3Ed__8_System_Collections_IEnumerator_Reset_m48AB56625779123D02ACE1FFC27A9C5237CA39DD (U3CShowDownloadProgressU3Ed__8_t441A453F57AACFFD32E89B9B6CAC8D6FE4E915EB * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShowDownloadProgressU3Ed__8_System_Collections_IEnumerator_Reset_m48AB56625779123D02ACE1FFC27A9C5237CA39DD_RuntimeMethod_var)));
	}
}
// System.Object WebRec/<ShowDownloadProgress>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShowDownloadProgressU3Ed__8_System_Collections_IEnumerator_get_Current_m0D231C5CBE390EDE3F41701FF77C181241C1D18C (U3CShowDownloadProgressU3Ed__8_t441A453F57AACFFD32E89B9B6CAC8D6FE4E915EB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E_inline (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method)
{
	{
		// return n;
		float L_0 = __this->get_n_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
