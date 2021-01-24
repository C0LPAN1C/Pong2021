#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`1<System.Collections.IDictionary>
struct Action_1_t6A72AA222A71F875B4B8EE6D51D920E37662376E;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Action`1<UnityEngine.Texture2D>
struct Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA;
// System.Action`1<UnityEngine.WWW>
struct Action_1_t09F80ED9165FB471660E59814CE3452EF1D8B5CD;
// System.Action`2<System.String,System.String>
struct Action_2_t5C556B6D8F8D47EA5C55DC24670009B95AF10486;
// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>
struct Dictionary_2_tD81AC0CCD8ADB00A69E5569D0C84C142058583F5;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>
struct List_1_tC57F1BA46C89AA33253984801D30F8502BBBFE68;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.ParticleCollisionEvent[]
struct ParticleCollisionEventU5BU5D_t62880785FE50C001432E57E6D83BF3BD7BD3183A;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition[]
struct ReplacementDefinitionU5BU5D_t7FDBF66AC09AE6387AE2F22B4376411B47BF3420;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190;
// UnityStandardAssets.Utility.TimedObjectActivator/Entry[]
struct EntryU5BU5D_tC0423D25805A9B47CCD358D545C0886EDD6E2510;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityStandardAssets.Utility.DragRigidbody
struct DragRigidbody_t9D0FAFD76BB0876EC4A6505ABC0FE018022CF7BD;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// UnityStandardAssets.Effects.ExplosionFireAndDebris
struct ExplosionFireAndDebris_tF9445209A9E843303ED79A22E876FE0DB75A5811;
// UnityStandardAssets.Effects.Explosive
struct Explosive_t35EC7643F888FA175DDBE61BE15F0662512C0BC0;
// UnityStandardAssets.Utility.FOVKick
struct FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.ICollection
struct ICollection_tC1E1DED86C0A66845675392606B302452210D5DA;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// UnityEngine.Joint
struct Joint_t085126F36196FC982700F4EA8466CF10C90EC15E;
// UnityStandardAssets.Utility.LerpControlledBob
struct LerpControlledBob_t3A136B4FE24CC2F41EB6CFF54A2FDC0122E7A238;
// Prime31.LifecycleHelper
struct LifecycleHelper_t2C8530CA0073EF4CA43BCC651EB399608723D373;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityStandardAssets.Utility.ObjectResetter
struct ObjectResetter_t6E96E79B7F57F740C3C7C6C6FEA9DEE271C994A1;
// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E;
// UnityStandardAssets.Utility.ParticleSystemDestroyer
struct ParticleSystemDestroyer_t6264C19E82E9C2EA88A77D7F639BC48C3AA7C2E7;
// UnityStandardAssets.Effects.ParticleSystemMultiplier
struct ParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646;
// UnityStandardAssets.Water.PlanarReflection
struct PlanarReflection_tB040855A4E8D0610D7C298C61F6120C8E9C565D1;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// UnityEngine.SpringJoint
struct SpringJoint_t6F2ACC63AD7C975D92271BC2DE2B564087DC27BF;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// Prime31.ThreadingCallbackHelper
struct ThreadingCallbackHelper_t8ECB03A15726D7FE39F2C3B6609167DC4A32266A;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WWW
struct WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityStandardAssets.Water.WaterBase
struct WaterBase_t0CEB2ECA42DC5F96547CC4DC9778ACC4E2B44836;
// UnityStandardAssets.Water.WaterBasic
struct WaterBasic_t9135E062059CDB484D25131E721BBD901844CB79;
// UnityStandardAssets.Effects.WaterHoseParticles
struct WaterHoseParticles_t19C0A4D7559D7C285B5B0EDCCA89F9263DAA349B;
// UnityStandardAssets.Water.WaterTile
struct WaterTile_t797672B40749CAFC551CFAD686CE4D6DB9DD9C4B;
// UnityStandardAssets.Utility.WaypointCircuit
struct WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00;
// UnityStandardAssets.Utility.WaypointProgressTracker
struct WaypointProgressTracker_t5A14ED6C34AB2CC846E5E61AE7771C908B3D61E7;
// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition
struct ReplacementDefinition_t41810CD7BE95D03FDDA88A67498F16BF332A55A1;
// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementList
struct ReplacementList_t60FF742F1E41481EC1EEE4FE13109B1BABB34446;
// UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace
struct Vector3andSpace_t6031169E96B7A6DC3CB39951D58FACDE4C07CE48;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityStandardAssets.Utility.DragRigidbody/<DragObject>d__8
struct U3CDragObjectU3Ed__8_t76CF97740EC97233518D6D4AD4AC2EE9EE6A03A4;
// Prime31.EtceteraBinding/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t12FD0ED7CB284735884F6EB4295688EF22EA4F49;
// Prime31.EtceteraBinding/<>c__DisplayClass42_0
struct U3CU3Ec__DisplayClass42_0_t23119897902E882858BC9FC825590AD2097A97D9;
// Prime31.EtceteraBinding/<getScreenShotTexture>d__2
struct U3CgetScreenShotTextureU3Ed__2_t48D4A648F028648458A208CE44150AEEC405D554;
// Prime31.EtceteraBinding/<registerDeviceWithGameThrive>d__84
struct U3CregisterDeviceWithGameThriveU3Ed__84_tFF5AC4FCC89BE2F0E4EE16C4C5A94D734F12D58A;
// Prime31.EtceteraBinding/<showMailComposerWithScreenshot>d__42
struct U3CshowMailComposerWithScreenshotU3Ed__42_t98B9366DB6B131AEA119A3C969686CF3603DA579;
// Prime31.EtceteraBinding/<takeScreenShot>d__1
struct U3CtakeScreenShotU3Ed__1_tFA00614386A052E5278DA0E689EB3B4CB03679BB;
// Prime31.EtceteraManager/<registerDeviceWithPushIO>d__85
struct U3CregisterDeviceWithPushIOU3Ed__85_t6719999B1823EC1E478A21477DB90F7A72802A50;
// Prime31.EtceteraManager/<textureFromFileAtPath>d__80
struct U3CtextureFromFileAtPathU3Ed__80_t5898EA95F2F8A5FC43FC1C32A72432B5A42F4B5E;
// UnityStandardAssets.Effects.ExplosionFireAndDebris/<Start>d__4
struct U3CStartU3Ed__4_t429A895C8D792ABF3F125B2E7509BC6A8E33D0CE;
// UnityStandardAssets.Effects.Explosive/<OnCollisionEnter>d__8
struct U3COnCollisionEnterU3Ed__8_t020C52CD35FC1E4A50E2B7149EBA881BC3B6616C;
// UnityStandardAssets.Utility.FOVKick/<FOVKickDown>d__10
struct U3CFOVKickDownU3Ed__10_tC50C8A96B0B76700D84924BB8C7BC96470490BCA;
// UnityStandardAssets.Utility.FOVKick/<FOVKickUp>d__9
struct U3CFOVKickUpU3Ed__9_t9D0D912A198B1DB69C2A7BBDEA7456C2BB6A6B97;
// UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>d__4
struct U3CDoBobCycleU3Ed__4_tA62D4FFE49541952306208027BE872CD4C667655;
// UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>d__6
struct U3CResetCoroutineU3Ed__6_t08BA996BEEB8880D65ACED889627A520D4661892;
// UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>d__4
struct U3CStartU3Ed__4_tDF77A58D2C41E1BC6C66CE72DD6821F1777DFBC9;
// UnityStandardAssets.Utility.TimedObjectActivator/<Activate>d__5
struct U3CActivateU3Ed__5_t18860C7FF698BB48D477ADEC25C19584954FD1D7;
// UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>d__6
struct U3CDeactivateU3Ed__6_t42B40BDFB507971D83117A5C10D02A199B6C97E5;
// UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>d__7
struct U3CReloadLevelU3Ed__7_t4003A0AF502E129BA3E2BC09A0C83B03E6E15359;
// UnityStandardAssets.Utility.TimedObjectActivator/Entries
struct Entries_t7A700BDBBDD25FCADAA59CF143C83E4274E2FA99;
// UnityStandardAssets.Utility.TimedObjectActivator/Entry
struct Entry_t5F1DD521166A8D7A418BCB0ED47B18DAA8F8A14E;
// UnityStandardAssets.Utility.WaypointCircuit/WaypointList
struct WaypointList_t7CA06137643274484AEDCDAA2B090C56E60FA730;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Json_tE438EA5A4F39CA21F670B3F0AB55B25568713BF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC57F1BA46C89AA33253984801D30F8502BBBFE68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReplacementDefinitionU5BU5D_t7FDBF66AC09AE6387AE2F22B4376411B47BF3420_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_t12FD0ED7CB284735884F6EB4295688EF22EA4F49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass42_0_t23119897902E882858BC9FC825590AD2097A97D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaterHoseParticles_t19C0A4D7559D7C285B5B0EDCCA89F9263DAA349B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaypointList_t7CA06137643274484AEDCDAA2B090C56E60FA730_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B8A49A0353D350D3914D9B4B8223F51C1CB133;
IL2CPP_EXTERN_C String_t* _stringLiteral09648194F4DAEE1925FA3A2FFCDA65FB619B10EC;
IL2CPP_EXTERN_C String_t* _stringLiteral0A1305C99AE63A340ABD0C7B328B426F963CC133;
IL2CPP_EXTERN_C String_t* _stringLiteral31003880CBAF84EF30B5E85A7DF016C5DE3EC47B;
IL2CPP_EXTERN_C String_t* _stringLiteral320E615ACBF6C20581547142E87C7F15192C284E;
IL2CPP_EXTERN_C String_t* _stringLiteral340B0A3FD35DE3F927CF2162AB61884251242E4B;
IL2CPP_EXTERN_C String_t* _stringLiteral3B6BA1F35F8FE78D2809A35FEF8215457FD4B7EE;
IL2CPP_EXTERN_C String_t* _stringLiteral4536F687FC942BC5736C1A683383730A00C905F2;
IL2CPP_EXTERN_C String_t* _stringLiteral4DAB16C764986A67F85370F8E257B7453A9EEA86;
IL2CPP_EXTERN_C String_t* _stringLiteral576ACDEAB8D545E1BF81B5822A74D4E20D12D841;
IL2CPP_EXTERN_C String_t* _stringLiteral5A6BA9E9044D2055C873F8A8552B581B3F8661DC;
IL2CPP_EXTERN_C String_t* _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18;
IL2CPP_EXTERN_C String_t* _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
IL2CPP_EXTERN_C String_t* _stringLiteral6B3CB2A6685B3A62DC38FEF7B6511F50EEC93B8A;
IL2CPP_EXTERN_C String_t* _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
IL2CPP_EXTERN_C String_t* _stringLiteral78F66AE37BE6E59ACD48A247E54B845C440C126B;
IL2CPP_EXTERN_C String_t* _stringLiteral83E4E7F4262A162E81C1D90BAD0F92B8FD89D7FC;
IL2CPP_EXTERN_C String_t* _stringLiteral867D47DB5A791E2DC5656A715F62E8E6A13FEF38;
IL2CPP_EXTERN_C String_t* _stringLiteral886D451FEE0B74B41A884D708F8D40636E12BBE3;
IL2CPP_EXTERN_C String_t* _stringLiteralA3E776B0A49C1C913D60A78C71AEA3EF1070C228;
IL2CPP_EXTERN_C String_t* _stringLiteralA74ACAA1F61DE0EB348EC03946685B0B6270CB36;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m48902101D8F84E0110E1EA89779FE035FC93C460_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mC6AC684CA28046738FE417C855B623D5F218A8BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mB51C80DFB46F2AD9DB1B2885836FA5C92D2451FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646_m552D01340683FACF6E28951C78FAFB573B5152A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlanarReflection_tB040855A4E8D0610D7C298C61F6120C8E9C565D1_m21153C67504633EDECE951547BBED7964831C97F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisWaterBase_t0CEB2ECA42DC5F96547CC4DC9778ACC4E2B44836_m264AC8962716B70C78F68074255523A92108D6D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m75CC9D1656BD67C760E6D5EA89403C89B728E8F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mF2B4E2828789B863B83BCBC705EDFAF6F3DCE21C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m69FA0927978855661A3EA0DC3B9AE1D00FCE4825_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mFB991F7C2A32C8DA7C4D2F522B9C69C36F7DF904_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5357493D8DA32113DC35EE95205D4E3D607C9F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7FA8CBC3A46C7349CA380C3BA7B3294C6C0FC9D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_mBEA854721D5E7717F856476B1E4563A59661CBF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m37E02ADF41F0AFB1B9BF6BE8E4BC09D48405EFAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m43B2344A6F7999E7DC4286052DCD5E0E071A4882_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mAA87A40BE77081A00704A6584F5C0113C6E636C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CActivateU3Ed__5_System_Collections_IEnumerator_Reset_mD631F4670AB5E153820DAD12D7E8B2A33964D178_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDeactivateU3Ed__6_System_Collections_IEnumerator_Reset_m8AFDD97ACF0296CE74EDDEEE1218485E21BE8320_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDoBobCycleU3Ed__4_System_Collections_IEnumerator_Reset_m2F77F4EA622835F4C42964113BC81DBCB832859E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDragObjectU3Ed__8_System_Collections_IEnumerator_Reset_m0AEB9E21FF1B24A1B88E0DDA2240CC5E49043080_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFOVKickDownU3Ed__10_System_Collections_IEnumerator_Reset_mEECEC01E883D4B1F3B9253E705166E4B1982740A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFOVKickUpU3Ed__9_System_Collections_IEnumerator_Reset_mC403C5EC7B39E7DE5C596BBD20D65FE5A8948184_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnCollisionEnterU3Ed__8_System_Collections_IEnumerator_Reset_mA1951B8237268D37AEDD21A5D281B4555EC7035A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReloadLevelU3Ed__7_System_Collections_IEnumerator_Reset_m5A4A5FE07E36A0D08841E35F4FCD63345938E6A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CResetCoroutineU3Ed__6_System_Collections_IEnumerator_Reset_m9BE88AE5FABECABD61A9987DF663BCC4ACD32A51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__4_System_Collections_IEnumerator_Reset_m2BB59D8DCF48F964C94151BCA2E18260F1CA05F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__4_System_Collections_IEnumerator_Reset_m642B2AA2E5737E4F7B91EEF4B86120332083FC6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CtakeScreenShotU3Eb__0_m39CD9E16762EFAFFFB69AB6CF4E8C6A273BE71F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass42_0_U3CshowMailComposerWithScreenshotU3Eb__0_m52A044D9E1E687BF012197462B3310AFC8AC3D8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CgetScreenShotTextureU3Ed__2_System_Collections_IEnumerator_Reset_m2CD516CCE8BA11E3BF86B7B3FE8571EEC09F3860_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CregisterDeviceWithGameThriveU3Ed__84_System_Collections_IEnumerator_Reset_m044FB1C36AE03BC55FC71E1F7312106B7ABE0777_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CregisterDeviceWithPushIOU3Ed__85_System_Collections_IEnumerator_Reset_m4BCE141CD0A096773A7E4C2CA8F647E8145F0B6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CshowMailComposerWithScreenshotU3Ed__42_System_Collections_IEnumerator_Reset_m06BC05F85EB04673F7764B50DFC37C984A1BFECB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CtakeScreenShotU3Ed__1_System_Collections_IEnumerator_Reset_mB47BBEC0C9D44BB3B7541EBAFBBC4682482079F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CtextureFromFileAtPathU3Ed__80_System_Collections_IEnumerator_Reset_mCFA1EAE62F6136A62655E8682167316C698E3160_RuntimeMethod_var;
struct ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486;
struct ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ParticleCollisionEventU5BU5D_t62880785FE50C001432E57E6D83BF3BD7BD3183A;
struct ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
struct ReplacementDefinitionU5BU5D_t7FDBF66AC09AE6387AE2F22B4376411B47BF3420;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct  Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
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


// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct  KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D, ___dictionary_0)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>
struct  List_1_tC57F1BA46C89AA33253984801D30F8502BBBFE68  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ParticleCollisionEventU5BU5D_t62880785FE50C001432E57E6D83BF3BD7BD3183A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC57F1BA46C89AA33253984801D30F8502BBBFE68, ____items_1)); }
	inline ParticleCollisionEventU5BU5D_t62880785FE50C001432E57E6D83BF3BD7BD3183A* get__items_1() const { return ____items_1; }
	inline ParticleCollisionEventU5BU5D_t62880785FE50C001432E57E6D83BF3BD7BD3183A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ParticleCollisionEventU5BU5D_t62880785FE50C001432E57E6D83BF3BD7BD3183A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC57F1BA46C89AA33253984801D30F8502BBBFE68, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC57F1BA46C89AA33253984801D30F8502BBBFE68, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC57F1BA46C89AA33253984801D30F8502BBBFE68, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC57F1BA46C89AA33253984801D30F8502BBBFE68_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ParticleCollisionEventU5BU5D_t62880785FE50C001432E57E6D83BF3BD7BD3183A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC57F1BA46C89AA33253984801D30F8502BBBFE68_StaticFields, ____emptyArray_5)); }
	inline ParticleCollisionEventU5BU5D_t62880785FE50C001432E57E6D83BF3BD7BD3183A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ParticleCollisionEventU5BU5D_t62880785FE50C001432E57E6D83BF3BD7BD3183A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ParticleCollisionEventU5BU5D_t62880785FE50C001432E57E6D83BF3BD7BD3183A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Transform>
struct  List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____items_1)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_StaticFields, ____emptyArray_5)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// System.Text.Encoding
struct  Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// UnityStandardAssets.Utility.FOVKick
struct  FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE  : public RuntimeObject
{
public:
	// UnityEngine.Camera UnityStandardAssets.Utility.FOVKick::Camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___Camera_0;
	// System.Single UnityStandardAssets.Utility.FOVKick::originalFov
	float ___originalFov_1;
	// System.Single UnityStandardAssets.Utility.FOVKick::FOVIncrease
	float ___FOVIncrease_2;
	// System.Single UnityStandardAssets.Utility.FOVKick::TimeToIncrease
	float ___TimeToIncrease_3;
	// System.Single UnityStandardAssets.Utility.FOVKick::TimeToDecrease
	float ___TimeToDecrease_4;
	// UnityEngine.AnimationCurve UnityStandardAssets.Utility.FOVKick::IncreaseCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___IncreaseCurve_5;

public:
	inline static int32_t get_offset_of_Camera_0() { return static_cast<int32_t>(offsetof(FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE, ___Camera_0)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_Camera_0() const { return ___Camera_0; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_Camera_0() { return &___Camera_0; }
	inline void set_Camera_0(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___Camera_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Camera_0), (void*)value);
	}

	inline static int32_t get_offset_of_originalFov_1() { return static_cast<int32_t>(offsetof(FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE, ___originalFov_1)); }
	inline float get_originalFov_1() const { return ___originalFov_1; }
	inline float* get_address_of_originalFov_1() { return &___originalFov_1; }
	inline void set_originalFov_1(float value)
	{
		___originalFov_1 = value;
	}

	inline static int32_t get_offset_of_FOVIncrease_2() { return static_cast<int32_t>(offsetof(FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE, ___FOVIncrease_2)); }
	inline float get_FOVIncrease_2() const { return ___FOVIncrease_2; }
	inline float* get_address_of_FOVIncrease_2() { return &___FOVIncrease_2; }
	inline void set_FOVIncrease_2(float value)
	{
		___FOVIncrease_2 = value;
	}

	inline static int32_t get_offset_of_TimeToIncrease_3() { return static_cast<int32_t>(offsetof(FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE, ___TimeToIncrease_3)); }
	inline float get_TimeToIncrease_3() const { return ___TimeToIncrease_3; }
	inline float* get_address_of_TimeToIncrease_3() { return &___TimeToIncrease_3; }
	inline void set_TimeToIncrease_3(float value)
	{
		___TimeToIncrease_3 = value;
	}

	inline static int32_t get_offset_of_TimeToDecrease_4() { return static_cast<int32_t>(offsetof(FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE, ___TimeToDecrease_4)); }
	inline float get_TimeToDecrease_4() const { return ___TimeToDecrease_4; }
	inline float* get_address_of_TimeToDecrease_4() { return &___TimeToDecrease_4; }
	inline void set_TimeToDecrease_4(float value)
	{
		___TimeToDecrease_4 = value;
	}

	inline static int32_t get_offset_of_IncreaseCurve_5() { return static_cast<int32_t>(offsetof(FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE, ___IncreaseCurve_5)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_IncreaseCurve_5() const { return ___IncreaseCurve_5; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_IncreaseCurve_5() { return &___IncreaseCurve_5; }
	inline void set_IncreaseCurve_5(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___IncreaseCurve_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IncreaseCurve_5), (void*)value);
	}
};


// UnityStandardAssets.Utility.LerpControlledBob
struct  LerpControlledBob_t3A136B4FE24CC2F41EB6CFF54A2FDC0122E7A238  : public RuntimeObject
{
public:
	// System.Single UnityStandardAssets.Utility.LerpControlledBob::BobDuration
	float ___BobDuration_0;
	// System.Single UnityStandardAssets.Utility.LerpControlledBob::BobAmount
	float ___BobAmount_1;
	// System.Single UnityStandardAssets.Utility.LerpControlledBob::m_Offset
	float ___m_Offset_2;

public:
	inline static int32_t get_offset_of_BobDuration_0() { return static_cast<int32_t>(offsetof(LerpControlledBob_t3A136B4FE24CC2F41EB6CFF54A2FDC0122E7A238, ___BobDuration_0)); }
	inline float get_BobDuration_0() const { return ___BobDuration_0; }
	inline float* get_address_of_BobDuration_0() { return &___BobDuration_0; }
	inline void set_BobDuration_0(float value)
	{
		___BobDuration_0 = value;
	}

	inline static int32_t get_offset_of_BobAmount_1() { return static_cast<int32_t>(offsetof(LerpControlledBob_t3A136B4FE24CC2F41EB6CFF54A2FDC0122E7A238, ___BobAmount_1)); }
	inline float get_BobAmount_1() const { return ___BobAmount_1; }
	inline float* get_address_of_BobAmount_1() { return &___BobAmount_1; }
	inline void set_BobAmount_1(float value)
	{
		___BobAmount_1 = value;
	}

	inline static int32_t get_offset_of_m_Offset_2() { return static_cast<int32_t>(offsetof(LerpControlledBob_t3A136B4FE24CC2F41EB6CFF54A2FDC0122E7A238, ___m_Offset_2)); }
	inline float get_m_Offset_2() const { return ___m_Offset_2; }
	inline float* get_address_of_m_Offset_2() { return &___m_Offset_2; }
	inline void set_m_Offset_2(float value)
	{
		___m_Offset_2 = value;
	}
};


// System.String
struct  String_t  : public RuntimeObject
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


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
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

// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition
struct  ReplacementDefinition_t41810CD7BE95D03FDDA88A67498F16BF332A55A1  : public RuntimeObject
{
public:
	// UnityEngine.Shader UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition::original
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___original_0;
	// UnityEngine.Shader UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition::replacement
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___replacement_1;

public:
	inline static int32_t get_offset_of_original_0() { return static_cast<int32_t>(offsetof(ReplacementDefinition_t41810CD7BE95D03FDDA88A67498F16BF332A55A1, ___original_0)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_original_0() const { return ___original_0; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_original_0() { return &___original_0; }
	inline void set_original_0(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___original_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_0), (void*)value);
	}

	inline static int32_t get_offset_of_replacement_1() { return static_cast<int32_t>(offsetof(ReplacementDefinition_t41810CD7BE95D03FDDA88A67498F16BF332A55A1, ___replacement_1)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_replacement_1() const { return ___replacement_1; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_replacement_1() { return &___replacement_1; }
	inline void set_replacement_1(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___replacement_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___replacement_1), (void*)value);
	}
};


// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementList
struct  ReplacementList_t60FF742F1E41481EC1EEE4FE13109B1BABB34446  : public RuntimeObject
{
public:
	// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition[] UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementList::items
	ReplacementDefinitionU5BU5D_t7FDBF66AC09AE6387AE2F22B4376411B47BF3420* ___items_0;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(ReplacementList_t60FF742F1E41481EC1EEE4FE13109B1BABB34446, ___items_0)); }
	inline ReplacementDefinitionU5BU5D_t7FDBF66AC09AE6387AE2F22B4376411B47BF3420* get_items_0() const { return ___items_0; }
	inline ReplacementDefinitionU5BU5D_t7FDBF66AC09AE6387AE2F22B4376411B47BF3420** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(ReplacementDefinitionU5BU5D_t7FDBF66AC09AE6387AE2F22B4376411B47BF3420* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_0), (void*)value);
	}
};


// UnityStandardAssets.Utility.DragRigidbody/<DragObject>d__8
struct  U3CDragObjectU3Ed__8_t76CF97740EC97233518D6D4AD4AC2EE9EE6A03A4  : public RuntimeObject
{
public:
	// System.Int32 UnityStandardAssets.Utility.DragRigidbody/<DragObject>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityStandardAssets.Utility.DragRigidbody/<DragObject>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityStandardAssets.Utility.DragRigidbody UnityStandardAssets.Utility.DragRigidbody/<DragObject>d__8::<>4__this
	DragRigidbody_t9D0FAFD76BB0876EC4A6505ABC0FE018022CF7BD * ___U3CU3E4__this_2;
	// System.Single UnityStandardAssets.Utility.DragRigidbody/<DragObject>d__8::distance
	float ___distance_3;
	// System.Single UnityStandardAssets.Utility.DragRigidbody/<DragObject>d__8::<oldDrag>5__2
	float ___U3ColdDragU3E5__2_4;
	// System.Single UnityStandardAssets.Utility.DragRigidbody/<DragObject>d__8::<oldAngularDrag>5__3
	float ___U3ColdAngularDragU3E5__3_5;
	// UnityEngine.Camera UnityStandardAssets.Utility.DragRigidbody/<DragObject>d__8::<mainCamera>5__4
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___U3CmainCameraU3E5__4_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDragObjectU3Ed__8_t76CF97740EC97233518D6D4AD4AC2EE9EE6A03A4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDragObjectU3Ed__8_t76CF97740EC97233518D6D4AD4AC2EE9EE6A03A4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDragObjectU3Ed__8_t76CF97740EC97233518D6D4AD4AC2EE9EE6A03A4, ___U3CU3E4__this_2)); }
	inline DragRigidbody_t9D0FAFD76BB0876EC4A6505ABC0FE018022CF7BD * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline DragRigidbody_t9D0FAFD76BB0876EC4A6505ABC0FE018022CF7BD ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(DragRigidbody_t9D0FAFD76BB0876EC4A6505ABC0FE018022CF7BD * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_distance_3() { return static_cast<int32_t>(offsetof(U3CDragObjectU3Ed__8_t76CF97740EC97233518D6D4AD4AC2EE9EE6A03A4, ___distance_3)); }
	inline float get_distance_3() const { return ___distance_3; }
	inline float* get_address_of_distance_3() { return &___distance_3; }
	inline void set_distance_3(float value)
	{
		___distance_3 = value;
	}

	inline static int32_t get_offset_of_U3ColdDragU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CDragObjectU3Ed__8_t76CF97740EC97233518D6D4AD4AC2EE9EE6A03A4, ___U3ColdDragU3E5__2_4)); }
	inline float get_U3ColdDragU3E5__2_4() const { return ___U3ColdDragU3E5__2_4; }
	inline float* get_address_of_U3ColdDragU3E5__2_4() { return &___U3ColdDragU3E5__2_4; }
	inline void set_U3ColdDragU3E5__2_4(float value)
	{
		___U3ColdDragU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3ColdAngularDragU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CDragObjectU3Ed__8_t76CF97740EC97233518D6D4AD4AC2EE9EE6A03A4, ___U3ColdAngularDragU3E5__3_5)); }
	inline float get_U3ColdAngularDragU3E5__3_5() const { return ___U3ColdAngularDragU3E5__3_5; }
	inline float* get_address_of_U3ColdAngularDragU3E5__3_5() { return &___U3ColdAngularDragU3E5__3_5; }
	inline void set_U3ColdAngularDragU3E5__3_5(float value)
	{
		___U3ColdAngularDragU3E5__3_5 = value;
	}

	inline static int32_t get_offset_of_U3CmainCameraU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CDragObjectU3Ed__8_t76CF97740EC97233518D6D4AD4AC2EE9EE6A03A4, ___U3CmainCameraU3E5__4_6)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_U3CmainCameraU3E5__4_6() const { return ___U3CmainCameraU3E5__4_6; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_U3CmainCameraU3E5__4_6() { return &___U3CmainCameraU3E5__4_6; }
	inline void set_U3CmainCameraU3E5__4_6(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___U3CmainCameraU3E5__4_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmainCameraU3E5__4_6), (void*)value);
	}
};


// Prime31.EtceteraBinding/<>c__DisplayClass1_0
struct  U3CU3Ec__DisplayClass1_0_t12FD0ED7CB284735884F6EB4295688EF22EA4F49  : public RuntimeObject
{
public:
	// System.String Prime31.EtceteraBinding/<>c__DisplayClass1_0::filename
	String_t* ___filename_0;
	// System.Action`1<System.String> Prime31.EtceteraBinding/<>c__DisplayClass1_0::completionHandler
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___completionHandler_1;

public:
	inline static int32_t get_offset_of_filename_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t12FD0ED7CB284735884F6EB4295688EF22EA4F49, ___filename_0)); }
	inline String_t* get_filename_0() const { return ___filename_0; }
	inline String_t** get_address_of_filename_0() { return &___filename_0; }
	inline void set_filename_0(String_t* value)
	{
		___filename_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___filename_0), (void*)value);
	}

	inline static int32_t get_offset_of_completionHandler_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t12FD0ED7CB284735884F6EB4295688EF22EA4F49, ___completionHandler_1)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_completionHandler_1() const { return ___completionHandler_1; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_completionHandler_1() { return &___completionHandler_1; }
	inline void set_completionHandler_1(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___completionHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___completionHandler_1), (void*)value);
	}
};


// Prime31.EtceteraBinding/<>c__DisplayClass42_0
struct  U3CU3Ec__DisplayClass42_0_t23119897902E882858BC9FC825590AD2097A97D9  : public RuntimeObject
{
public:
	// System.String Prime31.EtceteraBinding/<>c__DisplayClass42_0::toAddress
	String_t* ___toAddress_0;
	// System.String Prime31.EtceteraBinding/<>c__DisplayClass42_0::subject
	String_t* ___subject_1;
	// System.String Prime31.EtceteraBinding/<>c__DisplayClass42_0::body
	String_t* ___body_2;
	// System.Boolean Prime31.EtceteraBinding/<>c__DisplayClass42_0::isHTML
	bool ___isHTML_3;

public:
	inline static int32_t get_offset_of_toAddress_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass42_0_t23119897902E882858BC9FC825590AD2097A97D9, ___toAddress_0)); }
	inline String_t* get_toAddress_0() const { return ___toAddress_0; }
	inline String_t** get_address_of_toAddress_0() { return &___toAddress_0; }
	inline void set_toAddress_0(String_t* value)
	{
		___toAddress_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toAddress_0), (void*)value);
	}

	inline static int32_t get_offset_of_subject_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass42_0_t23119897902E882858BC9FC825590AD2097A97D9, ___subject_1)); }
	inline String_t* get_subject_1() const { return ___subject_1; }
	inline String_t** get_address_of_subject_1() { return &___subject_1; }
	inline void set_subject_1(String_t* value)
	{
		___subject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subject_1), (void*)value);
	}

	inline static int32_t get_offset_of_body_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass42_0_t23119897902E882858BC9FC825590AD2097A97D9, ___body_2)); }
	inline String_t* get_body_2() const { return ___body_2; }
	inline String_t** get_address_of_body_2() { return &___body_2; }
	inline void set_body_2(String_t* value)
	{
		___body_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___body_2), (void*)value);
	}

	inline static int32_t get_offset_of_isHTML_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass42_0_t23119897902E882858BC9FC825590AD2097A97D9, ___isHTML_3)); }
	inline bool get_isHTML_3() const { return ___isHTML_3; }
	inline bool* get_address_of_isHTML_3() { return &___isHTML_3; }
	inline void set_isHTML_3(bool value)
	{
		___isHTML_3 = value;
	}
};


// Prime31.EtceteraBinding/<getScreenShotTexture>d__2
struct  U3CgetScreenShotTextureU3Ed__2_t48D4A648F028648458A208CE44150AEEC405D554  : public RuntimeObject
{
public:
	// System.Int32 Prime31.EtceteraBinding/<getScreenShotTexture>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Prime31.EtceteraBinding/<getScreenShotTexture>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Action`1<UnityEngine.Texture2D> Prime31.EtceteraBinding/<getScreenShotTexture>d__2::completionHandler
	Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA * ___completionHandler_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CgetScreenShotTextureU3Ed__2_t48D4A648F028648458A208CE44150AEEC405D554, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CgetScreenShotTextureU3Ed__2_t48D4A648F028648458A208CE44150AEEC405D554, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_completionHandler_2() { return static_cast<int32_t>(offsetof(U3CgetScreenShotTextureU3Ed__2_t48D4A648F028648458A208CE44150AEEC405D554, ___completionHandler_2)); }
	inline Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA * get_completionHandler_2() const { return ___completionHandler_2; }
	inline Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA ** get_address_of_completionHandler_2() { return &___completionHandler_2; }
	inline void set_completionHandler_2(Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA * value)
	{
		___completionHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___completionHandler_2), (void*)value);
	}
};


// Prime31.EtceteraBinding/<registerDeviceWithGameThrive>d__84
struct  U3CregisterDeviceWithGameThriveU3Ed__84_tFF5AC4FCC89BE2F0E4EE16C4C5A94D734F12D58A  : public RuntimeObject
{
public:
	// System.Int32 Prime31.EtceteraBinding/<registerDeviceWithGameThrive>d__84::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Prime31.EtceteraBinding/<registerDeviceWithGameThrive>d__84::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.String Prime31.EtceteraBinding/<registerDeviceWithGameThrive>d__84::gameThriveAppId
	String_t* ___gameThriveAppId_2;
	// System.String Prime31.EtceteraBinding/<registerDeviceWithGameThrive>d__84::deviceToken
	String_t* ___deviceToken_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Prime31.EtceteraBinding/<registerDeviceWithGameThrive>d__84::additionalParameters
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___additionalParameters_4;
	// System.Action`1<UnityEngine.WWW> Prime31.EtceteraBinding/<registerDeviceWithGameThrive>d__84::completionHandler
	Action_1_t09F80ED9165FB471660E59814CE3452EF1D8B5CD * ___completionHandler_5;
	// UnityEngine.WWW Prime31.EtceteraBinding/<registerDeviceWithGameThrive>d__84::<www>5__2
	WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * ___U3CwwwU3E5__2_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CregisterDeviceWithGameThriveU3Ed__84_tFF5AC4FCC89BE2F0E4EE16C4C5A94D734F12D58A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CregisterDeviceWithGameThriveU3Ed__84_tFF5AC4FCC89BE2F0E4EE16C4C5A94D734F12D58A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_gameThriveAppId_2() { return static_cast<int32_t>(offsetof(U3CregisterDeviceWithGameThriveU3Ed__84_tFF5AC4FCC89BE2F0E4EE16C4C5A94D734F12D58A, ___gameThriveAppId_2)); }
	inline String_t* get_gameThriveAppId_2() const { return ___gameThriveAppId_2; }
	inline String_t** get_address_of_gameThriveAppId_2() { return &___gameThriveAppId_2; }
	inline void set_gameThriveAppId_2(String_t* value)
	{
		___gameThriveAppId_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameThriveAppId_2), (void*)value);
	}

	inline static int32_t get_offset_of_deviceToken_3() { return static_cast<int32_t>(offsetof(U3CregisterDeviceWithGameThriveU3Ed__84_tFF5AC4FCC89BE2F0E4EE16C4C5A94D734F12D58A, ___deviceToken_3)); }
	inline String_t* get_deviceToken_3() const { return ___deviceToken_3; }
	inline String_t** get_address_of_deviceToken_3() { return &___deviceToken_3; }
	inline void set_deviceToken_3(String_t* value)
	{
		___deviceToken_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deviceToken_3), (void*)value);
	}

	inline static int32_t get_offset_of_additionalParameters_4() { return static_cast<int32_t>(offsetof(U3CregisterDeviceWithGameThriveU3Ed__84_tFF5AC4FCC89BE2F0E4EE16C4C5A94D734F12D58A, ___additionalParameters_4)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_additionalParameters_4() const { return ___additionalParameters_4; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_additionalParameters_4() { return &___additionalParameters_4; }
	inline void set_additionalParameters_4(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___additionalParameters_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalParameters_4), (void*)value);
	}

	inline static int32_t get_offset_of_completionHandler_5() { return static_cast<int32_t>(offsetof(U3CregisterDeviceWithGameThriveU3Ed__84_tFF5AC4FCC89BE2F0E4EE16C4C5A94D734F12D58A, ___completionHandler_5)); }
	inline Action_1_t09F80ED9165FB471660E59814CE3452EF1D8B5CD * get_completionHandler_5() const { return ___completionHandler_5; }
	inline Action_1_t09F80ED9165FB471660E59814CE3452EF1D8B5CD ** get_address_of_completionHandler_5() { return &___completionHandler_5; }
	inline void set_completionHandler_5(Action_1_t09F80ED9165FB471660E59814CE3452EF1D8B5CD * value)
	{
		___completionHandler_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___completionHandler_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CregisterDeviceWithGameThriveU3Ed__84_tFF5AC4FCC89BE2F0E4EE16C4C5A94D734F12D58A, ___U3CwwwU3E5__2_6)); }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * get_U3CwwwU3E5__2_6() const { return ___U3CwwwU3E5__2_6; }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 ** get_address_of_U3CwwwU3E5__2_6() { return &___U3CwwwU3E5__2_6; }
	inline void set_U3CwwwU3E5__2_6(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * value)
	{
		___U3CwwwU3E5__2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwwwU3E5__2_6), (void*)value);
	}
};


// Prime31.EtceteraBinding/<showMailComposerWithScreenshot>d__42
struct  U3CshowMailComposerWithScreenshotU3Ed__42_t98B9366DB6B131AEA119A3C969686CF3603DA579  : public RuntimeObject
{
public:
	// System.Int32 Prime31.EtceteraBinding/<showMailComposerWithScreenshot>d__42::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Prime31.EtceteraBinding/<showMailComposerWithScreenshot>d__42::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.String Prime31.EtceteraBinding/<showMailComposerWithScreenshot>d__42::toAddress
	String_t* ___toAddress_2;
	// System.String Prime31.EtceteraBinding/<showMailComposerWithScreenshot>d__42::subject
	String_t* ___subject_3;
	// System.String Prime31.EtceteraBinding/<showMailComposerWithScreenshot>d__42::body
	String_t* ___body_4;
	// System.Boolean Prime31.EtceteraBinding/<showMailComposerWithScreenshot>d__42::isHTML
	bool ___isHTML_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CshowMailComposerWithScreenshotU3Ed__42_t98B9366DB6B131AEA119A3C969686CF3603DA579, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CshowMailComposerWithScreenshotU3Ed__42_t98B9366DB6B131AEA119A3C969686CF3603DA579, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_toAddress_2() { return static_cast<int32_t>(offsetof(U3CshowMailComposerWithScreenshotU3Ed__42_t98B9366DB6B131AEA119A3C969686CF3603DA579, ___toAddress_2)); }
	inline String_t* get_toAddress_2() const { return ___toAddress_2; }
	inline String_t** get_address_of_toAddress_2() { return &___toAddress_2; }
	inline void set_toAddress_2(String_t* value)
	{
		___toAddress_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toAddress_2), (void*)value);
	}

	inline static int32_t get_offset_of_subject_3() { return static_cast<int32_t>(offsetof(U3CshowMailComposerWithScreenshotU3Ed__42_t98B9366DB6B131AEA119A3C969686CF3603DA579, ___subject_3)); }
	inline String_t* get_subject_3() const { return ___subject_3; }
	inline String_t** get_address_of_subject_3() { return &___subject_3; }
	inline void set_subject_3(String_t* value)
	{
		___subject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subject_3), (void*)value);
	}

	inline static int32_t get_offset_of_body_4() { return static_cast<int32_t>(offsetof(U3CshowMailComposerWithScreenshotU3Ed__42_t98B9366DB6B131AEA119A3C969686CF3603DA579, ___body_4)); }
	inline String_t* get_body_4() const { return ___body_4; }
	inline String_t** get_address_of_body_4() { return &___body_4; }
	inline void set_body_4(String_t* value)
	{
		___body_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___body_4), (void*)value);
	}

	inline static int32_t get_offset_of_isHTML_5() { return static_cast<int32_t>(offsetof(U3CshowMailComposerWithScreenshotU3Ed__42_t98B9366DB6B131AEA119A3C969686CF3603DA579, ___isHTML_5)); }
	inline bool get_isHTML_5() const { return ___isHTML_5; }
	inline bool* get_address_of_isHTML_5() { return &___isHTML_5; }
	inline void set_isHTML_5(bool value)
	{
		___isHTML_5 = value;
	}
};


// Prime31.EtceteraBinding/<takeScreenShot>d__1
struct  U3CtakeScreenShotU3Ed__1_tFA00614386A052E5278DA0E689EB3B4CB03679BB  : public RuntimeObject
{
public:
	// System.Int32 Prime31.EtceteraBinding/<takeScreenShot>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Prime31.EtceteraBinding/<takeScreenShot>d__1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.String Prime31.EtceteraBinding/<takeScreenShot>d__1::filename
	String_t* ___filename_2;
	// System.Action`1<System.String> Prime31.EtceteraBinding/<takeScreenShot>d__1::completionHandler
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___completionHandler_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CtakeScreenShotU3Ed__1_tFA00614386A052E5278DA0E689EB3B4CB03679BB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CtakeScreenShotU3Ed__1_tFA00614386A052E5278DA0E689EB3B4CB03679BB, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_filename_2() { return static_cast<int32_t>(offsetof(U3CtakeScreenShotU3Ed__1_tFA00614386A052E5278DA0E689EB3B4CB03679BB, ___filename_2)); }
	inline String_t* get_filename_2() const { return ___filename_2; }
	inline String_t** get_address_of_filename_2() { return &___filename_2; }
	inline void set_filename_2(String_t* value)
	{
		___filename_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___filename_2), (void*)value);
	}

	inline static int32_t get_offset_of_completionHandler_3() { return static_cast<int32_t>(offsetof(U3CtakeScreenShotU3Ed__1_tFA00614386A052E5278DA0E689EB3B4CB03679BB, ___completionHandler_3)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_completionHandler_3() const { return ___completionHandler_3; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_completionHandler_3() { return &___completionHandler_3; }
	inline void set_completionHandler_3(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___completionHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___completionHandler_3), (void*)value);
	}
};


// Prime31.EtceteraManager/<registerDeviceWithPushIO>d__85
struct  U3CregisterDeviceWithPushIOU3Ed__85_t6719999B1823EC1E478A21477DB90F7A72802A50  : public RuntimeObject
{
public:
	// System.Int32 Prime31.EtceteraManager/<registerDeviceWithPushIO>d__85::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Prime31.EtceteraManager/<registerDeviceWithPushIO>d__85::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.WWW Prime31.EtceteraManager/<registerDeviceWithPushIO>d__85::<www>5__2
	WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * ___U3CwwwU3E5__2_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CregisterDeviceWithPushIOU3Ed__85_t6719999B1823EC1E478A21477DB90F7A72802A50, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CregisterDeviceWithPushIOU3Ed__85_t6719999B1823EC1E478A21477DB90F7A72802A50, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_2() { return static_cast<int32_t>(offsetof(U3CregisterDeviceWithPushIOU3Ed__85_t6719999B1823EC1E478A21477DB90F7A72802A50, ___U3CwwwU3E5__2_2)); }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * get_U3CwwwU3E5__2_2() const { return ___U3CwwwU3E5__2_2; }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 ** get_address_of_U3CwwwU3E5__2_2() { return &___U3CwwwU3E5__2_2; }
	inline void set_U3CwwwU3E5__2_2(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * value)
	{
		___U3CwwwU3E5__2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwwwU3E5__2_2), (void*)value);
	}
};


// Prime31.EtceteraManager/<textureFromFileAtPath>d__80
struct  U3CtextureFromFileAtPathU3Ed__80_t5898EA95F2F8A5FC43FC1C32A72432B5A42F4B5E  : public RuntimeObject
{
public:
	// System.Int32 Prime31.EtceteraManager/<textureFromFileAtPath>d__80::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Prime31.EtceteraManager/<textureFromFileAtPath>d__80::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.String Prime31.EtceteraManager/<textureFromFileAtPath>d__80::filePath
	String_t* ___filePath_2;
	// System.Action`1<System.String> Prime31.EtceteraManager/<textureFromFileAtPath>d__80::errorDel
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___errorDel_3;
	// System.Action`1<UnityEngine.Texture2D> Prime31.EtceteraManager/<textureFromFileAtPath>d__80::del
	Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA * ___del_4;
	// UnityEngine.WWW Prime31.EtceteraManager/<textureFromFileAtPath>d__80::<www>5__2
	WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * ___U3CwwwU3E5__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CtextureFromFileAtPathU3Ed__80_t5898EA95F2F8A5FC43FC1C32A72432B5A42F4B5E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CtextureFromFileAtPathU3Ed__80_t5898EA95F2F8A5FC43FC1C32A72432B5A42F4B5E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_filePath_2() { return static_cast<int32_t>(offsetof(U3CtextureFromFileAtPathU3Ed__80_t5898EA95F2F8A5FC43FC1C32A72432B5A42F4B5E, ___filePath_2)); }
	inline String_t* get_filePath_2() const { return ___filePath_2; }
	inline String_t** get_address_of_filePath_2() { return &___filePath_2; }
	inline void set_filePath_2(String_t* value)
	{
		___filePath_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___filePath_2), (void*)value);
	}

	inline static int32_t get_offset_of_errorDel_3() { return static_cast<int32_t>(offsetof(U3CtextureFromFileAtPathU3Ed__80_t5898EA95F2F8A5FC43FC1C32A72432B5A42F4B5E, ___errorDel_3)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_errorDel_3() const { return ___errorDel_3; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_errorDel_3() { return &___errorDel_3; }
	inline void set_errorDel_3(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___errorDel_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___errorDel_3), (void*)value);
	}

	inline static int32_t get_offset_of_del_4() { return static_cast<int32_t>(offsetof(U3CtextureFromFileAtPathU3Ed__80_t5898EA95F2F8A5FC43FC1C32A72432B5A42F4B5E, ___del_4)); }
	inline Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA * get_del_4() const { return ___del_4; }
	inline Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA ** get_address_of_del_4() { return &___del_4; }
	inline void set_del_4(Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA * value)
	{
		___del_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___del_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CtextureFromFileAtPathU3Ed__80_t5898EA95F2F8A5FC43FC1C32A72432B5A42F4B5E, ___U3CwwwU3E5__2_5)); }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * get_U3CwwwU3E5__2_5() const { return ___U3CwwwU3E5__2_5; }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 ** get_address_of_U3CwwwU3E5__2_5() { return &___U3CwwwU3E5__2_5; }
	inline void set_U3CwwwU3E5__2_5(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * value)
	{
		___U3CwwwU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwwwU3E5__2_5), (void*)value);
	}
};


// UnityStandardAssets.Effects.ExplosionFireAndDebris/<Start>d__4
struct  U3CStartU3Ed__4_t429A895C8D792ABF3F125B2E7509BC6A8E33D0CE  : public RuntimeObject
{
public:
	// System.Int32 UnityStandardAssets.Effects.ExplosionFireAndDebris/<Start>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityStandardAssets.Effects.ExplosionFireAndDebris/<Start>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityStandardAssets.Effects.ExplosionFireAndDebris UnityStandardAssets.Effects.ExplosionFireAndDebris/<Start>d__4::<>4__this
	ExplosionFireAndDebris_tF9445209A9E843303ED79A22E876FE0DB75A5811 * ___U3CU3E4__this_2;
	// System.Single UnityStandardAssets.Effects.ExplosionFireAndDebris/<Start>d__4::<multiplier>5__2
	float ___U3CmultiplierU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__4_t429A895C8D792ABF3F125B2E7509BC6A8E33D0CE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__4_t429A895C8D792ABF3F125B2E7509BC6A8E33D0CE, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__4_t429A895C8D792ABF3F125B2E7509BC6A8E33D0CE, ___U3CU3E4__this_2)); }
	inline ExplosionFireAndDebris_tF9445209A9E843303ED79A22E876FE0DB75A5811 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ExplosionFireAndDebris_tF9445209A9E843303ED79A22E876FE0DB75A5811 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ExplosionFireAndDebris_tF9445209A9E843303ED79A22E876FE0DB75A5811 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmultiplierU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__4_t429A895C8D792ABF3F125B2E7509BC6A8E33D0CE, ___U3CmultiplierU3E5__2_3)); }
	inline float get_U3CmultiplierU3E5__2_3() const { return ___U3CmultiplierU3E5__2_3; }
	inline float* get_address_of_U3CmultiplierU3E5__2_3() { return &___U3CmultiplierU3E5__2_3; }
	inline void set_U3CmultiplierU3E5__2_3(float value)
	{
		___U3CmultiplierU3E5__2_3 = value;
	}
};


// UnityStandardAssets.Effects.Explosive/<OnCollisionEnter>d__8
struct  U3COnCollisionEnterU3Ed__8_t020C52CD35FC1E4A50E2B7149EBA881BC3B6616C  : public RuntimeObject
{
public:
	// System.Int32 UnityStandardAssets.Effects.Explosive/<OnCollisionEnter>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityStandardAssets.Effects.Explosive/<OnCollisionEnter>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityStandardAssets.Effects.Explosive UnityStandardAssets.Effects.Explosive/<OnCollisionEnter>d__8::<>4__this
	Explosive_t35EC7643F888FA175DDBE61BE15F0662512C0BC0 * ___U3CU3E4__this_2;
	// UnityEngine.Collision UnityStandardAssets.Effects.Explosive/<OnCollisionEnter>d__8::col
	Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___col_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3COnCollisionEnterU3Ed__8_t020C52CD35FC1E4A50E2B7149EBA881BC3B6616C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3COnCollisionEnterU3Ed__8_t020C52CD35FC1E4A50E2B7149EBA881BC3B6616C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3COnCollisionEnterU3Ed__8_t020C52CD35FC1E4A50E2B7149EBA881BC3B6616C, ___U3CU3E4__this_2)); }
	inline Explosive_t35EC7643F888FA175DDBE61BE15F0662512C0BC0 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Explosive_t35EC7643F888FA175DDBE61BE15F0662512C0BC0 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Explosive_t35EC7643F888FA175DDBE61BE15F0662512C0BC0 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_col_3() { return static_cast<int32_t>(offsetof(U3COnCollisionEnterU3Ed__8_t020C52CD35FC1E4A50E2B7149EBA881BC3B6616C, ___col_3)); }
	inline Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * get_col_3() const { return ___col_3; }
	inline Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 ** get_address_of_col_3() { return &___col_3; }
	inline void set_col_3(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * value)
	{
		___col_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___col_3), (void*)value);
	}
};


// UnityStandardAssets.Utility.FOVKick/<FOVKickDown>d__10
struct  U3CFOVKickDownU3Ed__10_tC50C8A96B0B76700D84924BB8C7BC96470490BCA  : public RuntimeObject
{
public:
	// System.Int32 UnityStandardAssets.Utility.FOVKick/<FOVKickDown>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickDown>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityStandardAssets.Utility.FOVKick UnityStandardAssets.Utility.FOVKick/<FOVKickDown>d__10::<>4__this
	FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE * ___U3CU3E4__this_2;
	// System.Single UnityStandardAssets.Utility.FOVKick/<FOVKickDown>d__10::<t>5__2
	float ___U3CtU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFOVKickDownU3Ed__10_tC50C8A96B0B76700D84924BB8C7BC96470490BCA, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFOVKickDownU3Ed__10_tC50C8A96B0B76700D84924BB8C7BC96470490BCA, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFOVKickDownU3Ed__10_tC50C8A96B0B76700D84924BB8C7BC96470490BCA, ___U3CU3E4__this_2)); }
	inline FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CFOVKickDownU3Ed__10_tC50C8A96B0B76700D84924BB8C7BC96470490BCA, ___U3CtU3E5__2_3)); }
	inline float get_U3CtU3E5__2_3() const { return ___U3CtU3E5__2_3; }
	inline float* get_address_of_U3CtU3E5__2_3() { return &___U3CtU3E5__2_3; }
	inline void set_U3CtU3E5__2_3(float value)
	{
		___U3CtU3E5__2_3 = value;
	}
};


// UnityStandardAssets.Utility.FOVKick/<FOVKickUp>d__9
struct  U3CFOVKickUpU3Ed__9_t9D0D912A198B1DB69C2A7BBDEA7456C2BB6A6B97  : public RuntimeObject
{
public:
	// System.Int32 UnityStandardAssets.Utility.FOVKick/<FOVKickUp>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickUp>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityStandardAssets.Utility.FOVKick UnityStandardAssets.Utility.FOVKick/<FOVKickUp>d__9::<>4__this
	FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE * ___U3CU3E4__this_2;
	// System.Single UnityStandardAssets.Utility.FOVKick/<FOVKickUp>d__9::<t>5__2
	float ___U3CtU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFOVKickUpU3Ed__9_t9D0D912A198B1DB69C2A7BBDEA7456C2BB6A6B97, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFOVKickUpU3Ed__9_t9D0D912A198B1DB69C2A7BBDEA7456C2BB6A6B97, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFOVKickUpU3Ed__9_t9D0D912A198B1DB69C2A7BBDEA7456C2BB6A6B97, ___U3CU3E4__this_2)); }
	inline FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CFOVKickUpU3Ed__9_t9D0D912A198B1DB69C2A7BBDEA7456C2BB6A6B97, ___U3CtU3E5__2_3)); }
	inline float get_U3CtU3E5__2_3() const { return ___U3CtU3E5__2_3; }
	inline float* get_address_of_U3CtU3E5__2_3() { return &___U3CtU3E5__2_3; }
	inline void set_U3CtU3E5__2_3(float value)
	{
		___U3CtU3E5__2_3 = value;
	}
};


// UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>d__4
struct  U3CDoBobCycleU3Ed__4_tA62D4FFE49541952306208027BE872CD4C667655  : public RuntimeObject
{
public:
	// System.Int32 UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityStandardAssets.Utility.LerpControlledBob UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>d__4::<>4__this
	LerpControlledBob_t3A136B4FE24CC2F41EB6CFF54A2FDC0122E7A238 * ___U3CU3E4__this_2;
	// System.Single UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>d__4::<t>5__2
	float ___U3CtU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDoBobCycleU3Ed__4_tA62D4FFE49541952306208027BE872CD4C667655, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDoBobCycleU3Ed__4_tA62D4FFE49541952306208027BE872CD4C667655, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDoBobCycleU3Ed__4_tA62D4FFE49541952306208027BE872CD4C667655, ___U3CU3E4__this_2)); }
	inline LerpControlledBob_t3A136B4FE24CC2F41EB6CFF54A2FDC0122E7A238 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline LerpControlledBob_t3A136B4FE24CC2F41EB6CFF54A2FDC0122E7A238 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(LerpControlledBob_t3A136B4FE24CC2F41EB6CFF54A2FDC0122E7A238 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CDoBobCycleU3Ed__4_tA62D4FFE49541952306208027BE872CD4C667655, ___U3CtU3E5__2_3)); }
	inline float get_U3CtU3E5__2_3() const { return ___U3CtU3E5__2_3; }
	inline float* get_address_of_U3CtU3E5__2_3() { return &___U3CtU3E5__2_3; }
	inline void set_U3CtU3E5__2_3(float value)
	{
		___U3CtU3E5__2_3 = value;
	}
};


// UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>d__6
struct  U3CResetCoroutineU3Ed__6_t08BA996BEEB8880D65ACED889627A520D4661892  : public RuntimeObject
{
public:
	// System.Int32 UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>d__6::delay
	float ___delay_2;
	// UnityStandardAssets.Utility.ObjectResetter UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>d__6::<>4__this
	ObjectResetter_t6E96E79B7F57F740C3C7C6C6FEA9DEE271C994A1 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CResetCoroutineU3Ed__6_t08BA996BEEB8880D65ACED889627A520D4661892, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CResetCoroutineU3Ed__6_t08BA996BEEB8880D65ACED889627A520D4661892, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(U3CResetCoroutineU3Ed__6_t08BA996BEEB8880D65ACED889627A520D4661892, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CResetCoroutineU3Ed__6_t08BA996BEEB8880D65ACED889627A520D4661892, ___U3CU3E4__this_3)); }
	inline ObjectResetter_t6E96E79B7F57F740C3C7C6C6FEA9DEE271C994A1 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline ObjectResetter_t6E96E79B7F57F740C3C7C6C6FEA9DEE271C994A1 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(ObjectResetter_t6E96E79B7F57F740C3C7C6C6FEA9DEE271C994A1 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>d__4
struct  U3CStartU3Ed__4_tDF77A58D2C41E1BC6C66CE72DD6821F1777DFBC9  : public RuntimeObject
{
public:
	// System.Int32 UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityStandardAssets.Utility.ParticleSystemDestroyer UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>d__4::<>4__this
	ParticleSystemDestroyer_t6264C19E82E9C2EA88A77D7F639BC48C3AA7C2E7 * ___U3CU3E4__this_2;
	// UnityEngine.ParticleSystem[] UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>d__4::<systems>5__2
	ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* ___U3CsystemsU3E5__2_3;
	// System.Single UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>d__4::<stopTime>5__3
	float ___U3CstopTimeU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__4_tDF77A58D2C41E1BC6C66CE72DD6821F1777DFBC9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__4_tDF77A58D2C41E1BC6C66CE72DD6821F1777DFBC9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__4_tDF77A58D2C41E1BC6C66CE72DD6821F1777DFBC9, ___U3CU3E4__this_2)); }
	inline ParticleSystemDestroyer_t6264C19E82E9C2EA88A77D7F639BC48C3AA7C2E7 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ParticleSystemDestroyer_t6264C19E82E9C2EA88A77D7F639BC48C3AA7C2E7 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ParticleSystemDestroyer_t6264C19E82E9C2EA88A77D7F639BC48C3AA7C2E7 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsystemsU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__4_tDF77A58D2C41E1BC6C66CE72DD6821F1777DFBC9, ___U3CsystemsU3E5__2_3)); }
	inline ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* get_U3CsystemsU3E5__2_3() const { return ___U3CsystemsU3E5__2_3; }
	inline ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7** get_address_of_U3CsystemsU3E5__2_3() { return &___U3CsystemsU3E5__2_3; }
	inline void set_U3CsystemsU3E5__2_3(ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* value)
	{
		___U3CsystemsU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsystemsU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstopTimeU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__4_tDF77A58D2C41E1BC6C66CE72DD6821F1777DFBC9, ___U3CstopTimeU3E5__3_4)); }
	inline float get_U3CstopTimeU3E5__3_4() const { return ___U3CstopTimeU3E5__3_4; }
	inline float* get_address_of_U3CstopTimeU3E5__3_4() { return &___U3CstopTimeU3E5__3_4; }
	inline void set_U3CstopTimeU3E5__3_4(float value)
	{
		___U3CstopTimeU3E5__3_4 = value;
	}
};


// UnityStandardAssets.Utility.TimedObjectActivator/<Activate>d__5
struct  U3CActivateU3Ed__5_t18860C7FF698BB48D477ADEC25C19584954FD1D7  : public RuntimeObject
{
public:
	// System.Int32 UnityStandardAssets.Utility.TimedObjectActivator/<Activate>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<Activate>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityStandardAssets.Utility.TimedObjectActivator/Entry UnityStandardAssets.Utility.TimedObjectActivator/<Activate>d__5::entry
	Entry_t5F1DD521166A8D7A418BCB0ED47B18DAA8F8A14E * ___entry_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CActivateU3Ed__5_t18860C7FF698BB48D477ADEC25C19584954FD1D7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CActivateU3Ed__5_t18860C7FF698BB48D477ADEC25C19584954FD1D7, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_entry_2() { return static_cast<int32_t>(offsetof(U3CActivateU3Ed__5_t18860C7FF698BB48D477ADEC25C19584954FD1D7, ___entry_2)); }
	inline Entry_t5F1DD521166A8D7A418BCB0ED47B18DAA8F8A14E * get_entry_2() const { return ___entry_2; }
	inline Entry_t5F1DD521166A8D7A418BCB0ED47B18DAA8F8A14E ** get_address_of_entry_2() { return &___entry_2; }
	inline void set_entry_2(Entry_t5F1DD521166A8D7A418BCB0ED47B18DAA8F8A14E * value)
	{
		___entry_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entry_2), (void*)value);
	}
};


// UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>d__6
struct  U3CDeactivateU3Ed__6_t42B40BDFB507971D83117A5C10D02A199B6C97E5  : public RuntimeObject
{
public:
	// System.Int32 UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityStandardAssets.Utility.TimedObjectActivator/Entry UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>d__6::entry
	Entry_t5F1DD521166A8D7A418BCB0ED47B18DAA8F8A14E * ___entry_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDeactivateU3Ed__6_t42B40BDFB507971D83117A5C10D02A199B6C97E5, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDeactivateU3Ed__6_t42B40BDFB507971D83117A5C10D02A199B6C97E5, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_entry_2() { return static_cast<int32_t>(offsetof(U3CDeactivateU3Ed__6_t42B40BDFB507971D83117A5C10D02A199B6C97E5, ___entry_2)); }
	inline Entry_t5F1DD521166A8D7A418BCB0ED47B18DAA8F8A14E * get_entry_2() const { return ___entry_2; }
	inline Entry_t5F1DD521166A8D7A418BCB0ED47B18DAA8F8A14E ** get_address_of_entry_2() { return &___entry_2; }
	inline void set_entry_2(Entry_t5F1DD521166A8D7A418BCB0ED47B18DAA8F8A14E * value)
	{
		___entry_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entry_2), (void*)value);
	}
};


// UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>d__7
struct  U3CReloadLevelU3Ed__7_t4003A0AF502E129BA3E2BC09A0C83B03E6E15359  : public RuntimeObject
{
public:
	// System.Int32 UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityStandardAssets.Utility.TimedObjectActivator/Entry UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>d__7::entry
	Entry_t5F1DD521166A8D7A418BCB0ED47B18DAA8F8A14E * ___entry_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CReloadLevelU3Ed__7_t4003A0AF502E129BA3E2BC09A0C83B03E6E15359, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CReloadLevelU3Ed__7_t4003A0AF502E129BA3E2BC09A0C83B03E6E15359, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_entry_2() { return static_cast<int32_t>(offsetof(U3CReloadLevelU3Ed__7_t4003A0AF502E129BA3E2BC09A0C83B03E6E15359, ___entry_2)); }
	inline Entry_t5F1DD521166A8D7A418BCB0ED47B18DAA8F8A14E * get_entry_2() const { return ___entry_2; }
	inline Entry_t5F1DD521166A8D7A418BCB0ED47B18DAA8F8A14E ** get_address_of_entry_2() { return &___entry_2; }
	inline void set_entry_2(Entry_t5F1DD521166A8D7A418BCB0ED47B18DAA8F8A14E * value)
	{
		___entry_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entry_2), (void*)value);
	}
};


// UnityStandardAssets.Utility.TimedObjectActivator/Entries
struct  Entries_t7A700BDBBDD25FCADAA59CF143C83E4274E2FA99  : public RuntimeObject
{
public:
	// UnityStandardAssets.Utility.TimedObjectActivator/Entry[] UnityStandardAssets.Utility.TimedObjectActivator/Entries::entries
	EntryU5BU5D_tC0423D25805A9B47CCD358D545C0886EDD6E2510* ___entries_0;

public:
	inline static int32_t get_offset_of_entries_0() { return static_cast<int32_t>(offsetof(Entries_t7A700BDBBDD25FCADAA59CF143C83E4274E2FA99, ___entries_0)); }
	inline EntryU5BU5D_tC0423D25805A9B47CCD358D545C0886EDD6E2510* get_entries_0() const { return ___entries_0; }
	inline EntryU5BU5D_tC0423D25805A9B47CCD358D545C0886EDD6E2510** get_address_of_entries_0() { return &___entries_0; }
	inline void set_entries_0(EntryU5BU5D_tC0423D25805A9B47CCD358D545C0886EDD6E2510* value)
	{
		___entries_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_0), (void*)value);
	}
};


// UnityStandardAssets.Utility.WaypointCircuit/WaypointList
struct  WaypointList_t7CA06137643274484AEDCDAA2B090C56E60FA730  : public RuntimeObject
{
public:
	// UnityStandardAssets.Utility.WaypointCircuit UnityStandardAssets.Utility.WaypointCircuit/WaypointList::circuit
	WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * ___circuit_0;
	// UnityEngine.Transform[] UnityStandardAssets.Utility.WaypointCircuit/WaypointList::items
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___items_1;

public:
	inline static int32_t get_offset_of_circuit_0() { return static_cast<int32_t>(offsetof(WaypointList_t7CA06137643274484AEDCDAA2B090C56E60FA730, ___circuit_0)); }
	inline WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * get_circuit_0() const { return ___circuit_0; }
	inline WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 ** get_address_of_circuit_0() { return &___circuit_0; }
	inline void set_circuit_0(WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * value)
	{
		___circuit_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___circuit_0), (void*)value);
	}

	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(WaypointList_t7CA06137643274484AEDCDAA2B090C56E60FA730, ___items_1)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_items_1() const { return ___items_1; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
struct  Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::version
	int32_t ___version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::currentKey
	RuntimeObject * ___currentKey_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentKey_3() { return static_cast<int32_t>(offsetof(Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031, ___currentKey_3)); }
	inline RuntimeObject * get_currentKey_3() const { return ___currentKey_3; }
	inline RuntimeObject ** get_address_of_currentKey_3() { return &___currentKey_3; }
	inline void set_currentKey_3(RuntimeObject * value)
	{
		___currentKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentKey_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>
struct  Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::dictionary
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::version
	int32_t ___version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::currentKey
	String_t* ___currentKey_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547, ___dictionary_0)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentKey_3() { return static_cast<int32_t>(offsetof(Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547, ___currentKey_3)); }
	inline String_t* get_currentKey_3() const { return ___currentKey_3; }
	inline String_t** get_address_of_currentKey_3() { return &___currentKey_3; }
	inline void set_currentKey_3(String_t* value)
	{
		___currentKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentKey_3), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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


// System.IntPtr
struct  IntPtr_t 
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
struct  LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
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


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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
struct  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
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


// UnityEngine.SceneManagement.Scene
struct  Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
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
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
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
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// UnityEngine.WWW
struct  WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.WWW::_uwr
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ____uwr_0;

public:
	inline static int32_t get_offset_of__uwr_0() { return static_cast<int32_t>(offsetof(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2, ____uwr_0)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get__uwr_0() const { return ____uwr_0; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of__uwr_0() { return &____uwr_0; }
	inline void set__uwr_0(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		____uwr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____uwr_0), (void*)value);
	}
};


// UnityEngine.WaitForEndOfFrame
struct  WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.WaitForFixedUpdate
struct  WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
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

// UnityEngine.ParticleSystem/EmissionModule
struct  EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/EmissionModule::m_ParticleSystem
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParticleSystem_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D_marshaled_pinvoke
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D_marshaled_com
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/MainModule
struct  MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/MainModule::m_ParticleSystem
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParticleSystem_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B_marshaled_pinvoke
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B_marshaled_com
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};

// UnityEngine.AnimationCurve
struct  AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Collision
struct  Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	// UnityEngine.Rigidbody UnityEngine.Collision::m_Rigidbody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_LegacyContacts_6;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Impulse_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_RelativeVelocity_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Rigidbody_2)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___m_Rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Rigidbody_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Collider_3)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Collider_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContactCount_4() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ContactCount_4)); }
	inline int32_t get_m_ContactCount_4() const { return ___m_ContactCount_4; }
	inline int32_t* get_address_of_m_ContactCount_4() { return &___m_ContactCount_4; }
	inline void set_m_ContactCount_4(int32_t value)
	{
		___m_ContactCount_4 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_5() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ReusedContacts_5)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_ReusedContacts_5() const { return ___m_ReusedContacts_5; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_ReusedContacts_5() { return &___m_ReusedContacts_5; }
	inline void set_m_ReusedContacts_5(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_ReusedContacts_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_6() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_LegacyContacts_6)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_LegacyContacts_6() const { return ___m_LegacyContacts_6; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_LegacyContacts_6() { return &___m_LegacyContacts_6; }
	inline void set_m_LegacyContacts_6(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_LegacyContacts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};

// UnityEngine.ContactPoint
struct  ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 
{
public:
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.Int32 UnityEngine.ContactPoint::m_ThisColliderInstanceID
	int32_t ___m_ThisColliderInstanceID_2;
	// System.Int32 UnityEngine.ContactPoint::m_OtherColliderInstanceID
	int32_t ___m_OtherColliderInstanceID_3;
	// System.Single UnityEngine.ContactPoint::m_Separation
	float ___m_Separation_4;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_ThisColliderInstanceID_2() { return static_cast<int32_t>(offsetof(ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017, ___m_ThisColliderInstanceID_2)); }
	inline int32_t get_m_ThisColliderInstanceID_2() const { return ___m_ThisColliderInstanceID_2; }
	inline int32_t* get_address_of_m_ThisColliderInstanceID_2() { return &___m_ThisColliderInstanceID_2; }
	inline void set_m_ThisColliderInstanceID_2(int32_t value)
	{
		___m_ThisColliderInstanceID_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherColliderInstanceID_3() { return static_cast<int32_t>(offsetof(ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017, ___m_OtherColliderInstanceID_3)); }
	inline int32_t get_m_OtherColliderInstanceID_3() const { return ___m_OtherColliderInstanceID_3; }
	inline int32_t* get_address_of_m_OtherColliderInstanceID_3() { return &___m_OtherColliderInstanceID_3; }
	inline void set_m_OtherColliderInstanceID_3(int32_t value)
	{
		___m_OtherColliderInstanceID_3 = value;
	}

	inline static int32_t get_offset_of_m_Separation_4() { return static_cast<int32_t>(offsetof(ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017, ___m_Separation_4)); }
	inline float get_m_Separation_4() const { return ___m_Separation_4; }
	inline float* get_address_of_m_Separation_4() { return &___m_Separation_4; }
	inline void set_m_Separation_4(float value)
	{
		___m_Separation_4 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
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
struct  Delegate_t  : public RuntimeObject
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

// UnityEngine.DepthTextureMode
struct  DepthTextureMode_t4A8E08C41731918FB0D7CA5C6848E3864A0DC09A 
{
public:
	// System.Int32 UnityEngine.DepthTextureMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DepthTextureMode_t4A8E08C41731918FB0D7CA5C6848E3864A0DC09A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct  Exception_t  : public RuntimeObject
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

// UnityEngine.ForceMode
struct  ForceMode_t7778317A4C46140D50D98811D65A7B22E38163D5 
{
public:
	// System.Int32 UnityEngine.ForceMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ForceMode_t7778317A4C46140D50D98811D65A7B22E38163D5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Collections.Hashtable
struct  Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC  : public RuntimeObject
{
public:
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::buckets
	bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190* ___buckets_0;
	// System.Int32 System.Collections.Hashtable::count
	int32_t ___count_1;
	// System.Int32 System.Collections.Hashtable::occupancy
	int32_t ___occupancy_2;
	// System.Int32 System.Collections.Hashtable::loadsize
	int32_t ___loadsize_3;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::version
	int32_t ___version_5;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::isWriterInProgress
	bool ___isWriterInProgress_6;
	// System.Collections.ICollection System.Collections.Hashtable::keys
	RuntimeObject* ___keys_7;
	// System.Collections.ICollection System.Collections.Hashtable::values
	RuntimeObject* ___values_8;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_9;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject * ____syncRoot_10;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___buckets_0)); }
	inline bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190* get_buckets_0() const { return ___buckets_0; }
	inline bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}

	inline static int32_t get_offset_of_occupancy_2() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___occupancy_2)); }
	inline int32_t get_occupancy_2() const { return ___occupancy_2; }
	inline int32_t* get_address_of_occupancy_2() { return &___occupancy_2; }
	inline void set_occupancy_2(int32_t value)
	{
		___occupancy_2 = value;
	}

	inline static int32_t get_offset_of_loadsize_3() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___loadsize_3)); }
	inline int32_t get_loadsize_3() const { return ___loadsize_3; }
	inline int32_t* get_address_of_loadsize_3() { return &___loadsize_3; }
	inline void set_loadsize_3(int32_t value)
	{
		___loadsize_3 = value;
	}

	inline static int32_t get_offset_of_loadFactor_4() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___loadFactor_4)); }
	inline float get_loadFactor_4() const { return ___loadFactor_4; }
	inline float* get_address_of_loadFactor_4() { return &___loadFactor_4; }
	inline void set_loadFactor_4(float value)
	{
		___loadFactor_4 = value;
	}

	inline static int32_t get_offset_of_version_5() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___version_5)); }
	inline int32_t get_version_5() const { return ___version_5; }
	inline int32_t* get_address_of_version_5() { return &___version_5; }
	inline void set_version_5(int32_t value)
	{
		___version_5 = value;
	}

	inline static int32_t get_offset_of_isWriterInProgress_6() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___isWriterInProgress_6)); }
	inline bool get_isWriterInProgress_6() const { return ___isWriterInProgress_6; }
	inline bool* get_address_of_isWriterInProgress_6() { return &___isWriterInProgress_6; }
	inline void set_isWriterInProgress_6(bool value)
	{
		___isWriterInProgress_6 = value;
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___keys_7)); }
	inline RuntimeObject* get_keys_7() const { return ___keys_7; }
	inline RuntimeObject** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(RuntimeObject* value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___values_8)); }
	inline RuntimeObject* get_values_8() const { return ___values_8; }
	inline RuntimeObject** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(RuntimeObject* value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__keycomparer_9() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ____keycomparer_9)); }
	inline RuntimeObject* get__keycomparer_9() const { return ____keycomparer_9; }
	inline RuntimeObject** get_address_of__keycomparer_9() { return &____keycomparer_9; }
	inline void set__keycomparer_9(RuntimeObject* value)
	{
		____keycomparer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keycomparer_9), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_10() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ____syncRoot_10)); }
	inline RuntimeObject * get__syncRoot_10() const { return ____syncRoot_10; }
	inline RuntimeObject ** get_address_of__syncRoot_10() { return &____syncRoot_10; }
	inline void set__syncRoot_10(RuntimeObject * value)
	{
		____syncRoot_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_10), (void*)value);
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// UnityEngine.ParticleCollisionEvent
struct  ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD 
{
public:
	// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::m_Intersection
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Intersection_0;
	// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::m_Velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Velocity_2;
	// System.Int32 UnityEngine.ParticleCollisionEvent::m_ColliderInstanceID
	int32_t ___m_ColliderInstanceID_3;

public:
	inline static int32_t get_offset_of_m_Intersection_0() { return static_cast<int32_t>(offsetof(ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD, ___m_Intersection_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Intersection_0() const { return ___m_Intersection_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Intersection_0() { return &___m_Intersection_0; }
	inline void set_m_Intersection_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Intersection_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_2() { return static_cast<int32_t>(offsetof(ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD, ___m_Velocity_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Velocity_2() const { return ___m_Velocity_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Velocity_2() { return &___m_Velocity_2; }
	inline void set_m_Velocity_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Velocity_2 = value;
	}

	inline static int32_t get_offset_of_m_ColliderInstanceID_3() { return static_cast<int32_t>(offsetof(ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD, ___m_ColliderInstanceID_3)); }
	inline int32_t get_m_ColliderInstanceID_3() const { return ___m_ColliderInstanceID_3; }
	inline int32_t* get_address_of_m_ColliderInstanceID_3() { return &___m_ColliderInstanceID_3; }
	inline void set_m_ColliderInstanceID_3(int32_t value)
	{
		___m_ColliderInstanceID_3 = value;
	}
};


// UnityEngine.ParticleSystemCurveMode
struct  ParticleSystemCurveMode_t1B9D50590BC22BDD142A21664B8E2F9475409342 
{
public:
	// System.Int32 UnityEngine.ParticleSystemCurveMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParticleSystemCurveMode_t1B9D50590BC22BDD142A21664B8E2F9475409342, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Ray
struct  Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit
struct  RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.RenderTextureFormat
struct  RenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626 
{
public:
	// System.Int32 UnityEngine.RenderTextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RuntimePlatform
struct  RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SendMessageOptions
struct  SendMessageOptions_t89E16D7B4FAECAF721478B06E56214F97438C61B 
{
public:
	// System.Int32 UnityEngine.SendMessageOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SendMessageOptions_t89E16D7B4FAECAF721478B06E56214F97438C61B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Space
struct  Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureFormat
struct  TextureFormat_tBED5388A0445FE978F97B41D247275B036407932 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.Water.WaterQuality
struct  WaterQuality_t13CC994FCCD8B9768930DC764BAA0D83F1038ADC 
{
public:
	// System.Int32 UnityStandardAssets.Water.WaterQuality::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WaterQuality_t13CC994FCCD8B9768930DC764BAA0D83F1038ADC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.Utility.ActivateTrigger/Mode
struct  Mode_tBCC85FBA1D2AEC096045F8E39F0A918AF1ADDAA0 
{
public:
	// System.Int32 UnityStandardAssets.Utility.ActivateTrigger/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_tBCC85FBA1D2AEC096045F8E39F0A918AF1ADDAA0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.Bloom/BloomQuality
struct  BloomQuality_t70B37A83F7E651DA0E31F1FD914A94C8DD15A8E2 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.Bloom/BloomQuality::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BloomQuality_t70B37A83F7E651DA0E31F1FD914A94C8DD15A8E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.Bloom/BloomScreenBlendMode
struct  BloomScreenBlendMode_tADCCF8A6493C06E117A775D18B0A0167959B06C0 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.Bloom/BloomScreenBlendMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BloomScreenBlendMode_tADCCF8A6493C06E117A775D18B0A0167959B06C0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.Bloom/HDRBloomMode
struct  HDRBloomMode_tB365A0FDA31F3C43025FBA97FDB94D7CD629292C 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.Bloom/HDRBloomMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HDRBloomMode_tB365A0FDA31F3C43025FBA97FDB94D7CD629292C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.Bloom/LensFlareStyle
struct  LensFlareStyle_tF42EE389CD6A9BBFCD305B4E3CBFA8ED010DA3FD 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.Bloom/LensFlareStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LensFlareStyle_tF42EE389CD6A9BBFCD305B4E3CBFA8ED010DA3FD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.Bloom/TweakMode
struct  TweakMode_tF1F10303AE662FD63084F62F26B3092E4FE5DDC5 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.Bloom/TweakMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TweakMode_tF1F10303AE662FD63084F62F26B3092E4FE5DDC5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.BloomOptimized/BlurType
struct  BlurType_tF6C34A06D0A19BF2BA8A5D8A213A23BB41F3D4D5 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.BloomOptimized/BlurType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlurType_tF6C34A06D0A19BF2BA8A5D8A213A23BB41F3D4D5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.BloomOptimized/Resolution
struct  Resolution_t430AF3AA34D97383BC3CA7B21C899612E804B59D 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.BloomOptimized/Resolution::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Resolution_t430AF3AA34D97383BC3CA7B21C899612E804B59D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.BlurOptimized/BlurType
struct  BlurType_t792920700F1BD9E32E4E584F6F8C2FF307E2CF9D 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.BlurOptimized/BlurType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlurType_t792920700F1BD9E32E4E584F6F8C2FF307E2CF9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter
struct  MotionBlurFilter_tD92318F3822D879686034670B391B02EFD60C9FE 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MotionBlurFilter_tD92318F3822D879686034670B391B02EFD60C9FE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode
struct  ColorCorrectionMode_tE21DA77D51E3EB875D2AD3425136FC40EC0F290F 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorCorrectionMode_tE21DA77D51E3EB875D2AD3425136FC40EC0F290F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.DepthOfField/BlurSampleCount
struct  BlurSampleCount_t41FEF6C4F687D07E79475C173C36E1542BB5AD95 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.DepthOfField/BlurSampleCount::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlurSampleCount_t41FEF6C4F687D07E79475C173C36E1542BB5AD95, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.DepthOfField/BlurType
struct  BlurType_tC3872FF44206C713194E272FE043D83AF28E1CF9 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.DepthOfField/BlurType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlurType_tC3872FF44206C713194E272FE043D83AF28E1CF9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/BokehDestination
struct  BokehDestination_t47BC85AD924FABB9A91D88B8DC8348931242037C 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/BokehDestination::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BokehDestination_t47BC85AD924FABB9A91D88B8DC8348931242037C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/Dof34QualitySetting
struct  Dof34QualitySetting_t4831BC73AF877BD366DB725194E99F57D8973F7B 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/Dof34QualitySetting::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Dof34QualitySetting_t4831BC73AF877BD366DB725194E99F57D8973F7B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofBlurriness
struct  DofBlurriness_t5761C9CF0A25457A6A4C49DD7A25BD508F032E16 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofBlurriness::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DofBlurriness_t5761C9CF0A25457A6A4C49DD7A25BD508F032E16, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofResolution
struct  DofResolution_tD1136E39B0A2DBD76C71809A325FA73EB0A6CD93 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofResolution::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DofResolution_tD1136E39B0A2DBD76C71809A325FA73EB0A6CD93, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.EdgeDetection/EdgeDetectMode
struct  EdgeDetectMode_t89DD4218539864866AA301F2194B8DE59CBCF0C6 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.EdgeDetection/EdgeDetectMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EdgeDetectMode_t89DD4218539864866AA301F2194B8DE59CBCF0C6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.Utility.PlatformSpecificContent/BuildTargetGroup
struct  BuildTargetGroup_t942842ADF2794DCC12BF5FA714E79356A6EF37B8 
{
public:
	// System.Int32 UnityStandardAssets.Utility.PlatformSpecificContent/BuildTargetGroup::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BuildTargetGroup_t942842ADF2794DCC12BF5FA714E79356A6EF37B8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.ScreenOverlay/OverlayBlendMode
struct  OverlayBlendMode_t43511BCFB759236B3B49B31F8F3AB84C17D113A4 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.ScreenOverlay/OverlayBlendMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OverlayBlendMode_t43511BCFB759236B3B49B31F8F3AB84C17D113A4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion/SSAOSamples
struct  SSAOSamples_tF4028A6ABD5F7C0D4013EAE7A115E8BBE2D81501 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion/SSAOSamples::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SSAOSamples_tF4028A6ABD5F7C0D4013EAE7A115E8BBE2D81501, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.SunShafts/ShaftsScreenBlendMode
struct  ShaftsScreenBlendMode_t3F51D638F7C36B27B5056599B287EF3D3F4B4DC9 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.SunShafts/ShaftsScreenBlendMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShaftsScreenBlendMode_t3F51D638F7C36B27B5056599B287EF3D3F4B4DC9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.SunShafts/SunShaftsResolution
struct  SunShaftsResolution_t2429E94EEB4834D9A3C9B5E7C0D6D1EE0D9EF141 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.SunShafts/SunShaftsResolution::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SunShaftsResolution_t2429E94EEB4834D9A3C9B5E7C0D6D1EE0D9EF141, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.TiltShift/TiltShiftMode
struct  TiltShiftMode_t05DACD0DA713D03CA39B7E9B2F1617AA412B2BFA 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.TiltShift/TiltShiftMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TiltShiftMode_t05DACD0DA713D03CA39B7E9B2F1617AA412B2BFA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.TiltShift/TiltShiftQuality
struct  TiltShiftQuality_t5FE06DB031BB258B65654D16BA2F03423166D48C 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.TiltShift/TiltShiftQuality::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TiltShiftQuality_t5FE06DB031BB258B65654D16BA2F03423166D48C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.Utility.TimedObjectActivator/Action
struct  Action_t8C15D639CFC5D4B43451AFC99CEADD4204A5F058 
{
public:
	// System.Int32 UnityStandardAssets.Utility.TimedObjectActivator/Action::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Action_t8C15D639CFC5D4B43451AFC99CEADD4204A5F058, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.Tonemapping/AdaptiveTexSize
struct  AdaptiveTexSize_tB9480201A1D8B1E875525F7905AE64BDAFE98D79 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.Tonemapping/AdaptiveTexSize::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AdaptiveTexSize_tB9480201A1D8B1E875525F7905AE64BDAFE98D79, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.Tonemapping/TonemapperType
struct  TonemapperType_tF52E7C6A722408CC8C543F41861248AB041AD70B 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.Tonemapping/TonemapperType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TonemapperType_tF52E7C6A722408CC8C543F41861248AB041AD70B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration/AberrationMode
struct  AberrationMode_tE2689A1BD4D9D98B87206883C14A0FFC14A78257 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration/AberrationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AberrationMode_tE2689A1BD4D9D98B87206883C14A0FFC14A78257, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.Water.Water/WaterMode
struct  WaterMode_tF37EEFB5B3CBDB16CE870869EABBDE01998C2045 
{
public:
	// System.Int32 UnityStandardAssets.Water.Water/WaterMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WaterMode_tF37EEFB5B3CBDB16CE870869EABBDE01998C2045, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint
struct  RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3 
{
public:
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit/RoutePoint::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit/RoutePoint::direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_direction_1() { return static_cast<int32_t>(offsetof(RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3, ___direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_direction_1() const { return ___direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_direction_1() { return &___direction_1; }
	inline void set_direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___direction_1 = value;
	}
};


// UnityStandardAssets.Utility.WaypointProgressTracker/ProgressStyle
struct  ProgressStyle_t0719B01B1A7F45A6C2EB43D31179A886BFE2E2A2 
{
public:
	// System.Int32 UnityStandardAssets.Utility.WaypointProgressTracker/ProgressStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProgressStyle_t0719B01B1A7F45A6C2EB43D31179A886BFE2E2A2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct  Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
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

// UnityEngine.Shader
struct  Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct  Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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


// UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace
struct  Vector3andSpace_t6031169E96B7A6DC3CB39951D58FACDE4C07CE48  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace::value
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value_0;
	// UnityEngine.Space UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace::space
	int32_t ___space_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Vector3andSpace_t6031169E96B7A6DC3CB39951D58FACDE4C07CE48, ___value_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_value_0() const { return ___value_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_space_1() { return static_cast<int32_t>(offsetof(Vector3andSpace_t6031169E96B7A6DC3CB39951D58FACDE4C07CE48, ___space_1)); }
	inline int32_t get_space_1() const { return ___space_1; }
	inline int32_t* get_address_of_space_1() { return &___space_1; }
	inline void set_space_1(int32_t value)
	{
		___space_1 = value;
	}
};


// UnityEngine.ParticleSystem/MinMaxCurve
struct  MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD 
{
public:
	// UnityEngine.ParticleSystemCurveMode UnityEngine.ParticleSystem/MinMaxCurve::m_Mode
	int32_t ___m_Mode_0;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMultiplier
	float ___m_CurveMultiplier_1;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMin
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_CurveMin_2;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMax
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_CurveMax_3;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMin
	float ___m_ConstantMin_4;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMax
	float ___m_ConstantMax_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_CurveMultiplier_1() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_CurveMultiplier_1)); }
	inline float get_m_CurveMultiplier_1() const { return ___m_CurveMultiplier_1; }
	inline float* get_address_of_m_CurveMultiplier_1() { return &___m_CurveMultiplier_1; }
	inline void set_m_CurveMultiplier_1(float value)
	{
		___m_CurveMultiplier_1 = value;
	}

	inline static int32_t get_offset_of_m_CurveMin_2() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_CurveMin_2)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_CurveMin_2() const { return ___m_CurveMin_2; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_CurveMin_2() { return &___m_CurveMin_2; }
	inline void set_m_CurveMin_2(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_CurveMin_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurveMin_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurveMax_3() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_CurveMax_3)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_CurveMax_3() const { return ___m_CurveMax_3; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_CurveMax_3() { return &___m_CurveMax_3; }
	inline void set_m_CurveMax_3(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_CurveMax_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurveMax_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ConstantMin_4() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_ConstantMin_4)); }
	inline float get_m_ConstantMin_4() const { return ___m_ConstantMin_4; }
	inline float* get_address_of_m_ConstantMin_4() { return &___m_ConstantMin_4; }
	inline void set_m_ConstantMin_4(float value)
	{
		___m_ConstantMin_4 = value;
	}

	inline static int32_t get_offset_of_m_ConstantMax_5() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_ConstantMax_5)); }
	inline float get_m_ConstantMax_5() const { return ___m_ConstantMax_5; }
	inline float* get_address_of_m_ConstantMax_5() { return &___m_ConstantMax_5; }
	inline void set_m_ConstantMax_5(float value)
	{
		___m_ConstantMax_5 = value;
	}
};


// UnityStandardAssets.Utility.TimedObjectActivator/Entry
struct  Entry_t5F1DD521166A8D7A418BCB0ED47B18DAA8F8A14E  : public RuntimeObject
{
public:
	// UnityEngine.GameObject UnityStandardAssets.Utility.TimedObjectActivator/Entry::target
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target_0;
	// UnityStandardAssets.Utility.TimedObjectActivator/Action UnityStandardAssets.Utility.TimedObjectActivator/Entry::action
	int32_t ___action_1;
	// System.Single UnityStandardAssets.Utility.TimedObjectActivator/Entry::delay
	float ___delay_2;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(Entry_t5F1DD521166A8D7A418BCB0ED47B18DAA8F8A14E, ___target_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_target_0() const { return ___target_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(Entry_t5F1DD521166A8D7A418BCB0ED47B18DAA8F8A14E, ___action_1)); }
	inline int32_t get_action_1() const { return ___action_1; }
	inline int32_t* get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(int32_t value)
	{
		___action_1 = value;
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(Entry_t5F1DD521166A8D7A418BCB0ED47B18DAA8F8A14E, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}
};


// System.Action`1<System.String>
struct  Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.Texture2D>
struct  Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.WWW>
struct  Action_1_t09F80ED9165FB471660E59814CE3452EF1D8B5CD  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Joint
struct  Joint_t085126F36196FC982700F4EA8466CF10C90EC15E  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.ParticleSystem
struct  ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody
struct  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Texture2D
struct  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SpringJoint
struct  SpringJoint_t6F2ACC63AD7C975D92271BC2DE2B564087DC27BF  : public Joint_t085126F36196FC982700F4EA8466CF10C90EC15E
{
public:

public:
};


// Prime31.AbstractManager
struct  AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_StaticFields
{
public:
	// Prime31.LifecycleHelper Prime31.AbstractManager::_prime31LifecycleHelperRef
	LifecycleHelper_t2C8530CA0073EF4CA43BCC651EB399608723D373 * ____prime31LifecycleHelperRef_4;
	// Prime31.ThreadingCallbackHelper Prime31.AbstractManager::_threadingCallbackHelper
	ThreadingCallbackHelper_t8ECB03A15726D7FE39F2C3B6609167DC4A32266A * ____threadingCallbackHelper_5;
	// UnityEngine.GameObject Prime31.AbstractManager::_prime31GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____prime31GameObject_6;

public:
	inline static int32_t get_offset_of__prime31LifecycleHelperRef_4() { return static_cast<int32_t>(offsetof(AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_StaticFields, ____prime31LifecycleHelperRef_4)); }
	inline LifecycleHelper_t2C8530CA0073EF4CA43BCC651EB399608723D373 * get__prime31LifecycleHelperRef_4() const { return ____prime31LifecycleHelperRef_4; }
	inline LifecycleHelper_t2C8530CA0073EF4CA43BCC651EB399608723D373 ** get_address_of__prime31LifecycleHelperRef_4() { return &____prime31LifecycleHelperRef_4; }
	inline void set__prime31LifecycleHelperRef_4(LifecycleHelper_t2C8530CA0073EF4CA43BCC651EB399608723D373 * value)
	{
		____prime31LifecycleHelperRef_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____prime31LifecycleHelperRef_4), (void*)value);
	}

	inline static int32_t get_offset_of__threadingCallbackHelper_5() { return static_cast<int32_t>(offsetof(AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_StaticFields, ____threadingCallbackHelper_5)); }
	inline ThreadingCallbackHelper_t8ECB03A15726D7FE39F2C3B6609167DC4A32266A * get__threadingCallbackHelper_5() const { return ____threadingCallbackHelper_5; }
	inline ThreadingCallbackHelper_t8ECB03A15726D7FE39F2C3B6609167DC4A32266A ** get_address_of__threadingCallbackHelper_5() { return &____threadingCallbackHelper_5; }
	inline void set__threadingCallbackHelper_5(ThreadingCallbackHelper_t8ECB03A15726D7FE39F2C3B6609167DC4A32266A * value)
	{
		____threadingCallbackHelper_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____threadingCallbackHelper_5), (void*)value);
	}

	inline static int32_t get_offset_of__prime31GameObject_6() { return static_cast<int32_t>(offsetof(AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_StaticFields, ____prime31GameObject_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__prime31GameObject_6() const { return ____prime31GameObject_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__prime31GameObject_6() { return &____prime31GameObject_6; }
	inline void set__prime31GameObject_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____prime31GameObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____prime31GameObject_6), (void*)value);
	}
};


// UnityStandardAssets.Utility.DragRigidbody
struct  DragRigidbody_t9D0FAFD76BB0876EC4A6505ABC0FE018022CF7BD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.SpringJoint UnityStandardAssets.Utility.DragRigidbody::m_SpringJoint
	SpringJoint_t6F2ACC63AD7C975D92271BC2DE2B564087DC27BF * ___m_SpringJoint_10;

public:
	inline static int32_t get_offset_of_m_SpringJoint_10() { return static_cast<int32_t>(offsetof(DragRigidbody_t9D0FAFD76BB0876EC4A6505ABC0FE018022CF7BD, ___m_SpringJoint_10)); }
	inline SpringJoint_t6F2ACC63AD7C975D92271BC2DE2B564087DC27BF * get_m_SpringJoint_10() const { return ___m_SpringJoint_10; }
	inline SpringJoint_t6F2ACC63AD7C975D92271BC2DE2B564087DC27BF ** get_address_of_m_SpringJoint_10() { return &___m_SpringJoint_10; }
	inline void set_m_SpringJoint_10(SpringJoint_t6F2ACC63AD7C975D92271BC2DE2B564087DC27BF * value)
	{
		___m_SpringJoint_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SpringJoint_10), (void*)value);
	}
};


// UnityStandardAssets.Effects.ExplosionFireAndDebris
struct  ExplosionFireAndDebris_tF9445209A9E843303ED79A22E876FE0DB75A5811  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform[] UnityStandardAssets.Effects.ExplosionFireAndDebris::debrisPrefabs
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___debrisPrefabs_4;
	// UnityEngine.Transform UnityStandardAssets.Effects.ExplosionFireAndDebris::firePrefab
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___firePrefab_5;
	// System.Int32 UnityStandardAssets.Effects.ExplosionFireAndDebris::numDebrisPieces
	int32_t ___numDebrisPieces_6;
	// System.Int32 UnityStandardAssets.Effects.ExplosionFireAndDebris::numFires
	int32_t ___numFires_7;

public:
	inline static int32_t get_offset_of_debrisPrefabs_4() { return static_cast<int32_t>(offsetof(ExplosionFireAndDebris_tF9445209A9E843303ED79A22E876FE0DB75A5811, ___debrisPrefabs_4)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_debrisPrefabs_4() const { return ___debrisPrefabs_4; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_debrisPrefabs_4() { return &___debrisPrefabs_4; }
	inline void set_debrisPrefabs_4(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___debrisPrefabs_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___debrisPrefabs_4), (void*)value);
	}

	inline static int32_t get_offset_of_firePrefab_5() { return static_cast<int32_t>(offsetof(ExplosionFireAndDebris_tF9445209A9E843303ED79A22E876FE0DB75A5811, ___firePrefab_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_firePrefab_5() const { return ___firePrefab_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_firePrefab_5() { return &___firePrefab_5; }
	inline void set_firePrefab_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___firePrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firePrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_numDebrisPieces_6() { return static_cast<int32_t>(offsetof(ExplosionFireAndDebris_tF9445209A9E843303ED79A22E876FE0DB75A5811, ___numDebrisPieces_6)); }
	inline int32_t get_numDebrisPieces_6() const { return ___numDebrisPieces_6; }
	inline int32_t* get_address_of_numDebrisPieces_6() { return &___numDebrisPieces_6; }
	inline void set_numDebrisPieces_6(int32_t value)
	{
		___numDebrisPieces_6 = value;
	}

	inline static int32_t get_offset_of_numFires_7() { return static_cast<int32_t>(offsetof(ExplosionFireAndDebris_tF9445209A9E843303ED79A22E876FE0DB75A5811, ___numFires_7)); }
	inline int32_t get_numFires_7() const { return ___numFires_7; }
	inline int32_t* get_address_of_numFires_7() { return &___numFires_7; }
	inline void set_numFires_7(int32_t value)
	{
		___numFires_7 = value;
	}
};


// UnityStandardAssets.Effects.Explosive
struct  Explosive_t35EC7643F888FA175DDBE61BE15F0662512C0BC0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform UnityStandardAssets.Effects.Explosive::explosionPrefab
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___explosionPrefab_4;
	// System.Single UnityStandardAssets.Effects.Explosive::detonationImpactVelocity
	float ___detonationImpactVelocity_5;
	// System.Single UnityStandardAssets.Effects.Explosive::sizeMultiplier
	float ___sizeMultiplier_6;
	// System.Boolean UnityStandardAssets.Effects.Explosive::reset
	bool ___reset_7;
	// System.Single UnityStandardAssets.Effects.Explosive::resetTimeDelay
	float ___resetTimeDelay_8;
	// System.Boolean UnityStandardAssets.Effects.Explosive::m_Exploded
	bool ___m_Exploded_9;
	// UnityStandardAssets.Utility.ObjectResetter UnityStandardAssets.Effects.Explosive::m_ObjectResetter
	ObjectResetter_t6E96E79B7F57F740C3C7C6C6FEA9DEE271C994A1 * ___m_ObjectResetter_10;

public:
	inline static int32_t get_offset_of_explosionPrefab_4() { return static_cast<int32_t>(offsetof(Explosive_t35EC7643F888FA175DDBE61BE15F0662512C0BC0, ___explosionPrefab_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_explosionPrefab_4() const { return ___explosionPrefab_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_explosionPrefab_4() { return &___explosionPrefab_4; }
	inline void set_explosionPrefab_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___explosionPrefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___explosionPrefab_4), (void*)value);
	}

	inline static int32_t get_offset_of_detonationImpactVelocity_5() { return static_cast<int32_t>(offsetof(Explosive_t35EC7643F888FA175DDBE61BE15F0662512C0BC0, ___detonationImpactVelocity_5)); }
	inline float get_detonationImpactVelocity_5() const { return ___detonationImpactVelocity_5; }
	inline float* get_address_of_detonationImpactVelocity_5() { return &___detonationImpactVelocity_5; }
	inline void set_detonationImpactVelocity_5(float value)
	{
		___detonationImpactVelocity_5 = value;
	}

	inline static int32_t get_offset_of_sizeMultiplier_6() { return static_cast<int32_t>(offsetof(Explosive_t35EC7643F888FA175DDBE61BE15F0662512C0BC0, ___sizeMultiplier_6)); }
	inline float get_sizeMultiplier_6() const { return ___sizeMultiplier_6; }
	inline float* get_address_of_sizeMultiplier_6() { return &___sizeMultiplier_6; }
	inline void set_sizeMultiplier_6(float value)
	{
		___sizeMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_reset_7() { return static_cast<int32_t>(offsetof(Explosive_t35EC7643F888FA175DDBE61BE15F0662512C0BC0, ___reset_7)); }
	inline bool get_reset_7() const { return ___reset_7; }
	inline bool* get_address_of_reset_7() { return &___reset_7; }
	inline void set_reset_7(bool value)
	{
		___reset_7 = value;
	}

	inline static int32_t get_offset_of_resetTimeDelay_8() { return static_cast<int32_t>(offsetof(Explosive_t35EC7643F888FA175DDBE61BE15F0662512C0BC0, ___resetTimeDelay_8)); }
	inline float get_resetTimeDelay_8() const { return ___resetTimeDelay_8; }
	inline float* get_address_of_resetTimeDelay_8() { return &___resetTimeDelay_8; }
	inline void set_resetTimeDelay_8(float value)
	{
		___resetTimeDelay_8 = value;
	}

	inline static int32_t get_offset_of_m_Exploded_9() { return static_cast<int32_t>(offsetof(Explosive_t35EC7643F888FA175DDBE61BE15F0662512C0BC0, ___m_Exploded_9)); }
	inline bool get_m_Exploded_9() const { return ___m_Exploded_9; }
	inline bool* get_address_of_m_Exploded_9() { return &___m_Exploded_9; }
	inline void set_m_Exploded_9(bool value)
	{
		___m_Exploded_9 = value;
	}

	inline static int32_t get_offset_of_m_ObjectResetter_10() { return static_cast<int32_t>(offsetof(Explosive_t35EC7643F888FA175DDBE61BE15F0662512C0BC0, ___m_ObjectResetter_10)); }
	inline ObjectResetter_t6E96E79B7F57F740C3C7C6C6FEA9DEE271C994A1 * get_m_ObjectResetter_10() const { return ___m_ObjectResetter_10; }
	inline ObjectResetter_t6E96E79B7F57F740C3C7C6C6FEA9DEE271C994A1 ** get_address_of_m_ObjectResetter_10() { return &___m_ObjectResetter_10; }
	inline void set_m_ObjectResetter_10(ObjectResetter_t6E96E79B7F57F740C3C7C6C6FEA9DEE271C994A1 * value)
	{
		___m_ObjectResetter_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ObjectResetter_10), (void*)value);
	}
};


// Prime31.LifecycleHelper
struct  LifecycleHelper_t2C8530CA0073EF4CA43BCC651EB399608723D373  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Action`1<System.Boolean> Prime31.LifecycleHelper::onApplicationPausedEvent
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___onApplicationPausedEvent_4;

public:
	inline static int32_t get_offset_of_onApplicationPausedEvent_4() { return static_cast<int32_t>(offsetof(LifecycleHelper_t2C8530CA0073EF4CA43BCC651EB399608723D373, ___onApplicationPausedEvent_4)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_onApplicationPausedEvent_4() const { return ___onApplicationPausedEvent_4; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_onApplicationPausedEvent_4() { return &___onApplicationPausedEvent_4; }
	inline void set_onApplicationPausedEvent_4(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___onApplicationPausedEvent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onApplicationPausedEvent_4), (void*)value);
	}
};


// UnityStandardAssets.Utility.ObjectResetter
struct  ObjectResetter_t6E96E79B7F57F740C3C7C6C6FEA9DEE271C994A1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 UnityStandardAssets.Utility.ObjectResetter::originalPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___originalPosition_4;
	// UnityEngine.Quaternion UnityStandardAssets.Utility.ObjectResetter::originalRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___originalRotation_5;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UnityStandardAssets.Utility.ObjectResetter::originalStructure
	List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * ___originalStructure_6;
	// UnityEngine.Rigidbody UnityStandardAssets.Utility.ObjectResetter::Rigidbody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___Rigidbody_7;

public:
	inline static int32_t get_offset_of_originalPosition_4() { return static_cast<int32_t>(offsetof(ObjectResetter_t6E96E79B7F57F740C3C7C6C6FEA9DEE271C994A1, ___originalPosition_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_originalPosition_4() const { return ___originalPosition_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_originalPosition_4() { return &___originalPosition_4; }
	inline void set_originalPosition_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___originalPosition_4 = value;
	}

	inline static int32_t get_offset_of_originalRotation_5() { return static_cast<int32_t>(offsetof(ObjectResetter_t6E96E79B7F57F740C3C7C6C6FEA9DEE271C994A1, ___originalRotation_5)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_originalRotation_5() const { return ___originalRotation_5; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_originalRotation_5() { return &___originalRotation_5; }
	inline void set_originalRotation_5(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___originalRotation_5 = value;
	}

	inline static int32_t get_offset_of_originalStructure_6() { return static_cast<int32_t>(offsetof(ObjectResetter_t6E96E79B7F57F740C3C7C6C6FEA9DEE271C994A1, ___originalStructure_6)); }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * get_originalStructure_6() const { return ___originalStructure_6; }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 ** get_address_of_originalStructure_6() { return &___originalStructure_6; }
	inline void set_originalStructure_6(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * value)
	{
		___originalStructure_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___originalStructure_6), (void*)value);
	}

	inline static int32_t get_offset_of_Rigidbody_7() { return static_cast<int32_t>(offsetof(ObjectResetter_t6E96E79B7F57F740C3C7C6C6FEA9DEE271C994A1, ___Rigidbody_7)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_Rigidbody_7() const { return ___Rigidbody_7; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_Rigidbody_7() { return &___Rigidbody_7; }
	inline void set_Rigidbody_7(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___Rigidbody_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Rigidbody_7), (void*)value);
	}
};


// UnityStandardAssets.Utility.ParticleSystemDestroyer
struct  ParticleSystemDestroyer_t6264C19E82E9C2EA88A77D7F639BC48C3AA7C2E7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single UnityStandardAssets.Utility.ParticleSystemDestroyer::minDuration
	float ___minDuration_4;
	// System.Single UnityStandardAssets.Utility.ParticleSystemDestroyer::maxDuration
	float ___maxDuration_5;
	// System.Single UnityStandardAssets.Utility.ParticleSystemDestroyer::m_MaxLifetime
	float ___m_MaxLifetime_6;
	// System.Boolean UnityStandardAssets.Utility.ParticleSystemDestroyer::m_EarlyStop
	bool ___m_EarlyStop_7;

public:
	inline static int32_t get_offset_of_minDuration_4() { return static_cast<int32_t>(offsetof(ParticleSystemDestroyer_t6264C19E82E9C2EA88A77D7F639BC48C3AA7C2E7, ___minDuration_4)); }
	inline float get_minDuration_4() const { return ___minDuration_4; }
	inline float* get_address_of_minDuration_4() { return &___minDuration_4; }
	inline void set_minDuration_4(float value)
	{
		___minDuration_4 = value;
	}

	inline static int32_t get_offset_of_maxDuration_5() { return static_cast<int32_t>(offsetof(ParticleSystemDestroyer_t6264C19E82E9C2EA88A77D7F639BC48C3AA7C2E7, ___maxDuration_5)); }
	inline float get_maxDuration_5() const { return ___maxDuration_5; }
	inline float* get_address_of_maxDuration_5() { return &___maxDuration_5; }
	inline void set_maxDuration_5(float value)
	{
		___maxDuration_5 = value;
	}

	inline static int32_t get_offset_of_m_MaxLifetime_6() { return static_cast<int32_t>(offsetof(ParticleSystemDestroyer_t6264C19E82E9C2EA88A77D7F639BC48C3AA7C2E7, ___m_MaxLifetime_6)); }
	inline float get_m_MaxLifetime_6() const { return ___m_MaxLifetime_6; }
	inline float* get_address_of_m_MaxLifetime_6() { return &___m_MaxLifetime_6; }
	inline void set_m_MaxLifetime_6(float value)
	{
		___m_MaxLifetime_6 = value;
	}

	inline static int32_t get_offset_of_m_EarlyStop_7() { return static_cast<int32_t>(offsetof(ParticleSystemDestroyer_t6264C19E82E9C2EA88A77D7F639BC48C3AA7C2E7, ___m_EarlyStop_7)); }
	inline bool get_m_EarlyStop_7() const { return ___m_EarlyStop_7; }
	inline bool* get_address_of_m_EarlyStop_7() { return &___m_EarlyStop_7; }
	inline void set_m_EarlyStop_7(bool value)
	{
		___m_EarlyStop_7 = value;
	}
};


// UnityStandardAssets.Effects.ParticleSystemMultiplier
struct  ParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single UnityStandardAssets.Effects.ParticleSystemMultiplier::multiplier
	float ___multiplier_4;

public:
	inline static int32_t get_offset_of_multiplier_4() { return static_cast<int32_t>(offsetof(ParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646, ___multiplier_4)); }
	inline float get_multiplier_4() const { return ___multiplier_4; }
	inline float* get_address_of_multiplier_4() { return &___multiplier_4; }
	inline void set_multiplier_4(float value)
	{
		___multiplier_4 = value;
	}
};


// UnityStandardAssets.Water.PlanarReflection
struct  PlanarReflection_tB040855A4E8D0610D7C298C61F6120C8E9C565D1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.LayerMask UnityStandardAssets.Water.PlanarReflection::reflectionMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___reflectionMask_4;
	// System.Boolean UnityStandardAssets.Water.PlanarReflection::reflectSkybox
	bool ___reflectSkybox_5;
	// UnityEngine.Color UnityStandardAssets.Water.PlanarReflection::clearColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___clearColor_6;
	// System.String UnityStandardAssets.Water.PlanarReflection::reflectionSampler
	String_t* ___reflectionSampler_7;
	// System.Single UnityStandardAssets.Water.PlanarReflection::clipPlaneOffset
	float ___clipPlaneOffset_8;
	// UnityEngine.Vector3 UnityStandardAssets.Water.PlanarReflection::m_Oldpos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Oldpos_9;
	// UnityEngine.Camera UnityStandardAssets.Water.PlanarReflection::m_ReflectionCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___m_ReflectionCamera_10;
	// UnityEngine.Material UnityStandardAssets.Water.PlanarReflection::m_SharedMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_SharedMaterial_11;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean> UnityStandardAssets.Water.PlanarReflection::m_HelperCameras
	Dictionary_2_tD81AC0CCD8ADB00A69E5569D0C84C142058583F5 * ___m_HelperCameras_12;

public:
	inline static int32_t get_offset_of_reflectionMask_4() { return static_cast<int32_t>(offsetof(PlanarReflection_tB040855A4E8D0610D7C298C61F6120C8E9C565D1, ___reflectionMask_4)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_reflectionMask_4() const { return ___reflectionMask_4; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_reflectionMask_4() { return &___reflectionMask_4; }
	inline void set_reflectionMask_4(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___reflectionMask_4 = value;
	}

	inline static int32_t get_offset_of_reflectSkybox_5() { return static_cast<int32_t>(offsetof(PlanarReflection_tB040855A4E8D0610D7C298C61F6120C8E9C565D1, ___reflectSkybox_5)); }
	inline bool get_reflectSkybox_5() const { return ___reflectSkybox_5; }
	inline bool* get_address_of_reflectSkybox_5() { return &___reflectSkybox_5; }
	inline void set_reflectSkybox_5(bool value)
	{
		___reflectSkybox_5 = value;
	}

	inline static int32_t get_offset_of_clearColor_6() { return static_cast<int32_t>(offsetof(PlanarReflection_tB040855A4E8D0610D7C298C61F6120C8E9C565D1, ___clearColor_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_clearColor_6() const { return ___clearColor_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_clearColor_6() { return &___clearColor_6; }
	inline void set_clearColor_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___clearColor_6 = value;
	}

	inline static int32_t get_offset_of_reflectionSampler_7() { return static_cast<int32_t>(offsetof(PlanarReflection_tB040855A4E8D0610D7C298C61F6120C8E9C565D1, ___reflectionSampler_7)); }
	inline String_t* get_reflectionSampler_7() const { return ___reflectionSampler_7; }
	inline String_t** get_address_of_reflectionSampler_7() { return &___reflectionSampler_7; }
	inline void set_reflectionSampler_7(String_t* value)
	{
		___reflectionSampler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reflectionSampler_7), (void*)value);
	}

	inline static int32_t get_offset_of_clipPlaneOffset_8() { return static_cast<int32_t>(offsetof(PlanarReflection_tB040855A4E8D0610D7C298C61F6120C8E9C565D1, ___clipPlaneOffset_8)); }
	inline float get_clipPlaneOffset_8() const { return ___clipPlaneOffset_8; }
	inline float* get_address_of_clipPlaneOffset_8() { return &___clipPlaneOffset_8; }
	inline void set_clipPlaneOffset_8(float value)
	{
		___clipPlaneOffset_8 = value;
	}

	inline static int32_t get_offset_of_m_Oldpos_9() { return static_cast<int32_t>(offsetof(PlanarReflection_tB040855A4E8D0610D7C298C61F6120C8E9C565D1, ___m_Oldpos_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Oldpos_9() const { return ___m_Oldpos_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Oldpos_9() { return &___m_Oldpos_9; }
	inline void set_m_Oldpos_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Oldpos_9 = value;
	}

	inline static int32_t get_offset_of_m_ReflectionCamera_10() { return static_cast<int32_t>(offsetof(PlanarReflection_tB040855A4E8D0610D7C298C61F6120C8E9C565D1, ___m_ReflectionCamera_10)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_m_ReflectionCamera_10() const { return ___m_ReflectionCamera_10; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_m_ReflectionCamera_10() { return &___m_ReflectionCamera_10; }
	inline void set_m_ReflectionCamera_10(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___m_ReflectionCamera_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReflectionCamera_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_SharedMaterial_11() { return static_cast<int32_t>(offsetof(PlanarReflection_tB040855A4E8D0610D7C298C61F6120C8E9C565D1, ___m_SharedMaterial_11)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_SharedMaterial_11() const { return ___m_SharedMaterial_11; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_SharedMaterial_11() { return &___m_SharedMaterial_11; }
	inline void set_m_SharedMaterial_11(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_SharedMaterial_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SharedMaterial_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_HelperCameras_12() { return static_cast<int32_t>(offsetof(PlanarReflection_tB040855A4E8D0610D7C298C61F6120C8E9C565D1, ___m_HelperCameras_12)); }
	inline Dictionary_2_tD81AC0CCD8ADB00A69E5569D0C84C142058583F5 * get_m_HelperCameras_12() const { return ___m_HelperCameras_12; }
	inline Dictionary_2_tD81AC0CCD8ADB00A69E5569D0C84C142058583F5 ** get_address_of_m_HelperCameras_12() { return &___m_HelperCameras_12; }
	inline void set_m_HelperCameras_12(Dictionary_2_tD81AC0CCD8ADB00A69E5569D0C84C142058583F5 * value)
	{
		___m_HelperCameras_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HelperCameras_12), (void*)value);
	}
};


// UnityStandardAssets.Water.WaterBase
struct  WaterBase_t0CEB2ECA42DC5F96547CC4DC9778ACC4E2B44836  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Material UnityStandardAssets.Water.WaterBase::sharedMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___sharedMaterial_4;
	// UnityStandardAssets.Water.WaterQuality UnityStandardAssets.Water.WaterBase::waterQuality
	int32_t ___waterQuality_5;
	// System.Boolean UnityStandardAssets.Water.WaterBase::edgeBlend
	bool ___edgeBlend_6;

public:
	inline static int32_t get_offset_of_sharedMaterial_4() { return static_cast<int32_t>(offsetof(WaterBase_t0CEB2ECA42DC5F96547CC4DC9778ACC4E2B44836, ___sharedMaterial_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_sharedMaterial_4() const { return ___sharedMaterial_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_sharedMaterial_4() { return &___sharedMaterial_4; }
	inline void set_sharedMaterial_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___sharedMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sharedMaterial_4), (void*)value);
	}

	inline static int32_t get_offset_of_waterQuality_5() { return static_cast<int32_t>(offsetof(WaterBase_t0CEB2ECA42DC5F96547CC4DC9778ACC4E2B44836, ___waterQuality_5)); }
	inline int32_t get_waterQuality_5() const { return ___waterQuality_5; }
	inline int32_t* get_address_of_waterQuality_5() { return &___waterQuality_5; }
	inline void set_waterQuality_5(int32_t value)
	{
		___waterQuality_5 = value;
	}

	inline static int32_t get_offset_of_edgeBlend_6() { return static_cast<int32_t>(offsetof(WaterBase_t0CEB2ECA42DC5F96547CC4DC9778ACC4E2B44836, ___edgeBlend_6)); }
	inline bool get_edgeBlend_6() const { return ___edgeBlend_6; }
	inline bool* get_address_of_edgeBlend_6() { return &___edgeBlend_6; }
	inline void set_edgeBlend_6(bool value)
	{
		___edgeBlend_6 = value;
	}
};


// UnityStandardAssets.Water.WaterBasic
struct  WaterBasic_t9135E062059CDB484D25131E721BBD901844CB79  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityStandardAssets.Effects.WaterHoseParticles
struct  WaterHoseParticles_t19C0A4D7559D7C285B5B0EDCCA89F9263DAA349B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single UnityStandardAssets.Effects.WaterHoseParticles::force
	float ___force_5;
	// System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent> UnityStandardAssets.Effects.WaterHoseParticles::m_CollisionEvents
	List_1_tC57F1BA46C89AA33253984801D30F8502BBBFE68 * ___m_CollisionEvents_6;
	// UnityEngine.ParticleSystem UnityStandardAssets.Effects.WaterHoseParticles::m_ParticleSystem
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_7;

public:
	inline static int32_t get_offset_of_force_5() { return static_cast<int32_t>(offsetof(WaterHoseParticles_t19C0A4D7559D7C285B5B0EDCCA89F9263DAA349B, ___force_5)); }
	inline float get_force_5() const { return ___force_5; }
	inline float* get_address_of_force_5() { return &___force_5; }
	inline void set_force_5(float value)
	{
		___force_5 = value;
	}

	inline static int32_t get_offset_of_m_CollisionEvents_6() { return static_cast<int32_t>(offsetof(WaterHoseParticles_t19C0A4D7559D7C285B5B0EDCCA89F9263DAA349B, ___m_CollisionEvents_6)); }
	inline List_1_tC57F1BA46C89AA33253984801D30F8502BBBFE68 * get_m_CollisionEvents_6() const { return ___m_CollisionEvents_6; }
	inline List_1_tC57F1BA46C89AA33253984801D30F8502BBBFE68 ** get_address_of_m_CollisionEvents_6() { return &___m_CollisionEvents_6; }
	inline void set_m_CollisionEvents_6(List_1_tC57F1BA46C89AA33253984801D30F8502BBBFE68 * value)
	{
		___m_CollisionEvents_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CollisionEvents_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParticleSystem_7() { return static_cast<int32_t>(offsetof(WaterHoseParticles_t19C0A4D7559D7C285B5B0EDCCA89F9263DAA349B, ___m_ParticleSystem_7)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_m_ParticleSystem_7() const { return ___m_ParticleSystem_7; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_m_ParticleSystem_7() { return &___m_ParticleSystem_7; }
	inline void set_m_ParticleSystem_7(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___m_ParticleSystem_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParticleSystem_7), (void*)value);
	}
};

struct WaterHoseParticles_t19C0A4D7559D7C285B5B0EDCCA89F9263DAA349B_StaticFields
{
public:
	// System.Single UnityStandardAssets.Effects.WaterHoseParticles::lastSoundTime
	float ___lastSoundTime_4;

public:
	inline static int32_t get_offset_of_lastSoundTime_4() { return static_cast<int32_t>(offsetof(WaterHoseParticles_t19C0A4D7559D7C285B5B0EDCCA89F9263DAA349B_StaticFields, ___lastSoundTime_4)); }
	inline float get_lastSoundTime_4() const { return ___lastSoundTime_4; }
	inline float* get_address_of_lastSoundTime_4() { return &___lastSoundTime_4; }
	inline void set_lastSoundTime_4(float value)
	{
		___lastSoundTime_4 = value;
	}
};


// UnityStandardAssets.Water.WaterTile
struct  WaterTile_t797672B40749CAFC551CFAD686CE4D6DB9DD9C4B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityStandardAssets.Water.PlanarReflection UnityStandardAssets.Water.WaterTile::reflection
	PlanarReflection_tB040855A4E8D0610D7C298C61F6120C8E9C565D1 * ___reflection_4;
	// UnityStandardAssets.Water.WaterBase UnityStandardAssets.Water.WaterTile::waterBase
	WaterBase_t0CEB2ECA42DC5F96547CC4DC9778ACC4E2B44836 * ___waterBase_5;

public:
	inline static int32_t get_offset_of_reflection_4() { return static_cast<int32_t>(offsetof(WaterTile_t797672B40749CAFC551CFAD686CE4D6DB9DD9C4B, ___reflection_4)); }
	inline PlanarReflection_tB040855A4E8D0610D7C298C61F6120C8E9C565D1 * get_reflection_4() const { return ___reflection_4; }
	inline PlanarReflection_tB040855A4E8D0610D7C298C61F6120C8E9C565D1 ** get_address_of_reflection_4() { return &___reflection_4; }
	inline void set_reflection_4(PlanarReflection_tB040855A4E8D0610D7C298C61F6120C8E9C565D1 * value)
	{
		___reflection_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reflection_4), (void*)value);
	}

	inline static int32_t get_offset_of_waterBase_5() { return static_cast<int32_t>(offsetof(WaterTile_t797672B40749CAFC551CFAD686CE4D6DB9DD9C4B, ___waterBase_5)); }
	inline WaterBase_t0CEB2ECA42DC5F96547CC4DC9778ACC4E2B44836 * get_waterBase_5() const { return ___waterBase_5; }
	inline WaterBase_t0CEB2ECA42DC5F96547CC4DC9778ACC4E2B44836 ** get_address_of_waterBase_5() { return &___waterBase_5; }
	inline void set_waterBase_5(WaterBase_t0CEB2ECA42DC5F96547CC4DC9778ACC4E2B44836 * value)
	{
		___waterBase_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waterBase_5), (void*)value);
	}
};


// UnityStandardAssets.Utility.WaypointCircuit
struct  WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityStandardAssets.Utility.WaypointCircuit/WaypointList UnityStandardAssets.Utility.WaypointCircuit::waypointList
	WaypointList_t7CA06137643274484AEDCDAA2B090C56E60FA730 * ___waypointList_4;
	// System.Boolean UnityStandardAssets.Utility.WaypointCircuit::smoothRoute
	bool ___smoothRoute_5;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::numPoints
	int32_t ___numPoints_6;
	// UnityEngine.Vector3[] UnityStandardAssets.Utility.WaypointCircuit::points
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___points_7;
	// System.Single[] UnityStandardAssets.Utility.WaypointCircuit::distances
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___distances_8;
	// System.Single UnityStandardAssets.Utility.WaypointCircuit::editorVisualisationSubsteps
	float ___editorVisualisationSubsteps_9;
	// System.Single UnityStandardAssets.Utility.WaypointCircuit::<Length>k__BackingField
	float ___U3CLengthU3Ek__BackingField_10;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::p0n
	int32_t ___p0n_11;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::p1n
	int32_t ___p1n_12;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::p2n
	int32_t ___p2n_13;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::p3n
	int32_t ___p3n_14;
	// System.Single UnityStandardAssets.Utility.WaypointCircuit::i
	float ___i_15;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::P0
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___P0_16;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::P1
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___P1_17;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::P2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___P2_18;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::P3
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___P3_19;

public:
	inline static int32_t get_offset_of_waypointList_4() { return static_cast<int32_t>(offsetof(WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00, ___waypointList_4)); }
	inline WaypointList_t7CA06137643274484AEDCDAA2B090C56E60FA730 * get_waypointList_4() const { return ___waypointList_4; }
	inline WaypointList_t7CA06137643274484AEDCDAA2B090C56E60FA730 ** get_address_of_waypointList_4() { return &___waypointList_4; }
	inline void set_waypointList_4(WaypointList_t7CA06137643274484AEDCDAA2B090C56E60FA730 * value)
	{
		___waypointList_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waypointList_4), (void*)value);
	}

	inline static int32_t get_offset_of_smoothRoute_5() { return static_cast<int32_t>(offsetof(WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00, ___smoothRoute_5)); }
	inline bool get_smoothRoute_5() const { return ___smoothRoute_5; }
	inline bool* get_address_of_smoothRoute_5() { return &___smoothRoute_5; }
	inline void set_smoothRoute_5(bool value)
	{
		___smoothRoute_5 = value;
	}

	inline static int32_t get_offset_of_numPoints_6() { return static_cast<int32_t>(offsetof(WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00, ___numPoints_6)); }
	inline int32_t get_numPoints_6() const { return ___numPoints_6; }
	inline int32_t* get_address_of_numPoints_6() { return &___numPoints_6; }
	inline void set_numPoints_6(int32_t value)
	{
		___numPoints_6 = value;
	}

	inline static int32_t get_offset_of_points_7() { return static_cast<int32_t>(offsetof(WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00, ___points_7)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_points_7() const { return ___points_7; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_points_7() { return &___points_7; }
	inline void set_points_7(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___points_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___points_7), (void*)value);
	}

	inline static int32_t get_offset_of_distances_8() { return static_cast<int32_t>(offsetof(WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00, ___distances_8)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_distances_8() const { return ___distances_8; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_distances_8() { return &___distances_8; }
	inline void set_distances_8(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___distances_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___distances_8), (void*)value);
	}

	inline static int32_t get_offset_of_editorVisualisationSubsteps_9() { return static_cast<int32_t>(offsetof(WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00, ___editorVisualisationSubsteps_9)); }
	inline float get_editorVisualisationSubsteps_9() const { return ___editorVisualisationSubsteps_9; }
	inline float* get_address_of_editorVisualisationSubsteps_9() { return &___editorVisualisationSubsteps_9; }
	inline void set_editorVisualisationSubsteps_9(float value)
	{
		___editorVisualisationSubsteps_9 = value;
	}

	inline static int32_t get_offset_of_U3CLengthU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00, ___U3CLengthU3Ek__BackingField_10)); }
	inline float get_U3CLengthU3Ek__BackingField_10() const { return ___U3CLengthU3Ek__BackingField_10; }
	inline float* get_address_of_U3CLengthU3Ek__BackingField_10() { return &___U3CLengthU3Ek__BackingField_10; }
	inline void set_U3CLengthU3Ek__BackingField_10(float value)
	{
		___U3CLengthU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_p0n_11() { return static_cast<int32_t>(offsetof(WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00, ___p0n_11)); }
	inline int32_t get_p0n_11() const { return ___p0n_11; }
	inline int32_t* get_address_of_p0n_11() { return &___p0n_11; }
	inline void set_p0n_11(int32_t value)
	{
		___p0n_11 = value;
	}

	inline static int32_t get_offset_of_p1n_12() { return static_cast<int32_t>(offsetof(WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00, ___p1n_12)); }
	inline int32_t get_p1n_12() const { return ___p1n_12; }
	inline int32_t* get_address_of_p1n_12() { return &___p1n_12; }
	inline void set_p1n_12(int32_t value)
	{
		___p1n_12 = value;
	}

	inline static int32_t get_offset_of_p2n_13() { return static_cast<int32_t>(offsetof(WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00, ___p2n_13)); }
	inline int32_t get_p2n_13() const { return ___p2n_13; }
	inline int32_t* get_address_of_p2n_13() { return &___p2n_13; }
	inline void set_p2n_13(int32_t value)
	{
		___p2n_13 = value;
	}

	inline static int32_t get_offset_of_p3n_14() { return static_cast<int32_t>(offsetof(WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00, ___p3n_14)); }
	inline int32_t get_p3n_14() const { return ___p3n_14; }
	inline int32_t* get_address_of_p3n_14() { return &___p3n_14; }
	inline void set_p3n_14(int32_t value)
	{
		___p3n_14 = value;
	}

	inline static int32_t get_offset_of_i_15() { return static_cast<int32_t>(offsetof(WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00, ___i_15)); }
	inline float get_i_15() const { return ___i_15; }
	inline float* get_address_of_i_15() { return &___i_15; }
	inline void set_i_15(float value)
	{
		___i_15 = value;
	}

	inline static int32_t get_offset_of_P0_16() { return static_cast<int32_t>(offsetof(WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00, ___P0_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_P0_16() const { return ___P0_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_P0_16() { return &___P0_16; }
	inline void set_P0_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___P0_16 = value;
	}

	inline static int32_t get_offset_of_P1_17() { return static_cast<int32_t>(offsetof(WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00, ___P1_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_P1_17() const { return ___P1_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_P1_17() { return &___P1_17; }
	inline void set_P1_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___P1_17 = value;
	}

	inline static int32_t get_offset_of_P2_18() { return static_cast<int32_t>(offsetof(WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00, ___P2_18)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_P2_18() const { return ___P2_18; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_P2_18() { return &___P2_18; }
	inline void set_P2_18(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___P2_18 = value;
	}

	inline static int32_t get_offset_of_P3_19() { return static_cast<int32_t>(offsetof(WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00, ___P3_19)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_P3_19() const { return ___P3_19; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_P3_19() { return &___P3_19; }
	inline void set_P3_19(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___P3_19 = value;
	}
};


// UnityStandardAssets.Utility.WaypointProgressTracker
struct  WaypointProgressTracker_t5A14ED6C34AB2CC846E5E61AE7771C908B3D61E7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityStandardAssets.Utility.WaypointCircuit UnityStandardAssets.Utility.WaypointProgressTracker::circuit
	WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * ___circuit_4;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::lookAheadForTargetOffset
	float ___lookAheadForTargetOffset_5;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::lookAheadForTargetFactor
	float ___lookAheadForTargetFactor_6;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::lookAheadForSpeedOffset
	float ___lookAheadForSpeedOffset_7;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::lookAheadForSpeedFactor
	float ___lookAheadForSpeedFactor_8;
	// UnityStandardAssets.Utility.WaypointProgressTracker/ProgressStyle UnityStandardAssets.Utility.WaypointProgressTracker::progressStyle
	int32_t ___progressStyle_9;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::pointToPointThreshold
	float ___pointToPointThreshold_10;
	// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::<targetPoint>k__BackingField
	RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  ___U3CtargetPointU3Ek__BackingField_11;
	// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::<speedPoint>k__BackingField
	RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  ___U3CspeedPointU3Ek__BackingField_12;
	// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::<progressPoint>k__BackingField
	RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  ___U3CprogressPointU3Ek__BackingField_13;
	// UnityEngine.Transform UnityStandardAssets.Utility.WaypointProgressTracker::target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_14;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::progressDistance
	float ___progressDistance_15;
	// System.Int32 UnityStandardAssets.Utility.WaypointProgressTracker::progressNum
	int32_t ___progressNum_16;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointProgressTracker::lastPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lastPosition_17;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::speed
	float ___speed_18;

public:
	inline static int32_t get_offset_of_circuit_4() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t5A14ED6C34AB2CC846E5E61AE7771C908B3D61E7, ___circuit_4)); }
	inline WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * get_circuit_4() const { return ___circuit_4; }
	inline WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 ** get_address_of_circuit_4() { return &___circuit_4; }
	inline void set_circuit_4(WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * value)
	{
		___circuit_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___circuit_4), (void*)value);
	}

	inline static int32_t get_offset_of_lookAheadForTargetOffset_5() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t5A14ED6C34AB2CC846E5E61AE7771C908B3D61E7, ___lookAheadForTargetOffset_5)); }
	inline float get_lookAheadForTargetOffset_5() const { return ___lookAheadForTargetOffset_5; }
	inline float* get_address_of_lookAheadForTargetOffset_5() { return &___lookAheadForTargetOffset_5; }
	inline void set_lookAheadForTargetOffset_5(float value)
	{
		___lookAheadForTargetOffset_5 = value;
	}

	inline static int32_t get_offset_of_lookAheadForTargetFactor_6() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t5A14ED6C34AB2CC846E5E61AE7771C908B3D61E7, ___lookAheadForTargetFactor_6)); }
	inline float get_lookAheadForTargetFactor_6() const { return ___lookAheadForTargetFactor_6; }
	inline float* get_address_of_lookAheadForTargetFactor_6() { return &___lookAheadForTargetFactor_6; }
	inline void set_lookAheadForTargetFactor_6(float value)
	{
		___lookAheadForTargetFactor_6 = value;
	}

	inline static int32_t get_offset_of_lookAheadForSpeedOffset_7() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t5A14ED6C34AB2CC846E5E61AE7771C908B3D61E7, ___lookAheadForSpeedOffset_7)); }
	inline float get_lookAheadForSpeedOffset_7() const { return ___lookAheadForSpeedOffset_7; }
	inline float* get_address_of_lookAheadForSpeedOffset_7() { return &___lookAheadForSpeedOffset_7; }
	inline void set_lookAheadForSpeedOffset_7(float value)
	{
		___lookAheadForSpeedOffset_7 = value;
	}

	inline static int32_t get_offset_of_lookAheadForSpeedFactor_8() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t5A14ED6C34AB2CC846E5E61AE7771C908B3D61E7, ___lookAheadForSpeedFactor_8)); }
	inline float get_lookAheadForSpeedFactor_8() const { return ___lookAheadForSpeedFactor_8; }
	inline float* get_address_of_lookAheadForSpeedFactor_8() { return &___lookAheadForSpeedFactor_8; }
	inline void set_lookAheadForSpeedFactor_8(float value)
	{
		___lookAheadForSpeedFactor_8 = value;
	}

	inline static int32_t get_offset_of_progressStyle_9() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t5A14ED6C34AB2CC846E5E61AE7771C908B3D61E7, ___progressStyle_9)); }
	inline int32_t get_progressStyle_9() const { return ___progressStyle_9; }
	inline int32_t* get_address_of_progressStyle_9() { return &___progressStyle_9; }
	inline void set_progressStyle_9(int32_t value)
	{
		___progressStyle_9 = value;
	}

	inline static int32_t get_offset_of_pointToPointThreshold_10() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t5A14ED6C34AB2CC846E5E61AE7771C908B3D61E7, ___pointToPointThreshold_10)); }
	inline float get_pointToPointThreshold_10() const { return ___pointToPointThreshold_10; }
	inline float* get_address_of_pointToPointThreshold_10() { return &___pointToPointThreshold_10; }
	inline void set_pointToPointThreshold_10(float value)
	{
		___pointToPointThreshold_10 = value;
	}

	inline static int32_t get_offset_of_U3CtargetPointU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t5A14ED6C34AB2CC846E5E61AE7771C908B3D61E7, ___U3CtargetPointU3Ek__BackingField_11)); }
	inline RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  get_U3CtargetPointU3Ek__BackingField_11() const { return ___U3CtargetPointU3Ek__BackingField_11; }
	inline RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3 * get_address_of_U3CtargetPointU3Ek__BackingField_11() { return &___U3CtargetPointU3Ek__BackingField_11; }
	inline void set_U3CtargetPointU3Ek__BackingField_11(RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  value)
	{
		___U3CtargetPointU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CspeedPointU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t5A14ED6C34AB2CC846E5E61AE7771C908B3D61E7, ___U3CspeedPointU3Ek__BackingField_12)); }
	inline RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  get_U3CspeedPointU3Ek__BackingField_12() const { return ___U3CspeedPointU3Ek__BackingField_12; }
	inline RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3 * get_address_of_U3CspeedPointU3Ek__BackingField_12() { return &___U3CspeedPointU3Ek__BackingField_12; }
	inline void set_U3CspeedPointU3Ek__BackingField_12(RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  value)
	{
		___U3CspeedPointU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CprogressPointU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t5A14ED6C34AB2CC846E5E61AE7771C908B3D61E7, ___U3CprogressPointU3Ek__BackingField_13)); }
	inline RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  get_U3CprogressPointU3Ek__BackingField_13() const { return ___U3CprogressPointU3Ek__BackingField_13; }
	inline RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3 * get_address_of_U3CprogressPointU3Ek__BackingField_13() { return &___U3CprogressPointU3Ek__BackingField_13; }
	inline void set_U3CprogressPointU3Ek__BackingField_13(RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  value)
	{
		___U3CprogressPointU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_target_14() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t5A14ED6C34AB2CC846E5E61AE7771C908B3D61E7, ___target_14)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_target_14() const { return ___target_14; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_target_14() { return &___target_14; }
	inline void set_target_14(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___target_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_14), (void*)value);
	}

	inline static int32_t get_offset_of_progressDistance_15() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t5A14ED6C34AB2CC846E5E61AE7771C908B3D61E7, ___progressDistance_15)); }
	inline float get_progressDistance_15() const { return ___progressDistance_15; }
	inline float* get_address_of_progressDistance_15() { return &___progressDistance_15; }
	inline void set_progressDistance_15(float value)
	{
		___progressDistance_15 = value;
	}

	inline static int32_t get_offset_of_progressNum_16() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t5A14ED6C34AB2CC846E5E61AE7771C908B3D61E7, ___progressNum_16)); }
	inline int32_t get_progressNum_16() const { return ___progressNum_16; }
	inline int32_t* get_address_of_progressNum_16() { return &___progressNum_16; }
	inline void set_progressNum_16(int32_t value)
	{
		___progressNum_16 = value;
	}

	inline static int32_t get_offset_of_lastPosition_17() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t5A14ED6C34AB2CC846E5E61AE7771C908B3D61E7, ___lastPosition_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_lastPosition_17() const { return ___lastPosition_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_lastPosition_17() { return &___lastPosition_17; }
	inline void set_lastPosition_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___lastPosition_17 = value;
	}

	inline static int32_t get_offset_of_speed_18() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t5A14ED6C34AB2CC846E5E61AE7771C908B3D61E7, ___speed_18)); }
	inline float get_speed_18() const { return ___speed_18; }
	inline float* get_address_of_speed_18() { return &___speed_18; }
	inline void set_speed_18(float value)
	{
		___speed_18 = value;
	}
};


// Prime31.EtceteraManager
struct  EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921  : public AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A
{
public:

public:
};

struct EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_StaticFields
{
public:
	// System.Action Prime31.EtceteraManager::didShowToastEventSucceeded
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___didShowToastEventSucceeded_7;
	// System.Action Prime31.EtceteraManager::didSpeakEventSucceeded
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___didSpeakEventSucceeded_8;
	// System.Action Prime31.EtceteraManager::dismissingViewControllerEvent
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___dismissingViewControllerEvent_9;
	// System.Action Prime31.EtceteraManager::imagePickerCancelledEvent
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___imagePickerCancelledEvent_10;
	// System.Action`1<System.String> Prime31.EtceteraManager::imagePickerChoseImageEvent
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___imagePickerChoseImageEvent_11;
	// System.Action Prime31.EtceteraManager::saveImageToPhotoAlbumSucceededEvent
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___saveImageToPhotoAlbumSucceededEvent_12;
	// System.Action`1<System.String> Prime31.EtceteraManager::saveImageToPhotoAlbumFailedEvent
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___saveImageToPhotoAlbumFailedEvent_13;
	// System.Action`1<System.String> Prime31.EtceteraManager::alertButtonClickedEvent
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___alertButtonClickedEvent_14;
	// System.Action Prime31.EtceteraManager::promptCancelledEvent
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___promptCancelledEvent_15;
	// System.Action`1<System.String> Prime31.EtceteraManager::singleFieldPromptTextEnteredEvent
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___singleFieldPromptTextEnteredEvent_16;
	// System.Action`2<System.String,System.String> Prime31.EtceteraManager::twoFieldPromptTextEnteredEvent
	Action_2_t5C556B6D8F8D47EA5C55DC24670009B95AF10486 * ___twoFieldPromptTextEnteredEvent_17;
	// System.Action`1<System.String> Prime31.EtceteraManager::remoteRegistrationSucceededEvent
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___remoteRegistrationSucceededEvent_18;
	// System.Action`1<System.String> Prime31.EtceteraManager::remoteRegistrationFailedEvent
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___remoteRegistrationFailedEvent_19;
	// System.Action Prime31.EtceteraManager::urbanAirshipRegistrationSucceededEvent
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___urbanAirshipRegistrationSucceededEvent_20;
	// System.Action`1<System.String> Prime31.EtceteraManager::urbanAirshipRegistrationFailedEvent
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___urbanAirshipRegistrationFailedEvent_21;
	// System.Action`1<System.String> Prime31.EtceteraManager::pushIORegistrationCompletedEvent
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___pushIORegistrationCompletedEvent_22;
	// System.Action`1<System.Collections.IDictionary> Prime31.EtceteraManager::remoteNotificationReceivedEvent
	Action_1_t6A72AA222A71F875B4B8EE6D51D920E37662376E * ___remoteNotificationReceivedEvent_23;
	// System.Action`1<System.Collections.IDictionary> Prime31.EtceteraManager::remoteNotificationReceivedAtLaunchEvent
	Action_1_t6A72AA222A71F875B4B8EE6D51D920E37662376E * ___remoteNotificationReceivedAtLaunchEvent_24;
	// System.Action`1<System.Collections.IDictionary> Prime31.EtceteraManager::localNotificationWasReceivedEvent
	Action_1_t6A72AA222A71F875B4B8EE6D51D920E37662376E * ___localNotificationWasReceivedEvent_25;
	// System.Action`1<System.Collections.IDictionary> Prime31.EtceteraManager::localNotificationWasReceivedAtLaunchEvent
	Action_1_t6A72AA222A71F875B4B8EE6D51D920E37662376E * ___localNotificationWasReceivedAtLaunchEvent_26;
	// System.Action`1<System.String> Prime31.EtceteraManager::mailComposerFinishedEvent
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___mailComposerFinishedEvent_27;
	// System.Action`1<System.String> Prime31.EtceteraManager::smsComposerFinishedEvent
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___smsComposerFinishedEvent_28;
	// System.String Prime31.EtceteraManager::<deviceToken>k__BackingField
	String_t* ___U3CdeviceTokenU3Ek__BackingField_29;
	// System.String Prime31.EtceteraManager::pushIOApiKey
	String_t* ___pushIOApiKey_30;
	// System.String[] Prime31.EtceteraManager::pushIOCategories
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___pushIOCategories_31;

public:
	inline static int32_t get_offset_of_didShowToastEventSucceeded_7() { return static_cast<int32_t>(offsetof(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_StaticFields, ___didShowToastEventSucceeded_7)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_didShowToastEventSucceeded_7() const { return ___didShowToastEventSucceeded_7; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_didShowToastEventSucceeded_7() { return &___didShowToastEventSucceeded_7; }
	inline void set_didShowToastEventSucceeded_7(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___didShowToastEventSucceeded_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___didShowToastEventSucceeded_7), (void*)value);
	}

	inline static int32_t get_offset_of_didSpeakEventSucceeded_8() { return static_cast<int32_t>(offsetof(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_StaticFields, ___didSpeakEventSucceeded_8)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_didSpeakEventSucceeded_8() const { return ___didSpeakEventSucceeded_8; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_didSpeakEventSucceeded_8() { return &___didSpeakEventSucceeded_8; }
	inline void set_didSpeakEventSucceeded_8(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___didSpeakEventSucceeded_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___didSpeakEventSucceeded_8), (void*)value);
	}

	inline static int32_t get_offset_of_dismissingViewControllerEvent_9() { return static_cast<int32_t>(offsetof(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_StaticFields, ___dismissingViewControllerEvent_9)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_dismissingViewControllerEvent_9() const { return ___dismissingViewControllerEvent_9; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_dismissingViewControllerEvent_9() { return &___dismissingViewControllerEvent_9; }
	inline void set_dismissingViewControllerEvent_9(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___dismissingViewControllerEvent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dismissingViewControllerEvent_9), (void*)value);
	}

	inline static int32_t get_offset_of_imagePickerCancelledEvent_10() { return static_cast<int32_t>(offsetof(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_StaticFields, ___imagePickerCancelledEvent_10)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_imagePickerCancelledEvent_10() const { return ___imagePickerCancelledEvent_10; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_imagePickerCancelledEvent_10() { return &___imagePickerCancelledEvent_10; }
	inline void set_imagePickerCancelledEvent_10(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___imagePickerCancelledEvent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___imagePickerCancelledEvent_10), (void*)value);
	}

	inline static int32_t get_offset_of_imagePickerChoseImageEvent_11() { return static_cast<int32_t>(offsetof(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_StaticFields, ___imagePickerChoseImageEvent_11)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_imagePickerChoseImageEvent_11() const { return ___imagePickerChoseImageEvent_11; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_imagePickerChoseImageEvent_11() { return &___imagePickerChoseImageEvent_11; }
	inline void set_imagePickerChoseImageEvent_11(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___imagePickerChoseImageEvent_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___imagePickerChoseImageEvent_11), (void*)value);
	}

	inline static int32_t get_offset_of_saveImageToPhotoAlbumSucceededEvent_12() { return static_cast<int32_t>(offsetof(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_StaticFields, ___saveImageToPhotoAlbumSucceededEvent_12)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_saveImageToPhotoAlbumSucceededEvent_12() const { return ___saveImageToPhotoAlbumSucceededEvent_12; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_saveImageToPhotoAlbumSucceededEvent_12() { return &___saveImageToPhotoAlbumSucceededEvent_12; }
	inline void set_saveImageToPhotoAlbumSucceededEvent_12(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___saveImageToPhotoAlbumSucceededEvent_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saveImageToPhotoAlbumSucceededEvent_12), (void*)value);
	}

	inline static int32_t get_offset_of_saveImageToPhotoAlbumFailedEvent_13() { return static_cast<int32_t>(offsetof(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_StaticFields, ___saveImageToPhotoAlbumFailedEvent_13)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_saveImageToPhotoAlbumFailedEvent_13() const { return ___saveImageToPhotoAlbumFailedEvent_13; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_saveImageToPhotoAlbumFailedEvent_13() { return &___saveImageToPhotoAlbumFailedEvent_13; }
	inline void set_saveImageToPhotoAlbumFailedEvent_13(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___saveImageToPhotoAlbumFailedEvent_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saveImageToPhotoAlbumFailedEvent_13), (void*)value);
	}

	inline static int32_t get_offset_of_alertButtonClickedEvent_14() { return static_cast<int32_t>(offsetof(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_StaticFields, ___alertButtonClickedEvent_14)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_alertButtonClickedEvent_14() const { return ___alertButtonClickedEvent_14; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_alertButtonClickedEvent_14() { return &___alertButtonClickedEvent_14; }
	inline void set_alertButtonClickedEvent_14(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___alertButtonClickedEvent_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___alertButtonClickedEvent_14), (void*)value);
	}

	inline static int32_t get_offset_of_promptCancelledEvent_15() { return static_cast<int32_t>(offsetof(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_StaticFields, ___promptCancelledEvent_15)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_promptCancelledEvent_15() const { return ___promptCancelledEvent_15; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_promptCancelledEvent_15() { return &___promptCancelledEvent_15; }
	inline void set_promptCancelledEvent_15(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___promptCancelledEvent_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___promptCancelledEvent_15), (void*)value);
	}

	inline static int32_t get_offset_of_singleFieldPromptTextEnteredEvent_16() { return static_cast<int32_t>(offsetof(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_StaticFields, ___singleFieldPromptTextEnteredEvent_16)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_singleFieldPromptTextEnteredEvent_16() const { return ___singleFieldPromptTextEnteredEvent_16; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_singleFieldPromptTextEnteredEvent_16() { return &___singleFieldPromptTextEnteredEvent_16; }
	inline void set_singleFieldPromptTextEnteredEvent_16(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___singleFieldPromptTextEnteredEvent_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___singleFieldPromptTextEnteredEvent_16), (void*)value);
	}

	inline static int32_t get_offset_of_twoFieldPromptTextEnteredEvent_17() { return static_cast<int32_t>(offsetof(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_StaticFields, ___twoFieldPromptTextEnteredEvent_17)); }
	inline Action_2_t5C556B6D8F8D47EA5C55DC24670009B95AF10486 * get_twoFieldPromptTextEnteredEvent_17() const { return ___twoFieldPromptTextEnteredEvent_17; }
	inline Action_2_t5C556B6D8F8D47EA5C55DC24670009B95AF10486 ** get_address_of_twoFieldPromptTextEnteredEvent_17() { return &___twoFieldPromptTextEnteredEvent_17; }
	inline void set_twoFieldPromptTextEnteredEvent_17(Action_2_t5C556B6D8F8D47EA5C55DC24670009B95AF10486 * value)
	{
		___twoFieldPromptTextEnteredEvent_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___twoFieldPromptTextEnteredEvent_17), (void*)value);
	}

	inline static int32_t get_offset_of_remoteRegistrationSucceededEvent_18() { return static_cast<int32_t>(offsetof(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_StaticFields, ___remoteRegistrationSucceededEvent_18)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_remoteRegistrationSucceededEvent_18() const { return ___remoteRegistrationSucceededEvent_18; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_remoteRegistrationSucceededEvent_18() { return &___remoteRegistrationSucceededEvent_18; }
	inline void set_remoteRegistrationSucceededEvent_18(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___remoteRegistrationSucceededEvent_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteRegistrationSucceededEvent_18), (void*)value);
	}

	inline static int32_t get_offset_of_remoteRegistrationFailedEvent_19() { return static_cast<int32_t>(offsetof(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_StaticFields, ___remoteRegistrationFailedEvent_19)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_remoteRegistrationFailedEvent_19() const { return ___remoteRegistrationFailedEvent_19; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_remoteRegistrationFailedEvent_19() { return &___remoteRegistrationFailedEvent_19; }
	inline void set_remoteRegistrationFailedEvent_19(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___remoteRegistrationFailedEvent_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteRegistrationFailedEvent_19), (void*)value);
	}

	inline static int32_t get_offset_of_urbanAirshipRegistrationSucceededEvent_20() { return static_cast<int32_t>(offsetof(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_StaticFields, ___urbanAirshipRegistrationSucceededEvent_20)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_urbanAirshipRegistrationSucceededEvent_20() const { return ___urbanAirshipRegistrationSucceededEvent_20; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_urbanAirshipRegistrationSucceededEvent_20() { return &___urbanAirshipRegistrationSucceededEvent_20; }
	inline void set_urbanAirshipRegistrationSucceededEvent_20(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___urbanAirshipRegistrationSucceededEvent_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___urbanAirshipRegistrationSucceededEvent_20), (void*)value);
	}

	inline static int32_t get_offset_of_urbanAirshipRegistrationFailedEvent_21() { return static_cast<int32_t>(offsetof(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_StaticFields, ___urbanAirshipRegistrationFailedEvent_21)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_urbanAirshipRegistrationFailedEvent_21() const { return ___urbanAirshipRegistrationFailedEvent_21; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_urbanAirshipRegistrationFailedEvent_21() { return &___urbanAirshipRegistrationFailedEvent_21; }
	inline void set_urbanAirshipRegistrationFailedEvent_21(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___urbanAirshipRegistrationFailedEvent_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___urbanAirshipRegistrationFailedEvent_21), (void*)value);
	}

	inline static int32_t get_offset_of_pushIORegistrationCompletedEvent_22() { return static_cast<int32_t>(offsetof(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_StaticFields, ___pushIORegistrationCompletedEvent_22)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_pushIORegistrationCompletedEvent_22() const { return ___pushIORegistrationCompletedEvent_22; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_pushIORegistrationCompletedEvent_22() { return &___pushIORegistrationCompletedEvent_22; }
	inline void set_pushIORegistrationCompletedEvent_22(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___pushIORegistrationCompletedEvent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pushIORegistrationCompletedEvent_22), (void*)value);
	}

	inline static int32_t get_offset_of_remoteNotificationReceivedEvent_23() { return static_cast<int32_t>(offsetof(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_StaticFields, ___remoteNotificationReceivedEvent_23)); }
	inline Action_1_t6A72AA222A71F875B4B8EE6D51D920E37662376E * get_remoteNotificationReceivedEvent_23() const { return ___remoteNotificationReceivedEvent_23; }
	inline Action_1_t6A72AA222A71F875B4B8EE6D51D920E37662376E ** get_address_of_remoteNotificationReceivedEvent_23() { return &___remoteNotificationReceivedEvent_23; }
	inline void set_remoteNotificationReceivedEvent_23(Action_1_t6A72AA222A71F875B4B8EE6D51D920E37662376E * value)
	{
		___remoteNotificationReceivedEvent_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteNotificationReceivedEvent_23), (void*)value);
	}

	inline static int32_t get_offset_of_remoteNotificationReceivedAtLaunchEvent_24() { return static_cast<int32_t>(offsetof(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_StaticFields, ___remoteNotificationReceivedAtLaunchEvent_24)); }
	inline Action_1_t6A72AA222A71F875B4B8EE6D51D920E37662376E * get_remoteNotificationReceivedAtLaunchEvent_24() const { return ___remoteNotificationReceivedAtLaunchEvent_24; }
	inline Action_1_t6A72AA222A71F875B4B8EE6D51D920E37662376E ** get_address_of_remoteNotificationReceivedAtLaunchEvent_24() { return &___remoteNotificationReceivedAtLaunchEvent_24; }
	inline void set_remoteNotificationReceivedAtLaunchEvent_24(Action_1_t6A72AA222A71F875B4B8EE6D51D920E37662376E * value)
	{
		___remoteNotificationReceivedAtLaunchEvent_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteNotificationReceivedAtLaunchEvent_24), (void*)value);
	}

	inline static int32_t get_offset_of_localNotificationWasReceivedEvent_25() { return static_cast<int32_t>(offsetof(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_StaticFields, ___localNotificationWasReceivedEvent_25)); }
	inline Action_1_t6A72AA222A71F875B4B8EE6D51D920E37662376E * get_localNotificationWasReceivedEvent_25() const { return ___localNotificationWasReceivedEvent_25; }
	inline Action_1_t6A72AA222A71F875B4B8EE6D51D920E37662376E ** get_address_of_localNotificationWasReceivedEvent_25() { return &___localNotificationWasReceivedEvent_25; }
	inline void set_localNotificationWasReceivedEvent_25(Action_1_t6A72AA222A71F875B4B8EE6D51D920E37662376E * value)
	{
		___localNotificationWasReceivedEvent_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localNotificationWasReceivedEvent_25), (void*)value);
	}

	inline static int32_t get_offset_of_localNotificationWasReceivedAtLaunchEvent_26() { return static_cast<int32_t>(offsetof(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_StaticFields, ___localNotificationWasReceivedAtLaunchEvent_26)); }
	inline Action_1_t6A72AA222A71F875B4B8EE6D51D920E37662376E * get_localNotificationWasReceivedAtLaunchEvent_26() const { return ___localNotificationWasReceivedAtLaunchEvent_26; }
	inline Action_1_t6A72AA222A71F875B4B8EE6D51D920E37662376E ** get_address_of_localNotificationWasReceivedAtLaunchEvent_26() { return &___localNotificationWasReceivedAtLaunchEvent_26; }
	inline void set_localNotificationWasReceivedAtLaunchEvent_26(Action_1_t6A72AA222A71F875B4B8EE6D51D920E37662376E * value)
	{
		___localNotificationWasReceivedAtLaunchEvent_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localNotificationWasReceivedAtLaunchEvent_26), (void*)value);
	}

	inline static int32_t get_offset_of_mailComposerFinishedEvent_27() { return static_cast<int32_t>(offsetof(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_StaticFields, ___mailComposerFinishedEvent_27)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_mailComposerFinishedEvent_27() const { return ___mailComposerFinishedEvent_27; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_mailComposerFinishedEvent_27() { return &___mailComposerFinishedEvent_27; }
	inline void set_mailComposerFinishedEvent_27(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___mailComposerFinishedEvent_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mailComposerFinishedEvent_27), (void*)value);
	}

	inline static int32_t get_offset_of_smsComposerFinishedEvent_28() { return static_cast<int32_t>(offsetof(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_StaticFields, ___smsComposerFinishedEvent_28)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_smsComposerFinishedEvent_28() const { return ___smsComposerFinishedEvent_28; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_smsComposerFinishedEvent_28() { return &___smsComposerFinishedEvent_28; }
	inline void set_smsComposerFinishedEvent_28(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___smsComposerFinishedEvent_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___smsComposerFinishedEvent_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceTokenU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_StaticFields, ___U3CdeviceTokenU3Ek__BackingField_29)); }
	inline String_t* get_U3CdeviceTokenU3Ek__BackingField_29() const { return ___U3CdeviceTokenU3Ek__BackingField_29; }
	inline String_t** get_address_of_U3CdeviceTokenU3Ek__BackingField_29() { return &___U3CdeviceTokenU3Ek__BackingField_29; }
	inline void set_U3CdeviceTokenU3Ek__BackingField_29(String_t* value)
	{
		___U3CdeviceTokenU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceTokenU3Ek__BackingField_29), (void*)value);
	}

	inline static int32_t get_offset_of_pushIOApiKey_30() { return static_cast<int32_t>(offsetof(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_StaticFields, ___pushIOApiKey_30)); }
	inline String_t* get_pushIOApiKey_30() const { return ___pushIOApiKey_30; }
	inline String_t** get_address_of_pushIOApiKey_30() { return &___pushIOApiKey_30; }
	inline void set_pushIOApiKey_30(String_t* value)
	{
		___pushIOApiKey_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pushIOApiKey_30), (void*)value);
	}

	inline static int32_t get_offset_of_pushIOCategories_31() { return static_cast<int32_t>(offsetof(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_StaticFields, ___pushIOCategories_31)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_pushIOCategories_31() const { return ___pushIOCategories_31; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_pushIOCategories_31() { return &___pushIOCategories_31; }
	inline void set_pushIOCategories_31(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___pushIOCategories_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pushIOCategories_31), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * m_Items[1];

public:
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition[]
struct ReplacementDefinitionU5BU5D_t7FDBF66AC09AE6387AE2F22B4376411B47BF3420  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ReplacementDefinition_t41810CD7BE95D03FDDA88A67498F16BF332A55A1 * m_Items[1];

public:
	inline ReplacementDefinition_t41810CD7BE95D03FDDA88A67498F16BF332A55A1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ReplacementDefinition_t41810CD7BE95D03FDDA88A67498F16BF332A55A1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ReplacementDefinition_t41810CD7BE95D03FDDA88A67498F16BF332A55A1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ReplacementDefinition_t41810CD7BE95D03FDDA88A67498F16BF332A55A1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ReplacementDefinition_t41810CD7BE95D03FDDA88A67498F16BF332A55A1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ReplacementDefinition_t41810CD7BE95D03FDDA88A67498F16BF332A55A1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
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
// UnityEngine.Collider[]
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * m_Items[1];

public:
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017  m_Items[1];

public:
	inline ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * m_Items[1];

public:
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.ParticleCollisionEvent[]
struct ParticleCollisionEventU5BU5D_t62880785FE50C001432E57E6D83BF3BD7BD3183A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD  m_Items[1];

public:
	inline ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD  value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD  List_1_get_Item_mAA87A40BE77081A00704A6584F5C0113C6E636C2_gshared_inline (List_1_tC57F1BA46C89AA33253984801D30F8502BBBFE68 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m43B2344A6F7999E7DC4286052DCD5E0E071A4882_gshared (List_1_tC57F1BA46C89AA33253984801D30F8502BBBFE68 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * Dictionary_2_get_Keys_m771BB389A4CB93B7EDBDC71F503B50049B8999C7_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031  KeyCollection_GetEnumerator_m6B4DC134BB6777F8C99D26315F359E069004CF13_gshared (KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mF254C3BDEA9F0829958522BF88C75DE8BEC4961F_gshared_inline (Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m3714ECE30727E77F475635710D707743B6D930E6_gshared (Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m5440E65428351CA6F19B1804D172DCB5E9C59C98_gshared (Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// UnityEngine.Shader UnityEngine.Material::get_shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Shader::set_maximumLOD(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_set_maximumLOD_m0E42E3AC1D63AEBC9CE42A07AFC729F424365468 (Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.SystemInfo::SupportsRenderTextureFormat(UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_SupportsRenderTextureFormat_m243F66021A643C711FEDEA6B6D002B49ECEEFE1B (int32_t ___format0, const RuntimeMethod* method);
// System.Void UnityEngine.Shader::EnableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_EnableKeyword_m9AC58243D7FBD69DD73D13B73085E0B24E4ECFCE (String_t* ___keyword0, const RuntimeMethod* method);
// System.Void UnityEngine.Shader::DisableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_DisableKeyword_mA6360809F3D85D7D0CAE3EE3C9A85987EC60DBCF (String_t* ___keyword0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// UnityEngine.DepthTextureMode UnityEngine.Camera::get_depthTextureMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_depthTextureMode_mA4B03C6B552FB03DF8A8C20DC9F4EB8FD978A7DD (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_depthTextureMode_m2D4631800947438BE9A7697778E2CB0E38083CF1 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.Water.WaterBase::UpdateShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterBase_UpdateShader_mAACAE2E649B6BA5D1C76CB3420DA70C12F475CC1 (WaterBase_t0CEB2ECA42DC5F96547CC4DC9778ACC4E2B44836 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Material::GetVector(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Material_GetVector_m0E41ED876B69FCFC4B9EA715D0286EE714CD201F (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Single UnityEngine.Material::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(UnityEngine.Vector4,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_op_Multiply_m4B615DCAD6D77FE276AC56F17EA3ED0DCD942111_inline (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___a0, float ___d1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Repeat_mBAB712BA039DF58DBB1B31B669E502C54F3F13CE (float ___t0, float ___length1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Int32 UnityEngine.ParticlePhysicsExtensions::GetCollisionEvents(UnityEngine.ParticleSystem,UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticlePhysicsExtensions_GetCollisionEvents_m19452DB7C4E2F1FF25544C136B903D03CCFD12BD (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___ps0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go1, List_1_tC57F1BA46C89AA33253984801D30F8502BBBFE68 * ___collisionEvents2, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>::get_Item(System.Int32)
inline ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD  List_1_get_Item_mAA87A40BE77081A00704A6584F5C0113C6E636C2_inline (List_1_tC57F1BA46C89AA33253984801D30F8502BBBFE68 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD  (*) (List_1_tC57F1BA46C89AA33253984801D30F8502BBBFE68 *, int32_t, const RuntimeMethod*))List_1_get_Item_mAA87A40BE77081A00704A6584F5C0113C6E636C2_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Component UnityEngine.ParticleCollisionEvent::get_colliderComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ParticleCollisionEvent_get_colliderComponent_m9C6F5BA0C22117C6A04E7E050F653B5CBE320F9A (ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ParticleCollisionEvent_get_velocity_m1EE32F62E2E4FD9BEF5C7A080D386E5133A5505D (ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m78B9D94F505E19F3C63461362AD6DE7EA0836700 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___force0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::BroadcastMessage(System.String,UnityEngine.SendMessageOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_BroadcastMessage_mCEDA3C2B8C9BC1664AE2564F2B1858FE6D7A7521 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___methodName0, int32_t ___options1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>::.ctor()
inline void List_1__ctor_m43B2344A6F7999E7DC4286052DCD5E0E071A4882 (List_1_tC57F1BA46C89AA33253984801D30F8502BBBFE68 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC57F1BA46C89AA33253984801D30F8502BBBFE68 *, const RuntimeMethod*))List_1__ctor_m43B2344A6F7999E7DC4286052DCD5E0E071A4882_gshared)(__this, method);
}
// System.Void UnityStandardAssets.Water.WaterTile::AcquireComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterTile_AcquireComponents_m5C4787156242CE4DD7623423D3D8DE9B77170D61 (WaterTile_t797672B40749CAFC551CFAD686CE4D6DB9DD9C4B * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityStandardAssets.Water.PlanarReflection>()
inline PlanarReflection_tB040855A4E8D0610D7C298C61F6120C8E9C565D1 * Component_GetComponent_TisPlanarReflection_tB040855A4E8D0610D7C298C61F6120C8E9C565D1_m21153C67504633EDECE951547BBED7964831C97F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  PlanarReflection_tB040855A4E8D0610D7C298C61F6120C8E9C565D1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityStandardAssets.Water.WaterBase>()
inline WaterBase_t0CEB2ECA42DC5F96547CC4DC9778ACC4E2B44836 * Component_GetComponent_TisWaterBase_t0CEB2ECA42DC5F96547CC4DC9778ACC4E2B44836_m264AC8962716B70C78F68074255523A92108D6D7 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  WaterBase_t0CEB2ECA42DC5F96547CC4DC9778ACC4E2B44836 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_current_m4E5A6D19F422F8DD2CFF4EE80C65B033F24C45D6 (const RuntimeMethod* method);
// System.Void UnityStandardAssets.Water.PlanarReflection::WaterTileBeingRendered(UnityEngine.Transform,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflection_WaterTileBeingRendered_m2728D4EE2CF9D567BA45D86C1D96D8795783D7E9 (PlanarReflection_tB040855A4E8D0610D7C298C61F6120C8E9C565D1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___tr0, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___currentCam1, const RuntimeMethod* method);
// System.Void UnityStandardAssets.Water.WaterBase::WaterTileBeingRendered(UnityEngine.Transform,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterBase_WaterTileBeingRendered_m3A915B716DE6853A93A15EC4FB97B8BC7B9E46C6 (WaterBase_t0CEB2ECA42DC5F96547CC4DC9778ACC4E2B44836 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___tr0, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___currentCam1, const RuntimeMethod* method);
// UnityEngine.Transform[] UnityStandardAssets.Utility.WaypointCircuit::get_Waypoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* WaypointCircuit_get_Waypoints_m711A9FD5EC14BAA92CC498C65244ED4314EB0FAD (WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.Utility.WaypointCircuit::CachePositionsAndDistances()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaypointCircuit_CachePositionsAndDistances_m7233B1D0601B59E0C5F45DB8F60B2EB08F0C60DE (WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::GetRoutePosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  WaypointCircuit_GetRoutePosition_m7DED18FB4A18FA960C7841B19F0A8787A2156925 (WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * __this, float ___dist0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.Utility.WaypointCircuit/RoutePoint::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoutePoint__ctor_m524AFFB5CE5A8E26DBD334EF5150763602E7BF16 (RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, const RuntimeMethod* method);
// System.Single UnityStandardAssets.Utility.WaypointCircuit::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float WaypointCircuit_get_Length_m0E945F73C31A88101B98561A4D363B4902584AD1_inline (WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.Utility.WaypointCircuit::set_Length(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WaypointCircuit_set_Length_mE69C49D19729D91DE7D632E9A24D7E885D6A4732_inline (WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B (float ___a0, float ___b1, float ___value2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::CatmullRom(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  WaypointCircuit_CatmullRom_m5789B447E55DDCF0DEE59BE26E893C22C77A6D80 (WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p00, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p11, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p22, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p33, float ___i4, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.Utility.WaypointCircuit::DrawGizmos(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaypointCircuit_DrawGizmos_m070442ABA629E9581A83C23A6A0EB9DE8A6C64ED (WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * __this, bool ___selected0, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1 (const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, const RuntimeMethod* method);
// System.Void UnityStandardAssets.Utility.WaypointCircuit/WaypointList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaypointList__ctor_mADAB4BE67815D17936E14849F012560B3DD612F5 (WaypointList_t7CA06137643274484AEDCDAA2B090C56E60FA730 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaypointProgressTracker_Reset_m2B1228750CF9575DCC6A57C6F3DF40A64239A813 (WaypointProgressTracker_t5A14ED6C34AB2CC846E5E61AE7771C908B3D61E7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointCircuit::GetRoutePoint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  WaypointCircuit_GetRoutePoint_mC32D95791D49DC4117EBFFA78A8A3EFE6E5BC423 (WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * __this, float ___dist0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::set_progressPoint(UnityStandardAssets.Utility.WaypointCircuit/RoutePoint)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WaypointProgressTracker_set_progressPoint_m3DE2E6EB72CE4FA7F81CEBC4CB5EDF4529F83EF3_inline (WaypointProgressTracker_t5A14ED6C34AB2CC846E5E61AE7771C908B3D61E7 * __this, RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  ___value0, const RuntimeMethod* method);
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::get_progressPoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  WaypointProgressTracker_get_progressPoint_mEE058238637E1933AB6A6D0B2F500A465AF3CFE2_inline (WaypointProgressTracker_t5A14ED6C34AB2CC846E5E61AE7771C908B3D61E7 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawWireSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireSphere_m96C425145BBD85CF0192F9DDB3D1A8C69429B78B (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center0, float ___radius1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Rigidbody UnityEngine.Joint::get_connectedBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * Joint_get_connectedBody_m35ED1900CACED65F78E5D612BE8979142CBA68A5 (Joint_t085126F36196FC982700F4EA8466CF10C90EC15E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rigidbody::get_drag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rigidbody_get_drag_m0C617963D9BBBC4018D3A8B2DB5D6190615F4A64 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rigidbody::get_angularDrag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rigidbody_get_angularDrag_m0E53FD8F8A09DFA941C52C868288DBBC030C5082 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_drag(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_drag_m60E39BE31529DE5163116785A69FACC77C52DA98 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_angularDrag(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_angularDrag_m8BF3771789B32FB09FDD8066BAFA0A0B661372A4 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Camera UnityStandardAssets.Utility.DragRigidbody::FindCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * DragRigidbody_FindCamera_mFE78D3C4353793B1C072057C76BCB29BDBB4970F (DragRigidbody_t9D0FAFD76BB0876EC4A6505ABC0FE018022CF7BD * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_GetPoint_mC92464E32E42603B7B3444938E8BB8ADA43AB240 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, float ___distance0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1 (int32_t ___button0, const RuntimeMethod* method);
// System.Void UnityEngine.Joint::set_connectedBody(UnityEngine.Rigidbody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joint_set_connectedBody_m572C6C32E2FC5263AECDC460D50E5B0F79727B30 (Joint_t085126F36196FC982700F4EA8466CF10C90EC15E * __this, Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___value0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463 (const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.Byte[] UnityEngine.ImageConversion::EncodeToPNG(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, const RuntimeMethod* method);
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_m1E88860F73A6A2150FAB97D9BF3F44596F06036F (String_t* ___path0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes1, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::Invoke(!0)
inline void Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6 (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *, String_t*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void Prime31.EtceteraBinding::showMailComposerWithAttachment(System.Byte[],System.String,System.String,System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EtceteraBinding_showMailComposerWithAttachment_m6E10661569468840F3D7276FEF7A8D7D90F8C18B (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___attachmentData0, String_t* ___attachmentMimeType1, String_t* ___attachmentFilename2, String_t* ___toAddress3, String_t* ___subject4, String_t* ___body5, bool ___isHTML6, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m4C6FE8C2798C39C20A14DAFC963C720D17F4F987 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___source0, int32_t ___destX1, int32_t ___destY2, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Texture2D>::Invoke(!0)
inline void Action_1_Invoke_m48902101D8F84E0110E1EA89779FE035FC93C460 (Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA *, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void Prime31.EtceteraBinding/<registerDeviceWithGameThrive>d__84::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CregisterDeviceWithGameThriveU3Ed__84_U3CU3Em__Finally1_m88F388FE27B8DAD977ECB578B2BEA9C28849ECA5 (U3CregisterDeviceWithGameThriveU3Ed__84_tFF5AC4FCC89BE2F0E4EE16C4C5A94D734F12D58A * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
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
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Keys()
inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * Dictionary_2_get_Keys_m69FA0927978855661A3EA0DC3B9AE1D00FCE4825 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2_get_Keys_m771BB389A4CB93B7EDBDC71F503B50049B8999C7_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::GetEnumerator()
inline Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547  KeyCollection_GetEnumerator_mBEA854721D5E7717F856476B1E4563A59661CBF7 (KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547  (*) (KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D *, const RuntimeMethod*))KeyCollection_GetEnumerator_m6B4DC134BB6777F8C99D26315F359E069004CF13_gshared)(__this, method);
}
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>::get_Current()
inline String_t* Enumerator_get_Current_m7FA8CBC3A46C7349CA380C3BA7B3294C6C0FC9D8_inline (Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547 *, const RuntimeMethod*))Enumerator_get_Current_mF254C3BDEA9F0829958522BF88C75DE8BEC4961F_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(!0)
inline String_t* Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_m5357493D8DA32113DC35EE95205D4E3D607C9F33 (Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547 *, const RuntimeMethod*))Enumerator_MoveNext_m3714ECE30727E77F475635710D707743B6D930E6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_mFB991F7C2A32C8DA7C4D2F522B9C69C36F7DF904 (Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547 *, const RuntimeMethod*))Enumerator_Dispose_m5440E65428351CA6F19B1804D172DCB5E9C59C98_gshared)(__this, method);
}
// System.String Prime31.Json::encode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Json_encode_m667B2DCA3CD0DCDFDBB1D03C0252FEAF232EDCD5 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.Void System.Collections.Hashtable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_m2D9C25FB57ACD33B0DF8391D38A165975A1D9A91 (Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WWW::.ctor(System.String,System.Byte[],System.Collections.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWW__ctor_m65F8FD8844E98791289859A04B7751554B20C95E (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * __this, String_t* ___url0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___postData1, Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___headers2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.WWW>::Invoke(!0)
inline void Action_1_Invoke_mC6AC684CA28046738FE417C855B623D5F218A8BD (Action_1_t09F80ED9165FB471660E59814CE3452EF1D8B5CD * __this, WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t09F80ED9165FB471660E59814CE3452EF1D8B5CD *, WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void Prime31.EtceteraBinding/<registerDeviceWithGameThrive>d__84::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CregisterDeviceWithGameThriveU3Ed__84_System_IDisposable_Dispose_mBE6DE6E0C11A82F3380DA6F20992A1BBFF28C7C8 (U3CregisterDeviceWithGameThriveU3Ed__84_tFF5AC4FCC89BE2F0E4EE16C4C5A94D734F12D58A * __this, const RuntimeMethod* method);
// System.Void Prime31.EtceteraBinding/<>c__DisplayClass42_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass42_0__ctor_mF587239CFD37A907756BE0205C0942ED81FAE972 (U3CU3Ec__DisplayClass42_0_t23119897902E882858BC9FC825590AD2097A97D9 * __this, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// Prime31.LifecycleHelper Prime31.AbstractManager::get_coroutineSurrogate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LifecycleHelper_t2C8530CA0073EF4CA43BCC651EB399608723D373 * AbstractManager_get_coroutineSurrogate_mB9BFA65B8657DA189D5DAF19C232DFD74FCC9B9D (const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Texture2D>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mB51C80DFB46F2AD9DB1B2885836FA5C92D2451FD (Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.IEnumerator Prime31.EtceteraBinding::getScreenShotTexture(System.Action`1<UnityEngine.Texture2D>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EtceteraBinding_getScreenShotTexture_mEB8CBC75807AFA496164090CE4F488AA53072EEF (Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA * ___completionHandler0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void Prime31.EtceteraBinding/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m034F9BF1289B3FE6A732D6B1A424CA08FFE861DE (U3CU3Ec__DisplayClass1_0_t12FD0ED7CB284735884F6EB4295688EF22EA4F49 * __this, const RuntimeMethod* method);
// System.Void Prime31.EtceteraManager/<registerDeviceWithPushIO>d__85::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CregisterDeviceWithPushIOU3Ed__85_U3CU3Em__Finally1_m3464EC88BD4D3E56907484FF78489B78DDF68369 (U3CregisterDeviceWithPushIOU3Ed__85_t6719999B1823EC1E478A21477DB90F7A72802A50 * __this, const RuntimeMethod* method);
// System.String UnityEngine.SystemInfo::get_deviceUniqueIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_deviceUniqueIdentifier_m12CA3C3D8C75E44FBFA73E2E34D9E743AF732B1E (const RuntimeMethod* method);
// System.String Prime31.EtceteraManager::get_deviceToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EtceteraManager_get_deviceToken_m5EE3B8556937441B6E1558E5AE308F5344B08B24_inline (const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m8846EB11F0A221BDE237DE041D17764B36065404 (String_t* ___separator0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.WWW::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWW__ctor_mE77AD6C372CC76F48A893C5E2F91A81193A9F8C5 (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * __this, String_t* ___url0, const RuntimeMethod* method);
// System.String UnityEngine.WWW::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWW_get_error_mB278F5EC90EF99FEF70D80112940CFB49E79C9BC (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * __this, const RuntimeMethod* method);
// System.Void Prime31.EtceteraManager/<registerDeviceWithPushIO>d__85::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CregisterDeviceWithPushIOU3Ed__85_System_IDisposable_Dispose_m15641CFF73903075DD498A0A613DA8F6B8EC669B (U3CregisterDeviceWithPushIOU3Ed__85_t6719999B1823EC1E478A21477DB90F7A72802A50 * __this, const RuntimeMethod* method);
// System.Void Prime31.EtceteraManager/<textureFromFileAtPath>d__80::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CtextureFromFileAtPathU3Ed__80_U3CU3Em__Finally1_m8F82604B39CA6EAB3D4683B4659EB4D7D008610B (U3CtextureFromFileAtPathU3Ed__80_t5898EA95F2F8A5FC43FC1C32A72432B5A42F4B5E * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.WWW::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * WWW_get_texture_mC23FF88883698F3E6F7BED2733A2DB3B18F788E4 (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * __this, const RuntimeMethod* method);
// System.Void Prime31.EtceteraManager/<textureFromFileAtPath>d__80::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CtextureFromFileAtPathU3Ed__80_System_IDisposable_Dispose_m8F122B083C6CF7F1387A2CF8D67EB76B623C0C77 (U3CtextureFromFileAtPathU3Ed__80_t5898EA95F2F8A5FC43FC1C32A72432B5A42F4B5E * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityStandardAssets.Effects.ParticleSystemMultiplier>()
inline ParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646 * Component_GetComponent_TisParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646_m552D01340683FACF6E28951C78FAFB573B5152A5 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Random::get_insideUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Random_get_insideUnitSphere_m43E5AE1F6A6CFA892BAE6E3ED71BEBFCE308CE90 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Random::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Random_get_rotation_m82FE89E3F983E0212C5D67ECFB8F2B179F1818E5 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.Transform>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* Physics_OverlapSphere_mE4A0577DF7C0681DE7FFC4F2A2C1BFB8D402CA0C (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___radius1, const RuntimeMethod* method);
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Collider::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_Raycast_m41CA5C3C07B92F5325CB81890BE3A611C3C70784 (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674 (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.Effects.ExplosionFireAndDebris::AddFire(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplosionFireAndDebris_AddFire_mEAA60ADA0DC8131CF46299E1777316B9A1AA4C47 (ExplosionFireAndDebris_tF9445209A9E843303ED79A22E876FE0DB75A5811 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Random::get_onUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Random_get_onUnitSphere_m909066B4EAF5EE0A05D3C1DCBDADC55A2D6A4EED (const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mA64F8C30681E3A6A8F2B7EDE592FE7BBC0D354F4 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// UnityEngine.ContactPoint[] UnityEngine.Collision::get_contacts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* Collision_get_contacts_m8C3D39F3332DD2AC623A9FB5F2127CE2754AF54B (Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Collision::get_relativeVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Collision_get_relativeVelocity_m0B0F8FA1AFAF7AB3B76083932D63A3FC1FA22442 (Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.ContactPoint::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ContactPoint_get_normal_m0561937E45F5356C7BB90D861422BD76B36D037A (ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Project(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Project_m57D54B16F36E620C294F4B209CD4C8E46A58D1B6 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___onNormal1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.ContactPoint::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ContactPoint_get_point_mEA976D5E3BC57FAB78F68BE0AA17A97293AEA5BC (ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Component::SendMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_SendMessage_m3B002D579E5933EEFCA4024A1845CACB4FBBC208 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, String_t* ___methodName0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.Utility.ObjectResetter::DelayedReset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectResetter_DelayedReset_mB3096EA6641BDDC0F8C19A151664986BA50EC048 (ObjectResetter_t6E96E79B7F57F740C3C7C6C6FEA9DEE271C994A1 * __this, float ___delay0, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_mA9BA910800B2E33B572929CDA9A12CE596353920 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, float ___time0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_fieldOfView_m138FE103CAC4B803F39E4CF579609A5C3FEB5E49 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForFixedUpdate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForFixedUpdate__ctor_mB566493FB99A315BEF348791DE943A89E4B71F9C (WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Transform>()
inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* Component_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mF2B4E2828789B863B83BCBC705EDFAF6F3DCE21C (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Transform>::Contains(!0)
inline bool List_1_Contains_m37E02ADF41F0AFB1B9BF6BE8E4BC09D48405EFAD (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_angularVelocity_m3A40B7F195E9E217AE29A0964D7E7540E2E23080 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.ParticleSystem>()
inline ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* Component_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m75CC9D1656BD67C760E6D5EA89403C89B728E8F6 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared)(__this, method);
}
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  ParticleSystem_get_main_m8F17DCC63679B15CE548BE83332FDB6635AE74A0 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/MainModule::get_startLifetime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  MainModule_get_startLifetime_m5E45F78E690E61E6FC758FA927E0743FFC3262FA (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * __this, const RuntimeMethod* method);
// System.Single UnityEngine.ParticleSystem/MinMaxCurve::get_constant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MinMaxCurve_get_constant_mBC0C29DF6F1C6C999931E28BC1F8DD26BD3BB624 (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.ParticleSystem/EmissionModule UnityEngine.ParticleSystem::get_emission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D  ParticleSystem_get_emission_m0BAA1EDF775A8712DA7D62BF3C42A2B1A6C96CA1 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmissionModule_set_enabled_mD9FD50C9F5EECD04B22D03E5C00C7DD64D2AC1F1 (EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Component::BroadcastMessage(System.String,UnityEngine.SendMessageOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_BroadcastMessage_m96C3AD7C97CC435E02425F91EE4521AF83931001 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, String_t* ___methodName0, int32_t ___options1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetSceneAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetSceneAt_m46AF96028C6A3A09198ABB313E4206D93A8D1F3F (int32_t ___index0, const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.Water.WaterBase::UpdateShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterBase_UpdateShader_mAACAE2E649B6BA5D1C76CB3420DA70C12F475CC1 (WaterBase_t0CEB2ECA42DC5F96547CC4DC9778ACC4E2B44836 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral867D47DB5A791E2DC5656A715F62E8E6A13FEF38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3E776B0A49C1C913D60A78C71AEA3EF1070C228);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (waterQuality > WaterQuality.Medium)
		int32_t L_0 = __this->get_waterQuality_5();
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0020;
		}
	}
	{
		// sharedMaterial.shader.maximumLOD = 501;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = __this->get_sharedMaterial_4();
		NullCheck(L_1);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_2;
		L_2 = Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Shader_set_maximumLOD_m0E42E3AC1D63AEBC9CE42A07AFC729F424365468(L_2, ((int32_t)501), /*hidden argument*/NULL);
		// }
		goto IL_0055;
	}

IL_0020:
	{
		// else if (waterQuality > WaterQuality.Low)
		int32_t L_3 = __this->get_waterQuality_5();
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		// sharedMaterial.shader.maximumLOD = 301;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = __this->get_sharedMaterial_4();
		NullCheck(L_4);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_5;
		L_5 = Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Shader_set_maximumLOD_m0E42E3AC1D63AEBC9CE42A07AFC729F424365468(L_5, ((int32_t)301), /*hidden argument*/NULL);
		// }
		goto IL_0055;
	}

IL_0040:
	{
		// sharedMaterial.shader.maximumLOD = 201;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_6 = __this->get_sharedMaterial_4();
		NullCheck(L_6);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_7;
		L_7 = Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Shader_set_maximumLOD_m0E42E3AC1D63AEBC9CE42A07AFC729F424365468(L_7, ((int32_t)201), /*hidden argument*/NULL);
	}

IL_0055:
	{
		// if (!SystemInfo.SupportsRenderTextureFormat(RenderTextureFormat.Depth))
		bool L_8;
		L_8 = SystemInfo_SupportsRenderTextureFormat_m243F66021A643C711FEDEA6B6D002B49ECEEFE1B(1, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0064;
		}
	}
	{
		// edgeBlend = false;
		__this->set_edgeBlend_6((bool)0);
	}

IL_0064:
	{
		// if (edgeBlend)
		bool L_9 = __this->get_edgeBlend_6();
		if (!L_9)
		{
			goto IL_009f;
		}
	}
	{
		// Shader.EnableKeyword("WATER_EDGEBLEND_ON");
		Shader_EnableKeyword_m9AC58243D7FBD69DD73D13B73085E0B24E4ECFCE(_stringLiteralA3E776B0A49C1C913D60A78C71AEA3EF1070C228, /*hidden argument*/NULL);
		// Shader.DisableKeyword("WATER_EDGEBLEND_OFF");
		Shader_DisableKeyword_mA6360809F3D85D7D0CAE3EE3C9A85987EC60DBCF(_stringLiteral867D47DB5A791E2DC5656A715F62E8E6A13FEF38, /*hidden argument*/NULL);
		// if (Camera.main)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_10;
		L_10 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00b3;
		}
	}
	{
		// Camera.main.depthTextureMode |= DepthTextureMode.Depth;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_12;
		L_12 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_13 = L_12;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = Camera_get_depthTextureMode_mA4B03C6B552FB03DF8A8C20DC9F4EB8FD978A7DD(L_13, /*hidden argument*/NULL);
		NullCheck(L_13);
		Camera_set_depthTextureMode_m2D4631800947438BE9A7697778E2CB0E38083CF1(L_13, ((int32_t)((int32_t)L_14|(int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}

IL_009f:
	{
		// Shader.EnableKeyword("WATER_EDGEBLEND_OFF");
		Shader_EnableKeyword_m9AC58243D7FBD69DD73D13B73085E0B24E4ECFCE(_stringLiteral867D47DB5A791E2DC5656A715F62E8E6A13FEF38, /*hidden argument*/NULL);
		// Shader.DisableKeyword("WATER_EDGEBLEND_ON");
		Shader_DisableKeyword_mA6360809F3D85D7D0CAE3EE3C9A85987EC60DBCF(_stringLiteralA3E776B0A49C1C913D60A78C71AEA3EF1070C228, /*hidden argument*/NULL);
	}

IL_00b3:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Water.WaterBase::WaterTileBeingRendered(UnityEngine.Transform,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterBase_WaterTileBeingRendered_m3A915B716DE6853A93A15EC4FB97B8BC7B9E46C6 (WaterBase_t0CEB2ECA42DC5F96547CC4DC9778ACC4E2B44836 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___tr0, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___currentCam1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentCam && edgeBlend)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = ___currentCam1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		bool L_2 = __this->get_edgeBlend_6();
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// currentCam.depthTextureMode |= DepthTextureMode.Depth;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3 = ___currentCam1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4 = L_3;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Camera_get_depthTextureMode_mA4B03C6B552FB03DF8A8C20DC9F4EB8FD978A7DD(L_4, /*hidden argument*/NULL);
		NullCheck(L_4);
		Camera_set_depthTextureMode_m2D4631800947438BE9A7697778E2CB0E38083CF1(L_4, ((int32_t)((int32_t)L_5|(int32_t)1)), /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Water.WaterBase::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterBase_Update_m2FB0CB32DC1388E3115B942F2B05427BD173AD6C (WaterBase_t0CEB2ECA42DC5F96547CC4DC9778ACC4E2B44836 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (sharedMaterial)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_sharedMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// UpdateShader();
		WaterBase_UpdateShader_mAACAE2E649B6BA5D1C76CB3420DA70C12F475CC1(__this, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Water.WaterBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterBase__ctor_m442C02EB0BEA3B97F33118DE72D1E340A42C4331 (WaterBase_t0CEB2ECA42DC5F96547CC4DC9778ACC4E2B44836 * __this, const RuntimeMethod* method)
{
	{
		// public WaterQuality waterQuality = WaterQuality.High;
		__this->set_waterQuality_5(2);
		// public bool edgeBlend = true;
		__this->set_edgeBlend_6((bool)1);
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
// System.Void UnityStandardAssets.Water.WaterBasic::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterBasic_Update_m6A9C6A186620E89D81E87E92A51FB248C71F02E8 (WaterBasic_t9135E062059CDB484D25131E721BBD901844CB79 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09648194F4DAEE1925FA3A2FFCDA65FB619B10EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31003880CBAF84EF30B5E85A7DF016C5DE3EC47B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78F66AE37BE6E59ACD48A247E54B845C440C126B);
		s_Il2CppMethodInitialized = true;
	}
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * V_0 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * V_1 = NULL;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// Renderer r = GetComponent<Renderer>();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_0;
		L_0 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		V_0 = L_0;
		// if (!r)
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
		// Material mat = r.sharedMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_3 = V_0;
		NullCheck(L_3);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4;
		L_4 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// if (!mat)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0020;
		}
	}
	{
		// return;
		return;
	}

IL_0020:
	{
		// Vector4 waveSpeed = mat.GetVector("WaveSpeed");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = V_1;
		NullCheck(L_7);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_8;
		L_8 = Material_GetVector_m0E41ED876B69FCFC4B9EA715D0286EE714CD201F(L_7, _stringLiteral09648194F4DAEE1925FA3A2FFCDA65FB619B10EC, /*hidden argument*/NULL);
		V_2 = L_8;
		// float waveScale = mat.GetFloat("_WaveScale");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9 = V_1;
		NullCheck(L_9);
		float L_10;
		L_10 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_9, _stringLiteral31003880CBAF84EF30B5E85A7DF016C5DE3EC47B, /*hidden argument*/NULL);
		V_3 = L_10;
		// float t = Time.time / 20.0f;
		float L_11;
		L_11 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		V_4 = ((float)((float)L_11/(float)(20.0f)));
		// Vector4 offset4 = waveSpeed * (t * waveScale);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_12 = V_2;
		float L_13 = V_4;
		float L_14 = V_3;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_15;
		L_15 = Vector4_op_Multiply_m4B615DCAD6D77FE276AC56F17EA3ED0DCD942111_inline(L_12, ((float)il2cpp_codegen_multiply((float)L_13, (float)L_14)), /*hidden argument*/NULL);
		V_5 = L_15;
		// Vector4 offsetClamped = new Vector4(Mathf.Repeat(offset4.x, 1.0f), Mathf.Repeat(offset4.y, 1.0f),
		//     Mathf.Repeat(offset4.z, 1.0f), Mathf.Repeat(offset4.w, 1.0f));
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_16 = V_5;
		float L_17 = L_16.get_x_1();
		float L_18;
		L_18 = Mathf_Repeat_mBAB712BA039DF58DBB1B31B669E502C54F3F13CE(L_17, (1.0f), /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_19 = V_5;
		float L_20 = L_19.get_y_2();
		float L_21;
		L_21 = Mathf_Repeat_mBAB712BA039DF58DBB1B31B669E502C54F3F13CE(L_20, (1.0f), /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_22 = V_5;
		float L_23 = L_22.get_z_3();
		float L_24;
		L_24 = Mathf_Repeat_mBAB712BA039DF58DBB1B31B669E502C54F3F13CE(L_23, (1.0f), /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_25 = V_5;
		float L_26 = L_25.get_w_4();
		float L_27;
		L_27 = Mathf_Repeat_mBAB712BA039DF58DBB1B31B669E502C54F3F13CE(L_26, (1.0f), /*hidden argument*/NULL);
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&V_6), L_18, L_21, L_24, L_27, /*hidden argument*/NULL);
		// mat.SetVector("_WaveOffset", offsetClamped);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28 = V_1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_29 = V_6;
		NullCheck(L_28);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_28, _stringLiteral78F66AE37BE6E59ACD48A247E54B845C440C126B, L_29, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Water.WaterBasic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterBasic__ctor_mEAB2775043245CBAFD2F74CD2685E97547746A03 (WaterBasic_t9135E062059CDB484D25131E721BBD901844CB79 * __this, const RuntimeMethod* method)
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
// System.Void UnityStandardAssets.Effects.WaterHoseParticles::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterHoseParticles_Start_m607FA501760BADB5421E6882228427C8635FCA99 (WaterHoseParticles_t19C0A4D7559D7C285B5B0EDCCA89F9263DAA349B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ParticleSystem = GetComponent<ParticleSystem>();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_0;
		L_0 = Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3(__this, /*hidden argument*/Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3_RuntimeMethod_var);
		__this->set_m_ParticleSystem_7(L_0);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Effects.WaterHoseParticles::OnParticleCollision(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterHoseParticles_OnParticleCollision_m077F59C5B3C903778958C7255C3ADFAC4EBB9CFF (WaterHoseParticles_t19C0A4D7559D7C285B5B0EDCCA89F9263DAA349B * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mAA87A40BE77081A00704A6584F5C0113C6E636C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaterHoseParticles_t19C0A4D7559D7C285B5B0EDCCA89F9263DAA349B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral320E615ACBF6C20581547142E87C7F15192C284E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * V_2 = NULL;
	ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// int numCollisionEvents = m_ParticleSystem.GetCollisionEvents(other, m_CollisionEvents);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_0 = __this->get_m_ParticleSystem_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = ___other0;
		List_1_tC57F1BA46C89AA33253984801D30F8502BBBFE68 * L_2 = __this->get_m_CollisionEvents_6();
		int32_t L_3;
		L_3 = ParticlePhysicsExtensions_GetCollisionEvents_m19452DB7C4E2F1FF25544C136B903D03CCFD12BD(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// int i = 0;
		V_1 = 0;
		goto IL_0090;
	}

IL_0017:
	{
		// if (Time.time > lastSoundTime + 0.2f)
		float L_4;
		L_4 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_5 = ((WaterHoseParticles_t19C0A4D7559D7C285B5B0EDCCA89F9263DAA349B_StaticFields*)il2cpp_codegen_static_fields_for(WaterHoseParticles_t19C0A4D7559D7C285B5B0EDCCA89F9263DAA349B_il2cpp_TypeInfo_var))->get_lastSoundTime_4();
		if ((!(((float)L_4) > ((float)((float)il2cpp_codegen_add((float)L_5, (float)(0.200000003f)))))))
		{
			goto IL_0033;
		}
	}
	{
		// lastSoundTime = Time.time;
		float L_6;
		L_6 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		((WaterHoseParticles_t19C0A4D7559D7C285B5B0EDCCA89F9263DAA349B_StaticFields*)il2cpp_codegen_static_fields_for(WaterHoseParticles_t19C0A4D7559D7C285B5B0EDCCA89F9263DAA349B_il2cpp_TypeInfo_var))->set_lastSoundTime_4(L_6);
	}

IL_0033:
	{
		// var col = m_CollisionEvents[i].colliderComponent;
		List_1_tC57F1BA46C89AA33253984801D30F8502BBBFE68 * L_7 = __this->get_m_CollisionEvents_6();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD  L_9;
		L_9 = List_1_get_Item_mAA87A40BE77081A00704A6584F5C0113C6E636C2_inline(L_7, L_8, /*hidden argument*/List_1_get_Item_mAA87A40BE77081A00704A6584F5C0113C6E636C2_RuntimeMethod_var);
		V_3 = L_9;
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_10;
		L_10 = ParticleCollisionEvent_get_colliderComponent_m9C6F5BA0C22117C6A04E7E050F653B5CBE320F9A((ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD *)(&V_3), /*hidden argument*/NULL);
		// var attachedRigidbody = col.GetComponent<Rigidbody>();
		NullCheck(L_10);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_11;
		L_11 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(L_10, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		V_2 = L_11;
		// if (attachedRigidbody != null)
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_12 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0080;
		}
	}
	{
		// Vector3 vel = m_CollisionEvents[i].velocity;
		List_1_tC57F1BA46C89AA33253984801D30F8502BBBFE68 * L_14 = __this->get_m_CollisionEvents_6();
		int32_t L_15 = V_1;
		NullCheck(L_14);
		ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD  L_16;
		L_16 = List_1_get_Item_mAA87A40BE77081A00704A6584F5C0113C6E636C2_inline(L_14, L_15, /*hidden argument*/List_1_get_Item_mAA87A40BE77081A00704A6584F5C0113C6E636C2_RuntimeMethod_var);
		V_3 = L_16;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = ParticleCollisionEvent_get_velocity_m1EE32F62E2E4FD9BEF5C7A080D386E5133A5505D((ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD *)(&V_3), /*hidden argument*/NULL);
		V_4 = L_17;
		// attachedRigidbody.AddForce(vel*force, ForceMode.Impulse);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_18 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_4;
		float L_20 = __this->get_force_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_19, L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		Rigidbody_AddForce_m78B9D94F505E19F3C63461362AD6DE7EA0836700(L_18, L_21, 1, /*hidden argument*/NULL);
	}

IL_0080:
	{
		// other.BroadcastMessage("Extinguish", SendMessageOptions.DontRequireReceiver);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = ___other0;
		NullCheck(L_22);
		GameObject_BroadcastMessage_mCEDA3C2B8C9BC1664AE2564F2B1858FE6D7A7521(L_22, _stringLiteral320E615ACBF6C20581547142E87C7F15192C284E, 1, /*hidden argument*/NULL);
		// i++;
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0090:
	{
		// while (i < numCollisionEvents)
		int32_t L_24 = V_1;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0017;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Effects.WaterHoseParticles::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterHoseParticles__ctor_m37E872633764DCC28D12346104AF9E5D9EF63410 (WaterHoseParticles_t19C0A4D7559D7C285B5B0EDCCA89F9263DAA349B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m43B2344A6F7999E7DC4286052DCD5E0E071A4882_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC57F1BA46C89AA33253984801D30F8502BBBFE68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float force = 1;
		__this->set_force_5((1.0f));
		// private List<ParticleCollisionEvent> m_CollisionEvents = new List<ParticleCollisionEvent>();
		List_1_tC57F1BA46C89AA33253984801D30F8502BBBFE68 * L_0 = (List_1_tC57F1BA46C89AA33253984801D30F8502BBBFE68 *)il2cpp_codegen_object_new(List_1_tC57F1BA46C89AA33253984801D30F8502BBBFE68_il2cpp_TypeInfo_var);
		List_1__ctor_m43B2344A6F7999E7DC4286052DCD5E0E071A4882(L_0, /*hidden argument*/List_1__ctor_m43B2344A6F7999E7DC4286052DCD5E0E071A4882_RuntimeMethod_var);
		__this->set_m_CollisionEvents_6(L_0);
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
// System.Void UnityStandardAssets.Water.WaterTile::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterTile_Start_mFAE04959707CA62BA2E2313D74132E3AAB87C12F (WaterTile_t797672B40749CAFC551CFAD686CE4D6DB9DD9C4B * __this, const RuntimeMethod* method)
{
	{
		// AcquireComponents();
		WaterTile_AcquireComponents_m5C4787156242CE4DD7623423D3D8DE9B77170D61(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Water.WaterTile::AcquireComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterTile_AcquireComponents_m5C4787156242CE4DD7623423D3D8DE9B77170D61 (WaterTile_t797672B40749CAFC551CFAD686CE4D6DB9DD9C4B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlanarReflection_tB040855A4E8D0610D7C298C61F6120C8E9C565D1_m21153C67504633EDECE951547BBED7964831C97F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisWaterBase_t0CEB2ECA42DC5F96547CC4DC9778ACC4E2B44836_m264AC8962716B70C78F68074255523A92108D6D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!reflection)
		PlanarReflection_tB040855A4E8D0610D7C298C61F6120C8E9C565D1 * L_0 = __this->get_reflection_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0048;
		}
	}
	{
		// if (transform.parent)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		// reflection = transform.parent.GetComponent<PlanarReflection>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		PlanarReflection_tB040855A4E8D0610D7C298C61F6120C8E9C565D1 * L_7;
		L_7 = Component_GetComponent_TisPlanarReflection_tB040855A4E8D0610D7C298C61F6120C8E9C565D1_m21153C67504633EDECE951547BBED7964831C97F(L_6, /*hidden argument*/Component_GetComponent_TisPlanarReflection_tB040855A4E8D0610D7C298C61F6120C8E9C565D1_m21153C67504633EDECE951547BBED7964831C97F_RuntimeMethod_var);
		__this->set_reflection_4(L_7);
		// }
		goto IL_0048;
	}

IL_0037:
	{
		// reflection = transform.GetComponent<PlanarReflection>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		PlanarReflection_tB040855A4E8D0610D7C298C61F6120C8E9C565D1 * L_9;
		L_9 = Component_GetComponent_TisPlanarReflection_tB040855A4E8D0610D7C298C61F6120C8E9C565D1_m21153C67504633EDECE951547BBED7964831C97F(L_8, /*hidden argument*/Component_GetComponent_TisPlanarReflection_tB040855A4E8D0610D7C298C61F6120C8E9C565D1_m21153C67504633EDECE951547BBED7964831C97F_RuntimeMethod_var);
		__this->set_reflection_4(L_9);
	}

IL_0048:
	{
		// if (!waterBase)
		WaterBase_t0CEB2ECA42DC5F96547CC4DC9778ACC4E2B44836 * L_10 = __this->get_waterBase_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_008f;
		}
	}
	{
		// if (transform.parent)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_007e;
		}
	}
	{
		// waterBase = transform.parent.GetComponent<WaterBase>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		WaterBase_t0CEB2ECA42DC5F96547CC4DC9778ACC4E2B44836 * L_17;
		L_17 = Component_GetComponent_TisWaterBase_t0CEB2ECA42DC5F96547CC4DC9778ACC4E2B44836_m264AC8962716B70C78F68074255523A92108D6D7(L_16, /*hidden argument*/Component_GetComponent_TisWaterBase_t0CEB2ECA42DC5F96547CC4DC9778ACC4E2B44836_m264AC8962716B70C78F68074255523A92108D6D7_RuntimeMethod_var);
		__this->set_waterBase_5(L_17);
		// }
		return;
	}

IL_007e:
	{
		// waterBase = transform.GetComponent<WaterBase>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		WaterBase_t0CEB2ECA42DC5F96547CC4DC9778ACC4E2B44836 * L_19;
		L_19 = Component_GetComponent_TisWaterBase_t0CEB2ECA42DC5F96547CC4DC9778ACC4E2B44836_m264AC8962716B70C78F68074255523A92108D6D7(L_18, /*hidden argument*/Component_GetComponent_TisWaterBase_t0CEB2ECA42DC5F96547CC4DC9778ACC4E2B44836_m264AC8962716B70C78F68074255523A92108D6D7_RuntimeMethod_var);
		__this->set_waterBase_5(L_19);
	}

IL_008f:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Water.WaterTile::OnWillRenderObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterTile_OnWillRenderObject_m22E7425EC25863D0478FAE6324B25EA905D77EB9 (WaterTile_t797672B40749CAFC551CFAD686CE4D6DB9DD9C4B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (reflection)
		PlanarReflection_tB040855A4E8D0610D7C298C61F6120C8E9C565D1 * L_0 = __this->get_reflection_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// reflection.WaterTileBeingRendered(transform, Camera.current);
		PlanarReflection_tB040855A4E8D0610D7C298C61F6120C8E9C565D1 * L_2 = __this->get_reflection_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4;
		L_4 = Camera_get_current_m4E5A6D19F422F8DD2CFF4EE80C65B033F24C45D6(/*hidden argument*/NULL);
		NullCheck(L_2);
		PlanarReflection_WaterTileBeingRendered_m2728D4EE2CF9D567BA45D86C1D96D8795783D7E9(L_2, L_3, L_4, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// if (waterBase)
		WaterBase_t0CEB2ECA42DC5F96547CC4DC9778ACC4E2B44836 * L_5 = __this->get_waterBase_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		// waterBase.WaterTileBeingRendered(transform, Camera.current);
		WaterBase_t0CEB2ECA42DC5F96547CC4DC9778ACC4E2B44836 * L_7 = __this->get_waterBase_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_9;
		L_9 = Camera_get_current_m4E5A6D19F422F8DD2CFF4EE80C65B033F24C45D6(/*hidden argument*/NULL);
		NullCheck(L_7);
		WaterBase_WaterTileBeingRendered_m3A915B716DE6853A93A15EC4FB97B8BC7B9E46C6(L_7, L_8, L_9, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Water.WaterTile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterTile__ctor_m2F849F04812A826E794948F72B3C867370B28583 (WaterTile_t797672B40749CAFC551CFAD686CE4D6DB9DD9C4B * __this, const RuntimeMethod* method)
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
// System.Single UnityStandardAssets.Utility.WaypointCircuit::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WaypointCircuit_get_Length_m0E945F73C31A88101B98561A4D363B4902584AD1 (WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * __this, const RuntimeMethod* method)
{
	{
		// public float Length { get; private set; }
		float L_0 = __this->get_U3CLengthU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointCircuit::set_Length(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaypointCircuit_set_Length_mE69C49D19729D91DE7D632E9A24D7E885D6A4732 (WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Length { get; private set; }
		float L_0 = ___value0;
		__this->set_U3CLengthU3Ek__BackingField_10(L_0);
		return;
	}
}
// UnityEngine.Transform[] UnityStandardAssets.Utility.WaypointCircuit::get_Waypoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* WaypointCircuit_get_Waypoints_m711A9FD5EC14BAA92CC498C65244ED4314EB0FAD (WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * __this, const RuntimeMethod* method)
{
	{
		// get { return waypointList.items; }
		WaypointList_t7CA06137643274484AEDCDAA2B090C56E60FA730 * L_0 = __this->get_waypointList_4();
		NullCheck(L_0);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_1 = L_0->get_items_1();
		return L_1;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointCircuit::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaypointCircuit_Awake_m10DE7B1ACB12FF30A39105C885608C941CC44686 (WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * __this, const RuntimeMethod* method)
{
	{
		// if (Waypoints.Length > 1)
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_0;
		L_0 = WaypointCircuit_get_Waypoints_m711A9FD5EC14BAA92CC498C65244ED4314EB0FAD(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		// CachePositionsAndDistances();
		WaypointCircuit_CachePositionsAndDistances_m7233B1D0601B59E0C5F45DB8F60B2EB08F0C60DE(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		// numPoints = Waypoints.Length;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_1;
		L_1 = WaypointCircuit_get_Waypoints_m711A9FD5EC14BAA92CC498C65244ED4314EB0FAD(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		__this->set_numPoints_6(((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))));
		// }
		return;
	}
}
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointCircuit::GetRoutePoint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  WaypointCircuit_GetRoutePoint_mC32D95791D49DC4117EBFFA78A8A3EFE6E5BC423 (WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * __this, float ___dist0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 p1 = GetRoutePosition(dist);
		float L_0 = ___dist0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = WaypointCircuit_GetRoutePosition_m7DED18FB4A18FA960C7841B19F0A8787A2156925(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// Vector3 p2 = GetRoutePosition(dist + 0.1f);
		float L_2 = ___dist0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = WaypointCircuit_GetRoutePosition_m7DED18FB4A18FA960C7841B19F0A8787A2156925(__this, ((float)il2cpp_codegen_add((float)L_2, (float)(0.100000001f))), /*hidden argument*/NULL);
		// Vector3 delta = p2 - p1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// return new RoutePoint(p1, delta.normalized);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  L_8;
		memset((&L_8), 0, sizeof(L_8));
		RoutePoint__ctor_m524AFFB5CE5A8E26DBD334EF5150763602E7BF16((&L_8), L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::GetRoutePosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  WaypointCircuit_GetRoutePosition_m7DED18FB4A18FA960C7841B19F0A8787A2156925 (WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * __this, float ___dist0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int point = 0;
		V_0 = 0;
		// if (Length == 0)
		float L_0;
		L_0 = WaypointCircuit_get_Length_m0E945F73C31A88101B98561A4D363B4902584AD1_inline(__this, /*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0026;
		}
	}
	{
		// Length = distances[distances.Length - 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = __this->get_distances_8();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = __this->get_distances_8();
		NullCheck(L_2);
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), (int32_t)1));
		float L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		WaypointCircuit_set_Length_mE69C49D19729D91DE7D632E9A24D7E885D6A4732_inline(__this, L_4, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// dist = Mathf.Repeat(dist, Length);
		float L_5 = ___dist0;
		float L_6;
		L_6 = WaypointCircuit_get_Length_m0E945F73C31A88101B98561A4D363B4902584AD1_inline(__this, /*hidden argument*/NULL);
		float L_7;
		L_7 = Mathf_Repeat_mBAB712BA039DF58DBB1B31B669E502C54F3F13CE(L_5, L_6, /*hidden argument*/NULL);
		___dist0 = L_7;
		goto IL_003a;
	}

IL_0036:
	{
		// ++point;
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_003a:
	{
		// while (distances[point] < dist)
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = __this->get_distances_8();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		float L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		float L_13 = ___dist0;
		if ((((float)L_12) < ((float)L_13)))
		{
			goto IL_0036;
		}
	}
	{
		// p1n = ((point - 1) + numPoints)%numPoints;
		int32_t L_14 = V_0;
		int32_t L_15 = __this->get_numPoints_6();
		int32_t L_16 = __this->get_numPoints_6();
		__this->set_p1n_12(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1)), (int32_t)L_15))%(int32_t)L_16)));
		// p2n = point;
		int32_t L_17 = V_0;
		__this->set_p2n_13(L_17);
		// i = Mathf.InverseLerp(distances[p1n], distances[p2n], dist);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_18 = __this->get_distances_8();
		int32_t L_19 = __this->get_p1n_12();
		NullCheck(L_18);
		int32_t L_20 = L_19;
		float L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_22 = __this->get_distances_8();
		int32_t L_23 = __this->get_p2n_13();
		NullCheck(L_22);
		int32_t L_24 = L_23;
		float L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		float L_26 = ___dist0;
		float L_27;
		L_27 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B(L_21, L_25, L_26, /*hidden argument*/NULL);
		__this->set_i_15(L_27);
		// if (smoothRoute)
		bool L_28 = __this->get_smoothRoute_5();
		if (!L_28)
		{
			goto IL_014f;
		}
	}
	{
		// p0n = ((point - 2) + numPoints)%numPoints;
		int32_t L_29 = V_0;
		int32_t L_30 = __this->get_numPoints_6();
		int32_t L_31 = __this->get_numPoints_6();
		__this->set_p0n_11(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)2)), (int32_t)L_30))%(int32_t)L_31)));
		// p3n = (point + 1)%numPoints;
		int32_t L_32 = V_0;
		int32_t L_33 = __this->get_numPoints_6();
		__this->set_p3n_14(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1))%(int32_t)L_33)));
		// p2n = p2n%numPoints;
		int32_t L_34 = __this->get_p2n_13();
		int32_t L_35 = __this->get_numPoints_6();
		__this->set_p2n_13(((int32_t)((int32_t)L_34%(int32_t)L_35)));
		// P0 = points[p0n];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_36 = __this->get_points_7();
		int32_t L_37 = __this->get_p0n_11();
		NullCheck(L_36);
		int32_t L_38 = L_37;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		__this->set_P0_16(L_39);
		// P1 = points[p1n];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_40 = __this->get_points_7();
		int32_t L_41 = __this->get_p1n_12();
		NullCheck(L_40);
		int32_t L_42 = L_41;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		__this->set_P1_17(L_43);
		// P2 = points[p2n];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_44 = __this->get_points_7();
		int32_t L_45 = __this->get_p2n_13();
		NullCheck(L_44);
		int32_t L_46 = L_45;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		__this->set_P2_18(L_47);
		// P3 = points[p3n];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_48 = __this->get_points_7();
		int32_t L_49 = __this->get_p3n_14();
		NullCheck(L_48);
		int32_t L_50 = L_49;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		__this->set_P3_19(L_51);
		// return CatmullRom(P0, P1, P2, P3, i);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52 = __this->get_P0_16();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53 = __this->get_P1_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54 = __this->get_P2_18();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55 = __this->get_P3_19();
		float L_56 = __this->get_i_15();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = WaypointCircuit_CatmullRom_m5789B447E55DDCF0DEE59BE26E893C22C77A6D80(__this, L_52, L_53, L_54, L_55, L_56, /*hidden argument*/NULL);
		return L_57;
	}

IL_014f:
	{
		// p1n = ((point - 1) + numPoints)%numPoints;
		int32_t L_58 = V_0;
		int32_t L_59 = __this->get_numPoints_6();
		int32_t L_60 = __this->get_numPoints_6();
		__this->set_p1n_12(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_58, (int32_t)1)), (int32_t)L_59))%(int32_t)L_60)));
		// p2n = point;
		int32_t L_61 = V_0;
		__this->set_p2n_13(L_61);
		// return Vector3.Lerp(points[p1n], points[p2n], i);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_62 = __this->get_points_7();
		int32_t L_63 = __this->get_p1n_12();
		NullCheck(L_62);
		int32_t L_64 = L_63;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_66 = __this->get_points_7();
		int32_t L_67 = __this->get_p2n_13();
		NullCheck(L_66);
		int32_t L_68 = L_67;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		float L_70 = __this->get_i_15();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_71;
		L_71 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_65, L_69, L_70, /*hidden argument*/NULL);
		return L_71;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::CatmullRom(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  WaypointCircuit_CatmullRom_m5789B447E55DDCF0DEE59BE26E893C22C77A6D80 (WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p00, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p11, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p22, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p33, float ___i4, const RuntimeMethod* method)
{
	{
		// return 0.5f*
		//        ((2*p1) + (-p0 + p2)*i + (2*p0 - 5*p1 + 4*p2 - p3)*i*i +
		//         (-p0 + 3*p1 - 3*p2 + p3)*i*i*i);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___p11;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline((2.0f), L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___p00;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___p22;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_3, L_4, /*hidden argument*/NULL);
		float L_6 = ___i4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_5, L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_1, L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___p00;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline((2.0f), L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___p11;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline((5.0f), L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_10, L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = ___p22;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline((4.0f), L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_13, L_15, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = ___p33;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_16, L_17, /*hidden argument*/NULL);
		float L_19 = ___i4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_18, L_19, /*hidden argument*/NULL);
		float L_21 = ___i4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_20, L_21, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_8, L_22, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = ___p00;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_24, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = ___p11;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline((3.0f), L_26, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_25, L_27, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = ___p22;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline((3.0f), L_29, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_28, L_30, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = ___p33;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_31, L_32, /*hidden argument*/NULL);
		float L_34 = ___i4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_33, L_34, /*hidden argument*/NULL);
		float L_36 = ___i4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_35, L_36, /*hidden argument*/NULL);
		float L_38 = ___i4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_37, L_38, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_23, L_39, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline((0.5f), L_40, /*hidden argument*/NULL);
		return L_41;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointCircuit::CachePositionsAndDistances()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaypointCircuit_CachePositionsAndDistances_m7233B1D0601B59E0C5F45DB8F60B2EB08F0C60DE (WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_2 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_3 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// points = new Vector3[Waypoints.Length + 1];
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_0;
		L_0 = WaypointCircuit_get_Waypoints_m711A9FD5EC14BAA92CC498C65244ED4314EB0FAD(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_1 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), (int32_t)1)));
		__this->set_points_7(L_1);
		// distances = new float[Waypoints.Length + 1];
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_2;
		L_2 = WaypointCircuit_get_Waypoints_m711A9FD5EC14BAA92CC498C65244ED4314EB0FAD(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), (int32_t)1)));
		__this->set_distances_8(L_3);
		// float accumulateDistance = 0;
		V_0 = (0.0f);
		// for (int i = 0; i < points.Length; ++i)
		V_1 = 0;
		goto IL_00c3;
	}

IL_0037:
	{
		// var t1 = Waypoints[(i)%Waypoints.Length];
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_4;
		L_4 = WaypointCircuit_get_Waypoints_m711A9FD5EC14BAA92CC498C65244ED4314EB0FAD(__this, /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_6;
		L_6 = WaypointCircuit_get_Waypoints_m711A9FD5EC14BAA92CC498C65244ED4314EB0FAD(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		NullCheck(L_4);
		int32_t L_7 = ((int32_t)((int32_t)L_5%(int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		// var t2 = Waypoints[(i + 1)%Waypoints.Length];
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_9;
		L_9 = WaypointCircuit_get_Waypoints_m711A9FD5EC14BAA92CC498C65244ED4314EB0FAD(__this, /*hidden argument*/NULL);
		int32_t L_10 = V_1;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_11;
		L_11 = WaypointCircuit_get_Waypoints_m711A9FD5EC14BAA92CC498C65244ED4314EB0FAD(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		NullCheck(L_9);
		int32_t L_12 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1))%(int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		// if (t1 != null && t2 != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_14, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00bf;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_16, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00bf;
		}
	}
	{
		// Vector3 p1 = t1.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = V_2;
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		V_4 = L_19;
		// Vector3 p2 = t2.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = V_3;
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		V_5 = L_21;
		// points[i] = Waypoints[i%Waypoints.Length].position;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_22 = __this->get_points_7();
		int32_t L_23 = V_1;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_24;
		L_24 = WaypointCircuit_get_Waypoints_m711A9FD5EC14BAA92CC498C65244ED4314EB0FAD(__this, /*hidden argument*/NULL);
		int32_t L_25 = V_1;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_26;
		L_26 = WaypointCircuit_get_Waypoints_m711A9FD5EC14BAA92CC498C65244ED4314EB0FAD(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		NullCheck(L_24);
		int32_t L_27 = ((int32_t)((int32_t)L_25%(int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_28);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_28, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_29);
		// distances[i] = accumulateDistance;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_30 = __this->get_distances_8();
		int32_t L_31 = V_1;
		float L_32 = V_0;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (float)L_32);
		// accumulateDistance += (p1 - p2).magnitude;
		float L_33 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_34, L_35, /*hidden argument*/NULL);
		V_6 = L_36;
		float L_37;
		L_37 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_6), /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_add((float)L_33, (float)L_37));
	}

IL_00bf:
	{
		// for (int i = 0; i < points.Length; ++i)
		int32_t L_38 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_00c3:
	{
		// for (int i = 0; i < points.Length; ++i)
		int32_t L_39 = V_1;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_40 = __this->get_points_7();
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0037;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointCircuit::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaypointCircuit_OnDrawGizmos_m4E07CF15D75B5CF82D22B280956CA0EACCFC9A97 (WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * __this, const RuntimeMethod* method)
{
	{
		// DrawGizmos(false);
		WaypointCircuit_DrawGizmos_m070442ABA629E9581A83C23A6A0EB9DE8A6C64ED(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointCircuit::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaypointCircuit_OnDrawGizmosSelected_m7B0F628B2F9CE9B56D801FC273AF9999176A2113 (WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * __this, const RuntimeMethod* method)
{
	{
		// DrawGizmos(true);
		WaypointCircuit_DrawGizmos_m070442ABA629E9581A83C23A6A0EB9DE8A6C64ED(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointCircuit::DrawGizmos(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaypointCircuit_DrawGizmos_m070442ABA629E9581A83C23A6A0EB9DE8A6C64ED (WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * __this, bool ___selected0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		// waypointList.circuit = this;
		WaypointList_t7CA06137643274484AEDCDAA2B090C56E60FA730 * L_0 = __this->get_waypointList_4();
		NullCheck(L_0);
		L_0->set_circuit_0(__this);
		// if (Waypoints.Length > 1)
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_1;
		L_1 = WaypointCircuit_get_Waypoints_m711A9FD5EC14BAA92CC498C65244ED4314EB0FAD(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_0107;
		}
	}
	{
		// numPoints = Waypoints.Length;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_2;
		L_2 = WaypointCircuit_get_Waypoints_m711A9FD5EC14BAA92CC498C65244ED4314EB0FAD(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		__this->set_numPoints_6(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))));
		// CachePositionsAndDistances();
		WaypointCircuit_CachePositionsAndDistances_m7233B1D0601B59E0C5F45DB8F60B2EB08F0C60DE(__this, /*hidden argument*/NULL);
		// Length = distances[distances.Length - 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = __this->get_distances_8();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = __this->get_distances_8();
		NullCheck(L_4);
		NullCheck(L_3);
		int32_t L_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), (int32_t)1));
		float L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		WaypointCircuit_set_Length_mE69C49D19729D91DE7D632E9A24D7E885D6A4732_inline(__this, L_6, /*hidden argument*/NULL);
		// Gizmos.color = selected ? Color.yellow : new Color(1, 1, 0, 0.5f);
		bool L_7 = ___selected0;
		if (L_7)
		{
			goto IL_0063;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_8), (1.0f), (1.0f), (0.0f), (0.5f), /*hidden argument*/NULL);
		G_B4_0 = L_8;
		goto IL_0068;
	}

IL_0063:
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9;
		L_9 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(/*hidden argument*/NULL);
		G_B4_0 = L_9;
	}

IL_0068:
	{
		Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(G_B4_0, /*hidden argument*/NULL);
		// Vector3 prev = Waypoints[0].position;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_10;
		L_10 = WaypointCircuit_get_Waypoints_m711A9FD5EC14BAA92CC498C65244ED4314EB0FAD(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11 = 0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		// if (smoothRoute)
		bool L_14 = __this->get_smoothRoute_5();
		if (!L_14)
		{
			goto IL_00cf;
		}
	}
	{
		// for (float dist = 0; dist < Length; dist += Length/editorVisualisationSubsteps)
		V_1 = (0.0f);
		goto IL_00b2;
	}

IL_008b:
	{
		// Vector3 next = GetRoutePosition(dist + 1);
		float L_15 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = WaypointCircuit_GetRoutePosition_m7DED18FB4A18FA960C7841B19F0A8787A2156925(__this, ((float)il2cpp_codegen_add((float)L_15, (float)(1.0f))), /*hidden argument*/NULL);
		V_2 = L_16;
		// Gizmos.DrawLine(prev, next);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_2;
		Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(L_17, L_18, /*hidden argument*/NULL);
		// prev = next;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_2;
		V_0 = L_19;
		// for (float dist = 0; dist < Length; dist += Length/editorVisualisationSubsteps)
		float L_20 = V_1;
		float L_21;
		L_21 = WaypointCircuit_get_Length_m0E945F73C31A88101B98561A4D363B4902584AD1_inline(__this, /*hidden argument*/NULL);
		float L_22 = __this->get_editorVisualisationSubsteps_9();
		V_1 = ((float)il2cpp_codegen_add((float)L_20, (float)((float)((float)L_21/(float)L_22))));
	}

IL_00b2:
	{
		// for (float dist = 0; dist < Length; dist += Length/editorVisualisationSubsteps)
		float L_23 = V_1;
		float L_24;
		L_24 = WaypointCircuit_get_Length_m0E945F73C31A88101B98561A4D363B4902584AD1_inline(__this, /*hidden argument*/NULL);
		if ((((float)L_23) < ((float)L_24)))
		{
			goto IL_008b;
		}
	}
	{
		// Gizmos.DrawLine(prev, Waypoints[0].position);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = V_0;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_26;
		L_26 = WaypointCircuit_get_Waypoints_m711A9FD5EC14BAA92CC498C65244ED4314EB0FAD(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		int32_t L_27 = 0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_28);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_28, /*hidden argument*/NULL);
		Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(L_25, L_29, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00cf:
	{
		// for (int n = 0; n < Waypoints.Length; ++n)
		V_3 = 0;
		goto IL_00fc;
	}

IL_00d3:
	{
		// Vector3 next = Waypoints[(n + 1)%Waypoints.Length].position;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_30;
		L_30 = WaypointCircuit_get_Waypoints_m711A9FD5EC14BAA92CC498C65244ED4314EB0FAD(__this, /*hidden argument*/NULL);
		int32_t L_31 = V_3;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_32;
		L_32 = WaypointCircuit_get_Waypoints_m711A9FD5EC14BAA92CC498C65244ED4314EB0FAD(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		NullCheck(L_30);
		int32_t L_33 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1))%(int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_34);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_34, /*hidden argument*/NULL);
		V_4 = L_35;
		// Gizmos.DrawLine(prev, next);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = V_4;
		Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(L_36, L_37, /*hidden argument*/NULL);
		// prev = next;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = V_4;
		V_0 = L_38;
		// for (int n = 0; n < Waypoints.Length; ++n)
		int32_t L_39 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00fc:
	{
		// for (int n = 0; n < Waypoints.Length; ++n)
		int32_t L_40 = V_3;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_41;
		L_41 = WaypointCircuit_get_Waypoints_m711A9FD5EC14BAA92CC498C65244ED4314EB0FAD(__this, /*hidden argument*/NULL);
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length))))))
		{
			goto IL_00d3;
		}
	}

IL_0107:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointCircuit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaypointCircuit__ctor_mB71436DD2B1E6B2D03CD123245D236E221D22375 (WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaypointList_t7CA06137643274484AEDCDAA2B090C56E60FA730_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WaypointList waypointList = new WaypointList();
		WaypointList_t7CA06137643274484AEDCDAA2B090C56E60FA730 * L_0 = (WaypointList_t7CA06137643274484AEDCDAA2B090C56E60FA730 *)il2cpp_codegen_object_new(WaypointList_t7CA06137643274484AEDCDAA2B090C56E60FA730_il2cpp_TypeInfo_var);
		WaypointList__ctor_mADAB4BE67815D17936E14849F012560B3DD612F5(L_0, /*hidden argument*/NULL);
		__this->set_waypointList_4(L_0);
		// [SerializeField] private bool smoothRoute = true;
		__this->set_smoothRoute_5((bool)1);
		// public float editorVisualisationSubsteps = 100;
		__this->set_editorVisualisationSubsteps_9((100.0f));
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
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::get_targetPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  WaypointProgressTracker_get_targetPoint_m655CE081514014F293CDCA08A9B1289B4E8B23B8 (WaypointProgressTracker_t5A14ED6C34AB2CC846E5E61AE7771C908B3D61E7 * __this, const RuntimeMethod* method)
{
	{
		// public WaypointCircuit.RoutePoint targetPoint { get; private set; }
		RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  L_0 = __this->get_U3CtargetPointU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::set_targetPoint(UnityStandardAssets.Utility.WaypointCircuit/RoutePoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaypointProgressTracker_set_targetPoint_mEC653EF05D2E830989BFF12F24036F56E89467D6 (WaypointProgressTracker_t5A14ED6C34AB2CC846E5E61AE7771C908B3D61E7 * __this, RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  ___value0, const RuntimeMethod* method)
{
	{
		// public WaypointCircuit.RoutePoint targetPoint { get; private set; }
		RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  L_0 = ___value0;
		__this->set_U3CtargetPointU3Ek__BackingField_11(L_0);
		return;
	}
}
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::get_speedPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  WaypointProgressTracker_get_speedPoint_m4A2F854158644EF04D66D8568486C5FCFC94845E (WaypointProgressTracker_t5A14ED6C34AB2CC846E5E61AE7771C908B3D61E7 * __this, const RuntimeMethod* method)
{
	{
		// public WaypointCircuit.RoutePoint speedPoint { get; private set; }
		RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  L_0 = __this->get_U3CspeedPointU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::set_speedPoint(UnityStandardAssets.Utility.WaypointCircuit/RoutePoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaypointProgressTracker_set_speedPoint_m6AB83C99DC704E6BE6CDD8A8309EBA95378C6759 (WaypointProgressTracker_t5A14ED6C34AB2CC846E5E61AE7771C908B3D61E7 * __this, RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  ___value0, const RuntimeMethod* method)
{
	{
		// public WaypointCircuit.RoutePoint speedPoint { get; private set; }
		RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  L_0 = ___value0;
		__this->set_U3CspeedPointU3Ek__BackingField_12(L_0);
		return;
	}
}
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::get_progressPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  WaypointProgressTracker_get_progressPoint_mEE058238637E1933AB6A6D0B2F500A465AF3CFE2 (WaypointProgressTracker_t5A14ED6C34AB2CC846E5E61AE7771C908B3D61E7 * __this, const RuntimeMethod* method)
{
	{
		// public WaypointCircuit.RoutePoint progressPoint { get; private set; }
		RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  L_0 = __this->get_U3CprogressPointU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::set_progressPoint(UnityStandardAssets.Utility.WaypointCircuit/RoutePoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaypointProgressTracker_set_progressPoint_m3DE2E6EB72CE4FA7F81CEBC4CB5EDF4529F83EF3 (WaypointProgressTracker_t5A14ED6C34AB2CC846E5E61AE7771C908B3D61E7 * __this, RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  ___value0, const RuntimeMethod* method)
{
	{
		// public WaypointCircuit.RoutePoint progressPoint { get; private set; }
		RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  L_0 = ___value0;
		__this->set_U3CprogressPointU3Ek__BackingField_13(L_0);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaypointProgressTracker_Start_m98F7D0E948FB081DA646FEED00C888A2181E4B84 (WaypointProgressTracker_t5A14ED6C34AB2CC846E5E61AE7771C908B3D61E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral340B0A3FD35DE3F927CF2162AB61884251242E4B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (target == null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_target_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		// target = new GameObject(name + " Waypoint Target").transform;
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_2, _stringLiteral340B0A3FD35DE3F927CF2162AB61884251242E4B, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_4, L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		__this->set_target_14(L_5);
	}

IL_002e:
	{
		// Reset();
		WaypointProgressTracker_Reset_m2B1228750CF9575DCC6A57C6F3DF40A64239A813(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaypointProgressTracker_Reset_m2B1228750CF9575DCC6A57C6F3DF40A64239A813 (WaypointProgressTracker_t5A14ED6C34AB2CC846E5E61AE7771C908B3D61E7 * __this, const RuntimeMethod* method)
{
	{
		// progressDistance = 0;
		__this->set_progressDistance_15((0.0f));
		// progressNum = 0;
		__this->set_progressNum_16(0);
		// if (progressStyle == ProgressStyle.PointToPoint)
		int32_t L_0 = __this->get_progressStyle_9();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_005f;
		}
	}
	{
		// target.position = circuit.Waypoints[progressNum].position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_target_14();
		WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * L_2 = __this->get_circuit_4();
		NullCheck(L_2);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_3;
		L_3 = WaypointCircuit_get_Waypoints_m711A9FD5EC14BAA92CC498C65244ED4314EB0FAD(L_2, /*hidden argument*/NULL);
		int32_t L_4 = __this->get_progressNum_16();
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_7, /*hidden argument*/NULL);
		// target.rotation = circuit.Waypoints[progressNum].rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = __this->get_target_14();
		WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * L_9 = __this->get_circuit_4();
		NullCheck(L_9);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_10;
		L_10 = WaypointCircuit_get_Waypoints_m711A9FD5EC14BAA92CC498C65244ED4314EB0FAD(L_9, /*hidden argument*/NULL);
		int32_t L_11 = __this->get_progressNum_16();
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14;
		L_14 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_13, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_8, L_14, /*hidden argument*/NULL);
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaypointProgressTracker_Update_mED4AB35B45C512B4655E5D76564070AA6D4FF278 (WaypointProgressTracker_t5A14ED6C34AB2CC846E5E61AE7771C908B3D61E7 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (progressStyle == ProgressStyle.SmoothAlongRoute)
		int32_t L_0 = __this->get_progressStyle_9();
		if (L_0)
		{
			goto IL_0139;
		}
	}
	{
		// if (Time.deltaTime > 0)
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		// speed = Mathf.Lerp(speed, (lastPosition - transform.position).magnitude/Time.deltaTime,
		//                    Time.deltaTime);
		float L_2 = __this->get_speed_18();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_lastPosition_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_3, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		float L_7;
		L_7 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		float L_8;
		L_8 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_9;
		L_9 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_10;
		L_10 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_2, ((float)((float)L_7/(float)L_8)), L_9, /*hidden argument*/NULL);
		__this->set_speed_18(L_10);
	}

IL_0051:
	{
		// target.position =
		//     circuit.GetRoutePoint(progressDistance + lookAheadForTargetOffset + lookAheadForTargetFactor*speed)
		//            .position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = __this->get_target_14();
		WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * L_12 = __this->get_circuit_4();
		float L_13 = __this->get_progressDistance_15();
		float L_14 = __this->get_lookAheadForTargetOffset_5();
		float L_15 = __this->get_lookAheadForTargetFactor_6();
		float L_16 = __this->get_speed_18();
		NullCheck(L_12);
		RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  L_17;
		L_17 = WaypointCircuit_GetRoutePoint_mC32D95791D49DC4117EBFFA78A8A3EFE6E5BC423(L_12, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_13, (float)L_14)), (float)((float)il2cpp_codegen_multiply((float)L_15, (float)L_16)))), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = L_17.get_position_0();
		NullCheck(L_11);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_11, L_18, /*hidden argument*/NULL);
		// target.rotation =
		//     Quaternion.LookRotation(
		//         circuit.GetRoutePoint(progressDistance + lookAheadForSpeedOffset + lookAheadForSpeedFactor*speed)
		//                .direction);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19 = __this->get_target_14();
		WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * L_20 = __this->get_circuit_4();
		float L_21 = __this->get_progressDistance_15();
		float L_22 = __this->get_lookAheadForSpeedOffset_7();
		float L_23 = __this->get_lookAheadForSpeedFactor_8();
		float L_24 = __this->get_speed_18();
		NullCheck(L_20);
		RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  L_25;
		L_25 = WaypointCircuit_GetRoutePoint_mC32D95791D49DC4117EBFFA78A8A3EFE6E5BC423(L_20, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_21, (float)L_22)), (float)((float)il2cpp_codegen_multiply((float)L_23, (float)L_24)))), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = L_25.get_direction_1();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_27;
		L_27 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF(L_26, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_19, L_27, /*hidden argument*/NULL);
		// progressPoint = circuit.GetRoutePoint(progressDistance);
		WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * L_28 = __this->get_circuit_4();
		float L_29 = __this->get_progressDistance_15();
		NullCheck(L_28);
		RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  L_30;
		L_30 = WaypointCircuit_GetRoutePoint_mC32D95791D49DC4117EBFFA78A8A3EFE6E5BC423(L_28, L_29, /*hidden argument*/NULL);
		WaypointProgressTracker_set_progressPoint_m3DE2E6EB72CE4FA7F81CEBC4CB5EDF4529F83EF3_inline(__this, L_30, /*hidden argument*/NULL);
		// Vector3 progressDelta = progressPoint.position - transform.position;
		RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  L_31;
		L_31 = WaypointProgressTracker_get_progressPoint_mEE058238637E1933AB6A6D0B2F500A465AF3CFE2_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = L_31.get_position_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_33, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_32, L_34, /*hidden argument*/NULL);
		V_0 = L_35;
		// if (Vector3.Dot(progressDelta, progressPoint.direction) < 0)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36 = V_0;
		RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  L_37;
		L_37 = WaypointProgressTracker_get_progressPoint_mEE058238637E1933AB6A6D0B2F500A465AF3CFE2_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = L_37.get_direction_1();
		float L_39;
		L_39 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_36, L_38, /*hidden argument*/NULL);
		if ((!(((float)L_39) < ((float)(0.0f)))))
		{
			goto IL_0127;
		}
	}
	{
		// progressDistance += progressDelta.magnitude*0.5f;
		float L_40 = __this->get_progressDistance_15();
		float L_41;
		L_41 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		__this->set_progressDistance_15(((float)il2cpp_codegen_add((float)L_40, (float)((float)il2cpp_codegen_multiply((float)L_41, (float)(0.5f))))));
	}

IL_0127:
	{
		// lastPosition = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_42);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_42, /*hidden argument*/NULL);
		__this->set_lastPosition_17(L_43);
		// }
		return;
	}

IL_0139:
	{
		// Vector3 targetDelta = target.position - transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44 = __this->get_target_14();
		NullCheck(L_44);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_44, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46;
		L_46 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_46);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_46, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_45, L_47, /*hidden argument*/NULL);
		V_2 = L_48;
		// if (targetDelta.magnitude < pointToPointThreshold)
		float L_49;
		L_49 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
		float L_50 = __this->get_pointToPointThreshold_10();
		if ((!(((float)L_49) < ((float)L_50))))
		{
			goto IL_0180;
		}
	}
	{
		// progressNum = (progressNum + 1)%circuit.Waypoints.Length;
		int32_t L_51 = __this->get_progressNum_16();
		WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * L_52 = __this->get_circuit_4();
		NullCheck(L_52);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_53;
		L_53 = WaypointCircuit_get_Waypoints_m711A9FD5EC14BAA92CC498C65244ED4314EB0FAD(L_52, /*hidden argument*/NULL);
		NullCheck(L_53);
		__this->set_progressNum_16(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1))%(int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_53)->max_length))))));
	}

IL_0180:
	{
		// target.position = circuit.Waypoints[progressNum].position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_54 = __this->get_target_14();
		WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * L_55 = __this->get_circuit_4();
		NullCheck(L_55);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_56;
		L_56 = WaypointCircuit_get_Waypoints_m711A9FD5EC14BAA92CC498C65244ED4314EB0FAD(L_55, /*hidden argument*/NULL);
		int32_t L_57 = __this->get_progressNum_16();
		NullCheck(L_56);
		int32_t L_58 = L_57;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_59);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60;
		L_60 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_59, /*hidden argument*/NULL);
		NullCheck(L_54);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_54, L_60, /*hidden argument*/NULL);
		// target.rotation = circuit.Waypoints[progressNum].rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_61 = __this->get_target_14();
		WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * L_62 = __this->get_circuit_4();
		NullCheck(L_62);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_63;
		L_63 = WaypointCircuit_get_Waypoints_m711A9FD5EC14BAA92CC498C65244ED4314EB0FAD(L_62, /*hidden argument*/NULL);
		int32_t L_64 = __this->get_progressNum_16();
		NullCheck(L_63);
		int32_t L_65 = L_64;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		NullCheck(L_66);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_67;
		L_67 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_66, /*hidden argument*/NULL);
		NullCheck(L_61);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_61, L_67, /*hidden argument*/NULL);
		// progressPoint = circuit.GetRoutePoint(progressDistance);
		WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * L_68 = __this->get_circuit_4();
		float L_69 = __this->get_progressDistance_15();
		NullCheck(L_68);
		RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  L_70;
		L_70 = WaypointCircuit_GetRoutePoint_mC32D95791D49DC4117EBFFA78A8A3EFE6E5BC423(L_68, L_69, /*hidden argument*/NULL);
		WaypointProgressTracker_set_progressPoint_m3DE2E6EB72CE4FA7F81CEBC4CB5EDF4529F83EF3_inline(__this, L_70, /*hidden argument*/NULL);
		// Vector3 progressDelta = progressPoint.position - transform.position;
		RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  L_71;
		L_71 = WaypointProgressTracker_get_progressPoint_mEE058238637E1933AB6A6D0B2F500A465AF3CFE2_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72 = L_71.get_position_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_73;
		L_73 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_73);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74;
		L_74 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_73, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75;
		L_75 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_72, L_74, /*hidden argument*/NULL);
		V_3 = L_75;
		// if (Vector3.Dot(progressDelta, progressPoint.direction) < 0)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_76 = V_3;
		RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  L_77;
		L_77 = WaypointProgressTracker_get_progressPoint_mEE058238637E1933AB6A6D0B2F500A465AF3CFE2_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_78 = L_77.get_direction_1();
		float L_79;
		L_79 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_76, L_78, /*hidden argument*/NULL);
		if ((!(((float)L_79) < ((float)(0.0f)))))
		{
			goto IL_0223;
		}
	}
	{
		// progressDistance += progressDelta.magnitude;
		float L_80 = __this->get_progressDistance_15();
		float L_81;
		L_81 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), /*hidden argument*/NULL);
		__this->set_progressDistance_15(((float)il2cpp_codegen_add((float)L_80, (float)L_81)));
	}

IL_0223:
	{
		// lastPosition = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_82;
		L_82 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_82);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_83;
		L_83 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_82, /*hidden argument*/NULL);
		__this->set_lastPosition_17(L_83);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaypointProgressTracker_OnDrawGizmos_mC317776CE2FF7D008DF2B8DD50795D7D68B936D5 (WaypointProgressTracker_t5A14ED6C34AB2CC846E5E61AE7771C908B3D61E7 * __this, const RuntimeMethod* method)
{
	{
		// if (Application.isPlaying)
		bool L_0;
		L_0 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_007c;
		}
	}
	{
		// Gizmos.color = Color.green;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(L_1, /*hidden argument*/NULL);
		// Gizmos.DrawLine(transform.position, target.position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_target_14();
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(L_3, L_5, /*hidden argument*/NULL);
		// Gizmos.DrawWireSphere(circuit.GetRoutePosition(progressDistance), 1);
		WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * L_6 = __this->get_circuit_4();
		float L_7 = __this->get_progressDistance_15();
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = WaypointCircuit_GetRoutePosition_m7DED18FB4A18FA960C7841B19F0A8787A2156925(L_6, L_7, /*hidden argument*/NULL);
		Gizmos_DrawWireSphere_m96C425145BBD85CF0192F9DDB3D1A8C69429B78B(L_8, (1.0f), /*hidden argument*/NULL);
		// Gizmos.color = Color.yellow;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9;
		L_9 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(/*hidden argument*/NULL);
		Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(L_9, /*hidden argument*/NULL);
		// Gizmos.DrawLine(target.position, target.position + target.forward);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = __this->get_target_14();
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = __this->get_target_14();
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = __this->get_target_14();
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_13, L_15, /*hidden argument*/NULL);
		Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(L_11, L_16, /*hidden argument*/NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaypointProgressTracker__ctor_m157A7E9F3EE5AE0959E3990DFACEFDFA8B0EE908 (WaypointProgressTracker_t5A14ED6C34AB2CC846E5E61AE7771C908B3D61E7 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private float lookAheadForTargetOffset = 5;
		__this->set_lookAheadForTargetOffset_5((5.0f));
		// [SerializeField] private float lookAheadForTargetFactor = .1f;
		__this->set_lookAheadForTargetFactor_6((0.100000001f));
		// [SerializeField] private float lookAheadForSpeedOffset = 10;
		__this->set_lookAheadForSpeedOffset_7((10.0f));
		// [SerializeField] private float lookAheadForSpeedFactor = .2f;
		__this->set_lookAheadForSpeedFactor_8((0.200000003f));
		// [SerializeField] private float pointToPointThreshold = 4;
		__this->set_pointToPointThreshold_10((4.0f));
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
// System.Void UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReplacementDefinition__ctor_m1102C56DB956FB431AF352D81775D21ABCFDD0FB (ReplacementDefinition_t41810CD7BE95D03FDDA88A67498F16BF332A55A1 * __this, const RuntimeMethod* method)
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
// System.Void UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReplacementList__ctor_mA6A664672DDA95B024C6ED743F62F3B5AE26ED4B (ReplacementList_t60FF742F1E41481EC1EEE4FE13109B1BABB34446 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReplacementDefinitionU5BU5D_t7FDBF66AC09AE6387AE2F22B4376411B47BF3420_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ReplacementDefinition[] items = new ReplacementDefinition[0];
		ReplacementDefinitionU5BU5D_t7FDBF66AC09AE6387AE2F22B4376411B47BF3420* L_0 = (ReplacementDefinitionU5BU5D_t7FDBF66AC09AE6387AE2F22B4376411B47BF3420*)(ReplacementDefinitionU5BU5D_t7FDBF66AC09AE6387AE2F22B4376411B47BF3420*)SZArrayNew(ReplacementDefinitionU5BU5D_t7FDBF66AC09AE6387AE2F22B4376411B47BF3420_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_items_0(L_0);
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
// System.Void UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3andSpace__ctor_m4BF0028B12DA4B370BB3A6A248301E51ADC298AE (Vector3andSpace_t6031169E96B7A6DC3CB39951D58FACDE4C07CE48 * __this, const RuntimeMethod* method)
{
	{
		// public Space space = Space.Self;
		__this->set_space_1(1);
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
// System.Void UnityStandardAssets.Utility.DragRigidbody/<DragObject>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDragObjectU3Ed__8__ctor_mE8FFC0B5F812F4825F8DEAAF2B56EC623EE16A78 (U3CDragObjectU3Ed__8_t76CF97740EC97233518D6D4AD4AC2EE9EE6A03A4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.DragRigidbody/<DragObject>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDragObjectU3Ed__8_System_IDisposable_Dispose_m53E0A8C8C5F246C7A80E254F5210D5B21670A189 (U3CDragObjectU3Ed__8_t76CF97740EC97233518D6D4AD4AC2EE9EE6A03A4 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityStandardAssets.Utility.DragRigidbody/<DragObject>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDragObjectU3Ed__8_MoveNext_mD6604FADF4AFA63AD8F39801F03358D698A82009 (U3CDragObjectU3Ed__8_t76CF97740EC97233518D6D4AD4AC2EE9EE6A03A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DragRigidbody_t9D0FAFD76BB0876EC4A6505ABC0FE018022CF7BD * V_1 = NULL;
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		DragRigidbody_t9D0FAFD76BB0876EC4A6505ABC0FE018022CF7BD * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00c3;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var oldDrag = m_SpringJoint.connectedBody.drag;
		DragRigidbody_t9D0FAFD76BB0876EC4A6505ABC0FE018022CF7BD * L_4 = V_1;
		NullCheck(L_4);
		SpringJoint_t6F2ACC63AD7C975D92271BC2DE2B564087DC27BF * L_5 = L_4->get_m_SpringJoint_10();
		NullCheck(L_5);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_6;
		L_6 = Joint_get_connectedBody_m35ED1900CACED65F78E5D612BE8979142CBA68A5(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		float L_7;
		L_7 = Rigidbody_get_drag_m0C617963D9BBBC4018D3A8B2DB5D6190615F4A64(L_6, /*hidden argument*/NULL);
		__this->set_U3ColdDragU3E5__2_4(L_7);
		// var oldAngularDrag = m_SpringJoint.connectedBody.angularDrag;
		DragRigidbody_t9D0FAFD76BB0876EC4A6505ABC0FE018022CF7BD * L_8 = V_1;
		NullCheck(L_8);
		SpringJoint_t6F2ACC63AD7C975D92271BC2DE2B564087DC27BF * L_9 = L_8->get_m_SpringJoint_10();
		NullCheck(L_9);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_10;
		L_10 = Joint_get_connectedBody_m35ED1900CACED65F78E5D612BE8979142CBA68A5(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		float L_11;
		L_11 = Rigidbody_get_angularDrag_m0E53FD8F8A09DFA941C52C868288DBBC030C5082(L_10, /*hidden argument*/NULL);
		__this->set_U3ColdAngularDragU3E5__3_5(L_11);
		// m_SpringJoint.connectedBody.drag = k_Drag;
		DragRigidbody_t9D0FAFD76BB0876EC4A6505ABC0FE018022CF7BD * L_12 = V_1;
		NullCheck(L_12);
		SpringJoint_t6F2ACC63AD7C975D92271BC2DE2B564087DC27BF * L_13 = L_12->get_m_SpringJoint_10();
		NullCheck(L_13);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_14;
		L_14 = Joint_get_connectedBody_m35ED1900CACED65F78E5D612BE8979142CBA68A5(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Rigidbody_set_drag_m60E39BE31529DE5163116785A69FACC77C52DA98(L_14, (10.0f), /*hidden argument*/NULL);
		// m_SpringJoint.connectedBody.angularDrag = k_AngularDrag;
		DragRigidbody_t9D0FAFD76BB0876EC4A6505ABC0FE018022CF7BD * L_15 = V_1;
		NullCheck(L_15);
		SpringJoint_t6F2ACC63AD7C975D92271BC2DE2B564087DC27BF * L_16 = L_15->get_m_SpringJoint_10();
		NullCheck(L_16);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_17;
		L_17 = Joint_get_connectedBody_m35ED1900CACED65F78E5D612BE8979142CBA68A5(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Rigidbody_set_angularDrag_m8BF3771789B32FB09FDD8066BAFA0A0B661372A4(L_17, (5.0f), /*hidden argument*/NULL);
		// var mainCamera = FindCamera();
		DragRigidbody_t9D0FAFD76BB0876EC4A6505ABC0FE018022CF7BD * L_18 = V_1;
		NullCheck(L_18);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_19;
		L_19 = DragRigidbody_FindCamera_mFE78D3C4353793B1C072057C76BCB29BDBB4970F(L_18, /*hidden argument*/NULL);
		__this->set_U3CmainCameraU3E5__4_6(L_19);
		goto IL_00ca;
	}

IL_0085:
	{
		// var ray = mainCamera.ScreenPointToRay(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_20 = __this->get_U3CmainCameraU3E5__4_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		NullCheck(L_20);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_22;
		L_22 = Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB(L_20, L_21, /*hidden argument*/NULL);
		V_2 = L_22;
		// m_SpringJoint.transform.position = ray.GetPoint(distance);
		DragRigidbody_t9D0FAFD76BB0876EC4A6505ABC0FE018022CF7BD * L_23 = V_1;
		NullCheck(L_23);
		SpringJoint_t6F2ACC63AD7C975D92271BC2DE2B564087DC27BF * L_24 = L_23->get_m_SpringJoint_10();
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_24, /*hidden argument*/NULL);
		float L_26 = __this->get_distance_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Ray_GetPoint_mC92464E32E42603B7B3444938E8BB8ADA43AB240((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_2), L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_25, L_27, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00c3:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00ca:
	{
		// while (Input.GetMouseButton(0))
		bool L_28;
		L_28 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(0, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0085;
		}
	}
	{
		// if (m_SpringJoint.connectedBody)
		DragRigidbody_t9D0FAFD76BB0876EC4A6505ABC0FE018022CF7BD * L_29 = V_1;
		NullCheck(L_29);
		SpringJoint_t6F2ACC63AD7C975D92271BC2DE2B564087DC27BF * L_30 = L_29->get_m_SpringJoint_10();
		NullCheck(L_30);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_31;
		L_31 = Joint_get_connectedBody_m35ED1900CACED65F78E5D612BE8979142CBA68A5(L_30, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_011c;
		}
	}
	{
		// m_SpringJoint.connectedBody.drag = oldDrag;
		DragRigidbody_t9D0FAFD76BB0876EC4A6505ABC0FE018022CF7BD * L_33 = V_1;
		NullCheck(L_33);
		SpringJoint_t6F2ACC63AD7C975D92271BC2DE2B564087DC27BF * L_34 = L_33->get_m_SpringJoint_10();
		NullCheck(L_34);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_35;
		L_35 = Joint_get_connectedBody_m35ED1900CACED65F78E5D612BE8979142CBA68A5(L_34, /*hidden argument*/NULL);
		float L_36 = __this->get_U3ColdDragU3E5__2_4();
		NullCheck(L_35);
		Rigidbody_set_drag_m60E39BE31529DE5163116785A69FACC77C52DA98(L_35, L_36, /*hidden argument*/NULL);
		// m_SpringJoint.connectedBody.angularDrag = oldAngularDrag;
		DragRigidbody_t9D0FAFD76BB0876EC4A6505ABC0FE018022CF7BD * L_37 = V_1;
		NullCheck(L_37);
		SpringJoint_t6F2ACC63AD7C975D92271BC2DE2B564087DC27BF * L_38 = L_37->get_m_SpringJoint_10();
		NullCheck(L_38);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_39;
		L_39 = Joint_get_connectedBody_m35ED1900CACED65F78E5D612BE8979142CBA68A5(L_38, /*hidden argument*/NULL);
		float L_40 = __this->get_U3ColdAngularDragU3E5__3_5();
		NullCheck(L_39);
		Rigidbody_set_angularDrag_m8BF3771789B32FB09FDD8066BAFA0A0B661372A4(L_39, L_40, /*hidden argument*/NULL);
		// m_SpringJoint.connectedBody = null;
		DragRigidbody_t9D0FAFD76BB0876EC4A6505ABC0FE018022CF7BD * L_41 = V_1;
		NullCheck(L_41);
		SpringJoint_t6F2ACC63AD7C975D92271BC2DE2B564087DC27BF * L_42 = L_41->get_m_SpringJoint_10();
		NullCheck(L_42);
		Joint_set_connectedBody_m572C6C32E2FC5263AECDC460D50E5B0F79727B30(L_42, (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A *)NULL, /*hidden argument*/NULL);
	}

IL_011c:
	{
		// }
		return (bool)0;
	}
}
// System.Object UnityStandardAssets.Utility.DragRigidbody/<DragObject>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDragObjectU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8E77D16127A48EC816BF821A524BD0AAEA2B5236 (U3CDragObjectU3Ed__8_t76CF97740EC97233518D6D4AD4AC2EE9EE6A03A4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.DragRigidbody/<DragObject>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDragObjectU3Ed__8_System_Collections_IEnumerator_Reset_m0AEB9E21FF1B24A1B88E0DDA2240CC5E49043080 (U3CDragObjectU3Ed__8_t76CF97740EC97233518D6D4AD4AC2EE9EE6A03A4 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDragObjectU3Ed__8_System_Collections_IEnumerator_Reset_m0AEB9E21FF1B24A1B88E0DDA2240CC5E49043080_RuntimeMethod_var)));
	}
}
// System.Object UnityStandardAssets.Utility.DragRigidbody/<DragObject>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDragObjectU3Ed__8_System_Collections_IEnumerator_get_Current_m53D8C0C7A22E74C2FA73FE1A0C68C67FA7738C3E (U3CDragObjectU3Ed__8_t76CF97740EC97233518D6D4AD4AC2EE9EE6A03A4 * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Prime31.EtceteraBinding/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m034F9BF1289B3FE6A732D6B1A424CA08FFE861DE (U3CU3Ec__DisplayClass1_0_t12FD0ED7CB284735884F6EB4295688EF22EA4F49 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Prime31.EtceteraBinding/<>c__DisplayClass1_0::<takeScreenShot>b__0(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CtakeScreenShotU3Eb__0_m39CD9E16762EFAFFFB69AB6CF4E8C6A273BE71F5 (U3CU3Ec__DisplayClass1_0_t12FD0ED7CB284735884F6EB4295688EF22EA4F49 * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var path = Path.Combine(Application.persistentDataPath, filename);
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		String_t* L_1 = __this->get_filename_0();
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// File.WriteAllBytes(path, tex.EncodeToPNG());
		String_t* L_3 = V_0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = ___tex0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5;
		L_5 = ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED(L_4, /*hidden argument*/NULL);
		File_WriteAllBytes_m1E88860F73A6A2150FAB97D9BF3F44596F06036F(L_3, L_5, /*hidden argument*/NULL);
		// if (completionHandler != null)
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_6 = __this->get_completionHandler_1();
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		// completionHandler(path);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_7 = __this->get_completionHandler_1();
		String_t* L_8 = V_0;
		NullCheck(L_7);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_7, L_8, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
	}

IL_0031:
	{
		// }));
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
// System.Void Prime31.EtceteraBinding/<>c__DisplayClass42_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass42_0__ctor_mF587239CFD37A907756BE0205C0942ED81FAE972 (U3CU3Ec__DisplayClass42_0_t23119897902E882858BC9FC825590AD2097A97D9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Prime31.EtceteraBinding/<>c__DisplayClass42_0::<showMailComposerWithScreenshot>b__0(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass42_0_U3CshowMailComposerWithScreenshotU3Eb__0_m52A044D9E1E687BF012197462B3310AFC8AC3D8D (U3CU3Ec__DisplayClass42_0_t23119897902E882858BC9FC825590AD2097A97D9 * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A1305C99AE63A340ABD0C7B328B426F963CC133);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var bytes = tex.EncodeToPNG();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___tex0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1;
		L_1 = ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED(L_0, /*hidden argument*/NULL);
		// showMailComposerWithAttachment(bytes, "image/png", "screenshot.png", toAddress, subject, body, isHTML);
		String_t* L_2 = __this->get_toAddress_0();
		String_t* L_3 = __this->get_subject_1();
		String_t* L_4 = __this->get_body_2();
		bool L_5 = __this->get_isHTML_3();
		EtceteraBinding_showMailComposerWithAttachment_m6E10661569468840F3D7276FEF7A8D7D90F8C18B(L_1, _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821, _stringLiteral0A1305C99AE63A340ABD0C7B328B426F963CC133, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		// }));
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
// System.Void Prime31.EtceteraBinding/<getScreenShotTexture>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetScreenShotTextureU3Ed__2__ctor_mAC456639CA2CCA096F79F23B71308168635ACE2E (U3CgetScreenShotTextureU3Ed__2_t48D4A648F028648458A208CE44150AEEC405D554 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Prime31.EtceteraBinding/<getScreenShotTexture>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetScreenShotTextureU3Ed__2_System_IDisposable_Dispose_m8BE0849EE456A332B8DC94B767FFACF20E39EDF6 (U3CgetScreenShotTextureU3Ed__2_t48D4A648F028648458A208CE44150AEEC405D554 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Prime31.EtceteraBinding/<getScreenShotTexture>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CgetScreenShotTextureU3Ed__2_MoveNext_m8F03465300431316A532F3DB9FAC330D51127982 (U3CgetScreenShotTextureU3Ed__2_t48D4A648F028648458A208CE44150AEEC405D554 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m48902101D8F84E0110E1EA89779FE035FC93C460_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_3 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_002b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var tex = new Texture2D(Screen.width, Screen.height, TextureFormat.RGB24, false);
		int32_t L_4;
		L_4 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092(L_6, L_4, L_5, 3, (bool)0, /*hidden argument*/NULL);
		V_1 = L_6;
		// tex.ReadPixels(new Rect(0, 0, Screen.width, Screen.height), 0, 0);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7 = V_1;
		int32_t L_8;
		L_8 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_9;
		L_9 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_10), (0.0f), (0.0f), ((float)((float)L_8)), ((float)((float)L_9)), /*hidden argument*/NULL);
		NullCheck(L_7);
		Texture2D_ReadPixels_m4C6FE8C2798C39C20A14DAFC963C720D17F4F987(L_7, L_10, 0, 0, /*hidden argument*/NULL);
		// tex.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_11 = V_1;
		NullCheck(L_11);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_11, /*hidden argument*/NULL);
		// completionHandler(tex);
		Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA * L_12 = __this->get_completionHandler_2();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_13 = V_1;
		NullCheck(L_12);
		Action_1_Invoke_m48902101D8F84E0110E1EA89779FE035FC93C460(L_12, L_13, /*hidden argument*/Action_1_Invoke_m48902101D8F84E0110E1EA89779FE035FC93C460_RuntimeMethod_var);
		// }
		return (bool)0;
	}
}
// System.Object Prime31.EtceteraBinding/<getScreenShotTexture>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CgetScreenShotTextureU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m53E97FE23BE8EF7C02173789D32CCCF6E05C1874 (U3CgetScreenShotTextureU3Ed__2_t48D4A648F028648458A208CE44150AEEC405D554 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Prime31.EtceteraBinding/<getScreenShotTexture>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetScreenShotTextureU3Ed__2_System_Collections_IEnumerator_Reset_m2CD516CCE8BA11E3BF86B7B3FE8571EEC09F3860 (U3CgetScreenShotTextureU3Ed__2_t48D4A648F028648458A208CE44150AEEC405D554 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CgetScreenShotTextureU3Ed__2_System_Collections_IEnumerator_Reset_m2CD516CCE8BA11E3BF86B7B3FE8571EEC09F3860_RuntimeMethod_var)));
	}
}
// System.Object Prime31.EtceteraBinding/<getScreenShotTexture>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CgetScreenShotTextureU3Ed__2_System_Collections_IEnumerator_get_Current_m44952AEE237BB17CC7D890CD7307112B9E156C55 (U3CgetScreenShotTextureU3Ed__2_t48D4A648F028648458A208CE44150AEEC405D554 * __this, const RuntimeMethod* method)
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
// System.Void Prime31.EtceteraBinding/<registerDeviceWithGameThrive>d__84::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CregisterDeviceWithGameThriveU3Ed__84__ctor_m5682B59D9962793C99DDE7F759C73BE1ABD3487E (U3CregisterDeviceWithGameThriveU3Ed__84_tFF5AC4FCC89BE2F0E4EE16C4C5A94D734F12D58A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Prime31.EtceteraBinding/<registerDeviceWithGameThrive>d__84::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CregisterDeviceWithGameThriveU3Ed__84_System_IDisposable_Dispose_mBE6DE6E0C11A82F3380DA6F20992A1BBFF28C7C8 (U3CregisterDeviceWithGameThriveU3Ed__84_tFF5AC4FCC89BE2F0E4EE16C4C5A94D734F12D58A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
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
		U3CregisterDeviceWithGameThriveU3Ed__84_U3CU3Em__Finally1_m88F388FE27B8DAD977ECB578B2BEA9C28849ECA5(__this, /*hidden argument*/NULL);
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
// System.Boolean Prime31.EtceteraBinding/<registerDeviceWithGameThrive>d__84::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CregisterDeviceWithGameThriveU3Ed__84_MoveNext_m0B8413614FDA63B4AF928496E7D83ADEF265F71B (U3CregisterDeviceWithGameThriveU3Ed__84_tFF5AC4FCC89BE2F0E4EE16C4C5A94D734F12D58A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mC6AC684CA28046738FE417C855B623D5F218A8BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m69FA0927978855661A3EA0DC3B9AE1D00FCE4825_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFB991F7C2A32C8DA7C4D2F522B9C69C36F7DF904_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5357493D8DA32113DC35EE95205D4E3D607C9F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7FA8CBC3A46C7349CA380C3BA7B3294C6C0FC9D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Json_tE438EA5A4F39CA21F670B3F0AB55B25568713BF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_mBEA854721D5E7717F856476B1E4563A59661CBF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B8A49A0353D350D3914D9B4B8223F51C1CB133);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B6BA1F35F8FE78D2809A35FEF8215457FD4B7EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DAB16C764986A67F85370F8E257B7453A9EEA86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B3CB2A6685B3A62DC38FEF7B6511F50EEC93B8A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * V_3 = NULL;
	String_t* V_4 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_5 = NULL;
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * V_6 = NULL;
	Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547  V_7;
	memset((&V_7), 0, sizeof(V_7));
	String_t* V_8 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0018;
			}
		}

IL_000a:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0117;
			}
		}

IL_0011:
		{
			V_0 = (bool)0;
			goto IL_0150;
		}

IL_0018:
		{
			__this->set_U3CU3E1__state_0((-1));
			// var url = string.Format("https:
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3;
			L_3 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
			String_t* L_4;
			L_4 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral6B3CB2A6685B3A62DC38FEF7B6511F50EEC93B8A, L_3, /*hidden argument*/NULL);
			V_2 = L_4;
			// var parameters = new Dictionary<string, string>();
			Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_5 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_5, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
			V_3 = L_5;
			// parameters.Add("device_type", "0");
			Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_6 = V_3;
			NullCheck(L_6);
			Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_6, _stringLiteral4DAB16C764986A67F85370F8E257B7453A9EEA86, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
			// parameters.Add("app_id", gameThriveAppId);
			Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_7 = V_3;
			String_t* L_8 = __this->get_gameThriveAppId_2();
			NullCheck(L_7);
			Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_7, _stringLiteral3B6BA1F35F8FE78D2809A35FEF8215457FD4B7EE, L_8, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
			// parameters.Add("identifier", deviceToken);
			Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_9 = V_3;
			String_t* L_10 = __this->get_deviceToken_3();
			NullCheck(L_9);
			Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_9, _stringLiteral00B8A49A0353D350D3914D9B4B8223F51C1CB133, L_10, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
			// if (additionalParameters != null)
			Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_11 = __this->get_additionalParameters_4();
			if (!L_11)
			{
				goto IL_00ba;
			}
		}

IL_006f:
		{
			// foreach (var key in additionalParameters.Keys)
			Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_12 = __this->get_additionalParameters_4();
			NullCheck(L_12);
			KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * L_13;
			L_13 = Dictionary_2_get_Keys_m69FA0927978855661A3EA0DC3B9AE1D00FCE4825(L_12, /*hidden argument*/Dictionary_2_get_Keys_m69FA0927978855661A3EA0DC3B9AE1D00FCE4825_RuntimeMethod_var);
			NullCheck(L_13);
			Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547  L_14;
			L_14 = KeyCollection_GetEnumerator_mBEA854721D5E7717F856476B1E4563A59661CBF7(L_13, /*hidden argument*/KeyCollection_GetEnumerator_mBEA854721D5E7717F856476B1E4563A59661CBF7_RuntimeMethod_var);
			V_7 = L_14;
		}

IL_0081:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00a1;
			}

IL_0083:
			{
				// foreach (var key in additionalParameters.Keys)
				String_t* L_15;
				L_15 = Enumerator_get_Current_m7FA8CBC3A46C7349CA380C3BA7B3294C6C0FC9D8_inline((Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547 *)(&V_7), /*hidden argument*/Enumerator_get_Current_m7FA8CBC3A46C7349CA380C3BA7B3294C6C0FC9D8_RuntimeMethod_var);
				V_8 = L_15;
				// parameters.Add(key, additionalParameters[key]);
				Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_16 = V_3;
				String_t* L_17 = V_8;
				Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_18 = __this->get_additionalParameters_4();
				String_t* L_19 = V_8;
				NullCheck(L_18);
				String_t* L_20;
				L_20 = Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141(L_18, L_19, /*hidden argument*/Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141_RuntimeMethod_var);
				NullCheck(L_16);
				Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_16, L_17, L_20, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
			}

IL_00a1:
			{
				// foreach (var key in additionalParameters.Keys)
				bool L_21;
				L_21 = Enumerator_MoveNext_m5357493D8DA32113DC35EE95205D4E3D607C9F33((Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547 *)(&V_7), /*hidden argument*/Enumerator_MoveNext_m5357493D8DA32113DC35EE95205D4E3D607C9F33_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_0083;
				}
			}

IL_00aa:
			{
				IL2CPP_LEAVE(0xBA, FINALLY_00ac);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00ac;
		}

FINALLY_00ac:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_mFB991F7C2A32C8DA7C4D2F522B9C69C36F7DF904((Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547 *)(&V_7), /*hidden argument*/Enumerator_Dispose_mFB991F7C2A32C8DA7C4D2F522B9C69C36F7DF904_RuntimeMethod_var);
			IL2CPP_END_FINALLY(172)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(172)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xBA, IL_00ba)
		}

IL_00ba:
		{
			// var json = Json.encode(parameters);
			Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_22 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Json_tE438EA5A4F39CA21F670B3F0AB55B25568713BF3_il2cpp_TypeInfo_var);
			String_t* L_23;
			L_23 = Json_encode_m667B2DCA3CD0DCDFDBB1D03C0252FEAF232EDCD5(L_22, /*hidden argument*/NULL);
			V_4 = L_23;
			// var bytes = System.Text.Encoding.UTF8.GetBytes(json);
			Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_24;
			L_24 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
			String_t* L_25 = V_4;
			NullCheck(L_24);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26;
			L_26 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(15 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_24, L_25);
			V_5 = L_26;
			// var headers = new Hashtable();
			Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_27 = (Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)il2cpp_codegen_object_new(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var);
			Hashtable__ctor_m2D9C25FB57ACD33B0DF8391D38A165975A1D9A91(L_27, /*hidden argument*/NULL);
			V_6 = L_27;
			// headers.Add("Content-Type", "application/json");
			Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_28 = V_6;
			NullCheck(L_28);
			VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(17 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_28, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
			// using (var www = new WWW(url, bytes, headers))
			String_t* L_29 = V_2;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = V_5;
			Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_31 = V_6;
			WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_32 = (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 *)il2cpp_codegen_object_new(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
			WWW__ctor_m65F8FD8844E98791289859A04B7751554B20C95E(L_32, L_29, L_30, L_31, /*hidden argument*/NULL);
			__this->set_U3CwwwU3E5__2_6(L_32);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return www;
			WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_33 = __this->get_U3CwwwU3E5__2_6();
			__this->set_U3CU3E2__current_1(L_33);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0150;
		}

IL_0117:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// if (completionHandler != null)
			Action_1_t09F80ED9165FB471660E59814CE3452EF1D8B5CD * L_34 = __this->get_completionHandler_5();
			if (!L_34)
			{
				goto IL_0138;
			}
		}

IL_0127:
		{
			// completionHandler(www);
			Action_1_t09F80ED9165FB471660E59814CE3452EF1D8B5CD * L_35 = __this->get_completionHandler_5();
			WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_36 = __this->get_U3CwwwU3E5__2_6();
			NullCheck(L_35);
			Action_1_Invoke_mC6AC684CA28046738FE417C855B623D5F218A8BD(L_35, L_36, /*hidden argument*/Action_1_Invoke_mC6AC684CA28046738FE417C855B623D5F218A8BD_RuntimeMethod_var);
		}

IL_0138:
		{
			// }
			U3CregisterDeviceWithGameThriveU3Ed__84_U3CU3Em__Finally1_m88F388FE27B8DAD977ECB578B2BEA9C28849ECA5(__this, /*hidden argument*/NULL);
			__this->set_U3CwwwU3E5__2_6((WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 *)NULL);
			// }
			V_0 = (bool)0;
			goto IL_0150;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0149;
	}

FAULT_0149:
	{ // begin fault (depth: 1)
		U3CregisterDeviceWithGameThriveU3Ed__84_System_IDisposable_Dispose_mBE6DE6E0C11A82F3380DA6F20992A1BBFF28C7C8(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(329)
	} // end fault
	IL2CPP_CLEANUP(329)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0150:
	{
		bool L_37 = V_0;
		return L_37;
	}
}
// System.Void Prime31.EtceteraBinding/<registerDeviceWithGameThrive>d__84::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CregisterDeviceWithGameThriveU3Ed__84_U3CU3Em__Finally1_m88F388FE27B8DAD977ECB578B2BEA9C28849ECA5 (U3CregisterDeviceWithGameThriveU3Ed__84_tFF5AC4FCC89BE2F0E4EE16C4C5A94D734F12D58A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_0 = __this->get_U3CwwwU3E5__2_6();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_1 = __this->get_U3CwwwU3E5__2_6();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Object Prime31.EtceteraBinding/<registerDeviceWithGameThrive>d__84::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CregisterDeviceWithGameThriveU3Ed__84_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA46795AD411A8D220A9EC079A1A54AEAA5F730D0 (U3CregisterDeviceWithGameThriveU3Ed__84_tFF5AC4FCC89BE2F0E4EE16C4C5A94D734F12D58A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Prime31.EtceteraBinding/<registerDeviceWithGameThrive>d__84::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CregisterDeviceWithGameThriveU3Ed__84_System_Collections_IEnumerator_Reset_m044FB1C36AE03BC55FC71E1F7312106B7ABE0777 (U3CregisterDeviceWithGameThriveU3Ed__84_tFF5AC4FCC89BE2F0E4EE16C4C5A94D734F12D58A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CregisterDeviceWithGameThriveU3Ed__84_System_Collections_IEnumerator_Reset_m044FB1C36AE03BC55FC71E1F7312106B7ABE0777_RuntimeMethod_var)));
	}
}
// System.Object Prime31.EtceteraBinding/<registerDeviceWithGameThrive>d__84::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CregisterDeviceWithGameThriveU3Ed__84_System_Collections_IEnumerator_get_Current_m7B0759ACC920ED99DBFCAA06DB0FABE4E76DC3F5 (U3CregisterDeviceWithGameThriveU3Ed__84_tFF5AC4FCC89BE2F0E4EE16C4C5A94D734F12D58A * __this, const RuntimeMethod* method)
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
// System.Void Prime31.EtceteraBinding/<showMailComposerWithScreenshot>d__42::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CshowMailComposerWithScreenshotU3Ed__42__ctor_mB002ABA2F7AA6D3D8A0C3E13EC8CF6553434C858 (U3CshowMailComposerWithScreenshotU3Ed__42_t98B9366DB6B131AEA119A3C969686CF3603DA579 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Prime31.EtceteraBinding/<showMailComposerWithScreenshot>d__42::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CshowMailComposerWithScreenshotU3Ed__42_System_IDisposable_Dispose_m70EEA68864EAD37AA9C2729F753FBD0C169CEB69 (U3CshowMailComposerWithScreenshotU3Ed__42_t98B9366DB6B131AEA119A3C969686CF3603DA579 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Prime31.EtceteraBinding/<showMailComposerWithScreenshot>d__42::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CshowMailComposerWithScreenshotU3Ed__42_MoveNext_m410587E5F162388A431FBEA0DBBD550898E7F94F (U3CshowMailComposerWithScreenshotU3Ed__42_t98B9366DB6B131AEA119A3C969686CF3603DA579 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mB51C80DFB46F2AD9DB1B2885836FA5C92D2451FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass42_0_U3CshowMailComposerWithScreenshotU3Eb__0_m52A044D9E1E687BF012197462B3310AFC8AC3D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass42_0_t23119897902E882858BC9FC825590AD2097A97D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass42_0_t23119897902E882858BC9FC825590AD2097A97D9 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_007f;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		U3CU3Ec__DisplayClass42_0_t23119897902E882858BC9FC825590AD2097A97D9 * L_3 = (U3CU3Ec__DisplayClass42_0_t23119897902E882858BC9FC825590AD2097A97D9 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass42_0_t23119897902E882858BC9FC825590AD2097A97D9_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass42_0__ctor_mF587239CFD37A907756BE0205C0942ED81FAE972(L_3, /*hidden argument*/NULL);
		V_1 = L_3;
		U3CU3Ec__DisplayClass42_0_t23119897902E882858BC9FC825590AD2097A97D9 * L_4 = V_1;
		String_t* L_5 = __this->get_toAddress_2();
		NullCheck(L_4);
		L_4->set_toAddress_0(L_5);
		U3CU3Ec__DisplayClass42_0_t23119897902E882858BC9FC825590AD2097A97D9 * L_6 = V_1;
		String_t* L_7 = __this->get_subject_3();
		NullCheck(L_6);
		L_6->set_subject_1(L_7);
		U3CU3Ec__DisplayClass42_0_t23119897902E882858BC9FC825590AD2097A97D9 * L_8 = V_1;
		String_t* L_9 = __this->get_body_4();
		NullCheck(L_8);
		L_8->set_body_2(L_9);
		U3CU3Ec__DisplayClass42_0_t23119897902E882858BC9FC825590AD2097A97D9 * L_10 = V_1;
		bool L_11 = __this->get_isHTML_5();
		NullCheck(L_10);
		L_10->set_isHTML_3(L_11);
		// if (Application.platform == RuntimePlatform.IPhonePlayer)
		int32_t L_12;
		L_12 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)8))))
		{
			goto IL_0086;
		}
	}
	{
		// yield return AbstractManager.coroutineSurrogate.StartCoroutine(getScreenShotTexture(tex =>
		// {
		//     var bytes = tex.EncodeToPNG();
		//     showMailComposerWithAttachment(bytes, "image/png", "screenshot.png", toAddress, subject, body, isHTML);
		// }));
		LifecycleHelper_t2C8530CA0073EF4CA43BCC651EB399608723D373 * L_13;
		L_13 = AbstractManager_get_coroutineSurrogate_mB9BFA65B8657DA189D5DAF19C232DFD74FCC9B9D(/*hidden argument*/NULL);
		U3CU3Ec__DisplayClass42_0_t23119897902E882858BC9FC825590AD2097A97D9 * L_14 = V_1;
		Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA * L_15 = (Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA *)il2cpp_codegen_object_new(Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA_il2cpp_TypeInfo_var);
		Action_1__ctor_mB51C80DFB46F2AD9DB1B2885836FA5C92D2451FD(L_15, L_14, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass42_0_U3CshowMailComposerWithScreenshotU3Eb__0_m52A044D9E1E687BF012197462B3310AFC8AC3D8D_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mB51C80DFB46F2AD9DB1B2885836FA5C92D2451FD_RuntimeMethod_var);
		RuntimeObject* L_16;
		L_16 = EtceteraBinding_getScreenShotTexture_mEB8CBC75807AFA496164090CE4F488AA53072EEF(L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_17;
		L_17 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_13, L_16, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_17);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_007f:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0086:
	{
		// }
		return (bool)0;
	}
}
// System.Object Prime31.EtceteraBinding/<showMailComposerWithScreenshot>d__42::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CshowMailComposerWithScreenshotU3Ed__42_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1C10B5DDF389D88074F333E76EF993C52AAE7DCB (U3CshowMailComposerWithScreenshotU3Ed__42_t98B9366DB6B131AEA119A3C969686CF3603DA579 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Prime31.EtceteraBinding/<showMailComposerWithScreenshot>d__42::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CshowMailComposerWithScreenshotU3Ed__42_System_Collections_IEnumerator_Reset_m06BC05F85EB04673F7764B50DFC37C984A1BFECB (U3CshowMailComposerWithScreenshotU3Ed__42_t98B9366DB6B131AEA119A3C969686CF3603DA579 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CshowMailComposerWithScreenshotU3Ed__42_System_Collections_IEnumerator_Reset_m06BC05F85EB04673F7764B50DFC37C984A1BFECB_RuntimeMethod_var)));
	}
}
// System.Object Prime31.EtceteraBinding/<showMailComposerWithScreenshot>d__42::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CshowMailComposerWithScreenshotU3Ed__42_System_Collections_IEnumerator_get_Current_m0FA6FA2556742881E726490AA13923B77FA41C32 (U3CshowMailComposerWithScreenshotU3Ed__42_t98B9366DB6B131AEA119A3C969686CF3603DA579 * __this, const RuntimeMethod* method)
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
// System.Void Prime31.EtceteraBinding/<takeScreenShot>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CtakeScreenShotU3Ed__1__ctor_m4B89C1D48E24AAAAA4299B215818F52D6BB6E1D2 (U3CtakeScreenShotU3Ed__1_tFA00614386A052E5278DA0E689EB3B4CB03679BB * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Prime31.EtceteraBinding/<takeScreenShot>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CtakeScreenShotU3Ed__1_System_IDisposable_Dispose_m8D910D1E3D1C7BCD9195D4A096871EE464275A1C (U3CtakeScreenShotU3Ed__1_tFA00614386A052E5278DA0E689EB3B4CB03679BB * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Prime31.EtceteraBinding/<takeScreenShot>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CtakeScreenShotU3Ed__1_MoveNext_mD360517653E6E22F7C08E447E7C7E69D1F73C51F (U3CtakeScreenShotU3Ed__1_tFA00614386A052E5278DA0E689EB3B4CB03679BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mB51C80DFB46F2AD9DB1B2885836FA5C92D2451FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CtakeScreenShotU3Eb__0_m39CD9E16762EFAFFFB69AB6CF4E8C6A273BE71F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_t12FD0ED7CB284735884F6EB4295688EF22EA4F49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass1_0_t12FD0ED7CB284735884F6EB4295688EF22EA4F49 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_005f;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		U3CU3Ec__DisplayClass1_0_t12FD0ED7CB284735884F6EB4295688EF22EA4F49 * L_3 = (U3CU3Ec__DisplayClass1_0_t12FD0ED7CB284735884F6EB4295688EF22EA4F49 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_t12FD0ED7CB284735884F6EB4295688EF22EA4F49_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass1_0__ctor_m034F9BF1289B3FE6A732D6B1A424CA08FFE861DE(L_3, /*hidden argument*/NULL);
		V_1 = L_3;
		U3CU3Ec__DisplayClass1_0_t12FD0ED7CB284735884F6EB4295688EF22EA4F49 * L_4 = V_1;
		String_t* L_5 = __this->get_filename_2();
		NullCheck(L_4);
		L_4->set_filename_0(L_5);
		U3CU3Ec__DisplayClass1_0_t12FD0ED7CB284735884F6EB4295688EF22EA4F49 * L_6 = V_1;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_7 = __this->get_completionHandler_3();
		NullCheck(L_6);
		L_6->set_completionHandler_1(L_7);
		// yield return AbstractManager.coroutineSurrogate.StartCoroutine(getScreenShotTexture(tex =>
		// {
		//     var path = Path.Combine(Application.persistentDataPath, filename);
		//     File.WriteAllBytes(path, tex.EncodeToPNG());
		// 
		//     if (completionHandler != null)
		//         completionHandler(path);
		// }));
		LifecycleHelper_t2C8530CA0073EF4CA43BCC651EB399608723D373 * L_8;
		L_8 = AbstractManager_get_coroutineSurrogate_mB9BFA65B8657DA189D5DAF19C232DFD74FCC9B9D(/*hidden argument*/NULL);
		U3CU3Ec__DisplayClass1_0_t12FD0ED7CB284735884F6EB4295688EF22EA4F49 * L_9 = V_1;
		Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA * L_10 = (Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA *)il2cpp_codegen_object_new(Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA_il2cpp_TypeInfo_var);
		Action_1__ctor_mB51C80DFB46F2AD9DB1B2885836FA5C92D2451FD(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass1_0_U3CtakeScreenShotU3Eb__0_m39CD9E16762EFAFFFB69AB6CF4E8C6A273BE71F5_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mB51C80DFB46F2AD9DB1B2885836FA5C92D2451FD_RuntimeMethod_var);
		RuntimeObject* L_11;
		L_11 = EtceteraBinding_getScreenShotTexture_mEB8CBC75807AFA496164090CE4F488AA53072EEF(L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_12;
		L_12 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_8, L_11, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_12);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005f:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object Prime31.EtceteraBinding/<takeScreenShot>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CtakeScreenShotU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7262840F8498451C6DE9869E93709F191EB06316 (U3CtakeScreenShotU3Ed__1_tFA00614386A052E5278DA0E689EB3B4CB03679BB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Prime31.EtceteraBinding/<takeScreenShot>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CtakeScreenShotU3Ed__1_System_Collections_IEnumerator_Reset_mB47BBEC0C9D44BB3B7541EBAFBBC4682482079F4 (U3CtakeScreenShotU3Ed__1_tFA00614386A052E5278DA0E689EB3B4CB03679BB * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CtakeScreenShotU3Ed__1_System_Collections_IEnumerator_Reset_mB47BBEC0C9D44BB3B7541EBAFBBC4682482079F4_RuntimeMethod_var)));
	}
}
// System.Object Prime31.EtceteraBinding/<takeScreenShot>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CtakeScreenShotU3Ed__1_System_Collections_IEnumerator_get_Current_m0C8AE44327CB84627BC177CBD887B8B6412419FB (U3CtakeScreenShotU3Ed__1_tFA00614386A052E5278DA0E689EB3B4CB03679BB * __this, const RuntimeMethod* method)
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
// System.Void Prime31.EtceteraManager/<registerDeviceWithPushIO>d__85::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CregisterDeviceWithPushIOU3Ed__85__ctor_m56595E084DBD551E12587762CF4D14C091B017BE (U3CregisterDeviceWithPushIOU3Ed__85_t6719999B1823EC1E478A21477DB90F7A72802A50 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Prime31.EtceteraManager/<registerDeviceWithPushIO>d__85::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CregisterDeviceWithPushIOU3Ed__85_System_IDisposable_Dispose_m15641CFF73903075DD498A0A613DA8F6B8EC669B (U3CregisterDeviceWithPushIOU3Ed__85_t6719999B1823EC1E478A21477DB90F7A72802A50 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
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
		U3CregisterDeviceWithPushIOU3Ed__85_U3CU3Em__Finally1_m3464EC88BD4D3E56907484FF78489B78DDF68369(__this, /*hidden argument*/NULL);
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
// System.Boolean Prime31.EtceteraManager/<registerDeviceWithPushIO>d__85::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CregisterDeviceWithPushIOU3Ed__85_MoveNext_mE441EDD4993E2A81CDBF06C2F994ECE57A6C6B78 (U3CregisterDeviceWithPushIOU3Ed__85_t6719999B1823EC1E478A21477DB90F7A72802A50 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4536F687FC942BC5736C1A683383730A00C905F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A6BA9E9044D2055C873F8A8552B581B3F8661DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0015;
			}
		}

IL_000a:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_008b;
			}
		}

IL_000e:
		{
			V_0 = (bool)0;
			goto IL_00c7;
		}

IL_0015:
		{
			__this->set_U3CU3E1__state_0((-1));
			// var url = string.Format( "https:
			IL2CPP_RUNTIME_CLASS_INIT(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_il2cpp_TypeInfo_var);
			String_t* L_3 = ((EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_StaticFields*)il2cpp_codegen_static_fields_for(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_il2cpp_TypeInfo_var))->get_pushIOApiKey_30();
			String_t* L_4;
			L_4 = SystemInfo_get_deviceUniqueIdentifier_m12CA3C3D8C75E44FBFA73E2E34D9E743AF732B1E(/*hidden argument*/NULL);
			String_t* L_5;
			L_5 = EtceteraManager_get_deviceToken_m5EE3B8556937441B6E1558E5AE308F5344B08B24_inline(/*hidden argument*/NULL);
			String_t* L_6;
			L_6 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteral4536F687FC942BC5736C1A683383730A00C905F2, L_3, L_4, L_5, /*hidden argument*/NULL);
			V_2 = L_6;
			// if( pushIOCategories != null && pushIOCategories.Length > 0 )
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = ((EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_StaticFields*)il2cpp_codegen_static_fields_for(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_il2cpp_TypeInfo_var))->get_pushIOCategories_31();
			if (!L_7)
			{
				goto IL_0060;
			}
		}

IL_003d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_il2cpp_TypeInfo_var);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = ((EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_StaticFields*)il2cpp_codegen_static_fields_for(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_il2cpp_TypeInfo_var))->get_pushIOCategories_31();
			NullCheck(L_8);
			if (!(((RuntimeArray*)L_8)->max_length))
			{
				goto IL_0060;
			}
		}

IL_0045:
		{
			// url += "&c=" + string.Join( ",", pushIOCategories );
			String_t* L_9 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_il2cpp_TypeInfo_var);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = ((EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_StaticFields*)il2cpp_codegen_static_fields_for(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_il2cpp_TypeInfo_var))->get_pushIOCategories_31();
			String_t* L_11;
			L_11 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_10, /*hidden argument*/NULL);
			String_t* L_12;
			L_12 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_9, _stringLiteral5A6BA9E9044D2055C873F8A8552B581B3F8661DC, L_11, /*hidden argument*/NULL);
			V_2 = L_12;
		}

IL_0060:
		{
			// using( var www = new WWW( url ) )
			String_t* L_13 = V_2;
			WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_14 = (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 *)il2cpp_codegen_object_new(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
			WWW__ctor_mE77AD6C372CC76F48A893C5E2F91A81193A9F8C5(L_14, L_13, /*hidden argument*/NULL);
			__this->set_U3CwwwU3E5__2_2(L_14);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return www;
			WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_15 = __this->get_U3CwwwU3E5__2_2();
			__this->set_U3CU3E2__current_1(L_15);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_00c7;
		}

IL_008b:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// if( pushIORegistrationCompletedEvent != null )
			IL2CPP_RUNTIME_CLASS_INIT(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_il2cpp_TypeInfo_var);
			Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_16 = ((EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_StaticFields*)il2cpp_codegen_static_fields_for(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_il2cpp_TypeInfo_var))->get_pushIORegistrationCompletedEvent_22();
			if (!L_16)
			{
				goto IL_00af;
			}
		}

IL_009a:
		{
			// pushIORegistrationCompletedEvent( www.error );
			IL2CPP_RUNTIME_CLASS_INIT(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_il2cpp_TypeInfo_var);
			Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_17 = ((EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_StaticFields*)il2cpp_codegen_static_fields_for(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_il2cpp_TypeInfo_var))->get_pushIORegistrationCompletedEvent_22();
			WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_18 = __this->get_U3CwwwU3E5__2_2();
			NullCheck(L_18);
			String_t* L_19;
			L_19 = WWW_get_error_mB278F5EC90EF99FEF70D80112940CFB49E79C9BC(L_18, /*hidden argument*/NULL);
			NullCheck(L_17);
			Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_17, L_19, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		}

IL_00af:
		{
			// }
			U3CregisterDeviceWithPushIOU3Ed__85_U3CU3Em__Finally1_m3464EC88BD4D3E56907484FF78489B78DDF68369(__this, /*hidden argument*/NULL);
			__this->set_U3CwwwU3E5__2_2((WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 *)NULL);
			// }
			V_0 = (bool)0;
			goto IL_00c7;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00c0;
	}

FAULT_00c0:
	{ // begin fault (depth: 1)
		U3CregisterDeviceWithPushIOU3Ed__85_System_IDisposable_Dispose_m15641CFF73903075DD498A0A613DA8F6B8EC669B(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(192)
	} // end fault
	IL2CPP_CLEANUP(192)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00c7:
	{
		bool L_20 = V_0;
		return L_20;
	}
}
// System.Void Prime31.EtceteraManager/<registerDeviceWithPushIO>d__85::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CregisterDeviceWithPushIOU3Ed__85_U3CU3Em__Finally1_m3464EC88BD4D3E56907484FF78489B78DDF68369 (U3CregisterDeviceWithPushIOU3Ed__85_t6719999B1823EC1E478A21477DB90F7A72802A50 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_0 = __this->get_U3CwwwU3E5__2_2();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_1 = __this->get_U3CwwwU3E5__2_2();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Object Prime31.EtceteraManager/<registerDeviceWithPushIO>d__85::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CregisterDeviceWithPushIOU3Ed__85_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3C43212242B5EF4953A3E79BFFB2159233E8659E (U3CregisterDeviceWithPushIOU3Ed__85_t6719999B1823EC1E478A21477DB90F7A72802A50 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Prime31.EtceteraManager/<registerDeviceWithPushIO>d__85::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CregisterDeviceWithPushIOU3Ed__85_System_Collections_IEnumerator_Reset_m4BCE141CD0A096773A7E4C2CA8F647E8145F0B6D (U3CregisterDeviceWithPushIOU3Ed__85_t6719999B1823EC1E478A21477DB90F7A72802A50 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CregisterDeviceWithPushIOU3Ed__85_System_Collections_IEnumerator_Reset_m4BCE141CD0A096773A7E4C2CA8F647E8145F0B6D_RuntimeMethod_var)));
	}
}
// System.Object Prime31.EtceteraManager/<registerDeviceWithPushIO>d__85::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CregisterDeviceWithPushIOU3Ed__85_System_Collections_IEnumerator_get_Current_m42127DB856B256549982A8401E953589E3657199 (U3CregisterDeviceWithPushIOU3Ed__85_t6719999B1823EC1E478A21477DB90F7A72802A50 * __this, const RuntimeMethod* method)
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
// System.Void Prime31.EtceteraManager/<textureFromFileAtPath>d__80::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CtextureFromFileAtPathU3Ed__80__ctor_m4E25FB3A6C20AFC707ED392517D66036A9D53BA9 (U3CtextureFromFileAtPathU3Ed__80_t5898EA95F2F8A5FC43FC1C32A72432B5A42F4B5E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Prime31.EtceteraManager/<textureFromFileAtPath>d__80::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CtextureFromFileAtPathU3Ed__80_System_IDisposable_Dispose_m8F122B083C6CF7F1387A2CF8D67EB76B623C0C77 (U3CtextureFromFileAtPathU3Ed__80_t5898EA95F2F8A5FC43FC1C32A72432B5A42F4B5E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
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
		U3CtextureFromFileAtPathU3Ed__80_U3CU3Em__Finally1_m8F82604B39CA6EAB3D4683B4659EB4D7D008610B(__this, /*hidden argument*/NULL);
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
// System.Boolean Prime31.EtceteraManager/<textureFromFileAtPath>d__80::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CtextureFromFileAtPathU3Ed__80_MoveNext_m9FBCDAD6E6B81309793B82CBC3284A9AF965AED1 (U3CtextureFromFileAtPathU3Ed__80_t5898EA95F2F8A5FC43FC1C32A72432B5A42F4B5E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m48902101D8F84E0110E1EA89779FE035FC93C460_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83E4E7F4262A162E81C1D90BAD0F92B8FD89D7FC);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0015;
			}
		}

IL_000a:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_004f;
			}
		}

IL_000e:
		{
			V_0 = (bool)0;
			goto IL_00d2;
		}

IL_0015:
		{
			__this->set_U3CU3E1__state_0((-1));
			// using( WWW www = new WWW( filePath ) )
			String_t* L_3 = __this->get_filePath_2();
			WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_4 = (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 *)il2cpp_codegen_object_new(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
			WWW__ctor_mE77AD6C372CC76F48A893C5E2F91A81193A9F8C5(L_4, L_3, /*hidden argument*/NULL);
			__this->set_U3CwwwU3E5__2_5(L_4);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return www;
			WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_5 = __this->get_U3CwwwU3E5__2_5();
			__this->set_U3CU3E2__current_1(L_5);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_00d2;
		}

IL_004f:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// if( !string.IsNullOrEmpty( www.error ) )
			WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_6 = __this->get_U3CwwwU3E5__2_5();
			NullCheck(L_6);
			String_t* L_7;
			L_7 = WWW_get_error_mB278F5EC90EF99FEF70D80112940CFB49E79C9BC(L_6, /*hidden argument*/NULL);
			bool L_8;
			L_8 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_7, /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_0087;
			}
		}

IL_0069:
		{
			// if( errorDel != null )
			Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_9 = __this->get_errorDel_3();
			if (!L_9)
			{
				goto IL_0087;
			}
		}

IL_0071:
		{
			// errorDel( www.error );
			Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_10 = __this->get_errorDel_3();
			WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_11 = __this->get_U3CwwwU3E5__2_5();
			NullCheck(L_11);
			String_t* L_12;
			L_12 = WWW_get_error_mB278F5EC90EF99FEF70D80112940CFB49E79C9BC(L_11, /*hidden argument*/NULL);
			NullCheck(L_10);
			Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_10, L_12, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		}

IL_0087:
		{
			// Texture2D tex = www.texture;
			WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_13 = __this->get_U3CwwwU3E5__2_5();
			NullCheck(L_13);
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_14;
			L_14 = WWW_get_texture_mC23FF88883698F3E6F7BED2733A2DB3B18F788E4(L_13, /*hidden argument*/NULL);
			V_2 = L_14;
			// if( tex != null )
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_15 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_16;
			L_16 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_15, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_16)
			{
				goto IL_00aa;
			}
		}

IL_009c:
		{
			// del( tex );
			Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA * L_17 = __this->get_del_4();
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_18 = V_2;
			NullCheck(L_17);
			Action_1_Invoke_m48902101D8F84E0110E1EA89779FE035FC93C460(L_17, L_18, /*hidden argument*/Action_1_Invoke_m48902101D8F84E0110E1EA89779FE035FC93C460_RuntimeMethod_var);
			goto IL_00ba;
		}

IL_00aa:
		{
			// errorDel( "www.texture was null. Texture not loaded" );
			Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_19 = __this->get_errorDel_3();
			NullCheck(L_19);
			Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_19, _stringLiteral83E4E7F4262A162E81C1D90BAD0F92B8FD89D7FC, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		}

IL_00ba:
		{
			// }
			U3CtextureFromFileAtPathU3Ed__80_U3CU3Em__Finally1_m8F82604B39CA6EAB3D4683B4659EB4D7D008610B(__this, /*hidden argument*/NULL);
			__this->set_U3CwwwU3E5__2_5((WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 *)NULL);
			// }
			V_0 = (bool)0;
			goto IL_00d2;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00cb;
	}

FAULT_00cb:
	{ // begin fault (depth: 1)
		U3CtextureFromFileAtPathU3Ed__80_System_IDisposable_Dispose_m8F122B083C6CF7F1387A2CF8D67EB76B623C0C77(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(203)
	} // end fault
	IL2CPP_CLEANUP(203)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00d2:
	{
		bool L_20 = V_0;
		return L_20;
	}
}
// System.Void Prime31.EtceteraManager/<textureFromFileAtPath>d__80::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CtextureFromFileAtPathU3Ed__80_U3CU3Em__Finally1_m8F82604B39CA6EAB3D4683B4659EB4D7D008610B (U3CtextureFromFileAtPathU3Ed__80_t5898EA95F2F8A5FC43FC1C32A72432B5A42F4B5E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_0 = __this->get_U3CwwwU3E5__2_5();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_1 = __this->get_U3CwwwU3E5__2_5();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Object Prime31.EtceteraManager/<textureFromFileAtPath>d__80::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CtextureFromFileAtPathU3Ed__80_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5BD55F6A92098571463A54ECE1CD9968187B70DF (U3CtextureFromFileAtPathU3Ed__80_t5898EA95F2F8A5FC43FC1C32A72432B5A42F4B5E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Prime31.EtceteraManager/<textureFromFileAtPath>d__80::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CtextureFromFileAtPathU3Ed__80_System_Collections_IEnumerator_Reset_mCFA1EAE62F6136A62655E8682167316C698E3160 (U3CtextureFromFileAtPathU3Ed__80_t5898EA95F2F8A5FC43FC1C32A72432B5A42F4B5E * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CtextureFromFileAtPathU3Ed__80_System_Collections_IEnumerator_Reset_mCFA1EAE62F6136A62655E8682167316C698E3160_RuntimeMethod_var)));
	}
}
// System.Object Prime31.EtceteraManager/<textureFromFileAtPath>d__80::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CtextureFromFileAtPathU3Ed__80_System_Collections_IEnumerator_get_Current_m6AB6849086B76B2619DE1EF21D298B9EDD126C9C (U3CtextureFromFileAtPathU3Ed__80_t5898EA95F2F8A5FC43FC1C32A72432B5A42F4B5E * __this, const RuntimeMethod* method)
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
// System.Void UnityStandardAssets.Effects.ExplosionFireAndDebris/<Start>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__4__ctor_m5DC11C364DE982FC5629EA37B0345C9E546638BF (U3CStartU3Ed__4_t429A895C8D792ABF3F125B2E7509BC6A8E33D0CE * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityStandardAssets.Effects.ExplosionFireAndDebris/<Start>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__4_System_IDisposable_Dispose_mF216282D7EF841700D69A1DA69A2BBEF658FE5C3 (U3CStartU3Ed__4_t429A895C8D792ABF3F125B2E7509BC6A8E33D0CE * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityStandardAssets.Effects.ExplosionFireAndDebris/<Start>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__4_MoveNext_m86E16C3B4F1DA306F00DEEDCAFC67F72CA237E24 (U3CStartU3Ed__4_t429A895C8D792ABF3F125B2E7509BC6A8E33D0CE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646_m552D01340683FACF6E28951C78FAFB573B5152A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ExplosionFireAndDebris_tF9445209A9E843303ED79A22E876FE0DB75A5811 * V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_6;
	memset((&V_6), 0, sizeof(V_6));
	ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* V_7 = NULL;
	int32_t V_8 = 0;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * V_9 = NULL;
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_10;
	memset((&V_10), 0, sizeof(V_10));
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  V_11;
	memset((&V_11), 0, sizeof(V_11));
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_12;
	memset((&V_12), 0, sizeof(V_12));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ExplosionFireAndDebris_tF9445209A9E843303ED79A22E876FE0DB75A5811 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00b2;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float multiplier = GetComponent<ParticleSystemMultiplier>().multiplier;
		ExplosionFireAndDebris_tF9445209A9E843303ED79A22E876FE0DB75A5811 * L_4 = V_1;
		NullCheck(L_4);
		ParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646 * L_5;
		L_5 = Component_GetComponent_TisParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646_m552D01340683FACF6E28951C78FAFB573B5152A5(L_4, /*hidden argument*/Component_GetComponent_TisParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646_m552D01340683FACF6E28951C78FAFB573B5152A5_RuntimeMethod_var);
		NullCheck(L_5);
		float L_6 = L_5->get_multiplier_4();
		__this->set_U3CmultiplierU3E5__2_3(L_6);
		// for (int n = 0; n < numDebrisPieces*multiplier; ++n)
		V_4 = 0;
		goto IL_008f;
	}

IL_0037:
	{
		// var prefab = debrisPrefabs[Random.Range(0, debrisPrefabs.Length)];
		ExplosionFireAndDebris_tF9445209A9E843303ED79A22E876FE0DB75A5811 * L_7 = V_1;
		NullCheck(L_7);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_8 = L_7->get_debrisPrefabs_4();
		ExplosionFireAndDebris_tF9445209A9E843303ED79A22E876FE0DB75A5811 * L_9 = V_1;
		NullCheck(L_9);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_10 = L_9->get_debrisPrefabs_4();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_12 = L_11;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		// Vector3 pos = transform.position + Random.insideUnitSphere*3*multiplier;
		ExplosionFireAndDebris_tF9445209A9E843303ED79A22E876FE0DB75A5811 * L_14 = V_1;
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Random_get_insideUnitSphere_m43E5AE1F6A6CFA892BAE6E3ED71BEBFCE308CE90(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_17, (3.0f), /*hidden argument*/NULL);
		float L_19 = __this->get_U3CmultiplierU3E5__2_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_18, L_19, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_16, L_20, /*hidden argument*/NULL);
		V_5 = L_21;
		// Quaternion rot = Random.rotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_22;
		L_22 = Random_get_rotation_m82FE89E3F983E0212C5D67ECFB8F2B179F1818E5(/*hidden argument*/NULL);
		V_6 = L_22;
		// Instantiate(prefab, pos, rot);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = V_5;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_24 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30(L_13, L_23, L_24, /*hidden argument*/Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30_RuntimeMethod_var);
		// for (int n = 0; n < numDebrisPieces*multiplier; ++n)
		int32_t L_26 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_008f:
	{
		// for (int n = 0; n < numDebrisPieces*multiplier; ++n)
		int32_t L_27 = V_4;
		ExplosionFireAndDebris_tF9445209A9E843303ED79A22E876FE0DB75A5811 * L_28 = V_1;
		NullCheck(L_28);
		int32_t L_29 = L_28->get_numDebrisPieces_6();
		float L_30 = __this->get_U3CmultiplierU3E5__2_3();
		if ((((float)((float)((float)L_27))) < ((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_29)), (float)L_30)))))
		{
			goto IL_0037;
		}
	}
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00b2:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float r = 10*multiplier;
		float L_31 = __this->get_U3CmultiplierU3E5__2_3();
		V_2 = ((float)il2cpp_codegen_multiply((float)(10.0f), (float)L_31));
		// var cols = Physics.OverlapSphere(transform.position, r);
		ExplosionFireAndDebris_tF9445209A9E843303ED79A22E876FE0DB75A5811 * L_32 = V_1;
		NullCheck(L_32);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_33, /*hidden argument*/NULL);
		float L_35 = V_2;
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_36;
		L_36 = Physics_OverlapSphere_mE4A0577DF7C0681DE7FFC4F2A2C1BFB8D402CA0C(L_34, L_35, /*hidden argument*/NULL);
		// foreach (var col in cols)
		V_7 = L_36;
		V_8 = 0;
		goto IL_0159;
	}

IL_00de:
	{
		// foreach (var col in cols)
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_37 = V_7;
		int32_t L_38 = V_8;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_9 = L_40;
		// if (numFires > 0)
		ExplosionFireAndDebris_tF9445209A9E843303ED79A22E876FE0DB75A5811 * L_41 = V_1;
		NullCheck(L_41);
		int32_t L_42 = L_41->get_numFires_7();
		if ((((int32_t)L_42) <= ((int32_t)0)))
		{
			goto IL_0153;
		}
	}
	{
		// Ray fireRay = new Ray(transform.position, col.transform.position - transform.position);
		ExplosionFireAndDebris_tF9445209A9E843303ED79A22E876FE0DB75A5811 * L_43 = V_1;
		NullCheck(L_43);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
		L_44 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_43, /*hidden argument*/NULL);
		NullCheck(L_44);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_44, /*hidden argument*/NULL);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_46 = V_9;
		NullCheck(L_46);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47;
		L_47 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_47, /*hidden argument*/NULL);
		ExplosionFireAndDebris_tF9445209A9E843303ED79A22E876FE0DB75A5811 * L_49 = V_1;
		NullCheck(L_49);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_50;
		L_50 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_49, /*hidden argument*/NULL);
		NullCheck(L_50);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		L_51 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_50, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_48, L_51, /*hidden argument*/NULL);
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_11), L_45, L_52, /*hidden argument*/NULL);
		// if (col.Raycast(fireRay, out fireHit, r))
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_53 = V_9;
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_54 = V_11;
		float L_55 = V_2;
		NullCheck(L_53);
		bool L_56;
		L_56 = Collider_Raycast_m41CA5C3C07B92F5325CB81890BE3A611C3C70784(L_53, L_54, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_10), L_55, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_0153;
		}
	}
	{
		// AddFire(col.transform, fireHit.point, fireHit.normal);
		ExplosionFireAndDebris_tF9445209A9E843303ED79A22E876FE0DB75A5811 * L_57 = V_1;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_58 = V_9;
		NullCheck(L_58);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_59;
		L_59 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_58, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60;
		L_60 = RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_10), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		L_61 = RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_10), /*hidden argument*/NULL);
		NullCheck(L_57);
		ExplosionFireAndDebris_AddFire_mEAA60ADA0DC8131CF46299E1777316B9A1AA4C47(L_57, L_59, L_60, L_61, /*hidden argument*/NULL);
		// numFires--;
		ExplosionFireAndDebris_tF9445209A9E843303ED79A22E876FE0DB75A5811 * L_62 = V_1;
		ExplosionFireAndDebris_tF9445209A9E843303ED79A22E876FE0DB75A5811 * L_63 = V_1;
		NullCheck(L_63);
		int32_t L_64 = L_63->get_numFires_7();
		NullCheck(L_62);
		L_62->set_numFires_7(((int32_t)il2cpp_codegen_subtract((int32_t)L_64, (int32_t)1)));
	}

IL_0153:
	{
		int32_t L_65 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1));
	}

IL_0159:
	{
		// foreach (var col in cols)
		int32_t L_66 = V_8;
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_67 = V_7;
		NullCheck(L_67);
		if ((((int32_t)L_66) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_67)->max_length))))))
		{
			goto IL_00de;
		}
	}
	{
		// float testR = 0;
		V_3 = (0.0f);
		goto IL_01c2;
	}

IL_016c:
	{
		// Ray fireRay = new Ray(transform.position + Vector3.up, Random.onUnitSphere);
		ExplosionFireAndDebris_tF9445209A9E843303ED79A22E876FE0DB75A5811 * L_68 = V_1;
		NullCheck(L_68);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_69;
		L_69 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_68, /*hidden argument*/NULL);
		NullCheck(L_69);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_70;
		L_70 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_69, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_71;
		L_71 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72;
		L_72 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_70, L_71, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_73;
		L_73 = Random_get_onUnitSphere_m909066B4EAF5EE0A05D3C1DCBDADC55A2D6A4EED(/*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_74;
		memset((&L_74), 0, sizeof(L_74));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_74), L_72, L_73, /*hidden argument*/NULL);
		// if (Physics.Raycast(fireRay, out fireHit, testR))
		float L_75 = V_3;
		bool L_76;
		L_76 = Physics_Raycast_mA64F8C30681E3A6A8F2B7EDE592FE7BBC0D354F4(L_74, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_12), L_75, /*hidden argument*/NULL);
		if (!L_76)
		{
			goto IL_01b8;
		}
	}
	{
		// AddFire(null, fireHit.point, fireHit.normal);
		ExplosionFireAndDebris_tF9445209A9E843303ED79A22E876FE0DB75A5811 * L_77 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_78;
		L_78 = RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_12), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_79;
		L_79 = RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_12), /*hidden argument*/NULL);
		NullCheck(L_77);
		ExplosionFireAndDebris_AddFire_mEAA60ADA0DC8131CF46299E1777316B9A1AA4C47(L_77, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, L_78, L_79, /*hidden argument*/NULL);
		// numFires--;
		ExplosionFireAndDebris_tF9445209A9E843303ED79A22E876FE0DB75A5811 * L_80 = V_1;
		ExplosionFireAndDebris_tF9445209A9E843303ED79A22E876FE0DB75A5811 * L_81 = V_1;
		NullCheck(L_81);
		int32_t L_82 = L_81->get_numFires_7();
		NullCheck(L_80);
		L_80->set_numFires_7(((int32_t)il2cpp_codegen_subtract((int32_t)L_82, (int32_t)1)));
	}

IL_01b8:
	{
		// testR += r*.1f;
		float L_83 = V_3;
		float L_84 = V_2;
		V_3 = ((float)il2cpp_codegen_add((float)L_83, (float)((float)il2cpp_codegen_multiply((float)L_84, (float)(0.100000001f)))));
	}

IL_01c2:
	{
		// while (numFires > 0 && testR < r)
		ExplosionFireAndDebris_tF9445209A9E843303ED79A22E876FE0DB75A5811 * L_85 = V_1;
		NullCheck(L_85);
		int32_t L_86 = L_85->get_numFires_7();
		if ((((int32_t)L_86) <= ((int32_t)0)))
		{
			goto IL_01cf;
		}
	}
	{
		float L_87 = V_3;
		float L_88 = V_2;
		if ((((float)L_87) < ((float)L_88)))
		{
			goto IL_016c;
		}
	}

IL_01cf:
	{
		// }
		return (bool)0;
	}
}
// System.Object UnityStandardAssets.Effects.ExplosionFireAndDebris/<Start>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9CD55C9B7A75FD557E6E89434FD973925FD67D52 (U3CStartU3Ed__4_t429A895C8D792ABF3F125B2E7509BC6A8E33D0CE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityStandardAssets.Effects.ExplosionFireAndDebris/<Start>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__4_System_Collections_IEnumerator_Reset_m642B2AA2E5737E4F7B91EEF4B86120332083FC6E (U3CStartU3Ed__4_t429A895C8D792ABF3F125B2E7509BC6A8E33D0CE * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__4_System_Collections_IEnumerator_Reset_m642B2AA2E5737E4F7B91EEF4B86120332083FC6E_RuntimeMethod_var)));
	}
}
// System.Object UnityStandardAssets.Effects.ExplosionFireAndDebris/<Start>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__4_System_Collections_IEnumerator_get_Current_m111FBD72FA4B52C98E3BB4E96B4E3B0AED554071 (U3CStartU3Ed__4_t429A895C8D792ABF3F125B2E7509BC6A8E33D0CE * __this, const RuntimeMethod* method)
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
// System.Void UnityStandardAssets.Effects.Explosive/<OnCollisionEnter>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnCollisionEnterU3Ed__8__ctor_m40A369AEF1FCCB9B4B7C6DFEF96C37427939661D (U3COnCollisionEnterU3Ed__8_t020C52CD35FC1E4A50E2B7149EBA881BC3B6616C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityStandardAssets.Effects.Explosive/<OnCollisionEnter>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnCollisionEnterU3Ed__8_System_IDisposable_Dispose_m8F62BADA07C363E4A54B867194AAD3357678D4EA (U3COnCollisionEnterU3Ed__8_t020C52CD35FC1E4A50E2B7149EBA881BC3B6616C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityStandardAssets.Effects.Explosive/<OnCollisionEnter>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COnCollisionEnterU3Ed__8_MoveNext_mAF490E865808F34207DFD646D10799E7BCADDEBD (U3COnCollisionEnterU3Ed__8_t020C52CD35FC1E4A50E2B7149EBA881BC3B6616C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral576ACDEAB8D545E1BF81B5822A74D4E20D12D841);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Explosive_t35EC7643F888FA175DDBE61BE15F0662512C0BC0 * V_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Explosive_t35EC7643F888FA175DDBE61BE15F0662512C0BC0 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00fb;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (enabled)
		Explosive_t35EC7643F888FA175DDBE61BE15F0662512C0BC0 * L_4 = V_1;
		NullCheck(L_4);
		bool L_5;
		L_5 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_00eb;
		}
	}
	{
		// if (col.contacts.Length > 0)
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_6 = __this->get_col_3();
		NullCheck(L_6);
		ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* L_7;
		L_7 = Collision_get_contacts_m8C3D39F3332DD2AC623A9FB5F2127CE2754AF54B(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		if (!(((RuntimeArray*)L_7)->max_length))
		{
			goto IL_00eb;
		}
	}
	{
		// float velocityAlongCollisionNormal =
		//     Vector3.Project(col.relativeVelocity, col.contacts[0].normal).magnitude;
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_8 = __this->get_col_3();
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Collision_get_relativeVelocity_m0B0F8FA1AFAF7AB3B76083932D63A3FC1FA22442(L_8, /*hidden argument*/NULL);
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_10 = __this->get_col_3();
		NullCheck(L_10);
		ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* L_11;
		L_11 = Collision_get_contacts_m8C3D39F3332DD2AC623A9FB5F2127CE2754AF54B(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = ContactPoint_get_normal_m0561937E45F5356C7BB90D861422BD76B36D037A((ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 *)((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_Project_m57D54B16F36E620C294F4B209CD4C8E46A58D1B6(L_9, L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		float L_14;
		L_14 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
		// if (velocityAlongCollisionNormal > detonationImpactVelocity || m_Exploded)
		Explosive_t35EC7643F888FA175DDBE61BE15F0662512C0BC0 * L_15 = V_1;
		NullCheck(L_15);
		float L_16 = L_15->get_detonationImpactVelocity_5();
		if ((((float)L_14) > ((float)L_16)))
		{
			goto IL_007b;
		}
	}
	{
		Explosive_t35EC7643F888FA175DDBE61BE15F0662512C0BC0 * L_17 = V_1;
		NullCheck(L_17);
		bool L_18 = L_17->get_m_Exploded_9();
		if (!L_18)
		{
			goto IL_00eb;
		}
	}

IL_007b:
	{
		// if (!m_Exploded)
		Explosive_t35EC7643F888FA175DDBE61BE15F0662512C0BC0 * L_19 = V_1;
		NullCheck(L_19);
		bool L_20 = L_19->get_m_Exploded_9();
		if (L_20)
		{
			goto IL_00eb;
		}
	}
	{
		// Instantiate(explosionPrefab, col.contacts[0].point,
		//             Quaternion.LookRotation(col.contacts[0].normal));
		Explosive_t35EC7643F888FA175DDBE61BE15F0662512C0BC0 * L_21 = V_1;
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = L_21->get_explosionPrefab_4();
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_23 = __this->get_col_3();
		NullCheck(L_23);
		ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* L_24;
		L_24 = Collision_get_contacts_m8C3D39F3332DD2AC623A9FB5F2127CE2754AF54B(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = ContactPoint_get_point_mEA976D5E3BC57FAB78F68BE0AA17A97293AEA5BC((ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 *)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_26 = __this->get_col_3();
		NullCheck(L_26);
		ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* L_27;
		L_27 = Collision_get_contacts_m8C3D39F3332DD2AC623A9FB5F2127CE2754AF54B(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = ContactPoint_get_normal_m0561937E45F5356C7BB90D861422BD76B36D037A((ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 *)((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_29;
		L_29 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF(L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30(L_22, L_25, L_29, /*hidden argument*/Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30_RuntimeMethod_var);
		// m_Exploded = true;
		Explosive_t35EC7643F888FA175DDBE61BE15F0662512C0BC0 * L_31 = V_1;
		NullCheck(L_31);
		L_31->set_m_Exploded_9((bool)1);
		// SendMessage("Immobilize");
		Explosive_t35EC7643F888FA175DDBE61BE15F0662512C0BC0 * L_32 = V_1;
		NullCheck(L_32);
		Component_SendMessage_m3B002D579E5933EEFCA4024A1845CACB4FBBC208(L_32, _stringLiteral576ACDEAB8D545E1BF81B5822A74D4E20D12D841, /*hidden argument*/NULL);
		// if (reset)
		Explosive_t35EC7643F888FA175DDBE61BE15F0662512C0BC0 * L_33 = V_1;
		NullCheck(L_33);
		bool L_34 = L_33->get_reset_7();
		if (!L_34)
		{
			goto IL_00eb;
		}
	}
	{
		// m_ObjectResetter.DelayedReset(resetTimeDelay);
		Explosive_t35EC7643F888FA175DDBE61BE15F0662512C0BC0 * L_35 = V_1;
		NullCheck(L_35);
		ObjectResetter_t6E96E79B7F57F740C3C7C6C6FEA9DEE271C994A1 * L_36 = L_35->get_m_ObjectResetter_10();
		Explosive_t35EC7643F888FA175DDBE61BE15F0662512C0BC0 * L_37 = V_1;
		NullCheck(L_37);
		float L_38 = L_37->get_resetTimeDelay_8();
		NullCheck(L_36);
		ObjectResetter_DelayedReset_mB3096EA6641BDDC0F8C19A151664986BA50EC048(L_36, L_38, /*hidden argument*/NULL);
	}

IL_00eb:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00fb:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object UnityStandardAssets.Effects.Explosive/<OnCollisionEnter>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3COnCollisionEnterU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4336F3D4FD72C776C90C802A90565E781A897C7A (U3COnCollisionEnterU3Ed__8_t020C52CD35FC1E4A50E2B7149EBA881BC3B6616C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityStandardAssets.Effects.Explosive/<OnCollisionEnter>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnCollisionEnterU3Ed__8_System_Collections_IEnumerator_Reset_mA1951B8237268D37AEDD21A5D281B4555EC7035A (U3COnCollisionEnterU3Ed__8_t020C52CD35FC1E4A50E2B7149EBA881BC3B6616C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COnCollisionEnterU3Ed__8_System_Collections_IEnumerator_Reset_mA1951B8237268D37AEDD21A5D281B4555EC7035A_RuntimeMethod_var)));
	}
}
// System.Object UnityStandardAssets.Effects.Explosive/<OnCollisionEnter>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3COnCollisionEnterU3Ed__8_System_Collections_IEnumerator_get_Current_mC7893C3C23CA863910DF0E51275BC391576AECC9 (U3COnCollisionEnterU3Ed__8_t020C52CD35FC1E4A50E2B7149EBA881BC3B6616C * __this, const RuntimeMethod* method)
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
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickDown>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFOVKickDownU3Ed__10__ctor_mDCCB7938A657CBAB8C35B8F0B8C90E030D6F2341 (U3CFOVKickDownU3Ed__10_tC50C8A96B0B76700D84924BB8C7BC96470490BCA * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickDown>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFOVKickDownU3Ed__10_System_IDisposable_Dispose_m4D990190B7AA68B6B0AD4809FC200311B2E00475 (U3CFOVKickDownU3Ed__10_tC50C8A96B0B76700D84924BB8C7BC96470490BCA * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityStandardAssets.Utility.FOVKick/<FOVKickDown>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFOVKickDownU3Ed__10_MoveNext_m2BF13168E9E141B3FCA7848225842CCDB0D52850 (U3CFOVKickDownU3Ed__10_tC50C8A96B0B76700D84924BB8C7BC96470490BCA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_009e;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float t = Mathf.Abs((Camera.fieldOfView - originalFov)/FOVIncrease);
		FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE * L_4 = V_1;
		NullCheck(L_4);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5 = L_4->get_Camera_0();
		NullCheck(L_5);
		float L_6;
		L_6 = Camera_get_fieldOfView_mA9BA910800B2E33B572929CDA9A12CE596353920(L_5, /*hidden argument*/NULL);
		FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE * L_7 = V_1;
		NullCheck(L_7);
		float L_8 = L_7->get_originalFov_1();
		FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE * L_9 = V_1;
		NullCheck(L_9);
		float L_10 = L_9->get_FOVIncrease_2();
		float L_11;
		L_11 = fabsf(((float)((float)((float)il2cpp_codegen_subtract((float)L_6, (float)L_8))/(float)L_10)));
		__this->set_U3CtU3E5__2_3(L_11);
		goto IL_00a5;
	}

IL_0047:
	{
		// Camera.fieldOfView = originalFov + (IncreaseCurve.Evaluate(t/TimeToDecrease)*FOVIncrease);
		FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE * L_12 = V_1;
		NullCheck(L_12);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_13 = L_12->get_Camera_0();
		FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE * L_14 = V_1;
		NullCheck(L_14);
		float L_15 = L_14->get_originalFov_1();
		FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE * L_16 = V_1;
		NullCheck(L_16);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_17 = L_16->get_IncreaseCurve_5();
		float L_18 = __this->get_U3CtU3E5__2_3();
		FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE * L_19 = V_1;
		NullCheck(L_19);
		float L_20 = L_19->get_TimeToDecrease_4();
		NullCheck(L_17);
		float L_21;
		L_21 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_17, ((float)((float)L_18/(float)L_20)), /*hidden argument*/NULL);
		FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE * L_22 = V_1;
		NullCheck(L_22);
		float L_23 = L_22->get_FOVIncrease_2();
		NullCheck(L_13);
		Camera_set_fieldOfView_m138FE103CAC4B803F39E4CF579609A5C3FEB5E49(L_13, ((float)il2cpp_codegen_add((float)L_15, (float)((float)il2cpp_codegen_multiply((float)L_21, (float)L_23)))), /*hidden argument*/NULL);
		// t -= Time.deltaTime;
		float L_24 = __this->get_U3CtU3E5__2_3();
		float L_25;
		L_25 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CtU3E5__2_3(((float)il2cpp_codegen_subtract((float)L_24, (float)L_25)));
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_26 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_26, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_26);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_009e:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00a5:
	{
		// while (t > 0)
		float L_27 = __this->get_U3CtU3E5__2_3();
		if ((((float)L_27) > ((float)(0.0f))))
		{
			goto IL_0047;
		}
	}
	{
		// Camera.fieldOfView = originalFov;
		FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE * L_28 = V_1;
		NullCheck(L_28);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_29 = L_28->get_Camera_0();
		FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE * L_30 = V_1;
		NullCheck(L_30);
		float L_31 = L_30->get_originalFov_1();
		NullCheck(L_29);
		Camera_set_fieldOfView_m138FE103CAC4B803F39E4CF579609A5C3FEB5E49(L_29, L_31, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickDown>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFOVKickDownU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD2020D2328B608CA5CF6577DCB99254FD0A78F69 (U3CFOVKickDownU3Ed__10_tC50C8A96B0B76700D84924BB8C7BC96470490BCA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickDown>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFOVKickDownU3Ed__10_System_Collections_IEnumerator_Reset_mEECEC01E883D4B1F3B9253E705166E4B1982740A (U3CFOVKickDownU3Ed__10_tC50C8A96B0B76700D84924BB8C7BC96470490BCA * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFOVKickDownU3Ed__10_System_Collections_IEnumerator_Reset_mEECEC01E883D4B1F3B9253E705166E4B1982740A_RuntimeMethod_var)));
	}
}
// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickDown>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFOVKickDownU3Ed__10_System_Collections_IEnumerator_get_Current_mD14335881A48D20893BA16D3C92C740976999025 (U3CFOVKickDownU3Ed__10_tC50C8A96B0B76700D84924BB8C7BC96470490BCA * __this, const RuntimeMethod* method)
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
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickUp>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFOVKickUpU3Ed__9__ctor_m035EDD9D6A32FE55E191B3DE7004D28781FE71FF (U3CFOVKickUpU3Ed__9_t9D0D912A198B1DB69C2A7BBDEA7456C2BB6A6B97 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickUp>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFOVKickUpU3Ed__9_System_IDisposable_Dispose_m528E3E1DF010668BCFA31824E35B4755924B6219 (U3CFOVKickUpU3Ed__9_t9D0D912A198B1DB69C2A7BBDEA7456C2BB6A6B97 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityStandardAssets.Utility.FOVKick/<FOVKickUp>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFOVKickUpU3Ed__9_MoveNext_m67F60A3A81C6EFBB9C6C416DEDB4303A9E1ACF59 (U3CFOVKickUpU3Ed__9_t9D0D912A198B1DB69C2A7BBDEA7456C2BB6A6B97 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_009e;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float t = Mathf.Abs((Camera.fieldOfView - originalFov)/FOVIncrease);
		FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE * L_4 = V_1;
		NullCheck(L_4);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5 = L_4->get_Camera_0();
		NullCheck(L_5);
		float L_6;
		L_6 = Camera_get_fieldOfView_mA9BA910800B2E33B572929CDA9A12CE596353920(L_5, /*hidden argument*/NULL);
		FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE * L_7 = V_1;
		NullCheck(L_7);
		float L_8 = L_7->get_originalFov_1();
		FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE * L_9 = V_1;
		NullCheck(L_9);
		float L_10 = L_9->get_FOVIncrease_2();
		float L_11;
		L_11 = fabsf(((float)((float)((float)il2cpp_codegen_subtract((float)L_6, (float)L_8))/(float)L_10)));
		__this->set_U3CtU3E5__2_3(L_11);
		goto IL_00a5;
	}

IL_0047:
	{
		// Camera.fieldOfView = originalFov + (IncreaseCurve.Evaluate(t/TimeToIncrease)*FOVIncrease);
		FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE * L_12 = V_1;
		NullCheck(L_12);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_13 = L_12->get_Camera_0();
		FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE * L_14 = V_1;
		NullCheck(L_14);
		float L_15 = L_14->get_originalFov_1();
		FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE * L_16 = V_1;
		NullCheck(L_16);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_17 = L_16->get_IncreaseCurve_5();
		float L_18 = __this->get_U3CtU3E5__2_3();
		FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE * L_19 = V_1;
		NullCheck(L_19);
		float L_20 = L_19->get_TimeToIncrease_3();
		NullCheck(L_17);
		float L_21;
		L_21 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_17, ((float)((float)L_18/(float)L_20)), /*hidden argument*/NULL);
		FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE * L_22 = V_1;
		NullCheck(L_22);
		float L_23 = L_22->get_FOVIncrease_2();
		NullCheck(L_13);
		Camera_set_fieldOfView_m138FE103CAC4B803F39E4CF579609A5C3FEB5E49(L_13, ((float)il2cpp_codegen_add((float)L_15, (float)((float)il2cpp_codegen_multiply((float)L_21, (float)L_23)))), /*hidden argument*/NULL);
		// t += Time.deltaTime;
		float L_24 = __this->get_U3CtU3E5__2_3();
		float L_25;
		L_25 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CtU3E5__2_3(((float)il2cpp_codegen_add((float)L_24, (float)L_25)));
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_26 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_26, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_26);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_009e:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00a5:
	{
		// while (t < TimeToIncrease)
		float L_27 = __this->get_U3CtU3E5__2_3();
		FOVKick_tDB5D8CAE2D25556638622C7DBCA49469FDDF84DE * L_28 = V_1;
		NullCheck(L_28);
		float L_29 = L_28->get_TimeToIncrease_3();
		if ((((float)L_27) < ((float)L_29)))
		{
			goto IL_0047;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickUp>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFOVKickUpU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFC1B907D6E4CE657FE9E73657DC30763B074B36C (U3CFOVKickUpU3Ed__9_t9D0D912A198B1DB69C2A7BBDEA7456C2BB6A6B97 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickUp>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFOVKickUpU3Ed__9_System_Collections_IEnumerator_Reset_mC403C5EC7B39E7DE5C596BBD20D65FE5A8948184 (U3CFOVKickUpU3Ed__9_t9D0D912A198B1DB69C2A7BBDEA7456C2BB6A6B97 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFOVKickUpU3Ed__9_System_Collections_IEnumerator_Reset_mC403C5EC7B39E7DE5C596BBD20D65FE5A8948184_RuntimeMethod_var)));
	}
}
// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickUp>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFOVKickUpU3Ed__9_System_Collections_IEnumerator_get_Current_m791A10FF8A6CB9A308CDE5225E0188009BECD15C (U3CFOVKickUpU3Ed__9_t9D0D912A198B1DB69C2A7BBDEA7456C2BB6A6B97 * __this, const RuntimeMethod* method)
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
// System.Void UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoBobCycleU3Ed__4__ctor_m8F2CE9C920FEF5B53AC3F5E5BCA287D479288F5C (U3CDoBobCycleU3Ed__4_tA62D4FFE49541952306208027BE872CD4C667655 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoBobCycleU3Ed__4_System_IDisposable_Dispose_m7185D0397C45F998511E7249E5DA20750756A9BB (U3CDoBobCycleU3Ed__4_tA62D4FFE49541952306208027BE872CD4C667655 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDoBobCycleU3Ed__4_MoveNext_m059A73784A566F3114202E79A7C8394E13CEBF66 (U3CDoBobCycleU3Ed__4_tA62D4FFE49541952306208027BE872CD4C667655 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LerpControlledBob_t3A136B4FE24CC2F41EB6CFF54A2FDC0122E7A238 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		LerpControlledBob_t3A136B4FE24CC2F41EB6CFF54A2FDC0122E7A238 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_007f;
			}
			case 2:
			{
				goto IL_00ea;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float t = 0f;
		__this->set_U3CtU3E5__2_3((0.0f));
		goto IL_0086;
	}

IL_0036:
	{
		// m_Offset = Mathf.Lerp(0f, BobAmount, t/BobDuration);
		LerpControlledBob_t3A136B4FE24CC2F41EB6CFF54A2FDC0122E7A238 * L_3 = V_1;
		LerpControlledBob_t3A136B4FE24CC2F41EB6CFF54A2FDC0122E7A238 * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->get_BobAmount_1();
		float L_6 = __this->get_U3CtU3E5__2_3();
		LerpControlledBob_t3A136B4FE24CC2F41EB6CFF54A2FDC0122E7A238 * L_7 = V_1;
		NullCheck(L_7);
		float L_8 = L_7->get_BobDuration_0();
		float L_9;
		L_9 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616((0.0f), L_5, ((float)((float)L_6/(float)L_8)), /*hidden argument*/NULL);
		NullCheck(L_3);
		L_3->set_m_Offset_2(L_9);
		// t += Time.deltaTime;
		float L_10 = __this->get_U3CtU3E5__2_3();
		float L_11;
		L_11 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CtU3E5__2_3(((float)il2cpp_codegen_add((float)L_10, (float)L_11)));
		// yield return new WaitForFixedUpdate();
		WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * L_12 = (WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 *)il2cpp_codegen_object_new(WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5_il2cpp_TypeInfo_var);
		WaitForFixedUpdate__ctor_mB566493FB99A315BEF348791DE943A89E4B71F9C(L_12, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_12);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_007f:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0086:
	{
		// while (t < BobDuration)
		float L_13 = __this->get_U3CtU3E5__2_3();
		LerpControlledBob_t3A136B4FE24CC2F41EB6CFF54A2FDC0122E7A238 * L_14 = V_1;
		NullCheck(L_14);
		float L_15 = L_14->get_BobDuration_0();
		if ((((float)L_13) < ((float)L_15)))
		{
			goto IL_0036;
		}
	}
	{
		// t = 0f;
		__this->set_U3CtU3E5__2_3((0.0f));
		goto IL_00f1;
	}

IL_00a1:
	{
		// m_Offset = Mathf.Lerp(BobAmount, 0f, t/BobDuration);
		LerpControlledBob_t3A136B4FE24CC2F41EB6CFF54A2FDC0122E7A238 * L_16 = V_1;
		LerpControlledBob_t3A136B4FE24CC2F41EB6CFF54A2FDC0122E7A238 * L_17 = V_1;
		NullCheck(L_17);
		float L_18 = L_17->get_BobAmount_1();
		float L_19 = __this->get_U3CtU3E5__2_3();
		LerpControlledBob_t3A136B4FE24CC2F41EB6CFF54A2FDC0122E7A238 * L_20 = V_1;
		NullCheck(L_20);
		float L_21 = L_20->get_BobDuration_0();
		float L_22;
		L_22 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_18, (0.0f), ((float)((float)L_19/(float)L_21)), /*hidden argument*/NULL);
		NullCheck(L_16);
		L_16->set_m_Offset_2(L_22);
		// t += Time.deltaTime;
		float L_23 = __this->get_U3CtU3E5__2_3();
		float L_24;
		L_24 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CtU3E5__2_3(((float)il2cpp_codegen_add((float)L_23, (float)L_24)));
		// yield return new WaitForFixedUpdate();
		WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * L_25 = (WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 *)il2cpp_codegen_object_new(WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5_il2cpp_TypeInfo_var);
		WaitForFixedUpdate__ctor_mB566493FB99A315BEF348791DE943A89E4B71F9C(L_25, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_25);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00ea:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00f1:
	{
		// while (t < BobDuration)
		float L_26 = __this->get_U3CtU3E5__2_3();
		LerpControlledBob_t3A136B4FE24CC2F41EB6CFF54A2FDC0122E7A238 * L_27 = V_1;
		NullCheck(L_27);
		float L_28 = L_27->get_BobDuration_0();
		if ((((float)L_26) < ((float)L_28)))
		{
			goto IL_00a1;
		}
	}
	{
		// m_Offset = 0f;
		LerpControlledBob_t3A136B4FE24CC2F41EB6CFF54A2FDC0122E7A238 * L_29 = V_1;
		NullCheck(L_29);
		L_29->set_m_Offset_2((0.0f));
		// }
		return (bool)0;
	}
}
// System.Object UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDoBobCycleU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mED6C76C929B1A806645E5B78AFFA9C378E8E15FC (U3CDoBobCycleU3Ed__4_tA62D4FFE49541952306208027BE872CD4C667655 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoBobCycleU3Ed__4_System_Collections_IEnumerator_Reset_m2F77F4EA622835F4C42964113BC81DBCB832859E (U3CDoBobCycleU3Ed__4_tA62D4FFE49541952306208027BE872CD4C667655 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDoBobCycleU3Ed__4_System_Collections_IEnumerator_Reset_m2F77F4EA622835F4C42964113BC81DBCB832859E_RuntimeMethod_var)));
	}
}
// System.Object UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDoBobCycleU3Ed__4_System_Collections_IEnumerator_get_Current_m8B4900A75A1D658EC7C543E43AEC8B2A583A3614 (U3CDoBobCycleU3Ed__4_tA62D4FFE49541952306208027BE872CD4C667655 * __this, const RuntimeMethod* method)
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
// System.Void UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetCoroutineU3Ed__6__ctor_m0D978E94CB389A54C9DEB2D5E4373097959F524E (U3CResetCoroutineU3Ed__6_t08BA996BEEB8880D65ACED889627A520D4661892 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetCoroutineU3Ed__6_System_IDisposable_Dispose_m7356BA3589BD1E50ED419F18D58D97A39FA2F796 (U3CResetCoroutineU3Ed__6_t08BA996BEEB8880D65ACED889627A520D4661892 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CResetCoroutineU3Ed__6_MoveNext_m9B611A78ED507A9E90ACD22D46B4A93CD54F8DD8 (U3CResetCoroutineU3Ed__6_t08BA996BEEB8880D65ACED889627A520D4661892 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mF2B4E2828789B863B83BCBC705EDFAF6F3DCE21C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m37E02ADF41F0AFB1B9BF6BE8E4BC09D48405EFAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA74ACAA1F61DE0EB348EC03946685B0B6270CB36);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectResetter_t6E96E79B7F57F740C3C7C6C6FEA9DEE271C994A1 * V_1 = NULL;
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* V_2 = NULL;
	int32_t V_3 = 0;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_4 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ObjectResetter_t6E96E79B7F57F740C3C7C6C6FEA9DEE271C994A1 * L_1 = __this->get_U3CU3E4__this_3();
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
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(delay);
		float L_4 = __this->get_delay_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// foreach (var t in GetComponentsInChildren<Transform>())
		ObjectResetter_t6E96E79B7F57F740C3C7C6C6FEA9DEE271C994A1 * L_6 = V_1;
		NullCheck(L_6);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_7;
		L_7 = Component_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mF2B4E2828789B863B83BCBC705EDFAF6F3DCE21C(L_6, /*hidden argument*/Component_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mF2B4E2828789B863B83BCBC705EDFAF6F3DCE21C_RuntimeMethod_var);
		V_2 = L_7;
		V_3 = 0;
		goto IL_006a;
	}

IL_004a:
	{
		// foreach (var t in GetComponentsInChildren<Transform>())
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_4 = L_11;
		// if (!originalStructure.Contains(t))
		ObjectResetter_t6E96E79B7F57F740C3C7C6C6FEA9DEE271C994A1 * L_12 = V_1;
		NullCheck(L_12);
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_13 = L_12->get_originalStructure_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = V_4;
		NullCheck(L_13);
		bool L_15;
		L_15 = List_1_Contains_m37E02ADF41F0AFB1B9BF6BE8E4BC09D48405EFAD(L_13, L_14, /*hidden argument*/List_1_Contains_m37E02ADF41F0AFB1B9BF6BE8E4BC09D48405EFAD_RuntimeMethod_var);
		if (L_15)
		{
			goto IL_0066;
		}
	}
	{
		// t.parent = null;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = V_4;
		NullCheck(L_16);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_16, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, /*hidden argument*/NULL);
	}

IL_0066:
	{
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_006a:
	{
		// foreach (var t in GetComponentsInChildren<Transform>())
		int32_t L_18 = V_3;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_19 = V_2;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_004a;
		}
	}
	{
		// transform.position = originalPosition;
		ObjectResetter_t6E96E79B7F57F740C3C7C6C6FEA9DEE271C994A1 * L_20 = V_1;
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_20, /*hidden argument*/NULL);
		ObjectResetter_t6E96E79B7F57F740C3C7C6C6FEA9DEE271C994A1 * L_22 = V_1;
		NullCheck(L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = L_22->get_originalPosition_4();
		NullCheck(L_21);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_21, L_23, /*hidden argument*/NULL);
		// transform.rotation = originalRotation;
		ObjectResetter_t6E96E79B7F57F740C3C7C6C6FEA9DEE271C994A1 * L_24 = V_1;
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_24, /*hidden argument*/NULL);
		ObjectResetter_t6E96E79B7F57F740C3C7C6C6FEA9DEE271C994A1 * L_26 = V_1;
		NullCheck(L_26);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_27 = L_26->get_originalRotation_5();
		NullCheck(L_25);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_25, L_27, /*hidden argument*/NULL);
		// if (Rigidbody)
		ObjectResetter_t6E96E79B7F57F740C3C7C6C6FEA9DEE271C994A1 * L_28 = V_1;
		NullCheck(L_28);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_29 = L_28->get_Rigidbody_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00bf;
		}
	}
	{
		// Rigidbody.velocity = Vector3.zero;
		ObjectResetter_t6E96E79B7F57F740C3C7C6C6FEA9DEE271C994A1 * L_31 = V_1;
		NullCheck(L_31);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_32 = L_31->get_Rigidbody_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		NullCheck(L_32);
		Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D(L_32, L_33, /*hidden argument*/NULL);
		// Rigidbody.angularVelocity = Vector3.zero;
		ObjectResetter_t6E96E79B7F57F740C3C7C6C6FEA9DEE271C994A1 * L_34 = V_1;
		NullCheck(L_34);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_35 = L_34->get_Rigidbody_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		NullCheck(L_35);
		Rigidbody_set_angularVelocity_m3A40B7F195E9E217AE29A0964D7E7540E2E23080(L_35, L_36, /*hidden argument*/NULL);
	}

IL_00bf:
	{
		// SendMessage("Reset");
		ObjectResetter_t6E96E79B7F57F740C3C7C6C6FEA9DEE271C994A1 * L_37 = V_1;
		NullCheck(L_37);
		Component_SendMessage_m3B002D579E5933EEFCA4024A1845CACB4FBBC208(L_37, _stringLiteralA74ACAA1F61DE0EB348EC03946685B0B6270CB36, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CResetCoroutineU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m89237C279DF0E3A7A03B26791EB75C19825A37BE (U3CResetCoroutineU3Ed__6_t08BA996BEEB8880D65ACED889627A520D4661892 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetCoroutineU3Ed__6_System_Collections_IEnumerator_Reset_m9BE88AE5FABECABD61A9987DF663BCC4ACD32A51 (U3CResetCoroutineU3Ed__6_t08BA996BEEB8880D65ACED889627A520D4661892 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CResetCoroutineU3Ed__6_System_Collections_IEnumerator_Reset_m9BE88AE5FABECABD61A9987DF663BCC4ACD32A51_RuntimeMethod_var)));
	}
}
// System.Object UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CResetCoroutineU3Ed__6_System_Collections_IEnumerator_get_Current_m053C4EB27E2FBFF012BE8F89CE7F31998CF8DF33 (U3CResetCoroutineU3Ed__6_t08BA996BEEB8880D65ACED889627A520D4661892 * __this, const RuntimeMethod* method)
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
// System.Void UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__4__ctor_m5FD0A0D277670CE5926F544FFD436A79BC7AB42E (U3CStartU3Ed__4_tDF77A58D2C41E1BC6C66CE72DD6821F1777DFBC9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__4_System_IDisposable_Dispose_mE74F07CDF5034C75B0223DF64A0800BE6587DD58 (U3CStartU3Ed__4_tDF77A58D2C41E1BC6C66CE72DD6821F1777DFBC9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__4_MoveNext_mE17EB9133B11CAEA044A5280714AF9213BD580E9 (U3CStartU3Ed__4_tDF77A58D2C41E1BC6C66CE72DD6821F1777DFBC9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m75CC9D1656BD67C760E6D5EA89403C89B728E8F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral320E615ACBF6C20581547142E87C7F15192C284E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral886D451FEE0B74B41A884D708F8D40636E12BBE3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ParticleSystemDestroyer_t6264C19E82E9C2EA88A77D7F639BC48C3AA7C2E7 * V_1 = NULL;
	ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* V_2 = NULL;
	int32_t V_3 = 0;
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * V_4 = NULL;
	MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  V_5;
	memset((&V_5), 0, sizeof(V_5));
	MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  V_6;
	memset((&V_6), 0, sizeof(V_6));
	EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D  V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ParticleSystemDestroyer_t6264C19E82E9C2EA88A77D7F639BC48C3AA7C2E7 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00a8;
			}
			case 2:
			{
				goto IL_0126;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var systems = GetComponentsInChildren<ParticleSystem>();
		ParticleSystemDestroyer_t6264C19E82E9C2EA88A77D7F639BC48C3AA7C2E7 * L_3 = V_1;
		NullCheck(L_3);
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_4;
		L_4 = Component_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m75CC9D1656BD67C760E6D5EA89403C89B728E8F6(L_3, /*hidden argument*/Component_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m75CC9D1656BD67C760E6D5EA89403C89B728E8F6_RuntimeMethod_var);
		__this->set_U3CsystemsU3E5__2_3(L_4);
		// foreach (var system in systems)
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_5 = __this->get_U3CsystemsU3E5__2_3();
		V_2 = L_5;
		V_3 = 0;
		goto IL_0073;
	}

IL_0040:
	{
		// foreach (var system in systems)
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_6 = V_2;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_4 = L_9;
		// m_MaxLifetime = Mathf.Max(system.main.startLifetime.constant, m_MaxLifetime);
		ParticleSystemDestroyer_t6264C19E82E9C2EA88A77D7F639BC48C3AA7C2E7 * L_10 = V_1;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_11 = V_4;
		NullCheck(L_11);
		MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  L_12;
		L_12 = ParticleSystem_get_main_m8F17DCC63679B15CE548BE83332FDB6635AE74A0(L_11, /*hidden argument*/NULL);
		V_5 = L_12;
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_13;
		L_13 = MainModule_get_startLifetime_m5E45F78E690E61E6FC758FA927E0743FFC3262FA((MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *)(&V_5), /*hidden argument*/NULL);
		V_6 = L_13;
		float L_14;
		L_14 = MinMaxCurve_get_constant_mBC0C29DF6F1C6C999931E28BC1F8DD26BD3BB624((MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD *)(&V_6), /*hidden argument*/NULL);
		ParticleSystemDestroyer_t6264C19E82E9C2EA88A77D7F639BC48C3AA7C2E7 * L_15 = V_1;
		NullCheck(L_15);
		float L_16 = L_15->get_m_MaxLifetime_6();
		float L_17;
		L_17 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_14, L_16, /*hidden argument*/NULL);
		NullCheck(L_10);
		L_10->set_m_MaxLifetime_6(L_17);
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0073:
	{
		// foreach (var system in systems)
		int32_t L_19 = V_3;
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_20 = V_2;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))
		{
			goto IL_0040;
		}
	}
	{
		// float stopTime = Time.time + Random.Range(minDuration, maxDuration);
		float L_21;
		L_21 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		ParticleSystemDestroyer_t6264C19E82E9C2EA88A77D7F639BC48C3AA7C2E7 * L_22 = V_1;
		NullCheck(L_22);
		float L_23 = L_22->get_minDuration_4();
		ParticleSystemDestroyer_t6264C19E82E9C2EA88A77D7F639BC48C3AA7C2E7 * L_24 = V_1;
		NullCheck(L_24);
		float L_25 = L_24->get_maxDuration_5();
		float L_26;
		L_26 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_23, L_25, /*hidden argument*/NULL);
		__this->set_U3CstopTimeU3E5__3_4(((float)il2cpp_codegen_add((float)L_21, (float)L_26)));
		goto IL_00af;
	}

IL_0098:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00a8:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00af:
	{
		// while (Time.time < stopTime && !m_EarlyStop)
		float L_27;
		L_27 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_28 = __this->get_U3CstopTimeU3E5__3_4();
		if ((!(((float)L_27) < ((float)L_28))))
		{
			goto IL_00c4;
		}
	}
	{
		ParticleSystemDestroyer_t6264C19E82E9C2EA88A77D7F639BC48C3AA7C2E7 * L_29 = V_1;
		NullCheck(L_29);
		bool L_30 = L_29->get_m_EarlyStop_7();
		if (!L_30)
		{
			goto IL_0098;
		}
	}

IL_00c4:
	{
		// Debug.Log("stopping " + name);
		ParticleSystemDestroyer_t6264C19E82E9C2EA88A77D7F639BC48C3AA7C2E7 * L_31 = V_1;
		NullCheck(L_31);
		String_t* L_32;
		L_32 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_31, /*hidden argument*/NULL);
		String_t* L_33;
		L_33 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral886D451FEE0B74B41A884D708F8D40636E12BBE3, L_32, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_33, /*hidden argument*/NULL);
		// foreach (var system in systems)
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_34 = __this->get_U3CsystemsU3E5__2_3();
		V_2 = L_34;
		V_3 = 0;
		goto IL_00fa;
	}

IL_00e4:
	{
		// foreach (var system in systems)
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_35 = V_2;
		int32_t L_36 = V_3;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		// var emission = system.emission;
		NullCheck(L_38);
		EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D  L_39;
		L_39 = ParticleSystem_get_emission_m0BAA1EDF775A8712DA7D62BF3C42A2B1A6C96CA1(L_38, /*hidden argument*/NULL);
		V_7 = L_39;
		// emission.enabled = false;
		EmissionModule_set_enabled_mD9FD50C9F5EECD04B22D03E5C00C7DD64D2AC1F1((EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D *)(&V_7), (bool)0, /*hidden argument*/NULL);
		int32_t L_40 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_00fa:
	{
		// foreach (var system in systems)
		int32_t L_41 = V_3;
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_42 = V_2;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length))))))
		{
			goto IL_00e4;
		}
	}
	{
		// BroadcastMessage("Extinguish", SendMessageOptions.DontRequireReceiver);
		ParticleSystemDestroyer_t6264C19E82E9C2EA88A77D7F639BC48C3AA7C2E7 * L_43 = V_1;
		NullCheck(L_43);
		Component_BroadcastMessage_m96C3AD7C97CC435E02425F91EE4521AF83931001(L_43, _stringLiteral320E615ACBF6C20581547142E87C7F15192C284E, 1, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(m_MaxLifetime);
		ParticleSystemDestroyer_t6264C19E82E9C2EA88A77D7F639BC48C3AA7C2E7 * L_44 = V_1;
		NullCheck(L_44);
		float L_45 = L_44->get_m_MaxLifetime_6();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_46 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_46, L_45, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_46);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0126:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Destroy(gameObject);
		ParticleSystemDestroyer_t6264C19E82E9C2EA88A77D7F639BC48C3AA7C2E7 * L_47 = V_1;
		NullCheck(L_47);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48;
		L_48 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_47, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_48, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB8322385499CDDFCF7900E04094121626DEFCE57 (U3CStartU3Ed__4_tDF77A58D2C41E1BC6C66CE72DD6821F1777DFBC9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__4_System_Collections_IEnumerator_Reset_m2BB59D8DCF48F964C94151BCA2E18260F1CA05F2 (U3CStartU3Ed__4_tDF77A58D2C41E1BC6C66CE72DD6821F1777DFBC9 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__4_System_Collections_IEnumerator_Reset_m2BB59D8DCF48F964C94151BCA2E18260F1CA05F2_RuntimeMethod_var)));
	}
}
// System.Object UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__4_System_Collections_IEnumerator_get_Current_m509B0D76BB344E857B4CA66C175662D62439D459 (U3CStartU3Ed__4_tDF77A58D2C41E1BC6C66CE72DD6821F1777DFBC9 * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Activate>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActivateU3Ed__5__ctor_mB368B156BA329ADF2210F1CF2833895EC6378B4C (U3CActivateU3Ed__5_t18860C7FF698BB48D477ADEC25C19584954FD1D7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Activate>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActivateU3Ed__5_System_IDisposable_Dispose_m725B10C7DC4D47E5426092779D5D55765EC6C2F8 (U3CActivateU3Ed__5_t18860C7FF698BB48D477ADEC25C19584954FD1D7 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityStandardAssets.Utility.TimedObjectActivator/<Activate>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CActivateU3Ed__5_MoveNext_m8140814CDD393873FAA49E83107FC3565CF61F50 (U3CActivateU3Ed__5_t18860C7FF698BB48D477ADEC25C19584954FD1D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0036;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(entry.delay);
		Entry_t5F1DD521166A8D7A418BCB0ED47B18DAA8F8A14E * L_3 = __this->get_entry_2();
		NullCheck(L_3);
		float L_4 = L_3->get_delay_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0036:
	{
		__this->set_U3CU3E1__state_0((-1));
		// entry.target.SetActive(true);
		Entry_t5F1DD521166A8D7A418BCB0ED47B18DAA8F8A14E * L_6 = __this->get_entry_2();
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = L_6->get_target_0();
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)1, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<Activate>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CActivateU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC0F1C9925675CAFA25536ADAD7B87C93B4114035 (U3CActivateU3Ed__5_t18860C7FF698BB48D477ADEC25C19584954FD1D7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Activate>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActivateU3Ed__5_System_Collections_IEnumerator_Reset_mD631F4670AB5E153820DAD12D7E8B2A33964D178 (U3CActivateU3Ed__5_t18860C7FF698BB48D477ADEC25C19584954FD1D7 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CActivateU3Ed__5_System_Collections_IEnumerator_Reset_mD631F4670AB5E153820DAD12D7E8B2A33964D178_RuntimeMethod_var)));
	}
}
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<Activate>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CActivateU3Ed__5_System_Collections_IEnumerator_get_Current_mCFEA081058D54BDD742CF7677E143732666EB5EF (U3CActivateU3Ed__5_t18860C7FF698BB48D477ADEC25C19584954FD1D7 * __this, const RuntimeMethod* method)
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
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeactivateU3Ed__6__ctor_mD5AF2375A8944036229D169A0F8B4DF1CF545A96 (U3CDeactivateU3Ed__6_t42B40BDFB507971D83117A5C10D02A199B6C97E5 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeactivateU3Ed__6_System_IDisposable_Dispose_m98EB253A4FEED6DE0E4068D24FC37B14ECCB320A (U3CDeactivateU3Ed__6_t42B40BDFB507971D83117A5C10D02A199B6C97E5 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDeactivateU3Ed__6_MoveNext_mB705378039401722E125BA4DA35F4C719E73D308 (U3CDeactivateU3Ed__6_t42B40BDFB507971D83117A5C10D02A199B6C97E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0036;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(entry.delay);
		Entry_t5F1DD521166A8D7A418BCB0ED47B18DAA8F8A14E * L_3 = __this->get_entry_2();
		NullCheck(L_3);
		float L_4 = L_3->get_delay_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0036:
	{
		__this->set_U3CU3E1__state_0((-1));
		// entry.target.SetActive(false);
		Entry_t5F1DD521166A8D7A418BCB0ED47B18DAA8F8A14E * L_6 = __this->get_entry_2();
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = L_6->get_target_0();
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDeactivateU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m406C77124CA84B1C6C253BF05BCFCECFFD242345 (U3CDeactivateU3Ed__6_t42B40BDFB507971D83117A5C10D02A199B6C97E5 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeactivateU3Ed__6_System_Collections_IEnumerator_Reset_m8AFDD97ACF0296CE74EDDEEE1218485E21BE8320 (U3CDeactivateU3Ed__6_t42B40BDFB507971D83117A5C10D02A199B6C97E5 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDeactivateU3Ed__6_System_Collections_IEnumerator_Reset_m8AFDD97ACF0296CE74EDDEEE1218485E21BE8320_RuntimeMethod_var)));
	}
}
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDeactivateU3Ed__6_System_Collections_IEnumerator_get_Current_mC2F3092C48F6AD95ED8CBD61D79BF5C6E4221158 (U3CDeactivateU3Ed__6_t42B40BDFB507971D83117A5C10D02A199B6C97E5 * __this, const RuntimeMethod* method)
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
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReloadLevelU3Ed__7__ctor_m4984C65D6B826B7DF66C7C4A7ECA127A6532BA16 (U3CReloadLevelU3Ed__7_t4003A0AF502E129BA3E2BC09A0C83B03E6E15359 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReloadLevelU3Ed__7_System_IDisposable_Dispose_m9F638312ACFDE95087D9E047324ADA94882B1BA0 (U3CReloadLevelU3Ed__7_t4003A0AF502E129BA3E2BC09A0C83B03E6E15359 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CReloadLevelU3Ed__7_MoveNext_m33633854727994E2794C45AB43B1ECA5EA77139B (U3CReloadLevelU3Ed__7_t4003A0AF502E129BA3E2BC09A0C83B03E6E15359 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0036;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(entry.delay);
		Entry_t5F1DD521166A8D7A418BCB0ED47B18DAA8F8A14E * L_3 = __this->get_entry_2();
		NullCheck(L_3);
		float L_4 = L_3->get_delay_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0036:
	{
		__this->set_U3CU3E1__state_0((-1));
		// SceneManager.LoadScene(SceneManager.GetSceneAt(0).name);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_6;
		L_6 = SceneManager_GetSceneAt_m46AF96028C6A3A09198ABB313E4206D93A8D1F3F(0, /*hidden argument*/NULL);
		V_1 = L_6;
		String_t* L_7;
		L_7 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_1), /*hidden argument*/NULL);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_7, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CReloadLevelU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD8E4919CE84C4F5C9DF8BB9BF43B6E5BBA818B83 (U3CReloadLevelU3Ed__7_t4003A0AF502E129BA3E2BC09A0C83B03E6E15359 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReloadLevelU3Ed__7_System_Collections_IEnumerator_Reset_m5A4A5FE07E36A0D08841E35F4FCD63345938E6A1 (U3CReloadLevelU3Ed__7_t4003A0AF502E129BA3E2BC09A0C83B03E6E15359 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReloadLevelU3Ed__7_System_Collections_IEnumerator_Reset_m5A4A5FE07E36A0D08841E35F4FCD63345938E6A1_RuntimeMethod_var)));
	}
}
// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CReloadLevelU3Ed__7_System_Collections_IEnumerator_get_Current_mC4EBE690E94BEA6909904E5729BDFCFAB3C3B195 (U3CReloadLevelU3Ed__7_t4003A0AF502E129BA3E2BC09A0C83B03E6E15359 * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/Entries::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entries__ctor_mB5185AEB0D5FC5DCD5F315C40F6CD076A7EB188E (Entries_t7A700BDBBDD25FCADAA59CF143C83E4274E2FA99 * __this, const RuntimeMethod* method)
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
// System.Void UnityStandardAssets.Utility.TimedObjectActivator/Entry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entry__ctor_mE84C5B770852A71A000C2F1398288C39F553552F (Entry_t5F1DD521166A8D7A418BCB0ED47B18DAA8F8A14E * __this, const RuntimeMethod* method)
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
// System.Void UnityStandardAssets.Utility.WaypointCircuit/RoutePoint::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoutePoint__ctor_m524AFFB5CE5A8E26DBD334EF5150763602E7BF16 (RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, const RuntimeMethod* method)
{
	{
		// this.position = position;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___position0;
		__this->set_position_0(L_0);
		// this.direction = direction;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___direction1;
		__this->set_direction_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RoutePoint__ctor_m524AFFB5CE5A8E26DBD334EF5150763602E7BF16_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3 * _thisAdjusted = reinterpret_cast<RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3 *>(__this + _offset);
	RoutePoint__ctor_m524AFFB5CE5A8E26DBD334EF5150763602E7BF16(_thisAdjusted, ___position0, ___direction1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.Utility.WaypointCircuit/WaypointList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaypointList__ctor_mADAB4BE67815D17936E14849F012560B3DD612F5 (WaypointList_t7CA06137643274484AEDCDAA2B090C56E60FA730 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Transform[] items = new Transform[0];
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_0 = (TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D*)(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D*)SZArrayNew(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_items_1(L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_op_Multiply_m4B615DCAD6D77FE276AC56F17EA3ED0DCD942111_inline (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = ___a0;
		float L_1 = L_0.get_x_1();
		float L_2 = ___d1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_3 = ___a0;
		float L_4 = L_3.get_y_2();
		float L_5 = ___d1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_6 = ___a0;
		float L_7 = L_6.get_z_3();
		float L_8 = ___d1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_9 = ___a0;
		float L_10 = L_9.get_w_4();
		float L_11 = ___d1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_12), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), ((float)il2cpp_codegen_multiply((float)L_10, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float WaypointCircuit_get_Length_m0E945F73C31A88101B98561A4D363B4902584AD1_inline (WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * __this, const RuntimeMethod* method)
{
	{
		// public float Length { get; private set; }
		float L_0 = __this->get_U3CLengthU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WaypointCircuit_set_Length_mE69C49D19729D91DE7D632E9A24D7E885D6A4732_inline (WaypointCircuit_tBB01B077548CDB8E188EBDC7D852E1627205BD00 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Length { get; private set; }
		float L_0 = ___value0;
		__this->set_U3CLengthU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a1;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a1;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a1;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WaypointProgressTracker_set_progressPoint_m3DE2E6EB72CE4FA7F81CEBC4CB5EDF4529F83EF3_inline (WaypointProgressTracker_t5A14ED6C34AB2CC846E5E61AE7771C908B3D61E7 * __this, RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  ___value0, const RuntimeMethod* method)
{
	{
		// public WaypointCircuit.RoutePoint progressPoint { get; private set; }
		RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  L_0 = ___value0;
		__this->set_U3CprogressPointU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  WaypointProgressTracker_get_progressPoint_mEE058238637E1933AB6A6D0B2F500A465AF3CFE2_inline (WaypointProgressTracker_t5A14ED6C34AB2CC846E5E61AE7771C908B3D61E7 * __this, const RuntimeMethod* method)
{
	{
		// public WaypointCircuit.RoutePoint progressPoint { get; private set; }
		RoutePoint_t7B25FE1AEC17CE16862BC026E82285C6D6C650C3  L_0 = __this->get_U3CprogressPointU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___lhs0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___rhs1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___lhs0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___rhs1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___lhs0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___rhs1;
		float L_11 = L_10.get_z_4();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EtceteraManager_get_deviceToken_m5EE3B8556937441B6E1558E5AE308F5344B08B24_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string deviceToken { get; private set; }
		IL2CPP_RUNTIME_CLASS_INIT(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_il2cpp_TypeInfo_var);
		String_t* L_0 = ((EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_StaticFields*)il2cpp_codegen_static_fields_for(EtceteraManager_t82DD37829F3B93A2839257C6BC2E0C4E9A292921_il2cpp_TypeInfo_var))->get_U3CdeviceTokenU3Ek__BackingField_29();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD  List_1_get_Item_mAA87A40BE77081A00704A6584F5C0113C6E636C2_gshared_inline (List_1_tC57F1BA46C89AA33253984801D30F8502BBBFE68 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ParticleCollisionEventU5BU5D_t62880785FE50C001432E57E6D83BF3BD7BD3183A* L_2 = (ParticleCollisionEventU5BU5D_t62880785FE50C001432E57E6D83BF3BD7BD3183A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ParticleCollisionEventU5BU5D_t62880785FE50C001432E57E6D83BF3BD7BD3183A*)L_2, (int32_t)L_3);
		return (ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mF254C3BDEA9F0829958522BF88C75DE8BEC4961F_gshared_inline (Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_currentKey_3();
		return (RuntimeObject *)L_0;
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
