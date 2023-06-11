#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<System.Object,System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>
struct ARTrackableManager_5_t781ED5020888538CF6FC3405034BBF27F05FA2C2;
// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct ARTrackableManager_5_t1395957883D0FA3B96AA1B31F7D9D15573DA46F5;
// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>
struct Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F;
// System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage>
struct Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct Dictionary_2_t13B80190D7DD5A74B43A63EC63B97E079A0B2FC2;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct Dictionary_2_t96E118783FA125640B6CD73897A2FE2B787E0AB4;
// System.Func`2<System.IO.Stream,System.Threading.Tasks.Task>
struct Func_2_t378757FF082427448349A80CC63683B50DA787D3;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GameObject>
struct KeyCollection_tB57CC90FD7461471159C351E10C1C4C745284454;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>
struct List_1_tFA730335FF46512E4245B2F46892CA318B394FAE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem>
struct List_1_t447913E715E9E298A8BBACADFBAA1CB629A73DD1;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor>
struct List_1_tFAD70D497835B4EB99F6C04DFD87EA9406E796ED;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GameObject>
struct ValueCollection_tAA4B91D1FC6E3150E12FB777D5C1A8530004C5D1;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.GameObject>[]
struct EntryU5BU5D_tBC8769FFC7ECC10C2740A220C39736B63B151E29;
// UnityEngine.XR.ARFoundation.ARTrackedImage[]
struct ARTrackedImageU5BU5D_tD227987C766F9B880B8EF0E9ADF5918CDFB72367;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Net.WebHeaderCollection/RfcChar[]
struct RfcCharU5BU5D_t8D79A380C46398F9D1F442FDEE0A27F77B7D1B4C;
// NaverCrawler.APIExamSearchBlog
struct APIExamSearchBlog_tA25AFA606A34E51B1D0ED61CA1044D4C6D10E3B4;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// UnityEngine.XR.ARFoundation.ARTrackedImage
struct ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2;
// UnityEngine.XR.ARFoundation.ARTrackedImageManager
struct ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Net.CookieCollection
struct CookieCollection_tB62B610A8E70C48DC8854F3D27BA916AF21D6608;
// System.Net.CookieContainer
struct CookieContainer_t54CCEBC3470E5D0699BB17928C171D7AFCA7614E;
// CubeSelection
struct CubeSelection_tA5D9B7CC59A5430D569FCBC4D284168788B9B997;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Net.HeaderInfoTable
struct HeaderInfoTable_tD651971044220ED52EACB30E89A49178FA32D91F;
// System.Net.HttpContinueDelegate
struct HttpContinueDelegate_t174E5B124FF75DBAC627C6E41A0802A802EAE6D9;
// System.Net.HttpWebRequest
struct HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9;
// System.Net.HttpWebResponse
struct HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A;
// System.Net.ICredentials
struct ICredentials_t8FDA6AF64B852DA0631D4BE66962B20E51E230F0;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// System.Net.IWebProxy
struct IWebProxy_t3ECD2C773539B48B18734D61E87B685A9C93076D;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Mono.Net.Security.MobileTlsProvider
struct MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Mono.Security.Interface.MonoTlsSettings
struct MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0;
// MultipleImageTracker
struct MultipleImageTracker_tCA27473EFB7E44BE3A0ACB1B843EF6A889306E74;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PinchScale
struct PinchScale_t0BD289712D06636BB549038CD40C96E3F830FCBD;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Net.Cache.RequestCachePolicy
struct RequestCachePolicy_tF15C94C5E458478914D5EB17753294BD488B0550;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Net.ServerCertValidationCallback
struct ServerCertValidationCallback_tC7A568060163FC6810AF9817F26F986C78CFC27F;
// System.Net.ServicePoint
struct ServicePoint_t5DB5939994CAA6A0DF221C5F58D59D1A6131CE29;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Net.WebCompletionSource
struct WebCompletionSource_tA2A9E04ED689218A1B2FAFCFD8F358CE4CBD30C5;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8;
// System.Net.WebOperation
struct WebOperation_t32CC0FAFF5B575DB5E11E5C50A7D7542A70D74C9;
// System.Net.WebRequest
struct WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B;
// System.Net.WebRequestStream
struct WebRequestStream_t731AE4852452BAA73C240BDC7DCBA42ADAD2BAAB;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE;
// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem
struct XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB;
// UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary
struct XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42;
// spinX
struct spinX_tDE85640FFB29F71654CC78FB5F357B7DCEEB0DF4;
// spinY
struct spinY_tFC3024F90DC968F2F42239FC5EA01E599F062128;
// spinZ
struct spinZ_tED20AB8C4768AC85A4489C22587363716077749E;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
struct NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Net.TimerThread/Queue
struct Queue_t644DC21212BC432819522EDA395EB4562BE2CC47;
// System.Net.WebRequest/DesignerWebRequestCreate
struct DesignerWebRequestCreate_t75F62E4DEBF416E21EAF6FBB62E43ADB83A0753E;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpStatusCode_t530B6899270B44ED560C3872DB5F9698FB7D7374_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0239F5CE9ACC936215E92A7E0AB05CE58F9533E7;
IL2CPP_EXTERN_C String_t* _stringLiteral1AE348EAFA097AB898941EAFE912D711A407DA10;
IL2CPP_EXTERN_C String_t* _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94;
IL2CPP_EXTERN_C String_t* _stringLiteral4995CAE25C0196B39D440960318500B8EE1F5EF5;
IL2CPP_EXTERN_C String_t* _stringLiteral622E3BD19C29B4FDE9B29A6109148807BCEE1B27;
IL2CPP_EXTERN_C String_t* _stringLiteral624680CF43A758F7BA992C7A896E612BF23FA850;
IL2CPP_EXTERN_C String_t* _stringLiteral7641C083C5867355B221D22C0F592849D35C0122;
IL2CPP_EXTERN_C String_t* _stringLiteral93E3C70B75B56C1DAACBBB65CA9ADD4EDA481544;
IL2CPP_EXTERN_C String_t* _stringLiteral9FA02CAD9B26929B96C2EF62D9EFE6EA9D41C098;
IL2CPP_EXTERN_C String_t* _stringLiteralBF3D12C7E6B63BC518FC89186C83B758AB53F2A9;
IL2CPP_EXTERN_C String_t* _stringLiteralD8688947994CE3FCF8CBBAA8D4192DE08FC9009A;
IL2CPP_EXTERN_C String_t* _stringLiteralDDA9897DEA671AAFC0E89B732B77CD962BECFE34;
IL2CPP_EXTERN_C String_t* _stringLiteralE7F8FD6EBEBD6CB6CA56F9053DDA6CE526212614;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackableManager_5_get_trackables_m550D26D672377AA9685A9EFEE2D959525E51800B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4_m3C5338CF883CA97951B07D446FEA5FC76D1FB683_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mE5ED48EAB67073C645CD87B5E6ACA2E6BF7975AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m85AB837A51705B9DF96923F388345B9461B9882B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m5A8F8BCAC50C5D5AB2722BBD41A340E4F6E47586_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA99F1A3F439A030FC6CD2D5D1F45F86E52985736_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1F144FE9E0FC29EE4573EC9D30A7000179BF71AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MultipleImageTracker_OnTrakcedImageChanged_m8023CD21744B956480FFD8E47474E119188EE05A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCollection_1_GetEnumerator_m5032F80B739675088C08AC55F020A536A0724851_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCollection_1_get_count_m0AD877E10C80F187B55A2BC66780A27C8EACFD6C_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tBC8769FFC7ECC10C2740A220C39736B63B151E29* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tB57CC90FD7461471159C351E10C1C4C745284454* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tAA4B91D1FC6E3150E12FB777D5C1A8530004C5D1* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>
struct List_1_tFA730335FF46512E4245B2F46892CA318B394FAE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARTrackedImageU5BU5D_tD227987C766F9B880B8EF0E9ADF5918CDFB72367* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tFA730335FF46512E4245B2F46892CA318B394FAE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARTrackedImageU5BU5D_tD227987C766F9B880B8EF0E9ADF5918CDFB72367* ___s_emptyArray_5;
};

// NaverCrawler.APIExamSearchBlog
struct APIExamSearchBlog_tA25AFA606A34E51B1D0ED61CA1044D4C6D10E3B4  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC  : public RuntimeObject
{
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::_readOnly
	bool ____readOnly_0;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::_entriesArray
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____entriesArray_1;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::_keyComparer
	RuntimeObject* ____keyComparer_2;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_entriesTable
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____entriesTable_3;
	// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_nullKeyEntry
	NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* ____nullKeyEntry_4;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::_serializationInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____serializationInfo_5;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::_version
	int32_t ____version_6;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase::_syncRoot
	RuntimeObject* ____syncRoot_7;
};

struct NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_StaticFields
{
	// System.StringComparer System.Collections.Specialized.NameObjectCollectionBase::defaultComparer
	StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* ___defaultComparer_8;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARTrackedImage>
struct Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// UnityEngine.XR.ARFoundation.TrackableCollection`1<UnityEngine.XR.ARFoundation.ARTrackedImage>
struct TrackableCollection_1_tA2C9F7D20A5C25A17E7623BC171A9D4359876D2C 
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1::m_Trackables
	Dictionary_2_t13B80190D7DD5A74B43A63EC63B97E079A0B2FC2* ___m_Trackables_0;
};

// UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>
struct TrackableCollection_1_tFCC29DC30D1D7BF9DF5F84F8DF60BD67C7832EDB 
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1::m_Trackables
	Dictionary_2_t96E118783FA125640B6CD73897A2FE2B787E0AB4* ___m_Trackables_0;
};

// UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs
struct ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F 
{
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::<added>k__BackingField
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CaddedU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::<updated>k__BackingField
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CupdatedU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::<removed>k__BackingField
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CremovedU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs
struct ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F_marshaled_pinvoke
{
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CaddedU3Ek__BackingField_0;
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CupdatedU3Ek__BackingField_1;
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CremovedU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs
struct ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F_marshaled_com
{
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CaddedU3Ek__BackingField_0;
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CupdatedU3Ek__BackingField_1;
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CremovedU3Ek__BackingField_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7  : public NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC
{
	// System.String[] System.Collections.Specialized.NameValueCollection::_all
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____all_9;
	// System.String[] System.Collections.Specialized.NameValueCollection::_allKeys
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____allKeys_10;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.XR.ARSubsystems.SerializableGuid
struct SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.SerializableGuid::m_GuidLow
	uint64_t ___m_GuidLow_1;
	// System.UInt64 UnityEngine.XR.ARSubsystems.SerializableGuid::m_GuidHigh
	uint64_t ___m_GuidHigh_2;
};

struct SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_StaticFields
{
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.SerializableGuid::k_Empty
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___k_Empty_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___s_InvalidId_1;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Net.WebRequest
struct WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Net.Security.AuthenticationLevel System.Net.WebRequest::m_AuthenticationLevel
	int32_t ___m_AuthenticationLevel_4;
	// System.Security.Principal.TokenImpersonationLevel System.Net.WebRequest::m_ImpersonationLevel
	int32_t ___m_ImpersonationLevel_5;
};

struct WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B_StaticFields
{
	// System.Collections.ArrayList modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_PrefixList
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___s_PrefixList_1;
	// System.Object System.Net.WebRequest::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_2;
	// System.Net.TimerThread/Queue System.Net.WebRequest::s_DefaultTimerQueue
	Queue_t644DC21212BC432819522EDA395EB4562BE2CC47* ___s_DefaultTimerQueue_3;
	// System.Net.WebRequest/DesignerWebRequestCreate System.Net.WebRequest::webRequestCreate
	DesignerWebRequestCreate_t75F62E4DEBF416E21EAF6FBB62E43ADB83A0753E* ___webRequestCreate_6;
	// System.Net.IWebProxy modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_DefaultWebProxy
	RuntimeObject* ___s_DefaultWebProxy_7;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_DefaultWebProxyInitialized
	bool ___s_DefaultWebProxyInitialized_8;
};

// System.Net.WebResponse
struct WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Boolean System.Net.WebResponse::m_IsFromCache
	bool ___m_IsFromCache_1;
};

// System.Net.HttpWebRequest/AuthorizationState
struct AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32 
{
	// System.Net.HttpWebRequest System.Net.HttpWebRequest/AuthorizationState::request
	HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* ___request_0;
	// System.Boolean System.Net.HttpWebRequest/AuthorizationState::isProxy
	bool ___isProxy_1;
	// System.Boolean System.Net.HttpWebRequest/AuthorizationState::isCompleted
	bool ___isCompleted_2;
	// System.Net.HttpWebRequest/NtlmAuthState System.Net.HttpWebRequest/AuthorizationState::ntlm_auth_state
	int32_t ___ntlm_auth_state_3;
};
// Native definition for P/Invoke marshalling of System.Net.HttpWebRequest/AuthorizationState
struct AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32_marshaled_pinvoke
{
	HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* ___request_0;
	int32_t ___isProxy_1;
	int32_t ___isCompleted_2;
	int32_t ___ntlm_auth_state_3;
};
// Native definition for COM marshalling of System.Net.HttpWebRequest/AuthorizationState
struct AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32_marshaled_com
{
	HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* ___request_0;
	int32_t ___isProxy_1;
	int32_t ___isCompleted_2;
	int32_t ___ntlm_auth_state_3;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct KeyValuePair_2_tFAB38D07E7BCD97D01652C71C07ED66FFA2D4EA9 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct KeyValuePair_2_t53ED52B6CCF9EE67874B20217661A725F4B0AC33 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Net.HttpWebRequest
struct HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9  : public WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B
{
	// System.Uri System.Net.HttpWebRequest::requestUri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___requestUri_9;
	// System.Uri System.Net.HttpWebRequest::actualUri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___actualUri_10;
	// System.Boolean System.Net.HttpWebRequest::hostChanged
	bool ___hostChanged_11;
	// System.Boolean System.Net.HttpWebRequest::allowAutoRedirect
	bool ___allowAutoRedirect_12;
	// System.Boolean System.Net.HttpWebRequest::allowBuffering
	bool ___allowBuffering_13;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.HttpWebRequest::certificates
	X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___certificates_14;
	// System.String System.Net.HttpWebRequest::connectionGroup
	String_t* ___connectionGroup_15;
	// System.Boolean System.Net.HttpWebRequest::haveContentLength
	bool ___haveContentLength_16;
	// System.Int64 System.Net.HttpWebRequest::contentLength
	int64_t ___contentLength_17;
	// System.Net.HttpContinueDelegate System.Net.HttpWebRequest::continueDelegate
	HttpContinueDelegate_t174E5B124FF75DBAC627C6E41A0802A802EAE6D9* ___continueDelegate_18;
	// System.Net.CookieContainer System.Net.HttpWebRequest::cookieContainer
	CookieContainer_t54CCEBC3470E5D0699BB17928C171D7AFCA7614E* ___cookieContainer_19;
	// System.Net.ICredentials System.Net.HttpWebRequest::credentials
	RuntimeObject* ___credentials_20;
	// System.Boolean System.Net.HttpWebRequest::haveResponse
	bool ___haveResponse_21;
	// System.Boolean System.Net.HttpWebRequest::requestSent
	bool ___requestSent_22;
	// System.Net.WebHeaderCollection System.Net.HttpWebRequest::webHeaders
	WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8* ___webHeaders_23;
	// System.Boolean System.Net.HttpWebRequest::keepAlive
	bool ___keepAlive_24;
	// System.Int32 System.Net.HttpWebRequest::maxAutoRedirect
	int32_t ___maxAutoRedirect_25;
	// System.String System.Net.HttpWebRequest::mediaType
	String_t* ___mediaType_26;
	// System.String System.Net.HttpWebRequest::method
	String_t* ___method_27;
	// System.String System.Net.HttpWebRequest::initialMethod
	String_t* ___initialMethod_28;
	// System.Boolean System.Net.HttpWebRequest::pipelined
	bool ___pipelined_29;
	// System.Boolean System.Net.HttpWebRequest::preAuthenticate
	bool ___preAuthenticate_30;
	// System.Boolean System.Net.HttpWebRequest::usedPreAuth
	bool ___usedPreAuth_31;
	// System.Version System.Net.HttpWebRequest::version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_32;
	// System.Boolean System.Net.HttpWebRequest::force_version
	bool ___force_version_33;
	// System.Version System.Net.HttpWebRequest::actualVersion
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___actualVersion_34;
	// System.Net.IWebProxy System.Net.HttpWebRequest::proxy
	RuntimeObject* ___proxy_35;
	// System.Boolean System.Net.HttpWebRequest::sendChunked
	bool ___sendChunked_36;
	// System.Net.ServicePoint System.Net.HttpWebRequest::servicePoint
	ServicePoint_t5DB5939994CAA6A0DF221C5F58D59D1A6131CE29* ___servicePoint_37;
	// System.Int32 System.Net.HttpWebRequest::timeout
	int32_t ___timeout_38;
	// System.Int32 System.Net.HttpWebRequest::continueTimeout
	int32_t ___continueTimeout_39;
	// System.Net.WebRequestStream System.Net.HttpWebRequest::writeStream
	WebRequestStream_t731AE4852452BAA73C240BDC7DCBA42ADAD2BAAB* ___writeStream_40;
	// System.Net.HttpWebResponse System.Net.HttpWebRequest::webResponse
	HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* ___webResponse_41;
	// System.Net.WebCompletionSource System.Net.HttpWebRequest::responseTask
	WebCompletionSource_tA2A9E04ED689218A1B2FAFCFD8F358CE4CBD30C5* ___responseTask_42;
	// System.Net.WebOperation System.Net.HttpWebRequest::currentOperation
	WebOperation_t32CC0FAFF5B575DB5E11E5C50A7D7542A70D74C9* ___currentOperation_43;
	// System.Int32 System.Net.HttpWebRequest::aborted
	int32_t ___aborted_44;
	// System.Boolean System.Net.HttpWebRequest::gotRequestStream
	bool ___gotRequestStream_45;
	// System.Int32 System.Net.HttpWebRequest::redirects
	int32_t ___redirects_46;
	// System.Boolean System.Net.HttpWebRequest::expectContinue
	bool ___expectContinue_47;
	// System.Boolean System.Net.HttpWebRequest::getResponseCalled
	bool ___getResponseCalled_48;
	// System.Object System.Net.HttpWebRequest::locker
	RuntimeObject* ___locker_49;
	// System.Boolean System.Net.HttpWebRequest::finished_reading
	bool ___finished_reading_50;
	// System.Net.DecompressionMethods System.Net.HttpWebRequest::auto_decomp
	int32_t ___auto_decomp_51;
	// System.Int32 System.Net.HttpWebRequest::readWriteTimeout
	int32_t ___readWriteTimeout_55;
	// Mono.Net.Security.MobileTlsProvider System.Net.HttpWebRequest::tlsProvider
	MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017* ___tlsProvider_56;
	// Mono.Security.Interface.MonoTlsSettings System.Net.HttpWebRequest::tlsSettings
	MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* ___tlsSettings_57;
	// System.Net.ServerCertValidationCallback System.Net.HttpWebRequest::certValidationCallback
	ServerCertValidationCallback_tC7A568060163FC6810AF9817F26F986C78CFC27F* ___certValidationCallback_58;
	// System.Boolean System.Net.HttpWebRequest::hostHasPort
	bool ___hostHasPort_59;
	// System.Uri System.Net.HttpWebRequest::hostUri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___hostUri_60;
	// System.Net.HttpWebRequest/AuthorizationState System.Net.HttpWebRequest::auth_state
	AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32 ___auth_state_61;
	// System.Net.HttpWebRequest/AuthorizationState System.Net.HttpWebRequest::proxy_auth_state
	AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32 ___proxy_auth_state_62;
	// System.Func`2<System.IO.Stream,System.Threading.Tasks.Task> System.Net.HttpWebRequest::ResendContentFactory
	Func_2_t378757FF082427448349A80CC63683B50DA787D3* ___ResendContentFactory_63;
	// System.Boolean System.Net.HttpWebRequest::<ThrowOnError>k__BackingField
	bool ___U3CThrowOnErrorU3Ek__BackingField_64;
	// System.Boolean System.Net.HttpWebRequest::unsafe_auth_blah
	bool ___unsafe_auth_blah_65;
};

struct HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9_StaticFields
{
	// System.Int32 System.Net.HttpWebRequest::defaultMaxResponseHeadersLength
	int32_t ___defaultMaxResponseHeadersLength_52;
	// System.Int32 System.Net.HttpWebRequest::defaultMaximumErrorResponseLength
	int32_t ___defaultMaximumErrorResponseLength_53;
	// System.Net.Cache.RequestCachePolicy System.Net.HttpWebRequest::defaultCachePolicy
	RequestCachePolicy_tF15C94C5E458478914D5EB17753294BD488B0550* ___defaultCachePolicy_54;
};

// System.Net.HttpWebResponse
struct HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A  : public WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682
{
	// System.Uri System.Net.HttpWebResponse::uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri_2;
	// System.Net.WebHeaderCollection System.Net.HttpWebResponse::webHeaders
	WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8* ___webHeaders_3;
	// System.Net.CookieCollection System.Net.HttpWebResponse::cookieCollection
	CookieCollection_tB62B610A8E70C48DC8854F3D27BA916AF21D6608* ___cookieCollection_4;
	// System.String System.Net.HttpWebResponse::method
	String_t* ___method_5;
	// System.Version System.Net.HttpWebResponse::version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_6;
	// System.Net.HttpStatusCode System.Net.HttpWebResponse::statusCode
	int32_t ___statusCode_7;
	// System.String System.Net.HttpWebResponse::statusDescription
	String_t* ___statusDescription_8;
	// System.Int64 System.Net.HttpWebResponse::contentLength
	int64_t ___contentLength_9;
	// System.String System.Net.HttpWebResponse::contentType
	String_t* ___contentType_10;
	// System.Net.CookieContainer System.Net.HttpWebResponse::cookie_container
	CookieContainer_t54CCEBC3470E5D0699BB17928C171D7AFCA7614E* ___cookie_container_11;
	// System.Boolean System.Net.HttpWebResponse::disposed
	bool ___disposed_12;
	// System.IO.Stream System.Net.HttpWebResponse::stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream_13;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.IO.Stream System.IO.StreamReader::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_3;
	// System.Text.Encoding System.IO.StreamReader::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_4;
	// System.Text.Decoder System.IO.StreamReader::_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ____decoder_5;
	// System.Byte[] System.IO.StreamReader::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_6;
	// System.Char[] System.IO.StreamReader::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_7;
	// System.Int32 System.IO.StreamReader::_charPos
	int32_t ____charPos_8;
	// System.Int32 System.IO.StreamReader::_charLen
	int32_t ____charLen_9;
	// System.Int32 System.IO.StreamReader::_byteLen
	int32_t ____byteLen_10;
	// System.Int32 System.IO.StreamReader::_bytePos
	int32_t ____bytePos_11;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_12;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_13;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_14;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_15;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamReader::_asyncReadTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncReadTask_17;
};

struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_StaticFields
{
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___Null_2;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// System.Net.WebHeaderCollection
struct WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8  : public NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7
{
	// System.String[] System.Net.WebHeaderCollection::m_CommonHeaders
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_CommonHeaders_12;
	// System.Int32 System.Net.WebHeaderCollection::m_NumCommonHeaders
	int32_t ___m_NumCommonHeaders_13;
	// System.Collections.Specialized.NameValueCollection System.Net.WebHeaderCollection::m_InnerCollection
	NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* ___m_InnerCollection_16;
	// System.Net.WebHeaderCollectionType System.Net.WebHeaderCollection::m_Type
	uint16_t ___m_Type_17;
};

struct WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8_StaticFields
{
	// System.Net.HeaderInfoTable System.Net.WebHeaderCollection::HInfo
	HeaderInfoTable_tD651971044220ED52EACB30E89A49178FA32D91F* ___HInfo_11;
	// System.String[] System.Net.WebHeaderCollection::s_CommonHeaderNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_CommonHeaderNames_14;
	// System.SByte[] System.Net.WebHeaderCollection::s_CommonHeaderHints
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___s_CommonHeaderHints_15;
	// System.Char[] System.Net.WebHeaderCollection::HttpTrimCharacters
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HttpTrimCharacters_18;
	// System.Net.WebHeaderCollection/RfcChar[] System.Net.WebHeaderCollection::RfcCharMap
	RfcCharU5BU5D_t8D79A380C46398F9D1F442FDEE0A27F77B7D1B4C* ___RfcCharMap_19;
};

// UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F 
{
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SerializedGuid
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedGuid_0;
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SerializedTextureGuid
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedTextureGuid_1;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SpecifySize
	bool ___m_SpecifySize_3;
	// System.String UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Name
	String_t* ___m_Name_4;
	// UnityEngine.Texture2D UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Texture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F_marshaled_pinvoke
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedGuid_0;
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedTextureGuid_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_2;
	int32_t ___m_SpecifySize_3;
	char* ___m_Name_4;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_5;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F_marshaled_com
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedGuid_0;
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedTextureGuid_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_2;
	int32_t ___m_SpecifySize_3;
	Il2CppChar* ___m_Name_4;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_5;
};

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct Enumerator_tE5FE497ACE17F1D5DE7A67FE70B014447D9BD2E4 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t13B80190D7DD5A74B43A63EC63B97E079A0B2FC2* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFAB38D07E7BCD97D01652C71C07ED66FFA2D4EA9 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct Enumerator_tBB025BB555B121BA20A6CE8CD9BE4A484E91D80B 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t96E118783FA125640B6CD73897A2FE2B787E0AB4* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t53ED52B6CCF9EE67874B20217661A725F4B0AC33 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.XR.ARSubsystems.XRTrackedImage
struct XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Id
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_Id_1;
	// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedImage::m_SourceImageId
	Guid_t ___m_SourceImageId_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_3;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_4;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedImage::m_TrackingState
	int32_t ___m_TrackingState_5;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedImage::m_NativePtr
	intptr_t ___m_NativePtr_6;
};

struct XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRTrackedImage UnityEngine.XR.ARSubsystems.XRTrackedImage::s_Default
	XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ___s_Default_0;
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>
struct Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F  : public MulticastDelegate_t
{
};

// UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<UnityEngine.XR.ARFoundation.ARTrackedImage>
struct Enumerator_tE3D474B20BCE508D91FE65B25D4CA87091DBF531 
{
	// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator::m_Enumerator
	Enumerator_tE5FE497ACE17F1D5DE7A67FE70B014447D9BD2E4 ___m_Enumerator_0;
};

// UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>
struct Enumerator_tB1F784FAF2FFA20550ACDB9773EA94D5D741808D 
{
	// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator::m_Enumerator
	Enumerator_tBB025BB555B121BA20A6CE8CD9BE4A484E91D80B ___m_Enumerator_0;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider>
struct SubsystemLifecycleManager_3_t17DE984A5507806C3E89F7255F02922D8A7F6FD2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_t17DE984A5507806C3E89F7255F02922D8A7F6FD2_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tFAD70D497835B4EB99F6C04DFD87EA9406E796ED* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t447913E715E9E298A8BBACADFBAA1CB629A73DD1* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// CubeSelection
struct CubeSelection_tA5D9B7CC59A5430D569FCBC4D284168788B9B997  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera CubeSelection::arCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___arCamera_4;
};

// MultipleImageTracker
struct MultipleImageTracker_tCA27473EFB7E44BE3A0ACB1B843EF6A889306E74  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.ARFoundation.ARTrackedImageManager MultipleImageTracker::trackedImageManager
	ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* ___trackedImageManager_4;
	// UnityEngine.GameObject[] MultipleImageTracker::placablePrefabs
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___placablePrefabs_5;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> MultipleImageTracker::spawnedObject
	Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* ___spawnedObject_6;
};

// PinchScale
struct PinchScale_t0BD289712D06636BB549038CD40C96E3F830FCBD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PinchScale::initialDistance
	float ___initialDistance_4;
	// UnityEngine.Vector3 PinchScale::initialScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initialScale_5;
};

// spinX
struct spinX_tDE85640FFB29F71654CC78FB5F357B7DCEEB0DF4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single spinX::freq
	float ___freq_4;
};

// spinY
struct spinY_tFC3024F90DC968F2F42239FC5EA01E599F062128  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single spinY::freq
	float ___freq_4;
};

// spinZ
struct spinZ_tED20AB8C4768AC85A4489C22587363716077749E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single spinZ::freq
	float ___freq_4;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct ARTrackableManager_5_t1395957883D0FA3B96AA1B31F7D9D15573DA46F5  : public SubsystemLifecycleManager_3_t17DE984A5507806C3E89F7255F02922D8A7F6FD2
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t13B80190D7DD5A74B43A63EC63B97E079A0B2FC2* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t13B80190D7DD5A74B43A63EC63B97E079A0B2FC2* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_t1395957883D0FA3B96AA1B31F7D9D15573DA46F5_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t1395957883D0FA3B96AA1B31F7D9D15573DA46F5* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct ARTrackable_2_tB125D99BD46AD90D0AF463ECF67D57A69801B14A  : public ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ___U3CsessionRelativeDataU3Ek__BackingField_6;
};

// UnityEngine.XR.ARFoundation.ARTrackedImage
struct ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2  : public ARTrackable_2_tB125D99BD46AD90D0AF463ECF67D57A69801B14A
{
	// UnityEngine.XR.ARSubsystems.XRReferenceImage UnityEngine.XR.ARFoundation.ARTrackedImage::<referenceImage>k__BackingField
	XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ___U3CreferenceImageU3Ek__BackingField_7;
};

// UnityEngine.XR.ARFoundation.ARTrackedImageManager
struct ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4  : public ARTrackableManager_5_t1395957883D0FA3B96AA1B31F7D9D15573DA46F5
{
	// UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary UnityEngine.XR.ARFoundation.ARTrackedImageManager::m_SerializedLibrary
	XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42* ___m_SerializedLibrary_14;
	// System.Int32 UnityEngine.XR.ARFoundation.ARTrackedImageManager::m_MaxNumberOfMovingImages
	int32_t ___m_MaxNumberOfMovingImages_15;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackedImageManager::m_TrackedImagePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_TrackedImagePrefab_16;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs> UnityEngine.XR.ARFoundation.ARTrackedImageManager::trackedImagesChanged
	Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* ___trackedImagesChanged_17;
	// System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage> UnityEngine.XR.ARFoundation.ARTrackedImageManager::m_ReferenceImages
	Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* ___m_ReferenceImages_18;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m55BF5EC44D8DEC74D367B749B5B29C8F2A9CB957_gshared (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.TrackableCollection`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5<System.Object,System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::get_trackables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableCollection_1_tFCC29DC30D1D7BF9DF5F84F8DF60BD67C7832EDB ARTrackableManager_5_get_trackables_m37D539D7765C42FE95A740331D4DC34AD6EF8985_gshared (ARTrackableManager_5_t781ED5020888538CF6FC3405034BBF27F05FA2C2* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::get_count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackableCollection_1_get_count_mEC658F946B333A5D977CF8C07EF9918E35C6A288_gshared (TrackableCollection_1_tFCC29DC30D1D7BF9DF5F84F8DF60BD67C7832EDB* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB1F784FAF2FFA20550ACDB9773EA94D5D741808D TrackableCollection_1_GetEnumerator_m40FC0BACB788B33217B7B2C3221C7D9967F2B836_gshared (TrackableCollection_1_tFCC29DC30D1D7BF9DF5F84F8DF60BD67C7832EDB* __this, const RuntimeMethod* method) ;
// TTrackable UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m0C78B1A685CCC36524577967CE1620CB889FDC0A_gshared (Enumerator_tB1F784FAF2FFA20550ACDB9773EA94D5D741808D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2DFDA23C7884D9A93FF21291F1DF5DDA2C0DA27C_gshared (Enumerator_tB1F784FAF2FFA20550ACDB9773EA94D5D741808D* __this, const RuntimeMethod* method) ;

// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89 (String_t* ___url0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARTrackedImageManager>()
inline ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* Component_GetComponent_TisARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4_m3C5338CF883CA97951B07D446FEA5FC76D1FB683 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::.ctor()
inline void Dictionary_2__ctor_m85AB837A51705B9DF96923F388345B9461B9882B (Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::Add(TKey,TValue)
inline void Dictionary_2_Add_mE5ED48EAB67073C645CD87B5E6ACA2E6BF7975AF (Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* __this, String_t* ___key0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE*, String_t*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m55BF5EC44D8DEC74D367B749B5B29C8F2A9CB957 (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m55BF5EC44D8DEC74D367B749B5B29C8F2A9CB957_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImageManager::add_trackedImagesChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImageManager_add_trackedImagesChanged_mB190015342B225144729100E0E38745CAFA7F438 (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImageManager::remove_trackedImagesChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImageManager_remove_trackedImagesChanged_mA754FAB732F3D5D803FA3A58A51E6487E75CCF34 (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::get_added()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_added_m2929CC85141D13AF05C1484AFB47E043C6D3EE35_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>::GetEnumerator()
inline Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C (List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B (*) (List_1_tFA730335FF46512E4245B2F46892CA318B394FAE*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARTrackedImage>::Dispose()
inline void Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4 (Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARTrackedImage>::get_Current()
inline ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_inline (Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B* __this, const RuntimeMethod* method)
{
	return ((  ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* (*) (Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void MultipleImageTracker::UpdateSpawnObject(UnityEngine.XR.ARFoundation.ARTrackedImage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipleImageTracker_UpdateSpawnObject_m8F5BEF7FA52BFE35DEB8CC873C9472934FD1BD43 (MultipleImageTracker_tCA27473EFB7E44BE3A0ACB1B843EF6A889306E74* __this, ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* ___trackedImage0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARTrackedImage>::MoveNext()
inline bool Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80 (Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::get_updated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_updated_m0C896E1C21EF35FF4B31B36563838EC2BA3CDFD1_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::get_removed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_removed_m062CBBEF163BEE47A673F7B3BDC0DD1C6EAEA185_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.XRReferenceImage UnityEngine.XR.ARFoundation.ARTrackedImage::get_referenceImage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline (ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.ARSubsystems.XRReferenceImage::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XRReferenceImage_get_name_mF1BE1E54AD911D48445B7DDEF2E27EA01E1E73BB_inline (XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::get_Item(TKey)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Dictionary_2_get_Item_m5A8F8BCAC50C5D5AB2722BBD41A340E4F6E47586 (Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.TrackableCollection`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>::get_trackables()
inline TrackableCollection_1_tA2C9F7D20A5C25A17E7623BC171A9D4359876D2C ARTrackableManager_5_get_trackables_m550D26D672377AA9685A9EFEE2D959525E51800B (ARTrackableManager_5_t1395957883D0FA3B96AA1B31F7D9D15573DA46F5* __this, const RuntimeMethod* method)
{
	return ((  TrackableCollection_1_tA2C9F7D20A5C25A17E7623BC171A9D4359876D2C (*) (ARTrackableManager_5_t1395957883D0FA3B96AA1B31F7D9D15573DA46F5*, const RuntimeMethod*))ARTrackableManager_5_get_trackables_m37D539D7765C42FE95A740331D4DC34AD6EF8985_gshared)(__this, method);
}
// System.Int32 UnityEngine.XR.ARFoundation.TrackableCollection`1<UnityEngine.XR.ARFoundation.ARTrackedImage>::get_count()
inline int32_t TrackableCollection_1_get_count_m0AD877E10C80F187B55A2BC66780A27C8EACFD6C (TrackableCollection_1_tA2C9F7D20A5C25A17E7623BC171A9D4359876D2C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TrackableCollection_1_tA2C9F7D20A5C25A17E7623BC171A9D4359876D2C*, const RuntimeMethod*))TrackableCollection_1_get_count_mEC658F946B333A5D977CF8C07EF9918E35C6A288_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1<UnityEngine.XR.ARFoundation.ARTrackedImage>::GetEnumerator()
inline Enumerator_tE3D474B20BCE508D91FE65B25D4CA87091DBF531 TrackableCollection_1_GetEnumerator_m5032F80B739675088C08AC55F020A536A0724851 (TrackableCollection_1_tA2C9F7D20A5C25A17E7623BC171A9D4359876D2C* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE3D474B20BCE508D91FE65B25D4CA87091DBF531 (*) (TrackableCollection_1_tA2C9F7D20A5C25A17E7623BC171A9D4359876D2C*, const RuntimeMethod*))TrackableCollection_1_GetEnumerator_m40FC0BACB788B33217B7B2C3221C7D9967F2B836_gshared)(__this, method);
}
// TTrackable UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<UnityEngine.XR.ARFoundation.ARTrackedImage>::get_Current()
inline ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* Enumerator_get_Current_m1F144FE9E0FC29EE4573EC9D30A7000179BF71AB (Enumerator_tE3D474B20BCE508D91FE65B25D4CA87091DBF531* __this, const RuntimeMethod* method)
{
	return ((  ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* (*) (Enumerator_tE3D474B20BCE508D91FE65B25D4CA87091DBF531*, const RuntimeMethod*))Enumerator_get_Current_m0C78B1A685CCC36524577967CE1620CB889FDC0A_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<UnityEngine.XR.ARFoundation.ARTrackedImage>::MoveNext()
inline bool Enumerator_MoveNext_mA99F1A3F439A030FC6CD2D5D1F45F86E52985736 (Enumerator_tE3D474B20BCE508D91FE65B25D4CA87091DBF531* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE3D474B20BCE508D91FE65B25D4CA87091DBF531*, const RuntimeMethod*))Enumerator_MoveNext_m2DFDA23C7884D9A93FF21291F1DF5DDA2C0DA27C_gshared)(__this, method);
}
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, int32_t ___relativeTo3, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Net.WebRequest System.Net.WebRequest::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B* WebRequest_Create_mEA404E1E326B2790C70C40894101C6DB41DA8E6C (String_t* ___requestUriString0, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_m7712DDC735E99B6833E2666ADFD8A06CB96A58B1 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, const RuntimeMethod* method) ;
// System.Void System.Console::WriteLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_WriteLine_m77CEDA0C084428F0D6220988DA66992EC1925AEA (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
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
// System.Void CubeSelection::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeSelection_Start_mFD78300EBBB219464315A25DF9F8C58504C8846E (CubeSelection_tA5D9B7CC59A5430D569FCBC4D284168788B9B997* __this, const RuntimeMethod* method) 
{
	{
		// arCamera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		__this->___arCamera_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arCamera_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void CubeSelection::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeSelection_Update_m9157171AB57449E9F0604FC0E4CE373B6883D316 (CubeSelection_tA5D9B7CC59A5430D569FCBC4D284168788B9B997* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral624680CF43A758F7BA992C7A896E612BF23FA850);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_2)
		{
			goto IL_0062;
		}
	}
	{
		// Ray ray = arCamera.ScreenPointToRay(Input.GetTouch(0).position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___arCamera_4;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_4;
		L_4 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_5, NULL);
		NullCheck(L_3);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_7;
		L_7 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_3, L_6, NULL);
		// if (Physics.Raycast(ray, out hit))
		bool L_8;
		L_8 = Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5(L_7, (&V_1), NULL);
		if (!L_8)
		{
			goto IL_0062;
		}
	}
	{
		// if (hit.collider.gameObject == gameObject)
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_9;
		L_9 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_1), NULL);
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_10, L_11, NULL);
		if (!L_12)
		{
			goto IL_0062;
		}
	}
	{
		// string url = "https://www.google.com";
		// Application.OpenURL(url);
		Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89(_stringLiteral624680CF43A758F7BA992C7A896E612BF23FA850, NULL);
	}

IL_0062:
	{
		// }
		return;
	}
}
// System.Void CubeSelection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeSelection__ctor_mFFC19E523B076B50D24DE2551298D646822596C0 (CubeSelection_tA5D9B7CC59A5430D569FCBC4D284168788B9B997* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MultipleImageTracker::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipleImageTracker_Awake_m6F6584D9BC74961E5E3A119D3DE66A8FAA7544BC (MultipleImageTracker_tCA27473EFB7E44BE3A0ACB1B843EF6A889306E74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4_m3C5338CF883CA97951B07D446FEA5FC76D1FB683_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mE5ED48EAB67073C645CD87B5E6ACA2E6BF7975AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m85AB837A51705B9DF96923F388345B9461B9882B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	{
		// trackedImageManager = GetComponent<ARTrackedImageManager>();
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_0;
		L_0 = Component_GetComponent_TisARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4_m3C5338CF883CA97951B07D446FEA5FC76D1FB683(__this, Component_GetComponent_TisARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4_m3C5338CF883CA97951B07D446FEA5FC76D1FB683_RuntimeMethod_var);
		__this->___trackedImageManager_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___trackedImageManager_4), (void*)L_0);
		// spawnedObject = new Dictionary<string, GameObject>();
		Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* L_1 = (Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE*)il2cpp_codegen_object_new(Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m85AB837A51705B9DF96923F388345B9461B9882B(L_1, Dictionary_2__ctor_m85AB837A51705B9DF96923F388345B9461B9882B_RuntimeMethod_var);
		__this->___spawnedObject_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedObject_6), (void*)L_1);
		// foreach (GameObject obj in placablePrefabs)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___placablePrefabs_5;
		V_0 = L_2;
		V_1 = 0;
		goto IL_0056;
	}

IL_0022:
	{
		// foreach (GameObject obj in placablePrefabs)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// GameObject newObject = Instantiate(obj);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		V_3 = L_8;
		// newObject.name = obj.name;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_2;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_10, NULL);
		NullCheck(L_9);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_9, L_11, NULL);
		// newObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_3;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		// spawnedObject.Add(newObject.name, newObject);
		Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* L_13 = __this->___spawnedObject_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_3;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_14, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_3;
		NullCheck(L_13);
		Dictionary_2_Add_mE5ED48EAB67073C645CD87B5E6ACA2E6BF7975AF(L_13, L_15, L_16, Dictionary_2_Add_mE5ED48EAB67073C645CD87B5E6ACA2E6BF7975AF_RuntimeMethod_var);
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0056:
	{
		// foreach (GameObject obj in placablePrefabs)
		int32_t L_18 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_19 = V_0;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_0022;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MultipleImageTracker::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipleImageTracker_OnEnable_m2B0C9630171E5527B16B6919EA1CBBF86954F28C (MultipleImageTracker_tCA27473EFB7E44BE3A0ACB1B843EF6A889306E74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultipleImageTracker_OnTrakcedImageChanged_m8023CD21744B956480FFD8E47474E119188EE05A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// trackedImageManager.trackedImagesChanged += OnTrakcedImageChanged;
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_0 = __this->___trackedImageManager_4;
		Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* L_1 = (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F*)il2cpp_codegen_object_new(Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m55BF5EC44D8DEC74D367B749B5B29C8F2A9CB957(L_1, __this, (intptr_t)((void*)MultipleImageTracker_OnTrakcedImageChanged_m8023CD21744B956480FFD8E47474E119188EE05A_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARTrackedImageManager_add_trackedImagesChanged_mB190015342B225144729100E0E38745CAFA7F438(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void MultipleImageTracker::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipleImageTracker_OnDisable_m82EEE599E28A320527781A551DBB274BD3635CB1 (MultipleImageTracker_tCA27473EFB7E44BE3A0ACB1B843EF6A889306E74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultipleImageTracker_OnTrakcedImageChanged_m8023CD21744B956480FFD8E47474E119188EE05A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// trackedImageManager.trackedImagesChanged -= OnTrakcedImageChanged;
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_0 = __this->___trackedImageManager_4;
		Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* L_1 = (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F*)il2cpp_codegen_object_new(Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m55BF5EC44D8DEC74D367B749B5B29C8F2A9CB957(L_1, __this, (intptr_t)((void*)MultipleImageTracker_OnTrakcedImageChanged_m8023CD21744B956480FFD8E47474E119188EE05A_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARTrackedImageManager_remove_trackedImagesChanged_mA754FAB732F3D5D803FA3A58A51E6487E75CCF34(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void MultipleImageTracker::OnTrakcedImageChanged(UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipleImageTracker_OnTrakcedImageChanged_m8023CD21744B956480FFD8E47474E119188EE05A (MultipleImageTracker_tCA27473EFB7E44BE3A0ACB1B843EF6A889306E74* __this, ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F ___eventArgs0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m5A8F8BCAC50C5D5AB2722BBD41A340E4F6E47586_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* V_1 = NULL;
	ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* V_2 = NULL;
	ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* V_3 = NULL;
	XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// foreach (ARTrackedImage trackedImage in eventArgs.added)
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_0;
		L_0 = ARTrackedImagesChangedEventArgs_get_added_m2929CC85141D13AF05C1484AFB47E043C6D3EE35_inline((&___eventArgs0), NULL);
		NullCheck(L_0);
		Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B L_1;
		L_1 = List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C(L_0, List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4((&V_0), Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001e_1;
			}

IL_000f_1:
			{
				// foreach (ARTrackedImage trackedImage in eventArgs.added)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_2;
				L_2 = Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_inline((&V_0), Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_RuntimeMethod_var);
				V_1 = L_2;
				// UpdateSpawnObject(trackedImage);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_3 = V_1;
				MultipleImageTracker_UpdateSpawnObject_m8F5BEF7FA52BFE35DEB8CC873C9472934FD1BD43(__this, L_3, NULL);
			}

IL_001e_1:
			{
				// foreach (ARTrackedImage trackedImage in eventArgs.added)
				bool L_4;
				L_4 = Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80((&V_0), Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_0037;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		// foreach (ARTrackedImage trackedImage in eventArgs.updated)
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_5;
		L_5 = ARTrackedImagesChangedEventArgs_get_updated_m0C896E1C21EF35FF4B31B36563838EC2BA3CDFD1_inline((&___eventArgs0), NULL);
		NullCheck(L_5);
		Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B L_6;
		L_6 = List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C(L_5, List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C_RuntimeMethod_var);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0060:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4((&V_0), Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0055_1;
			}

IL_0046_1:
			{
				// foreach (ARTrackedImage trackedImage in eventArgs.updated)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_7;
				L_7 = Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_inline((&V_0), Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_RuntimeMethod_var);
				V_2 = L_7;
				// UpdateSpawnObject(trackedImage);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_8 = V_2;
				MultipleImageTracker_UpdateSpawnObject_m8F5BEF7FA52BFE35DEB8CC873C9472934FD1BD43(__this, L_8, NULL);
			}

IL_0055_1:
			{
				// foreach (ARTrackedImage trackedImage in eventArgs.updated)
				bool L_9;
				L_9 = Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80((&V_0), Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_0046_1;
				}
			}
			{
				goto IL_006e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006e:
	{
		// foreach (ARTrackedImage trackedImage in eventArgs.removed)
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_10;
		L_10 = ARTrackedImagesChangedEventArgs_get_removed_m062CBBEF163BEE47A673F7B3BDC0DD1C6EAEA185_inline((&___eventArgs0), NULL);
		NullCheck(L_10);
		Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B L_11;
		L_11 = List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C(L_10, List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C_RuntimeMethod_var);
		V_0 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b0:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4((&V_0), Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_007d_1:
			{
				// foreach (ARTrackedImage trackedImage in eventArgs.removed)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_12;
				L_12 = Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_inline((&V_0), Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_RuntimeMethod_var);
				V_3 = L_12;
				// spawnedObject[trackedImage.referenceImage.name].SetActive(false);
				Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* L_13 = __this->___spawnedObject_6;
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_14 = V_3;
				NullCheck(L_14);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_15;
				L_15 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_14, NULL);
				V_4 = L_15;
				String_t* L_16;
				L_16 = XRReferenceImage_get_name_mF1BE1E54AD911D48445B7DDEF2E27EA01E1E73BB_inline((&V_4), NULL);
				NullCheck(L_13);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
				L_17 = Dictionary_2_get_Item_m5A8F8BCAC50C5D5AB2722BBD41A340E4F6E47586(L_13, L_16, Dictionary_2_get_Item_m5A8F8BCAC50C5D5AB2722BBD41A340E4F6E47586_RuntimeMethod_var);
				NullCheck(L_17);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)0, NULL);
			}

IL_00a5_1:
			{
				// foreach (ARTrackedImage trackedImage in eventArgs.removed)
				bool L_18;
				L_18 = Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80((&V_0), Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_007d_1;
				}
			}
			{
				goto IL_00be;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00be:
	{
		// }
		return;
	}
}
// System.Void MultipleImageTracker::UpdateSpawnObject(UnityEngine.XR.ARFoundation.ARTrackedImage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipleImageTracker_UpdateSpawnObject_m8F5BEF7FA52BFE35DEB8CC873C9472934FD1BD43 (MultipleImageTracker_tCA27473EFB7E44BE3A0ACB1B843EF6A889306E74* __this, ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* ___trackedImage0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m5A8F8BCAC50C5D5AB2722BBD41A340E4F6E47586_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// string referenceImageName = trackedImage.referenceImage.name;
		ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_0 = ___trackedImage0;
		NullCheck(L_0);
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_1;
		L_1 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_0, NULL);
		V_1 = L_1;
		String_t* L_2;
		L_2 = XRReferenceImage_get_name_mF1BE1E54AD911D48445B7DDEF2E27EA01E1E73BB_inline((&V_1), NULL);
		V_0 = L_2;
		// spawnedObject[referenceImageName].transform.position = trackedImage.transform.position;
		Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* L_3 = __this->___spawnedObject_6;
		String_t* L_4 = V_0;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Dictionary_2_get_Item_m5A8F8BCAC50C5D5AB2722BBD41A340E4F6E47586(L_3, L_4, Dictionary_2_get_Item_m5A8F8BCAC50C5D5AB2722BBD41A340E4F6E47586_RuntimeMethod_var);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_7 = ___trackedImage0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_9, NULL);
		// spawnedObject[referenceImageName].transform.rotation = trackedImage.transform.rotation;
		Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* L_10 = __this->___spawnedObject_6;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Dictionary_2_get_Item_m5A8F8BCAC50C5D5AB2722BBD41A340E4F6E47586(L_10, L_11, Dictionary_2_get_Item_m5A8F8BCAC50C5D5AB2722BBD41A340E4F6E47586_RuntimeMethod_var);
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_14 = ___trackedImage0;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		NullCheck(L_15);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_15, NULL);
		NullCheck(L_13);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_13, L_16, NULL);
		// spawnedObject[referenceImageName].SetActive(true);
		Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* L_17 = __this->___spawnedObject_6;
		String_t* L_18 = V_0;
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Dictionary_2_get_Item_m5A8F8BCAC50C5D5AB2722BBD41A340E4F6E47586(L_17, L_18, Dictionary_2_get_Item_m5A8F8BCAC50C5D5AB2722BBD41A340E4F6E47586_RuntimeMethod_var);
		NullCheck(L_19);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void MultipleImageTracker::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipleImageTracker_Start_m1120BC30E292AE0009709F506B5AE2D2D8A660CE (MultipleImageTracker_tCA27473EFB7E44BE3A0ACB1B843EF6A889306E74* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MultipleImageTracker::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipleImageTracker_Update_m9C9015F0AEB1D23C4F52A12735FEF737F5B563AA (MultipleImageTracker_tCA27473EFB7E44BE3A0ACB1B843EF6A889306E74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackableManager_5_get_trackables_m550D26D672377AA9685A9EFEE2D959525E51800B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA99F1A3F439A030FC6CD2D5D1F45F86E52985736_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1F144FE9E0FC29EE4573EC9D30A7000179BF71AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableCollection_1_GetEnumerator_m5032F80B739675088C08AC55F020A536A0724851_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableCollection_1_get_count_m0AD877E10C80F187B55A2BC66780A27C8EACFD6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93E3C70B75B56C1DAACBBB65CA9ADD4EDA481544);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FA02CAD9B26929B96C2EF62D9EFE6EA9D41C098);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDA9897DEA671AAFC0E89B732B77CD962BECFE34);
		s_Il2CppMethodInitialized = true;
	}
	TrackableCollection_1_tA2C9F7D20A5C25A17E7623BC171A9D4359876D2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_tE3D474B20BCE508D91FE65B25D4CA87091DBF531 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* V_2 = NULL;
	XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Debug.Log($"There are {trackedImageManager.trackables.count} images being tracked");
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_0 = __this->___trackedImageManager_4;
		NullCheck(L_0);
		TrackableCollection_1_tA2C9F7D20A5C25A17E7623BC171A9D4359876D2C L_1;
		L_1 = ARTrackableManager_5_get_trackables_m550D26D672377AA9685A9EFEE2D959525E51800B(L_0, ARTrackableManager_5_get_trackables_m550D26D672377AA9685A9EFEE2D959525E51800B_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2;
		L_2 = TrackableCollection_1_get_count_m0AD877E10C80F187B55A2BC66780A27C8EACFD6C((&V_0), TrackableCollection_1_get_count_m0AD877E10C80F187B55A2BC66780A27C8EACFD6C_RuntimeMethod_var);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralDDA9897DEA671AAFC0E89B732B77CD962BECFE34, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
		// foreach (var trackedImage in trackedImageManager.trackables)
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_6 = __this->___trackedImageManager_4;
		NullCheck(L_6);
		TrackableCollection_1_tA2C9F7D20A5C25A17E7623BC171A9D4359876D2C L_7;
		L_7 = ARTrackableManager_5_get_trackables_m550D26D672377AA9685A9EFEE2D959525E51800B(L_6, ARTrackableManager_5_get_trackables_m550D26D672377AA9685A9EFEE2D959525E51800B_RuntimeMethod_var);
		V_0 = L_7;
		Enumerator_tE3D474B20BCE508D91FE65B25D4CA87091DBF531 L_8;
		L_8 = TrackableCollection_1_GetEnumerator_m5032F80B739675088C08AC55F020A536A0724851((&V_0), TrackableCollection_1_GetEnumerator_m5032F80B739675088C08AC55F020A536A0724851_RuntimeMethod_var);
		V_1 = L_8;
		goto IL_0081;
	}

IL_003d:
	{
		// foreach (var trackedImage in trackedImageManager.trackables)
		ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_9;
		L_9 = Enumerator_get_Current_m1F144FE9E0FC29EE4573EC9D30A7000179BF71AB((&V_1), Enumerator_get_Current_m1F144FE9E0FC29EE4573EC9D30A7000179BF71AB_RuntimeMethod_var);
		V_2 = L_9;
		// Debug.Log($"Image: {trackedImage.referenceImage.name} is at " +
		//             $"{trackedImage.transform.position}");
		ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_10 = V_2;
		NullCheck(L_10);
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_11;
		L_11 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_10, NULL);
		V_3 = L_11;
		String_t* L_12;
		L_12 = XRReferenceImage_get_name_mF1BE1E54AD911D48445B7DDEF2E27EA01E1E73BB_inline((&V_3), NULL);
		ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_13 = V_2;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = L_15;
		RuntimeObject* L_17 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_16);
		String_t* L_18;
		L_18 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_17, NULL);
		String_t* L_19;
		L_19 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral9FA02CAD9B26929B96C2EF62D9EFE6EA9D41C098, L_12, _stringLiteral93E3C70B75B56C1DAACBBB65CA9ADD4EDA481544, L_18, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_19, NULL);
	}

IL_0081:
	{
		// foreach (var trackedImage in trackedImageManager.trackables)
		bool L_20;
		L_20 = Enumerator_MoveNext_mA99F1A3F439A030FC6CD2D5D1F45F86E52985736((&V_1), Enumerator_MoveNext_mA99F1A3F439A030FC6CD2D5D1F45F86E52985736_RuntimeMethod_var);
		if (L_20)
		{
			goto IL_003d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MultipleImageTracker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipleImageTracker__ctor_mC7F054B6F55DACFE451176CE1B0BBD86A7D9A63B (MultipleImageTracker_tCA27473EFB7E44BE3A0ACB1B843EF6A889306E74* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PinchScale::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchScale_Update_m7D10E2638E73DB27916E5B743811D99B796214CA (PinchScale_t0BD289712D06636BB549038CD40C96E3F830FCBD* __this, const RuntimeMethod* method) 
{
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		// if (Input.touchCount == 2)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0093;
		}
	}
	{
		// Touch touch0 = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_1;
		// Touch touch1 = Input.GetTouch(1);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_2;
		L_2 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(1, NULL);
		V_1 = L_2;
		// if (touch1.phase == TouchPhase.Began)
		int32_t L_3;
		L_3 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_1), NULL);
		if (L_3)
		{
			goto IL_004d;
		}
	}
	{
		// initialDistance = Vector2.Distance(touch0.position, touch1.position);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		float L_6;
		L_6 = Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline(L_4, L_5, NULL);
		__this->___initialDistance_4 = L_6;
		// initialScale = transform.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_7, NULL);
		__this->___initialScale_5 = L_8;
		return;
	}

IL_004d:
	{
		// else if (touch0.phase == TouchPhase.Moved || touch1.phase == TouchPhase.Moved)
		int32_t L_9;
		L_9 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if ((((int32_t)L_9) == ((int32_t)1)))
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10;
		L_10 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_1), NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_0093;
		}
	}

IL_0061:
	{
		// float currentDistance = Vector2.Distance(touch0.position, touch1.position);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		float L_13;
		L_13 = Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline(L_11, L_12, NULL);
		// float scaleFactor = currentDistance / initialDistance;
		float L_14 = __this->___initialDistance_4;
		V_2 = ((float)(L_13/L_14));
		// transform.localScale = initialScale * scaleFactor;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = __this->___initialScale_5;
		float L_17 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_16, L_17, NULL);
		NullCheck(L_15);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_15, L_18, NULL);
	}

IL_0093:
	{
		// }
		return;
	}
}
// System.Void PinchScale::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchScale__ctor_mD5FC6D3E0E2756CCD0B84EB5E3C8F2932F56AC8F (PinchScale_t0BD289712D06636BB549038CD40C96E3F830FCBD* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void spinX::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void spinX_Start_m4DCAE871746F28849C3B708E6FF50AE3F8F9E075 (spinX_tDE85640FFB29F71654CC78FB5F357B7DCEEB0DF4* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void spinX::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void spinX_Update_m37B3A6CFAD0751A406219B085CA43562D7425785 (spinX_tDE85640FFB29F71654CC78FB5F357B7DCEEB0DF4* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(freq * Time.deltaTime, 0f, 0f, Space.Self);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_1 = __this->___freq_4;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_0);
		Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30(L_0, ((float)il2cpp_codegen_multiply(L_1, L_2)), (0.0f), (0.0f), 1, NULL);
		// }
		return;
	}
}
// System.Void spinX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void spinX__ctor_m5F63EB0FA9843EC4BDB1BD727BD03F82DD98F149 (spinX_tDE85640FFB29F71654CC78FB5F357B7DCEEB0DF4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void spinY::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void spinY_Start_m699AA2D32EE4B8D9A160F4E444C0CEFBCF4FF398 (spinY_tFC3024F90DC968F2F42239FC5EA01E599F062128* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void spinY::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void spinY_Update_m90373989ECC9D270A315B421DDFCC89C1E5BBFA0 (spinY_tFC3024F90DC968F2F42239FC5EA01E599F062128* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(0f, freq * Time.deltaTime, 0f, Space.Self);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_1 = __this->___freq_4;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_0);
		Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30(L_0, (0.0f), ((float)il2cpp_codegen_multiply(L_1, L_2)), (0.0f), 1, NULL);
		// }
		return;
	}
}
// System.Void spinY::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void spinY__ctor_mEFA78D066E224717E86D2E875ECBDC727115F202 (spinY_tFC3024F90DC968F2F42239FC5EA01E599F062128* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void spinZ::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void spinZ_Update_m6F4B190D8EF95E579A13D89985E96B9CA053E3C7 (spinZ_tED20AB8C4768AC85A4489C22587363716077749E* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(0f, 0f, freq * Time.deltaTime,Space.Self);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_1 = __this->___freq_4;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_0);
		Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30(L_0, (0.0f), (0.0f), ((float)il2cpp_codegen_multiply(L_1, L_2)), 1, NULL);
		// }
		return;
	}
}
// System.Void spinZ::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void spinZ__ctor_m9B1974F1EB1C0D49C13B45DBCE549350A5ED8E0C (spinZ_tED20AB8C4768AC85A4489C22587363716077749E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void NaverCrawler.APIExamSearchBlog::Main(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void APIExamSearchBlog_Main_mD7F0E6C2808609F144758ADFCE9611D7CCDB7ABB (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpStatusCode_t530B6899270B44ED560C3872DB5F9698FB7D7374_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0239F5CE9ACC936215E92A7E0AB05CE58F9533E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AE348EAFA097AB898941EAFE912D711A407DA10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4995CAE25C0196B39D440960318500B8EE1F5EF5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622E3BD19C29B4FDE9B29A6109148807BCEE1B27);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7641C083C5867355B221D22C0F592849D35C0122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF3D12C7E6B63BC518FC89186C83B758AB53F2A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8688947994CE3FCF8CBBAA8D4192DE08FC9009A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7F8FD6EBEBD6CB6CA56F9053DDA6CE526212614);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// string query = $"restaurant_name"; // ??? ???
		V_0 = _stringLiteral7641C083C5867355B221D22C0F592849D35C0122;
		// string url = "https://openapi.naver.com/v1/search/blog?query=" + query; // JSON ??
		String_t* L_0 = V_0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral0239F5CE9ACC936215E92A7E0AB05CE58F9533E7, L_0, NULL);
		// HttpWebRequest request = (HttpWebRequest)WebRequest.Create(url);
		il2cpp_codegen_runtime_class_init_inline(WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B_il2cpp_TypeInfo_var);
		WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B* L_2;
		L_2 = WebRequest_Create_mEA404E1E326B2790C70C40894101C6DB41DA8E6C(L_1, NULL);
		// request.Headers.Add("X-Naver-Client-Id", "qoq3YNKfSup1W2jNtaiN"); // ????? ???
		HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_3 = ((HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9*)CastclassClass((RuntimeObject*)L_2, HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9_il2cpp_TypeInfo_var));
		NullCheck(L_3);
		WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8* L_4;
		L_4 = VirtualFuncInvoker0< WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8* >::Invoke(11 /* System.Net.WebHeaderCollection System.Net.WebRequest::get_Headers() */, L_3);
		NullCheck(L_4);
		VirtualActionInvoker2< String_t*, String_t* >::Invoke(14 /* System.Void System.Collections.Specialized.NameValueCollection::Add(System.String,System.String) */, L_4, _stringLiteral622E3BD19C29B4FDE9B29A6109148807BCEE1B27, _stringLiteralE7F8FD6EBEBD6CB6CA56F9053DDA6CE526212614);
		// request.Headers.Add("X-Naver-Client-Secret", "EWhrqncleL");       // ????? ???
		HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_5 = L_3;
		NullCheck(L_5);
		WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8* L_6;
		L_6 = VirtualFuncInvoker0< WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8* >::Invoke(11 /* System.Net.WebHeaderCollection System.Net.WebRequest::get_Headers() */, L_5);
		NullCheck(L_6);
		VirtualActionInvoker2< String_t*, String_t* >::Invoke(14 /* System.Void System.Collections.Specialized.NameValueCollection::Add(System.String,System.String) */, L_6, _stringLiteralD8688947994CE3FCF8CBBAA8D4192DE08FC9009A, _stringLiteralBF3D12C7E6B63BC518FC89186C83B758AB53F2A9);
		// HttpWebResponse response = (HttpWebResponse)request.GetResponse();
		NullCheck(L_5);
		WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* L_7;
		L_7 = VirtualFuncInvoker0< WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* >::Invoke(18 /* System.Net.WebResponse System.Net.WebRequest::GetResponse() */, L_5);
		V_1 = ((HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A*)CastclassClass((RuntimeObject*)L_7, HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A_il2cpp_TypeInfo_var));
		// string status = response.StatusCode.ToString();
		HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(14 /* System.Net.HttpStatusCode System.Net.HttpWebResponse::get_StatusCode() */, L_8);
		V_3 = L_9;
		Il2CppFakeBox<int32_t> L_10(HttpStatusCode_t530B6899270B44ED560C3872DB5F9698FB7D7374_il2cpp_TypeInfo_var, (&V_3));
		String_t* L_11;
		L_11 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_10), NULL);
		V_2 = L_11;
		// if(status == "OK")
		String_t* L_12 = V_2;
		bool L_13;
		L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_12, _stringLiteral1AE348EAFA097AB898941EAFE912D711A407DA10, NULL);
		if (!L_13)
		{
			goto IL_008d;
		}
	}
	{
		// Stream stream = response.GetResponseStream();
		HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* L_14 = V_1;
		NullCheck(L_14);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_15;
		L_15 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(12 /* System.IO.Stream System.Net.WebResponse::GetResponseStream() */, L_14);
		// StreamReader reader = new StreamReader(stream, Encoding.UTF8);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_16;
		L_16 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_17 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		StreamReader__ctor_m7712DDC735E99B6833E2666ADFD8A06CB96A58B1(L_17, L_15, L_16, NULL);
		// string text = reader.ReadToEnd();
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.TextReader::ReadToEnd() */, L_17);
		// Console.WriteLine(text);
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_m77CEDA0C084428F0D6220988DA66992EC1925AEA(L_18, NULL);
		return;
	}

IL_008d:
	{
		// Console.WriteLine("Error ??=" + status);
		String_t* L_19 = V_2;
		String_t* L_20;
		L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral4995CAE25C0196B39D440960318500B8EE1F5EF5, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_m77CEDA0C084428F0D6220988DA66992EC1925AEA(L_20, NULL);
		// }
		return;
	}
}
// System.Void NaverCrawler.APIExamSearchBlog::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void APIExamSearchBlog__ctor_m7E8848BCB7CCD0F0FDFBB84743F2BE585D50E12A (APIExamSearchBlog_tA25AFA606A34E51B1D0ED61CA1044D4C6D10E3B4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_added_m2929CC85141D13AF05C1484AFB47E043C6D3EE35_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) 
{
	{
		// public List<ARTrackedImage> added { get; private set; }
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_0 = __this->___U3CaddedU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_updated_m0C896E1C21EF35FF4B31B36563838EC2BA3CDFD1_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) 
{
	{
		// public List<ARTrackedImage> updated { get; private set; }
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_0 = __this->___U3CupdatedU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_removed_m062CBBEF163BEE47A673F7B3BDC0DD1C6EAEA185_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) 
{
	{
		// public List<ARTrackedImage> removed { get; private set; }
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_0 = __this->___U3CremovedU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline (ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* __this, const RuntimeMethod* method) 
{
	{
		// public XRReferenceImage referenceImage { get; internal set; }
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_0 = __this->___U3CreferenceImageU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XRReferenceImage_get_name_mF1BE1E54AD911D48445B7DDEF2E27EA01E1E73BB_inline (XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* __this, const RuntimeMethod* method) 
{
	{
		// public string name => m_Name;
		String_t* L_0 = __this->___m_Name_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))));
		V_2 = ((float)L_12);
		goto IL_002e;
	}

IL_002e:
	{
		float L_13 = V_2;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
