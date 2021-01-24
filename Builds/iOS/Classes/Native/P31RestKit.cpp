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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`2<System.Object,System.Object>
struct Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t8A3F8777BEF075E009D085E3BC9B9ADB00F47345;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.Object,System.Object>>
struct Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Collections.Generic.Dictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>
struct Dictionary_2_tE59C4557608AD8DE5532A34902EA9ADE015E3081;
// System.Collections.Generic.Dictionary`2<System.Type,Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>>
struct Dictionary_2_t601A85364B151040ADEE21D2AFEAEFF28DA6DA66;
// System.Collections.Generic.Dictionary`2<System.Type,Prime31.Reflection.CacheResolver/CtorDelegate>
struct Dictionary_2_tD836A2AE664CBD98AB84A4E4296BEAD36B551789;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8;
// System.Collections.Generic.IEnumerable`1<System.Action>
struct IEnumerable_1_t6CEED8910660964668522055C0010B575E62C702;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_tF437149CAED78D4A68294D431DE692A78F7D67B3;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>>
struct IEnumerator_1_t13315165413127F13361B2E10B83C6CD018EE37B;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Action`2<System.Object,System.Object>>
struct KeyCollection_t66204BA626FC052FAE089ED286B46A5B475BE160;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>
struct KeyCollection_t1A5E6B675EFA5A7901D7B04966A914995A34ECFF;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// System.Collections.Generic.List`1<System.Action>
struct List_1_t458734AF850139150AB40DFB2B5D1BCE23178235;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// Prime31.Reflection.SafeDictionary`2<System.Object,System.Object>
struct SafeDictionary_2_t4B9B070720ACD8257CEAC94F8135E2AEB0658AF1;
// Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>
struct SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031;
// Prime31.Reflection.SafeDictionary`2<System.Type,Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>>
struct SafeDictionary_2_tFADC581AA2370090D8D9E6416FC552750C99B022;
// Prime31.Reflection.SafeDictionary`2<System.Type,Prime31.Reflection.CacheResolver/CtorDelegate>
struct SafeDictionary_2_t835C82D4A26CED1AA01E976F040682C42C841A4F;
// System.Collections.Generic.Stack`1<System.Int32Enum>
struct Stack_1_tCBDE4BE19279E76640CBE54E3E6B4B1536906F84;
// System.Collections.Generic.Stack`1<Prime31.JsonFormatter/JsonContextType>
struct Stack_1_tE925D2926B7991D3747639F04BFD07367E36C4DA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Action`2<System.Object,System.Object>>
struct ValueCollection_tFD7770093043810B7547486DA94BE8F9FB152845;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>
struct ValueCollection_t530059B6E09E07208AE8745C3EA5EC32BA6C17F6;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Action`2<System.Object,System.Object>>[]
struct EntryU5BU5D_t7F429426E1AE733F61F09027B7A0C9523012944B;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Boolean>[]
struct EntryU5BU5D_tE42F4CA2251E4564157940892384BFB9EBE58D61;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// System.Action[]
struct ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Int32Enum[]
struct Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_tFF6F73F1CFE837331D6AAA11CC78CE5D9B5F0A2B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// Prime31.JsonFormatter/JsonContextType[]
struct JsonContextTypeU5BU5D_tAC0C294176F9EDE4CFF72ECBFF4C9F5A8BA2AE6F;
// Prime31.AbstractManager
struct AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AppDomain
struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A;
// System.Reflection.Assembly
struct Assembly_t;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// Prime31.Reflection.CacheResolver
struct CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B;
// Prime31.CoroutineSurrogate
struct CoroutineSurrogate_tF087F4451C1E8CEE2341DA4AA7C728C745DFE187;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UnityEngine.Font
struct Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB;
// UnityEngine.GUISettings
struct GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0;
// UnityEngine.GUISkin
struct GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6;
// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726;
// UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Prime31.Reflection.GetHandler
struct GetHandler_tAE31D3C378B82D9F3EC44C4BD9691E9E1836ED73;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerable
struct IEnumerable_t47A618747A1BB2A868710316F7372094849163A2;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// Prime31.IJsonSerializerStrategy
struct IJsonSerializerStrategy_t07ABC231E495885F45C84676A5E6527E97BC2876;
// System.Collections.IList
struct IList_tB15A9D6625D09661D6E47976BB626C703EC81910;
// Prime31.JsonArray
struct JsonArray_tA3865B4DBA65F47D2EBA6C1A04041AC601AAB754;
// Prime31.JsonFormatter
struct JsonFormatter_t1E6A6A2DEF26F59BF00E56DDC3E07A13B1A4E187;
// Prime31.JsonObject
struct JsonObject_t3BFE094F9029834331827285E25845AAB69816A6;
// Prime31.LifecycleHelper
struct LifecycleHelper_t2C8530CA0073EF4CA43BCC651EB399608723D373;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// Prime31.Reflection.MemberMapLoader
struct MemberMapLoader_t56FA45FA01C1729FCF47BAE05C4F8406A5B3E137;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Prime31.MonoBehaviourGUI
struct MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Prime31.PocoJsonSerializerStrategy
struct PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70;
// System.ResolveEventHandler
struct ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Prime31.Reflection.SetHandler
struct SetHandler_tAE38CDA0AFD7619D49B7E3A9FE386955818B44E8;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// Prime31.ThreadingCallbackHelper
struct ThreadingCallbackHelper_t8ECB03A15726D7FE39F2C3B6609167DC4A32266A;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64;
// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Application/LogCallback
struct LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C;
// Prime31.Reflection.CacheResolver/<createGetHandler>c__AnonStorey1
struct U3CcreateGetHandlerU3Ec__AnonStorey1_t02A1377C5EAAAC329AE9F663DFD282EA5CF2108E;
// Prime31.Reflection.CacheResolver/<createGetHandler>c__AnonStorey3
struct U3CcreateGetHandlerU3Ec__AnonStorey3_t3C5E60C6B5886F65A76AAB8AFF20B57B80F8712A;
// Prime31.Reflection.CacheResolver/<createSetHandler>c__AnonStorey2
struct U3CcreateSetHandlerU3Ec__AnonStorey2_t3C37B8E13768D45BB60408EDA64A9D6452077CE0;
// Prime31.Reflection.CacheResolver/<createSetHandler>c__AnonStorey4
struct U3CcreateSetHandlerU3Ec__AnonStorey4_tD61E3F935224CDCF591C2A5450A489564F55A099;
// Prime31.Reflection.CacheResolver/<getNewInstance>c__AnonStorey0
struct U3CgetNewInstanceU3Ec__AnonStorey0_t0874DDADE8E8CD3874E55EB03602C06A726898CA;
// Prime31.Reflection.CacheResolver/CtorDelegate
struct CtorDelegate_tC5D8FE74BA0A8B81F9AB288E39882F34B7A2AC2A;
// Prime31.Reflection.CacheResolver/MemberMap
struct MemberMap_tA722F3C527755D23AB14FC21BFE6A283F7C75D66;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E;
// Prime31.Json/Deserializer
struct Deserializer_t462BAFC366F4A16034E00799D6C0E08B2A720212;
// Prime31.Json/ObjectDecoder
struct ObjectDecoder_tA5ED99430A82C53E75E54ACC619AE501AAAAD8C6;
// Prime31.Json/Serializer
struct Serializer_t8E8E654A0E429ECF8D377E7F0081F82173C60854;
// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45;
// Prime31.Json/ObjectDecoder/<getMembersWithSetters>c__AnonStorey0
struct U3CgetMembersWithSettersU3Ec__AnonStorey0_t1D44DCBA25E160019A1FE234896DCD22AE74AA1C;
// Prime31.Json/ObjectDecoder/<getMembersWithSetters>c__AnonStorey1
struct U3CgetMembersWithSettersU3Ec__AnonStorey1_tC36F03EB94E9570E7200C55D5F819BF0C4036206;

IL2CPP_EXTERN_C RuntimeClass* AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CtorDelegate_tC5D8FE74BA0A8B81F9AB288E39882F34B7A2AC2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Deserializer_t462BAFC366F4A16034E00799D6C0E08B2A720212_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetHandler_tAE31D3C378B82D9F3EC44C4BD9691E9E1836ED73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t35488BE070734B4C5D136DC1A68CBC9CE507D488_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t8ACA6B0DE7FFF63CD5FC28E90063271CA8B5DA3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t04D882226AB7D8875E8DE1B4FEDCB5060F885EBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t13315165413127F13361B2E10B83C6CD018EE37B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IJsonSerializerStrategy_t07ABC231E495885F45C84676A5E6527E97BC2876_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t707982BD768B18C51D263C759F33BCDBDFA44901_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonArray_tA3865B4DBA65F47D2EBA6C1A04041AC601AAB754_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonFormatter_t1E6A6A2DEF26F59BF00E56DDC3E07A13B1A4E187_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonObject_t3BFE094F9029834331827285E25845AAB69816A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Json_tE438EA5A4F39CA21F670B3F0AB55B25568713BF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemberMapLoader_t56FA45FA01C1729FCF47BAE05C4F8406A5B3E137_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemberMap_tA722F3C527755D23AB14FC21BFE6A283F7C75D66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SafeDictionary_2_t835C82D4A26CED1AA01E976F040682C42C841A4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SafeDictionary_2_tFADC581AA2370090D8D9E6416FC552750C99B022_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Serializer_t8E8E654A0E429ECF8D377E7F0081F82173C60854_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SetHandler_tAE38CDA0AFD7619D49B7E3A9FE386955818B44E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleJson_t020F22AD3AA0346D41DBB61964A925E4F60810BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_tE925D2926B7991D3747639F04BFD07367E36C4DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadingCallbackHelper_t8ECB03A15726D7FE39F2C3B6609167DC4A32266A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CcreateGetHandlerU3Ec__AnonStorey1_t02A1377C5EAAAC329AE9F663DFD282EA5CF2108E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CcreateGetHandlerU3Ec__AnonStorey3_t3C5E60C6B5886F65A76AAB8AFF20B57B80F8712A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CcreateSetHandlerU3Ec__AnonStorey2_t3C37B8E13768D45BB60408EDA64A9D6452077CE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CcreateSetHandlerU3Ec__AnonStorey4_tD61E3F935224CDCF591C2A5450A489564F55A099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CgetMembersWithSettersU3Ec__AnonStorey0_t1D44DCBA25E160019A1FE234896DCD22AE74AA1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CgetMembersWithSettersU3Ec__AnonStorey1_tC36F03EB94E9570E7200C55D5F819BF0C4036206_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CgetNewInstanceU3Ec__AnonStorey0_t0874DDADE8E8CD3874E55EB03602C06A726898CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02B04C5157F5B1C2D5375B84FA2F4D0E49E7F5D6;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral15928414DFDFC791200FB785BF9E4E927AC83B45;
IL2CPP_EXTERN_C String_t* _stringLiteral1D92D76ADC54506AD8D04147559DC910C26FA222;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3;
IL2CPP_EXTERN_C String_t* _stringLiteral304F91B6204F99A8E6DFDFFD72CD760D50B73E7D;
IL2CPP_EXTERN_C String_t* _stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53;
IL2CPP_EXTERN_C String_t* _stringLiteral36CEB5CD7B9DF9760BC1A6FC3F383FD0227BA51A;
IL2CPP_EXTERN_C String_t* _stringLiteral422457F901751FA3B57100A103387F681147FE63;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral4EBF9F98D97A1A1F915B2DD21D549CDCFB95E8E1;
IL2CPP_EXTERN_C String_t* _stringLiteral53DCE205A482733E596CEC3A7D87F6EC6A14565F;
IL2CPP_EXTERN_C String_t* _stringLiteral56DBC1D6565438E015229D836BF128B1E55304DB;
IL2CPP_EXTERN_C String_t* _stringLiteral58D5B924304A0C60C698FE13AFF2ABF25760EF02;
IL2CPP_EXTERN_C String_t* _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral5A7BB2333D11C3D2D5B7745774F148CD42B4E06C;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral5FF374709F3F171D980E4E8BEA80A7954877FE64;
IL2CPP_EXTERN_C String_t* _stringLiteral750483B1B79D7876103D12AD91A365DD2A867A80;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral79931F9913E513F1EBF6133F0FD12878DE7E4C87;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral8DCFA59F6EB52770C39468B93BB5D283E8B57627;
IL2CPP_EXTERN_C String_t* _stringLiteral9BF93305BDF022D25D031F92CBA9AE2673FC7BB1;
IL2CPP_EXTERN_C String_t* _stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158;
IL2CPP_EXTERN_C String_t* _stringLiteralA1DE0DBD21D32080ED1A1D2401F877FCA4F23B9D;
IL2CPP_EXTERN_C String_t* _stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423;
IL2CPP_EXTERN_C String_t* _stringLiteralA539038315AABE91ABF55F3F1AEE619EEBFC183A;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122;
IL2CPP_EXTERN_C String_t* _stringLiteralB0B267465E6809858C6C0C2664BB62BA5715FCE4;
IL2CPP_EXTERN_C String_t* _stringLiteralB19A2E739318CC3D73C57DF7435614CEA05AF90D;
IL2CPP_EXTERN_C String_t* _stringLiteralB304CA91E8BA90C1A8E43844C5BF56C75401E8FE;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralB9BF0E6822F4CBC635E84A065FB4A28DA4DF9D3B;
IL2CPP_EXTERN_C String_t* _stringLiteralC05057013AC09244383082846D30263A31E33CC7;
IL2CPP_EXTERN_C String_t* _stringLiteralC10C58FC906F34696E42F495EDDB1508F49079D4;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralCAC0E7D0EEF9F889D34253B0E07D290F1DF63B98;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralDA88A2D964F57B37C63183F5236085B715F076B8;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralEBC658B067B5C785A3F0BB67D73755F6FEE7F70C;
IL2CPP_EXTERN_C String_t* _stringLiteralECC3900F7FCDEFA781D33EBEB79E2FA8FC4BF939;
IL2CPP_EXTERN_C String_t* _stringLiteralEEABA666EAC0BA02511E9144602278DBC500C297;
IL2CPP_EXTERN_C String_t* _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m54EE979C4D83695ED736A3177A68C2968C8C4382_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mE1761BE81335B68DA4E0F742344DA72F092A29C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m5020E2E0843575E8C35BFF383E6230E270238200_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mDC3AD2416E7463B12FC10AD8A6C816FECC11E003_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m7B1612DAAC58ADB707313836D78A8FB4556FEBC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC7E6095767F64C43E03802A7C5E11740196065FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m3FC6EB738CC4A9E285D6330B2352769B37B32B20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mD35CC224B1371CA217FF9D886A9CC15BC9B52E5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_mE3B6496D9EE741F44C34E12F543B7DC7065BD84B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m80950D4BAC47AA3A0B7E50B2C2E0606342C9011D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mC3A2BFFC362947ED3225DD391545F04E5AD7239B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m794A8065F96A52A636116CD7475B246BD39574CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m4D8899097FFAE4593AA535D2A9311C7884F75492_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m557855CD7AB5535158BEBB5F773B80036E88369E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisLifecycleHelper_t2C8530CA0073EF4CA43BCC651EB399608723D373_m56E0C8DC89B0E27FAD3A3350603AADA785EB901F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisThreadingCallbackHelper_t8ECB03A15726D7FE39F2C3B6609167DC4A32266A_m08F2AA5F83D59CA5ACE41304374BB769BEB49AC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_mA7A3EDE79F7F742613170703D44941D7EBE09E7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m71EC8713848A54055B4FD71001B1EFBA00085387_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mA7D524A2849160FE60D9B60969D35C565B741C69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mC32923569CAAE589250C6AD9DCEEBFEC2AE11335_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7701B455B6EA0411642596847118B51F91DA8BC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9F0A626A47DAE7452E139A6961335BE81507E551_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonoBehaviourGUI_handleLog_mDF658CD88FCBE3E7BE4209211B40F2B99B2B141F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonoBehaviourGUI_paintWindow_m2EF9336A08149F34360577A922745D34A0D48B4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeDictionary_2_GetEnumerator_mB73E6DB5CCF467A5A9B534B188D0E63D031418CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeDictionary_2__ctor_m3A5343F8A852C3A6259794B02D345ED76955EEBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeDictionary_2__ctor_m5D9F964EE6C1D6997CF803C9104FD29A36F39965_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeDictionary_2__ctor_mE408E5797746188256EF77C1EDBF5069C300C695_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeDictionary_2_add_m8CB6363B5E062018AE5E112D28AD5AD374ED97B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeDictionary_2_add_m9046A277F92267D0DE30F5F33ACD8938E26E71B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeDictionary_2_add_mBBE14F8B8A70375BE2D8849D67C9AE032CC5A9FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeDictionary_2_tryGetValue_m9CA6136377396DFE08785563B6BF96000341DF45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeDictionary_2_tryGetValue_mECA3E84F7995497E18128B080F063D0105C344ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Peek_mC0E009D926287AB9DDF13380EC7D8C81B9BA10E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m8AD8E9B61221B705EBCA3D86C190EEC52865E56D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_mDDD25126954FF326E994F9D85FC3DE0D16A88F42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m9A7652D7CE4CDD707DF2C0DC49C2C076445D48D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_m11A9AE873AC1A4F6BB929E4F953D2FD2B6DA0B7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CcreateGetHandlerU3Ec__AnonStorey1_U3CU3Em__0_mA56C519CB2E562696744435BDF3B561AC9B9BB03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CcreateGetHandlerU3Ec__AnonStorey3_U3CU3Em__0_mAA0FE3A16BE79DF017244469DC62C44E1D3418EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CcreateSetHandlerU3Ec__AnonStorey2_U3CU3Em__0_mE2303DE8B0C90E2A26EE180FE9141E6112575A47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CcreateSetHandlerU3Ec__AnonStorey4_U3CU3Em__0_mFF0A31676881ECB0F37891E772D4CBEB8E31231D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CgetMembersWithSettersU3Ec__AnonStorey0_U3CU3Em__0_mA38A89F937E76C1B4E2A9CBF18D2902B037C4E06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CgetMembersWithSettersU3Ec__AnonStorey1_U3CU3Em__0_m5BEFD2E0C9A02A684B4769BB36C3B20F6756DE1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CgetNewInstanceU3Ec__AnonStorey0_U3CU3Em__0_mCCEA2EF8C3C88A88B9C9399E244726EA0E3C8A9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Application_t317038E88BDCE3640566EB8791C9E2AAAB21C87C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Dictionary_2_t58021767EFD70313A4DB609BB2EC63167C586EDE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ICollection_1_tEB9B83728C30BC3B050B777DF03B955050A4DDC3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IConvertible_t40D9E38816544BF71E97F48AB3C47C9A2B7E9BE4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IDictionary_2_t2C2074B0821BAD300B43C061B5CED76258A70C1E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IEnumerable_1_t2DA210D3B033E1BEBFC81C153FA1C67749C6D264_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IList_1_tCFBEF0BE66D2411D5AEA86FDF1C1E71F013AA724_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IList_tB15A9D6625D09661D6E47976BB626C703EC81910_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* List_1_t2F377D93C74B8090B226DCC307AB5BB600181453_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Nullable_1_t4EDBE007AFFA0315135B9A508DACA62D3C201867_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ThreadingCallbackHelper_t8ECB03A15726D7FE39F2C3B6609167DC4A32266A_0_0_0_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke;
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com;
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke;
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com;

struct AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E;
struct GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ParameterModifierU5BU5D_tFF6F73F1CFE837331D6AAA11CC78CE5D9B5F0A2B;
struct PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t280A23ACBBDDAE9898D3B2E4EEDF1D56FDBD87B8 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.Object,System.Object>>
struct  Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t7F429426E1AE733F61F09027B7A0C9523012944B* ___entries_1;
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
	KeyCollection_t66204BA626FC052FAE089ED286B46A5B475BE160 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tFD7770093043810B7547486DA94BE8F9FB152845 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4, ___entries_1)); }
	inline EntryU5BU5D_t7F429426E1AE733F61F09027B7A0C9523012944B* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t7F429426E1AE733F61F09027B7A0C9523012944B** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t7F429426E1AE733F61F09027B7A0C9523012944B* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4, ___keys_7)); }
	inline KeyCollection_t66204BA626FC052FAE089ED286B46A5B475BE160 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t66204BA626FC052FAE089ED286B46A5B475BE160 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t66204BA626FC052FAE089ED286B46A5B475BE160 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4, ___values_8)); }
	inline ValueCollection_tFD7770093043810B7547486DA94BE8F9FB152845 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tFD7770093043810B7547486DA94BE8F9FB152845 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tFD7770093043810B7547486DA94BE8F9FB152845 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct  Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tE42F4CA2251E4564157940892384BFB9EBE58D61* ___entries_1;
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
	KeyCollection_t1A5E6B675EFA5A7901D7B04966A914995A34ECFF * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t530059B6E09E07208AE8745C3EA5EC32BA6C17F6 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C, ___entries_1)); }
	inline EntryU5BU5D_tE42F4CA2251E4564157940892384BFB9EBE58D61* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tE42F4CA2251E4564157940892384BFB9EBE58D61** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tE42F4CA2251E4564157940892384BFB9EBE58D61* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C, ___keys_7)); }
	inline KeyCollection_t1A5E6B675EFA5A7901D7B04966A914995A34ECFF * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t1A5E6B675EFA5A7901D7B04966A914995A34ECFF ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t1A5E6B675EFA5A7901D7B04966A914995A34ECFF * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C, ___values_8)); }
	inline ValueCollection_t530059B6E09E07208AE8745C3EA5EC32BA6C17F6 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t530059B6E09E07208AE8745C3EA5EC32BA6C17F6 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t530059B6E09E07208AE8745C3EA5EC32BA6C17F6 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* ___entries_1;
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
	KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___entries_1)); }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___keys_7)); }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___values_8)); }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct  KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17, ___dictionary_0)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Action>
struct  List_1_t458734AF850139150AB40DFB2B5D1BCE23178235  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235, ____items_1)); }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* get__items_1() const { return ____items_1; }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_StaticFields, ____emptyArray_5)); }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
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


// Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>
struct  SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031  : public RuntimeObject
{
public:
	// System.Object Prime31.Reflection.SafeDictionary`2::_padlock
	RuntimeObject * ____padlock_0;
	// System.Collections.Generic.Dictionary`2<TKey,TValue> Prime31.Reflection.SafeDictionary`2::_dictionary
	Dictionary_2_tE59C4557608AD8DE5532A34902EA9ADE015E3081 * ____dictionary_1;

public:
	inline static int32_t get_offset_of__padlock_0() { return static_cast<int32_t>(offsetof(SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031, ____padlock_0)); }
	inline RuntimeObject * get__padlock_0() const { return ____padlock_0; }
	inline RuntimeObject ** get_address_of__padlock_0() { return &____padlock_0; }
	inline void set__padlock_0(RuntimeObject * value)
	{
		____padlock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____padlock_0), (void*)value);
	}

	inline static int32_t get_offset_of__dictionary_1() { return static_cast<int32_t>(offsetof(SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031, ____dictionary_1)); }
	inline Dictionary_2_tE59C4557608AD8DE5532A34902EA9ADE015E3081 * get__dictionary_1() const { return ____dictionary_1; }
	inline Dictionary_2_tE59C4557608AD8DE5532A34902EA9ADE015E3081 ** get_address_of__dictionary_1() { return &____dictionary_1; }
	inline void set__dictionary_1(Dictionary_2_tE59C4557608AD8DE5532A34902EA9ADE015E3081 * value)
	{
		____dictionary_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dictionary_1), (void*)value);
	}
};


// Prime31.Reflection.SafeDictionary`2<System.Type,Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>>
struct  SafeDictionary_2_tFADC581AA2370090D8D9E6416FC552750C99B022  : public RuntimeObject
{
public:
	// System.Object Prime31.Reflection.SafeDictionary`2::_padlock
	RuntimeObject * ____padlock_0;
	// System.Collections.Generic.Dictionary`2<TKey,TValue> Prime31.Reflection.SafeDictionary`2::_dictionary
	Dictionary_2_t601A85364B151040ADEE21D2AFEAEFF28DA6DA66 * ____dictionary_1;

public:
	inline static int32_t get_offset_of__padlock_0() { return static_cast<int32_t>(offsetof(SafeDictionary_2_tFADC581AA2370090D8D9E6416FC552750C99B022, ____padlock_0)); }
	inline RuntimeObject * get__padlock_0() const { return ____padlock_0; }
	inline RuntimeObject ** get_address_of__padlock_0() { return &____padlock_0; }
	inline void set__padlock_0(RuntimeObject * value)
	{
		____padlock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____padlock_0), (void*)value);
	}

	inline static int32_t get_offset_of__dictionary_1() { return static_cast<int32_t>(offsetof(SafeDictionary_2_tFADC581AA2370090D8D9E6416FC552750C99B022, ____dictionary_1)); }
	inline Dictionary_2_t601A85364B151040ADEE21D2AFEAEFF28DA6DA66 * get__dictionary_1() const { return ____dictionary_1; }
	inline Dictionary_2_t601A85364B151040ADEE21D2AFEAEFF28DA6DA66 ** get_address_of__dictionary_1() { return &____dictionary_1; }
	inline void set__dictionary_1(Dictionary_2_t601A85364B151040ADEE21D2AFEAEFF28DA6DA66 * value)
	{
		____dictionary_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dictionary_1), (void*)value);
	}
};


// Prime31.Reflection.SafeDictionary`2<System.Type,Prime31.Reflection.CacheResolver/CtorDelegate>
struct  SafeDictionary_2_t835C82D4A26CED1AA01E976F040682C42C841A4F  : public RuntimeObject
{
public:
	// System.Object Prime31.Reflection.SafeDictionary`2::_padlock
	RuntimeObject * ____padlock_0;
	// System.Collections.Generic.Dictionary`2<TKey,TValue> Prime31.Reflection.SafeDictionary`2::_dictionary
	Dictionary_2_tD836A2AE664CBD98AB84A4E4296BEAD36B551789 * ____dictionary_1;

public:
	inline static int32_t get_offset_of__padlock_0() { return static_cast<int32_t>(offsetof(SafeDictionary_2_t835C82D4A26CED1AA01E976F040682C42C841A4F, ____padlock_0)); }
	inline RuntimeObject * get__padlock_0() const { return ____padlock_0; }
	inline RuntimeObject ** get_address_of__padlock_0() { return &____padlock_0; }
	inline void set__padlock_0(RuntimeObject * value)
	{
		____padlock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____padlock_0), (void*)value);
	}

	inline static int32_t get_offset_of__dictionary_1() { return static_cast<int32_t>(offsetof(SafeDictionary_2_t835C82D4A26CED1AA01E976F040682C42C841A4F, ____dictionary_1)); }
	inline Dictionary_2_tD836A2AE664CBD98AB84A4E4296BEAD36B551789 * get__dictionary_1() const { return ____dictionary_1; }
	inline Dictionary_2_tD836A2AE664CBD98AB84A4E4296BEAD36B551789 ** get_address_of__dictionary_1() { return &____dictionary_1; }
	inline void set__dictionary_1(Dictionary_2_tD836A2AE664CBD98AB84A4E4296BEAD36B551789 * value)
	{
		____dictionary_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dictionary_1), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<System.Int32Enum>
struct  Stack_1_tCBDE4BE19279E76640CBE54E3E6B4B1536906F84  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_tCBDE4BE19279E76640CBE54E3E6B4B1536906F84, ____array_0)); }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* get__array_0() const { return ____array_0; }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_tCBDE4BE19279E76640CBE54E3E6B4B1536906F84, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_tCBDE4BE19279E76640CBE54E3E6B4B1536906F84, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};


// System.Collections.Generic.Stack`1<Prime31.JsonFormatter/JsonContextType>
struct  Stack_1_tE925D2926B7991D3747639F04BFD07367E36C4DA  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	JsonContextTypeU5BU5D_tAC0C294176F9EDE4CFF72ECBFF4C9F5A8BA2AE6F* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_tE925D2926B7991D3747639F04BFD07367E36C4DA, ____array_0)); }
	inline JsonContextTypeU5BU5D_tAC0C294176F9EDE4CFF72ECBFF4C9F5A8BA2AE6F* get__array_0() const { return ____array_0; }
	inline JsonContextTypeU5BU5D_tAC0C294176F9EDE4CFF72ECBFF4C9F5A8BA2AE6F** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(JsonContextTypeU5BU5D_tAC0C294176F9EDE4CFF72ECBFF4C9F5A8BA2AE6F* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_tE925D2926B7991D3747639F04BFD07367E36C4DA, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_tE925D2926B7991D3747639F04BFD07367E36C4DA, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};


// Prime31.ActionExtensions
struct  ActionExtensions_tED6F9322521ECAD7564303F7E3E5A7631ADB3E8B  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.Binder
struct  Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30  : public RuntimeObject
{
public:

public:
};


// Prime31.Reflection.CacheResolver
struct  CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0  : public RuntimeObject
{
public:
	// Prime31.Reflection.MemberMapLoader Prime31.Reflection.CacheResolver::_memberMapLoader
	MemberMapLoader_t56FA45FA01C1729FCF47BAE05C4F8406A5B3E137 * ____memberMapLoader_0;
	// Prime31.Reflection.SafeDictionary`2<System.Type,Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>> Prime31.Reflection.CacheResolver::_memberMapsCache
	SafeDictionary_2_tFADC581AA2370090D8D9E6416FC552750C99B022 * ____memberMapsCache_1;

public:
	inline static int32_t get_offset_of__memberMapLoader_0() { return static_cast<int32_t>(offsetof(CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0, ____memberMapLoader_0)); }
	inline MemberMapLoader_t56FA45FA01C1729FCF47BAE05C4F8406A5B3E137 * get__memberMapLoader_0() const { return ____memberMapLoader_0; }
	inline MemberMapLoader_t56FA45FA01C1729FCF47BAE05C4F8406A5B3E137 ** get_address_of__memberMapLoader_0() { return &____memberMapLoader_0; }
	inline void set__memberMapLoader_0(MemberMapLoader_t56FA45FA01C1729FCF47BAE05C4F8406A5B3E137 * value)
	{
		____memberMapLoader_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____memberMapLoader_0), (void*)value);
	}

	inline static int32_t get_offset_of__memberMapsCache_1() { return static_cast<int32_t>(offsetof(CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0, ____memberMapsCache_1)); }
	inline SafeDictionary_2_tFADC581AA2370090D8D9E6416FC552750C99B022 * get__memberMapsCache_1() const { return ____memberMapsCache_1; }
	inline SafeDictionary_2_tFADC581AA2370090D8D9E6416FC552750C99B022 ** get_address_of__memberMapsCache_1() { return &____memberMapsCache_1; }
	inline void set__memberMapsCache_1(SafeDictionary_2_tFADC581AA2370090D8D9E6416FC552750C99B022 * value)
	{
		____memberMapsCache_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____memberMapsCache_1), (void*)value);
	}
};

struct CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0_StaticFields
{
public:
	// Prime31.Reflection.SafeDictionary`2<System.Type,Prime31.Reflection.CacheResolver/CtorDelegate> Prime31.Reflection.CacheResolver::constructorCache
	SafeDictionary_2_t835C82D4A26CED1AA01E976F040682C42C841A4F * ___constructorCache_2;

public:
	inline static int32_t get_offset_of_constructorCache_2() { return static_cast<int32_t>(offsetof(CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0_StaticFields, ___constructorCache_2)); }
	inline SafeDictionary_2_t835C82D4A26CED1AA01E976F040682C42C841A4F * get_constructorCache_2() const { return ___constructorCache_2; }
	inline SafeDictionary_2_t835C82D4A26CED1AA01E976F040682C42C841A4F ** get_address_of_constructorCache_2() { return &___constructorCache_2; }
	inline void set_constructorCache_2(SafeDictionary_2_t835C82D4A26CED1AA01E976F040682C42C841A4F * value)
	{
		___constructorCache_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___constructorCache_2), (void*)value);
	}
};


// System.Globalization.CultureInfo
struct  CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Prime31.Json
struct  Json_tE438EA5A4F39CA21F670B3F0AB55B25568713BF3  : public RuntimeObject
{
public:

public:
};

struct Json_tE438EA5A4F39CA21F670B3F0AB55B25568713BF3_StaticFields
{
public:
	// System.Boolean Prime31.Json::useSimpleJson
	bool ___useSimpleJson_0;

public:
	inline static int32_t get_offset_of_useSimpleJson_0() { return static_cast<int32_t>(offsetof(Json_tE438EA5A4F39CA21F670B3F0AB55B25568713BF3_StaticFields, ___useSimpleJson_0)); }
	inline bool get_useSimpleJson_0() const { return ___useSimpleJson_0; }
	inline bool* get_address_of_useSimpleJson_0() { return &___useSimpleJson_0; }
	inline void set_useSimpleJson_0(bool value)
	{
		___useSimpleJson_0 = value;
	}
};


// Prime31.JsonExtensions
struct  JsonExtensions_t4616C316FB0CD249BCF546B4E150E2C09FAD25D4  : public RuntimeObject
{
public:

public:
};


// Prime31.JsonFormatter
struct  JsonFormatter_t1E6A6A2DEF26F59BF00E56DDC3E07A13B1A4E187  : public RuntimeObject
{
public:
	// System.Boolean Prime31.JsonFormatter::inDoubleString
	bool ___inDoubleString_0;
	// System.Boolean Prime31.JsonFormatter::inSingleString
	bool ___inSingleString_1;
	// System.Boolean Prime31.JsonFormatter::inVariableAssignment
	bool ___inVariableAssignment_2;
	// System.Char Prime31.JsonFormatter::prevChar
	Il2CppChar ___prevChar_3;
	// System.Collections.Generic.Stack`1<Prime31.JsonFormatter/JsonContextType> Prime31.JsonFormatter::context
	Stack_1_tE925D2926B7991D3747639F04BFD07367E36C4DA * ___context_4;

public:
	inline static int32_t get_offset_of_inDoubleString_0() { return static_cast<int32_t>(offsetof(JsonFormatter_t1E6A6A2DEF26F59BF00E56DDC3E07A13B1A4E187, ___inDoubleString_0)); }
	inline bool get_inDoubleString_0() const { return ___inDoubleString_0; }
	inline bool* get_address_of_inDoubleString_0() { return &___inDoubleString_0; }
	inline void set_inDoubleString_0(bool value)
	{
		___inDoubleString_0 = value;
	}

	inline static int32_t get_offset_of_inSingleString_1() { return static_cast<int32_t>(offsetof(JsonFormatter_t1E6A6A2DEF26F59BF00E56DDC3E07A13B1A4E187, ___inSingleString_1)); }
	inline bool get_inSingleString_1() const { return ___inSingleString_1; }
	inline bool* get_address_of_inSingleString_1() { return &___inSingleString_1; }
	inline void set_inSingleString_1(bool value)
	{
		___inSingleString_1 = value;
	}

	inline static int32_t get_offset_of_inVariableAssignment_2() { return static_cast<int32_t>(offsetof(JsonFormatter_t1E6A6A2DEF26F59BF00E56DDC3E07A13B1A4E187, ___inVariableAssignment_2)); }
	inline bool get_inVariableAssignment_2() const { return ___inVariableAssignment_2; }
	inline bool* get_address_of_inVariableAssignment_2() { return &___inVariableAssignment_2; }
	inline void set_inVariableAssignment_2(bool value)
	{
		___inVariableAssignment_2 = value;
	}

	inline static int32_t get_offset_of_prevChar_3() { return static_cast<int32_t>(offsetof(JsonFormatter_t1E6A6A2DEF26F59BF00E56DDC3E07A13B1A4E187, ___prevChar_3)); }
	inline Il2CppChar get_prevChar_3() const { return ___prevChar_3; }
	inline Il2CppChar* get_address_of_prevChar_3() { return &___prevChar_3; }
	inline void set_prevChar_3(Il2CppChar value)
	{
		___prevChar_3 = value;
	}

	inline static int32_t get_offset_of_context_4() { return static_cast<int32_t>(offsetof(JsonFormatter_t1E6A6A2DEF26F59BF00E56DDC3E07A13B1A4E187, ___context_4)); }
	inline Stack_1_tE925D2926B7991D3747639F04BFD07367E36C4DA * get_context_4() const { return ___context_4; }
	inline Stack_1_tE925D2926B7991D3747639F04BFD07367E36C4DA ** get_address_of_context_4() { return &___context_4; }
	inline void set_context_4(Stack_1_tE925D2926B7991D3747639F04BFD07367E36C4DA * value)
	{
		___context_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___context_4), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Prime31.PocoJsonSerializerStrategy
struct  PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C  : public RuntimeObject
{
public:
	// Prime31.Reflection.CacheResolver Prime31.PocoJsonSerializerStrategy::cacheResolver
	CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0 * ___cacheResolver_0;

public:
	inline static int32_t get_offset_of_cacheResolver_0() { return static_cast<int32_t>(offsetof(PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C, ___cacheResolver_0)); }
	inline CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0 * get_cacheResolver_0() const { return ___cacheResolver_0; }
	inline CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0 ** get_address_of_cacheResolver_0() { return &___cacheResolver_0; }
	inline void set_cacheResolver_0(CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0 * value)
	{
		___cacheResolver_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cacheResolver_0), (void*)value);
	}
};

struct PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C_StaticFields
{
public:
	// System.String[] Prime31.PocoJsonSerializerStrategy::Iso8601Format
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___Iso8601Format_1;

public:
	inline static int32_t get_offset_of_Iso8601Format_1() { return static_cast<int32_t>(offsetof(PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C_StaticFields, ___Iso8601Format_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_Iso8601Format_1() const { return ___Iso8601Format_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_Iso8601Format_1() { return &___Iso8601Format_1; }
	inline void set_Iso8601Format_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___Iso8601Format_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Iso8601Format_1), (void*)value);
	}
};


// Prime31.Reflection.ReflectionUtils
struct  ReflectionUtils_t595D5C05C7535DA3138A432697984E48F8DA8C7E  : public RuntimeObject
{
public:

public:
};


// Prime31.SimpleJson
struct  SimpleJson_t020F22AD3AA0346D41DBB61964A925E4F60810BF  : public RuntimeObject
{
public:

public:
};

struct SimpleJson_t020F22AD3AA0346D41DBB61964A925E4F60810BF_StaticFields
{
public:
	// Prime31.IJsonSerializerStrategy Prime31.SimpleJson::_currentJsonSerializerStrategy
	RuntimeObject* ____currentJsonSerializerStrategy_0;
	// Prime31.PocoJsonSerializerStrategy Prime31.SimpleJson::_pocoJsonSerializerStrategy
	PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C * ____pocoJsonSerializerStrategy_1;

public:
	inline static int32_t get_offset_of__currentJsonSerializerStrategy_0() { return static_cast<int32_t>(offsetof(SimpleJson_t020F22AD3AA0346D41DBB61964A925E4F60810BF_StaticFields, ____currentJsonSerializerStrategy_0)); }
	inline RuntimeObject* get__currentJsonSerializerStrategy_0() const { return ____currentJsonSerializerStrategy_0; }
	inline RuntimeObject** get_address_of__currentJsonSerializerStrategy_0() { return &____currentJsonSerializerStrategy_0; }
	inline void set__currentJsonSerializerStrategy_0(RuntimeObject* value)
	{
		____currentJsonSerializerStrategy_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentJsonSerializerStrategy_0), (void*)value);
	}

	inline static int32_t get_offset_of__pocoJsonSerializerStrategy_1() { return static_cast<int32_t>(offsetof(SimpleJson_t020F22AD3AA0346D41DBB61964A925E4F60810BF_StaticFields, ____pocoJsonSerializerStrategy_1)); }
	inline PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C * get__pocoJsonSerializerStrategy_1() const { return ____pocoJsonSerializerStrategy_1; }
	inline PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C ** get_address_of__pocoJsonSerializerStrategy_1() { return &____pocoJsonSerializerStrategy_1; }
	inline void set__pocoJsonSerializerStrategy_1(PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C * value)
	{
		____pocoJsonSerializerStrategy_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pocoJsonSerializerStrategy_1), (void*)value);
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


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
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


// Prime31.Utils
struct  Utils_t85C5FDA270D9AB7E9CC8ADFCA19B9B7C75B9062D  : public RuntimeObject
{
public:

public:
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

// Prime31.Reflection.CacheResolver/<createGetHandler>c__AnonStorey1
struct  U3CcreateGetHandlerU3Ec__AnonStorey1_t02A1377C5EAAAC329AE9F663DFD282EA5CF2108E  : public RuntimeObject
{
public:
	// System.Reflection.FieldInfo Prime31.Reflection.CacheResolver/<createGetHandler>c__AnonStorey1::fieldInfo
	FieldInfo_t * ___fieldInfo_0;

public:
	inline static int32_t get_offset_of_fieldInfo_0() { return static_cast<int32_t>(offsetof(U3CcreateGetHandlerU3Ec__AnonStorey1_t02A1377C5EAAAC329AE9F663DFD282EA5CF2108E, ___fieldInfo_0)); }
	inline FieldInfo_t * get_fieldInfo_0() const { return ___fieldInfo_0; }
	inline FieldInfo_t ** get_address_of_fieldInfo_0() { return &___fieldInfo_0; }
	inline void set_fieldInfo_0(FieldInfo_t * value)
	{
		___fieldInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fieldInfo_0), (void*)value);
	}
};


// Prime31.Reflection.CacheResolver/<createGetHandler>c__AnonStorey3
struct  U3CcreateGetHandlerU3Ec__AnonStorey3_t3C5E60C6B5886F65A76AAB8AFF20B57B80F8712A  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo Prime31.Reflection.CacheResolver/<createGetHandler>c__AnonStorey3::getMethodInfo
	MethodInfo_t * ___getMethodInfo_0;

public:
	inline static int32_t get_offset_of_getMethodInfo_0() { return static_cast<int32_t>(offsetof(U3CcreateGetHandlerU3Ec__AnonStorey3_t3C5E60C6B5886F65A76AAB8AFF20B57B80F8712A, ___getMethodInfo_0)); }
	inline MethodInfo_t * get_getMethodInfo_0() const { return ___getMethodInfo_0; }
	inline MethodInfo_t ** get_address_of_getMethodInfo_0() { return &___getMethodInfo_0; }
	inline void set_getMethodInfo_0(MethodInfo_t * value)
	{
		___getMethodInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getMethodInfo_0), (void*)value);
	}
};


// Prime31.Reflection.CacheResolver/<createSetHandler>c__AnonStorey2
struct  U3CcreateSetHandlerU3Ec__AnonStorey2_t3C37B8E13768D45BB60408EDA64A9D6452077CE0  : public RuntimeObject
{
public:
	// System.Reflection.FieldInfo Prime31.Reflection.CacheResolver/<createSetHandler>c__AnonStorey2::fieldInfo
	FieldInfo_t * ___fieldInfo_0;

public:
	inline static int32_t get_offset_of_fieldInfo_0() { return static_cast<int32_t>(offsetof(U3CcreateSetHandlerU3Ec__AnonStorey2_t3C37B8E13768D45BB60408EDA64A9D6452077CE0, ___fieldInfo_0)); }
	inline FieldInfo_t * get_fieldInfo_0() const { return ___fieldInfo_0; }
	inline FieldInfo_t ** get_address_of_fieldInfo_0() { return &___fieldInfo_0; }
	inline void set_fieldInfo_0(FieldInfo_t * value)
	{
		___fieldInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fieldInfo_0), (void*)value);
	}
};


// Prime31.Reflection.CacheResolver/<createSetHandler>c__AnonStorey4
struct  U3CcreateSetHandlerU3Ec__AnonStorey4_tD61E3F935224CDCF591C2A5450A489564F55A099  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo Prime31.Reflection.CacheResolver/<createSetHandler>c__AnonStorey4::setMethodInfo
	MethodInfo_t * ___setMethodInfo_0;

public:
	inline static int32_t get_offset_of_setMethodInfo_0() { return static_cast<int32_t>(offsetof(U3CcreateSetHandlerU3Ec__AnonStorey4_tD61E3F935224CDCF591C2A5450A489564F55A099, ___setMethodInfo_0)); }
	inline MethodInfo_t * get_setMethodInfo_0() const { return ___setMethodInfo_0; }
	inline MethodInfo_t ** get_address_of_setMethodInfo_0() { return &___setMethodInfo_0; }
	inline void set_setMethodInfo_0(MethodInfo_t * value)
	{
		___setMethodInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setMethodInfo_0), (void*)value);
	}
};


// Prime31.Reflection.CacheResolver/<getNewInstance>c__AnonStorey0
struct  U3CgetNewInstanceU3Ec__AnonStorey0_t0874DDADE8E8CD3874E55EB03602C06A726898CA  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo Prime31.Reflection.CacheResolver/<getNewInstance>c__AnonStorey0::constructorInfo
	ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___constructorInfo_0;

public:
	inline static int32_t get_offset_of_constructorInfo_0() { return static_cast<int32_t>(offsetof(U3CgetNewInstanceU3Ec__AnonStorey0_t0874DDADE8E8CD3874E55EB03602C06A726898CA, ___constructorInfo_0)); }
	inline ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * get_constructorInfo_0() const { return ___constructorInfo_0; }
	inline ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B ** get_address_of_constructorInfo_0() { return &___constructorInfo_0; }
	inline void set_constructorInfo_0(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * value)
	{
		___constructorInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___constructorInfo_0), (void*)value);
	}
};


// Prime31.Reflection.CacheResolver/MemberMap
struct  MemberMap_tA722F3C527755D23AB14FC21BFE6A283F7C75D66  : public RuntimeObject
{
public:
	// System.Reflection.MemberInfo Prime31.Reflection.CacheResolver/MemberMap::MemberInfo
	MemberInfo_t * ___MemberInfo_0;
	// System.Type Prime31.Reflection.CacheResolver/MemberMap::Type
	Type_t * ___Type_1;
	// Prime31.Reflection.GetHandler Prime31.Reflection.CacheResolver/MemberMap::Getter
	GetHandler_tAE31D3C378B82D9F3EC44C4BD9691E9E1836ED73 * ___Getter_2;
	// Prime31.Reflection.SetHandler Prime31.Reflection.CacheResolver/MemberMap::Setter
	SetHandler_tAE38CDA0AFD7619D49B7E3A9FE386955818B44E8 * ___Setter_3;

public:
	inline static int32_t get_offset_of_MemberInfo_0() { return static_cast<int32_t>(offsetof(MemberMap_tA722F3C527755D23AB14FC21BFE6A283F7C75D66, ___MemberInfo_0)); }
	inline MemberInfo_t * get_MemberInfo_0() const { return ___MemberInfo_0; }
	inline MemberInfo_t ** get_address_of_MemberInfo_0() { return &___MemberInfo_0; }
	inline void set_MemberInfo_0(MemberInfo_t * value)
	{
		___MemberInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(MemberMap_tA722F3C527755D23AB14FC21BFE6A283F7C75D66, ___Type_1)); }
	inline Type_t * get_Type_1() const { return ___Type_1; }
	inline Type_t ** get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(Type_t * value)
	{
		___Type_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Type_1), (void*)value);
	}

	inline static int32_t get_offset_of_Getter_2() { return static_cast<int32_t>(offsetof(MemberMap_tA722F3C527755D23AB14FC21BFE6A283F7C75D66, ___Getter_2)); }
	inline GetHandler_tAE31D3C378B82D9F3EC44C4BD9691E9E1836ED73 * get_Getter_2() const { return ___Getter_2; }
	inline GetHandler_tAE31D3C378B82D9F3EC44C4BD9691E9E1836ED73 ** get_address_of_Getter_2() { return &___Getter_2; }
	inline void set_Getter_2(GetHandler_tAE31D3C378B82D9F3EC44C4BD9691E9E1836ED73 * value)
	{
		___Getter_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Getter_2), (void*)value);
	}

	inline static int32_t get_offset_of_Setter_3() { return static_cast<int32_t>(offsetof(MemberMap_tA722F3C527755D23AB14FC21BFE6A283F7C75D66, ___Setter_3)); }
	inline SetHandler_tAE38CDA0AFD7619D49B7E3A9FE386955818B44E8 * get_Setter_3() const { return ___Setter_3; }
	inline SetHandler_tAE38CDA0AFD7619D49B7E3A9FE386955818B44E8 ** get_address_of_Setter_3() { return &___Setter_3; }
	inline void set_Setter_3(SetHandler_tAE38CDA0AFD7619D49B7E3A9FE386955818B44E8 * value)
	{
		___Setter_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Setter_3), (void*)value);
	}
};


// Prime31.Json/Deserializer
struct  Deserializer_t462BAFC366F4A16034E00799D6C0E08B2A720212  : public RuntimeObject
{
public:
	// System.Char[] Prime31.Json/Deserializer::charArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___charArray_0;

public:
	inline static int32_t get_offset_of_charArray_0() { return static_cast<int32_t>(offsetof(Deserializer_t462BAFC366F4A16034E00799D6C0E08B2A720212, ___charArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_charArray_0() const { return ___charArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_charArray_0() { return &___charArray_0; }
	inline void set_charArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___charArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charArray_0), (void*)value);
	}
};


// Prime31.Json/ObjectDecoder
struct  ObjectDecoder_tA5ED99430A82C53E75E54ACC619AE501AAAAD8C6  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.Object,System.Object>> Prime31.Json/ObjectDecoder::_memberInfo
	Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4 * ____memberInfo_0;

public:
	inline static int32_t get_offset_of__memberInfo_0() { return static_cast<int32_t>(offsetof(ObjectDecoder_tA5ED99430A82C53E75E54ACC619AE501AAAAD8C6, ____memberInfo_0)); }
	inline Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4 * get__memberInfo_0() const { return ____memberInfo_0; }
	inline Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4 ** get_address_of__memberInfo_0() { return &____memberInfo_0; }
	inline void set__memberInfo_0(Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4 * value)
	{
		____memberInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____memberInfo_0), (void*)value);
	}
};


// Prime31.Json/Serializer
struct  Serializer_t8E8E654A0E429ECF8D377E7F0081F82173C60854  : public RuntimeObject
{
public:
	// System.Text.StringBuilder Prime31.Json/Serializer::_builder
	StringBuilder_t * ____builder_0;

public:
	inline static int32_t get_offset_of__builder_0() { return static_cast<int32_t>(offsetof(Serializer_t8E8E654A0E429ECF8D377E7F0081F82173C60854, ____builder_0)); }
	inline StringBuilder_t * get__builder_0() const { return ____builder_0; }
	inline StringBuilder_t ** get_address_of__builder_0() { return &____builder_0; }
	inline void set__builder_0(StringBuilder_t * value)
	{
		____builder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____builder_0), (void*)value);
	}
};


// Prime31.Json/ObjectDecoder/<getMembersWithSetters>c__AnonStorey0
struct  U3CgetMembersWithSettersU3Ec__AnonStorey0_t1D44DCBA25E160019A1FE234896DCD22AE74AA1C  : public RuntimeObject
{
public:
	// System.Reflection.FieldInfo Prime31.Json/ObjectDecoder/<getMembersWithSetters>c__AnonStorey0::theInfo
	FieldInfo_t * ___theInfo_0;
	// System.Type Prime31.Json/ObjectDecoder/<getMembersWithSetters>c__AnonStorey0::theFieldType
	Type_t * ___theFieldType_1;

public:
	inline static int32_t get_offset_of_theInfo_0() { return static_cast<int32_t>(offsetof(U3CgetMembersWithSettersU3Ec__AnonStorey0_t1D44DCBA25E160019A1FE234896DCD22AE74AA1C, ___theInfo_0)); }
	inline FieldInfo_t * get_theInfo_0() const { return ___theInfo_0; }
	inline FieldInfo_t ** get_address_of_theInfo_0() { return &___theInfo_0; }
	inline void set_theInfo_0(FieldInfo_t * value)
	{
		___theInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___theInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_theFieldType_1() { return static_cast<int32_t>(offsetof(U3CgetMembersWithSettersU3Ec__AnonStorey0_t1D44DCBA25E160019A1FE234896DCD22AE74AA1C, ___theFieldType_1)); }
	inline Type_t * get_theFieldType_1() const { return ___theFieldType_1; }
	inline Type_t ** get_address_of_theFieldType_1() { return &___theFieldType_1; }
	inline void set_theFieldType_1(Type_t * value)
	{
		___theFieldType_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___theFieldType_1), (void*)value);
	}
};


// Prime31.Json/ObjectDecoder/<getMembersWithSetters>c__AnonStorey1
struct  U3CgetMembersWithSettersU3Ec__AnonStorey1_tC36F03EB94E9570E7200C55D5F819BF0C4036206  : public RuntimeObject
{
public:
	// System.Reflection.PropertyInfo Prime31.Json/ObjectDecoder/<getMembersWithSetters>c__AnonStorey1::theInfo
	PropertyInfo_t * ___theInfo_0;
	// System.Type Prime31.Json/ObjectDecoder/<getMembersWithSetters>c__AnonStorey1::thePropertyType
	Type_t * ___thePropertyType_1;

public:
	inline static int32_t get_offset_of_theInfo_0() { return static_cast<int32_t>(offsetof(U3CgetMembersWithSettersU3Ec__AnonStorey1_tC36F03EB94E9570E7200C55D5F819BF0C4036206, ___theInfo_0)); }
	inline PropertyInfo_t * get_theInfo_0() const { return ___theInfo_0; }
	inline PropertyInfo_t ** get_address_of_theInfo_0() { return &___theInfo_0; }
	inline void set_theInfo_0(PropertyInfo_t * value)
	{
		___theInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___theInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_thePropertyType_1() { return static_cast<int32_t>(offsetof(U3CgetMembersWithSettersU3Ec__AnonStorey1_tC36F03EB94E9570E7200C55D5F819BF0C4036206, ___thePropertyType_1)); }
	inline Type_t * get_thePropertyType_1() const { return ___thePropertyType_1; }
	inline Type_t ** get_address_of_thePropertyType_1() { return &___thePropertyType_1; }
	inline void set_thePropertyType_1(Type_t * value)
	{
		___thePropertyType_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___thePropertyType_1), (void*)value);
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


// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Object>
struct  Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::dictionary
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::version
	int32_t ___version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::currentKey
	String_t* ___currentKey_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF, ___dictionary_0)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentKey_3() { return static_cast<int32_t>(offsetof(Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF, ___currentKey_3)); }
	inline String_t* get_currentKey_3() const { return ___currentKey_3; }
	inline String_t** get_address_of_currentKey_3() { return &___currentKey_3; }
	inline void set_currentKey_3(String_t* value)
	{
		___currentKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentKey_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
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


// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct  KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>
struct  KeyValuePair_2_tFD5EE2073212402F9FBA969914B0938321EEC655 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	MemberMap_tA722F3C527755D23AB14FC21BFE6A283F7C75D66 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFD5EE2073212402F9FBA969914B0938321EEC655, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFD5EE2073212402F9FBA969914B0938321EEC655, ___value_1)); }
	inline MemberMap_tA722F3C527755D23AB14FC21BFE6A283F7C75D66 * get_value_1() const { return ___value_1; }
	inline MemberMap_tA722F3C527755D23AB14FC21BFE6A283F7C75D66 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(MemberMap_tA722F3C527755D23AB14FC21BFE6A283F7C75D66 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
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


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
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


// System.DateTime
struct  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
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


// System.Decimal
struct  Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
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

// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Guid
struct  Guid_t 
{
public:
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

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}
};


// System.Int16
struct  Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
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


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
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


// Prime31.JsonArray
struct  JsonArray_tA3865B4DBA65F47D2EBA6C1A04041AC601AAB754  : public List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5
{
public:

public:
};


// Prime31.JsonObject
struct  JsonObject_t3BFE094F9029834331827285E25845AAB69816A6  : public Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399
{
public:

public:
};


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.ParameterModifier
struct  ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA 
{
public:
	// System.Boolean[] System.Reflection.ParameterModifier::_byRef
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ____byRef_0;

public:
	inline static int32_t get_offset_of__byRef_0() { return static_cast<int32_t>(offsetof(ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA, ____byRef_0)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get__byRef_0() const { return ____byRef_0; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of__byRef_0() { return &____byRef_0; }
	inline void set__byRef_0(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		____byRef_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____byRef_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA_marshaled_pinvoke
{
	int32_t* ____byRef_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA_marshaled_com
{
	int32_t* ____byRef_0;
};

// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
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


// System.SByte
struct  SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
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


// System.UInt16
struct  UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
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


// System.UInt64
struct  UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
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


// System.AppDomain
struct  AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject * ____evidence_6;
	// System.Object System.AppDomain::_granted
	RuntimeObject * ____granted_7;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C * ___AssemblyLoad_11;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___AssemblyResolve_12;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___DomainUnload_13;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___ProcessExit_14;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___ResourceResolve_15;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___TypeResolve_16;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * ___UnhandledException_17;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1 * ___FirstChanceException_18;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject * ____domain_manager_19;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___ReflectionOnlyAssemblyResolve_20;
	// System.Object System.AppDomain::_activation
	RuntimeObject * ____activation_21;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject * ____applicationIdentity_22;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___compatibility_switch_23;

public:
	inline static int32_t get_offset_of__mono_app_domain_1() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____mono_app_domain_1)); }
	inline intptr_t get__mono_app_domain_1() const { return ____mono_app_domain_1; }
	inline intptr_t* get_address_of__mono_app_domain_1() { return &____mono_app_domain_1; }
	inline void set__mono_app_domain_1(intptr_t value)
	{
		____mono_app_domain_1 = value;
	}

	inline static int32_t get_offset_of__evidence_6() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____evidence_6)); }
	inline RuntimeObject * get__evidence_6() const { return ____evidence_6; }
	inline RuntimeObject ** get_address_of__evidence_6() { return &____evidence_6; }
	inline void set__evidence_6(RuntimeObject * value)
	{
		____evidence_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_6), (void*)value);
	}

	inline static int32_t get_offset_of__granted_7() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____granted_7)); }
	inline RuntimeObject * get__granted_7() const { return ____granted_7; }
	inline RuntimeObject ** get_address_of__granted_7() { return &____granted_7; }
	inline void set__granted_7(RuntimeObject * value)
	{
		____granted_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_7), (void*)value);
	}

	inline static int32_t get_offset_of__principalPolicy_8() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____principalPolicy_8)); }
	inline int32_t get__principalPolicy_8() const { return ____principalPolicy_8; }
	inline int32_t* get_address_of__principalPolicy_8() { return &____principalPolicy_8; }
	inline void set__principalPolicy_8(int32_t value)
	{
		____principalPolicy_8 = value;
	}

	inline static int32_t get_offset_of_AssemblyLoad_11() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___AssemblyLoad_11)); }
	inline AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C * get_AssemblyLoad_11() const { return ___AssemblyLoad_11; }
	inline AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C ** get_address_of_AssemblyLoad_11() { return &___AssemblyLoad_11; }
	inline void set_AssemblyLoad_11(AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C * value)
	{
		___AssemblyLoad_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyLoad_11), (void*)value);
	}

	inline static int32_t get_offset_of_AssemblyResolve_12() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___AssemblyResolve_12)); }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * get_AssemblyResolve_12() const { return ___AssemblyResolve_12; }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 ** get_address_of_AssemblyResolve_12() { return &___AssemblyResolve_12; }
	inline void set_AssemblyResolve_12(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * value)
	{
		___AssemblyResolve_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyResolve_12), (void*)value);
	}

	inline static int32_t get_offset_of_DomainUnload_13() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___DomainUnload_13)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_DomainUnload_13() const { return ___DomainUnload_13; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_DomainUnload_13() { return &___DomainUnload_13; }
	inline void set_DomainUnload_13(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___DomainUnload_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DomainUnload_13), (void*)value);
	}

	inline static int32_t get_offset_of_ProcessExit_14() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___ProcessExit_14)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_ProcessExit_14() const { return ___ProcessExit_14; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_ProcessExit_14() { return &___ProcessExit_14; }
	inline void set_ProcessExit_14(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___ProcessExit_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProcessExit_14), (void*)value);
	}

	inline static int32_t get_offset_of_ResourceResolve_15() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___ResourceResolve_15)); }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * get_ResourceResolve_15() const { return ___ResourceResolve_15; }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 ** get_address_of_ResourceResolve_15() { return &___ResourceResolve_15; }
	inline void set_ResourceResolve_15(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * value)
	{
		___ResourceResolve_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResourceResolve_15), (void*)value);
	}

	inline static int32_t get_offset_of_TypeResolve_16() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___TypeResolve_16)); }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * get_TypeResolve_16() const { return ___TypeResolve_16; }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 ** get_address_of_TypeResolve_16() { return &___TypeResolve_16; }
	inline void set_TypeResolve_16(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * value)
	{
		___TypeResolve_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeResolve_16), (void*)value);
	}

	inline static int32_t get_offset_of_UnhandledException_17() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___UnhandledException_17)); }
	inline UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * get_UnhandledException_17() const { return ___UnhandledException_17; }
	inline UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 ** get_address_of_UnhandledException_17() { return &___UnhandledException_17; }
	inline void set_UnhandledException_17(UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * value)
	{
		___UnhandledException_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnhandledException_17), (void*)value);
	}

	inline static int32_t get_offset_of_FirstChanceException_18() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___FirstChanceException_18)); }
	inline EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1 * get_FirstChanceException_18() const { return ___FirstChanceException_18; }
	inline EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1 ** get_address_of_FirstChanceException_18() { return &___FirstChanceException_18; }
	inline void set_FirstChanceException_18(EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1 * value)
	{
		___FirstChanceException_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FirstChanceException_18), (void*)value);
	}

	inline static int32_t get_offset_of__domain_manager_19() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____domain_manager_19)); }
	inline RuntimeObject * get__domain_manager_19() const { return ____domain_manager_19; }
	inline RuntimeObject ** get_address_of__domain_manager_19() { return &____domain_manager_19; }
	inline void set__domain_manager_19(RuntimeObject * value)
	{
		____domain_manager_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____domain_manager_19), (void*)value);
	}

	inline static int32_t get_offset_of_ReflectionOnlyAssemblyResolve_20() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___ReflectionOnlyAssemblyResolve_20)); }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * get_ReflectionOnlyAssemblyResolve_20() const { return ___ReflectionOnlyAssemblyResolve_20; }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 ** get_address_of_ReflectionOnlyAssemblyResolve_20() { return &___ReflectionOnlyAssemblyResolve_20; }
	inline void set_ReflectionOnlyAssemblyResolve_20(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * value)
	{
		___ReflectionOnlyAssemblyResolve_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReflectionOnlyAssemblyResolve_20), (void*)value);
	}

	inline static int32_t get_offset_of__activation_21() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____activation_21)); }
	inline RuntimeObject * get__activation_21() const { return ____activation_21; }
	inline RuntimeObject ** get_address_of__activation_21() { return &____activation_21; }
	inline void set__activation_21(RuntimeObject * value)
	{
		____activation_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activation_21), (void*)value);
	}

	inline static int32_t get_offset_of__applicationIdentity_22() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____applicationIdentity_22)); }
	inline RuntimeObject * get__applicationIdentity_22() const { return ____applicationIdentity_22; }
	inline RuntimeObject ** get_address_of__applicationIdentity_22() { return &____applicationIdentity_22; }
	inline void set__applicationIdentity_22(RuntimeObject * value)
	{
		____applicationIdentity_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____applicationIdentity_22), (void*)value);
	}

	inline static int32_t get_offset_of_compatibility_switch_23() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___compatibility_switch_23)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_compatibility_switch_23() const { return ___compatibility_switch_23; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_compatibility_switch_23() { return &___compatibility_switch_23; }
	inline void set_compatibility_switch_23(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___compatibility_switch_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compatibility_switch_23), (void*)value);
	}
};

struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_StaticFields
{
public:
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
	// System.AppDomain System.AppDomain::default_domain
	AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * ___default_domain_10;

public:
	inline static int32_t get_offset_of__process_guid_2() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_StaticFields, ____process_guid_2)); }
	inline String_t* get__process_guid_2() const { return ____process_guid_2; }
	inline String_t** get_address_of__process_guid_2() { return &____process_guid_2; }
	inline void set__process_guid_2(String_t* value)
	{
		____process_guid_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____process_guid_2), (void*)value);
	}

	inline static int32_t get_offset_of_default_domain_10() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_StaticFields, ___default_domain_10)); }
	inline AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * get_default_domain_10() const { return ___default_domain_10; }
	inline AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A ** get_address_of_default_domain_10() { return &___default_domain_10; }
	inline void set_default_domain_10(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * value)
	{
		___default_domain_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_domain_10), (void*)value);
	}
};

struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___assembly_resolve_in_progress_refonly_5;
	// System.Object System.AppDomain::_principal
	RuntimeObject * ____principal_9;

public:
	inline static int32_t get_offset_of_type_resolve_in_progress_3() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields, ___type_resolve_in_progress_3)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_type_resolve_in_progress_3() const { return ___type_resolve_in_progress_3; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_type_resolve_in_progress_3() { return &___type_resolve_in_progress_3; }
	inline void set_type_resolve_in_progress_3(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___type_resolve_in_progress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_resolve_in_progress_3), (void*)value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_4() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields, ___assembly_resolve_in_progress_4)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_assembly_resolve_in_progress_4() const { return ___assembly_resolve_in_progress_4; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_assembly_resolve_in_progress_4() { return &___assembly_resolve_in_progress_4; }
	inline void set_assembly_resolve_in_progress_4(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___assembly_resolve_in_progress_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_resolve_in_progress_4), (void*)value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_refonly_5() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields, ___assembly_resolve_in_progress_refonly_5)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_assembly_resolve_in_progress_refonly_5() const { return ___assembly_resolve_in_progress_refonly_5; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_assembly_resolve_in_progress_refonly_5() { return &___assembly_resolve_in_progress_refonly_5; }
	inline void set_assembly_resolve_in_progress_refonly_5(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___assembly_resolve_in_progress_refonly_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_resolve_in_progress_refonly_5), (void*)value);
	}

	inline static int32_t get_offset_of__principal_9() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields, ____principal_9)); }
	inline RuntimeObject * get__principal_9() const { return ____principal_9; }
	inline RuntimeObject ** get_address_of__principal_9() { return &____principal_9; }
	inline void set__principal_9(RuntimeObject * value)
	{
		____principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____principal_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_11;
	Il2CppMethodPointer ___AssemblyResolve_12;
	Il2CppMethodPointer ___DomainUnload_13;
	Il2CppMethodPointer ___ProcessExit_14;
	Il2CppMethodPointer ___ResourceResolve_15;
	Il2CppMethodPointer ___TypeResolve_16;
	Il2CppMethodPointer ___UnhandledException_17;
	Il2CppMethodPointer ___FirstChanceException_18;
	Il2CppIUnknown* ____domain_manager_19;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_20;
	Il2CppIUnknown* ____activation_21;
	Il2CppIUnknown* ____applicationIdentity_22;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___compatibility_switch_23;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_11;
	Il2CppMethodPointer ___AssemblyResolve_12;
	Il2CppMethodPointer ___DomainUnload_13;
	Il2CppMethodPointer ___ProcessExit_14;
	Il2CppMethodPointer ___ResourceResolve_15;
	Il2CppMethodPointer ___TypeResolve_16;
	Il2CppMethodPointer ___UnhandledException_17;
	Il2CppMethodPointer ___FirstChanceException_18;
	Il2CppIUnknown* ____domain_manager_19;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_20;
	Il2CppIUnknown* ____activation_21;
	Il2CppIUnknown* ____applicationIdentity_22;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___compatibility_switch_23;
};

// System.Reflection.Assembly
struct  Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	// System.Object System.Reflection.Assembly::_evidence
	RuntimeObject * ____evidence_2;
	// System.Object System.Reflection.Assembly::_minimum
	RuntimeObject * ____minimum_3;
	// System.Object System.Reflection.Assembly::_optional
	RuntimeObject * ____optional_4;
	// System.Object System.Reflection.Assembly::_refuse
	RuntimeObject * ____refuse_5;
	// System.Object System.Reflection.Assembly::_granted
	RuntimeObject * ____granted_6;
	// System.Object System.Reflection.Assembly::_denied
	RuntimeObject * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolve_event_holder_1), (void*)value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline RuntimeObject * get__evidence_2() const { return ____evidence_2; }
	inline RuntimeObject ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(RuntimeObject * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_2), (void*)value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline RuntimeObject * get__minimum_3() const { return ____minimum_3; }
	inline RuntimeObject ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(RuntimeObject * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minimum_3), (void*)value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline RuntimeObject * get__optional_4() const { return ____optional_4; }
	inline RuntimeObject ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(RuntimeObject * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____optional_4), (void*)value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline RuntimeObject * get__refuse_5() const { return ____refuse_5; }
	inline RuntimeObject ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(RuntimeObject * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____refuse_5), (void*)value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline RuntimeObject * get__granted_6() const { return ____granted_6; }
	inline RuntimeObject ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(RuntimeObject * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_6), (void*)value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline RuntimeObject * get__denied_7() const { return ____denied_7; }
	inline RuntimeObject ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(RuntimeObject * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____denied_7), (void*)value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assemblyName_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.ConstructorInfo
struct  ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B  : public MethodBase_t
{
public:

public:
};

struct ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConstructorName_0), (void*)value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeConstructorName_1), (void*)value);
	}
};


// System.DateTimeKind
struct  DateTimeKind_tA0B5F3F88991AC3B7F24393E15B54062722571D0 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeKind_tA0B5F3F88991AC3B7F24393E15B54062722571D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Globalization.DateTimeStyles
struct  DateTimeStyles_t2E18E2817B83F518AD684A16EB44A96EE6E765D4 
{
public:
	// System.Int32 System.Globalization.DateTimeStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeStyles_t2E18E2817B83F518AD684A16EB44A96EE6E765D4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// UnityEngine.FontStyle
struct  FontStyle_t98609253DA79E5B3198BD60AD3518C5B6A2DCF96 
{
public:
	// System.Int32 UnityEngine.FontStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontStyle_t98609253DA79E5B3198BD60AD3518C5B6A2DCF96, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.GUIStyleState
struct  GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9, ___m_SourceStyle_1)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com* ___m_SourceStyle_1;
};

// System.Int32Enum
struct  Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.LogType
struct  LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// System.Globalization.NumberStyles
struct  NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// UnityEngine.RectOffset
struct  RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70  : public RuntimeObject
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


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.StringComparison
struct  StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextAnchor
struct  TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct  TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
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


// System.UriIdnScope
struct  UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.GUILayoutOption/Type
struct  Type_t79FB5C82B695061CED8D628CBB6A1E8709705288 
{
public:
	// System.Int32 UnityEngine.GUILayoutOption/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t79FB5C82B695061CED8D628CBB6A1E8709705288, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Prime31.JsonFormatter/JsonContextType
struct  JsonContextType_tB2AE5C1583B9481C40BB8B2CAFAD3F84E9456E61 
{
public:
	// System.Int32 Prime31.JsonFormatter/JsonContextType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonContextType_tB2AE5C1583B9481C40BB8B2CAFAD3F84E9456E61, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Uri/Flags
struct  Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4 
{
public:
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// Prime31.Json/Deserializer/JsonToken
struct  JsonToken_t5282CBA8E5168BC85CDD9D2076CC89FDAF44284B 
{
public:
	// System.Int32 Prime31.Json/Deserializer/JsonToken::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonToken_t5282CBA8E5168BC85CDD9D2076CC89FDAF44284B, ___value___2)); }
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


// UnityEngine.GUILayoutOption
struct  GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB  : public RuntimeObject
{
public:
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// UnityEngine.GUIStyle
struct  GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Normal_1)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normal_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Hover_2)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Hover_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Active_3)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Active_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Focused_4)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Focused_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnNormal_5)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnNormal_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnHover_6)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnHover_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnActive_7)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnActive_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnFocused_8)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFocused_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Border_9)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Border_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Padding_10)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Padding_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Margin_11)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Margin_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Overflow_12)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Overflow_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Name_13() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Name_13)); }
	inline String_t* get_m_Name_13() const { return ___m_Name_13; }
	inline String_t** get_address_of_m_Name_13() { return &___m_Name_13; }
	inline void set_m_Name_13(String_t* value)
	{
		___m_Name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_13), (void*)value);
	}
};

struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___s_None_15)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_None_15), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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

// UnityEngine.ScriptableObject
struct  ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
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


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.UnityException
struct  UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101  : public Exception_t
{
public:

public:
};


// System.Uri
struct  Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;

public:
	inline static int32_t get_offset_of_m_String_13() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_String_13)); }
	inline String_t* get_m_String_13() const { return ___m_String_13; }
	inline String_t** get_address_of_m_String_13() { return &___m_String_13; }
	inline void set_m_String_13(String_t* value)
	{
		___m_String_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_14() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_originalUnicodeString_14)); }
	inline String_t* get_m_originalUnicodeString_14() const { return ___m_originalUnicodeString_14; }
	inline String_t** get_address_of_m_originalUnicodeString_14() { return &___m_originalUnicodeString_14; }
	inline void set_m_originalUnicodeString_14(String_t* value)
	{
		___m_originalUnicodeString_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_15() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Syntax_15)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_m_Syntax_15() const { return ___m_Syntax_15; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_m_Syntax_15() { return &___m_Syntax_15; }
	inline void set_m_Syntax_15(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___m_Syntax_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_16() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_DnsSafeHost_16)); }
	inline String_t* get_m_DnsSafeHost_16() const { return ___m_DnsSafeHost_16; }
	inline String_t** get_address_of_m_DnsSafeHost_16() { return &___m_DnsSafeHost_16; }
	inline void set_m_DnsSafeHost_16(String_t* value)
	{
		___m_DnsSafeHost_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_17() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Flags_17)); }
	inline uint64_t get_m_Flags_17() const { return ___m_Flags_17; }
	inline uint64_t* get_address_of_m_Flags_17() { return &___m_Flags_17; }
	inline void set_m_Flags_17(uint64_t value)
	{
		___m_Flags_17 = value;
	}

	inline static int32_t get_offset_of_m_Info_18() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Info_18)); }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * get_m_Info_18() const { return ___m_Info_18; }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 ** get_address_of_m_Info_18() { return &___m_Info_18; }
	inline void set_m_Info_18(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * value)
	{
		___m_Info_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_19() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_iriParsing_19)); }
	inline bool get_m_iriParsing_19() const { return ___m_iriParsing_19; }
	inline bool* get_address_of_m_iriParsing_19() { return &___m_iriParsing_19; }
	inline void set_m_iriParsing_19(bool value)
	{
		___m_iriParsing_19 = value;
	}
};

struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____WSchars_28;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_20() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitialized_20)); }
	inline bool get_s_ConfigInitialized_20() const { return ___s_ConfigInitialized_20; }
	inline bool* get_address_of_s_ConfigInitialized_20() { return &___s_ConfigInitialized_20; }
	inline void set_s_ConfigInitialized_20(bool value)
	{
		___s_ConfigInitialized_20 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_21() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitializing_21)); }
	inline bool get_s_ConfigInitializing_21() const { return ___s_ConfigInitializing_21; }
	inline bool* get_address_of_s_ConfigInitializing_21() { return &___s_ConfigInitializing_21; }
	inline void set_s_ConfigInitializing_21(bool value)
	{
		___s_ConfigInitializing_21 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_22() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IdnScope_22)); }
	inline int32_t get_s_IdnScope_22() const { return ___s_IdnScope_22; }
	inline int32_t* get_address_of_s_IdnScope_22() { return &___s_IdnScope_22; }
	inline void set_s_IdnScope_22(int32_t value)
	{
		___s_IdnScope_22 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_23() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IriParsing_23)); }
	inline bool get_s_IriParsing_23() const { return ___s_IriParsing_23; }
	inline bool* get_address_of_s_IriParsing_23() { return &___s_IriParsing_23; }
	inline void set_s_IriParsing_23(bool value)
	{
		___s_IriParsing_23 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_24() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___useDotNetRelativeOrAbsolute_24)); }
	inline bool get_useDotNetRelativeOrAbsolute_24() const { return ___useDotNetRelativeOrAbsolute_24; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_24() { return &___useDotNetRelativeOrAbsolute_24; }
	inline void set_useDotNetRelativeOrAbsolute_24(bool value)
	{
		___useDotNetRelativeOrAbsolute_24 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_25() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___IsWindowsFileSystem_25)); }
	inline bool get_IsWindowsFileSystem_25() const { return ___IsWindowsFileSystem_25; }
	inline bool* get_address_of_IsWindowsFileSystem_25() { return &___IsWindowsFileSystem_25; }
	inline void set_IsWindowsFileSystem_25(bool value)
	{
		___IsWindowsFileSystem_25 = value;
	}

	inline static int32_t get_offset_of_s_initLock_26() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_initLock_26)); }
	inline RuntimeObject * get_s_initLock_26() const { return ___s_initLock_26; }
	inline RuntimeObject ** get_address_of_s_initLock_26() { return &___s_initLock_26; }
	inline void set_s_initLock_26(RuntimeObject * value)
	{
		___s_initLock_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_26), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_27() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___HexLowerChars_27)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HexLowerChars_27() const { return ___HexLowerChars_27; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HexLowerChars_27() { return &___HexLowerChars_27; }
	inline void set_HexLowerChars_27(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HexLowerChars_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_27), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_28() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ____WSchars_28)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__WSchars_28() const { return ____WSchars_28; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__WSchars_28() { return &____WSchars_28; }
	inline void set__WSchars_28(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____WSchars_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_28), (void*)value);
	}
};


// System.Action`1<System.Boolean>
struct  Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Object,System.Object>
struct  Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
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


// UnityEngine.GUISkin
struct  GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * ___m_Font_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_box_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_button_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_toggle_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_label_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_textField_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_textArea_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_window_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumbExtent
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalSliderThumbExtent_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalSlider_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalSliderThumb_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumbExtent
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalSliderThumbExtent_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_SliderMixed
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_SliderMixed_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbar_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbarThumb_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbarLeftButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbarRightButton_22;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbar_23;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbarThumb_24;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbarUpButton_25;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbarDownButton_26;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_ScrollView_27;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* ___m_CustomStyles_28;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * ___m_Settings_29;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * ___m_Styles_31;

public:
	inline static int32_t get_offset_of_m_Font_4() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_Font_4)); }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * get_m_Font_4() const { return ___m_Font_4; }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 ** get_address_of_m_Font_4() { return &___m_Font_4; }
	inline void set_m_Font_4(Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * value)
	{
		___m_Font_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Font_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_box_5() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_box_5)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_box_5() const { return ___m_box_5; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_box_5() { return &___m_box_5; }
	inline void set_m_box_5(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_box_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_box_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_button_6() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_button_6)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_button_6() const { return ___m_button_6; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_button_6() { return &___m_button_6; }
	inline void set_m_button_6(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_button_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_button_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_toggle_7() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_toggle_7)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_toggle_7() const { return ___m_toggle_7; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_toggle_7() { return &___m_toggle_7; }
	inline void set_m_toggle_7(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_toggle_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_toggle_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_label_8() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_label_8)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_label_8() const { return ___m_label_8; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_label_8() { return &___m_label_8; }
	inline void set_m_label_8(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_label_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_label_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_textField_9() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_textField_9)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_textField_9() const { return ___m_textField_9; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_textField_9() { return &___m_textField_9; }
	inline void set_m_textField_9(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_textField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textField_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_textArea_10() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_textArea_10)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_textArea_10() const { return ___m_textArea_10; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_textArea_10() { return &___m_textArea_10; }
	inline void set_m_textArea_10(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_textArea_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textArea_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_window_11() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_window_11)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_window_11() const { return ___m_window_11; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_window_11() { return &___m_window_11; }
	inline void set_m_window_11(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_window_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_window_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSlider_12() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalSlider_12)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalSlider_12() const { return ___m_horizontalSlider_12; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalSlider_12() { return &___m_horizontalSlider_12; }
	inline void set_m_horizontalSlider_12(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalSlider_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSlider_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSliderThumb_13() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalSliderThumb_13)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalSliderThumb_13() const { return ___m_horizontalSliderThumb_13; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalSliderThumb_13() { return &___m_horizontalSliderThumb_13; }
	inline void set_m_horizontalSliderThumb_13(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalSliderThumb_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSliderThumb_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSliderThumbExtent_14() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalSliderThumbExtent_14)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalSliderThumbExtent_14() const { return ___m_horizontalSliderThumbExtent_14; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalSliderThumbExtent_14() { return &___m_horizontalSliderThumbExtent_14; }
	inline void set_m_horizontalSliderThumbExtent_14(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalSliderThumbExtent_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSliderThumbExtent_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSlider_15() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalSlider_15)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalSlider_15() const { return ___m_verticalSlider_15; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalSlider_15() { return &___m_verticalSlider_15; }
	inline void set_m_verticalSlider_15(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalSlider_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSlider_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSliderThumb_16() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalSliderThumb_16)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalSliderThumb_16() const { return ___m_verticalSliderThumb_16; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalSliderThumb_16() { return &___m_verticalSliderThumb_16; }
	inline void set_m_verticalSliderThumb_16(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalSliderThumb_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSliderThumb_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSliderThumbExtent_17() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalSliderThumbExtent_17)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalSliderThumbExtent_17() const { return ___m_verticalSliderThumbExtent_17; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalSliderThumbExtent_17() { return &___m_verticalSliderThumbExtent_17; }
	inline void set_m_verticalSliderThumbExtent_17(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalSliderThumbExtent_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSliderThumbExtent_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_SliderMixed_18() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_SliderMixed_18)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_SliderMixed_18() const { return ___m_SliderMixed_18; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_SliderMixed_18() { return &___m_SliderMixed_18; }
	inline void set_m_SliderMixed_18(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_SliderMixed_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SliderMixed_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbar_19() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbar_19)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbar_19() const { return ___m_horizontalScrollbar_19; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbar_19() { return &___m_horizontalScrollbar_19; }
	inline void set_m_horizontalScrollbar_19(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbar_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbar_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarThumb_20() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbarThumb_20)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbarThumb_20() const { return ___m_horizontalScrollbarThumb_20; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbarThumb_20() { return &___m_horizontalScrollbarThumb_20; }
	inline void set_m_horizontalScrollbarThumb_20(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbarThumb_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarThumb_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarLeftButton_21() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbarLeftButton_21)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbarLeftButton_21() const { return ___m_horizontalScrollbarLeftButton_21; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbarLeftButton_21() { return &___m_horizontalScrollbarLeftButton_21; }
	inline void set_m_horizontalScrollbarLeftButton_21(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbarLeftButton_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarLeftButton_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarRightButton_22() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbarRightButton_22)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbarRightButton_22() const { return ___m_horizontalScrollbarRightButton_22; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbarRightButton_22() { return &___m_horizontalScrollbarRightButton_22; }
	inline void set_m_horizontalScrollbarRightButton_22(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbarRightButton_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarRightButton_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbar_23() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbar_23)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbar_23() const { return ___m_verticalScrollbar_23; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbar_23() { return &___m_verticalScrollbar_23; }
	inline void set_m_verticalScrollbar_23(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbar_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbar_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarThumb_24() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbarThumb_24)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbarThumb_24() const { return ___m_verticalScrollbarThumb_24; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbarThumb_24() { return &___m_verticalScrollbarThumb_24; }
	inline void set_m_verticalScrollbarThumb_24(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbarThumb_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarThumb_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarUpButton_25() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbarUpButton_25)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbarUpButton_25() const { return ___m_verticalScrollbarUpButton_25; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbarUpButton_25() { return &___m_verticalScrollbarUpButton_25; }
	inline void set_m_verticalScrollbarUpButton_25(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbarUpButton_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarUpButton_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarDownButton_26() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbarDownButton_26)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbarDownButton_26() const { return ___m_verticalScrollbarDownButton_26; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbarDownButton_26() { return &___m_verticalScrollbarDownButton_26; }
	inline void set_m_verticalScrollbarDownButton_26(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbarDownButton_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarDownButton_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScrollView_27() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_ScrollView_27)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_ScrollView_27() const { return ___m_ScrollView_27; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_ScrollView_27() { return &___m_ScrollView_27; }
	inline void set_m_ScrollView_27(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_ScrollView_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ScrollView_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_CustomStyles_28() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_CustomStyles_28)); }
	inline GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* get_m_CustomStyles_28() const { return ___m_CustomStyles_28; }
	inline GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70** get_address_of_m_CustomStyles_28() { return &___m_CustomStyles_28; }
	inline void set_m_CustomStyles_28(GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* value)
	{
		___m_CustomStyles_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomStyles_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Settings_29() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_Settings_29)); }
	inline GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * get_m_Settings_29() const { return ___m_Settings_29; }
	inline GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 ** get_address_of_m_Settings_29() { return &___m_Settings_29; }
	inline void set_m_Settings_29(GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * value)
	{
		___m_Settings_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Settings_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Styles_31() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_Styles_31)); }
	inline Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * get_m_Styles_31() const { return ___m_Styles_31; }
	inline Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 ** get_address_of_m_Styles_31() { return &___m_Styles_31; }
	inline void set_m_Styles_31(Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * value)
	{
		___m_Styles_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Styles_31), (void*)value);
	}
};

struct GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields
{
public:
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___ms_Error_30;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * ___m_SkinChanged_32;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * ___current_33;

public:
	inline static int32_t get_offset_of_ms_Error_30() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields, ___ms_Error_30)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_ms_Error_30() const { return ___ms_Error_30; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_ms_Error_30() { return &___ms_Error_30; }
	inline void set_ms_Error_30(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___ms_Error_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ms_Error_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_SkinChanged_32() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields, ___m_SkinChanged_32)); }
	inline SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * get_m_SkinChanged_32() const { return ___m_SkinChanged_32; }
	inline SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E ** get_address_of_m_SkinChanged_32() { return &___m_SkinChanged_32; }
	inline void set_m_SkinChanged_32(SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * value)
	{
		___m_SkinChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SkinChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_current_33() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields, ___current_33)); }
	inline GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * get_current_33() const { return ___current_33; }
	inline GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 ** get_address_of_current_33() { return &___current_33; }
	inline void set_current_33(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * value)
	{
		___current_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_33), (void*)value);
	}
};


// Prime31.Reflection.GetHandler
struct  GetHandler_tAE31D3C378B82D9F3EC44C4BD9691E9E1836ED73  : public MulticastDelegate_t
{
public:

public:
};


// Prime31.Reflection.MemberMapLoader
struct  MemberMapLoader_t56FA45FA01C1729FCF47BAE05C4F8406A5B3E137  : public MulticastDelegate_t
{
public:

public:
};


// Prime31.Reflection.SetHandler
struct  SetHandler_tAE38CDA0AFD7619D49B7E3A9FE386955818B44E8  : public MulticastDelegate_t
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


// UnityEngine.Application/LogCallback
struct  LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD  : public MulticastDelegate_t
{
public:

public:
};


// Prime31.Reflection.CacheResolver/CtorDelegate
struct  CtorDelegate_tC5D8FE74BA0A8B81F9AB288E39882F34B7A2AC2A  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.GUI/WindowFunction
struct  WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
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


// Prime31.CoroutineSurrogate
struct  CoroutineSurrogate_tF087F4451C1E8CEE2341DA4AA7C728C745DFE187  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
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


// Prime31.MonoBehaviourGUI
struct  MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Prime31.MonoBehaviourGUI::_width
	float ____width_4;
	// System.Single Prime31.MonoBehaviourGUI::_buttonHeight
	float ____buttonHeight_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> Prime31.MonoBehaviourGUI::_toggleButtons
	Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C * ____toggleButtons_6;
	// System.Text.StringBuilder Prime31.MonoBehaviourGUI::_logBuilder
	StringBuilder_t * ____logBuilder_7;
	// System.Boolean Prime31.MonoBehaviourGUI::_logRegistered
	bool ____logRegistered_8;
	// UnityEngine.Vector2 Prime31.MonoBehaviourGUI::_logScrollPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ____logScrollPosition_9;
	// System.Boolean Prime31.MonoBehaviourGUI::_isShowingLogConsole
	bool ____isShowingLogConsole_10;
	// System.Single Prime31.MonoBehaviourGUI::_doubleClickDelay
	float ____doubleClickDelay_11;
	// System.Single Prime31.MonoBehaviourGUI::_previousClickTime
	float ____previousClickTime_12;
	// System.Boolean Prime31.MonoBehaviourGUI::_isWindowsPhone
	bool ____isWindowsPhone_13;
	// UnityEngine.Texture2D Prime31.MonoBehaviourGUI::_normalBackground
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____normalBackground_14;
	// UnityEngine.Texture2D Prime31.MonoBehaviourGUI::_bottomButtonBackground
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____bottomButtonBackground_15;
	// UnityEngine.Texture2D Prime31.MonoBehaviourGUI::_activeBackground
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____activeBackground_16;
	// UnityEngine.Texture2D Prime31.MonoBehaviourGUI::_toggleButtonBackground
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____toggleButtonBackground_17;
	// System.Boolean Prime31.MonoBehaviourGUI::_didRetinaIpadCheck
	bool ____didRetinaIpadCheck_18;
	// System.Boolean Prime31.MonoBehaviourGUI::_isRetinaIpad
	bool ____isRetinaIpad_19;

public:
	inline static int32_t get_offset_of__width_4() { return static_cast<int32_t>(offsetof(MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2, ____width_4)); }
	inline float get__width_4() const { return ____width_4; }
	inline float* get_address_of__width_4() { return &____width_4; }
	inline void set__width_4(float value)
	{
		____width_4 = value;
	}

	inline static int32_t get_offset_of__buttonHeight_5() { return static_cast<int32_t>(offsetof(MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2, ____buttonHeight_5)); }
	inline float get__buttonHeight_5() const { return ____buttonHeight_5; }
	inline float* get_address_of__buttonHeight_5() { return &____buttonHeight_5; }
	inline void set__buttonHeight_5(float value)
	{
		____buttonHeight_5 = value;
	}

	inline static int32_t get_offset_of__toggleButtons_6() { return static_cast<int32_t>(offsetof(MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2, ____toggleButtons_6)); }
	inline Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C * get__toggleButtons_6() const { return ____toggleButtons_6; }
	inline Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C ** get_address_of__toggleButtons_6() { return &____toggleButtons_6; }
	inline void set__toggleButtons_6(Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C * value)
	{
		____toggleButtons_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____toggleButtons_6), (void*)value);
	}

	inline static int32_t get_offset_of__logBuilder_7() { return static_cast<int32_t>(offsetof(MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2, ____logBuilder_7)); }
	inline StringBuilder_t * get__logBuilder_7() const { return ____logBuilder_7; }
	inline StringBuilder_t ** get_address_of__logBuilder_7() { return &____logBuilder_7; }
	inline void set__logBuilder_7(StringBuilder_t * value)
	{
		____logBuilder_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____logBuilder_7), (void*)value);
	}

	inline static int32_t get_offset_of__logRegistered_8() { return static_cast<int32_t>(offsetof(MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2, ____logRegistered_8)); }
	inline bool get__logRegistered_8() const { return ____logRegistered_8; }
	inline bool* get_address_of__logRegistered_8() { return &____logRegistered_8; }
	inline void set__logRegistered_8(bool value)
	{
		____logRegistered_8 = value;
	}

	inline static int32_t get_offset_of__logScrollPosition_9() { return static_cast<int32_t>(offsetof(MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2, ____logScrollPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get__logScrollPosition_9() const { return ____logScrollPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of__logScrollPosition_9() { return &____logScrollPosition_9; }
	inline void set__logScrollPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		____logScrollPosition_9 = value;
	}

	inline static int32_t get_offset_of__isShowingLogConsole_10() { return static_cast<int32_t>(offsetof(MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2, ____isShowingLogConsole_10)); }
	inline bool get__isShowingLogConsole_10() const { return ____isShowingLogConsole_10; }
	inline bool* get_address_of__isShowingLogConsole_10() { return &____isShowingLogConsole_10; }
	inline void set__isShowingLogConsole_10(bool value)
	{
		____isShowingLogConsole_10 = value;
	}

	inline static int32_t get_offset_of__doubleClickDelay_11() { return static_cast<int32_t>(offsetof(MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2, ____doubleClickDelay_11)); }
	inline float get__doubleClickDelay_11() const { return ____doubleClickDelay_11; }
	inline float* get_address_of__doubleClickDelay_11() { return &____doubleClickDelay_11; }
	inline void set__doubleClickDelay_11(float value)
	{
		____doubleClickDelay_11 = value;
	}

	inline static int32_t get_offset_of__previousClickTime_12() { return static_cast<int32_t>(offsetof(MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2, ____previousClickTime_12)); }
	inline float get__previousClickTime_12() const { return ____previousClickTime_12; }
	inline float* get_address_of__previousClickTime_12() { return &____previousClickTime_12; }
	inline void set__previousClickTime_12(float value)
	{
		____previousClickTime_12 = value;
	}

	inline static int32_t get_offset_of__isWindowsPhone_13() { return static_cast<int32_t>(offsetof(MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2, ____isWindowsPhone_13)); }
	inline bool get__isWindowsPhone_13() const { return ____isWindowsPhone_13; }
	inline bool* get_address_of__isWindowsPhone_13() { return &____isWindowsPhone_13; }
	inline void set__isWindowsPhone_13(bool value)
	{
		____isWindowsPhone_13 = value;
	}

	inline static int32_t get_offset_of__normalBackground_14() { return static_cast<int32_t>(offsetof(MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2, ____normalBackground_14)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get__normalBackground_14() const { return ____normalBackground_14; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of__normalBackground_14() { return &____normalBackground_14; }
	inline void set__normalBackground_14(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		____normalBackground_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____normalBackground_14), (void*)value);
	}

	inline static int32_t get_offset_of__bottomButtonBackground_15() { return static_cast<int32_t>(offsetof(MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2, ____bottomButtonBackground_15)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get__bottomButtonBackground_15() const { return ____bottomButtonBackground_15; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of__bottomButtonBackground_15() { return &____bottomButtonBackground_15; }
	inline void set__bottomButtonBackground_15(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		____bottomButtonBackground_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bottomButtonBackground_15), (void*)value);
	}

	inline static int32_t get_offset_of__activeBackground_16() { return static_cast<int32_t>(offsetof(MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2, ____activeBackground_16)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get__activeBackground_16() const { return ____activeBackground_16; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of__activeBackground_16() { return &____activeBackground_16; }
	inline void set__activeBackground_16(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		____activeBackground_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeBackground_16), (void*)value);
	}

	inline static int32_t get_offset_of__toggleButtonBackground_17() { return static_cast<int32_t>(offsetof(MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2, ____toggleButtonBackground_17)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get__toggleButtonBackground_17() const { return ____toggleButtonBackground_17; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of__toggleButtonBackground_17() { return &____toggleButtonBackground_17; }
	inline void set__toggleButtonBackground_17(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		____toggleButtonBackground_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____toggleButtonBackground_17), (void*)value);
	}

	inline static int32_t get_offset_of__didRetinaIpadCheck_18() { return static_cast<int32_t>(offsetof(MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2, ____didRetinaIpadCheck_18)); }
	inline bool get__didRetinaIpadCheck_18() const { return ____didRetinaIpadCheck_18; }
	inline bool* get_address_of__didRetinaIpadCheck_18() { return &____didRetinaIpadCheck_18; }
	inline void set__didRetinaIpadCheck_18(bool value)
	{
		____didRetinaIpadCheck_18 = value;
	}

	inline static int32_t get_offset_of__isRetinaIpad_19() { return static_cast<int32_t>(offsetof(MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2, ____isRetinaIpad_19)); }
	inline bool get__isRetinaIpad_19() const { return ____isRetinaIpad_19; }
	inline bool* get_address_of__isRetinaIpad_19() { return &____isRetinaIpad_19; }
	inline void set__isRetinaIpad_19(bool value)
	{
		____isRetinaIpad_19 = value;
	}
};


// Prime31.ThreadingCallbackHelper
struct  ThreadingCallbackHelper_t8ECB03A15726D7FE39F2C3B6609167DC4A32266A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<System.Action> Prime31.ThreadingCallbackHelper::_actions
	List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * ____actions_4;
	// System.Collections.Generic.List`1<System.Action> Prime31.ThreadingCallbackHelper::_currentActions
	List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * ____currentActions_5;

public:
	inline static int32_t get_offset_of__actions_4() { return static_cast<int32_t>(offsetof(ThreadingCallbackHelper_t8ECB03A15726D7FE39F2C3B6609167DC4A32266A, ____actions_4)); }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * get__actions_4() const { return ____actions_4; }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 ** get_address_of__actions_4() { return &____actions_4; }
	inline void set__actions_4(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * value)
	{
		____actions_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____actions_4), (void*)value);
	}

	inline static int32_t get_offset_of__currentActions_5() { return static_cast<int32_t>(offsetof(ThreadingCallbackHelper_t8ECB03A15726D7FE39F2C3B6609167DC4A32266A, ____currentActions_5)); }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * get__currentActions_5() const { return ____currentActions_5; }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 ** get_address_of__currentActions_5() { return &____currentActions_5; }
	inline void set__currentActions_5(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * value)
	{
		____currentActions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentActions_5), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_tFF6F73F1CFE837331D6AAA11CC78CE5D9B5F0A2B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA  m_Items[1];

public:
	inline ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
	inline ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
};
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * m_Items[1];

public:
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Assembly_t * m_Items[1];

public:
	inline Assembly_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Assembly_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Assembly_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Assembly_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Assembly_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Assembly_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PropertyInfo_t * m_Items[1];

public:
	inline PropertyInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PropertyInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FieldInfo_t * m_Items[1];

public:
	inline FieldInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t * value)
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


// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void Prime31.Reflection.SafeDictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeDictionary_2__ctor_m0365AE2F7700B7A9C546E0302D1830EC16AED3A2_gshared (SafeDictionary_2_t4B9B070720ACD8257CEAC94F8135E2AEB0658AF1 * __this, const RuntimeMethod* method);
// System.Boolean Prime31.Reflection.SafeDictionary`2<System.Object,System.Object>::tryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SafeDictionary_2_tryGetValue_m07D847ADBC94EBEEFBA6CFE4C5B75A3F31474BBD_gshared (SafeDictionary_2_t4B9B070720ACD8257CEAC94F8135E2AEB0658AF1 * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void Prime31.Reflection.SafeDictionary`2<System.Object,System.Object>::add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeDictionary_2_add_m068DBB92634D1CF79C6DAED0707F61EE6865FFD3_gshared (SafeDictionary_2_t4B9B070720ACD8257CEAC94F8135E2AEB0658AF1 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mAD9A277D819A43C45C7F3642ADD582D4D07C3B9C_gshared (Stack_1_tCBDE4BE19279E76640CBE54E3E6B4B1536906F84 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Stack`1<System.Int32Enum>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_m1AF2B6C928CADEA982B916AEA040B7FFB73CD66E_gshared_inline (Stack_1_tCBDE4BE19279E76640CBE54E3E6B4B1536906F84 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Int32Enum>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_Peek_mA9C02A7B83C820821827111619BBF161607A1F4B_gshared (Stack_1_tCBDE4BE19279E76640CBE54E3E6B4B1536906F84 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Int32Enum>::Push(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m6CF7D293DA97A35D278DF84539716D7F06C4CEB4_gshared (Stack_1_tCBDE4BE19279E76640CBE54E3E6B4B1536906F84 * __this, int32_t ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Int32Enum>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_Pop_m7B1AE61EA70A944D96EE927B4270BF80D28B92D5_gshared (Stack_1_tCBDE4BE19279E76640CBE54E3E6B4B1536906F84 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCB81D2E16433EA0BB063264694162BD7E3DE1DA0_gshared (Dictionary_2_t8A3F8777BEF075E009D085E3BC9B9ADB00F47345 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mBED865063DDDFF84201F60834B14B70FAEFC6A90_gshared (Dictionary_2_t8A3F8777BEF075E009D085E3BC9B9ADB00F47345 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m5FBD1D681DF5F1314791CE6F97B4F040B18BC3BF_gshared (Dictionary_2_t8A3F8777BEF075E009D085E3BC9B9ADB00F47345 * __this, RuntimeObject * ___key0, bool ___value1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_get_Item_mA64D8887D1152D6C83ADB22C163DB0113C39C102_gshared (Dictionary_2_t8A3F8777BEF075E009D085E3BC9B9ADB00F47345 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> Prime31.Reflection.SafeDictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SafeDictionary_2_GetEnumerator_mCA93F429C3C4DE53917810D2522B138CE4CC31A4_gshared (SafeDictionary_2_t4B9B070720ACD8257CEAC94F8135E2AEB0658AF1 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mE1761BE81335B68DA4E0F742344DA72F092A29C1_gshared (Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * Dictionary_2_get_Keys_m771BB389A4CB93B7EDBDC71F503B50049B8999C7_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031  KeyCollection_GetEnumerator_m6B4DC134BB6777F8C99D26315F359E069004CF13_gshared (KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mF254C3BDEA9F0829958522BF88C75DE8BEC4961F_gshared_inline (Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m54EE979C4D83695ED736A3177A68C2968C8C4382_gshared (Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m3714ECE30727E77F475635710D707743B6D930E6_gshared (Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m5440E65428351CA6F19B1804D172DCB5E9C59C98_gshared (Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject Prime31.AbstractManager::getPrime31ManagerGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * AbstractManager_getPrime31ManagerGameObject_mC57635189FD23193965E99E646DDA6E910E1F20C (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Prime31.LifecycleHelper>()
inline LifecycleHelper_t2C8530CA0073EF4CA43BCC651EB399608723D373 * GameObject_AddComponent_TisLifecycleHelper_t2C8530CA0073EF4CA43BCC651EB399608723D373_m56E0C8DC89B0E27FAD3A3350603AADA785EB901F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  LifecycleHelper_t2C8530CA0073EF4CA43BCC651EB399608723D373 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// Prime31.LifecycleHelper Prime31.AbstractManager::get_coroutineSurrogate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LifecycleHelper_t2C8530CA0073EF4CA43BCC651EB399608723D373 * AbstractManager_get_coroutineSurrogate_mB9BFA65B8657DA189D5DAF19C232DFD74FCC9B9D (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Object_FindObjectOfType_m07215A5C789FC7C88754B64DFCF1313C55E2F6D2 (Type_t * ___type0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Prime31.ThreadingCallbackHelper>()
inline ThreadingCallbackHelper_t8ECB03A15726D7FE39F2C3B6609167DC4A32266A * GameObject_AddComponent_TisThreadingCallbackHelper_t8ECB03A15726D7FE39F2C3B6609167DC4A32266A_m08F2AA5F83D59CA5ACE41304374BB769BEB49AC8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ThreadingCallbackHelper_t8ECB03A15726D7FE39F2C3B6609167DC4A32266A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * GameObject_AddComponent_mD183856CB5A1CCF1576221D7D6CEBC4092E734B8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, Type_t * ___componentType0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306 (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_root()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_root_mDEB1F3B4DB26B32CEED6DFFF734F85C79C4DDA91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Delegate::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227 (Delegate_t * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsStatic_mDFDF51EDFE5DBDD5FE942564A1F56E3C7E3DE43F (MethodBase_t * __this, const RuntimeMethod* method);
// System.Object System.Delegate::get_Target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline (Delegate_t * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3 (MethodBase_t * __this, RuntimeObject * ___obj0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters1, const RuntimeMethod* method);
// System.Void Prime31.ActionExtensions::invoke(System.Delegate,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionExtensions_invoke_mA9DA8F6D55723F8713266ABA002F71BEBBCC1264 (Delegate_t * ___listener0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void Prime31.Reflection.SafeDictionary`2<System.Type,Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>>::.ctor()
inline void SafeDictionary_2__ctor_m5D9F964EE6C1D6997CF803C9104FD29A36F39965 (SafeDictionary_2_tFADC581AA2370090D8D9E6416FC552750C99B022 * __this, const RuntimeMethod* method)
{
	((  void (*) (SafeDictionary_2_tFADC581AA2370090D8D9E6416FC552750C99B022 *, const RuntimeMethod*))SafeDictionary_2__ctor_m0365AE2F7700B7A9C546E0302D1830EC16AED3A2_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Prime31.Reflection.CacheResolver/<getNewInstance>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetNewInstanceU3Ec__AnonStorey0__ctor_m23D8FAE760D5CE3E0A767180BDB2385EAA164C78 (U3CgetNewInstanceU3Ec__AnonStorey0_t0874DDADE8E8CD3874E55EB03602C06A726898CA * __this, const RuntimeMethod* method);
// System.Boolean Prime31.Reflection.SafeDictionary`2<System.Type,Prime31.Reflection.CacheResolver/CtorDelegate>::tryGetValue(TKey,TValue&)
inline bool SafeDictionary_2_tryGetValue_m9CA6136377396DFE08785563B6BF96000341DF45 (SafeDictionary_2_t835C82D4A26CED1AA01E976F040682C42C841A4F * __this, Type_t * ___key0, CtorDelegate_tC5D8FE74BA0A8B81F9AB288E39882F34B7A2AC2A ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (SafeDictionary_2_t835C82D4A26CED1AA01E976F040682C42C841A4F *, Type_t *, CtorDelegate_tC5D8FE74BA0A8B81F9AB288E39882F34B7A2AC2A **, const RuntimeMethod*))SafeDictionary_2_tryGetValue_m07D847ADBC94EBEEFBA6CFE4C5B75A3F31474BBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Object Prime31.Reflection.CacheResolver/CtorDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CtorDelegate_Invoke_mEDFE8AF494F4D1D1CDB6E753E7C0025CCEDB3BAC (CtorDelegate_tC5D8FE74BA0A8B81F9AB288E39882F34B7A2AC2A * __this, const RuntimeMethod* method);
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * Type_GetConstructor_m7D94831F070BECE7BECDAEAFB024981CCC4E03CE (Type_t * __this, int32_t ___bindingAttr0, Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___binder1, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___types2, ParameterModifierU5BU5D_tFF6F73F1CFE837331D6AAA11CC78CE5D9B5F0A2B* ___modifiers3, const RuntimeMethod* method);
// System.Void Prime31.Reflection.CacheResolver/CtorDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CtorDelegate__ctor_mC9F313A8E87DE7C95D8C397A222845EA3E7F654D (CtorDelegate_tC5D8FE74BA0A8B81F9AB288E39882F34B7A2AC2A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Prime31.Reflection.SafeDictionary`2<System.Type,Prime31.Reflection.CacheResolver/CtorDelegate>::add(TKey,TValue)
inline void SafeDictionary_2_add_m9046A277F92267D0DE30F5F33ACD8938E26E71B8 (SafeDictionary_2_t835C82D4A26CED1AA01E976F040682C42C841A4F * __this, Type_t * ___key0, CtorDelegate_tC5D8FE74BA0A8B81F9AB288E39882F34B7A2AC2A * ___value1, const RuntimeMethod* method)
{
	((  void (*) (SafeDictionary_2_t835C82D4A26CED1AA01E976F040682C42C841A4F *, Type_t *, CtorDelegate_tC5D8FE74BA0A8B81F9AB288E39882F34B7A2AC2A *, const RuntimeMethod*))SafeDictionary_2_add_m068DBB92634D1CF79C6DAED0707F61EE6865FFD3_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Prime31.Reflection.SafeDictionary`2<System.Type,Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>>::tryGetValue(TKey,TValue&)
inline bool SafeDictionary_2_tryGetValue_mECA3E84F7995497E18128B080F063D0105C344ED (SafeDictionary_2_tFADC581AA2370090D8D9E6416FC552750C99B022 * __this, Type_t * ___key0, SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (SafeDictionary_2_tFADC581AA2370090D8D9E6416FC552750C99B022 *, Type_t *, SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 **, const RuntimeMethod*))SafeDictionary_2_tryGetValue_m07D847ADBC94EBEEFBA6CFE4C5B75A3F31474BBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>::.ctor()
inline void SafeDictionary_2__ctor_m3A5343F8A852C3A6259794B02D345ED76955EEBA (SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 * __this, const RuntimeMethod* method)
{
	((  void (*) (SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 *, const RuntimeMethod*))SafeDictionary_2__ctor_m0365AE2F7700B7A9C546E0302D1830EC16AED3A2_gshared)(__this, method);
}
// System.Void Prime31.Reflection.MemberMapLoader::Invoke(System.Type,Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberMapLoader_Invoke_mF4F7BF0418E94800E6F605F41D85E5B3320F3EF5 (MemberMapLoader_t56FA45FA01C1729FCF47BAE05C4F8406A5B3E137 * __this, Type_t * ___type0, SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 * ___memberMaps1, const RuntimeMethod* method);
// System.Void Prime31.Reflection.SafeDictionary`2<System.Type,Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>>::add(TKey,TValue)
inline void SafeDictionary_2_add_mBBE14F8B8A70375BE2D8849D67C9AE032CC5A9FE (SafeDictionary_2_tFADC581AA2370090D8D9E6416FC552750C99B022 * __this, Type_t * ___key0, SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (SafeDictionary_2_tFADC581AA2370090D8D9E6416FC552750C99B022 *, Type_t *, SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 *, const RuntimeMethod*))SafeDictionary_2_add_m068DBB92634D1CF79C6DAED0707F61EE6865FFD3_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Prime31.Reflection.CacheResolver/<createGetHandler>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcreateGetHandlerU3Ec__AnonStorey1__ctor_m98B9EA1EA26971779B77528A3E6C7A2B955B7BEF (U3CcreateGetHandlerU3Ec__AnonStorey1_t02A1377C5EAAAC329AE9F663DFD282EA5CF2108E * __this, const RuntimeMethod* method);
// System.Void Prime31.Reflection.GetHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetHandler__ctor_m229B2E66E38D223EFE7F8EE28D65593C0DC827CB (GetHandler_tAE31D3C378B82D9F3EC44C4BD9691E9E1836ED73 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Prime31.Reflection.CacheResolver/<createSetHandler>c__AnonStorey2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcreateSetHandlerU3Ec__AnonStorey2__ctor_mD8B26D67F93639E73A136614B218248E734D73D5 (U3CcreateSetHandlerU3Ec__AnonStorey2_t3C37B8E13768D45BB60408EDA64A9D6452077CE0 * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::get_IsInitOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsInitOnly_mA279E731A1097E83BACAF9F53612CFA9428E806B (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::get_IsLiteral()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsLiteral_mF2657F6BAB384894EB2C861D51093179E3EE77D9 (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Void Prime31.Reflection.SetHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetHandler__ctor_m3AD3F72FC3EAE75205F5A316FF31872C2282AC98 (SetHandler_tAE38CDA0AFD7619D49B7E3A9FE386955818B44E8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Prime31.Reflection.CacheResolver/<createGetHandler>c__AnonStorey3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcreateGetHandlerU3Ec__AnonStorey3__ctor_m15784AD830AFDBAE4B7ED5F89DEE437163AC0189 (U3CcreateGetHandlerU3Ec__AnonStorey3_t3C5E60C6B5886F65A76AAB8AFF20B57B80F8712A * __this, const RuntimeMethod* method);
// System.Void Prime31.Reflection.CacheResolver/<createSetHandler>c__AnonStorey4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcreateSetHandlerU3Ec__AnonStorey4__ctor_m91D6AE99303C028473B28F9649E6EF1E791E0513 (U3CcreateSetHandlerU3Ec__AnonStorey4_tD61E3F935224CDCF591C2A5450A489564F55A099 * __this, const RuntimeMethod* method);
// System.Void Prime31.Reflection.SafeDictionary`2<System.Type,Prime31.Reflection.CacheResolver/CtorDelegate>::.ctor()
inline void SafeDictionary_2__ctor_mE408E5797746188256EF77C1EDBF5069C300C695 (SafeDictionary_2_t835C82D4A26CED1AA01E976F040682C42C841A4F * __this, const RuntimeMethod* method)
{
	((  void (*) (SafeDictionary_2_t835C82D4A26CED1AA01E976F040682C42C841A4F *, const RuntimeMethod*))SafeDictionary_2__ctor_m0365AE2F7700B7A9C546E0302D1830EC16AED3A2_gshared)(__this, method);
}
// System.Object Prime31.SimpleJson::decode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SimpleJson_decode_m6309943F6A7579B3456A477370567D17064D19C6 (String_t* ___json0, const RuntimeMethod* method);
// System.Object Prime31.Json/Deserializer::deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Deserializer_deserialize_m936174988598B97A1F321404ECD4268474B7F725 (String_t* ___json0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void Prime31.Utils::logObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_logObject_m9DE5038BEEEC42EE1DB1D72499FBB5E374C2E8C2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.String Prime31.SimpleJson::encode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleJson_encode_m732D5459CB1F5F4A801393BFB4AAECD245D00611 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.String Prime31.Json/Serializer::serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_serialize_mEDC001694EE2C2A808D7092756E0963022BFBE7E (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.String Prime31.JsonFormatter::prettyPrint(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonFormatter_prettyPrint_m92B2FFFD145D0E6A492F74AC004FB667657A416A (String_t* ___input0, const RuntimeMethod* method);
// System.Object Prime31.Json::decode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Json_decode_mBA1F3C2C0300A3CB0B3AF599FCEFE4B7CFCE711B (String_t* ___json0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<Prime31.JsonFormatter/JsonContextType>::.ctor()
inline void Stack_1__ctor_m9A7652D7CE4CDD707DF2C0DC49C2C076445D48D9 (Stack_1_tE925D2926B7991D3747639F04BFD07367E36C4DA * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tE925D2926B7991D3747639F04BFD07367E36C4DA *, const RuntimeMethod*))Stack_1__ctor_mAD9A277D819A43C45C7F3642ADD582D4D07C3B9C_gshared)(__this, method);
}
// System.Void Prime31.JsonFormatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonFormatter__ctor_mAEABAAA93A825C7D67856D736A62763AC1832B7B (JsonFormatter_t1E6A6A2DEF26F59BF00E56DDC3E07A13B1A4E187 * __this, const RuntimeMethod* method);
// System.String Prime31.JsonFormatter::print(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonFormatter_print_mA633FCB760DC1C8E1063AC8F836F7667AEAF3424 (JsonFormatter_t1E6A6A2DEF26F59BF00E56DDC3E07A13B1A4E187 * __this, String_t* ___input0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E (StringBuilder_t * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean Prime31.JsonFormatter::inString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonFormatter_inString_m530AF958E9F27296CEBA9B2757A5267D5F65B024 (JsonFormatter_t1E6A6A2DEF26F59BF00E56DDC3E07A13B1A4E187 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Stack`1<Prime31.JsonFormatter/JsonContextType>::get_Count()
inline int32_t Stack_1_get_Count_m11A9AE873AC1A4F6BB929E4F953D2FD2B6DA0B7C_inline (Stack_1_tE925D2926B7991D3747639F04BFD07367E36C4DA * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_tE925D2926B7991D3747639F04BFD07367E36C4DA *, const RuntimeMethod*))Stack_1_get_Count_m1AF2B6C928CADEA982B916AEA040B7FFB73CD66E_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.Stack`1<Prime31.JsonFormatter/JsonContextType>::Peek()
inline int32_t Stack_1_Peek_mC0E009D926287AB9DDF13380EC7D8C81B9BA10E7 (Stack_1_tE925D2926B7991D3747639F04BFD07367E36C4DA * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_tE925D2926B7991D3747639F04BFD07367E36C4DA *, const RuntimeMethod*))Stack_1_Peek_mA9C02A7B83C820821827111619BBF161607A1F4B_gshared)(__this, method);
}
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4 (const RuntimeMethod* method);
// System.Void Prime31.JsonFormatter::buildIndents(System.Int32,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonFormatter_buildIndents_m2EF4892998568622BFD3C3641ACB3EA47DA79F9E (int32_t ___indents0, StringBuilder_t * ___output1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<Prime31.JsonFormatter/JsonContextType>::Push(!0)
inline void Stack_1_Push_mDDD25126954FF326E994F9D85FC3DE0D16A88F42 (Stack_1_tE925D2926B7991D3747639F04BFD07367E36C4DA * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tE925D2926B7991D3747639F04BFD07367E36C4DA *, int32_t, const RuntimeMethod*))Stack_1_Push_m6CF7D293DA97A35D278DF84539716D7F06C4CEB4_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.Stack`1<Prime31.JsonFormatter/JsonContextType>::Pop()
inline int32_t Stack_1_Pop_m8AD8E9B61221B705EBCA3D86C190EEC52865E56D (Stack_1_tE925D2926B7991D3747639F04BFD07367E36C4DA * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_tE925D2926B7991D3747639F04BFD07367E36C4DA *, const RuntimeMethod*))Stack_1_Pop_m7B1AE61EA70A944D96EE927B4270BF80D28B92D5_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
inline void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *, bool, const RuntimeMethod*))Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared)(__this, ___obj0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor()
inline void Dictionary_2__ctor_m7B1612DAAC58ADB707313836D78A8FB4556FEBC0 (Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C *, const RuntimeMethod*))Dictionary_2__ctor_mCB81D2E16433EA0BB063264694162BD7E3DE1DA0_gshared)(__this, method);
}
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_gray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_gray_m34BEEC2EEF30819B433125EF748CE22BE17C9B6E (const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m78878905E58C5DE9BCFED8D9262D025789E22F92 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___x0, int32_t ___y1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Boolean Prime31.MonoBehaviourGUI::isRetinaOrLargeScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonoBehaviourGUI_isRetinaOrLargeScreen_mF41759674AE67861FDC7336EECC1A777A1E60E95 (MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2 * __this, const RuntimeMethod* method);
// System.Boolean Prime31.MonoBehaviourGUI::isRetinaIpad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonoBehaviourGUI_isRetinaIpad_m9A3A3F9D11F3C69BA146B66A0D4A6FCDA0D253F1 (MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2 * __this, const RuntimeMethod* method);
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F (const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_label()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_label_m6F41B6A214AE6407DE5C567225828A8627A3AD83 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_alignment_mCF8FDA9DA149F528DCDC19680AEED46F25161D89 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 Prime31.MonoBehaviourGUI::buttonFontSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MonoBehaviourGUI_buttonFontSize_m3221FB3452106A8705B1C101C452456566262CCA (MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontSize_mFA02B9950E09F880976FD2FF646FB8AAEED1C5C6 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.GUILayout::BeginScrollView(UnityEngine.Vector2,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GUILayout_BeginScrollView_m6C15A5A84E90A20AF0BE9433B8BFF573619C925A (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___scrollPosition0, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options1, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_Button_m749F2887D57BDC9B6901F2C35F5C6A7E22154162 (String_t* ___text0, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options1, const RuntimeMethod* method);
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Remove(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Remove_m6ABF9CF3D10160EB52E0768262A9B179F987571E (StringBuilder_t * __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502 (String_t* ___text0, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options1, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::EndScrollView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndScrollView_m7A2EFB6B6DFC43302979FD6E2AF032C0D21BA163 (const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.Application::RegisterLogCallback(UnityEngine.Application/LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_RegisterLogCallback_mC167FD4C7AEADB4E719BEEE2F286FD9CA15C9F01 (LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD * ___handler0, const RuntimeMethod* method);
// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallback__ctor_mB5F165ECC180A20258EF4EFF589D88FB9F9E9C57 (LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Int32 Prime31.MonoBehaviourGUI::buttonHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MonoBehaviourGUI_buttonHeight_m48EAB95892962482AD0D7B25A155990D843D4E5B (MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2 * __this, const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_button()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_button_m03559A64FAC2479F2D3753DD559FF22273602835 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RectOffset::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectOffset__ctor_m428BA3F4AE287FA7D5F4CED6394225951E5E507B (RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * __this, int32_t ___left0, int32_t ___right1, int32_t ___top2, int32_t ___bottom3, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_margin(UnityEngine.RectOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_margin_mDD7162FFE655D812CCB6055E58445D5C634119D2 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_stretchWidth_m8577DEE07D479A39B811CCCD6AC30094AD2BE833 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_fixedHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fixedHeight_mE77FA3DD0DBBD2FDE24484A9E240D55708938B6B (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_wordWrap(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_wordWrap_mB6D788509ADD7BBDEFFB4409E5719FF14DC9A684 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_hover()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * GUIStyle_get_hover_mB186BDBADD84DA7394576DBEAF29F3B54BD41E46 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// UnityEngine.Texture2D Prime31.MonoBehaviourGUI::get_normalBackground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * MonoBehaviourGUI_get_normalBackground_m951508080963D8B59D557FA05781539D580868ED (MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyleState::set_background(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_background_mA80B6ED2555C6551933E2D0ECA5081FC254B6A21 (GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___value0, const RuntimeMethod* method);
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * GUIStyle_get_active_m2398E8F2A62E3A23519D8362D9BA0EC1FB6710F4 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// UnityEngine.Texture2D Prime31.MonoBehaviourGUI::get_activeBackground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * MonoBehaviourGUI_get_activeBackground_m9DD46D6C79648632C4F9D1921BEF13B314079003 (MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_mB4B61B9CAC1D6B4694471A2BB1191B5F0D5D764A (GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginArea_m95BE97450201032DF5B0C18A422C25CD86FD46A0 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___screenRect0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginVertical_mE0941591491BBDAA25FF7CD48415750FD08D10ED (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options0, const RuntimeMethod* method);
// System.Void Prime31.MonoBehaviourGUI::endColumn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourGUI_endColumn_m5B28DB1CF38E1D843F823E72B75970836DF37866 (MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2 * __this, bool ___hasSecondColumn0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::EndVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndVertical_mBCF5058C9591A4064722C2B763EF98D066BFDCAD (const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::EndArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndArea_mFC73B49A3F2C5319D280E2C1B09E78CA23D0B151 (const RuntimeMethod* method);
// System.Void UnityEngine.GUI/WindowFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowFunction__ctor_mCC6005520B912B8BFFAECE3612EB3334FF681238 (WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.GUILayout::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  GUILayout_Window_mA9CA9D4DA573FF26AE63AEE958F2C2127D713840 (int32_t ___id0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___screenRect1, WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * ___func2, String_t* ___text3, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options4, const RuntimeMethod* method);
// System.Void Prime31.MonoBehaviourGUI::beginRightColumn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourGUI_beginRightColumn_m442A038AD6959846B04081E77354FC52BF5F0E32 (MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2 * __this, const RuntimeMethod* method);
// UnityEngine.Texture2D Prime31.MonoBehaviourGUI::get_bottomButtonBackground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * MonoBehaviourGUI_get_bottomButtonBackground_m4832748F5B6F2175B88CBBE4537A7EA58EDB379E (MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mDC3AD2416E7463B12FC10AD8A6C816FECC11E003 (Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_mBED865063DDDFF84201F60834B14B70FAEFC6A90_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m80950D4BAC47AA3A0B7E50B2C2E0606342C9011D (Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C * __this, String_t* ___key0, bool ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C *, String_t*, bool, const RuntimeMethod*))Dictionary_2_set_Item_m5FBD1D681DF5F1314791CE6F97B4F040B18BC3BF_gshared)(__this, ___key0, ___value1, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Item(!0)
inline bool Dictionary_2_get_Item_m3FC6EB738CC4A9E285D6330B2352769B37B32B20 (Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mA64D8887D1152D6C83ADB22C163DB0113C39C102_gshared)(__this, ___key0, method);
}
// UnityEngine.Texture2D Prime31.MonoBehaviourGUI::get_toggleButtonBackground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * MonoBehaviourGUI_get_toggleButtonBackground_m483F61386DED6CD0965C46322B86208475ABBC2C (MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::set_contentColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_contentColor_mC580BA6155FF1ED522B03FD7DC9AB112E5D43586 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_fontStyle(UnityEngine.FontStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontStyle_mE158697020EE5D1044460A605FC8243AA8640F39 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_mDA3E2A83228C0493894D40D02963D7B07C7B058E (Type_t * __this, String_t* ___name0, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___types1, const RuntimeMethod* method);
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * AppDomain_get_CurrentDomain_mC2FE307811914289CBBDEFEFF6175FCE2E96A55E (const RuntimeMethod* method);
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* AppDomain_GetAssemblies_m7397BD0461B4D6BA76AE0974DE9FBEDAF70AEBFD (AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * __this, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Prime31.Reflection.MemberMapLoader::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberMapLoader__ctor_mEF5396F2EA8A2A0F3A56801B5B6BD7DE82B20C4A (MemberMapLoader_t56FA45FA01C1729FCF47BAE05C4F8406A5B3E137 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Prime31.Reflection.CacheResolver::.ctor(Prime31.Reflection.MemberMapLoader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CacheResolver__ctor_mFFA61893994C8BDDD62C45671C18CCF07B265904 (CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0 * __this, MemberMapLoader_t56FA45FA01C1729FCF47BAE05C4F8406A5B3E137 * ___memberMapLoader0, const RuntimeMethod* method);
// System.Void Prime31.Reflection.CacheResolver/MemberMap::.ctor(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberMap__ctor_m70EE2B2E7BFFA90ADBDBDBB0F4077B460A8121C3 (MemberMap_tA722F3C527755D23AB14FC21BFE6A283F7C75D66 * __this, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
// System.Void Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>::add(TKey,TValue)
inline void SafeDictionary_2_add_m8CB6363B5E062018AE5E112D28AD5AD374ED97B3 (SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 * __this, String_t* ___key0, MemberMap_tA722F3C527755D23AB14FC21BFE6A283F7C75D66 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 *, String_t*, MemberMap_tA722F3C527755D23AB14FC21BFE6A283F7C75D66 *, const RuntimeMethod*))SafeDictionary_2_add_m068DBB92634D1CF79C6DAED0707F61EE6865FFD3_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Prime31.Reflection.CacheResolver/MemberMap::.ctor(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberMap__ctor_m0AFC2A4F322FA25E1B61806670B40FD2380C302B (MemberMap_tA722F3C527755D23AB14FC21BFE6A283F7C75D66 * __this, FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Boolean Prime31.Reflection.ReflectionUtils::isNullableType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtils_isNullableType_m0BDD5CBDB31E880D6745CCD3F1D3B0355886CB66 (Type_t * ___type0, const RuntimeMethod* method);
// System.Type System.Nullable::GetUnderlyingType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629 (Type_t * ___nullableType0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.DateTime System.DateTime::ParseExact(System.String,System.String[],System.IFormatProvider,System.Globalization.DateTimeStyles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_ParseExact_m43F441DC2FA3039499C5A9FD2E1972E762F99DC8 (String_t* ___s0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___formats1, RuntimeObject* ___provider2, int32_t ___style3, const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mE84FCDCEAD332A62B587191C5874DAD7C238CFEA (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___kind6, const RuntimeMethod* method);
// System.DateTime System.DateTime::AddMilliseconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_AddMilliseconds_m74B689CDAFB7ABEEF56827D8777B7C95C89C3154 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, double ___value0, const RuntimeMethod* method);
// System.Object System.Enum::ToObject(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enum_ToObject_m2A05590A0D581206AAEB48B89187FD175D5F0967 (Type_t * ___enumType0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Object System.Convert::ChangeType(System.Object,System.Type,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Convert_ChangeType_m6AA3DE3E595A2AABA33B5046BD6CF2AB46466C05 (RuntimeObject * ___value0, Type_t * ___conversionType1, RuntimeObject* ___provider2, const RuntimeMethod* method);
// System.Boolean Prime31.Reflection.ReflectionUtils::isTypeDictionary(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtils_isTypeDictionary_m078707414014440D422F0EDF9F29CFFEC2296F2C (Type_t * ___type0, const RuntimeMethod* method);
// System.Object Prime31.Reflection.CacheResolver::getNewInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CacheResolver_getNewInstance_mD97DB880BC39BE885D0637FCB1028B4C99FA1900 (Type_t * ___type0, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_inline (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_inline (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap> Prime31.Reflection.CacheResolver::loadMaps(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 * CacheResolver_loadMaps_m3DB7ABA05C03FA632AEDE962FF742F108790D156 (CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0 * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>::GetEnumerator()
inline RuntimeObject* SafeDictionary_2_GetEnumerator_mB73E6DB5CCF467A5A9B534B188D0E63D031418CC (SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 *, const RuntimeMethod*))SafeDictionary_2_GetEnumerator_mCA93F429C3C4DE53917810D2522B138CE4CC31A4_gshared)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>::get_Value()
inline MemberMap_tA722F3C527755D23AB14FC21BFE6A283F7C75D66 * KeyValuePair_2_get_Value_mA7D524A2849160FE60D9B60969D35C565B741C69_inline (KeyValuePair_2_tFD5EE2073212402F9FBA969914B0938321EEC655 * __this, const RuntimeMethod* method)
{
	return ((  MemberMap_tA722F3C527755D23AB14FC21BFE6A283F7C75D66 * (*) (KeyValuePair_2_tFD5EE2073212402F9FBA969914B0938321EEC655 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m71EC8713848A54055B4FD71001B1EFBA00085387_inline (KeyValuePair_2_tFD5EE2073212402F9FBA969914B0938321EEC655 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tFD5EE2073212402F9FBA969914B0938321EEC655 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// System.Void Prime31.Reflection.SetHandler::Invoke(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetHandler_Invoke_m27CED7CF9E42DAA38B856402704B2245C2620983 (SetHandler_tAE38CDA0AFD7619D49B7E3A9FE386955818B44E8 * __this, RuntimeObject * ___source0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1 (Type_t * __this, const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_mF3E09E8AC19EE563314B326117091D4B9CC918C1 (Type_t * ___type0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Boolean Prime31.Reflection.ReflectionUtils::isTypeGenericeCollectionInterface(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtils_isTypeGenericeCollectionInterface_mD4EA08C38CAD70FC9036FE49344D2B220DCCDB0A (Type_t * ___type0, const RuntimeMethod* method);
// System.Object Prime31.Reflection.ReflectionUtils::toNullableType(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ReflectionUtils_toNullableType_m3E269163D2F43F039CBDE85F8A3D930FD01D076B (RuntimeObject * ___obj0, Type_t * ___nullableType1, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_m10322320EC0B380FE4C1EB5DBB24AE9F242B7CC8 (RuntimeObject * ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.DateTime System.DateTime::ToUniversalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_ToUniversalTime_mB5FB50E0AD0D9A2A917893A1655F51B174C7A6B3 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.String System.DateTime::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_mE44033D2750D165DED2A17A927381872EF9FC986 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String System.Guid::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_mB4CBA020EEFAC3F6E828BB8A15E813F3680CEFAB (Guid_t * __this, String_t* ___format0, const RuntimeMethod* method);
// System.Void Prime31.JsonObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonObject__ctor_mB832EDD98B003BF10120534B0393596B82C75823 (JsonObject_t3BFE094F9029834331827285E25845AAB69816A6 * __this, const RuntimeMethod* method);
// System.Object Prime31.Reflection.GetHandler::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GetHandler_Invoke_m2680584633B9F1FC16B76F6E4E8ECF0A323C5440 (GetHandler_tAE31D3C378B82D9F3EC44C4BD9691E9E1836ED73 * __this, RuntimeObject * ___source0, const RuntimeMethod* method);
// Prime31.IJsonSerializerStrategy Prime31.SimpleJson::get_currentJsonSerializerStrategy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SimpleJson_get_currentJsonSerializerStrategy_m3E1A40151EED8A1D224C8B43F1ECBACB0A38C677 (const RuntimeMethod* method);
// System.Boolean Prime31.SimpleJson::serializeValue(Prime31.IJsonSerializerStrategy,System.Object,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleJson_serializeValue_mA2B828731C901B93EABF7F2D3117E19A6B4B643A (RuntimeObject* ___jsonSerializerStrategy0, RuntimeObject * ___value1, StringBuilder_t * ___builder2, const RuntimeMethod* method);
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C (String_t* __this, const RuntimeMethod* method);
// System.Object Prime31.SimpleJson::parseValue(System.Char[],System.Int32&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SimpleJson_parseValue_m4C617979A2990AD31D2782923EF51DC524B5F043 (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method);
// System.Boolean Prime31.SimpleJson::tryDeserializeObject(System.String,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleJson_tryDeserializeObject_m02C21CEF0D463542471EAE922E83AB7571B658B1 (String_t* ___json0, RuntimeObject ** ___obj1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0)
inline RuntimeObject * Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Int32 Prime31.SimpleJson::nextToken(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleJson_nextToken_m55D2CBDE043890FF31ED75C87F82C76A93903D9E (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___json0, int32_t* ___index1, const RuntimeMethod* method);
// System.Int32 Prime31.SimpleJson::lookAhead(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleJson_lookAhead_m95010D6F902C78FE86DB506C5834FED6AB13AC06 (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___json0, int32_t ___index1, const RuntimeMethod* method);
// System.String Prime31.SimpleJson::parseString(System.Char[],System.Int32&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleJson_parseString_m14B9680807780CBC3D6F557C3D67590C3F2D8B46 (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method);
// System.Void Prime31.JsonArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonArray__ctor_m39A2948796E8CD06610B118CCBCB929B58BB1ABB (JsonArray_tA3865B4DBA65F47D2EBA6C1A04041AC601AAB754 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
inline void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, RuntimeObject *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Object Prime31.SimpleJson::parseNumber(System.Char[],System.Int32&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SimpleJson_parseNumber_mD3AF5A6DC75EB484585F64F37AF759778E8F2272 (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method);
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Prime31.SimpleJson::parseObject(System.Char[],System.Int32&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SimpleJson_parseObject_m01840B8B5B95C5E70C46DCE4ECAA900AAB1F03DC (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method);
// Prime31.JsonArray Prime31.SimpleJson::parseArray(System.Char[],System.Int32&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonArray_tA3865B4DBA65F47D2EBA6C1A04041AC601AAB754 * SimpleJson_parseArray_m686317AA55B7B7A56DB6A6D506C3896CE33430C4 (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method);
// System.Void Prime31.SimpleJson::eatWhitespace(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleJson_eatWhitespace_mECDEA82E6A763586AED44C4BBA41A61063C78F0B (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___json0, int32_t* ___index1, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___val0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method);
// System.Boolean System.UInt32::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt32_TryParse_m5A92B541CF9CC6532CB23BDE6DF7460E5EAC8435 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, uint32_t* ___result3, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String System.Char::ConvertFromUtf32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ConvertFromUtf32_m61381B403A3A7CF89350DE07F87D91C169C71AD7 (int32_t ___utf320, const RuntimeMethod* method);
// System.Int32 Prime31.SimpleJson::getLastIndexOfNumber(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleJson_getLastIndexOfNumber_m5935E1DF4468E30FF653A6FA56D0CE3993619184 (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___json0, int32_t ___index1, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mD99F5378A4220A0DA0D5097007417E777722ABDA (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.Boolean System.Double::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_mE740D7083AC52793A9634067C4F032570FFBF61E (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, double* ___result3, const RuntimeMethod* method);
// System.Boolean System.Int64::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m4A94015941D9BD9F9304D1FE14F17E84BFD3B69A (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, int64_t* ___result3, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Boolean Prime31.SimpleJson::serializeString(System.String,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleJson_serializeString_m192895FFFB3B7FBD9C27FF389304F3FDE10EC5C8 (String_t* ___aString0, StringBuilder_t * ___builder1, const RuntimeMethod* method);
// System.Boolean Prime31.SimpleJson::serializeObject(Prime31.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Collections.IEnumerable,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleJson_serializeObject_mACA9D12E24140EF855C242B484962E732B404A9D (RuntimeObject* ___jsonSerializerStrategy0, RuntimeObject* ___keys1, RuntimeObject* ___values2, StringBuilder_t * ___builder3, const RuntimeMethod* method);
// System.Boolean Prime31.SimpleJson::serializeArray(Prime31.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleJson_serializeArray_mA7F16D8C83EC45988C48D67C6A19BE5A40771BAB (RuntimeObject* ___jsonSerializerStrategy0, RuntimeObject* ___anArray1, StringBuilder_t * ___builder2, const RuntimeMethod* method);
// System.Boolean Prime31.SimpleJson::isNumeric(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleJson_isNumeric_mCF9B0A92CACB8BCE554A67B8599B7D4899F4B755 (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Boolean Prime31.SimpleJson::serializeNumber(System.Object,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleJson_serializeNumber_mC77858227924595B85F8261947CDF8F450BC762E (RuntimeObject * ___number0, StringBuilder_t * ___builder1, const RuntimeMethod* method);
// System.String System.Int64::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m1D712B17D4BDBE43D1E12EA52885C5D345C1CFA2 (int64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.String System.UInt64::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m1429DDEBC0EE07254A8F7E06D3594D1CE72DADF2 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.String System.Int32::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m027A8C9419D2FE56ED5D2EE42A6F3B3CE0130471 (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.String System.UInt32::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt32_ToString_m7361490C5FE5DBC3BE9496B5C9A1239FE6D9E805 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.String System.Decimal::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Decimal_ToString_mCD1BF444FBBA99D53FBADBB834CBFBB857598C24 (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.String System.Single::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mF554E46C641C609768519378FB0486DFD7F82985 (float* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.String System.Double::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_mFF1DAF2003FC7096C54C5A2685F85082220E330B (double* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// Prime31.PocoJsonSerializerStrategy Prime31.SimpleJson::get_pocoJsonSerializerStrategy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C * SimpleJson_get_pocoJsonSerializerStrategy_m1998B9ABE89DFECED287F46A9A335D1AB8871D37 (const RuntimeMethod* method);
// System.Void Prime31.PocoJsonSerializerStrategy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PocoJsonSerializerStrategy__ctor_m803978E6D0EB3D53266B3F6DD01D4F6CB6DFF1E4 (PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Action>::.ctor()
inline void List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Action>::Add(!0)
inline void List_1_Add_m7701B455B6EA0411642596847118B51F91DA8BC9 (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Action>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_mC32923569CAAE589250C6AD9DCEEBFEC2AE11335 (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<System.Action>::Clear()
inline void List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4 (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Action>::get_Item(System.Int32)
inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * List_1_get_Item_m9F0A626A47DAE7452E139A6961335BE81507E551_inline (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Action>::get_Count()
inline int32_t List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_inline (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.String Prime31.Json::encode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Json_encode_m667B2DCA3CD0DCDFDBB1D03C0252FEAF232EDCD5 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void Prime31.Utils::prettyPrintJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_prettyPrintJson_m59A2DF2303AB84DF40AA2654DC1709924A39983D (String_t* ___json0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Console::WriteLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_WriteLine_mE9EEA95C541D41E36A0F4844153A67EAAA0D12F7 (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C (FieldInfo_t * __this, RuntimeObject * ___obj0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConstructorInfo_Invoke_m8DF5D6F53038C7B6443EEA82D922724F39CD2906 (ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters0, const RuntimeMethod* method);
// Prime31.Reflection.GetHandler Prime31.Reflection.CacheResolver::createGetHandler(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GetHandler_tAE31D3C378B82D9F3EC44C4BD9691E9E1836ED73 * CacheResolver_createGetHandler_m68CA49A523B46D11DDEFC0022746103BA8DA5FB2 (PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
// Prime31.Reflection.SetHandler Prime31.Reflection.CacheResolver::createSetHandler(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SetHandler_tAE38CDA0AFD7619D49B7E3A9FE386955818B44E8 * CacheResolver_createSetHandler_m8599002127B717EC9692AB528DEB5C1EB94CCFC3 (PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
// Prime31.Reflection.GetHandler Prime31.Reflection.CacheResolver::createGetHandler(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GetHandler_tAE31D3C378B82D9F3EC44C4BD9691E9E1836ED73 * CacheResolver_createGetHandler_m292F615289C20DD2D407685BB738267E4F9365C2 (FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method);
// Prime31.Reflection.SetHandler Prime31.Reflection.CacheResolver::createSetHandler(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SetHandler_tAE38CDA0AFD7619D49B7E3A9FE386955818B44E8 * CacheResolver_createSetHandler_mAE39A30C48F160B352B8E000B929552681333AD5 (FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method);
// System.Void Prime31.Json/Deserializer::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deserializer__ctor_mD97507885387B54AE2983879F9EA33CC6E274829 (Deserializer_t462BAFC366F4A16034E00799D6C0E08B2A720212 * __this, String_t* ___json0, const RuntimeMethod* method);
// System.Object Prime31.Json/Deserializer::deserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Deserializer_deserialize_m4C003633D9CBAAEAC50C092130F1CDDB6BFC606A (Deserializer_t462BAFC366F4A16034E00799D6C0E08B2A720212 * __this, const RuntimeMethod* method);
// System.Object Prime31.Json/Deserializer::parseValue(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Deserializer_parseValue_m0372CAE3C60CEC2986CAA70ECC5AABA6165DF36F (Deserializer_t462BAFC366F4A16034E00799D6C0E08B2A720212 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___json0, int32_t* ___index1, const RuntimeMethod* method);
// Prime31.Json/Deserializer/JsonToken Prime31.Json/Deserializer::lookAhead(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deserializer_lookAhead_m8CB7D0B3B77F59E1A7360A1499BA2C514E65783E (Deserializer_t462BAFC366F4A16034E00799D6C0E08B2A720212 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___json0, int32_t ___index1, const RuntimeMethod* method);
// System.String Prime31.Json/Deserializer::parseString(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Deserializer_parseString_m6F7C08929B3E829139CA6DF476AF6494C2B0C069 (Deserializer_t462BAFC366F4A16034E00799D6C0E08B2A720212 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___json0, int32_t* ___index1, const RuntimeMethod* method);
// System.Object Prime31.Json/Deserializer::parseNumber(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Deserializer_parseNumber_m712623F57801F97A279CD88234A0B3A3863E64B5 (Deserializer_t462BAFC366F4A16034E00799D6C0E08B2A720212 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___json0, int32_t* ___index1, const RuntimeMethod* method);
// System.Collections.IDictionary Prime31.Json/Deserializer::parseObject(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Deserializer_parseObject_m30E5F094344085606025462441166355CAAFB70F (Deserializer_t462BAFC366F4A16034E00799D6C0E08B2A720212 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___json0, int32_t* ___index1, const RuntimeMethod* method);
// System.Collections.IList Prime31.Json/Deserializer::parseArray(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Deserializer_parseArray_mF12E301EE19CC00460A194F36B95E8F2841F900A (Deserializer_t462BAFC366F4A16034E00799D6C0E08B2A720212 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___json0, int32_t* ___index1, const RuntimeMethod* method);
// Prime31.Json/Deserializer/JsonToken Prime31.Json/Deserializer::nextToken(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deserializer_nextToken_m515F03A4C98FD8A0DB8A99567B4BC7CF085533A9 (Deserializer_t462BAFC366F4A16034E00799D6C0E08B2A720212 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___json0, int32_t* ___index1, const RuntimeMethod* method);
// System.Boolean System.Boolean::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_Parse_m97AFBD113AE4629041678100C5A595F3529C7F7D (String_t* ___value0, const RuntimeMethod* method);
// System.Void Prime31.Json/Deserializer::eatWhitespace(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deserializer_eatWhitespace_m41DBE8FC8D3E3458EF4B97E87E388C9B03D149C1 (Deserializer_t462BAFC366F4A16034E00799D6C0E08B2A720212 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___json0, int32_t* ___index1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344 (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___val0, const RuntimeMethod* method);
// System.UInt32 System.UInt32::Parse(System.String,System.Globalization.NumberStyles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UInt32_Parse_m98EAE0991755E35BE7F7713E73CF004BFE2C9DBA (String_t* ___s0, int32_t ___style1, const RuntimeMethod* method);
// System.Int32 Prime31.Json/Deserializer::getLastIndexOfNumber(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deserializer_getLastIndexOfNumber_mC11CDDF2ADB33028C39C6FBCE31A941783EA1A2F (Deserializer_t462BAFC366F4A16034E00799D6C0E08B2A720212 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___json0, int32_t ___index1, const RuntimeMethod* method);
// System.Double System.Double::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Double_Parse_m281C3FAE601723AC732D26BAFC6D61CEFD2E0F7D (String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.Object,System.Object>> Prime31.Json/ObjectDecoder::getMembersWithSetters(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4 * ObjectDecoder_getMembersWithSetters_mAE14A90AE0834D538C667D4CF52C0C9C4A693DC5 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.Object,System.Object>>::.ctor()
inline void Dictionary_2__ctor_mC7E6095767F64C43E03802A7C5E11740196065FB (Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void Prime31.Json/ObjectDecoder/<getMembersWithSetters>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetMembersWithSettersU3Ec__AnonStorey0__ctor_mC06865E80340C9F1A97CD454C942ECC0FC6D198D (U3CgetMembersWithSettersU3Ec__AnonStorey0_t1D44DCBA25E160019A1FE234896DCD22AE74AA1C * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mE1761BE81335B68DA4E0F742344DA72F092A29C1 (Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mE1761BE81335B68DA4E0F742344DA72F092A29C1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.Object,System.Object>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mC3A2BFFC362947ED3225DD391545F04E5AD7239B (Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4 * __this, String_t* ___key0, Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4 *, String_t*, Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Prime31.Json/ObjectDecoder/<getMembersWithSetters>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetMembersWithSettersU3Ec__AnonStorey1__ctor_m52BBAAB32FC73270276D9C0CC54B172DD413A943 (U3CgetMembersWithSettersU3Ec__AnonStorey1_tC36F03EB94E9570E7200C55D5F819BF0C4036206 * __this, const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295 (Type_t * ___type0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.Object,System.Object>> Prime31.Json/ObjectDecoder::getMemberInfoForObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4 * ObjectDecoder_getMemberInfoForObject_m8B803CFAE35A1D34C4BF63D1BC63953F8F8A2C30 (ObjectDecoder_tA5ED99430A82C53E75E54ACC619AE501AAAAD8C6 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Keys()
inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * Dictionary_2_get_Keys_mE3B6496D9EE741F44C34E12F543B7DC7065BD84B (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2_get_Keys_m771BB389A4CB93B7EDBDC71F503B50049B8999C7_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::GetEnumerator()
inline Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF  KeyCollection_GetEnumerator_mA7A3EDE79F7F742613170703D44941D7EBE09E7D (KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF  (*) (KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 *, const RuntimeMethod*))KeyCollection_GetEnumerator_m6B4DC134BB6777F8C99D26315F359E069004CF13_gshared)(__this, method);
}
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Object>::get_Current()
inline String_t* Enumerator_get_Current_m557855CD7AB5535158BEBB5F773B80036E88369E_inline (Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF *, const RuntimeMethod*))Enumerator_get_Current_mF254C3BDEA9F0829958522BF88C75DE8BEC4961F_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.Object,System.Object>>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m5020E2E0843575E8C35BFF383E6230E270238200 (Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.Object,System.Object>>::get_Item(!0)
inline Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * Dictionary_2_get_Item_mD35CC224B1371CA217FF9D886A9CC15BC9B52E5F (Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * (*) (Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Void System.Action`2<System.Object,System.Object>::Invoke(!0,!1)
inline void Action_2_Invoke_m54EE979C4D83695ED736A3177A68C2968C8C4382 (Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))Action_2_Invoke_m54EE979C4D83695ED736A3177A68C2968C8C4382_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m4D8899097FFAE4593AA535D2A9311C7884F75492 (Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF *, const RuntimeMethod*))Enumerator_MoveNext_m3714ECE30727E77F475635710D707743B6D930E6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Object>::Dispose()
inline void Enumerator_Dispose_m794A8065F96A52A636116CD7475B246BD39574CA (Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF *, const RuntimeMethod*))Enumerator_Dispose_m5440E65428351CA6F19B1804D172DCB5E9C59C98_gshared)(__this, method);
}
// System.Void Prime31.Json/Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_m32221D568BF25D7701599D59E929021320241D41 (Serializer_t8E8E654A0E429ECF8D377E7F0081F82173C60854 * __this, const RuntimeMethod* method);
// System.Void Prime31.Json/Serializer::serializeObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_serializeObject_m94EB54FBE494EA20573DD5BE3759FA0B15ACF090 (Serializer_t8E8E654A0E429ECF8D377E7F0081F82173C60854 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void Prime31.Json/Serializer::serializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_serializeString_m491B546988E17F9AD3DBFC6E125BEB074EF6B350 (Serializer_t8E8E654A0E429ECF8D377E7F0081F82173C60854 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.Void Prime31.Json/Serializer::serializeIList(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_serializeIList_m8AD071C3002DFCE5987CDAFA70FFF88157B9988D (Serializer_t8E8E654A0E429ECF8D377E7F0081F82173C60854 * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method);
// System.Void Prime31.Json/Serializer::serializeDictionary(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_serializeDictionary_m05BCA044663332D71EF9FDDB8F6ABBB3B93E4E47 (Serializer_t8E8E654A0E429ECF8D377E7F0081F82173C60854 * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___dict0, const RuntimeMethod* method);
// System.Void Prime31.Json/Serializer::serializeIDictionary(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_serializeIDictionary_mD494C9D9040ED7673F2DBFB58AED0DADA1A02367 (Serializer_t8E8E654A0E429ECF8D377E7F0081F82173C60854 * __this, RuntimeObject* ___dict0, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsPrimitive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3 (Type_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F (StringBuilder_t * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.TimeSpan System.DateTime::Subtract(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  DateTime_Subtract_mB3CA7BD87D07F9A98AA7A571D7CA179A4209AE0B (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalMilliseconds_m97368AE0609D865EB2A6BAE96AAA97AF8BDBF1C5 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Double,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m5BC045F91E837268FECEA78DA859902005EF91D1 (double ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Void Prime31.Json/Serializer::serializeClass(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_serializeClass_mC36217FCFB2EA7EBF6E2A77523897D4991F77999 (Serializer_t8E8E654A0E429ECF8D377E7F0081F82173C60854 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mCDD3456A0F07EF72C62EF668CF9141937D0EB041 (RuntimeObject * ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_mA60945431DE8F2DFDF3A3E4C76C21703562F2906 (int32_t ___value0, int32_t ___toBase1, const RuntimeMethod* method);
// System.String System.String::PadLeft(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_PadLeft_m7666BD115C91CF7F69642532F4CA9B0726C0A328 (String_t* __this, int32_t ___totalWidth0, Il2CppChar ___paddingChar1, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::get_IsPrivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsPrivate_m33AC8E111CE7497070E6F65F11E68CD536D42072 (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Object System.Convert::ChangeType(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Convert_ChangeType_mD726EC15920319382D858ECD7FD78339110D7FD4 (RuntimeObject * ___value0, Type_t * ___conversionType1, const RuntimeMethod* method);
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
// System.Void Prime31.AbstractManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractManager__ctor_m34AEC455F77571F11F047680B9BBC39F93092AFA (AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// Prime31.LifecycleHelper Prime31.AbstractManager::get_coroutineSurrogate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LifecycleHelper_t2C8530CA0073EF4CA43BCC651EB399608723D373 * AbstractManager_get_coroutineSurrogate_mB9BFA65B8657DA189D5DAF19C232DFD74FCC9B9D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisLifecycleHelper_t2C8530CA0073EF4CA43BCC651EB399608723D373_m56E0C8DC89B0E27FAD3A3350603AADA785EB901F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		LifecycleHelper_t2C8530CA0073EF4CA43BCC651EB399608723D373 * L_0 = ((AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_StaticFields*)il2cpp_codegen_static_fields_for(AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_il2cpp_TypeInfo_var))->get__prime31LifecycleHelperRef_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = AbstractManager_getPrime31ManagerGameObject_mC57635189FD23193965E99E646DDA6E910E1F20C(/*hidden argument*/NULL);
		V_0 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = V_0;
		NullCheck(L_3);
		LifecycleHelper_t2C8530CA0073EF4CA43BCC651EB399608723D373 * L_4;
		L_4 = GameObject_AddComponent_TisLifecycleHelper_t2C8530CA0073EF4CA43BCC651EB399608723D373_m56E0C8DC89B0E27FAD3A3350603AADA785EB901F(L_3, /*hidden argument*/GameObject_AddComponent_TisLifecycleHelper_t2C8530CA0073EF4CA43BCC651EB399608723D373_m56E0C8DC89B0E27FAD3A3350603AADA785EB901F_RuntimeMethod_var);
		((AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_StaticFields*)il2cpp_codegen_static_fields_for(AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_il2cpp_TypeInfo_var))->set__prime31LifecycleHelperRef_4(L_4);
	}

IL_0021:
	{
		LifecycleHelper_t2C8530CA0073EF4CA43BCC651EB399608723D373 * L_5 = ((AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_StaticFields*)il2cpp_codegen_static_fields_for(AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_il2cpp_TypeInfo_var))->get__prime31LifecycleHelperRef_4();
		return L_5;
	}
}
// Prime31.LifecycleHelper Prime31.AbstractManager::get_lifecycleHelper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LifecycleHelper_t2C8530CA0073EF4CA43BCC651EB399608723D373 * AbstractManager_get_lifecycleHelper_m11FCF1F2A4AE033F6CFB34B1B0D20D862D3219D2 (const RuntimeMethod* method)
{
	{
		LifecycleHelper_t2C8530CA0073EF4CA43BCC651EB399608723D373 * L_0;
		L_0 = AbstractManager_get_coroutineSurrogate_mB9BFA65B8657DA189D5DAF19C232DFD74FCC9B9D(/*hidden argument*/NULL);
		return L_0;
	}
}
// Prime31.ThreadingCallbackHelper Prime31.AbstractManager::getThreadingCallbackHelper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ThreadingCallbackHelper_t8ECB03A15726D7FE39F2C3B6609167DC4A32266A * AbstractManager_getThreadingCallbackHelper_mFB9814D04929A37BB334257FDBB359D5B21CDEC9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ThreadingCallbackHelper_t8ECB03A15726D7FE39F2C3B6609167DC4A32266A * L_0 = ((AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_StaticFields*)il2cpp_codegen_static_fields_for(AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_il2cpp_TypeInfo_var))->get__threadingCallbackHelper_5();
		return L_0;
	}
}
// System.Void Prime31.AbstractManager::createThreadingCallbackHelper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractManager_createThreadingCallbackHelper_mC667301F5974AFBBF2F027D852FB6B5CEF871579 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisThreadingCallbackHelper_t8ECB03A15726D7FE39F2C3B6609167DC4A32266A_m08F2AA5F83D59CA5ACE41304374BB769BEB49AC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadingCallbackHelper_t8ECB03A15726D7FE39F2C3B6609167DC4A32266A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadingCallbackHelper_t8ECB03A15726D7FE39F2C3B6609167DC4A32266A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		ThreadingCallbackHelper_t8ECB03A15726D7FE39F2C3B6609167DC4A32266A * L_0 = ((AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_StaticFields*)il2cpp_codegen_static_fields_for(AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_il2cpp_TypeInfo_var))->get__threadingCallbackHelper_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (ThreadingCallbackHelper_t8ECB03A15726D7FE39F2C3B6609167DC4A32266A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_4;
		L_4 = Object_FindObjectOfType_m07215A5C789FC7C88754B64DFCF1313C55E2F6D2(L_3, /*hidden argument*/NULL);
		((AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_StaticFields*)il2cpp_codegen_static_fields_for(AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_il2cpp_TypeInfo_var))->set__threadingCallbackHelper_5(((ThreadingCallbackHelper_t8ECB03A15726D7FE39F2C3B6609167DC4A32266A *)IsInstClass((RuntimeObject*)L_4, ThreadingCallbackHelper_t8ECB03A15726D7FE39F2C3B6609167DC4A32266A_il2cpp_TypeInfo_var)));
		ThreadingCallbackHelper_t8ECB03A15726D7FE39F2C3B6609167DC4A32266A * L_5 = ((AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_StaticFields*)il2cpp_codegen_static_fields_for(AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_il2cpp_TypeInfo_var))->get__threadingCallbackHelper_5();
		bool L_6;
		L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		return;
	}

IL_003b:
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = AbstractManager_getPrime31ManagerGameObject_mC57635189FD23193965E99E646DDA6E910E1F20C(/*hidden argument*/NULL);
		V_0 = L_7;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = V_0;
		NullCheck(L_8);
		ThreadingCallbackHelper_t8ECB03A15726D7FE39F2C3B6609167DC4A32266A * L_9;
		L_9 = GameObject_AddComponent_TisThreadingCallbackHelper_t8ECB03A15726D7FE39F2C3B6609167DC4A32266A_m08F2AA5F83D59CA5ACE41304374BB769BEB49AC8(L_8, /*hidden argument*/GameObject_AddComponent_TisThreadingCallbackHelper_t8ECB03A15726D7FE39F2C3B6609167DC4A32266A_m08F2AA5F83D59CA5ACE41304374BB769BEB49AC8_RuntimeMethod_var);
		((AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_StaticFields*)il2cpp_codegen_static_fields_for(AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_il2cpp_TypeInfo_var))->set__threadingCallbackHelper_5(L_9);
		return;
	}
}
// UnityEngine.GameObject Prime31.AbstractManager::getPrime31ManagerGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * AbstractManager_getPrime31ManagerGameObject_mC57635189FD23193965E99E646DDA6E910E1F20C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DCFA59F6EB52770C39468B93BB5D283E8B57627);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ((AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_StaticFields*)il2cpp_codegen_static_fields_for(AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_il2cpp_TypeInfo_var))->get__prime31GameObject_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = ((AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_StaticFields*)il2cpp_codegen_static_fields_for(AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_il2cpp_TypeInfo_var))->get__prime31GameObject_6();
		return L_2;
	}

IL_0016:
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral8DCFA59F6EB52770C39468B93BB5D283E8B57627, /*hidden argument*/NULL);
		((AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_StaticFields*)il2cpp_codegen_static_fields_for(AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_il2cpp_TypeInfo_var))->set__prime31GameObject_6(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = ((AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_StaticFields*)il2cpp_codegen_static_fields_for(AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_il2cpp_TypeInfo_var))->get__prime31GameObject_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004e;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_6, _stringLiteral8DCFA59F6EB52770C39468B93BB5D283E8B57627, /*hidden argument*/NULL);
		((AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_StaticFields*)il2cpp_codegen_static_fields_for(AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_il2cpp_TypeInfo_var))->set__prime31GameObject_6(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = ((AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_StaticFields*)il2cpp_codegen_static_fields_for(AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_il2cpp_TypeInfo_var))->get__prime31GameObject_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_7, /*hidden argument*/NULL);
	}

IL_004e:
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = ((AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_StaticFields*)il2cpp_codegen_static_fields_for(AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A_il2cpp_TypeInfo_var))->get__prime31GameObject_6();
		return L_8;
	}
}
// System.Void Prime31.AbstractManager::initialize(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractManager_initialize_mA14BCC52361999D3B2BCA929C012A146EF3FFB6B (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * V_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
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
			Type_t * L_0 = ___type0;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_1;
			L_1 = Object_FindObjectOfType_m07215A5C789FC7C88754B64DFCF1313C55E2F6D2(L_0, /*hidden argument*/NULL);
			V_0 = ((MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)IsInstClass((RuntimeObject*)L_1, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_il2cpp_TypeInfo_var));
			MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_2 = V_0;
			bool L_3;
			L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_001d;
			}
		}

IL_0018:
		{
			goto IL_0083;
		}

IL_001d:
		{
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
			L_4 = AbstractManager_getPrime31ManagerGameObject_mC57635189FD23193965E99E646DDA6E910E1F20C(/*hidden argument*/NULL);
			V_1 = L_4;
			Type_t * L_5 = ___type0;
			NullCheck(L_5);
			String_t* L_6;
			L_6 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
			GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_7, L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = V_2;
			Type_t * L_9 = ___type0;
			NullCheck(L_8);
			Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_10;
			L_10 = GameObject_AddComponent_mD183856CB5A1CCF1576221D7D6CEBC4092E734B8(L_8, L_9, /*hidden argument*/NULL);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = V_2;
			NullCheck(L_11);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
			L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = V_1;
			NullCheck(L_13);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
			L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
			NullCheck(L_12);
			Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_12, L_14, /*hidden argument*/NULL);
			goto IL_0083;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_004d;
		throw e;
	}

CATCH_004d:
	{ // begin catch(UnityEngine.UnityException)
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5A7BB2333D11C3D2D5B7745774F148CD42B4E06C)));
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5A7BB2333D11C3D2D5B7745774F148CD42B4E06C)));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = L_16;
		Type_t * L_18 = ___type0;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_18);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = L_17;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9BF93305BDF022D25D031F92CBA9AE2673FC7BB1)));
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9BF93305BDF022D25D031F92CBA9AE2673FC7BB1)));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = L_19;
		Type_t * L_21 = ___type0;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_21);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = L_20;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB19A2E739318CC3D73C57DF7435614CEA05AF90D)));
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB19A2E739318CC3D73C57DF7435614CEA05AF90D)));
		String_t* L_23;
		L_23 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_23, /*hidden argument*/NULL);
		goto IL_0083;
	} // end catch (depth: 1)

IL_0083:
	{
		return;
	}
}
// System.Void Prime31.AbstractManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractManager_Awake_mF498F7A88CD6BD684D318EF2D2F4757768BDF75A (AbstractManager_t21B321990C5CF538E29F903158EBA0943EA9071A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Type_t * L_1;
		L_1 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_1);
		NullCheck(L_0);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_0, L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Transform_get_root_mDEB1F3B4DB26B32CEED6DFFF734F85C79C4DDA91(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_5, /*hidden argument*/NULL);
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
// System.Void Prime31.ActionExtensions::invoke(System.Delegate,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionExtensions_invoke_mA9DA8F6D55723F8713266ABA002F71BEBBCC1264 (Delegate_t * ___listener0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53DCE205A482733E596CEC3A7D87F6EC6A14565F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56DBC1D6565438E015229D836BF128B1E55304DB);
		s_Il2CppMethodInitialized = true;
	}
	{
		Delegate_t * L_0 = ___listener0;
		NullCheck(L_0);
		MethodInfo_t * L_1;
		L_1 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = MethodBase_get_IsStatic_mDFDF51EDFE5DBDD5FE942564A1F56E3C7E3DE43F(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0050;
		}
	}
	{
		Delegate_t * L_3 = ___listener0;
		NullCheck(L_3);
		RuntimeObject * L_4;
		L_4 = Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		Delegate_t * L_5 = ___listener0;
		NullCheck(L_5);
		RuntimeObject * L_6;
		L_6 = Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_6, NULL);
		if (!L_7)
		{
			goto IL_0050;
		}
	}

IL_002c:
	{
		Delegate_t * L_8 = ___listener0;
		NullCheck(L_8);
		MethodInfo_t * L_9;
		L_9 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_9);
		String_t* L_11;
		L_11 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral53DCE205A482733E596CEC3A7D87F6EC6A14565F, L_10, _stringLiteral56DBC1D6565438E015229D836BF128B1E55304DB, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_11, /*hidden argument*/NULL);
		goto IL_0063;
	}

IL_0050:
	{
		Delegate_t * L_12 = ___listener0;
		NullCheck(L_12);
		MethodInfo_t * L_13;
		L_13 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227(L_12, /*hidden argument*/NULL);
		Delegate_t * L_14 = ___listener0;
		NullCheck(L_14);
		RuntimeObject * L_15;
		L_15 = Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline(L_14, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = ___args1;
		NullCheck(L_13);
		RuntimeObject * L_17;
		L_17 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_13, L_15, L_16, /*hidden argument*/NULL);
	}

IL_0063:
	{
		return;
	}
}
// System.Void Prime31.ActionExtensions::fire(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionExtensions_fire_mF76A810DD125063A25B742BC24E80AE122D0392A (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	Delegate_t * V_1 = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___handler0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)0);
		V_0 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = ___handler0;
		NullCheck(L_2);
		DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* L_3;
		L_3 = VirtFuncInvoker0< DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* >::Invoke(9 /* System.Delegate[] System.Delegate::GetInvocationList() */, L_2);
		V_2 = L_3;
		V_3 = 0;
		goto IL_002b;
	}

IL_001c:
	{
		DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* L_4 = V_2;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Delegate_t * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		Delegate_t * L_8 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_0;
		ActionExtensions_invoke_mA9DA8F6D55723F8713266ABA002F71BEBBCC1264(L_8, L_9, /*hidden argument*/NULL);
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002b:
	{
		int32_t L_11 = V_3;
		DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* L_12 = V_2;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
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
// System.Void Prime31.Reflection.CacheResolver::.ctor(Prime31.Reflection.MemberMapLoader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CacheResolver__ctor_mFFA61893994C8BDDD62C45671C18CCF07B265904 (CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0 * __this, MemberMapLoader_t56FA45FA01C1729FCF47BAE05C4F8406A5B3E137 * ___memberMapLoader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDictionary_2__ctor_m5D9F964EE6C1D6997CF803C9104FD29A36F39965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDictionary_2_tFADC581AA2370090D8D9E6416FC552750C99B022_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SafeDictionary_2_tFADC581AA2370090D8D9E6416FC552750C99B022 * L_0 = (SafeDictionary_2_tFADC581AA2370090D8D9E6416FC552750C99B022 *)il2cpp_codegen_object_new(SafeDictionary_2_tFADC581AA2370090D8D9E6416FC552750C99B022_il2cpp_TypeInfo_var);
		SafeDictionary_2__ctor_m5D9F964EE6C1D6997CF803C9104FD29A36F39965(L_0, /*hidden argument*/SafeDictionary_2__ctor_m5D9F964EE6C1D6997CF803C9104FD29A36F39965_RuntimeMethod_var);
		__this->set__memberMapsCache_1(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		MemberMapLoader_t56FA45FA01C1729FCF47BAE05C4F8406A5B3E137 * L_1 = ___memberMapLoader0;
		__this->set__memberMapLoader_0(L_1);
		return;
	}
}
// System.Object Prime31.Reflection.CacheResolver::getNewInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CacheResolver_getNewInstance_mD97DB880BC39BE885D0637FCB1028B4C99FA1900 (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CtorDelegate_tC5D8FE74BA0A8B81F9AB288E39882F34B7A2AC2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDictionary_2_add_m9046A277F92267D0DE30F5F33ACD8938E26E71B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDictionary_2_tryGetValue_m9CA6136377396DFE08785563B6BF96000341DF45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CgetNewInstanceU3Ec__AnonStorey0_U3CU3Em__0_mCCEA2EF8C3C88A88B9C9399E244726EA0E3C8A9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CgetNewInstanceU3Ec__AnonStorey0_t0874DDADE8E8CD3874E55EB03602C06A726898CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CgetNewInstanceU3Ec__AnonStorey0_t0874DDADE8E8CD3874E55EB03602C06A726898CA * V_0 = NULL;
	CtorDelegate_tC5D8FE74BA0A8B81F9AB288E39882F34B7A2AC2A * V_1 = NULL;
	{
		U3CgetNewInstanceU3Ec__AnonStorey0_t0874DDADE8E8CD3874E55EB03602C06A726898CA * L_0 = (U3CgetNewInstanceU3Ec__AnonStorey0_t0874DDADE8E8CD3874E55EB03602C06A726898CA *)il2cpp_codegen_object_new(U3CgetNewInstanceU3Ec__AnonStorey0_t0874DDADE8E8CD3874E55EB03602C06A726898CA_il2cpp_TypeInfo_var);
		U3CgetNewInstanceU3Ec__AnonStorey0__ctor_m23D8FAE760D5CE3E0A767180BDB2385EAA164C78(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0_il2cpp_TypeInfo_var);
		SafeDictionary_2_t835C82D4A26CED1AA01E976F040682C42C841A4F * L_1 = ((CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0_StaticFields*)il2cpp_codegen_static_fields_for(CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0_il2cpp_TypeInfo_var))->get_constructorCache_2();
		Type_t * L_2 = ___type0;
		NullCheck(L_1);
		bool L_3;
		L_3 = SafeDictionary_2_tryGetValue_m9CA6136377396DFE08785563B6BF96000341DF45(L_1, L_2, (CtorDelegate_tC5D8FE74BA0A8B81F9AB288E39882F34B7A2AC2A **)(&V_1), /*hidden argument*/SafeDictionary_2_tryGetValue_m9CA6136377396DFE08785563B6BF96000341DF45_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		CtorDelegate_tC5D8FE74BA0A8B81F9AB288E39882F34B7A2AC2A * L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject * L_5;
		L_5 = CtorDelegate_Invoke_mEDFE8AF494F4D1D1CDB6E753E7C0025CCEDB3BAC(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_001f:
	{
		U3CgetNewInstanceU3Ec__AnonStorey0_t0874DDADE8E8CD3874E55EB03602C06A726898CA * L_6 = V_0;
		Type_t * L_7 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_8 = ((Type_t_StaticFields*)il2cpp_codegen_static_fields_for(Type_t_il2cpp_TypeInfo_var))->get_EmptyTypes_5();
		NullCheck(L_7);
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_9;
		L_9 = Type_GetConstructor_m7D94831F070BECE7BECDAEAFB024981CCC4E03CE(L_7, ((int32_t)52), (Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 *)NULL, L_8, (ParameterModifierU5BU5D_tFF6F73F1CFE837331D6AAA11CC78CE5D9B5F0A2B*)(ParameterModifierU5BU5D_tFF6F73F1CFE837331D6AAA11CC78CE5D9B5F0A2B*)NULL, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_constructorInfo_0(L_9);
		U3CgetNewInstanceU3Ec__AnonStorey0_t0874DDADE8E8CD3874E55EB03602C06A726898CA * L_10 = V_0;
		CtorDelegate_tC5D8FE74BA0A8B81F9AB288E39882F34B7A2AC2A * L_11 = (CtorDelegate_tC5D8FE74BA0A8B81F9AB288E39882F34B7A2AC2A *)il2cpp_codegen_object_new(CtorDelegate_tC5D8FE74BA0A8B81F9AB288E39882F34B7A2AC2A_il2cpp_TypeInfo_var);
		CtorDelegate__ctor_mC9F313A8E87DE7C95D8C397A222845EA3E7F654D(L_11, L_10, (intptr_t)((intptr_t)U3CgetNewInstanceU3Ec__AnonStorey0_U3CU3Em__0_mCCEA2EF8C3C88A88B9C9399E244726EA0E3C8A9A_RuntimeMethod_var), /*hidden argument*/NULL);
		V_1 = L_11;
		IL2CPP_RUNTIME_CLASS_INIT(CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0_il2cpp_TypeInfo_var);
		SafeDictionary_2_t835C82D4A26CED1AA01E976F040682C42C841A4F * L_12 = ((CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0_StaticFields*)il2cpp_codegen_static_fields_for(CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0_il2cpp_TypeInfo_var))->get_constructorCache_2();
		Type_t * L_13 = ___type0;
		CtorDelegate_tC5D8FE74BA0A8B81F9AB288E39882F34B7A2AC2A * L_14 = V_1;
		NullCheck(L_12);
		SafeDictionary_2_add_m9046A277F92267D0DE30F5F33ACD8938E26E71B8(L_12, L_13, L_14, /*hidden argument*/SafeDictionary_2_add_m9046A277F92267D0DE30F5F33ACD8938E26E71B8_RuntimeMethod_var);
		CtorDelegate_tC5D8FE74BA0A8B81F9AB288E39882F34B7A2AC2A * L_15 = V_1;
		NullCheck(L_15);
		RuntimeObject * L_16;
		L_16 = CtorDelegate_Invoke_mEDFE8AF494F4D1D1CDB6E753E7C0025CCEDB3BAC(L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap> Prime31.Reflection.CacheResolver::loadMaps(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 * CacheResolver_loadMaps_m3DB7ABA05C03FA632AEDE962FF742F108790D156 (CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDictionary_2__ctor_m3A5343F8A852C3A6259794B02D345ED76955EEBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDictionary_2_add_mBBE14F8B8A70375BE2D8849D67C9AE032CC5A9FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDictionary_2_tryGetValue_mECA3E84F7995497E18128B080F063D0105C344ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 * V_0 = NULL;
	{
		Type_t * L_0 = ___type0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Type_t * L_1 = ___type0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_1) == ((RuntimeObject*)(Type_t *)L_3))))
		{
			goto IL_0018;
		}
	}

IL_0016:
	{
		return (SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 *)NULL;
	}

IL_0018:
	{
		SafeDictionary_2_tFADC581AA2370090D8D9E6416FC552750C99B022 * L_4 = __this->get__memberMapsCache_1();
		Type_t * L_5 = ___type0;
		NullCheck(L_4);
		bool L_6;
		L_6 = SafeDictionary_2_tryGetValue_mECA3E84F7995497E18128B080F063D0105C344ED(L_4, L_5, (SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 **)(&V_0), /*hidden argument*/SafeDictionary_2_tryGetValue_mECA3E84F7995497E18128B080F063D0105C344ED_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 * L_7 = V_0;
		return L_7;
	}

IL_002d:
	{
		SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 * L_8 = (SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 *)il2cpp_codegen_object_new(SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031_il2cpp_TypeInfo_var);
		SafeDictionary_2__ctor_m3A5343F8A852C3A6259794B02D345ED76955EEBA(L_8, /*hidden argument*/SafeDictionary_2__ctor_m3A5343F8A852C3A6259794B02D345ED76955EEBA_RuntimeMethod_var);
		V_0 = L_8;
		MemberMapLoader_t56FA45FA01C1729FCF47BAE05C4F8406A5B3E137 * L_9 = __this->get__memberMapLoader_0();
		Type_t * L_10 = ___type0;
		SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 * L_11 = V_0;
		NullCheck(L_9);
		MemberMapLoader_Invoke_mF4F7BF0418E94800E6F605F41D85E5B3320F3EF5(L_9, L_10, L_11, /*hidden argument*/NULL);
		SafeDictionary_2_tFADC581AA2370090D8D9E6416FC552750C99B022 * L_12 = __this->get__memberMapsCache_1();
		Type_t * L_13 = ___type0;
		SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 * L_14 = V_0;
		NullCheck(L_12);
		SafeDictionary_2_add_mBBE14F8B8A70375BE2D8849D67C9AE032CC5A9FE(L_12, L_13, L_14, /*hidden argument*/SafeDictionary_2_add_mBBE14F8B8A70375BE2D8849D67C9AE032CC5A9FE_RuntimeMethod_var);
		SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 * L_15 = V_0;
		return L_15;
	}
}
// Prime31.Reflection.GetHandler Prime31.Reflection.CacheResolver::createGetHandler(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GetHandler_tAE31D3C378B82D9F3EC44C4BD9691E9E1836ED73 * CacheResolver_createGetHandler_m292F615289C20DD2D407685BB738267E4F9365C2 (FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetHandler_tAE31D3C378B82D9F3EC44C4BD9691E9E1836ED73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CcreateGetHandlerU3Ec__AnonStorey1_U3CU3Em__0_mA56C519CB2E562696744435BDF3B561AC9B9BB03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CcreateGetHandlerU3Ec__AnonStorey1_t02A1377C5EAAAC329AE9F663DFD282EA5CF2108E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CcreateGetHandlerU3Ec__AnonStorey1_t02A1377C5EAAAC329AE9F663DFD282EA5CF2108E * V_0 = NULL;
	{
		U3CcreateGetHandlerU3Ec__AnonStorey1_t02A1377C5EAAAC329AE9F663DFD282EA5CF2108E * L_0 = (U3CcreateGetHandlerU3Ec__AnonStorey1_t02A1377C5EAAAC329AE9F663DFD282EA5CF2108E *)il2cpp_codegen_object_new(U3CcreateGetHandlerU3Ec__AnonStorey1_t02A1377C5EAAAC329AE9F663DFD282EA5CF2108E_il2cpp_TypeInfo_var);
		U3CcreateGetHandlerU3Ec__AnonStorey1__ctor_m98B9EA1EA26971779B77528A3E6C7A2B955B7BEF(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CcreateGetHandlerU3Ec__AnonStorey1_t02A1377C5EAAAC329AE9F663DFD282EA5CF2108E * L_1 = V_0;
		FieldInfo_t * L_2 = ___fieldInfo0;
		NullCheck(L_1);
		L_1->set_fieldInfo_0(L_2);
		U3CcreateGetHandlerU3Ec__AnonStorey1_t02A1377C5EAAAC329AE9F663DFD282EA5CF2108E * L_3 = V_0;
		GetHandler_tAE31D3C378B82D9F3EC44C4BD9691E9E1836ED73 * L_4 = (GetHandler_tAE31D3C378B82D9F3EC44C4BD9691E9E1836ED73 *)il2cpp_codegen_object_new(GetHandler_tAE31D3C378B82D9F3EC44C4BD9691E9E1836ED73_il2cpp_TypeInfo_var);
		GetHandler__ctor_m229B2E66E38D223EFE7F8EE28D65593C0DC827CB(L_4, L_3, (intptr_t)((intptr_t)U3CcreateGetHandlerU3Ec__AnonStorey1_U3CU3Em__0_mA56C519CB2E562696744435BDF3B561AC9B9BB03_RuntimeMethod_var), /*hidden argument*/NULL);
		return L_4;
	}
}
// Prime31.Reflection.SetHandler Prime31.Reflection.CacheResolver::createSetHandler(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SetHandler_tAE38CDA0AFD7619D49B7E3A9FE386955818B44E8 * CacheResolver_createSetHandler_mAE39A30C48F160B352B8E000B929552681333AD5 (FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetHandler_tAE38CDA0AFD7619D49B7E3A9FE386955818B44E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CcreateSetHandlerU3Ec__AnonStorey2_U3CU3Em__0_mE2303DE8B0C90E2A26EE180FE9141E6112575A47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CcreateSetHandlerU3Ec__AnonStorey2_t3C37B8E13768D45BB60408EDA64A9D6452077CE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CcreateSetHandlerU3Ec__AnonStorey2_t3C37B8E13768D45BB60408EDA64A9D6452077CE0 * V_0 = NULL;
	{
		U3CcreateSetHandlerU3Ec__AnonStorey2_t3C37B8E13768D45BB60408EDA64A9D6452077CE0 * L_0 = (U3CcreateSetHandlerU3Ec__AnonStorey2_t3C37B8E13768D45BB60408EDA64A9D6452077CE0 *)il2cpp_codegen_object_new(U3CcreateSetHandlerU3Ec__AnonStorey2_t3C37B8E13768D45BB60408EDA64A9D6452077CE0_il2cpp_TypeInfo_var);
		U3CcreateSetHandlerU3Ec__AnonStorey2__ctor_mD8B26D67F93639E73A136614B218248E734D73D5(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CcreateSetHandlerU3Ec__AnonStorey2_t3C37B8E13768D45BB60408EDA64A9D6452077CE0 * L_1 = V_0;
		FieldInfo_t * L_2 = ___fieldInfo0;
		NullCheck(L_1);
		L_1->set_fieldInfo_0(L_2);
		U3CcreateSetHandlerU3Ec__AnonStorey2_t3C37B8E13768D45BB60408EDA64A9D6452077CE0 * L_3 = V_0;
		NullCheck(L_3);
		FieldInfo_t * L_4 = L_3->get_fieldInfo_0();
		NullCheck(L_4);
		bool L_5;
		L_5 = FieldInfo_get_IsInitOnly_mA279E731A1097E83BACAF9F53612CFA9428E806B(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_002d;
		}
	}
	{
		U3CcreateSetHandlerU3Ec__AnonStorey2_t3C37B8E13768D45BB60408EDA64A9D6452077CE0 * L_6 = V_0;
		NullCheck(L_6);
		FieldInfo_t * L_7 = L_6->get_fieldInfo_0();
		NullCheck(L_7);
		bool L_8;
		L_8 = FieldInfo_get_IsLiteral_mF2657F6BAB384894EB2C861D51093179E3EE77D9(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_002f;
		}
	}

IL_002d:
	{
		return (SetHandler_tAE38CDA0AFD7619D49B7E3A9FE386955818B44E8 *)NULL;
	}

IL_002f:
	{
		U3CcreateSetHandlerU3Ec__AnonStorey2_t3C37B8E13768D45BB60408EDA64A9D6452077CE0 * L_9 = V_0;
		SetHandler_tAE38CDA0AFD7619D49B7E3A9FE386955818B44E8 * L_10 = (SetHandler_tAE38CDA0AFD7619D49B7E3A9FE386955818B44E8 *)il2cpp_codegen_object_new(SetHandler_tAE38CDA0AFD7619D49B7E3A9FE386955818B44E8_il2cpp_TypeInfo_var);
		SetHandler__ctor_m3AD3F72FC3EAE75205F5A316FF31872C2282AC98(L_10, L_9, (intptr_t)((intptr_t)U3CcreateSetHandlerU3Ec__AnonStorey2_U3CU3Em__0_mE2303DE8B0C90E2A26EE180FE9141E6112575A47_RuntimeMethod_var), /*hidden argument*/NULL);
		return L_10;
	}
}
// Prime31.Reflection.GetHandler Prime31.Reflection.CacheResolver::createGetHandler(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GetHandler_tAE31D3C378B82D9F3EC44C4BD9691E9E1836ED73 * CacheResolver_createGetHandler_m68CA49A523B46D11DDEFC0022746103BA8DA5FB2 (PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetHandler_tAE31D3C378B82D9F3EC44C4BD9691E9E1836ED73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CcreateGetHandlerU3Ec__AnonStorey3_U3CU3Em__0_mAA0FE3A16BE79DF017244469DC62C44E1D3418EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CcreateGetHandlerU3Ec__AnonStorey3_t3C5E60C6B5886F65A76AAB8AFF20B57B80F8712A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CcreateGetHandlerU3Ec__AnonStorey3_t3C5E60C6B5886F65A76AAB8AFF20B57B80F8712A * V_0 = NULL;
	{
		U3CcreateGetHandlerU3Ec__AnonStorey3_t3C5E60C6B5886F65A76AAB8AFF20B57B80F8712A * L_0 = (U3CcreateGetHandlerU3Ec__AnonStorey3_t3C5E60C6B5886F65A76AAB8AFF20B57B80F8712A *)il2cpp_codegen_object_new(U3CcreateGetHandlerU3Ec__AnonStorey3_t3C5E60C6B5886F65A76AAB8AFF20B57B80F8712A_il2cpp_TypeInfo_var);
		U3CcreateGetHandlerU3Ec__AnonStorey3__ctor_m15784AD830AFDBAE4B7ED5F89DEE437163AC0189(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CcreateGetHandlerU3Ec__AnonStorey3_t3C5E60C6B5886F65A76AAB8AFF20B57B80F8712A * L_1 = V_0;
		PropertyInfo_t * L_2 = ___propertyInfo0;
		NullCheck(L_2);
		MethodInfo_t * L_3;
		L_3 = VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(21 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, L_2, (bool)1);
		NullCheck(L_1);
		L_1->set_getMethodInfo_0(L_3);
		U3CcreateGetHandlerU3Ec__AnonStorey3_t3C5E60C6B5886F65A76AAB8AFF20B57B80F8712A * L_4 = V_0;
		NullCheck(L_4);
		MethodInfo_t * L_5 = L_4->get_getMethodInfo_0();
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		return (GetHandler_tAE31D3C378B82D9F3EC44C4BD9691E9E1836ED73 *)NULL;
	}

IL_0020:
	{
		U3CcreateGetHandlerU3Ec__AnonStorey3_t3C5E60C6B5886F65A76AAB8AFF20B57B80F8712A * L_6 = V_0;
		GetHandler_tAE31D3C378B82D9F3EC44C4BD9691E9E1836ED73 * L_7 = (GetHandler_tAE31D3C378B82D9F3EC44C4BD9691E9E1836ED73 *)il2cpp_codegen_object_new(GetHandler_tAE31D3C378B82D9F3EC44C4BD9691E9E1836ED73_il2cpp_TypeInfo_var);
		GetHandler__ctor_m229B2E66E38D223EFE7F8EE28D65593C0DC827CB(L_7, L_6, (intptr_t)((intptr_t)U3CcreateGetHandlerU3Ec__AnonStorey3_U3CU3Em__0_mAA0FE3A16BE79DF017244469DC62C44E1D3418EB_RuntimeMethod_var), /*hidden argument*/NULL);
		return L_7;
	}
}
// Prime31.Reflection.SetHandler Prime31.Reflection.CacheResolver::createSetHandler(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SetHandler_tAE38CDA0AFD7619D49B7E3A9FE386955818B44E8 * CacheResolver_createSetHandler_m8599002127B717EC9692AB528DEB5C1EB94CCFC3 (PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetHandler_tAE38CDA0AFD7619D49B7E3A9FE386955818B44E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CcreateSetHandlerU3Ec__AnonStorey4_U3CU3Em__0_mFF0A31676881ECB0F37891E772D4CBEB8E31231D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CcreateSetHandlerU3Ec__AnonStorey4_tD61E3F935224CDCF591C2A5450A489564F55A099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CcreateSetHandlerU3Ec__AnonStorey4_tD61E3F935224CDCF591C2A5450A489564F55A099 * V_0 = NULL;
	{
		U3CcreateSetHandlerU3Ec__AnonStorey4_tD61E3F935224CDCF591C2A5450A489564F55A099 * L_0 = (U3CcreateSetHandlerU3Ec__AnonStorey4_tD61E3F935224CDCF591C2A5450A489564F55A099 *)il2cpp_codegen_object_new(U3CcreateSetHandlerU3Ec__AnonStorey4_tD61E3F935224CDCF591C2A5450A489564F55A099_il2cpp_TypeInfo_var);
		U3CcreateSetHandlerU3Ec__AnonStorey4__ctor_m91D6AE99303C028473B28F9649E6EF1E791E0513(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CcreateSetHandlerU3Ec__AnonStorey4_tD61E3F935224CDCF591C2A5450A489564F55A099 * L_1 = V_0;
		PropertyInfo_t * L_2 = ___propertyInfo0;
		NullCheck(L_2);
		MethodInfo_t * L_3;
		L_3 = VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(23 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean) */, L_2, (bool)1);
		NullCheck(L_1);
		L_1->set_setMethodInfo_0(L_3);
		U3CcreateSetHandlerU3Ec__AnonStorey4_tD61E3F935224CDCF591C2A5450A489564F55A099 * L_4 = V_0;
		NullCheck(L_4);
		MethodInfo_t * L_5 = L_4->get_setMethodInfo_0();
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		return (SetHandler_tAE38CDA0AFD7619D49B7E3A9FE386955818B44E8 *)NULL;
	}

IL_0020:
	{
		U3CcreateSetHandlerU3Ec__AnonStorey4_tD61E3F935224CDCF591C2A5450A489564F55A099 * L_6 = V_0;
		SetHandler_tAE38CDA0AFD7619D49B7E3A9FE386955818B44E8 * L_7 = (SetHandler_tAE38CDA0AFD7619D49B7E3A9FE386955818B44E8 *)il2cpp_codegen_object_new(SetHandler_tAE38CDA0AFD7619D49B7E3A9FE386955818B44E8_il2cpp_TypeInfo_var);
		SetHandler__ctor_m3AD3F72FC3EAE75205F5A316FF31872C2282AC98(L_7, L_6, (intptr_t)((intptr_t)U3CcreateSetHandlerU3Ec__AnonStorey4_U3CU3Em__0_mFF0A31676881ECB0F37891E772D4CBEB8E31231D_RuntimeMethod_var), /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void Prime31.Reflection.CacheResolver::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CacheResolver__cctor_m89D2FC8D0588A2960A0EF9D5DF410D1A1CE3AF2F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDictionary_2__ctor_mE408E5797746188256EF77C1EDBF5069C300C695_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDictionary_2_t835C82D4A26CED1AA01E976F040682C42C841A4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SafeDictionary_2_t835C82D4A26CED1AA01E976F040682C42C841A4F * L_0 = (SafeDictionary_2_t835C82D4A26CED1AA01E976F040682C42C841A4F *)il2cpp_codegen_object_new(SafeDictionary_2_t835C82D4A26CED1AA01E976F040682C42C841A4F_il2cpp_TypeInfo_var);
		SafeDictionary_2__ctor_mE408E5797746188256EF77C1EDBF5069C300C695(L_0, /*hidden argument*/SafeDictionary_2__ctor_mE408E5797746188256EF77C1EDBF5069C300C695_RuntimeMethod_var);
		((CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0_StaticFields*)il2cpp_codegen_static_fields_for(CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0_il2cpp_TypeInfo_var))->set_constructorCache_2(L_0);
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
// System.Void Prime31.CoroutineSurrogate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutineSurrogate__ctor_m8C30C28C17CAFB0622D623FDDEABDCFCFF47ADFE (CoroutineSurrogate_tF087F4451C1E8CEE2341DA4AA7C728C745DFE187 * __this, const RuntimeMethod* method)
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
// System.Void Prime31.Reflection.GetHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetHandler__ctor_m229B2E66E38D223EFE7F8EE28D65593C0DC827CB (GetHandler_tAE31D3C378B82D9F3EC44C4BD9691E9E1836ED73 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Object Prime31.Reflection.GetHandler::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GetHandler_Invoke_m2680584633B9F1FC16B76F6E4E8ECF0A323C5440 (GetHandler_tAE31D3C378B82D9F3EC44C4BD9691E9E1836ED73 * __this, RuntimeObject * ___source0, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
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
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___source0, targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, targetMethod);
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
						result = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___source0);
					else
						result = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___source0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___source0);
					else
						result = VirtFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___source0);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___source0, targetMethod);
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
						result = GenericInterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___source0);
					else
						result = GenericVirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___source0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0);
					else
						result = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___source0, targetMethod);
				}
				else
				{
					typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Prime31.Reflection.GetHandler::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetHandler_BeginInvoke_m9CE67AE281381672495043437ADD2B8DC22DFEB8 (GetHandler_tAE31D3C378B82D9F3EC44C4BD9691E9E1836ED73 * __this, RuntimeObject * ___source0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___source0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Object Prime31.Reflection.GetHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GetHandler_EndInvoke_mE153E42FFC3726D444B858DE8FB7B402E99557D9 (GetHandler_tAE31D3C378B82D9F3EC44C4BD9691E9E1836ED73 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Prime31.Json::decode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Json_decode_mBA1F3C2C0300A3CB0B3AF599FCEFE4B7CFCE711B (String_t* ___json0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Json_tE438EA5A4F39CA21F670B3F0AB55B25568713BF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79931F9913E513F1EBF6133F0FD12878DE7E4C87);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Json_tE438EA5A4F39CA21F670B3F0AB55B25568713BF3_il2cpp_TypeInfo_var);
		bool L_0 = ((Json_tE438EA5A4F39CA21F670B3F0AB55B25568713BF3_StaticFields*)il2cpp_codegen_static_fields_for(Json_tE438EA5A4F39CA21F670B3F0AB55B25568713BF3_il2cpp_TypeInfo_var))->get_useSimpleJson_0();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___json0;
		RuntimeObject * L_2;
		L_2 = SimpleJson_decode_m6309943F6A7579B3456A477370567D17064D19C6(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0011:
	{
		String_t* L_3 = ___json0;
		RuntimeObject * L_4;
		L_4 = Deserializer_deserialize_m936174988598B97A1F321404ECD4268474B7F725(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_6 = ___json0;
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral79931F9913E513F1EBF6133F0FD12878DE7E4C87, L_6, /*hidden argument*/NULL);
		Utils_logObject_m9DE5038BEEEC42EE1DB1D72499FBB5E374C2E8C2(L_7, /*hidden argument*/NULL);
	}

IL_002e:
	{
		RuntimeObject * L_8 = V_0;
		return L_8;
	}
}
// System.String Prime31.Json::encode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Json_encode_m667B2DCA3CD0DCDFDBB1D03C0252FEAF232EDCD5 (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Json_tE438EA5A4F39CA21F670B3F0AB55B25568713BF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1DE0DBD21D32080ED1A1D2401F877FCA4F23B9D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Json_tE438EA5A4F39CA21F670B3F0AB55B25568713BF3_il2cpp_TypeInfo_var);
		bool L_0 = ((Json_tE438EA5A4F39CA21F670B3F0AB55B25568713BF3_StaticFields*)il2cpp_codegen_static_fields_for(Json_tE438EA5A4F39CA21F670B3F0AB55B25568713BF3_il2cpp_TypeInfo_var))->get_useSimpleJson_0();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		String_t* L_2;
		L_2 = SimpleJson_encode_m732D5459CB1F5F4A801393BFB4AAECD245D00611(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001b;
	}

IL_0015:
	{
		RuntimeObject * L_3 = ___obj0;
		String_t* L_4;
		L_4 = Serializer_serialize_mEDC001694EE2C2A808D7092756E0963022BFBE7E(L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_001b:
	{
		V_0 = G_B3_0;
		String_t* L_5 = V_0;
		if (L_5)
		{
			goto IL_0032;
		}
	}
	{
		Utils_logObject_m9DE5038BEEEC42EE1DB1D72499FBB5E374C2E8C2(_stringLiteralA1DE0DBD21D32080ED1A1D2401F877FCA4F23B9D, /*hidden argument*/NULL);
		RuntimeObject * L_6 = ___obj0;
		Utils_logObject_m9DE5038BEEEC42EE1DB1D72499FBB5E374C2E8C2(L_6, /*hidden argument*/NULL);
	}

IL_0032:
	{
		String_t* L_7 = V_0;
		return L_7;
	}
}
// System.Void Prime31.Json::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Json__cctor_m6E5522931B06FC73D8BEEC9333E7BF4A7772E914 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Json_tE438EA5A4F39CA21F670B3F0AB55B25568713BF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Json_tE438EA5A4F39CA21F670B3F0AB55B25568713BF3_StaticFields*)il2cpp_codegen_static_fields_for(Json_tE438EA5A4F39CA21F670B3F0AB55B25568713BF3_il2cpp_TypeInfo_var))->set_useSimpleJson_0((bool)1);
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
// System.Void Prime31.JsonArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonArray__ctor_m39A2948796E8CD06610B118CCBCB929B58BB1ABB (JsonArray_tA3865B4DBA65F47D2EBA6C1A04041AC601AAB754 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B(__this, /*hidden argument*/List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		return;
	}
}
// System.String Prime31.JsonArray::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonArray_ToString_mEA2B5FB6B0E1CFA647BC1D6DB6DBAA8DA9C5CD2B (JsonArray_tA3865B4DBA65F47D2EBA6C1A04041AC601AAB754 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0;
		L_0 = SimpleJson_encode_m732D5459CB1F5F4A801393BFB4AAECD245D00611(__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = JsonFormatter_prettyPrint_m92B2FFFD145D0E6A492F74AC004FB667657A416A(L_0, /*hidden argument*/NULL);
		String_t* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0017;
		}
	}
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B2_0 = L_3;
	}

IL_0017:
	{
		return G_B2_0;
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
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Prime31.JsonExtensions::dictionaryFromJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * JsonExtensions_dictionaryFromJson_mDB6BC2BE112B91D125A9BE1272A0A3D38F346AF0 (String_t* ___json0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Json_tE438EA5A4F39CA21F670B3F0AB55B25568713BF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___json0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_tE438EA5A4F39CA21F670B3F0AB55B25568713BF3_il2cpp_TypeInfo_var);
		RuntimeObject * L_1;
		L_1 = Json_decode_mBA1F3C2C0300A3CB0B3AF599FCEFE4B7CFCE711B(L_0, /*hidden argument*/NULL);
		return ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_1, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
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
// System.Void Prime31.JsonFormatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonFormatter__ctor_mAEABAAA93A825C7D67856D736A62763AC1832B7B (JsonFormatter_t1E6A6A2DEF26F59BF00E56DDC3E07A13B1A4E187 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m9A7652D7CE4CDD707DF2C0DC49C2C076445D48D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_tE925D2926B7991D3747639F04BFD07367E36C4DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_inDoubleString_0((bool)0);
		__this->set_inSingleString_1((bool)0);
		__this->set_inVariableAssignment_2((bool)0);
		__this->set_prevChar_3(0);
		Stack_1_tE925D2926B7991D3747639F04BFD07367E36C4DA * L_0 = (Stack_1_tE925D2926B7991D3747639F04BFD07367E36C4DA *)il2cpp_codegen_object_new(Stack_1_tE925D2926B7991D3747639F04BFD07367E36C4DA_il2cpp_TypeInfo_var);
		Stack_1__ctor_m9A7652D7CE4CDD707DF2C0DC49C2C076445D48D9(L_0, /*hidden argument*/Stack_1__ctor_m9A7652D7CE4CDD707DF2C0DC49C2C076445D48D9_RuntimeMethod_var);
		__this->set_context_4(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Prime31.JsonFormatter::prettyPrint(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonFormatter_prettyPrint_m92B2FFFD145D0E6A492F74AC004FB667657A416A (String_t* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonFormatter_t1E6A6A2DEF26F59BF00E56DDC3E07A13B1A4E187_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		JsonFormatter_t1E6A6A2DEF26F59BF00E56DDC3E07A13B1A4E187 * L_0 = (JsonFormatter_t1E6A6A2DEF26F59BF00E56DDC3E07A13B1A4E187 *)il2cpp_codegen_object_new(JsonFormatter_t1E6A6A2DEF26F59BF00E56DDC3E07A13B1A4E187_il2cpp_TypeInfo_var);
		JsonFormatter__ctor_mAEABAAA93A825C7D67856D736A62763AC1832B7B(L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___input0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = JsonFormatter_print_mA633FCB760DC1C8E1063AC8F836F7667AEAF3424(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0011;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.Exception)
		V_0 = (String_t*)NULL;
		goto IL_0019;
	} // end catch (depth: 1)

IL_0019:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Void Prime31.JsonFormatter::buildIndents(System.Int32,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonFormatter_buildIndents_m2EF4892998568622BFD3C3641ACB3EA47DA79F9E (int32_t ___indents0, StringBuilder_t * ___output1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___indents0;
		___indents0 = L_0;
		goto IL_0019;
	}

IL_0008:
	{
		StringBuilder_t * L_1 = ___output1;
		NullCheck(L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_1, _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3, /*hidden argument*/NULL);
		int32_t L_3 = ___indents0;
		___indents0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1));
	}

IL_0019:
	{
		int32_t L_4 = ___indents0;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}
}
// System.Boolean Prime31.JsonFormatter::inString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonFormatter_inString_m530AF958E9F27296CEBA9B2757A5267D5F65B024 (JsonFormatter_t1E6A6A2DEF26F59BF00E56DDC3E07A13B1A4E187 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		bool L_0 = __this->get_inDoubleString_0();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		bool L_1 = __this->get_inSingleString_1();
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		return (bool)G_B3_0;
	}
}
// System.String Prime31.JsonFormatter::print(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonFormatter_print_mA633FCB760DC1C8E1063AC8F836F7667AEAF3424 (JsonFormatter_t1E6A6A2DEF26F59BF00E56DDC3E07A13B1A4E187 * __this, String_t* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_mC0E009D926287AB9DDF13380EC7D8C81B9BA10E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m8AD8E9B61221B705EBCA3D86C190EEC52865E56D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mDDD25126954FF326E994F9D85FC3DE0D16A88F42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m11A9AE873AC1A4F6BB929E4F953D2FD2B6DA0B7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___input0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_0, /*hidden argument*/NULL);
		StringBuilder_t * L_2 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E(L_2, ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)2)), /*hidden argument*/NULL);
		V_0 = L_2;
		V_2 = 0;
		goto IL_0317;
	}

IL_0015:
	{
		String_t* L_3 = ___input0;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		Il2CppChar L_5;
		L_5 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		Il2CppChar L_6 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)((int32_t)32))))
		{
			case 0:
			{
				goto IL_02e7;
			}
			case 1:
			{
				goto IL_0032;
			}
			case 2:
			{
				goto IL_02b3;
			}
		}
	}

IL_0032:
	{
		Il2CppChar L_7 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)58))))
		{
			case 0:
			{
				goto IL_027b;
			}
			case 1:
			{
				goto IL_004b;
			}
			case 2:
			{
				goto IL_004b;
			}
			case 3:
			{
				goto IL_01c5;
			}
		}
	}

IL_004b:
	{
		Il2CppChar L_8 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)91))))
		{
			case 0:
			{
				goto IL_0170;
			}
			case 1:
			{
				goto IL_0060;
			}
			case 2:
			{
				goto IL_0194;
			}
		}
	}

IL_0060:
	{
		Il2CppChar L_9 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)((int32_t)123))))
		{
			case 0:
			{
				goto IL_008a;
			}
			case 1:
			{
				goto IL_0075;
			}
			case 2:
			{
				goto IL_0122;
			}
		}
	}

IL_0075:
	{
		Il2CppChar L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)39))))
		{
			goto IL_0247;
		}
	}
	{
		Il2CppChar L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)44))))
		{
			goto IL_01d2;
		}
	}
	{
		goto IL_02ff;
	}

IL_008a:
	{
		bool L_12;
		L_12 = JsonFormatter_inString_m530AF958E9F27296CEBA9B2757A5267D5F65B024(__this, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0115;
		}
	}
	{
		bool L_13 = __this->get_inVariableAssignment_2();
		if (L_13)
		{
			goto IL_00c2;
		}
	}
	{
		Stack_1_tE925D2926B7991D3747639F04BFD07367E36C4DA * L_14 = __this->get_context_4();
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Stack_1_get_Count_m11A9AE873AC1A4F6BB929E4F953D2FD2B6DA0B7C_inline(L_14, /*hidden argument*/Stack_1_get_Count_m11A9AE873AC1A4F6BB929E4F953D2FD2B6DA0B7C_RuntimeMethod_var);
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_00df;
		}
	}
	{
		Stack_1_tE925D2926B7991D3747639F04BFD07367E36C4DA * L_16 = __this->get_context_4();
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Stack_1_Peek_mC0E009D926287AB9DDF13380EC7D8C81B9BA10E7(L_16, /*hidden argument*/Stack_1_Peek_mC0E009D926287AB9DDF13380EC7D8C81B9BA10E7_RuntimeMethod_var);
		if ((((int32_t)L_17) == ((int32_t)1)))
		{
			goto IL_00df;
		}
	}

IL_00c2:
	{
		StringBuilder_t * L_18 = V_0;
		String_t* L_19;
		L_19 = Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4(/*hidden argument*/NULL);
		NullCheck(L_18);
		StringBuilder_t * L_20;
		L_20 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_18, L_19, /*hidden argument*/NULL);
		Stack_1_tE925D2926B7991D3747639F04BFD07367E36C4DA * L_21 = __this->get_context_4();
		NullCheck(L_21);
		int32_t L_22;
		L_22 = Stack_1_get_Count_m11A9AE873AC1A4F6BB929E4F953D2FD2B6DA0B7C_inline(L_21, /*hidden argument*/Stack_1_get_Count_m11A9AE873AC1A4F6BB929E4F953D2FD2B6DA0B7C_RuntimeMethod_var);
		StringBuilder_t * L_23 = V_0;
		JsonFormatter_buildIndents_m2EF4892998568622BFD3C3641ACB3EA47DA79F9E(L_22, L_23, /*hidden argument*/NULL);
	}

IL_00df:
	{
		StringBuilder_t * L_24 = V_0;
		Il2CppChar L_25 = V_1;
		NullCheck(L_24);
		StringBuilder_t * L_26;
		L_26 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_24, L_25, /*hidden argument*/NULL);
		Stack_1_tE925D2926B7991D3747639F04BFD07367E36C4DA * L_27 = __this->get_context_4();
		NullCheck(L_27);
		Stack_1_Push_mDDD25126954FF326E994F9D85FC3DE0D16A88F42(L_27, 0, /*hidden argument*/Stack_1_Push_mDDD25126954FF326E994F9D85FC3DE0D16A88F42_RuntimeMethod_var);
		StringBuilder_t * L_28 = V_0;
		String_t* L_29;
		L_29 = Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4(/*hidden argument*/NULL);
		NullCheck(L_28);
		StringBuilder_t * L_30;
		L_30 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_28, L_29, /*hidden argument*/NULL);
		Stack_1_tE925D2926B7991D3747639F04BFD07367E36C4DA * L_31 = __this->get_context_4();
		NullCheck(L_31);
		int32_t L_32;
		L_32 = Stack_1_get_Count_m11A9AE873AC1A4F6BB929E4F953D2FD2B6DA0B7C_inline(L_31, /*hidden argument*/Stack_1_get_Count_m11A9AE873AC1A4F6BB929E4F953D2FD2B6DA0B7C_RuntimeMethod_var);
		StringBuilder_t * L_33 = V_0;
		JsonFormatter_buildIndents_m2EF4892998568622BFD3C3641ACB3EA47DA79F9E(L_32, L_33, /*hidden argument*/NULL);
		goto IL_011d;
	}

IL_0115:
	{
		StringBuilder_t * L_34 = V_0;
		Il2CppChar L_35 = V_1;
		NullCheck(L_34);
		StringBuilder_t * L_36;
		L_36 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_34, L_35, /*hidden argument*/NULL);
	}

IL_011d:
	{
		goto IL_030c;
	}

IL_0122:
	{
		bool L_37;
		L_37 = JsonFormatter_inString_m530AF958E9F27296CEBA9B2757A5267D5F65B024(__this, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_0163;
		}
	}
	{
		StringBuilder_t * L_38 = V_0;
		String_t* L_39;
		L_39 = Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4(/*hidden argument*/NULL);
		NullCheck(L_38);
		StringBuilder_t * L_40;
		L_40 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_38, L_39, /*hidden argument*/NULL);
		Stack_1_tE925D2926B7991D3747639F04BFD07367E36C4DA * L_41 = __this->get_context_4();
		NullCheck(L_41);
		int32_t L_42;
		L_42 = Stack_1_Pop_m8AD8E9B61221B705EBCA3D86C190EEC52865E56D(L_41, /*hidden argument*/Stack_1_Pop_m8AD8E9B61221B705EBCA3D86C190EEC52865E56D_RuntimeMethod_var);
		Stack_1_tE925D2926B7991D3747639F04BFD07367E36C4DA * L_43 = __this->get_context_4();
		NullCheck(L_43);
		int32_t L_44;
		L_44 = Stack_1_get_Count_m11A9AE873AC1A4F6BB929E4F953D2FD2B6DA0B7C_inline(L_43, /*hidden argument*/Stack_1_get_Count_m11A9AE873AC1A4F6BB929E4F953D2FD2B6DA0B7C_RuntimeMethod_var);
		StringBuilder_t * L_45 = V_0;
		JsonFormatter_buildIndents_m2EF4892998568622BFD3C3641ACB3EA47DA79F9E(L_44, L_45, /*hidden argument*/NULL);
		StringBuilder_t * L_46 = V_0;
		Il2CppChar L_47 = V_1;
		NullCheck(L_46);
		StringBuilder_t * L_48;
		L_48 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_46, L_47, /*hidden argument*/NULL);
		goto IL_016b;
	}

IL_0163:
	{
		StringBuilder_t * L_49 = V_0;
		Il2CppChar L_50 = V_1;
		NullCheck(L_49);
		StringBuilder_t * L_51;
		L_51 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_49, L_50, /*hidden argument*/NULL);
	}

IL_016b:
	{
		goto IL_030c;
	}

IL_0170:
	{
		StringBuilder_t * L_52 = V_0;
		Il2CppChar L_53 = V_1;
		NullCheck(L_52);
		StringBuilder_t * L_54;
		L_54 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_52, L_53, /*hidden argument*/NULL);
		bool L_55;
		L_55 = JsonFormatter_inString_m530AF958E9F27296CEBA9B2757A5267D5F65B024(__this, /*hidden argument*/NULL);
		if (L_55)
		{
			goto IL_018f;
		}
	}
	{
		Stack_1_tE925D2926B7991D3747639F04BFD07367E36C4DA * L_56 = __this->get_context_4();
		NullCheck(L_56);
		Stack_1_Push_mDDD25126954FF326E994F9D85FC3DE0D16A88F42(L_56, 1, /*hidden argument*/Stack_1_Push_mDDD25126954FF326E994F9D85FC3DE0D16A88F42_RuntimeMethod_var);
	}

IL_018f:
	{
		goto IL_030c;
	}

IL_0194:
	{
		bool L_57;
		L_57 = JsonFormatter_inString_m530AF958E9F27296CEBA9B2757A5267D5F65B024(__this, /*hidden argument*/NULL);
		if (L_57)
		{
			goto IL_01b8;
		}
	}
	{
		StringBuilder_t * L_58 = V_0;
		Il2CppChar L_59 = V_1;
		NullCheck(L_58);
		StringBuilder_t * L_60;
		L_60 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_58, L_59, /*hidden argument*/NULL);
		Stack_1_tE925D2926B7991D3747639F04BFD07367E36C4DA * L_61 = __this->get_context_4();
		NullCheck(L_61);
		int32_t L_62;
		L_62 = Stack_1_Pop_m8AD8E9B61221B705EBCA3D86C190EEC52865E56D(L_61, /*hidden argument*/Stack_1_Pop_m8AD8E9B61221B705EBCA3D86C190EEC52865E56D_RuntimeMethod_var);
		goto IL_01c0;
	}

IL_01b8:
	{
		StringBuilder_t * L_63 = V_0;
		Il2CppChar L_64 = V_1;
		NullCheck(L_63);
		StringBuilder_t * L_65;
		L_65 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_63, L_64, /*hidden argument*/NULL);
	}

IL_01c0:
	{
		goto IL_030c;
	}

IL_01c5:
	{
		StringBuilder_t * L_66 = V_0;
		Il2CppChar L_67 = V_1;
		NullCheck(L_66);
		StringBuilder_t * L_68;
		L_68 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_66, L_67, /*hidden argument*/NULL);
		goto IL_030c;
	}

IL_01d2:
	{
		StringBuilder_t * L_69 = V_0;
		Il2CppChar L_70 = V_1;
		NullCheck(L_69);
		StringBuilder_t * L_71;
		L_71 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_69, L_70, /*hidden argument*/NULL);
		bool L_72;
		L_72 = JsonFormatter_inString_m530AF958E9F27296CEBA9B2757A5267D5F65B024(__this, /*hidden argument*/NULL);
		if (L_72)
		{
			goto IL_01f1;
		}
	}
	{
		StringBuilder_t * L_73 = V_0;
		NullCheck(L_73);
		StringBuilder_t * L_74;
		L_74 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_73, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
	}

IL_01f1:
	{
		bool L_75;
		L_75 = JsonFormatter_inString_m530AF958E9F27296CEBA9B2757A5267D5F65B024(__this, /*hidden argument*/NULL);
		if (L_75)
		{
			goto IL_0242;
		}
	}
	{
		Stack_1_tE925D2926B7991D3747639F04BFD07367E36C4DA * L_76 = __this->get_context_4();
		NullCheck(L_76);
		int32_t L_77;
		L_77 = Stack_1_Peek_mC0E009D926287AB9DDF13380EC7D8C81B9BA10E7(L_76, /*hidden argument*/Stack_1_Peek_mC0E009D926287AB9DDF13380EC7D8C81B9BA10E7_RuntimeMethod_var);
		if ((((int32_t)L_77) == ((int32_t)1)))
		{
			goto IL_0242;
		}
	}
	{
		Stack_1_tE925D2926B7991D3747639F04BFD07367E36C4DA * L_78 = __this->get_context_4();
		NullCheck(L_78);
		int32_t L_79;
		L_79 = Stack_1_get_Count_m11A9AE873AC1A4F6BB929E4F953D2FD2B6DA0B7C_inline(L_78, /*hidden argument*/Stack_1_get_Count_m11A9AE873AC1A4F6BB929E4F953D2FD2B6DA0B7C_RuntimeMethod_var);
		StringBuilder_t * L_80 = V_0;
		JsonFormatter_buildIndents_m2EF4892998568622BFD3C3641ACB3EA47DA79F9E(L_79, L_80, /*hidden argument*/NULL);
		StringBuilder_t * L_81 = V_0;
		String_t* L_82;
		L_82 = Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4(/*hidden argument*/NULL);
		NullCheck(L_81);
		StringBuilder_t * L_83;
		L_83 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_81, L_82, /*hidden argument*/NULL);
		Stack_1_tE925D2926B7991D3747639F04BFD07367E36C4DA * L_84 = __this->get_context_4();
		NullCheck(L_84);
		int32_t L_85;
		L_85 = Stack_1_get_Count_m11A9AE873AC1A4F6BB929E4F953D2FD2B6DA0B7C_inline(L_84, /*hidden argument*/Stack_1_get_Count_m11A9AE873AC1A4F6BB929E4F953D2FD2B6DA0B7C_RuntimeMethod_var);
		StringBuilder_t * L_86 = V_0;
		JsonFormatter_buildIndents_m2EF4892998568622BFD3C3641ACB3EA47DA79F9E(L_85, L_86, /*hidden argument*/NULL);
		__this->set_inVariableAssignment_2((bool)0);
	}

IL_0242:
	{
		goto IL_030c;
	}

IL_0247:
	{
		bool L_87 = __this->get_inDoubleString_0();
		if (L_87)
		{
			goto IL_026e;
		}
	}
	{
		Il2CppChar L_88 = __this->get_prevChar_3();
		if ((((int32_t)L_88) == ((int32_t)((int32_t)92))))
		{
			goto IL_026e;
		}
	}
	{
		bool L_89 = __this->get_inSingleString_1();
		__this->set_inSingleString_1((bool)((((int32_t)L_89) == ((int32_t)0))? 1 : 0));
	}

IL_026e:
	{
		StringBuilder_t * L_90 = V_0;
		Il2CppChar L_91 = V_1;
		NullCheck(L_90);
		StringBuilder_t * L_92;
		L_92 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_90, L_91, /*hidden argument*/NULL);
		goto IL_030c;
	}

IL_027b:
	{
		bool L_93;
		L_93 = JsonFormatter_inString_m530AF958E9F27296CEBA9B2757A5267D5F65B024(__this, /*hidden argument*/NULL);
		if (L_93)
		{
			goto IL_02a6;
		}
	}
	{
		__this->set_inVariableAssignment_2((bool)1);
		StringBuilder_t * L_94 = V_0;
		Il2CppChar L_95 = V_1;
		NullCheck(L_94);
		StringBuilder_t * L_96;
		L_96 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_94, L_95, /*hidden argument*/NULL);
		StringBuilder_t * L_97 = V_0;
		NullCheck(L_97);
		StringBuilder_t * L_98;
		L_98 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_97, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		goto IL_02ae;
	}

IL_02a6:
	{
		StringBuilder_t * L_99 = V_0;
		Il2CppChar L_100 = V_1;
		NullCheck(L_99);
		StringBuilder_t * L_101;
		L_101 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_99, L_100, /*hidden argument*/NULL);
	}

IL_02ae:
	{
		goto IL_030c;
	}

IL_02b3:
	{
		bool L_102 = __this->get_inSingleString_1();
		if (L_102)
		{
			goto IL_02da;
		}
	}
	{
		Il2CppChar L_103 = __this->get_prevChar_3();
		if ((((int32_t)L_103) == ((int32_t)((int32_t)92))))
		{
			goto IL_02da;
		}
	}
	{
		bool L_104 = __this->get_inDoubleString_0();
		__this->set_inDoubleString_0((bool)((((int32_t)L_104) == ((int32_t)0))? 1 : 0));
	}

IL_02da:
	{
		StringBuilder_t * L_105 = V_0;
		Il2CppChar L_106 = V_1;
		NullCheck(L_105);
		StringBuilder_t * L_107;
		L_107 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_105, L_106, /*hidden argument*/NULL);
		goto IL_030c;
	}

IL_02e7:
	{
		bool L_108;
		L_108 = JsonFormatter_inString_m530AF958E9F27296CEBA9B2757A5267D5F65B024(__this, /*hidden argument*/NULL);
		if (!L_108)
		{
			goto IL_02fa;
		}
	}
	{
		StringBuilder_t * L_109 = V_0;
		Il2CppChar L_110 = V_1;
		NullCheck(L_109);
		StringBuilder_t * L_111;
		L_111 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_109, L_110, /*hidden argument*/NULL);
	}

IL_02fa:
	{
		goto IL_030c;
	}

IL_02ff:
	{
		StringBuilder_t * L_112 = V_0;
		Il2CppChar L_113 = V_1;
		NullCheck(L_112);
		StringBuilder_t * L_114;
		L_114 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_112, L_113, /*hidden argument*/NULL);
		goto IL_030c;
	}

IL_030c:
	{
		Il2CppChar L_115 = V_1;
		__this->set_prevChar_3(L_115);
		int32_t L_116 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_116, (int32_t)1));
	}

IL_0317:
	{
		int32_t L_117 = V_2;
		String_t* L_118 = ___input0;
		NullCheck(L_118);
		int32_t L_119;
		L_119 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_118, /*hidden argument*/NULL);
		if ((((int32_t)L_117) < ((int32_t)L_119)))
		{
			goto IL_0015;
		}
	}
	{
		StringBuilder_t * L_120 = V_0;
		NullCheck(L_120);
		String_t* L_121;
		L_121 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_120);
		return L_121;
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
// System.Void Prime31.JsonObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonObject__ctor_mB832EDD98B003BF10120534B0393596B82C75823 (JsonObject_t3BFE094F9029834331827285E25845AAB69816A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(__this, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		return;
	}
}
// System.String Prime31.JsonObject::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonObject_ToString_mD65D0DC8E8D3AE33BDAA89E617DE75522B295CEC (JsonObject_t3BFE094F9029834331827285E25845AAB69816A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0;
		L_0 = SimpleJson_encode_m732D5459CB1F5F4A801393BFB4AAECD245D00611(__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = JsonFormatter_prettyPrint_m92B2FFFD145D0E6A492F74AC004FB667657A416A(L_0, /*hidden argument*/NULL);
		String_t* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0017;
		}
	}
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B2_0 = L_3;
	}

IL_0017:
	{
		return G_B2_0;
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
// System.Void Prime31.LifecycleHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LifecycleHelper__ctor_mC148A8383783ECC533976019C106CA38E9A56F11 (LifecycleHelper_t2C8530CA0073EF4CA43BCC651EB399608723D373 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Prime31.LifecycleHelper::add_onApplicationPausedEvent(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LifecycleHelper_add_onApplicationPausedEvent_m7D37BD4DB1032A865331E60EE6AEBBBC2BF1A3F0 (LifecycleHelper_t2C8530CA0073EF4CA43BCC651EB399608723D373 * __this, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_0 = NULL;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_1 = NULL;
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_0 = __this->get_onApplicationPausedEvent_4();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_1 = V_0;
		V_1 = L_1;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** L_2 = __this->get_address_of_onApplicationPausedEvent_4();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_3 = V_1;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_6 = V_0;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *>((Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 **)L_2, ((Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)CastclassSealed((RuntimeObject*)L_5, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_8 = V_0;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)L_8) == ((RuntimeObject*)(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Prime31.LifecycleHelper::remove_onApplicationPausedEvent(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LifecycleHelper_remove_onApplicationPausedEvent_mE42DC758D47B24DD2DF871115298360DBFE50DF4 (LifecycleHelper_t2C8530CA0073EF4CA43BCC651EB399608723D373 * __this, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_0 = NULL;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_1 = NULL;
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_0 = __this->get_onApplicationPausedEvent_4();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_1 = V_0;
		V_1 = L_1;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** L_2 = __this->get_address_of_onApplicationPausedEvent_4();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_3 = V_1;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_3, L_4, /*hidden argument*/NULL);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_6 = V_0;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *>((Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 **)L_2, ((Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)CastclassSealed((RuntimeObject*)L_5, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_8 = V_0;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)L_8) == ((RuntimeObject*)(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Prime31.LifecycleHelper::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LifecycleHelper_OnApplicationPause_mE7E5859D0E6D167EDE1FF99A7843F8002FF2AC7E (LifecycleHelper_t2C8530CA0073EF4CA43BCC651EB399608723D373 * __this, bool ___paused0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_0 = __this->get_onApplicationPausedEvent_4();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_1 = __this->get_onApplicationPausedEvent_4();
		bool L_2 = ___paused0;
		NullCheck(L_1);
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(L_1, L_2, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
	}

IL_0017:
	{
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
// System.Void Prime31.Reflection.MemberMapLoader::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberMapLoader__ctor_mEF5396F2EA8A2A0F3A56801B5B6BD7DE82B20C4A (MemberMapLoader_t56FA45FA01C1729FCF47BAE05C4F8406A5B3E137 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Prime31.Reflection.MemberMapLoader::Invoke(System.Type,Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberMapLoader_Invoke_mF4F7BF0418E94800E6F605F41D85E5B3320F3EF5 (MemberMapLoader_t56FA45FA01C1729FCF47BAE05C4F8406A5B3E137 * __this, Type_t * ___type0, SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 * ___memberMaps1, const RuntimeMethod* method)
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (Type_t *, SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___type0, ___memberMaps1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Type_t *, SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___type0, ___memberMaps1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 * >::Invoke(targetMethod, ___type0, ___memberMaps1);
					else
						GenericVirtActionInvoker1< SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 * >::Invoke(targetMethod, ___type0, ___memberMaps1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___type0, ___memberMaps1);
					else
						VirtActionInvoker1< SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___type0, ___memberMaps1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Type_t *, SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___type0, ___memberMaps1, targetMethod);
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
						GenericInterfaceActionInvoker2< Type_t *, SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 * >::Invoke(targetMethod, targetThis, ___type0, ___memberMaps1);
					else
						GenericVirtActionInvoker2< Type_t *, SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 * >::Invoke(targetMethod, targetThis, ___type0, ___memberMaps1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< Type_t *, SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___type0, ___memberMaps1);
					else
						VirtActionInvoker2< Type_t *, SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___type0, ___memberMaps1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Type_t *, SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___type0, ___memberMaps1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Type_t *, SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___type0, ___memberMaps1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Prime31.Reflection.MemberMapLoader::BeginInvoke(System.Type,Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MemberMapLoader_BeginInvoke_m597FD165D281307470E60A79165DC1E8D4EB4573 (MemberMapLoader_t56FA45FA01C1729FCF47BAE05C4F8406A5B3E137 * __this, Type_t * ___type0, SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 * ___memberMaps1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___type0;
	__d_args[1] = ___memberMaps1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Prime31.Reflection.MemberMapLoader::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberMapLoader_EndInvoke_m8DF9A758419A2FD35BE95F5160E90BD7FA14C336 (MemberMapLoader_t56FA45FA01C1729FCF47BAE05C4F8406A5B3E137 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Prime31.MonoBehaviourGUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourGUI__ctor_m4858390515AA2D65B06B5AB4D4BB7489AED1F990 (MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m7B1612DAAC58ADB707313836D78A8FB4556FEBC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C * L_0 = (Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C *)il2cpp_codegen_object_new(Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m7B1612DAAC58ADB707313836D78A8FB4556FEBC0(L_0, /*hidden argument*/Dictionary_2__ctor_m7B1612DAAC58ADB707313836D78A8FB4556FEBC0_RuntimeMethod_var);
		__this->set__toggleButtons_6(L_0);
		StringBuilder_t * L_1 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_1, /*hidden argument*/NULL);
		__this->set__logBuilder_7(L_1);
		__this->set__doubleClickDelay_11((0.150000006f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Texture2D Prime31.MonoBehaviourGUI::get_normalBackground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * MonoBehaviourGUI_get_normalBackground_m951508080963D8B59D557FA05781539D580868ED (MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = __this->get__normalBackground_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_003a;
		}
	}
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_2, 1, 1, /*hidden argument*/NULL);
		__this->set__normalBackground_14(L_2);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_3 = __this->get__normalBackground_14();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		L_4 = Color_get_gray_m34BEEC2EEF30819B433125EF748CE22BE17C9B6E(/*hidden argument*/NULL);
		NullCheck(L_3);
		Texture2D_SetPixel_m78878905E58C5DE9BCFED8D9262D025789E22F92(L_3, 0, 0, L_4, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_5 = __this->get__normalBackground_14();
		NullCheck(L_5);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_5, /*hidden argument*/NULL);
	}

IL_003a:
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6 = __this->get__normalBackground_14();
		return L_6;
	}
}
// UnityEngine.Texture2D Prime31.MonoBehaviourGUI::get_bottomButtonBackground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * MonoBehaviourGUI_get_bottomButtonBackground_m4832748F5B6F2175B88CBBE4537A7EA58EDB379E (MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = __this->get__bottomButtonBackground_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_2, 1, 1, /*hidden argument*/NULL);
		__this->set__bottomButtonBackground_15(L_2);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_3 = __this->get__bottomButtonBackground_15();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		L_4 = Color_get_gray_m34BEEC2EEF30819B433125EF748CE22BE17C9B6E(/*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		L_5 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		L_6 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_4, L_5, (0.5f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Texture2D_SetPixel_m78878905E58C5DE9BCFED8D9262D025789E22F92(L_3, 0, 0, L_6, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7 = __this->get__bottomButtonBackground_15();
		NullCheck(L_7);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_7, /*hidden argument*/NULL);
	}

IL_0049:
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_8 = __this->get__bottomButtonBackground_15();
		return L_8;
	}
}
// UnityEngine.Texture2D Prime31.MonoBehaviourGUI::get_activeBackground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * MonoBehaviourGUI_get_activeBackground_m9DD46D6C79648632C4F9D1921BEF13B314079003 (MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = __this->get__activeBackground_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_003a;
		}
	}
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_2, 1, 1, /*hidden argument*/NULL);
		__this->set__activeBackground_16(L_2);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_3 = __this->get__activeBackground_16();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		L_4 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(/*hidden argument*/NULL);
		NullCheck(L_3);
		Texture2D_SetPixel_m78878905E58C5DE9BCFED8D9262D025789E22F92(L_3, 0, 0, L_4, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_5 = __this->get__activeBackground_16();
		NullCheck(L_5);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_5, /*hidden argument*/NULL);
	}

IL_003a:
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6 = __this->get__activeBackground_16();
		return L_6;
	}
}
// UnityEngine.Texture2D Prime31.MonoBehaviourGUI::get_toggleButtonBackground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * MonoBehaviourGUI_get_toggleButtonBackground_m483F61386DED6CD0965C46322B86208475ABBC2C (MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = __this->get__toggleButtonBackground_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_003a;
		}
	}
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_2, 1, 1, /*hidden argument*/NULL);
		__this->set__toggleButtonBackground_17(L_2);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_3 = __this->get__toggleButtonBackground_17();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		L_4 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		NullCheck(L_3);
		Texture2D_SetPixel_m78878905E58C5DE9BCFED8D9262D025789E22F92(L_3, 0, 0, L_4, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_5 = __this->get__toggleButtonBackground_17();
		NullCheck(L_5);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_5, /*hidden argument*/NULL);
	}

IL_003a:
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6 = __this->get__toggleButtonBackground_17();
		return L_6;
	}
}
// System.Boolean Prime31.MonoBehaviourGUI::isRetinaOrLargeScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonoBehaviourGUI_isRetinaOrLargeScreen_mF41759674AE67861FDC7336EECC1A777A1E60E95 (MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2 * __this, const RuntimeMethod* method)
{
	int32_t G_B4_0 = 0;
	{
		bool L_0 = __this->get__isWindowsPhone_13();
		if (L_0)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_1;
		L_1 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)960))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2;
		L_2 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)((((int32_t)L_2) < ((int32_t)((int32_t)960)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_002c;
	}

IL_002b:
	{
		G_B4_0 = 1;
	}

IL_002c:
	{
		return (bool)G_B4_0;
	}
}
// System.Boolean Prime31.MonoBehaviourGUI::isRetinaIpad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonoBehaviourGUI_isRetinaIpad_m9A3A3F9D11F3C69BA146B66A0D4A6FCDA0D253F1 (MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__didRetinaIpadCheck_18();
		if (L_0)
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1;
		L_1 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)2048))))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_2;
		L_2 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		if ((((int32_t)L_2) < ((int32_t)((int32_t)2048))))
		{
			goto IL_0030;
		}
	}

IL_0029:
	{
		__this->set__isRetinaIpad_19((bool)1);
	}

IL_0030:
	{
		__this->set__didRetinaIpadCheck_18((bool)1);
	}

IL_0037:
	{
		bool L_3 = __this->get__isRetinaIpad_19();
		return L_3;
	}
}
// System.Int32 Prime31.MonoBehaviourGUI::buttonHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MonoBehaviourGUI_buttonHeight_m48EAB95892962482AD0D7B25A155990D843D4E5B (MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2 * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = MonoBehaviourGUI_isRetinaOrLargeScreen_mF41759674AE67861FDC7336EECC1A777A1E60E95(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		bool L_1;
		L_1 = MonoBehaviourGUI_isRetinaIpad_m9A3A3F9D11F3C69BA146B66A0D4A6FCDA0D253F1(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		return ((int32_t)140);
	}

IL_001c:
	{
		return ((int32_t)70);
	}

IL_001f:
	{
		return ((int32_t)30);
	}
}
// System.Int32 Prime31.MonoBehaviourGUI::buttonFontSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MonoBehaviourGUI_buttonFontSize_m3221FB3452106A8705B1C101C452456566262CCA (MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2 * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = MonoBehaviourGUI_isRetinaOrLargeScreen_mF41759674AE67861FDC7336EECC1A777A1E60E95(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		bool L_1;
		L_1 = MonoBehaviourGUI_isRetinaIpad_m9A3A3F9D11F3C69BA146B66A0D4A6FCDA0D253F1(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		return ((int32_t)40);
	}

IL_0019:
	{
		return ((int32_t)25);
	}

IL_001c:
	{
		return ((int32_t)15);
	}
}
// System.Void Prime31.MonoBehaviourGUI::paintWindow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourGUI_paintWindow_m2EF9336A08149F34360577A922745D34A0D48B4B (MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02B04C5157F5B1C2D5375B84FA2F4D0E49E7F5D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_0;
		L_0 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		NullCheck(L_0);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1;
		L_1 = GUISkin_get_label_m6F41B6A214AE6407DE5C567225828A8627A3AD83(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GUIStyle_set_alignment_mCF8FDA9DA149F528DCDC19680AEED46F25161D89(L_1, 0, /*hidden argument*/NULL);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_2;
		L_2 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		NullCheck(L_2);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_3;
		L_3 = GUISkin_get_label_m6F41B6A214AE6407DE5C567225828A8627A3AD83(L_2, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = MonoBehaviourGUI_buttonFontSize_m3221FB3452106A8705B1C101C452456566262CCA(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		GUIStyle_set_fontSize_mFA02B9950E09F880976FD2FF646FB8AAEED1C5C6(L_3, L_4, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = __this->get__logScrollPosition_9();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_6 = (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)SZArrayNew(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var, (uint32_t)0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = GUILayout_BeginScrollView_m6C15A5A84E90A20AF0BE9433B8BFF573619C925A(L_5, L_6, /*hidden argument*/NULL);
		__this->set__logScrollPosition_9(L_7);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_8 = (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)SZArrayNew(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var, (uint32_t)0);
		bool L_9;
		L_9 = GUILayout_Button_m749F2887D57BDC9B6901F2C35F5C6A7E22154162(_stringLiteral02B04C5157F5B1C2D5375B84FA2F4D0E49E7F5D6, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0069;
		}
	}
	{
		StringBuilder_t * L_10 = __this->get__logBuilder_7();
		StringBuilder_t * L_11 = __this->get__logBuilder_7();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		StringBuilder_t * L_13;
		L_13 = StringBuilder_Remove_m6ABF9CF3D10160EB52E0768262A9B179F987571E(L_10, 0, L_12, /*hidden argument*/NULL);
	}

IL_0069:
	{
		StringBuilder_t * L_14 = __this->get__logBuilder_7();
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_16 = (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)SZArrayNew(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var, (uint32_t)0);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(L_15, L_16, /*hidden argument*/NULL);
		GUILayout_EndScrollView_m7A2EFB6B6DFC43302979FD6E2AF032C0D21BA163(/*hidden argument*/NULL);
		return;
	}
}
// System.Void Prime31.MonoBehaviourGUI::handleLog(System.String,System.String,UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourGUI_handleLog_mDF658CD88FCBE3E7BE4209211B40F2B99B2B141F (MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2 * __this, String_t* ___logString0, String_t* ___stackTrace1, int32_t ___type2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58D5B924304A0C60C698FE13AFF2ABF25760EF02);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0 = __this->get__logBuilder_7();
		String_t* L_1 = ___logString0;
		NullCheck(L_0);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E(L_0, _stringLiteral58D5B924304A0C60C698FE13AFF2ABF25760EF02, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Prime31.MonoBehaviourGUI::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourGUI_OnDestroy_m568C0A74002869EC5470C011CF761124FACE4071 (MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2 * __this, const RuntimeMethod* method)
{
	{
		Application_RegisterLogCallback_mC167FD4C7AEADB4E719BEEE2F286FD9CA15C9F01((LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Prime31.MonoBehaviourGUI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourGUI_Update_m367A3AAB6C32E2D8B5D89FB0758CBA10283B5B03 (MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviourGUI_handleLog_mDF658CD88FCBE3E7BE4209211B40F2B99B2B141F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC05057013AC09244383082846D30263A31E33CC7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		bool L_0 = __this->get__logRegistered_8();
		if (L_0)
		{
			goto IL_004b;
		}
	}
	{
		LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD * L_1 = (LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD *)il2cpp_codegen_object_new(LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD_il2cpp_TypeInfo_var);
		LogCallback__ctor_mB5F165ECC180A20258EF4EFF589D88FB9F9E9C57(L_1, __this, (intptr_t)((intptr_t)MonoBehaviourGUI_handleLog_mDF658CD88FCBE3E7BE4209211B40F2B99B2B141F_RuntimeMethod_var), /*hidden argument*/NULL);
		Application_RegisterLogCallback_mC167FD4C7AEADB4E719BEEE2F286FD9CA15C9F01(L_1, /*hidden argument*/NULL);
		__this->set__logRegistered_8((bool)1);
		int32_t L_2;
		L_2 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		V_0 = L_2;
		RuntimeObject * L_3 = Box(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065_il2cpp_TypeInfo_var, (&V_0));
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		V_0 = *(int32_t*)UnBox(L_3);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_5, _stringLiteralC05057013AC09244383082846D30263A31E33CC7, /*hidden argument*/NULL);
		__this->set__isWindowsPhone_13(L_6);
	}

IL_004b:
	{
		V_1 = (bool)0;
		bool L_7;
		L_7 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0083;
		}
	}
	{
		float L_8;
		L_8 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_9 = __this->get__previousClickTime_12();
		V_2 = ((float)il2cpp_codegen_subtract((float)L_8, (float)L_9));
		float L_10 = V_2;
		float L_11 = __this->get__doubleClickDelay_11();
		if ((!(((float)L_10) < ((float)L_11))))
		{
			goto IL_0078;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0083;
	}

IL_0078:
	{
		float L_12;
		L_12 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set__previousClickTime_12(L_12);
	}

IL_0083:
	{
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_0098;
		}
	}
	{
		bool L_14 = __this->get__isShowingLogConsole_10();
		__this->set__isShowingLogConsole_10((bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0));
	}

IL_0098:
	{
		return;
	}
}
// System.Void Prime31.MonoBehaviourGUI::beginColumn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourGUI_beginColumn_m1A7046A21276000DF6FED81FE52DB2EC3253AB70 (MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		__this->set__width_4(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_0/(int32_t)2)), (int32_t)((int32_t)15))))));
		int32_t L_1;
		L_1 = MonoBehaviourGUI_buttonHeight_m48EAB95892962482AD0D7B25A155990D843D4E5B(__this, /*hidden argument*/NULL);
		__this->set__buttonHeight_5(((float)((float)L_1)));
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_2;
		L_2 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		NullCheck(L_2);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_3;
		L_3 = GUISkin_get_button_m03559A64FAC2479F2D3753DD559FF22273602835(L_2, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = MonoBehaviourGUI_buttonFontSize_m3221FB3452106A8705B1C101C452456566262CCA(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		GUIStyle_set_fontSize_mFA02B9950E09F880976FD2FF646FB8AAEED1C5C6(L_3, L_4, /*hidden argument*/NULL);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_5;
		L_5 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		NullCheck(L_5);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_6;
		L_6 = GUISkin_get_button_m03559A64FAC2479F2D3753DD559FF22273602835(L_5, /*hidden argument*/NULL);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_7 = (RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 *)il2cpp_codegen_object_new(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_il2cpp_TypeInfo_var);
		RectOffset__ctor_m428BA3F4AE287FA7D5F4CED6394225951E5E507B(L_7, 0, 0, ((int32_t)10), 0, /*hidden argument*/NULL);
		NullCheck(L_6);
		GUIStyle_set_margin_mDD7162FFE655D812CCB6055E58445D5C634119D2(L_6, L_7, /*hidden argument*/NULL);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_8;
		L_8 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		NullCheck(L_8);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_9;
		L_9 = GUISkin_get_button_m03559A64FAC2479F2D3753DD559FF22273602835(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		GUIStyle_set_stretchWidth_m8577DEE07D479A39B811CCCD6AC30094AD2BE833(L_9, (bool)1, /*hidden argument*/NULL);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_10;
		L_10 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		NullCheck(L_10);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_11;
		L_11 = GUISkin_get_button_m03559A64FAC2479F2D3753DD559FF22273602835(L_10, /*hidden argument*/NULL);
		float L_12 = __this->get__buttonHeight_5();
		NullCheck(L_11);
		GUIStyle_set_fixedHeight_mE77FA3DD0DBBD2FDE24484A9E240D55708938B6B(L_11, L_12, /*hidden argument*/NULL);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_13;
		L_13 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		NullCheck(L_13);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_14;
		L_14 = GUISkin_get_button_m03559A64FAC2479F2D3753DD559FF22273602835(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		GUIStyle_set_wordWrap_mB6D788509ADD7BBDEFFB4409E5719FF14DC9A684(L_14, (bool)0, /*hidden argument*/NULL);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_15;
		L_15 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		NullCheck(L_15);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_16;
		L_16 = GUISkin_get_button_m03559A64FAC2479F2D3753DD559FF22273602835(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_17;
		L_17 = GUIStyle_get_hover_mB186BDBADD84DA7394576DBEAF29F3B54BD41E46(L_16, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_18;
		L_18 = MonoBehaviourGUI_get_normalBackground_m951508080963D8B59D557FA05781539D580868ED(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		GUIStyleState_set_background_mA80B6ED2555C6551933E2D0ECA5081FC254B6A21(L_17, L_18, /*hidden argument*/NULL);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_19;
		L_19 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		NullCheck(L_19);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_20;
		L_20 = GUISkin_get_button_m03559A64FAC2479F2D3753DD559FF22273602835(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_21;
		L_21 = GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE(L_20, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_22;
		L_22 = MonoBehaviourGUI_get_normalBackground_m951508080963D8B59D557FA05781539D580868ED(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		GUIStyleState_set_background_mA80B6ED2555C6551933E2D0ECA5081FC254B6A21(L_21, L_22, /*hidden argument*/NULL);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_23;
		L_23 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		NullCheck(L_23);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_24;
		L_24 = GUISkin_get_button_m03559A64FAC2479F2D3753DD559FF22273602835(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_25;
		L_25 = GUIStyle_get_active_m2398E8F2A62E3A23519D8362D9BA0EC1FB6710F4(L_24, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_26;
		L_26 = MonoBehaviourGUI_get_activeBackground_m9DD46D6C79648632C4F9D1921BEF13B314079003(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		GUIStyleState_set_background_mA80B6ED2555C6551933E2D0ECA5081FC254B6A21(L_25, L_26, /*hidden argument*/NULL);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_27;
		L_27 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		NullCheck(L_27);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_28;
		L_28 = GUISkin_get_button_m03559A64FAC2479F2D3753DD559FF22273602835(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_29;
		L_29 = GUIStyle_get_active_m2398E8F2A62E3A23519D8362D9BA0EC1FB6710F4(L_28, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_30;
		L_30 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		NullCheck(L_29);
		GUIStyleState_set_textColor_mB4B61B9CAC1D6B4694471A2BB1191B5F0D5D764A(L_29, L_30, /*hidden argument*/NULL);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_31;
		L_31 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		NullCheck(L_31);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_32;
		L_32 = GUISkin_get_label_m6F41B6A214AE6407DE5C567225828A8627A3AD83(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_33;
		L_33 = GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE(L_32, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_34;
		L_34 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		NullCheck(L_33);
		GUIStyleState_set_textColor_mB4B61B9CAC1D6B4694471A2BB1191B5F0D5D764A(L_33, L_34, /*hidden argument*/NULL);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_35;
		L_35 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		NullCheck(L_35);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_36;
		L_36 = GUISkin_get_label_m6F41B6A214AE6407DE5C567225828A8627A3AD83(L_35, /*hidden argument*/NULL);
		int32_t L_37;
		L_37 = MonoBehaviourGUI_buttonFontSize_m3221FB3452106A8705B1C101C452456566262CCA(__this, /*hidden argument*/NULL);
		NullCheck(L_36);
		GUIStyle_set_fontSize_mFA02B9950E09F880976FD2FF646FB8AAEED1C5C6(L_36, L_37, /*hidden argument*/NULL);
		bool L_38 = __this->get__isShowingLogConsole_10();
		if (!L_38)
		{
			goto IL_0144;
		}
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_39;
		memset((&L_39), 0, sizeof(L_39));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_39), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		GUILayout_BeginArea_m95BE97450201032DF5B0C18A422C25CD86FD46A0(L_39, /*hidden argument*/NULL);
		goto IL_0164;
	}

IL_0144:
	{
		float L_40 = __this->get__width_4();
		int32_t L_41;
		L_41 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_42;
		memset((&L_42), 0, sizeof(L_42));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_42), (10.0f), (10.0f), L_40, ((float)((float)L_41)), /*hidden argument*/NULL);
		GUILayout_BeginArea_m95BE97450201032DF5B0C18A422C25CD86FD46A0(L_42, /*hidden argument*/NULL);
	}

IL_0164:
	{
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_43 = (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)SZArrayNew(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var, (uint32_t)0);
		GUILayout_BeginVertical_mE0941591491BBDAA25FF7CD48415750FD08D10ED(L_43, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Prime31.MonoBehaviourGUI::endColumn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourGUI_endColumn_m738AFE49A512DF339B4720B9D31248D49F9DDAA0 (MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviourGUI_endColumn_m5B28DB1CF38E1D843F823E72B75970836DF37866(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Prime31.MonoBehaviourGUI::endColumn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourGUI_endColumn_m5B28DB1CF38E1D843F823E72B75970836DF37866 (MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2 * __this, bool ___hasSecondColumn0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviourGUI_paintWindow_m2EF9336A08149F34360577A922745D34A0D48B4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EBF9F98D97A1A1F915B2DD21D549CDCFB95E8E1);
		s_Il2CppMethodInitialized = true;
	}
	{
		GUILayout_EndVertical_mBCF5058C9591A4064722C2B763EF98D066BFDCAD(/*hidden argument*/NULL);
		GUILayout_EndArea_mFC73B49A3F2C5319D280E2C1B09E78CA23D0B151(/*hidden argument*/NULL);
		bool L_0 = __this->get__isShowingLogConsole_10();
		if (!L_0)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_1;
		L_1 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_3), (0.0f), (0.0f), ((float)((float)L_1)), ((float)((float)L_2)), /*hidden argument*/NULL);
		WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * L_4 = (WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D *)il2cpp_codegen_object_new(WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D_il2cpp_TypeInfo_var);
		WindowFunction__ctor_mCC6005520B912B8BFFAECE3612EB3334FF681238(L_4, __this, (intptr_t)((intptr_t)MonoBehaviourGUI_paintWindow_m2EF9336A08149F34360577A922745D34A0D48B4B_RuntimeMethod_var), /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_5 = (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)SZArrayNew(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var, (uint32_t)0);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_6;
		L_6 = GUILayout_Window_mA9CA9D4DA573FF26AE63AEE958F2C2127D713840(1, L_3, L_4, _stringLiteral4EBF9F98D97A1A1F915B2DD21D549CDCFB95E8E1, L_5, /*hidden argument*/NULL);
	}

IL_004e:
	{
		bool L_7 = ___hasSecondColumn0;
		if (!L_7)
		{
			goto IL_005a;
		}
	}
	{
		MonoBehaviourGUI_beginRightColumn_m442A038AD6959846B04081E77354FC52BF5F0E32(__this, /*hidden argument*/NULL);
	}

IL_005a:
	{
		return;
	}
}
// System.Void Prime31.MonoBehaviourGUI::beginRightColumn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourGUI_beginRightColumn_m442A038AD6959846B04081E77354FC52BF5F0E32 (MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__isShowingLogConsole_10();
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_1), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		GUILayout_BeginArea_m95BE97450201032DF5B0C18A422C25CD86FD46A0(L_1, /*hidden argument*/NULL);
		goto IL_005c;
	}

IL_002e:
	{
		int32_t L_2;
		L_2 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		float L_3 = __this->get__width_4();
		float L_4 = __this->get__width_4();
		int32_t L_5;
		L_5 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_6), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)((float)((float)L_2)), (float)L_3)), (float)(10.0f))), (10.0f), L_4, ((float)((float)L_5)), /*hidden argument*/NULL);
		GUILayout_BeginArea_m95BE97450201032DF5B0C18A422C25CD86FD46A0(L_6, /*hidden argument*/NULL);
	}

IL_005c:
	{
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_7 = (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)SZArrayNew(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var, (uint32_t)0);
		GUILayout_BeginVertical_mE0941591491BBDAA25FF7CD48415750FD08D10ED(L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Prime31.MonoBehaviourGUI::button(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonoBehaviourGUI_button_m4D8005EB7B607E443B16C5EA0993BC0AAE16D9C3 (MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___text0;
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_1 = (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)SZArrayNew(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var, (uint32_t)0);
		bool L_2;
		L_2 = GUILayout_Button_m749F2887D57BDC9B6901F2C35F5C6A7E22154162(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Prime31.MonoBehaviourGUI::bottomRightButton(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonoBehaviourGUI_bottomRightButton_mD25D613709FE8982B0772EAA1C5AEF4FC743B143 (MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2 * __this, String_t* ___text0, float ___width1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_0;
		L_0 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		NullCheck(L_0);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1;
		L_1 = GUISkin_get_button_m03559A64FAC2479F2D3753DD559FF22273602835(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_2;
		L_2 = GUIStyle_get_hover_mB186BDBADD84DA7394576DBEAF29F3B54BD41E46(L_1, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_3;
		L_3 = MonoBehaviourGUI_get_bottomButtonBackground_m4832748F5B6F2175B88CBBE4537A7EA58EDB379E(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		GUIStyleState_set_background_mA80B6ED2555C6551933E2D0ECA5081FC254B6A21(L_2, L_3, /*hidden argument*/NULL);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_4;
		L_4 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		NullCheck(L_4);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_5;
		L_5 = GUISkin_get_button_m03559A64FAC2479F2D3753DD559FF22273602835(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_6;
		L_6 = GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE(L_5, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7;
		L_7 = MonoBehaviourGUI_get_bottomButtonBackground_m4832748F5B6F2175B88CBBE4537A7EA58EDB379E(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		GUIStyleState_set_background_mA80B6ED2555C6551933E2D0ECA5081FC254B6A21(L_6, L_7, /*hidden argument*/NULL);
		int32_t L_8;
		L_8 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		___width1 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)((float)((float)((float)((float)L_8))/(float)(2.0f))), (float)(35.0f))), (float)(20.0f)));
		int32_t L_9;
		L_9 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		float L_10 = ___width1;
		int32_t L_11;
		L_11 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		float L_12 = __this->get__buttonHeight_5();
		float L_13 = ___width1;
		float L_14 = __this->get__buttonHeight_5();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_15), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)((float)((float)L_9)), (float)L_10)), (float)(10.0f))), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)((float)((float)L_11)), (float)L_12)), (float)(10.0f))), L_13, L_14, /*hidden argument*/NULL);
		String_t* L_16 = ___text0;
		bool L_17;
		L_17 = GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F(L_15, L_16, /*hidden argument*/NULL);
		return L_17;
	}
}
// System.Boolean Prime31.MonoBehaviourGUI::bottomLeftButton(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonoBehaviourGUI_bottomLeftButton_mFEFD992BA2AE89CB44FF5E5758F295301BC26C96 (MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2 * __this, String_t* ___text0, float ___width1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_0;
		L_0 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		NullCheck(L_0);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1;
		L_1 = GUISkin_get_button_m03559A64FAC2479F2D3753DD559FF22273602835(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_2;
		L_2 = GUIStyle_get_hover_mB186BDBADD84DA7394576DBEAF29F3B54BD41E46(L_1, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_3;
		L_3 = MonoBehaviourGUI_get_bottomButtonBackground_m4832748F5B6F2175B88CBBE4537A7EA58EDB379E(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		GUIStyleState_set_background_mA80B6ED2555C6551933E2D0ECA5081FC254B6A21(L_2, L_3, /*hidden argument*/NULL);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_4;
		L_4 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		NullCheck(L_4);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_5;
		L_5 = GUISkin_get_button_m03559A64FAC2479F2D3753DD559FF22273602835(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_6;
		L_6 = GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE(L_5, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7;
		L_7 = MonoBehaviourGUI_get_bottomButtonBackground_m4832748F5B6F2175B88CBBE4537A7EA58EDB379E(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		GUIStyleState_set_background_mA80B6ED2555C6551933E2D0ECA5081FC254B6A21(L_6, L_7, /*hidden argument*/NULL);
		int32_t L_8;
		L_8 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		___width1 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)((float)((float)((float)((float)L_8))/(float)(2.0f))), (float)(35.0f))), (float)(20.0f)));
		int32_t L_9;
		L_9 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		float L_10 = __this->get__buttonHeight_5();
		float L_11 = ___width1;
		float L_12 = __this->get__buttonHeight_5();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_13), (10.0f), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)((float)((float)L_9)), (float)L_10)), (float)(10.0f))), L_11, L_12, /*hidden argument*/NULL);
		String_t* L_14 = ___text0;
		bool L_15;
		L_15 = GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F(L_13, L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Boolean Prime31.MonoBehaviourGUI::bottomCenterButton(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonoBehaviourGUI_bottomCenterButton_mF9951FD466B248A20175D03448F53E8E8E180BA9 (MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2 * __this, String_t* ___text0, float ___width1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_0;
		L_0 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		NullCheck(L_0);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1;
		L_1 = GUISkin_get_button_m03559A64FAC2479F2D3753DD559FF22273602835(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_2;
		L_2 = GUIStyle_get_hover_mB186BDBADD84DA7394576DBEAF29F3B54BD41E46(L_1, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_3;
		L_3 = MonoBehaviourGUI_get_bottomButtonBackground_m4832748F5B6F2175B88CBBE4537A7EA58EDB379E(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		GUIStyleState_set_background_mA80B6ED2555C6551933E2D0ECA5081FC254B6A21(L_2, L_3, /*hidden argument*/NULL);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_4;
		L_4 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		NullCheck(L_4);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_5;
		L_5 = GUISkin_get_button_m03559A64FAC2479F2D3753DD559FF22273602835(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_6;
		L_6 = GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE(L_5, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7;
		L_7 = MonoBehaviourGUI_get_bottomButtonBackground_m4832748F5B6F2175B88CBBE4537A7EA58EDB379E(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		GUIStyleState_set_background_mA80B6ED2555C6551933E2D0ECA5081FC254B6A21(L_6, L_7, /*hidden argument*/NULL);
		int32_t L_8;
		L_8 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		float L_9 = ___width1;
		V_0 = ((float)il2cpp_codegen_subtract((float)((float)((float)((int32_t)((int32_t)L_8/(int32_t)2)))), (float)((float)((float)L_9/(float)(2.0f)))));
		float L_10 = V_0;
		int32_t L_11;
		L_11 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		float L_12 = __this->get__buttonHeight_5();
		float L_13 = ___width1;
		float L_14 = __this->get__buttonHeight_5();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_15), L_10, ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)((float)((float)L_11)), (float)L_12)), (float)(10.0f))), L_13, L_14, /*hidden argument*/NULL);
		String_t* L_16 = ___text0;
		bool L_17;
		L_17 = GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F(L_15, L_16, /*hidden argument*/NULL);
		return L_17;
	}
}
// System.Boolean Prime31.MonoBehaviourGUI::toggleButton(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonoBehaviourGUI_toggleButton_m5A360EDD001DB7AEDA537127B9873C06A3B17842 (MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2 * __this, String_t* ___defaultText0, String_t* ___selectedText1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mDC3AD2416E7463B12FC10AD8A6C816FECC11E003_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m3FC6EB738CC4A9E285D6330B2352769B37B32B20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m80950D4BAC47AA3A0B7E50B2C2E0606342C9011D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B5_0 = NULL;
	{
		Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C * L_0 = __this->get__toggleButtons_6();
		String_t* L_1 = ___defaultText0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mDC3AD2416E7463B12FC10AD8A6C816FECC11E003(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mDC3AD2416E7463B12FC10AD8A6C816FECC11E003_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C * L_3 = __this->get__toggleButtons_6();
		String_t* L_4 = ___defaultText0;
		NullCheck(L_3);
		Dictionary_2_set_Item_m80950D4BAC47AA3A0B7E50B2C2E0606342C9011D(L_3, L_4, (bool)1, /*hidden argument*/Dictionary_2_set_Item_m80950D4BAC47AA3A0B7E50B2C2E0606342C9011D_RuntimeMethod_var);
	}

IL_001e:
	{
		Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C * L_5 = __this->get__toggleButtons_6();
		String_t* L_6 = ___defaultText0;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_get_Item_m3FC6EB738CC4A9E285D6330B2352769B37B32B20(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_m3FC6EB738CC4A9E285D6330B2352769B37B32B20_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_8 = ___defaultText0;
		G_B5_0 = L_8;
		goto IL_0036;
	}

IL_0035:
	{
		String_t* L_9 = ___selectedText1;
		G_B5_0 = L_9;
	}

IL_0036:
	{
		V_0 = G_B5_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_10;
		L_10 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		NullCheck(L_10);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_11;
		L_11 = GUISkin_get_button_m03559A64FAC2479F2D3753DD559FF22273602835(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_12;
		L_12 = GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE(L_11, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_13;
		L_13 = MonoBehaviourGUI_get_toggleButtonBackground_m483F61386DED6CD0965C46322B86208475ABBC2C(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		GUIStyleState_set_background_mA80B6ED2555C6551933E2D0ECA5081FC254B6A21(L_12, L_13, /*hidden argument*/NULL);
		Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C * L_14 = __this->get__toggleButtons_6();
		String_t* L_15 = ___defaultText0;
		NullCheck(L_14);
		bool L_16;
		L_16 = Dictionary_2_get_Item_m3FC6EB738CC4A9E285D6330B2352769B37B32B20(L_14, L_15, /*hidden argument*/Dictionary_2_get_Item_m3FC6EB738CC4A9E285D6330B2352769B37B32B20_RuntimeMethod_var);
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_17;
		L_17 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_set_contentColor_mC580BA6155FF1ED522B03FD7DC9AB112E5D43586(L_17, /*hidden argument*/NULL);
		goto IL_008b;
	}

IL_0071:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_18;
		L_18 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		NullCheck(L_18);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_19;
		L_19 = GUISkin_get_button_m03559A64FAC2479F2D3753DD559FF22273602835(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		GUIStyle_set_fontStyle_mE158697020EE5D1044460A605FC8243AA8640F39(L_19, 1, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_20;
		L_20 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		GUI_set_contentColor_mC580BA6155FF1ED522B03FD7DC9AB112E5D43586(L_20, /*hidden argument*/NULL);
	}

IL_008b:
	{
		String_t* L_21 = V_0;
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_22 = (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)SZArrayNew(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var, (uint32_t)0);
		bool L_23;
		L_23 = GUILayout_Button_m749F2887D57BDC9B6901F2C35F5C6A7E22154162(L_21, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00af;
		}
	}
	{
		Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C * L_24 = __this->get__toggleButtons_6();
		String_t* L_25 = ___defaultText0;
		String_t* L_26 = V_0;
		String_t* L_27 = ___defaultText0;
		bool L_28;
		L_28 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_26, L_27, /*hidden argument*/NULL);
		NullCheck(L_24);
		Dictionary_2_set_Item_m80950D4BAC47AA3A0B7E50B2C2E0606342C9011D(L_24, L_25, L_28, /*hidden argument*/Dictionary_2_set_Item_m80950D4BAC47AA3A0B7E50B2C2E0606342C9011D_RuntimeMethod_var);
	}

IL_00af:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_29;
		L_29 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		NullCheck(L_29);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_30;
		L_30 = GUISkin_get_button_m03559A64FAC2479F2D3753DD559FF22273602835(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_31;
		L_31 = GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE(L_30, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_32;
		L_32 = MonoBehaviourGUI_get_normalBackground_m951508080963D8B59D557FA05781539D580868ED(__this, /*hidden argument*/NULL);
		NullCheck(L_31);
		GUIStyleState_set_background_mA80B6ED2555C6551933E2D0ECA5081FC254B6A21(L_31, L_32, /*hidden argument*/NULL);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_33;
		L_33 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		NullCheck(L_33);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_34;
		L_34 = GUISkin_get_button_m03559A64FAC2479F2D3753DD559FF22273602835(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		GUIStyle_set_fontStyle_mE158697020EE5D1044460A605FC8243AA8640F39(L_34, 0, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_35;
		L_35 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		GUI_set_contentColor_mC580BA6155FF1ED522B03FD7DC9AB112E5D43586(L_35, /*hidden argument*/NULL);
		Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C * L_36 = __this->get__toggleButtons_6();
		String_t* L_37 = ___defaultText0;
		NullCheck(L_36);
		bool L_38;
		L_38 = Dictionary_2_get_Item_m3FC6EB738CC4A9E285D6330B2352769B37B32B20(L_36, L_37, /*hidden argument*/Dictionary_2_get_Item_m3FC6EB738CC4A9E285D6330B2352769B37B32B20_RuntimeMethod_var);
		return L_38;
	}
}
// System.Boolean Prime31.MonoBehaviourGUI::toggleButtonState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonoBehaviourGUI_toggleButtonState_mF603505A49B4C53B02C2258026F34E0839331335 (MonoBehaviourGUI_t63AEC9E134E98A1708DA55FC7B2DDEC50A8892B2 * __this, String_t* ___defaultText0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mDC3AD2416E7463B12FC10AD8A6C816FECC11E003_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m3FC6EB738CC4A9E285D6330B2352769B37B32B20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m80950D4BAC47AA3A0B7E50B2C2E0606342C9011D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C * L_0 = __this->get__toggleButtons_6();
		String_t* L_1 = ___defaultText0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mDC3AD2416E7463B12FC10AD8A6C816FECC11E003(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mDC3AD2416E7463B12FC10AD8A6C816FECC11E003_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C * L_3 = __this->get__toggleButtons_6();
		String_t* L_4 = ___defaultText0;
		NullCheck(L_3);
		Dictionary_2_set_Item_m80950D4BAC47AA3A0B7E50B2C2E0606342C9011D(L_3, L_4, (bool)1, /*hidden argument*/Dictionary_2_set_Item_m80950D4BAC47AA3A0B7E50B2C2E0606342C9011D_RuntimeMethod_var);
	}

IL_001e:
	{
		Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C * L_5 = __this->get__toggleButtons_6();
		String_t* L_6 = ___defaultText0;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_get_Item_m3FC6EB738CC4A9E285D6330B2352769B37B32B20(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_m3FC6EB738CC4A9E285D6330B2352769B37B32B20_RuntimeMethod_var);
		return L_7;
	}
}
// System.Void Prime31.MonoBehaviourGUI::loadLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourGUI_loadLevel_m91B8A58E1F40344B64D9A63ADF2155C88B4710BD (int32_t ___level0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_t317038E88BDCE3640566EB8791C9E2AAAB21C87C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9BF0E6822F4CBC635E84A065FB4A28DA4DF9D3B);
		s_Il2CppMethodInitialized = true;
	}
	Assembly_t * V_0 = NULL;
	AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* V_1 = NULL;
	int32_t V_2 = 0;
	Type_t * V_3 = NULL;
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* V_4 = NULL;
	int32_t V_5 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (Application_t317038E88BDCE3640566EB8791C9E2AAAB21C87C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		NullCheck(L_1);
		MethodInfo_t * L_6;
		L_6 = Type_GetMethod_mDA3E2A83228C0493894D40D02963D7B07C7B058E(L_1, _stringLiteralB9BF0E6822F4CBC635E84A065FB4A28DA4DF9D3B, L_3, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_7;
		int32_t L_9 = ___level0;
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_11);
		NullCheck(L_6);
		RuntimeObject * L_12;
		L_12 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_6, NULL, L_8, /*hidden argument*/NULL);
		goto IL_00f5;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0042;
		throw e;
	}

CATCH_0042:
	{ // begin catch(System.Object)
		{
		}

IL_0043:
		try
		{ // begin try (depth: 2)
			{
				AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * L_13;
				L_13 = AppDomain_get_CurrentDomain_mC2FE307811914289CBBDEFEFF6175FCE2E96A55E(/*hidden argument*/NULL);
				NullCheck(L_13);
				AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* L_14;
				L_14 = AppDomain_GetAssemblies_m7397BD0461B4D6BA76AE0974DE9FBEDAF70AEBFD(L_13, /*hidden argument*/NULL);
				V_1 = L_14;
				V_2 = 0;
				goto IL_00d2;
			}

IL_0055:
			{
				AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* L_15 = V_1;
				int32_t L_16 = V_2;
				NullCheck(L_15);
				int32_t L_17 = L_16;
				Assembly_t * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
				V_0 = L_18;
				Assembly_t * L_19 = V_0;
				NullCheck(L_19);
				TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_20;
				L_20 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(13 /* System.Type[] System.Reflection.Assembly::GetTypes() */, L_19);
				V_4 = L_20;
				V_5 = 0;
				goto IL_00c3;
			}

IL_0069:
			{
				TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_21 = V_4;
				int32_t L_22 = V_5;
				NullCheck(L_21);
				int32_t L_23 = L_22;
				Type_t * L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
				V_3 = L_24;
				Type_t * L_25 = V_3;
				NullCheck(L_25);
				String_t* L_26;
				L_26 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_25);
				NullCheck(L_26);
				bool L_27;
				L_27 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB0B267465E6809858C6C0C2664BB62BA5715FCE4)), /*hidden argument*/NULL);
				if (!L_27)
				{
					goto IL_00bd;
				}
			}

IL_0084:
			{
				Type_t * L_28 = V_3;
				TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_29 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var)), (uint32_t)1);
				TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_30 = L_29;
				RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var))) };
				IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
				Type_t * L_32;
				L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_31, /*hidden argument*/NULL);
				NullCheck(L_30);
				ArrayElementTypeCheck (L_30, L_32);
				(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_32);
				NullCheck(L_28);
				MethodInfo_t * L_33;
				L_33 = Type_GetMethod_mDA3E2A83228C0493894D40D02963D7B07C7B058E(L_28, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral422457F901751FA3B57100A103387F681147FE63)), L_30, /*hidden argument*/NULL);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_34 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)1);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_35 = L_34;
				int32_t L_36 = ___level0;
				int32_t L_37 = L_36;
				RuntimeObject * L_38 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_37);
				NullCheck(L_35);
				ArrayElementTypeCheck (L_35, L_38);
				(L_35)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_38);
				NullCheck(L_33);
				RuntimeObject * L_39;
				L_39 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_33, NULL, L_35, /*hidden argument*/NULL);
				goto IL_00ce;
			}

IL_00bd:
			{
				int32_t L_40 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
			}

IL_00c3:
			{
				int32_t L_41 = V_5;
				TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_42 = V_4;
				NullCheck(L_42);
				if ((((int32_t)L_41) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length))))))
				{
					goto IL_0069;
				}
			}

IL_00ce:
			{
				int32_t L_43 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
			}

IL_00d2:
			{
				int32_t L_44 = V_2;
				AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* L_45 = V_1;
				NullCheck(L_45);
				if ((((int32_t)L_44) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
				{
					goto IL_0055;
				}
			}

IL_00db:
			{
				goto IL_00f0;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				goto CATCH_00e0;
			throw e;
		}

CATCH_00e0:
		{ // begin catch(System.Object)
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECC3900F7FCDEFA781D33EBEB79E2FA8FC4BF939)), /*hidden argument*/NULL);
			goto IL_00f0;
		} // end catch (depth: 2)

IL_00f0:
		{
			goto IL_00f5;
		}
	} // end catch (depth: 1)

IL_00f5:
	{
		return;
	}
}
// System.Void Prime31.MonoBehaviourGUI::loadLevel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourGUI_loadLevel_m17DA9C8A9C7E190C57E06040E8C906AC8B419BC8 (String_t* ___level0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_t317038E88BDCE3640566EB8791C9E2AAAB21C87C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9BF0E6822F4CBC635E84A065FB4A28DA4DF9D3B);
		s_Il2CppMethodInitialized = true;
	}
	Assembly_t * V_0 = NULL;
	AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* V_1 = NULL;
	int32_t V_2 = 0;
	Type_t * V_3 = NULL;
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* V_4 = NULL;
	int32_t V_5 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (Application_t317038E88BDCE3640566EB8791C9E2AAAB21C87C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		NullCheck(L_1);
		MethodInfo_t * L_6;
		L_6 = Type_GetMethod_mDA3E2A83228C0493894D40D02963D7B07C7B058E(L_1, _stringLiteralB9BF0E6822F4CBC635E84A065FB4A28DA4DF9D3B, L_3, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_7;
		String_t* L_9 = ___level0;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_9);
		NullCheck(L_6);
		RuntimeObject * L_10;
		L_10 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_6, NULL, L_8, /*hidden argument*/NULL);
		goto IL_00eb;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_003d;
		throw e;
	}

CATCH_003d:
	{ // begin catch(System.Object)
		{
		}

IL_003e:
		try
		{ // begin try (depth: 2)
			{
				AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * L_11;
				L_11 = AppDomain_get_CurrentDomain_mC2FE307811914289CBBDEFEFF6175FCE2E96A55E(/*hidden argument*/NULL);
				NullCheck(L_11);
				AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* L_12;
				L_12 = AppDomain_GetAssemblies_m7397BD0461B4D6BA76AE0974DE9FBEDAF70AEBFD(L_11, /*hidden argument*/NULL);
				V_1 = L_12;
				V_2 = 0;
				goto IL_00c8;
			}

IL_0050:
			{
				AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* L_13 = V_1;
				int32_t L_14 = V_2;
				NullCheck(L_13);
				int32_t L_15 = L_14;
				Assembly_t * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
				V_0 = L_16;
				Assembly_t * L_17 = V_0;
				NullCheck(L_17);
				TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_18;
				L_18 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(13 /* System.Type[] System.Reflection.Assembly::GetTypes() */, L_17);
				V_4 = L_18;
				V_5 = 0;
				goto IL_00b9;
			}

IL_0064:
			{
				TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_19 = V_4;
				int32_t L_20 = V_5;
				NullCheck(L_19);
				int32_t L_21 = L_20;
				Type_t * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
				V_3 = L_22;
				Type_t * L_23 = V_3;
				NullCheck(L_23);
				String_t* L_24;
				L_24 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
				NullCheck(L_24);
				bool L_25;
				L_25 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB0B267465E6809858C6C0C2664BB62BA5715FCE4)), /*hidden argument*/NULL);
				if (!L_25)
				{
					goto IL_00b3;
				}
			}

IL_007f:
			{
				Type_t * L_26 = V_3;
				TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_27 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var)), (uint32_t)1);
				TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_28 = L_27;
				RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_29 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_t_0_0_0_var))) };
				IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
				Type_t * L_30;
				L_30 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_29, /*hidden argument*/NULL);
				NullCheck(L_28);
				ArrayElementTypeCheck (L_28, L_30);
				(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_30);
				NullCheck(L_26);
				MethodInfo_t * L_31;
				L_31 = Type_GetMethod_mDA3E2A83228C0493894D40D02963D7B07C7B058E(L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral422457F901751FA3B57100A103387F681147FE63)), L_28, /*hidden argument*/NULL);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_32 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)1);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_33 = L_32;
				String_t* L_34 = ___level0;
				NullCheck(L_33);
				ArrayElementTypeCheck (L_33, L_34);
				(L_33)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_34);
				NullCheck(L_31);
				RuntimeObject * L_35;
				L_35 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_31, NULL, L_33, /*hidden argument*/NULL);
				goto IL_00c4;
			}

IL_00b3:
			{
				int32_t L_36 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
			}

IL_00b9:
			{
				int32_t L_37 = V_5;
				TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_38 = V_4;
				NullCheck(L_38);
				if ((((int32_t)L_37) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length))))))
				{
					goto IL_0064;
				}
			}

IL_00c4:
			{
				int32_t L_39 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
			}

IL_00c8:
			{
				int32_t L_40 = V_2;
				AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* L_41 = V_1;
				NullCheck(L_41);
				if ((((int32_t)L_40) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length))))))
				{
					goto IL_0050;
				}
			}

IL_00d1:
			{
				goto IL_00e6;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				goto CATCH_00d6;
			throw e;
		}

CATCH_00d6:
		{ // begin catch(System.Object)
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECC3900F7FCDEFA781D33EBEB79E2FA8FC4BF939)), /*hidden argument*/NULL);
			goto IL_00e6;
		} // end catch (depth: 2)

IL_00e6:
		{
			goto IL_00eb;
		}
	} // end catch (depth: 1)

IL_00eb:
	{
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
// System.Void Prime31.PocoJsonSerializerStrategy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PocoJsonSerializerStrategy__ctor_m803978E6D0EB3D53266B3F6DD01D4F6CB6DFF1E4 (PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberMapLoader_t56FA45FA01C1729FCF47BAE05C4F8406A5B3E137_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		MemberMapLoader_t56FA45FA01C1729FCF47BAE05C4F8406A5B3E137 * L_0 = (MemberMapLoader_t56FA45FA01C1729FCF47BAE05C4F8406A5B3E137 *)il2cpp_codegen_object_new(MemberMapLoader_t56FA45FA01C1729FCF47BAE05C4F8406A5B3E137_il2cpp_TypeInfo_var);
		MemberMapLoader__ctor_mEF5396F2EA8A2A0F3A56801B5B6BD7DE82B20C4A(L_0, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 6)), /*hidden argument*/NULL);
		CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0 * L_1 = (CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0 *)il2cpp_codegen_object_new(CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0_il2cpp_TypeInfo_var);
		CacheResolver__ctor_mFFA61893994C8BDDD62C45671C18CCF07B265904(L_1, L_0, /*hidden argument*/NULL);
		__this->set_cacheResolver_0(L_1);
		return;
	}
}
// System.Void Prime31.PocoJsonSerializerStrategy::buildMap(System.Type,Prime31.Reflection.SafeDictionary`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PocoJsonSerializerStrategy_buildMap_m01DDFCC06A95AD93443402E3CD690CB3E811C7BE (PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C * __this, Type_t * ___type0, SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 * ___memberMaps1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberMap_tA722F3C527755D23AB14FC21BFE6A283F7C75D66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDictionary_2_add_m8CB6363B5E062018AE5E112D28AD5AD374ED97B3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PropertyInfo_t * V_0 = NULL;
	PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* V_1 = NULL;
	int32_t V_2 = 0;
	FieldInfo_t * V_3 = NULL;
	FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_1;
		L_1 = VirtFuncInvoker1< PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A*, int32_t >::Invoke(49 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_0, ((int32_t)52));
		V_1 = L_1;
		V_2 = 0;
		goto IL_002a;
	}

IL_0010:
	{
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		PropertyInfo_t * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 * L_6 = ___memberMaps1;
		PropertyInfo_t * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_7);
		PropertyInfo_t * L_9 = V_0;
		MemberMap_tA722F3C527755D23AB14FC21BFE6A283F7C75D66 * L_10 = (MemberMap_tA722F3C527755D23AB14FC21BFE6A283F7C75D66 *)il2cpp_codegen_object_new(MemberMap_tA722F3C527755D23AB14FC21BFE6A283F7C75D66_il2cpp_TypeInfo_var);
		MemberMap__ctor_m70EE2B2E7BFFA90ADBDBDBB0F4077B460A8121C3(L_10, L_9, /*hidden argument*/NULL);
		NullCheck(L_6);
		SafeDictionary_2_add_m8CB6363B5E062018AE5E112D28AD5AD374ED97B3(L_6, L_8, L_10, /*hidden argument*/SafeDictionary_2_add_m8CB6363B5E062018AE5E112D28AD5AD374ED97B3_RuntimeMethod_var);
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_002a:
	{
		int32_t L_12 = V_2;
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_13 = V_1;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_0010;
		}
	}
	{
		Type_t * L_14 = ___type0;
		NullCheck(L_14);
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_15;
		L_15 = VirtFuncInvoker1< FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E*, int32_t >::Invoke(43 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_14, ((int32_t)52));
		V_4 = L_15;
		V_5 = 0;
		goto IL_0063;
	}

IL_0045:
	{
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_16 = V_4;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		FieldInfo_t * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_3 = L_19;
		SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 * L_20 = ___memberMaps1;
		FieldInfo_t * L_21 = V_3;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_21);
		FieldInfo_t * L_23 = V_3;
		MemberMap_tA722F3C527755D23AB14FC21BFE6A283F7C75D66 * L_24 = (MemberMap_tA722F3C527755D23AB14FC21BFE6A283F7C75D66 *)il2cpp_codegen_object_new(MemberMap_tA722F3C527755D23AB14FC21BFE6A283F7C75D66_il2cpp_TypeInfo_var);
		MemberMap__ctor_m0AFC2A4F322FA25E1B61806670B40FD2380C302B(L_24, L_23, /*hidden argument*/NULL);
		NullCheck(L_20);
		SafeDictionary_2_add_m8CB6363B5E062018AE5E112D28AD5AD374ED97B3(L_20, L_22, L_24, /*hidden argument*/SafeDictionary_2_add_m8CB6363B5E062018AE5E112D28AD5AD374ED97B3_RuntimeMethod_var);
		int32_t L_25 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0063:
	{
		int32_t L_26 = V_5;
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_27 = V_4;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		return;
	}
}
// System.Boolean Prime31.PocoJsonSerializerStrategy::serializeNonPrimitiveObject(System.Object,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PocoJsonSerializerStrategy_serializeNonPrimitiveObject_m2A0BCD2EA1C1ACDF49E4F600E5595792FF37B8F9 (PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C * __this, RuntimeObject * ___input0, RuntimeObject ** ___output1, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		RuntimeObject * L_0 = ___input0;
		RuntimeObject ** L_1 = ___output1;
		bool L_2;
		L_2 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject ** >::Invoke(10 /* System.Boolean Prime31.PocoJsonSerializerStrategy::trySerializeKnownTypes(System.Object,System.Object&) */, __this, L_0, (RuntimeObject **)L_1);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject * L_3 = ___input0;
		RuntimeObject ** L_4 = ___output1;
		bool L_5;
		L_5 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject ** >::Invoke(11 /* System.Boolean Prime31.PocoJsonSerializerStrategy::trySerializeUnknownTypes(System.Object,System.Object&) */, __this, L_3, (RuntimeObject **)L_4);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		return (bool)G_B3_0;
	}
}
// System.Object Prime31.PocoJsonSerializerStrategy::deserializeObject(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PocoJsonSerializerStrategy_deserializeObject_mAC43846A0F251D94F23989A86309A7FE6FF7A681 (PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C * __this, RuntimeObject * ___value0, Type_t * ___type1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t58021767EFD70313A4DB609BB2EC63167C586EDE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t35488BE070734B4C5D136DC1A68CBC9CE507D488_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConvertible_t40D9E38816544BF71E97F48AB3C47C9A2B7E9BE4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t8ACA6B0DE7FFF63CD5FC28E90063271CA8B5DA3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t04D882226AB7D8875E8DE1B4FEDCB5060F885EBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t13315165413127F13361B2E10B83C6CD018EE37B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t707982BD768B18C51D263C759F33BCDBDFA44901_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m71EC8713848A54055B4FD71001B1EFBA00085387_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mA7D524A2849160FE60D9B60969D35C565B741C69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2F377D93C74B8090B226DCC307AB5BB600181453_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDictionary_2_GetEnumerator_mB73E6DB5CCF467A5A9B534B188D0E63D031418CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	String_t* V_1 = NULL;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	Type_t * V_4 = NULL;
	Type_t * V_5 = NULL;
	Type_t * V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  V_8;
	memset((&V_8), 0, sizeof(V_8));
	RuntimeObject* V_9 = NULL;
	SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 * V_10 = NULL;
	KeyValuePair_2_tFD5EE2073212402F9FBA969914B0938321EEC655  V_11;
	memset((&V_11), 0, sizeof(V_11));
	RuntimeObject* V_12 = NULL;
	MemberMap_tA722F3C527755D23AB14FC21BFE6A283F7C75D66 * V_13 = NULL;
	String_t* V_14 = NULL;
	RuntimeObject * V_15 = NULL;
	RuntimeObject* V_16 = NULL;
	RuntimeObject* V_17 = NULL;
	int32_t V_18 = 0;
	RuntimeObject * V_19 = NULL;
	RuntimeObject* V_20 = NULL;
	Type_t * V_21 = NULL;
	Type_t * V_22 = NULL;
	RuntimeObject * V_23 = NULL;
	RuntimeObject* V_24 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	RuntimeObject * G_B29_0 = NULL;
	{
		V_0 = NULL;
		RuntimeObject * L_0 = ___value0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0073;
		}
	}
	{
		RuntimeObject * L_1 = ___value0;
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var));
		String_t* L_2 = V_1;
		bool L_3;
		L_3 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_006c;
		}
	}
	{
		Type_t * L_4 = ___type1;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_4) == ((RuntimeObject*)(Type_t *)L_6)))
		{
			goto IL_004f;
		}
	}
	{
		Type_t * L_7 = ___type1;
		bool L_8;
		L_8 = ReflectionUtils_isNullableType_m0BDD5CBDB31E880D6745CCD3F1D3B0355886CB66(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_006c;
		}
	}
	{
		Type_t * L_9 = ___type1;
		Type_t * L_10;
		L_10 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629(L_9, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_10) == ((RuntimeObject*)(Type_t *)L_12))))
		{
			goto IL_006c;
		}
	}

IL_004f:
	{
		String_t* L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = ((PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C_StaticFields*)il2cpp_codegen_static_fields_for(PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C_il2cpp_TypeInfo_var))->get_Iso8601Format_1();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_15;
		L_15 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_16;
		L_16 = DateTime_ParseExact_m43F441DC2FA3039499C5A9FD2E1972E762F99DC8(L_13, L_14, L_15, ((int32_t)80), /*hidden argument*/NULL);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_17 = L_16;
		RuntimeObject * L_18 = Box(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var, &L_17);
		V_0 = L_18;
		goto IL_006e;
	}

IL_006c:
	{
		String_t* L_19 = V_1;
		V_0 = L_19;
	}

IL_006e:
	{
		goto IL_0440;
	}

IL_0073:
	{
		RuntimeObject * L_20 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_20, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))
		{
			goto IL_0085;
		}
	}
	{
		RuntimeObject * L_21 = ___value0;
		V_0 = L_21;
		goto IL_0440;
	}

IL_0085:
	{
		RuntimeObject * L_22 = ___value0;
		if (L_22)
		{
			goto IL_0092;
		}
	}
	{
		V_0 = NULL;
		goto IL_0440;
	}

IL_0092:
	{
		RuntimeObject * L_23 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_23, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))
		{
			goto IL_00ad;
		}
	}
	{
		Type_t * L_24 = ___type1;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26;
		L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_25, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_24) == ((RuntimeObject*)(Type_t *)L_26)))
		{
			goto IL_00c8;
		}
	}

IL_00ad:
	{
		RuntimeObject * L_27 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_27, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))
		{
			goto IL_00cf;
		}
	}
	{
		Type_t * L_28 = ___type1;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_29 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_30;
		L_30 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_29, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_28) == ((RuntimeObject*)(Type_t *)L_30))))
		{
			goto IL_00cf;
		}
	}

IL_00c8:
	{
		RuntimeObject * L_31 = ___value0;
		V_0 = L_31;
		goto IL_0440;
	}

IL_00cf:
	{
		RuntimeObject * L_32 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_32, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))
		{
			goto IL_00ea;
		}
	}
	{
		Type_t * L_33 = ___type1;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_34 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_35;
		L_35 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_34, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_33) == ((RuntimeObject*)(Type_t *)L_35))))
		{
			goto IL_0105;
		}
	}

IL_00ea:
	{
		RuntimeObject * L_36 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_36, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))
		{
			goto IL_0190;
		}
	}
	{
		Type_t * L_37 = ___type1;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_38 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_39;
		L_39 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_38, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_37) == ((RuntimeObject*)(Type_t *)L_39)))
		{
			goto IL_0190;
		}
	}

IL_0105:
	{
		RuntimeObject * L_40 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_40, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))
		{
			goto IL_014b;
		}
	}
	{
		Type_t * L_41 = ___type1;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_42 = { reinterpret_cast<intptr_t> (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_43;
		L_43 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_42, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_41) == ((RuntimeObject*)(Type_t *)L_43))))
		{
			goto IL_014b;
		}
	}
	{
		DateTime__ctor_mE84FCDCEAD332A62B587191C5874DAD7C238CFEA((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), ((int32_t)1970), 1, 1, 0, 0, 0, 1, /*hidden argument*/NULL);
		RuntimeObject * L_44 = ___value0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_45;
		L_45 = DateTime_AddMilliseconds_m74B689CDAFB7ABEEF56827D8777B7C95C89C3154((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), ((double)((double)((*(int64_t*)((int64_t*)UnBox(L_44, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))))), /*hidden argument*/NULL);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_46 = L_45;
		RuntimeObject * L_47 = Box(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var, &L_46);
		V_0 = L_47;
		goto IL_018b;
	}

IL_014b:
	{
		Type_t * L_48 = ___type1;
		NullCheck(L_48);
		bool L_49;
		L_49 = VirtFuncInvoker0< bool >::Invoke(66 /* System.Boolean System.Type::get_IsEnum() */, L_48);
		if (!L_49)
		{
			goto IL_0163;
		}
	}
	{
		Type_t * L_50 = ___type1;
		RuntimeObject * L_51 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeObject * L_52;
		L_52 = Enum_ToObject_m2A05590A0D581206AAEB48B89187FD175D5F0967(L_50, L_51, /*hidden argument*/NULL);
		V_0 = L_52;
		goto IL_018b;
	}

IL_0163:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_53 = { reinterpret_cast<intptr_t> (IConvertible_t40D9E38816544BF71E97F48AB3C47C9A2B7E9BE4_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_54;
		L_54 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_53, /*hidden argument*/NULL);
		Type_t * L_55 = ___type1;
		NullCheck(L_54);
		bool L_56;
		L_56 = VirtFuncInvoker1< bool, Type_t * >::Invoke(104 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_54, L_55);
		if (!L_56)
		{
			goto IL_0189;
		}
	}
	{
		RuntimeObject * L_57 = ___value0;
		Type_t * L_58 = ___type1;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_59;
		L_59 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		RuntimeObject * L_60;
		L_60 = Convert_ChangeType_m6AA3DE3E595A2AABA33B5046BD6CF2AB46466C05(L_57, L_58, L_59, /*hidden argument*/NULL);
		G_B29_0 = L_60;
		goto IL_018a;
	}

IL_0189:
	{
		RuntimeObject * L_61 = ___value0;
		G_B29_0 = L_61;
	}

IL_018a:
	{
		V_0 = G_B29_0;
	}

IL_018b:
	{
		goto IL_0440;
	}

IL_0190:
	{
		RuntimeObject * L_62 = ___value0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_62, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var)))
		{
			goto IL_0300;
		}
	}
	{
		RuntimeObject * L_63 = ___value0;
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_63, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var));
		Type_t * L_64 = ___type1;
		bool L_65;
		L_65 = ReflectionUtils_isTypeDictionary_m078707414014440D422F0EDF9F29CFFEC2296F2C(L_64, /*hidden argument*/NULL);
		if (!L_65)
		{
			goto IL_024b;
		}
	}
	{
		Type_t * L_66 = ___type1;
		NullCheck(L_66);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_67;
		L_67 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(94 /* System.Type[] System.Type::GetGenericArguments() */, L_66);
		NullCheck(L_67);
		int32_t L_68 = 0;
		Type_t * L_69 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		V_4 = L_69;
		Type_t * L_70 = ___type1;
		NullCheck(L_70);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_71;
		L_71 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(94 /* System.Type[] System.Type::GetGenericArguments() */, L_70);
		NullCheck(L_71);
		int32_t L_72 = 1;
		Type_t * L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		V_5 = L_73;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_74 = { reinterpret_cast<intptr_t> (Dictionary_2_t58021767EFD70313A4DB609BB2EC63167C586EDE_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_75;
		L_75 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_74, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_76 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_77 = L_76;
		Type_t * L_78 = V_4;
		NullCheck(L_77);
		ArrayElementTypeCheck (L_77, L_78);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_78);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_79 = L_77;
		Type_t * L_80 = V_5;
		NullCheck(L_79);
		ArrayElementTypeCheck (L_79, L_80);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_80);
		NullCheck(L_75);
		Type_t * L_81;
		L_81 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(90 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_75, L_79);
		V_6 = L_81;
		Type_t * L_82 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0_il2cpp_TypeInfo_var);
		RuntimeObject * L_83;
		L_83 = CacheResolver_getNewInstance_mD97DB880BC39BE885D0637FCB1028B4C99FA1900(L_82, /*hidden argument*/NULL);
		V_7 = ((RuntimeObject*)Castclass((RuntimeObject*)L_83, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var));
		RuntimeObject* L_84 = V_3;
		NullCheck(L_84);
		RuntimeObject* L_85;
		L_85 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetEnumerator() */, IEnumerable_1_t8ACA6B0DE7FFF63CD5FC28E90063271CA8B5DA3D_il2cpp_TypeInfo_var, L_84);
		V_9 = L_85;
	}

IL_01f8:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0223;
		}

IL_01fd:
		{
			RuntimeObject* L_86 = V_9;
			NullCheck(L_86);
			KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_87;
			L_87 = InterfaceFuncInvoker0< KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current() */, IEnumerator_1_t04D882226AB7D8875E8DE1B4FEDCB5060F885EBB_il2cpp_TypeInfo_var, L_86);
			V_8 = L_87;
			RuntimeObject* L_88 = V_7;
			String_t* L_89;
			L_89 = KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&V_8), /*hidden argument*/KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var);
			RuntimeObject * L_90;
			L_90 = KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&V_8), /*hidden argument*/KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var);
			Type_t * L_91 = V_5;
			RuntimeObject * L_92;
			L_92 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, Type_t * >::Invoke(8 /* System.Object Prime31.PocoJsonSerializerStrategy::deserializeObject(System.Object,System.Type) */, __this, L_90, L_91);
			NullCheck(L_88);
			InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(5 /* System.Void System.Collections.IDictionary::Add(System.Object,System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_88, L_89, L_92);
		}

IL_0223:
		{
			RuntimeObject* L_93 = V_9;
			NullCheck(L_93);
			bool L_94;
			L_94 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_93);
			if (L_94)
			{
				goto IL_01fd;
			}
		}

IL_022f:
		{
			IL2CPP_LEAVE(0x243, FINALLY_0234);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0234;
	}

FINALLY_0234:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_95 = V_9;
			if (!L_95)
			{
				goto IL_0242;
			}
		}

IL_023b:
		{
			RuntimeObject* L_96 = V_9;
			NullCheck(L_96);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_96);
		}

IL_0242:
		{
			IL2CPP_END_FINALLY(564)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(564)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x243, IL_0243)
	}

IL_0243:
	{
		RuntimeObject* L_97 = V_7;
		V_0 = L_97;
		goto IL_02fb;
	}

IL_024b:
	{
		Type_t * L_98 = ___type1;
		IL2CPP_RUNTIME_CLASS_INIT(CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0_il2cpp_TypeInfo_var);
		RuntimeObject * L_99;
		L_99 = CacheResolver_getNewInstance_mD97DB880BC39BE885D0637FCB1028B4C99FA1900(L_98, /*hidden argument*/NULL);
		V_0 = L_99;
		CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0 * L_100 = __this->get_cacheResolver_0();
		Type_t * L_101 = ___type1;
		NullCheck(L_100);
		SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 * L_102;
		L_102 = CacheResolver_loadMaps_m3DB7ABA05C03FA632AEDE962FF742F108790D156(L_100, L_101, /*hidden argument*/NULL);
		V_10 = L_102;
		SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 * L_103 = V_10;
		if (L_103)
		{
			goto IL_026e;
		}
	}
	{
		RuntimeObject * L_104 = ___value0;
		V_0 = L_104;
		goto IL_02fb;
	}

IL_026e:
	{
		SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 * L_105 = V_10;
		NullCheck(L_105);
		RuntimeObject* L_106;
		L_106 = SafeDictionary_2_GetEnumerator_mB73E6DB5CCF467A5A9B534B188D0E63D031418CC(L_105, /*hidden argument*/SafeDictionary_2_GetEnumerator_mB73E6DB5CCF467A5A9B534B188D0E63D031418CC_RuntimeMethod_var);
		V_12 = L_106;
	}

IL_0277:
	try
	{ // begin try (depth: 1)
		{
			goto IL_02db;
		}

IL_027c:
		{
			RuntimeObject* L_107 = V_12;
			NullCheck(L_107);
			KeyValuePair_2_tFD5EE2073212402F9FBA969914B0938321EEC655  L_108;
			L_108 = InterfaceFuncInvoker0< KeyValuePair_2_tFD5EE2073212402F9FBA969914B0938321EEC655  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>>::get_Current() */, IEnumerator_1_t13315165413127F13361B2E10B83C6CD018EE37B_il2cpp_TypeInfo_var, L_107);
			V_11 = L_108;
			MemberMap_tA722F3C527755D23AB14FC21BFE6A283F7C75D66 * L_109;
			L_109 = KeyValuePair_2_get_Value_mA7D524A2849160FE60D9B60969D35C565B741C69_inline((KeyValuePair_2_tFD5EE2073212402F9FBA969914B0938321EEC655 *)(&V_11), /*hidden argument*/KeyValuePair_2_get_Value_mA7D524A2849160FE60D9B60969D35C565B741C69_RuntimeMethod_var);
			V_13 = L_109;
			MemberMap_tA722F3C527755D23AB14FC21BFE6A283F7C75D66 * L_110 = V_13;
			NullCheck(L_110);
			SetHandler_tAE38CDA0AFD7619D49B7E3A9FE386955818B44E8 * L_111 = L_110->get_Setter_3();
			if (L_111)
			{
				goto IL_029f;
			}
		}

IL_029a:
		{
			goto IL_02db;
		}

IL_029f:
		{
			String_t* L_112;
			L_112 = KeyValuePair_2_get_Key_m71EC8713848A54055B4FD71001B1EFBA00085387_inline((KeyValuePair_2_tFD5EE2073212402F9FBA969914B0938321EEC655 *)(&V_11), /*hidden argument*/KeyValuePair_2_get_Key_m71EC8713848A54055B4FD71001B1EFBA00085387_RuntimeMethod_var);
			V_14 = L_112;
			RuntimeObject* L_113 = V_3;
			String_t* L_114 = V_14;
			NullCheck(L_113);
			bool L_115;
			L_115 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::ContainsKey(!0) */, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var, L_113, L_114);
			if (!L_115)
			{
				goto IL_02db;
			}
		}

IL_02b5:
		{
			RuntimeObject* L_116 = V_3;
			String_t* L_117 = V_14;
			NullCheck(L_116);
			RuntimeObject * L_118;
			L_118 = InterfaceFuncInvoker1< RuntimeObject *, String_t* >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(!0) */, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var, L_116, L_117);
			MemberMap_tA722F3C527755D23AB14FC21BFE6A283F7C75D66 * L_119 = V_13;
			NullCheck(L_119);
			Type_t * L_120 = L_119->get_Type_1();
			RuntimeObject * L_121;
			L_121 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, Type_t * >::Invoke(8 /* System.Object Prime31.PocoJsonSerializerStrategy::deserializeObject(System.Object,System.Type) */, __this, L_118, L_120);
			V_15 = L_121;
			MemberMap_tA722F3C527755D23AB14FC21BFE6A283F7C75D66 * L_122 = V_13;
			NullCheck(L_122);
			SetHandler_tAE38CDA0AFD7619D49B7E3A9FE386955818B44E8 * L_123 = L_122->get_Setter_3();
			RuntimeObject * L_124 = V_0;
			RuntimeObject * L_125 = V_15;
			NullCheck(L_123);
			SetHandler_Invoke_m27CED7CF9E42DAA38B856402704B2245C2620983(L_123, L_124, L_125, /*hidden argument*/NULL);
		}

IL_02db:
		{
			RuntimeObject* L_126 = V_12;
			NullCheck(L_126);
			bool L_127;
			L_127 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_126);
			if (L_127)
			{
				goto IL_027c;
			}
		}

IL_02e7:
		{
			IL2CPP_LEAVE(0x2FB, FINALLY_02ec);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_02ec;
	}

FINALLY_02ec:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_128 = V_12;
			if (!L_128)
			{
				goto IL_02fa;
			}
		}

IL_02f3:
		{
			RuntimeObject* L_129 = V_12;
			NullCheck(L_129);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_129);
		}

IL_02fa:
		{
			IL2CPP_END_FINALLY(748)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(748)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2FB, IL_02fb)
	}

IL_02fb:
	{
		goto IL_043e;
	}

IL_0300:
	{
		RuntimeObject * L_130 = ___value0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_130, IList_1_t707982BD768B18C51D263C759F33BCDBDFA44901_il2cpp_TypeInfo_var)))
		{
			goto IL_043e;
		}
	}
	{
		RuntimeObject * L_131 = ___value0;
		V_16 = ((RuntimeObject*)Castclass((RuntimeObject*)L_131, IList_1_t707982BD768B18C51D263C759F33BCDBDFA44901_il2cpp_TypeInfo_var));
		V_17 = (RuntimeObject*)NULL;
		Type_t * L_132 = ___type1;
		NullCheck(L_132);
		bool L_133;
		L_133 = Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1(L_132, /*hidden argument*/NULL);
		if (!L_133)
		{
			goto IL_039e;
		}
	}
	{
		Type_t * L_134 = ___type1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_135 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_136 = L_135;
		RuntimeObject* L_137 = V_16;
		NullCheck(L_137);
		int32_t L_138;
		L_138 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, ICollection_1_t35488BE070734B4C5D136DC1A68CBC9CE507D488_il2cpp_TypeInfo_var, L_137);
		int32_t L_139 = L_138;
		RuntimeObject * L_140 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_139);
		NullCheck(L_136);
		ArrayElementTypeCheck (L_136, L_140);
		(L_136)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_140);
		RuntimeObject * L_141;
		L_141 = Activator_CreateInstance_mF3E09E8AC19EE563314B326117091D4B9CC918C1(L_134, L_136, /*hidden argument*/NULL);
		V_17 = ((RuntimeObject*)Castclass((RuntimeObject*)L_141, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
		V_18 = 0;
		RuntimeObject* L_142 = V_16;
		NullCheck(L_142);
		RuntimeObject* L_143;
		L_143 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D_il2cpp_TypeInfo_var, L_142);
		V_20 = L_143;
	}

IL_034f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0379;
		}

IL_0354:
		{
			RuntimeObject* L_144 = V_20;
			NullCheck(L_144);
			RuntimeObject * L_145;
			L_145 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E_il2cpp_TypeInfo_var, L_144);
			V_19 = L_145;
			RuntimeObject* L_146 = V_17;
			int32_t L_147 = V_18;
			int32_t L_148 = L_147;
			V_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_148, (int32_t)1));
			RuntimeObject * L_149 = V_19;
			Type_t * L_150 = ___type1;
			NullCheck(L_150);
			Type_t * L_151;
			L_151 = VirtFuncInvoker0< Type_t * >::Invoke(93 /* System.Type System.Type::GetElementType() */, L_150);
			RuntimeObject * L_152;
			L_152 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, Type_t * >::Invoke(8 /* System.Object Prime31.PocoJsonSerializerStrategy::deserializeObject(System.Object,System.Type) */, __this, L_149, L_151);
			NullCheck(L_146);
			InterfaceActionInvoker2< int32_t, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.IList::set_Item(System.Int32,System.Object) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_146, L_148, L_152);
		}

IL_0379:
		{
			RuntimeObject* L_153 = V_20;
			NullCheck(L_153);
			bool L_154;
			L_154 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_153);
			if (L_154)
			{
				goto IL_0354;
			}
		}

IL_0385:
		{
			IL2CPP_LEAVE(0x399, FINALLY_038a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_038a;
	}

FINALLY_038a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_155 = V_20;
			if (!L_155)
			{
				goto IL_0398;
			}
		}

IL_0391:
		{
			RuntimeObject* L_156 = V_20;
			NullCheck(L_156);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_156);
		}

IL_0398:
		{
			IL2CPP_END_FINALLY(906)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(906)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x399, IL_0399)
	}

IL_0399:
	{
		goto IL_043b;
	}

IL_039e:
	{
		Type_t * L_157 = ___type1;
		bool L_158;
		L_158 = ReflectionUtils_isTypeGenericeCollectionInterface_mD4EA08C38CAD70FC9036FE49344D2B220DCCDB0A(L_157, /*hidden argument*/NULL);
		if (L_158)
		{
			goto IL_03be;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_159 = { reinterpret_cast<intptr_t> (IList_tB15A9D6625D09661D6E47976BB626C703EC81910_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_160;
		L_160 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_159, /*hidden argument*/NULL);
		Type_t * L_161 = ___type1;
		NullCheck(L_160);
		bool L_162;
		L_162 = VirtFuncInvoker1< bool, Type_t * >::Invoke(104 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_160, L_161);
		if (!L_162)
		{
			goto IL_043b;
		}
	}

IL_03be:
	{
		Type_t * L_163 = ___type1;
		NullCheck(L_163);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_164;
		L_164 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(94 /* System.Type[] System.Type::GetGenericArguments() */, L_163);
		NullCheck(L_164);
		int32_t L_165 = 0;
		Type_t * L_166 = (L_164)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		V_21 = L_166;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_167 = { reinterpret_cast<intptr_t> (List_1_t2F377D93C74B8090B226DCC307AB5BB600181453_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_168;
		L_168 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_167, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_169 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_170 = L_169;
		Type_t * L_171 = V_21;
		NullCheck(L_170);
		ArrayElementTypeCheck (L_170, L_171);
		(L_170)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_171);
		NullCheck(L_168);
		Type_t * L_172;
		L_172 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(90 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_168, L_170);
		V_22 = L_172;
		Type_t * L_173 = V_22;
		IL2CPP_RUNTIME_CLASS_INIT(CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0_il2cpp_TypeInfo_var);
		RuntimeObject * L_174;
		L_174 = CacheResolver_getNewInstance_mD97DB880BC39BE885D0637FCB1028B4C99FA1900(L_173, /*hidden argument*/NULL);
		V_17 = ((RuntimeObject*)Castclass((RuntimeObject*)L_174, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
		RuntimeObject* L_175 = V_16;
		NullCheck(L_175);
		RuntimeObject* L_176;
		L_176 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D_il2cpp_TypeInfo_var, L_175);
		V_24 = L_176;
	}

IL_03fb:
	try
	{ // begin try (depth: 1)
		{
			goto IL_041b;
		}

IL_0400:
		{
			RuntimeObject* L_177 = V_24;
			NullCheck(L_177);
			RuntimeObject * L_178;
			L_178 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E_il2cpp_TypeInfo_var, L_177);
			V_23 = L_178;
			RuntimeObject* L_179 = V_17;
			RuntimeObject * L_180 = V_23;
			Type_t * L_181 = V_21;
			RuntimeObject * L_182;
			L_182 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, Type_t * >::Invoke(8 /* System.Object Prime31.PocoJsonSerializerStrategy::deserializeObject(System.Object,System.Type) */, __this, L_180, L_181);
			NullCheck(L_179);
			int32_t L_183;
			L_183 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_179, L_182);
		}

IL_041b:
		{
			RuntimeObject* L_184 = V_24;
			NullCheck(L_184);
			bool L_185;
			L_185 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_184);
			if (L_185)
			{
				goto IL_0400;
			}
		}

IL_0427:
		{
			IL2CPP_LEAVE(0x43B, FINALLY_042c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_042c;
	}

FINALLY_042c:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_186 = V_24;
			if (!L_186)
			{
				goto IL_043a;
			}
		}

IL_0433:
		{
			RuntimeObject* L_187 = V_24;
			NullCheck(L_187);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_187);
		}

IL_043a:
		{
			IL2CPP_END_FINALLY(1068)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1068)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x43B, IL_043b)
	}

IL_043b:
	{
		RuntimeObject* L_188 = V_17;
		V_0 = L_188;
	}

IL_043e:
	{
		RuntimeObject * L_189 = V_0;
		return L_189;
	}

IL_0440:
	{
		Type_t * L_190 = ___type1;
		bool L_191;
		L_191 = ReflectionUtils_isNullableType_m0BDD5CBDB31E880D6745CCD3F1D3B0355886CB66(L_190, /*hidden argument*/NULL);
		if (!L_191)
		{
			goto IL_0453;
		}
	}
	{
		RuntimeObject * L_192 = V_0;
		Type_t * L_193 = ___type1;
		RuntimeObject * L_194;
		L_194 = ReflectionUtils_toNullableType_m3E269163D2F43F039CBDE85F8A3D930FD01D076B(L_192, L_193, /*hidden argument*/NULL);
		return L_194;
	}

IL_0453:
	{
		RuntimeObject * L_195 = V_0;
		return L_195;
	}
}
// System.Object Prime31.PocoJsonSerializerStrategy::serializeEnum(System.Enum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PocoJsonSerializerStrategy_serializeEnum_m871EE1511AEEFFE54838F65ABA4755ADAE16153B (PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C * __this, Enum_t23B90B40F60E677A8025267341651C94AE079CDA * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Enum_t23B90B40F60E677A8025267341651C94AE079CDA * L_0 = ___p0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_1;
		L_1 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Convert_ToDouble_m10322320EC0B380FE4C1EB5DBB24AE9F242B7CC8(L_0, L_1, /*hidden argument*/NULL);
		double L_3 = L_2;
		RuntimeObject * L_4 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// System.Boolean Prime31.PocoJsonSerializerStrategy::trySerializeKnownTypes(System.Object,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PocoJsonSerializerStrategy_trySerializeKnownTypes_m9D53B735E9E1019DCB5CCC5F99E622121451D08F (PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C * __this, RuntimeObject * ___input0, RuntimeObject ** ___output1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_1;
	memset((&V_1), 0, sizeof(V_1));
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Guid_t  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		V_0 = (bool)1;
		RuntimeObject * L_0 = ___input0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var)))
		{
			goto IL_0036;
		}
	}
	{
		RuntimeObject ** L_1 = ___output1;
		RuntimeObject * L_2 = ___input0;
		V_1 = ((*(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)UnBox(L_2, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var))));
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3;
		L_3 = DateTime_ToUniversalTime_mB5FB50E0AD0D9A2A917893A1655F51B174C7A6B3((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = ((PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C_StaticFields*)il2cpp_codegen_static_fields_for(PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C_il2cpp_TypeInfo_var))->get_Iso8601Format_1();
		NullCheck(L_4);
		int32_t L_5 = 0;
		String_t* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_7;
		L_7 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_8;
		L_8 = DateTime_ToString_mE44033D2750D165DED2A17A927381872EF9FC986((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), L_6, L_7, /*hidden argument*/NULL);
		*((RuntimeObject **)L_1) = (RuntimeObject *)L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_1, (void*)(RuntimeObject *)L_8);
		goto IL_0096;
	}

IL_0036:
	{
		RuntimeObject * L_9 = ___input0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_9, Guid_t_il2cpp_TypeInfo_var)))
		{
			goto IL_005b;
		}
	}
	{
		RuntimeObject ** L_10 = ___output1;
		RuntimeObject * L_11 = ___input0;
		V_3 = ((*(Guid_t *)((Guid_t *)UnBox(L_11, Guid_t_il2cpp_TypeInfo_var))));
		String_t* L_12;
		L_12 = Guid_ToString_mB4CBA020EEFAC3F6E828BB8A15E813F3680CEFAB((Guid_t *)(&V_3), _stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158, /*hidden argument*/NULL);
		*((RuntimeObject **)L_10) = (RuntimeObject *)L_12;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_10, (void*)(RuntimeObject *)L_12);
		goto IL_0096;
	}

IL_005b:
	{
		RuntimeObject * L_13 = ___input0;
		if (!((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)IsInstClass((RuntimeObject*)L_13, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var)))
		{
			goto IL_0073;
		}
	}
	{
		RuntimeObject ** L_14 = ___output1;
		RuntimeObject * L_15 = ___input0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		*((RuntimeObject **)L_14) = (RuntimeObject *)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_14, (void*)(RuntimeObject *)L_16);
		goto IL_0096;
	}

IL_0073:
	{
		RuntimeObject * L_17 = ___input0;
		if (!((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)IsInstClass((RuntimeObject*)L_17, Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var)))
		{
			goto IL_0091;
		}
	}
	{
		RuntimeObject ** L_18 = ___output1;
		RuntimeObject * L_19 = ___input0;
		RuntimeObject * L_20;
		L_20 = VirtFuncInvoker1< RuntimeObject *, Enum_t23B90B40F60E677A8025267341651C94AE079CDA * >::Invoke(9 /* System.Object Prime31.PocoJsonSerializerStrategy::serializeEnum(System.Enum) */, __this, ((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)CastclassClass((RuntimeObject*)L_19, Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var)));
		*((RuntimeObject **)L_18) = (RuntimeObject *)L_20;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_18, (void*)(RuntimeObject *)L_20);
		goto IL_0096;
	}

IL_0091:
	{
		V_0 = (bool)0;
		RuntimeObject ** L_21 = ___output1;
		*((RuntimeObject **)L_21) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_21, (void*)(RuntimeObject *)NULL);
	}

IL_0096:
	{
		bool L_22 = V_0;
		return L_22;
	}
}
// System.Boolean Prime31.PocoJsonSerializerStrategy::trySerializeUnknownTypes(System.Object,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PocoJsonSerializerStrategy_trySerializeUnknownTypes_m8D03BB9DE4FCC4F2B725CFC80546D794B956C031 (PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C * __this, RuntimeObject * ___input0, RuntimeObject ** ___output1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t13315165413127F13361B2E10B83C6CD018EE37B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t3BFE094F9029834331827285E25845AAB69816A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m71EC8713848A54055B4FD71001B1EFBA00085387_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mA7D524A2849160FE60D9B60969D35C565B741C69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDictionary_2_GetEnumerator_mB73E6DB5CCF467A5A9B534B188D0E63D031418CC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 * V_2 = NULL;
	KeyValuePair_2_tFD5EE2073212402F9FBA969914B0938321EEC655  V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject ** L_0 = ___output1;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		RuntimeObject * L_1 = ___input0;
		NullCheck(L_1);
		Type_t * L_2;
		L_2 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Type_t * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_3);
		if (L_4)
		{
			goto IL_0017;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		JsonObject_t3BFE094F9029834331827285E25845AAB69816A6 * L_5 = (JsonObject_t3BFE094F9029834331827285E25845AAB69816A6 *)il2cpp_codegen_object_new(JsonObject_t3BFE094F9029834331827285E25845AAB69816A6_il2cpp_TypeInfo_var);
		JsonObject__ctor_mB832EDD98B003BF10120534B0393596B82C75823(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0 * L_6 = __this->get_cacheResolver_0();
		Type_t * L_7 = V_0;
		NullCheck(L_6);
		SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 * L_8;
		L_8 = CacheResolver_loadMaps_m3DB7ABA05C03FA632AEDE962FF742F108790D156(L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		SafeDictionary_2_t1223F129E40904305BE5B97712CAEC89B1196031 * L_9 = V_2;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = SafeDictionary_2_GetEnumerator_mB73E6DB5CCF467A5A9B534B188D0E63D031418CC(L_9, /*hidden argument*/SafeDictionary_2_GetEnumerator_mB73E6DB5CCF467A5A9B534B188D0E63D031418CC_RuntimeMethod_var);
		V_4 = L_10;
	}

IL_0032:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006f;
		}

IL_0037:
		{
			RuntimeObject* L_11 = V_4;
			NullCheck(L_11);
			KeyValuePair_2_tFD5EE2073212402F9FBA969914B0938321EEC655  L_12;
			L_12 = InterfaceFuncInvoker0< KeyValuePair_2_tFD5EE2073212402F9FBA969914B0938321EEC655  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Prime31.Reflection.CacheResolver/MemberMap>>::get_Current() */, IEnumerator_1_t13315165413127F13361B2E10B83C6CD018EE37B_il2cpp_TypeInfo_var, L_11);
			V_3 = L_12;
			MemberMap_tA722F3C527755D23AB14FC21BFE6A283F7C75D66 * L_13;
			L_13 = KeyValuePair_2_get_Value_mA7D524A2849160FE60D9B60969D35C565B741C69_inline((KeyValuePair_2_tFD5EE2073212402F9FBA969914B0938321EEC655 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_mA7D524A2849160FE60D9B60969D35C565B741C69_RuntimeMethod_var);
			NullCheck(L_13);
			GetHandler_tAE31D3C378B82D9F3EC44C4BD9691E9E1836ED73 * L_14 = L_13->get_Getter_2();
			if (!L_14)
			{
				goto IL_006f;
			}
		}

IL_0050:
		{
			RuntimeObject* L_15 = V_1;
			String_t* L_16;
			L_16 = KeyValuePair_2_get_Key_m71EC8713848A54055B4FD71001B1EFBA00085387_inline((KeyValuePair_2_tFD5EE2073212402F9FBA969914B0938321EEC655 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m71EC8713848A54055B4FD71001B1EFBA00085387_RuntimeMethod_var);
			MemberMap_tA722F3C527755D23AB14FC21BFE6A283F7C75D66 * L_17;
			L_17 = KeyValuePair_2_get_Value_mA7D524A2849160FE60D9B60969D35C565B741C69_inline((KeyValuePair_2_tFD5EE2073212402F9FBA969914B0938321EEC655 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_mA7D524A2849160FE60D9B60969D35C565B741C69_RuntimeMethod_var);
			NullCheck(L_17);
			GetHandler_tAE31D3C378B82D9F3EC44C4BD9691E9E1836ED73 * L_18 = L_17->get_Getter_2();
			RuntimeObject * L_19 = ___input0;
			NullCheck(L_18);
			RuntimeObject * L_20;
			L_20 = GetHandler_Invoke_m2680584633B9F1FC16B76F6E4E8ECF0A323C5440(L_18, L_19, /*hidden argument*/NULL);
			NullCheck(L_15);
			InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::Add(!0,!1) */, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var, L_15, L_16, L_20);
		}

IL_006f:
		{
			RuntimeObject* L_21 = V_4;
			NullCheck(L_21);
			bool L_22;
			L_22 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_21);
			if (L_22)
			{
				goto IL_0037;
			}
		}

IL_007b:
		{
			IL2CPP_LEAVE(0x8F, FINALLY_0080);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0080;
	}

FINALLY_0080:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_23 = V_4;
			if (!L_23)
			{
				goto IL_008e;
			}
		}

IL_0087:
		{
			RuntimeObject* L_24 = V_4;
			NullCheck(L_24);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_24);
		}

IL_008e:
		{
			IL2CPP_END_FINALLY(128)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(128)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8F, IL_008f)
	}

IL_008f:
	{
		RuntimeObject ** L_25 = ___output1;
		RuntimeObject* L_26 = V_1;
		*((RuntimeObject **)L_25) = (RuntimeObject *)L_26;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_25, (void*)(RuntimeObject *)L_26);
		return (bool)1;
	}
}
// System.Void Prime31.PocoJsonSerializerStrategy::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PocoJsonSerializerStrategy__cctor_mAC48E2D656511D03060F40771D4B04E36B6416EE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15928414DFDFC791200FB785BF9E4E927AC83B45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB304CA91E8BA90C1A8E43844C5BF56C75401E8FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC10C58FC906F34696E42F495EDDB1508F49079D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralB304CA91E8BA90C1A8E43844C5BF56C75401E8FE);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralB304CA91E8BA90C1A8E43844C5BF56C75401E8FE);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralC10C58FC906F34696E42F495EDDB1508F49079D4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC10C58FC906F34696E42F495EDDB1508F49079D4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral15928414DFDFC791200FB785BF9E4E927AC83B45);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral15928414DFDFC791200FB785BF9E4E927AC83B45);
		((PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C_StaticFields*)il2cpp_codegen_static_fields_for(PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C_il2cpp_TypeInfo_var))->set_Iso8601Format_1(L_3);
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
// System.Boolean Prime31.Reflection.ReflectionUtils::isTypeGenericeCollectionInterface(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtils_isTypeGenericeCollectionInterface_mD4EA08C38CAD70FC9036FE49344D2B220DCCDB0A (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tEB9B83728C30BC3B050B777DF03B955050A4DDC3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t2DA210D3B033E1BEBFC81C153FA1C67749C6D264_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCFBEF0BE66D2411D5AEA86FDF1C1E71F013AA724_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	int32_t G_B6_0 = 0;
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(70 /* System.Boolean System.Type::get_IsGenericType() */, L_0);
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		Type_t * L_2 = ___type0;
		NullCheck(L_2);
		Type_t * L_3;
		L_3 = VirtFuncInvoker0< Type_t * >::Invoke(95 /* System.Type System.Type::GetGenericTypeDefinition() */, L_2);
		V_0 = L_3;
		Type_t * L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (IList_1_tCFBEF0BE66D2411D5AEA86FDF1C1E71F013AA724_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_4) == ((RuntimeObject*)(Type_t *)L_6)))
		{
			goto IL_0043;
		}
	}
	{
		Type_t * L_7 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_8 = { reinterpret_cast<intptr_t> (ICollection_1_tEB9B83728C30BC3B050B777DF03B955050A4DDC3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9;
		L_9 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_8, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_7) == ((RuntimeObject*)(Type_t *)L_9)))
		{
			goto IL_0043;
		}
	}
	{
		Type_t * L_10 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (IEnumerable_1_t2DA210D3B033E1BEBFC81C153FA1C67749C6D264_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		G_B6_0 = ((((RuntimeObject*)(Type_t *)L_10) == ((RuntimeObject*)(Type_t *)L_12))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B6_0 = 1;
	}

IL_0044:
	{
		return (bool)G_B6_0;
	}
}
// System.Boolean Prime31.Reflection.ReflectionUtils::isTypeDictionary(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtils_isTypeDictionary_m078707414014440D422F0EDF9F29CFFEC2296F2C (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t2C2074B0821BAD300B43C061B5CED76258A70C1E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		Type_t * L_2 = ___type0;
		NullCheck(L_1);
		bool L_3;
		L_3 = VirtFuncInvoker1< bool, Type_t * >::Invoke(104 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_2);
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		return (bool)1;
	}

IL_0017:
	{
		Type_t * L_4 = ___type0;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtFuncInvoker0< bool >::Invoke(70 /* System.Boolean System.Type::get_IsGenericType() */, L_4);
		if (L_5)
		{
			goto IL_0024;
		}
	}
	{
		return (bool)0;
	}

IL_0024:
	{
		Type_t * L_6 = ___type0;
		NullCheck(L_6);
		Type_t * L_7;
		L_7 = VirtFuncInvoker0< Type_t * >::Invoke(95 /* System.Type System.Type::GetGenericTypeDefinition() */, L_6);
		V_0 = L_7;
		Type_t * L_8 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_9 = { reinterpret_cast<intptr_t> (IDictionary_2_t2C2074B0821BAD300B43C061B5CED76258A70C1E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10;
		L_10 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_9, /*hidden argument*/NULL);
		return (bool)((((RuntimeObject*)(Type_t *)L_8) == ((RuntimeObject*)(Type_t *)L_10))? 1 : 0);
	}
}
// System.Boolean Prime31.Reflection.ReflectionUtils::isNullableType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtils_isNullableType_m0BDD5CBDB31E880D6745CCD3F1D3B0355886CB66 (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t4EDBE007AFFA0315135B9A508DACA62D3C201867_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(70 /* System.Boolean System.Type::get_IsGenericType() */, L_0);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		Type_t * L_2 = ___type0;
		NullCheck(L_2);
		Type_t * L_3;
		L_3 = VirtFuncInvoker0< Type_t * >::Invoke(95 /* System.Type System.Type::GetGenericTypeDefinition() */, L_2);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (Nullable_1_t4EDBE007AFFA0315135B9A508DACA62D3C201867_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_4, /*hidden argument*/NULL);
		G_B3_0 = ((((RuntimeObject*)(Type_t *)L_3) == ((RuntimeObject*)(Type_t *)L_5))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		return (bool)G_B3_0;
	}
}
// System.Object Prime31.Reflection.ReflectionUtils::toNullableType(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ReflectionUtils_toNullableType_m3E269163D2F43F039CBDE85F8A3D930FD01D076B (RuntimeObject * ___obj0, Type_t * ___nullableType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * G_B3_0 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = NULL;
		goto IL_001d;
	}

IL_000c:
	{
		RuntimeObject * L_1 = ___obj0;
		Type_t * L_2 = ___nullableType1;
		Type_t * L_3;
		L_3 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_4;
		L_4 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		RuntimeObject * L_5;
		L_5 = Convert_ChangeType_m6AA3DE3E595A2AABA33B5046BD6CF2AB46466C05(L_1, L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_001d:
	{
		return G_B3_0;
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
// System.Void Prime31.Reflection.SetHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetHandler__ctor_m3AD3F72FC3EAE75205F5A316FF31872C2282AC98 (SetHandler_tAE38CDA0AFD7619D49B7E3A9FE386955818B44E8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Prime31.Reflection.SetHandler::Invoke(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetHandler_Invoke_m27CED7CF9E42DAA38B856402704B2245C2620983 (SetHandler_tAE38CDA0AFD7619D49B7E3A9FE386955818B44E8 * __this, RuntimeObject * ___source0, RuntimeObject * ___value1, const RuntimeMethod* method)
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___value1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___source0, ___value1);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___source0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___source0, ___value1);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___source0, ___value1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___value1, targetMethod);
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
						GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___source0, ___value1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___source0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___value1);
					else
						VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___value1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___value1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___value1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Prime31.Reflection.SetHandler::BeginInvoke(System.Object,System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SetHandler_BeginInvoke_m7212B41F82F1C33D9DD1050DEB758AAC7674C36C (SetHandler_tAE38CDA0AFD7619D49B7E3A9FE386955818B44E8 * __this, RuntimeObject * ___source0, RuntimeObject * ___value1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___source0;
	__d_args[1] = ___value1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Prime31.Reflection.SetHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetHandler_EndInvoke_m89BB87F1F99E9B3F1F6FD7671DF8DAD2775F95F3 (SetHandler_tAE38CDA0AFD7619D49B7E3A9FE386955818B44E8 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.String Prime31.SimpleJson::encode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleJson_encode_m732D5459CB1F5F4A801393BFB4AAECD245D00611 (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	bool V_1 = false;
	String_t* G_B3_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E(L_0, ((int32_t)2000), /*hidden argument*/NULL);
		V_0 = L_0;
		RuntimeObject* L_1;
		L_1 = SimpleJson_get_currentJsonSerializerStrategy_m3E1A40151EED8A1D224C8B43F1ECBACB0A38C677(/*hidden argument*/NULL);
		RuntimeObject * L_2 = ___obj0;
		StringBuilder_t * L_3 = V_0;
		bool L_4;
		L_4 = SimpleJson_serializeValue_mA2B828731C901B93EABF7F2D3117E19A6B4B643A(L_1, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		StringBuilder_t * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		G_B3_0 = L_7;
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = ((String_t*)(NULL));
	}

IL_002a:
	{
		return G_B3_0;
	}
}
// System.Boolean Prime31.SimpleJson::tryDeserializeObject(System.String,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleJson_tryDeserializeObject_m02C21CEF0D463542471EAE922E83AB7571B658B1 (String_t* ___json0, RuntimeObject ** ___obj1, const RuntimeMethod* method)
{
	bool V_0 = false;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_1 = NULL;
	int32_t V_2 = 0;
	{
		V_0 = (bool)1;
		String_t* L_0 = ___json0;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_1 = ___json0;
		NullCheck(L_1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2;
		L_2 = String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		V_2 = 0;
		RuntimeObject ** L_3 = ___obj1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = V_1;
		RuntimeObject * L_5;
		L_5 = SimpleJson_parseValue_m4C617979A2990AD31D2782923EF51DC524B5F043(L_4, (int32_t*)(&V_2), (bool*)(&V_0), /*hidden argument*/NULL);
		*((RuntimeObject **)L_3) = (RuntimeObject *)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_3, (void*)(RuntimeObject *)L_5);
		goto IL_0025;
	}

IL_0022:
	{
		RuntimeObject ** L_6 = ___obj1;
		*((RuntimeObject **)L_6) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_6, (void*)(RuntimeObject *)NULL);
	}

IL_0025:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Object Prime31.SimpleJson::decode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SimpleJson_decode_m6309943F6A7579B3456A477370567D17064D19C6 (String_t* ___json0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79931F9913E513F1EBF6133F0FD12878DE7E4C87);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		String_t* L_0 = ___json0;
		bool L_1;
		L_1 = SimpleJson_tryDeserializeObject_m02C21CEF0D463542471EAE922E83AB7571B658B1(L_0, (RuntimeObject **)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject * L_2 = V_0;
		return L_2;
	}

IL_000f:
	{
		String_t* L_3 = ___json0;
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral79931F9913E513F1EBF6133F0FD12878DE7E4C87, L_3, /*hidden argument*/NULL);
		Utils_logObject_m9DE5038BEEEC42EE1DB1D72499FBB5E374C2E8C2(L_4, /*hidden argument*/NULL);
		return NULL;
	}
}
// System.Object Prime31.SimpleJson::decode(System.String,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SimpleJson_decode_m12F134A3288A8E0D96012E4DF6F8BB8EE2D4837F (String_t* ___json0, Type_t * ___type1, String_t* ___rootElement2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJsonSerializerStrategy_t07ABC231E495885F45C84676A5E6527E97BC2876_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t3BFE094F9029834331827285E25845AAB69816A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral304F91B6204F99A8E6DFDFFD72CD760D50B73E7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEABA666EAC0BA02511E9144602278DBC500C297);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	JsonObject_t3BFE094F9029834331827285E25845AAB69816A6 * V_1 = NULL;
	{
		String_t* L_0 = ___json0;
		RuntimeObject * L_1;
		L_1 = SimpleJson_decode_m6309943F6A7579B3456A477370567D17064D19C6(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Type_t * L_2 = ___type1;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject * L_4 = V_0;
		NullCheck(L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_4, /*hidden argument*/NULL);
		Type_t * L_6 = ___type1;
		NullCheck(L_5);
		bool L_7;
		L_7 = VirtFuncInvoker1< bool, Type_t * >::Invoke(104 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_5, L_6);
		if (!L_7)
		{
			goto IL_0026;
		}
	}

IL_0024:
	{
		RuntimeObject * L_8 = V_0;
		return L_8;
	}

IL_0026:
	{
		String_t* L_9 = ___rootElement2;
		if (!L_9)
		{
			goto IL_0082;
		}
	}
	{
		RuntimeObject * L_10 = V_0;
		if (!((JsonObject_t3BFE094F9029834331827285E25845AAB69816A6 *)IsInstClass((RuntimeObject*)L_10, JsonObject_t3BFE094F9029834331827285E25845AAB69816A6_il2cpp_TypeInfo_var)))
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject * L_11 = V_0;
		V_1 = ((JsonObject_t3BFE094F9029834331827285E25845AAB69816A6 *)IsInstClass((RuntimeObject*)L_11, JsonObject_t3BFE094F9029834331827285E25845AAB69816A6_il2cpp_TypeInfo_var));
		JsonObject_t3BFE094F9029834331827285E25845AAB69816A6 * L_12 = V_1;
		String_t* L_13 = ___rootElement2;
		NullCheck(L_12);
		bool L_14;
		L_14 = Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710(L_12, L_13, /*hidden argument*/Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var);
		if (!L_14)
		{
			goto IL_0057;
		}
	}
	{
		JsonObject_t3BFE094F9029834331827285E25845AAB69816A6 * L_15 = V_1;
		String_t* L_16 = ___rootElement2;
		NullCheck(L_15);
		RuntimeObject * L_17;
		L_17 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_15, L_16, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		V_0 = L_17;
		goto IL_0067;
	}

IL_0057:
	{
		String_t* L_18 = ___rootElement2;
		String_t* L_19;
		L_19 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralEEABA666EAC0BA02511E9144602278DBC500C297, L_18, /*hidden argument*/NULL);
		Utils_logObject_m9DE5038BEEEC42EE1DB1D72499FBB5E374C2E8C2(L_19, /*hidden argument*/NULL);
	}

IL_0067:
	{
		goto IL_0082;
	}

IL_006c:
	{
		String_t* L_20 = ___rootElement2;
		RuntimeObject * L_21 = V_0;
		NullCheck(L_21);
		Type_t * L_22;
		L_22 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_21, /*hidden argument*/NULL);
		String_t* L_23;
		L_23 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral304F91B6204F99A8E6DFDFFD72CD760D50B73E7D, L_20, L_22, /*hidden argument*/NULL);
		Utils_logObject_m9DE5038BEEEC42EE1DB1D72499FBB5E374C2E8C2(L_23, /*hidden argument*/NULL);
	}

IL_0082:
	{
		RuntimeObject* L_24;
		L_24 = SimpleJson_get_currentJsonSerializerStrategy_m3E1A40151EED8A1D224C8B43F1ECBACB0A38C677(/*hidden argument*/NULL);
		RuntimeObject * L_25 = V_0;
		Type_t * L_26 = ___type1;
		NullCheck(L_24);
		RuntimeObject * L_27;
		L_27 = InterfaceFuncInvoker2< RuntimeObject *, RuntimeObject *, Type_t * >::Invoke(1 /* System.Object Prime31.IJsonSerializerStrategy::deserializeObject(System.Object,System.Type) */, IJsonSerializerStrategy_t07ABC231E495885F45C84676A5E6527E97BC2876_il2cpp_TypeInfo_var, L_24, L_25, L_26);
		return L_27;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Prime31.SimpleJson::parseObject(System.Char[],System.Int32&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SimpleJson_parseObject_m01840B8B5B95C5E70C46DCE4ECAA900AAB1F03DC (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t3BFE094F9029834331827285E25845AAB69816A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	{
		JsonObject_t3BFE094F9029834331827285E25845AAB69816A6 * L_0 = (JsonObject_t3BFE094F9029834331827285E25845AAB69816A6 *)il2cpp_codegen_object_new(JsonObject_t3BFE094F9029834331827285E25845AAB69816A6_il2cpp_TypeInfo_var);
		JsonObject__ctor_mB832EDD98B003BF10120534B0393596B82C75823(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___json0;
		int32_t* L_2 = ___index1;
		int32_t L_3;
		L_3 = SimpleJson_nextToken_m55D2CBDE043890FF31ED75C87F82C76A93903D9E(L_1, (int32_t*)L_2, /*hidden argument*/NULL);
		V_2 = (bool)0;
		goto IL_0096;
	}

IL_0015:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = ___json0;
		int32_t* L_5 = ___index1;
		int32_t L_6 = *((int32_t*)L_5);
		int32_t L_7;
		L_7 = SimpleJson_lookAhead_m95010D6F902C78FE86DB506C5834FED6AB13AC06(L_4, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		int32_t L_8 = V_1;
		if (L_8)
		{
			goto IL_0029;
		}
	}
	{
		bool* L_9 = ___success2;
		*((int8_t*)L_9) = (int8_t)0;
		return (RuntimeObject*)NULL;
	}

IL_0029:
	{
		int32_t L_10 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)6))))
		{
			goto IL_003d;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_11 = ___json0;
		int32_t* L_12 = ___index1;
		int32_t L_13;
		L_13 = SimpleJson_nextToken_m55D2CBDE043890FF31ED75C87F82C76A93903D9E(L_11, (int32_t*)L_12, /*hidden argument*/NULL);
		goto IL_0096;
	}

IL_003d:
	{
		int32_t L_14 = V_1;
		if ((!(((uint32_t)L_14) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_15 = ___json0;
		int32_t* L_16 = ___index1;
		int32_t L_17;
		L_17 = SimpleJson_nextToken_m55D2CBDE043890FF31ED75C87F82C76A93903D9E(L_15, (int32_t*)L_16, /*hidden argument*/NULL);
		RuntimeObject* L_18 = V_0;
		return L_18;
	}

IL_004e:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_19 = ___json0;
		int32_t* L_20 = ___index1;
		bool* L_21 = ___success2;
		String_t* L_22;
		L_22 = SimpleJson_parseString_m14B9680807780CBC3D6F557C3D67590C3F2D8B46(L_19, (int32_t*)L_20, (bool*)L_21, /*hidden argument*/NULL);
		V_3 = L_22;
		bool* L_23 = ___success2;
		int32_t L_24 = *((int8_t*)L_23);
		if (L_24)
		{
			goto IL_0063;
		}
	}
	{
		bool* L_25 = ___success2;
		*((int8_t*)L_25) = (int8_t)0;
		return (RuntimeObject*)NULL;
	}

IL_0063:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_26 = ___json0;
		int32_t* L_27 = ___index1;
		int32_t L_28;
		L_28 = SimpleJson_nextToken_m55D2CBDE043890FF31ED75C87F82C76A93903D9E(L_26, (int32_t*)L_27, /*hidden argument*/NULL);
		V_1 = L_28;
		int32_t L_29 = V_1;
		if ((((int32_t)L_29) == ((int32_t)5)))
		{
			goto IL_0077;
		}
	}
	{
		bool* L_30 = ___success2;
		*((int8_t*)L_30) = (int8_t)0;
		return (RuntimeObject*)NULL;
	}

IL_0077:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_31 = ___json0;
		int32_t* L_32 = ___index1;
		bool* L_33 = ___success2;
		RuntimeObject * L_34;
		L_34 = SimpleJson_parseValue_m4C617979A2990AD31D2782923EF51DC524B5F043(L_31, (int32_t*)L_32, (bool*)L_33, /*hidden argument*/NULL);
		V_4 = L_34;
		bool* L_35 = ___success2;
		int32_t L_36 = *((int8_t*)L_35);
		if (L_36)
		{
			goto IL_008d;
		}
	}
	{
		bool* L_37 = ___success2;
		*((int8_t*)L_37) = (int8_t)0;
		return (RuntimeObject*)NULL;
	}

IL_008d:
	{
		RuntimeObject* L_38 = V_0;
		String_t* L_39 = V_3;
		RuntimeObject * L_40 = V_4;
		NullCheck(L_38);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(!0,!1) */, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var, L_38, L_39, L_40);
	}

IL_0096:
	{
		bool L_41 = V_2;
		if (!L_41)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_42 = V_0;
		return L_42;
	}
}
// Prime31.JsonArray Prime31.SimpleJson::parseArray(System.Char[],System.Int32&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonArray_tA3865B4DBA65F47D2EBA6C1A04041AC601AAB754 * SimpleJson_parseArray_m686317AA55B7B7A56DB6A6D506C3896CE33430C4 (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tA3865B4DBA65F47D2EBA6C1A04041AC601AAB754_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonArray_tA3865B4DBA65F47D2EBA6C1A04041AC601AAB754 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	{
		JsonArray_tA3865B4DBA65F47D2EBA6C1A04041AC601AAB754 * L_0 = (JsonArray_tA3865B4DBA65F47D2EBA6C1A04041AC601AAB754 *)il2cpp_codegen_object_new(JsonArray_tA3865B4DBA65F47D2EBA6C1A04041AC601AAB754_il2cpp_TypeInfo_var);
		JsonArray__ctor_m39A2948796E8CD06610B118CCBCB929B58BB1ABB(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___json0;
		int32_t* L_2 = ___index1;
		int32_t L_3;
		L_3 = SimpleJson_nextToken_m55D2CBDE043890FF31ED75C87F82C76A93903D9E(L_1, (int32_t*)L_2, /*hidden argument*/NULL);
		V_1 = (bool)0;
		goto IL_006a;
	}

IL_0015:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = ___json0;
		int32_t* L_5 = ___index1;
		int32_t L_6 = *((int32_t*)L_5);
		int32_t L_7;
		L_7 = SimpleJson_lookAhead_m95010D6F902C78FE86DB506C5834FED6AB13AC06(L_4, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		int32_t L_8 = V_2;
		if (L_8)
		{
			goto IL_0029;
		}
	}
	{
		bool* L_9 = ___success2;
		*((int8_t*)L_9) = (int8_t)0;
		return (JsonArray_tA3865B4DBA65F47D2EBA6C1A04041AC601AAB754 *)NULL;
	}

IL_0029:
	{
		int32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)6))))
		{
			goto IL_003d;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_11 = ___json0;
		int32_t* L_12 = ___index1;
		int32_t L_13;
		L_13 = SimpleJson_nextToken_m55D2CBDE043890FF31ED75C87F82C76A93903D9E(L_11, (int32_t*)L_12, /*hidden argument*/NULL);
		goto IL_006a;
	}

IL_003d:
	{
		int32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) == ((uint32_t)4))))
		{
			goto IL_0051;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_15 = ___json0;
		int32_t* L_16 = ___index1;
		int32_t L_17;
		L_17 = SimpleJson_nextToken_m55D2CBDE043890FF31ED75C87F82C76A93903D9E(L_15, (int32_t*)L_16, /*hidden argument*/NULL);
		goto IL_0070;
	}

IL_0051:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_18 = ___json0;
		int32_t* L_19 = ___index1;
		bool* L_20 = ___success2;
		RuntimeObject * L_21;
		L_21 = SimpleJson_parseValue_m4C617979A2990AD31D2782923EF51DC524B5F043(L_18, (int32_t*)L_19, (bool*)L_20, /*hidden argument*/NULL);
		V_3 = L_21;
		bool* L_22 = ___success2;
		int32_t L_23 = *((int8_t*)L_22);
		if (L_23)
		{
			goto IL_0063;
		}
	}
	{
		return (JsonArray_tA3865B4DBA65F47D2EBA6C1A04041AC601AAB754 *)NULL;
	}

IL_0063:
	{
		JsonArray_tA3865B4DBA65F47D2EBA6C1A04041AC601AAB754 * L_24 = V_0;
		RuntimeObject * L_25 = V_3;
		NullCheck(L_24);
		List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E(L_24, L_25, /*hidden argument*/List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
	}

IL_006a:
	{
		bool L_26 = V_1;
		if (!L_26)
		{
			goto IL_0015;
		}
	}

IL_0070:
	{
		JsonArray_tA3865B4DBA65F47D2EBA6C1A04041AC601AAB754 * L_27 = V_0;
		return L_27;
	}
}
// System.Object Prime31.SimpleJson::parseValue(System.Char[],System.Int32&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SimpleJson_parseValue_m4C617979A2990AD31D2782923EF51DC524B5F043 (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		int32_t L_2 = *((int32_t*)L_1);
		int32_t L_3;
		L_3 = SimpleJson_lookAhead_m95010D6F902C78FE86DB506C5834FED6AB13AC06(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0090;
			}
			case 1:
			{
				goto IL_0056;
			}
			case 2:
			{
				goto IL_0095;
			}
			case 3:
			{
				goto IL_005f;
			}
			case 4:
			{
				goto IL_0095;
			}
			case 5:
			{
				goto IL_0095;
			}
			case 6:
			{
				goto IL_0095;
			}
			case 7:
			{
				goto IL_0044;
			}
			case 8:
			{
				goto IL_004d;
			}
			case 9:
			{
				goto IL_0068;
			}
			case 10:
			{
				goto IL_0077;
			}
			case 11:
			{
				goto IL_0086;
			}
		}
	}
	{
		goto IL_0095;
	}

IL_0044:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = ___json0;
		int32_t* L_6 = ___index1;
		bool* L_7 = ___success2;
		String_t* L_8;
		L_8 = SimpleJson_parseString_m14B9680807780CBC3D6F557C3D67590C3F2D8B46(L_5, (int32_t*)L_6, (bool*)L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_004d:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_9 = ___json0;
		int32_t* L_10 = ___index1;
		bool* L_11 = ___success2;
		RuntimeObject * L_12;
		L_12 = SimpleJson_parseNumber_mD3AF5A6DC75EB484585F64F37AF759778E8F2272(L_9, (int32_t*)L_10, (bool*)L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_0056:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_13 = ___json0;
		int32_t* L_14 = ___index1;
		bool* L_15 = ___success2;
		RuntimeObject* L_16;
		L_16 = SimpleJson_parseObject_m01840B8B5B95C5E70C46DCE4ECAA900AAB1F03DC(L_13, (int32_t*)L_14, (bool*)L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_005f:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_17 = ___json0;
		int32_t* L_18 = ___index1;
		bool* L_19 = ___success2;
		JsonArray_tA3865B4DBA65F47D2EBA6C1A04041AC601AAB754 * L_20;
		L_20 = SimpleJson_parseArray_m686317AA55B7B7A56DB6A6D506C3896CE33430C4(L_17, (int32_t*)L_18, (bool*)L_19, /*hidden argument*/NULL);
		return L_20;
	}

IL_0068:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_21 = ___json0;
		int32_t* L_22 = ___index1;
		int32_t L_23;
		L_23 = SimpleJson_nextToken_m55D2CBDE043890FF31ED75C87F82C76A93903D9E(L_21, (int32_t*)L_22, /*hidden argument*/NULL);
		bool L_24 = ((bool)1);
		RuntimeObject * L_25 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_24);
		return L_25;
	}

IL_0077:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_26 = ___json0;
		int32_t* L_27 = ___index1;
		int32_t L_28;
		L_28 = SimpleJson_nextToken_m55D2CBDE043890FF31ED75C87F82C76A93903D9E(L_26, (int32_t*)L_27, /*hidden argument*/NULL);
		bool L_29 = ((bool)0);
		RuntimeObject * L_30 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_29);
		return L_30;
	}

IL_0086:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_31 = ___json0;
		int32_t* L_32 = ___index1;
		int32_t L_33;
		L_33 = SimpleJson_nextToken_m55D2CBDE043890FF31ED75C87F82C76A93903D9E(L_31, (int32_t*)L_32, /*hidden argument*/NULL);
		return NULL;
	}

IL_0090:
	{
		goto IL_0095;
	}

IL_0095:
	{
		bool* L_34 = ___success2;
		*((int8_t*)L_34) = (int8_t)0;
		return NULL;
	}
}
// System.String Prime31.SimpleJson::parseString(System.Char[],System.Int32&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleJson_parseString_m14B9680807780CBC3D6F557C3D67590C3F2D8B46 (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	uint32_t V_5 = 0;
	bool V_6 = false;
	uint32_t V_7 = 0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E(L_0, ((int32_t)2000), /*hidden argument*/NULL);
		V_0 = L_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___json0;
		int32_t* L_2 = ___index1;
		SimpleJson_eatWhitespace_mECDEA82E6A763586AED44C4BBA41A61063C78F0B(L_1, (int32_t*)L_2, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ___json0;
		int32_t* L_4 = ___index1;
		int32_t* L_5 = ___index1;
		int32_t L_6 = *((int32_t*)L_5);
		int32_t L_7 = L_6;
		V_2 = L_7;
		*((int32_t*)L_4) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		int32_t L_8 = V_2;
		NullCheck(L_3);
		int32_t L_9 = L_8;
		uint16_t L_10 = (uint16_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_1 = L_10;
		V_3 = (bool)0;
		goto IL_0237;
	}

IL_0025:
	{
		int32_t* L_11 = ___index1;
		int32_t L_12 = *((int32_t*)L_11);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_13 = ___json0;
		NullCheck(L_13);
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))))
		{
			goto IL_0034;
		}
	}
	{
		goto IL_023d;
	}

IL_0034:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_14 = ___json0;
		int32_t* L_15 = ___index1;
		int32_t* L_16 = ___index1;
		int32_t L_17 = *((int32_t*)L_16);
		int32_t L_18 = L_17;
		V_2 = L_18;
		*((int32_t*)L_15) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
		int32_t L_19 = V_2;
		NullCheck(L_14);
		int32_t L_20 = L_19;
		uint16_t L_21 = (uint16_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_1 = L_21;
		Il2CppChar L_22 = V_1;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_004f;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_023d;
	}

IL_004f:
	{
		Il2CppChar L_23 = V_1;
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_022f;
		}
	}
	{
		int32_t* L_24 = ___index1;
		int32_t L_25 = *((int32_t*)L_24);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_26 = ___json0;
		NullCheck(L_26);
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))))
		{
			goto IL_0066;
		}
	}
	{
		goto IL_023d;
	}

IL_0066:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_27 = ___json0;
		int32_t* L_28 = ___index1;
		int32_t* L_29 = ___index1;
		int32_t L_30 = *((int32_t*)L_29);
		int32_t L_31 = L_30;
		V_2 = L_31;
		*((int32_t*)L_28) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
		int32_t L_32 = V_2;
		NullCheck(L_27);
		int32_t L_33 = L_32;
		uint16_t L_34 = (uint16_t)(L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_1 = L_34;
		Il2CppChar L_35 = V_1;
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0088;
		}
	}
	{
		StringBuilder_t * L_36 = V_0;
		NullCheck(L_36);
		StringBuilder_t * L_37;
		L_37 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_36, ((int32_t)34), /*hidden argument*/NULL);
		goto IL_022a;
	}

IL_0088:
	{
		Il2CppChar L_38 = V_1;
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_009e;
		}
	}
	{
		StringBuilder_t * L_39 = V_0;
		NullCheck(L_39);
		StringBuilder_t * L_40;
		L_40 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_39, ((int32_t)92), /*hidden argument*/NULL);
		goto IL_022a;
	}

IL_009e:
	{
		Il2CppChar L_41 = V_1;
		if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00b4;
		}
	}
	{
		StringBuilder_t * L_42 = V_0;
		NullCheck(L_42);
		StringBuilder_t * L_43;
		L_43 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_42, ((int32_t)47), /*hidden argument*/NULL);
		goto IL_022a;
	}

IL_00b4:
	{
		Il2CppChar L_44 = V_1;
		if ((!(((uint32_t)L_44) == ((uint32_t)((int32_t)98)))))
		{
			goto IL_00c9;
		}
	}
	{
		StringBuilder_t * L_45 = V_0;
		NullCheck(L_45);
		StringBuilder_t * L_46;
		L_46 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_45, 8, /*hidden argument*/NULL);
		goto IL_022a;
	}

IL_00c9:
	{
		Il2CppChar L_47 = V_1;
		if ((!(((uint32_t)L_47) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_00df;
		}
	}
	{
		StringBuilder_t * L_48 = V_0;
		NullCheck(L_48);
		StringBuilder_t * L_49;
		L_49 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_48, ((int32_t)12), /*hidden argument*/NULL);
		goto IL_022a;
	}

IL_00df:
	{
		Il2CppChar L_50 = V_1;
		if ((!(((uint32_t)L_50) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_00f5;
		}
	}
	{
		StringBuilder_t * L_51 = V_0;
		NullCheck(L_51);
		StringBuilder_t * L_52;
		L_52 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_51, ((int32_t)10), /*hidden argument*/NULL);
		goto IL_022a;
	}

IL_00f5:
	{
		Il2CppChar L_53 = V_1;
		if ((!(((uint32_t)L_53) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_010b;
		}
	}
	{
		StringBuilder_t * L_54 = V_0;
		NullCheck(L_54);
		StringBuilder_t * L_55;
		L_55 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_54, ((int32_t)13), /*hidden argument*/NULL);
		goto IL_022a;
	}

IL_010b:
	{
		Il2CppChar L_56 = V_1;
		if ((!(((uint32_t)L_56) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_0121;
		}
	}
	{
		StringBuilder_t * L_57 = V_0;
		NullCheck(L_57);
		StringBuilder_t * L_58;
		L_58 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_57, ((int32_t)9), /*hidden argument*/NULL);
		goto IL_022a;
	}

IL_0121:
	{
		Il2CppChar L_59 = V_1;
		if ((!(((uint32_t)L_59) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_022a;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_60 = ___json0;
		NullCheck(L_60);
		int32_t* L_61 = ___index1;
		int32_t L_62 = *((int32_t*)L_61);
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_60)->max_length))), (int32_t)L_62));
		int32_t L_63 = V_4;
		if ((((int32_t)L_63) < ((int32_t)4)))
		{
			goto IL_0225;
		}
	}
	{
		bool* L_64 = ___success2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_65 = ___json0;
		int32_t* L_66 = ___index1;
		int32_t L_67 = *((int32_t*)L_66);
		String_t* L_68;
		L_68 = String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E(NULL, L_65, L_67, 4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_69;
		L_69 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		bool L_70;
		L_70 = UInt32_TryParse_m5A92B541CF9CC6532CB23BDE6DF7460E5EAC8435(L_68, ((int32_t)515), L_69, (uint32_t*)(&V_5), /*hidden argument*/NULL);
		bool L_71 = L_70;
		V_6 = L_71;
		*((int8_t*)L_64) = (int8_t)L_71;
		bool L_72 = V_6;
		if (L_72)
		{
			goto IL_0165;
		}
	}
	{
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0165:
	{
		uint32_t L_73 = V_5;
		if ((!(((uint32_t)((int32_t)55296)) <= ((uint32_t)L_73))))
		{
			goto IL_020c;
		}
	}
	{
		uint32_t L_74 = V_5;
		if ((!(((uint32_t)L_74) <= ((uint32_t)((int32_t)56319)))))
		{
			goto IL_020c;
		}
	}
	{
		int32_t* L_75 = ___index1;
		int32_t* L_76 = ___index1;
		int32_t L_77 = *((int32_t*)L_76);
		*((int32_t*)L_75) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)4));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_78 = ___json0;
		NullCheck(L_78);
		int32_t* L_79 = ___index1;
		int32_t L_80 = *((int32_t*)L_79);
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_78)->max_length))), (int32_t)L_80));
		int32_t L_81 = V_4;
		if ((((int32_t)L_81) < ((int32_t)6)))
		{
			goto IL_0203;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_82 = ___json0;
		int32_t* L_83 = ___index1;
		int32_t L_84 = *((int32_t*)L_83);
		String_t* L_85;
		L_85 = String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E(NULL, L_82, L_84, 2, /*hidden argument*/NULL);
		bool L_86;
		L_86 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_85, _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699, /*hidden argument*/NULL);
		if (!L_86)
		{
			goto IL_0203;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_87 = ___json0;
		int32_t* L_88 = ___index1;
		int32_t L_89 = *((int32_t*)L_88);
		String_t* L_90;
		L_90 = String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E(NULL, L_87, ((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)2)), 4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_91;
		L_91 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		bool L_92;
		L_92 = UInt32_TryParse_m5A92B541CF9CC6532CB23BDE6DF7460E5EAC8435(L_90, ((int32_t)515), L_91, (uint32_t*)(&V_7), /*hidden argument*/NULL);
		if (!L_92)
		{
			goto IL_0203;
		}
	}
	{
		uint32_t L_93 = V_7;
		if ((!(((uint32_t)((int32_t)56320)) <= ((uint32_t)L_93))))
		{
			goto IL_0203;
		}
	}
	{
		uint32_t L_94 = V_7;
		if ((!(((uint32_t)L_94) <= ((uint32_t)((int32_t)57343)))))
		{
			goto IL_0203;
		}
	}
	{
		StringBuilder_t * L_95 = V_0;
		uint32_t L_96 = V_5;
		NullCheck(L_95);
		StringBuilder_t * L_97;
		L_97 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_95, ((int32_t)((uint16_t)L_96)), /*hidden argument*/NULL);
		StringBuilder_t * L_98 = V_0;
		uint32_t L_99 = V_7;
		NullCheck(L_98);
		StringBuilder_t * L_100;
		L_100 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_98, ((int32_t)((uint16_t)L_99)), /*hidden argument*/NULL);
		int32_t* L_101 = ___index1;
		int32_t* L_102 = ___index1;
		int32_t L_103 = *((int32_t*)L_102);
		*((int32_t*)L_101) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)6));
		goto IL_0237;
	}

IL_0203:
	{
		bool* L_104 = ___success2;
		*((int8_t*)L_104) = (int8_t)0;
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_020c:
	{
		StringBuilder_t * L_105 = V_0;
		uint32_t L_106 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		String_t* L_107;
		L_107 = Char_ConvertFromUtf32_m61381B403A3A7CF89350DE07F87D91C169C71AD7(L_106, /*hidden argument*/NULL);
		NullCheck(L_105);
		StringBuilder_t * L_108;
		L_108 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_105, L_107, /*hidden argument*/NULL);
		int32_t* L_109 = ___index1;
		int32_t* L_110 = ___index1;
		int32_t L_111 = *((int32_t*)L_110);
		*((int32_t*)L_109) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_111, (int32_t)4));
		goto IL_022a;
	}

IL_0225:
	{
		goto IL_023d;
	}

IL_022a:
	{
		goto IL_0237;
	}

IL_022f:
	{
		StringBuilder_t * L_112 = V_0;
		Il2CppChar L_113 = V_1;
		NullCheck(L_112);
		StringBuilder_t * L_114;
		L_114 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_112, L_113, /*hidden argument*/NULL);
	}

IL_0237:
	{
		bool L_115 = V_3;
		if (!L_115)
		{
			goto IL_0025;
		}
	}

IL_023d:
	{
		bool L_116 = V_3;
		if (L_116)
		{
			goto IL_0248;
		}
	}
	{
		bool* L_117 = ___success2;
		*((int8_t*)L_117) = (int8_t)0;
		return (String_t*)NULL;
	}

IL_0248:
	{
		StringBuilder_t * L_118 = V_0;
		NullCheck(L_118);
		String_t* L_119;
		L_119 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_118);
		return L_119;
	}
}
// System.Object Prime31.SimpleJson::parseNumber(System.Char[],System.Int32&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SimpleJson_parseNumber_mD3AF5A6DC75EB484585F64F37AF759778E8F2272 (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	String_t* V_3 = NULL;
	double V_4 = 0.0;
	int64_t V_5 = 0;
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		SimpleJson_eatWhitespace_mECDEA82E6A763586AED44C4BBA41A61063C78F0B(L_0, (int32_t*)L_1, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = ___json0;
		int32_t* L_3 = ___index1;
		int32_t L_4 = *((int32_t*)L_3);
		int32_t L_5;
		L_5 = SimpleJson_getLastIndexOfNumber_m5935E1DF4468E30FF653A6FA56D0CE3993619184(L_2, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		int32_t* L_7 = ___index1;
		int32_t L_8 = *((int32_t*)L_7);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_8)), (int32_t)1));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_9 = ___json0;
		int32_t* L_10 = ___index1;
		int32_t L_11 = *((int32_t*)L_10);
		int32_t L_12 = V_1;
		String_t* L_13;
		L_13 = String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E(NULL, L_9, L_11, L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		String_t* L_14 = V_3;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_IndexOf_mD99F5378A4220A0DA0D5097007417E777722ABDA(L_14, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, 5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)(-1)))))
		{
			goto IL_0045;
		}
	}
	{
		String_t* L_16 = V_3;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = String_IndexOf_mD99F5378A4220A0DA0D5097007417E777722ABDA(L_16, _stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53, 5, /*hidden argument*/NULL);
		if ((((int32_t)L_17) == ((int32_t)(-1))))
		{
			goto IL_006e;
		}
	}

IL_0045:
	{
		bool* L_18 = ___success2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_19 = ___json0;
		int32_t* L_20 = ___index1;
		int32_t L_21 = *((int32_t*)L_20);
		int32_t L_22 = V_1;
		String_t* L_23;
		L_23 = String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E(NULL, L_19, L_21, L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_24;
		L_24 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Double_TryParse_mE740D7083AC52793A9634067C4F032570FFBF61E(L_23, ((int32_t)511), L_24, (double*)(&V_4), /*hidden argument*/NULL);
		*((int8_t*)L_18) = (int8_t)L_25;
		double L_26 = V_4;
		double L_27 = L_26;
		RuntimeObject * L_28 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_27);
		V_2 = L_28;
		goto IL_0092;
	}

IL_006e:
	{
		bool* L_29 = ___success2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_30 = ___json0;
		int32_t* L_31 = ___index1;
		int32_t L_32 = *((int32_t*)L_31);
		int32_t L_33 = V_1;
		String_t* L_34;
		L_34 = String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E(NULL, L_30, L_32, L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_35;
		L_35 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		bool L_36;
		L_36 = Int64_TryParse_m4A94015941D9BD9F9304D1FE14F17E84BFD3B69A(L_34, ((int32_t)511), L_35, (int64_t*)(&V_5), /*hidden argument*/NULL);
		*((int8_t*)L_29) = (int8_t)L_36;
		int64_t L_37 = V_5;
		int64_t L_38 = L_37;
		RuntimeObject * L_39 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_38);
		V_2 = L_39;
	}

IL_0092:
	{
		int32_t* L_40 = ___index1;
		int32_t L_41 = V_0;
		*((int32_t*)L_40) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
		RuntimeObject * L_42 = V_2;
		return L_42;
	}
}
// System.Int32 Prime31.SimpleJson::getLastIndexOfNumber(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleJson_getLastIndexOfNumber_m5935E1DF4468E30FF653A6FA56D0CE3993619184 (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___json0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral750483B1B79D7876103D12AD91A365DD2A867A80);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index1;
		V_0 = L_0;
		goto IL_0023;
	}

IL_0007:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___json0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint16_t L_4 = (uint16_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(_stringLiteral750483B1B79D7876103D12AD91A365DD2A867A80);
		int32_t L_5;
		L_5 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(_stringLiteral750483B1B79D7876103D12AD91A365DD2A867A80, L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_002c;
	}

IL_001f:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0023:
	{
		int32_t L_7 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_8 = ___json0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_0007;
		}
	}

IL_002c:
	{
		int32_t L_9 = V_0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1));
	}
}
// System.Void Prime31.SimpleJson::eatWhitespace(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleJson_eatWhitespace_mECDEA82E6A763586AED44C4BBA41A61063C78F0B (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___json0, int32_t* ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAC0E7D0EEF9F889D34253B0E07D290F1DF63B98);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0024;
	}

IL_0005:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		int32_t L_2 = *((int32_t*)L_1);
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint16_t L_4 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(_stringLiteralCAC0E7D0EEF9F889D34253B0E07D290F1DF63B98);
		int32_t L_5;
		L_5 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(_stringLiteralCAC0E7D0EEF9F889D34253B0E07D290F1DF63B98, L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_001e;
		}
	}
	{
		goto IL_002e;
	}

IL_001e:
	{
		int32_t* L_6 = ___index1;
		int32_t* L_7 = ___index1;
		int32_t L_8 = *((int32_t*)L_7);
		*((int32_t*)L_6) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0024:
	{
		int32_t* L_9 = ___index1;
		int32_t L_10 = *((int32_t*)L_9);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_11 = ___json0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_0005;
		}
	}

IL_002e:
	{
		return;
	}
}
// System.Int32 Prime31.SimpleJson::lookAhead(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleJson_lookAhead_m95010D6F902C78FE86DB506C5834FED6AB13AC06 (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___json0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index1;
		V_0 = L_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___json0;
		int32_t L_2;
		L_2 = SimpleJson_nextToken_m55D2CBDE043890FF31ED75C87F82C76A93903D9E(L_1, (int32_t*)(&V_0), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Prime31.SimpleJson::nextToken(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleJson_nextToken_m55D2CBDE043890FF31ED75C87F82C76A93903D9E (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___json0, int32_t* ___index1, const RuntimeMethod* method)
{
	Il2CppChar V_0 = 0x0;
	int32_t V_1 = 0;
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		SimpleJson_eatWhitespace_mECDEA82E6A763586AED44C4BBA41A61063C78F0B(L_0, (int32_t*)L_1, /*hidden argument*/NULL);
		int32_t* L_2 = ___index1;
		int32_t L_3 = *((int32_t*)L_2);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = ___json0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))))
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = ___json0;
		int32_t* L_6 = ___index1;
		int32_t L_7 = *((int32_t*)L_6);
		NullCheck(L_5);
		int32_t L_8 = L_7;
		uint16_t L_9 = (uint16_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = L_9;
		int32_t* L_10 = ___index1;
		int32_t* L_11 = ___index1;
		int32_t L_12 = *((int32_t*)L_11);
		*((int32_t*)L_10) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		Il2CppChar L_13 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)((int32_t)44))))
		{
			case 0:
			{
				goto IL_00a2;
			}
			case 1:
			{
				goto IL_00a6;
			}
			case 2:
			{
				goto IL_0063;
			}
			case 3:
			{
				goto IL_0063;
			}
			case 4:
			{
				goto IL_00a6;
			}
			case 5:
			{
				goto IL_00a6;
			}
			case 6:
			{
				goto IL_00a6;
			}
			case 7:
			{
				goto IL_00a6;
			}
			case 8:
			{
				goto IL_00a6;
			}
			case 9:
			{
				goto IL_00a6;
			}
			case 10:
			{
				goto IL_00a6;
			}
			case 11:
			{
				goto IL_00a6;
			}
			case 12:
			{
				goto IL_00a6;
			}
			case 13:
			{
				goto IL_00a6;
			}
			case 14:
			{
				goto IL_00a8;
			}
		}
	}

IL_0063:
	{
		Il2CppChar L_14 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)((int32_t)91))))
		{
			case 0:
			{
				goto IL_009e;
			}
			case 1:
			{
				goto IL_0078;
			}
			case 2:
			{
				goto IL_00a0;
			}
		}
	}

IL_0078:
	{
		Il2CppChar L_15 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)((int32_t)123))))
		{
			case 0:
			{
				goto IL_009a;
			}
			case 1:
			{
				goto IL_008d;
			}
			case 2:
			{
				goto IL_009c;
			}
		}
	}

IL_008d:
	{
		Il2CppChar L_16 = V_0;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)34))))
		{
			goto IL_00a4;
		}
	}
	{
		goto IL_00aa;
	}

IL_009a:
	{
		return 1;
	}

IL_009c:
	{
		return 2;
	}

IL_009e:
	{
		return 3;
	}

IL_00a0:
	{
		return 4;
	}

IL_00a2:
	{
		return 6;
	}

IL_00a4:
	{
		return 7;
	}

IL_00a6:
	{
		return 8;
	}

IL_00a8:
	{
		return 5;
	}

IL_00aa:
	{
		int32_t* L_17 = ___index1;
		int32_t* L_18 = ___index1;
		int32_t L_19 = *((int32_t*)L_18);
		*((int32_t*)L_17) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_20 = ___json0;
		NullCheck(L_20);
		int32_t* L_21 = ___index1;
		int32_t L_22 = *((int32_t*)L_21);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))), (int32_t)L_22));
		int32_t L_23 = V_1;
		if ((((int32_t)L_23) < ((int32_t)5)))
		{
			goto IL_0106;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_24 = ___json0;
		int32_t* L_25 = ___index1;
		int32_t L_26 = *((int32_t*)L_25);
		NullCheck(L_24);
		int32_t L_27 = L_26;
		uint16_t L_28 = (uint16_t)(L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		if ((!(((uint32_t)L_28) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_0106;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_29 = ___json0;
		int32_t* L_30 = ___index1;
		int32_t L_31 = *((int32_t*)L_30);
		NullCheck(L_29);
		int32_t L_32 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
		uint16_t L_33 = (uint16_t)(L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)97)))))
		{
			goto IL_0106;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_34 = ___json0;
		int32_t* L_35 = ___index1;
		int32_t L_36 = *((int32_t*)L_35);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)2));
		uint16_t L_38 = (uint16_t)(L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_0106;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_39 = ___json0;
		int32_t* L_40 = ___index1;
		int32_t L_41 = *((int32_t*)L_40);
		NullCheck(L_39);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)3));
		uint16_t L_43 = (uint16_t)(L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		if ((!(((uint32_t)L_43) == ((uint32_t)((int32_t)115)))))
		{
			goto IL_0106;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_44 = ___json0;
		int32_t* L_45 = ___index1;
		int32_t L_46 = *((int32_t*)L_45);
		NullCheck(L_44);
		int32_t L_47 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)4));
		uint16_t L_48 = (uint16_t)(L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		if ((!(((uint32_t)L_48) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_0106;
		}
	}
	{
		int32_t* L_49 = ___index1;
		int32_t* L_50 = ___index1;
		int32_t L_51 = *((int32_t*)L_50);
		*((int32_t*)L_49) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)5));
		return ((int32_t)10);
	}

IL_0106:
	{
		int32_t L_52 = V_1;
		if ((((int32_t)L_52) < ((int32_t)4)))
		{
			goto IL_0148;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_53 = ___json0;
		int32_t* L_54 = ___index1;
		int32_t L_55 = *((int32_t*)L_54);
		NullCheck(L_53);
		int32_t L_56 = L_55;
		uint16_t L_57 = (uint16_t)(L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		if ((!(((uint32_t)L_57) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_0148;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_58 = ___json0;
		int32_t* L_59 = ___index1;
		int32_t L_60 = *((int32_t*)L_59);
		NullCheck(L_58);
		int32_t L_61 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
		uint16_t L_62 = (uint16_t)(L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		if ((!(((uint32_t)L_62) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_0148;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_63 = ___json0;
		int32_t* L_64 = ___index1;
		int32_t L_65 = *((int32_t*)L_64);
		NullCheck(L_63);
		int32_t L_66 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)2));
		uint16_t L_67 = (uint16_t)(L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		if ((!(((uint32_t)L_67) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_0148;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_68 = ___json0;
		int32_t* L_69 = ___index1;
		int32_t L_70 = *((int32_t*)L_69);
		NullCheck(L_68);
		int32_t L_71 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)3));
		uint16_t L_72 = (uint16_t)(L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t* L_73 = ___index1;
		int32_t* L_74 = ___index1;
		int32_t L_75 = *((int32_t*)L_74);
		*((int32_t*)L_73) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)4));
		return ((int32_t)9);
	}

IL_0148:
	{
		int32_t L_76 = V_1;
		if ((((int32_t)L_76) < ((int32_t)4)))
		{
			goto IL_018a;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_77 = ___json0;
		int32_t* L_78 = ___index1;
		int32_t L_79 = *((int32_t*)L_78);
		NullCheck(L_77);
		int32_t L_80 = L_79;
		uint16_t L_81 = (uint16_t)(L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		if ((!(((uint32_t)L_81) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_018a;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_82 = ___json0;
		int32_t* L_83 = ___index1;
		int32_t L_84 = *((int32_t*)L_83);
		NullCheck(L_82);
		int32_t L_85 = ((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)1));
		uint16_t L_86 = (uint16_t)(L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		if ((!(((uint32_t)L_86) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_018a;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_87 = ___json0;
		int32_t* L_88 = ___index1;
		int32_t L_89 = *((int32_t*)L_88);
		NullCheck(L_87);
		int32_t L_90 = ((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)2));
		uint16_t L_91 = (uint16_t)(L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		if ((!(((uint32_t)L_91) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_018a;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_92 = ___json0;
		int32_t* L_93 = ___index1;
		int32_t L_94 = *((int32_t*)L_93);
		NullCheck(L_92);
		int32_t L_95 = ((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)3));
		uint16_t L_96 = (uint16_t)(L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		if ((!(((uint32_t)L_96) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_018a;
		}
	}
	{
		int32_t* L_97 = ___index1;
		int32_t* L_98 = ___index1;
		int32_t L_99 = *((int32_t*)L_98);
		*((int32_t*)L_97) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_99, (int32_t)4));
		return ((int32_t)11);
	}

IL_018a:
	{
		return 0;
	}
}
// System.Boolean Prime31.SimpleJson::serializeValue(Prime31.IJsonSerializerStrategy,System.Object,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleJson_serializeValue_mA2B828731C901B93EABF7F2D3117E19A6B4B643A (RuntimeObject* ___jsonSerializerStrategy0, RuntimeObject * ___value1, StringBuilder_t * ___builder2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJsonSerializerStrategy_t07ABC231E495885F45C84676A5E6527E97BC2876_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	StringBuilder_t * G_B15_0 = NULL;
	StringBuilder_t * G_B14_0 = NULL;
	String_t* G_B16_0 = NULL;
	StringBuilder_t * G_B16_1 = NULL;
	{
		V_0 = (bool)1;
		RuntimeObject * L_0 = ___value1;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject * L_1 = ___value1;
		StringBuilder_t * L_2 = ___builder2;
		bool L_3;
		L_3 = SimpleJson_serializeString_m192895FFFB3B7FBD9C27FF389304F3FDE10EC5C8(((String_t*)CastclassSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)), L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0138;
	}

IL_001f:
	{
		RuntimeObject * L_4 = ___value1;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var)))
		{
			goto IL_004a;
		}
	}
	{
		RuntimeObject * L_5 = ___value1;
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_5, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var));
		RuntimeObject* L_6 = ___jsonSerializerStrategy0;
		RuntimeObject* L_7 = V_1;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.ICollection`1<!0> System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Keys() */, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var, L_7);
		RuntimeObject* L_9 = V_1;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.ICollection`1<!1> System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Values() */, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var, L_9);
		StringBuilder_t * L_11 = ___builder2;
		bool L_12;
		L_12 = SimpleJson_serializeObject_mACA9D12E24140EF855C242B484962E732B404A9D(L_6, L_8, L_10, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0138;
	}

IL_004a:
	{
		RuntimeObject * L_13 = ___value1;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_13, IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560_il2cpp_TypeInfo_var)))
		{
			goto IL_0075;
		}
	}
	{
		RuntimeObject * L_14 = ___value1;
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_14, IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560_il2cpp_TypeInfo_var));
		RuntimeObject* L_15 = ___jsonSerializerStrategy0;
		RuntimeObject* L_16 = V_2;
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.ICollection`1<!0> System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Keys() */, IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560_il2cpp_TypeInfo_var, L_16);
		RuntimeObject* L_18 = V_2;
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.ICollection`1<!1> System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Values() */, IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560_il2cpp_TypeInfo_var, L_18);
		StringBuilder_t * L_20 = ___builder2;
		bool L_21;
		L_21 = SimpleJson_serializeObject_mACA9D12E24140EF855C242B484962E732B404A9D(L_15, L_17, L_19, L_20, /*hidden argument*/NULL);
		V_0 = L_21;
		goto IL_0138;
	}

IL_0075:
	{
		RuntimeObject * L_22 = ___value1;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_22, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var)))
		{
			goto IL_00a0;
		}
	}
	{
		RuntimeObject * L_23 = ___value1;
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_23, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var));
		RuntimeObject* L_24 = ___jsonSerializerStrategy0;
		RuntimeObject* L_25 = V_3;
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_25);
		RuntimeObject* L_27 = V_3;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.ICollection System.Collections.IDictionary::get_Values() */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_27);
		StringBuilder_t * L_29 = ___builder2;
		bool L_30;
		L_30 = SimpleJson_serializeObject_mACA9D12E24140EF855C242B484962E732B404A9D(L_24, L_26, L_28, L_29, /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0138;
	}

IL_00a0:
	{
		RuntimeObject * L_31 = ___value1;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_31, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var)))
		{
			goto IL_00be;
		}
	}
	{
		RuntimeObject* L_32 = ___jsonSerializerStrategy0;
		RuntimeObject * L_33 = ___value1;
		StringBuilder_t * L_34 = ___builder2;
		bool L_35;
		L_35 = SimpleJson_serializeArray_mA7F16D8C83EC45988C48D67C6A19BE5A40771BAB(L_32, ((RuntimeObject*)Castclass((RuntimeObject*)L_33, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var)), L_34, /*hidden argument*/NULL);
		V_0 = L_35;
		goto IL_0138;
	}

IL_00be:
	{
		RuntimeObject * L_36 = ___value1;
		bool L_37;
		L_37 = SimpleJson_isNumeric_mCF9B0A92CACB8BCE554A67B8599B7D4899F4B755(L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_00d6;
		}
	}
	{
		RuntimeObject * L_38 = ___value1;
		StringBuilder_t * L_39 = ___builder2;
		bool L_40;
		L_40 = SimpleJson_serializeNumber_mC77858227924595B85F8261947CDF8F450BC762E(L_38, L_39, /*hidden argument*/NULL);
		V_0 = L_40;
		goto IL_0138;
	}

IL_00d6:
	{
		RuntimeObject * L_41 = ___value1;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_41, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))
		{
			goto IL_0107;
		}
	}
	{
		StringBuilder_t * L_42 = ___builder2;
		RuntimeObject * L_43 = ___value1;
		G_B14_0 = L_42;
		if (!((*(bool*)((bool*)UnBox(L_43, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))))
		{
			G_B15_0 = L_42;
			goto IL_00f7;
		}
	}
	{
		G_B16_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B16_1 = G_B14_0;
		goto IL_00fc;
	}

IL_00f7:
	{
		G_B16_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B16_1 = G_B15_0;
	}

IL_00fc:
	{
		NullCheck(G_B16_1);
		StringBuilder_t * L_44;
		L_44 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(G_B16_1, G_B16_0, /*hidden argument*/NULL);
		goto IL_0138;
	}

IL_0107:
	{
		RuntimeObject * L_45 = ___value1;
		if (L_45)
		{
			goto IL_011e;
		}
	}
	{
		StringBuilder_t * L_46 = ___builder2;
		NullCheck(L_46);
		StringBuilder_t * L_47;
		L_47 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_46, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, /*hidden argument*/NULL);
		goto IL_0138;
	}

IL_011e:
	{
		RuntimeObject* L_48 = ___jsonSerializerStrategy0;
		RuntimeObject * L_49 = ___value1;
		NullCheck(L_48);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject ** >::Invoke(0 /* System.Boolean Prime31.IJsonSerializerStrategy::serializeNonPrimitiveObject(System.Object,System.Object&) */, IJsonSerializerStrategy_t07ABC231E495885F45C84676A5E6527E97BC2876_il2cpp_TypeInfo_var, L_48, L_49, (RuntimeObject **)(&V_4));
		V_0 = L_50;
		bool L_51 = V_0;
		if (!L_51)
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_52 = ___jsonSerializerStrategy0;
		RuntimeObject * L_53 = V_4;
		StringBuilder_t * L_54 = ___builder2;
		bool L_55;
		L_55 = SimpleJson_serializeValue_mA2B828731C901B93EABF7F2D3117E19A6B4B643A(L_52, L_53, L_54, /*hidden argument*/NULL);
	}

IL_0138:
	{
		bool L_56 = V_0;
		return L_56;
	}
}
// System.Boolean Prime31.SimpleJson::serializeObject(Prime31.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Collections.IEnumerable,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleJson_serializeObject_mACA9D12E24140EF855C242B484962E732B404A9D (RuntimeObject* ___jsonSerializerStrategy0, RuntimeObject* ___keys1, RuntimeObject* ___values2, StringBuilder_t * ___builder3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	{
		StringBuilder_t * L_0 = ___builder3;
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_0, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___keys1;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		RuntimeObject* L_4 = ___values2;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_4);
		V_1 = L_5;
		V_2 = (bool)1;
		goto IL_008d;
	}

IL_0021:
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject * L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_6);
		V_3 = L_7;
		RuntimeObject* L_8 = V_1;
		NullCheck(L_8);
		RuntimeObject * L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_8);
		V_4 = L_9;
		bool L_10 = V_2;
		if (L_10)
		{
			goto IL_0042;
		}
	}
	{
		StringBuilder_t * L_11 = ___builder3;
		NullCheck(L_11);
		StringBuilder_t * L_12;
		L_12 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_11, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, /*hidden argument*/NULL);
	}

IL_0042:
	{
		RuntimeObject * L_13 = V_3;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_13, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_005f;
		}
	}
	{
		RuntimeObject * L_14 = V_3;
		StringBuilder_t * L_15 = ___builder3;
		bool L_16;
		L_16 = SimpleJson_serializeString_m192895FFFB3B7FBD9C27FF389304F3FDE10EC5C8(((String_t*)CastclassSealed((RuntimeObject*)L_14, String_t_il2cpp_TypeInfo_var)), L_15, /*hidden argument*/NULL);
		goto IL_006f;
	}

IL_005f:
	{
		RuntimeObject* L_17 = ___jsonSerializerStrategy0;
		RuntimeObject * L_18 = V_4;
		StringBuilder_t * L_19 = ___builder3;
		bool L_20;
		L_20 = SimpleJson_serializeValue_mA2B828731C901B93EABF7F2D3117E19A6B4B643A(L_17, L_18, L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_006f;
		}
	}
	{
		return (bool)0;
	}

IL_006f:
	{
		StringBuilder_t * L_21 = ___builder3;
		NullCheck(L_21);
		StringBuilder_t * L_22;
		L_22 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_21, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, /*hidden argument*/NULL);
		RuntimeObject* L_23 = ___jsonSerializerStrategy0;
		RuntimeObject * L_24 = V_4;
		StringBuilder_t * L_25 = ___builder3;
		bool L_26;
		L_26 = SimpleJson_serializeValue_mA2B828731C901B93EABF7F2D3117E19A6B4B643A(L_23, L_24, L_25, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_008b;
		}
	}
	{
		return (bool)0;
	}

IL_008b:
	{
		V_2 = (bool)0;
	}

IL_008d:
	{
		RuntimeObject* L_27 = V_0;
		NullCheck(L_27);
		bool L_28;
		L_28 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_27);
		if (!L_28)
		{
			goto IL_00a3;
		}
	}
	{
		RuntimeObject* L_29 = V_1;
		NullCheck(L_29);
		bool L_30;
		L_30 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_29);
		if (L_30)
		{
			goto IL_0021;
		}
	}

IL_00a3:
	{
		StringBuilder_t * L_31 = ___builder3;
		NullCheck(L_31);
		StringBuilder_t * L_32;
		L_32 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_31, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, /*hidden argument*/NULL);
		return (bool)1;
	}
}
// System.Boolean Prime31.SimpleJson::serializeArray(Prime31.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleJson_serializeArray_mA7F16D8C83EC45988C48D67C6A19BE5A40771BAB (RuntimeObject* ___jsonSerializerStrategy0, RuntimeObject* ___anArray1, StringBuilder_t * ___builder2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		StringBuilder_t * L_0 = ___builder2;
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_0, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, /*hidden argument*/NULL);
		V_0 = (bool)1;
		RuntimeObject* L_2 = ___anArray1;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0049;
		}

IL_001a:
		{
			RuntimeObject* L_4 = V_2;
			NullCheck(L_4);
			RuntimeObject * L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			bool L_6 = V_0;
			if (L_6)
			{
				goto IL_0033;
			}
		}

IL_0027:
		{
			StringBuilder_t * L_7 = ___builder2;
			NullCheck(L_7);
			StringBuilder_t * L_8;
			L_8 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_7, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, /*hidden argument*/NULL);
		}

IL_0033:
		{
			RuntimeObject* L_9 = ___jsonSerializerStrategy0;
			RuntimeObject * L_10 = V_1;
			StringBuilder_t * L_11 = ___builder2;
			bool L_12;
			L_12 = SimpleJson_serializeValue_mA2B828731C901B93EABF7F2D3117E19A6B4B643A(L_9, L_10, L_11, /*hidden argument*/NULL);
			if (L_12)
			{
				goto IL_0047;
			}
		}

IL_0040:
		{
			V_3 = (bool)0;
			IL2CPP_LEAVE(0x7D, FINALLY_0059);
		}

IL_0047:
		{
			V_0 = (bool)0;
		}

IL_0049:
		{
			RuntimeObject* L_13 = V_2;
			NullCheck(L_13);
			bool L_14;
			L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_001a;
			}
		}

IL_0054:
		{
			IL2CPP_LEAVE(0x6F, FINALLY_0059);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0059;
	}

FINALLY_0059:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_15 = V_2;
			RuntimeObject* L_16 = ((RuntimeObject*)IsInst((RuntimeObject*)L_15, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			V_4 = L_16;
			if (!L_16)
			{
				goto IL_006e;
			}
		}

IL_0067:
		{
			RuntimeObject* L_17 = V_4;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_17);
		}

IL_006e:
		{
			IL2CPP_END_FINALLY(89)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(89)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7D, IL_007d)
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
	}

IL_006f:
	{
		StringBuilder_t * L_18 = ___builder2;
		NullCheck(L_18);
		StringBuilder_t * L_19;
		L_19 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_18, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_007d:
	{
		bool L_20 = V_3;
		return L_20;
	}
}
// System.Boolean Prime31.SimpleJson::serializeString(System.String,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleJson_serializeString_m192895FFFB3B7FBD9C27FF389304F3FDE10EC5C8 (String_t* ___aString0, StringBuilder_t * ___builder1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		StringBuilder_t * L_0 = ___builder1;
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_0, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, /*hidden argument*/NULL);
		String_t* L_2 = ___aString0;
		NullCheck(L_2);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3;
		L_3 = String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_00d8;
	}

IL_001a:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (uint16_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		Il2CppChar L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0037;
		}
	}
	{
		StringBuilder_t * L_9 = ___builder1;
		NullCheck(L_9);
		StringBuilder_t * L_10;
		L_10 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_9, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0037:
	{
		Il2CppChar L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0050;
		}
	}
	{
		StringBuilder_t * L_12 = ___builder1;
		NullCheck(L_12);
		StringBuilder_t * L_13;
		L_13 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_12, _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0050:
	{
		Il2CppChar L_14 = V_2;
		if ((!(((uint32_t)L_14) == ((uint32_t)8))))
		{
			goto IL_0068;
		}
	}
	{
		StringBuilder_t * L_15 = ___builder1;
		NullCheck(L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_15, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0068:
	{
		Il2CppChar L_17 = V_2;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0081;
		}
	}
	{
		StringBuilder_t * L_18 = ___builder1;
		NullCheck(L_18);
		StringBuilder_t * L_19;
		L_19 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_18, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0081:
	{
		Il2CppChar L_20 = V_2;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_009a;
		}
	}
	{
		StringBuilder_t * L_21 = ___builder1;
		NullCheck(L_21);
		StringBuilder_t * L_22;
		L_22 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_21, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_009a:
	{
		Il2CppChar L_23 = V_2;
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_00b3;
		}
	}
	{
		StringBuilder_t * L_24 = ___builder1;
		NullCheck(L_24);
		StringBuilder_t * L_25;
		L_25 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_24, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_00b3:
	{
		Il2CppChar L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_00cc;
		}
	}
	{
		StringBuilder_t * L_27 = ___builder1;
		NullCheck(L_27);
		StringBuilder_t * L_28;
		L_28 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_27, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_00cc:
	{
		StringBuilder_t * L_29 = ___builder1;
		Il2CppChar L_30 = V_2;
		NullCheck(L_29);
		StringBuilder_t * L_31;
		L_31 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_29, L_30, /*hidden argument*/NULL);
	}

IL_00d4:
	{
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00d8:
	{
		int32_t L_33 = V_1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_34 = V_0;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		StringBuilder_t * L_35 = ___builder1;
		NullCheck(L_35);
		StringBuilder_t * L_36;
		L_36 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_35, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, /*hidden argument*/NULL);
		return (bool)1;
	}
}
// System.Boolean Prime31.SimpleJson::serializeNumber(System.Object,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleJson_serializeNumber_mC77858227924595B85F8261947CDF8F450BC762E (RuntimeObject * ___number0, StringBuilder_t * ___builder1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	double V_6 = 0.0;
	{
		RuntimeObject * L_0 = ___number0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))
		{
			goto IL_002a;
		}
	}
	{
		StringBuilder_t * L_1 = ___builder1;
		RuntimeObject * L_2 = ___number0;
		V_0 = ((*(int64_t*)((int64_t*)UnBox(L_2, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_3;
		L_3 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_4;
		L_4 = Int64_ToString_m1D712B17D4BDBE43D1E12EA52885C5D345C1CFA2((int64_t*)(&V_0), L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_t * L_5;
		L_5 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_1, L_4, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_002a:
	{
		RuntimeObject * L_6 = ___number0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))
		{
			goto IL_0054;
		}
	}
	{
		StringBuilder_t * L_7 = ___builder1;
		RuntimeObject * L_8 = ___number0;
		V_1 = ((*(uint64_t*)((uint64_t*)UnBox(L_8, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_9;
		L_9 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_10;
		L_10 = UInt64_ToString_m1429DDEBC0EE07254A8F7E06D3594D1CE72DADF2((uint64_t*)(&V_1), L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_7, L_10, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_0054:
	{
		RuntimeObject * L_12 = ___number0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_12, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))
		{
			goto IL_007e;
		}
	}
	{
		StringBuilder_t * L_13 = ___builder1;
		RuntimeObject * L_14 = ___number0;
		V_2 = ((*(int32_t*)((int32_t*)UnBox(L_14, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_15;
		L_15 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_16;
		L_16 = Int32_ToString_m027A8C9419D2FE56ED5D2EE42A6F3B3CE0130471((int32_t*)(&V_2), L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		StringBuilder_t * L_17;
		L_17 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_13, L_16, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_007e:
	{
		RuntimeObject * L_18 = ___number0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_18, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))
		{
			goto IL_00a8;
		}
	}
	{
		StringBuilder_t * L_19 = ___builder1;
		RuntimeObject * L_20 = ___number0;
		V_3 = ((*(uint32_t*)((uint32_t*)UnBox(L_20, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_21;
		L_21 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_22;
		L_22 = UInt32_ToString_m7361490C5FE5DBC3BE9496B5C9A1239FE6D9E805((uint32_t*)(&V_3), L_21, /*hidden argument*/NULL);
		NullCheck(L_19);
		StringBuilder_t * L_23;
		L_23 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_19, L_22, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_00a8:
	{
		RuntimeObject * L_24 = ___number0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_24, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var)))
		{
			goto IL_00d3;
		}
	}
	{
		StringBuilder_t * L_25 = ___builder1;
		RuntimeObject * L_26 = ___number0;
		V_4 = ((*(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 *)((Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 *)UnBox(L_26, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_27;
		L_27 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_28;
		L_28 = Decimal_ToString_mCD1BF444FBBA99D53FBADBB834CBFBB857598C24((Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 *)(&V_4), L_27, /*hidden argument*/NULL);
		NullCheck(L_25);
		StringBuilder_t * L_29;
		L_29 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_25, L_28, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_00d3:
	{
		RuntimeObject * L_30 = ___number0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_30, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))
		{
			goto IL_00fe;
		}
	}
	{
		StringBuilder_t * L_31 = ___builder1;
		RuntimeObject * L_32 = ___number0;
		V_5 = ((*(float*)((float*)UnBox(L_32, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_33;
		L_33 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_34;
		L_34 = Single_ToString_mF554E46C641C609768519378FB0486DFD7F82985((float*)(&V_5), L_33, /*hidden argument*/NULL);
		NullCheck(L_31);
		StringBuilder_t * L_35;
		L_35 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_31, L_34, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_00fe:
	{
		StringBuilder_t * L_36 = ___builder1;
		RuntimeObject * L_37 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_38;
		L_38 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		double L_39;
		L_39 = Convert_ToDouble_m10322320EC0B380FE4C1EB5DBB24AE9F242B7CC8(L_37, L_38, /*hidden argument*/NULL);
		V_6 = L_39;
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_40;
		L_40 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_41;
		L_41 = Double_ToString_mFF1DAF2003FC7096C54C5A2685F85082220E330B((double*)(&V_6), _stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423, L_40, /*hidden argument*/NULL);
		NullCheck(L_36);
		StringBuilder_t * L_42;
		L_42 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_36, L_41, /*hidden argument*/NULL);
	}

IL_0123:
	{
		return (bool)1;
	}
}
// System.Boolean Prime31.SimpleJson::isNumeric(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleJson_isNumeric_mCF9B0A92CACB8BCE554A67B8599B7D4899F4B755 (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)1;
	}

IL_000d:
	{
		RuntimeObject * L_1 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)1;
	}

IL_001a:
	{
		RuntimeObject * L_2 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_2, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))
		{
			goto IL_0027;
		}
	}
	{
		return (bool)1;
	}

IL_0027:
	{
		RuntimeObject * L_3 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_3, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))
		{
			goto IL_0034;
		}
	}
	{
		return (bool)1;
	}

IL_0034:
	{
		RuntimeObject * L_4 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_4, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))
		{
			goto IL_0041;
		}
	}
	{
		return (bool)1;
	}

IL_0041:
	{
		RuntimeObject * L_5 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))
		{
			goto IL_004e;
		}
	}
	{
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject * L_6 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))
		{
			goto IL_005b;
		}
	}
	{
		return (bool)1;
	}

IL_005b:
	{
		RuntimeObject * L_7 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_7, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		return (bool)1;
	}

IL_0068:
	{
		RuntimeObject * L_8 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_8, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))
		{
			goto IL_0075;
		}
	}
	{
		return (bool)1;
	}

IL_0075:
	{
		RuntimeObject * L_9 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_9, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))
		{
			goto IL_0082;
		}
	}
	{
		return (bool)1;
	}

IL_0082:
	{
		RuntimeObject * L_10 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_10, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var)))
		{
			goto IL_008f;
		}
	}
	{
		return (bool)1;
	}

IL_008f:
	{
		return (bool)0;
	}
}
// Prime31.IJsonSerializerStrategy Prime31.SimpleJson::get_currentJsonSerializerStrategy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SimpleJson_get_currentJsonSerializerStrategy_m3E1A40151EED8A1D224C8B43F1ECBACB0A38C677 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleJson_t020F22AD3AA0346D41DBB61964A925E4F60810BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		RuntimeObject* L_0 = ((SimpleJson_t020F22AD3AA0346D41DBB61964A925E4F60810BF_StaticFields*)il2cpp_codegen_static_fields_for(SimpleJson_t020F22AD3AA0346D41DBB61964A925E4F60810BF_il2cpp_TypeInfo_var))->get__currentJsonSerializerStrategy_0();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C * L_2;
		L_2 = SimpleJson_get_pocoJsonSerializerStrategy_m1998B9ABE89DFECED287F46A9A335D1AB8871D37(/*hidden argument*/NULL);
		PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C * L_3 = L_2;
		((SimpleJson_t020F22AD3AA0346D41DBB61964A925E4F60810BF_StaticFields*)il2cpp_codegen_static_fields_for(SimpleJson_t020F22AD3AA0346D41DBB61964A925E4F60810BF_il2cpp_TypeInfo_var))->set__currentJsonSerializerStrategy_0(L_3);
		G_B2_0 = ((RuntimeObject*)(L_3));
	}

IL_0017:
	{
		return G_B2_0;
	}
}
// Prime31.PocoJsonSerializerStrategy Prime31.SimpleJson::get_pocoJsonSerializerStrategy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C * SimpleJson_get_pocoJsonSerializerStrategy_m1998B9ABE89DFECED287F46A9A335D1AB8871D37 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleJson_t020F22AD3AA0346D41DBB61964A925E4F60810BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C * G_B2_0 = NULL;
	PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C * G_B1_0 = NULL;
	{
		PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C * L_0 = ((SimpleJson_t020F22AD3AA0346D41DBB61964A925E4F60810BF_StaticFields*)il2cpp_codegen_static_fields_for(SimpleJson_t020F22AD3AA0346D41DBB61964A925E4F60810BF_il2cpp_TypeInfo_var))->get__pocoJsonSerializerStrategy_1();
		PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C * L_2 = (PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C *)il2cpp_codegen_object_new(PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C_il2cpp_TypeInfo_var);
		PocoJsonSerializerStrategy__ctor_m803978E6D0EB3D53266B3F6DD01D4F6CB6DFF1E4(L_2, /*hidden argument*/NULL);
		PocoJsonSerializerStrategy_t236ADC1224FBF2EE9FFF8AFD808B6AC1749AF37C * L_3 = L_2;
		((SimpleJson_t020F22AD3AA0346D41DBB61964A925E4F60810BF_StaticFields*)il2cpp_codegen_static_fields_for(SimpleJson_t020F22AD3AA0346D41DBB61964A925E4F60810BF_il2cpp_TypeInfo_var))->set__pocoJsonSerializerStrategy_1(L_3);
		G_B2_0 = L_3;
	}

IL_0017:
	{
		return G_B2_0;
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
// System.Void Prime31.ThreadingCallbackHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadingCallbackHelper__ctor_m4B3492A68B961D11020575FAFD986E6A313BDAEB (ThreadingCallbackHelper_t8ECB03A15726D7FE39F2C3B6609167DC4A32266A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_0 = (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *)il2cpp_codegen_object_new(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_il2cpp_TypeInfo_var);
		List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB(L_0, /*hidden argument*/List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB_RuntimeMethod_var);
		__this->set__actions_4(L_0);
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_1 = (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *)il2cpp_codegen_object_new(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_il2cpp_TypeInfo_var);
		List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB(L_1, /*hidden argument*/List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB_RuntimeMethod_var);
		__this->set__currentActions_5(L_1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Prime31.ThreadingCallbackHelper::addActionToQueue(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadingCallbackHelper_addActionToQueue_m1945C6004DBB7DC86BF4D0EA2C9593EE9210113B (ThreadingCallbackHelper_t8ECB03A15726D7FE39F2C3B6609167DC4A32266A * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7701B455B6EA0411642596847118B51F91DA8BC9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_0 = __this->get__actions_4();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_2 = __this->get__actions_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___action0;
		NullCheck(L_2);
		List_1_Add_m7701B455B6EA0411642596847118B51F91DA8BC9(L_2, L_3, /*hidden argument*/List_1_Add_m7701B455B6EA0411642596847118B51F91DA8BC9_RuntimeMethod_var);
		IL2CPP_LEAVE(0x25, FINALLY_001e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001e;
	}

FINALLY_001e:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(30)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(30)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x25, IL_0025)
	}

IL_0025:
	{
		return;
	}
}
// System.Void Prime31.ThreadingCallbackHelper::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadingCallbackHelper_Update_mE3DB48A01F1AEF5D76C5A2F9F1CB9243A761DBD3 (ThreadingCallbackHelper_t8ECB03A15726D7FE39F2C3B6609167DC4A32266A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mC32923569CAAE589250C6AD9DCEEBFEC2AE11335_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9F0A626A47DAE7452E139A6961335BE81507E551_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_0 = __this->get__actions_4();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_2 = __this->get__currentActions_5();
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_3 = __this->get__actions_4();
		NullCheck(L_2);
		List_1_AddRange_mC32923569CAAE589250C6AD9DCEEBFEC2AE11335(L_2, L_3, /*hidden argument*/List_1_AddRange_mC32923569CAAE589250C6AD9DCEEBFEC2AE11335_RuntimeMethod_var);
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_4 = __this->get__actions_4();
		NullCheck(L_4);
		List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4(L_4, /*hidden argument*/List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4_RuntimeMethod_var);
		IL2CPP_LEAVE(0x35, FINALLY_002e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002e;
	}

FINALLY_002e:
	{ // begin finally (depth: 1)
		RuntimeObject * L_5 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(46)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(46)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x35, IL_0035)
	}

IL_0035:
	{
		V_1 = 0;
		goto IL_0051;
	}

IL_003c:
	{
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_6 = __this->get__currentActions_5();
		int32_t L_7 = V_1;
		NullCheck(L_6);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = List_1_get_Item_m9F0A626A47DAE7452E139A6961335BE81507E551_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m9F0A626A47DAE7452E139A6961335BE81507E551_RuntimeMethod_var);
		NullCheck(L_8);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_8, /*hidden argument*/NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_11 = __this->get__currentActions_5();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_inline(L_11, /*hidden argument*/List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_RuntimeMethod_var);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_003c;
		}
	}
	{
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_13 = __this->get__currentActions_5();
		NullCheck(L_13);
		List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4(L_13, /*hidden argument*/List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4_RuntimeMethod_var);
		return;
	}
}
// System.Void Prime31.ThreadingCallbackHelper::disableIfEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadingCallbackHelper_disableIfEmpty_m90FF81D379FBDC29AE5A1907FA9ABE14774AE0F3 (ThreadingCallbackHelper_t8ECB03A15726D7FE39F2C3B6609167DC4A32266A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_0 = __this->get__actions_4();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_2 = __this->get__actions_4();
			NullCheck(L_2);
			int32_t L_3;
			L_3 = List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_inline(L_2, /*hidden argument*/List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_RuntimeMethod_var);
			if (L_3)
			{
				goto IL_0024;
			}
		}

IL_001d:
		{
			Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
		}

IL_0024:
		{
			IL2CPP_LEAVE(0x30, FINALLY_0029);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0029;
	}

FINALLY_0029:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(41)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(41)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x30, IL_0030)
	}

IL_0030:
	{
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
// System.Void Prime31.Utils::logObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_logObject_m9DE5038BEEEC42EE1DB1D72499FBB5E374C2E8C2 (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Json_tE438EA5A4F39CA21F670B3F0AB55B25568713BF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_tE438EA5A4F39CA21F670B3F0AB55B25568713BF3_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Json_encode_m667B2DCA3CD0DCDFDBB1D03C0252FEAF232EDCD5(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		Utils_prettyPrintJson_m59A2DF2303AB84DF40AA2654DC1709924A39983D(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Prime31.Utils::prettyPrintJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_prettyPrintJson_m59A2DF2303AB84DF40AA2654DC1709924A39983D (String_t* ___json0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_0 = L_0;
		String_t* L_1 = ___json0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_2 = ___json0;
		String_t* L_3;
		L_3 = JsonFormatter_prettyPrint_m92B2FFFD145D0E6A492F74AC004FB667657A416A(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		goto IL_002a;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_001e;
		throw e;
	}

CATCH_001e:
	{ // begin catch(System.Exception)
		String_t* L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var)));
		Console_WriteLine_mE9EEA95C541D41E36A0F4844153A67EAAA0D12F7(L_5, /*hidden argument*/NULL);
		goto IL_002a;
	} // end catch (depth: 1)

IL_002a:
	{
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
// System.Void Prime31.Reflection.CacheResolver/<createGetHandler>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcreateGetHandlerU3Ec__AnonStorey1__ctor_m98B9EA1EA26971779B77528A3E6C7A2B955B7BEF (U3CcreateGetHandlerU3Ec__AnonStorey1_t02A1377C5EAAAC329AE9F663DFD282EA5CF2108E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Prime31.Reflection.CacheResolver/<createGetHandler>c__AnonStorey1::<>m__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CcreateGetHandlerU3Ec__AnonStorey1_U3CU3Em__0_mA56C519CB2E562696744435BDF3B561AC9B9BB03 (U3CcreateGetHandlerU3Ec__AnonStorey1_t02A1377C5EAAAC329AE9F663DFD282EA5CF2108E * __this, RuntimeObject * ___instance0, const RuntimeMethod* method)
{
	{
		FieldInfo_t * L_0 = __this->get_fieldInfo_0();
		RuntimeObject * L_1 = ___instance0;
		NullCheck(L_0);
		RuntimeObject * L_2;
		L_2 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(19 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_0, L_1);
		return L_2;
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
// System.Void Prime31.Reflection.CacheResolver/<createGetHandler>c__AnonStorey3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcreateGetHandlerU3Ec__AnonStorey3__ctor_m15784AD830AFDBAE4B7ED5F89DEE437163AC0189 (U3CcreateGetHandlerU3Ec__AnonStorey3_t3C5E60C6B5886F65A76AAB8AFF20B57B80F8712A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Prime31.Reflection.CacheResolver/<createGetHandler>c__AnonStorey3::<>m__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CcreateGetHandlerU3Ec__AnonStorey3_U3CU3Em__0_mAA0FE3A16BE79DF017244469DC62C44E1D3418EB (U3CcreateGetHandlerU3Ec__AnonStorey3_t3C5E60C6B5886F65A76AAB8AFF20B57B80F8712A * __this, RuntimeObject * ___instance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t * L_0 = __this->get_getMethodInfo_0();
		RuntimeObject * L_1 = ___instance0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = ((Type_t_StaticFields*)il2cpp_codegen_static_fields_for(Type_t_il2cpp_TypeInfo_var))->get_EmptyTypes_5();
		NullCheck(L_0);
		RuntimeObject * L_3;
		L_3 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_0, L_1, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void Prime31.Reflection.CacheResolver/<createSetHandler>c__AnonStorey2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcreateSetHandlerU3Ec__AnonStorey2__ctor_mD8B26D67F93639E73A136614B218248E734D73D5 (U3CcreateSetHandlerU3Ec__AnonStorey2_t3C37B8E13768D45BB60408EDA64A9D6452077CE0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Prime31.Reflection.CacheResolver/<createSetHandler>c__AnonStorey2::<>m__0(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcreateSetHandlerU3Ec__AnonStorey2_U3CU3Em__0_mE2303DE8B0C90E2A26EE180FE9141E6112575A47 (U3CcreateSetHandlerU3Ec__AnonStorey2_t3C37B8E13768D45BB60408EDA64A9D6452077CE0 * __this, RuntimeObject * ___instance0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		FieldInfo_t * L_0 = __this->get_fieldInfo_0();
		RuntimeObject * L_1 = ___instance0;
		RuntimeObject * L_2 = ___value1;
		NullCheck(L_0);
		FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C(L_0, L_1, L_2, /*hidden argument*/NULL);
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
// System.Void Prime31.Reflection.CacheResolver/<createSetHandler>c__AnonStorey4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcreateSetHandlerU3Ec__AnonStorey4__ctor_m91D6AE99303C028473B28F9649E6EF1E791E0513 (U3CcreateSetHandlerU3Ec__AnonStorey4_tD61E3F935224CDCF591C2A5450A489564F55A099 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Prime31.Reflection.CacheResolver/<createSetHandler>c__AnonStorey4::<>m__0(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcreateSetHandlerU3Ec__AnonStorey4_U3CU3Em__0_mFF0A31676881ECB0F37891E772D4CBEB8E31231D (U3CcreateSetHandlerU3Ec__AnonStorey4_tD61E3F935224CDCF591C2A5450A489564F55A099 * __this, RuntimeObject * ___instance0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t * L_0 = __this->get_setMethodInfo_0();
		RuntimeObject * L_1 = ___instance0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		RuntimeObject * L_4 = ___value1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		NullCheck(L_0);
		RuntimeObject * L_5;
		L_5 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_0, L_1, L_3, /*hidden argument*/NULL);
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
// System.Void Prime31.Reflection.CacheResolver/<getNewInstance>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetNewInstanceU3Ec__AnonStorey0__ctor_m23D8FAE760D5CE3E0A767180BDB2385EAA164C78 (U3CgetNewInstanceU3Ec__AnonStorey0_t0874DDADE8E8CD3874E55EB03602C06A726898CA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Prime31.Reflection.CacheResolver/<getNewInstance>c__AnonStorey0::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CgetNewInstanceU3Ec__AnonStorey0_U3CU3Em__0_mCCEA2EF8C3C88A88B9C9399E244726EA0E3C8A9A (U3CgetNewInstanceU3Ec__AnonStorey0_t0874DDADE8E8CD3874E55EB03602C06A726898CA * __this, const RuntimeMethod* method)
{
	{
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_0 = __this->get_constructorInfo_0();
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = ConstructorInfo_Invoke_m8DF5D6F53038C7B6443EEA82D922724F39CD2906(L_0, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL, /*hidden argument*/NULL);
		return L_1;
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
// System.Void Prime31.Reflection.CacheResolver/CtorDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CtorDelegate__ctor_mC9F313A8E87DE7C95D8C397A222845EA3E7F654D (CtorDelegate_tC5D8FE74BA0A8B81F9AB288E39882F34B7A2AC2A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Object Prime31.Reflection.CacheResolver/CtorDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CtorDelegate_Invoke_mEDFE8AF494F4D1D1CDB6E753E7C0025CCEDB3BAC (CtorDelegate_tC5D8FE74BA0A8B81F9AB288E39882F34B7A2AC2A * __this, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
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
			if (___parameterCount == 0)
			{
				// open
				typedef RuntimeObject * (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject * (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
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
						result = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Prime31.Reflection.CacheResolver/CtorDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CtorDelegate_BeginInvoke_m4D6849F6B65A1E185AFAAD84BC1E505FC8B53B30 (CtorDelegate_tC5D8FE74BA0A8B81F9AB288E39882F34B7A2AC2A * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Object Prime31.Reflection.CacheResolver/CtorDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CtorDelegate_EndInvoke_mC5738B8CA324B825D53D9427CF7061DADC8C49AB (CtorDelegate_tC5D8FE74BA0A8B81F9AB288E39882F34B7A2AC2A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Prime31.Reflection.CacheResolver/MemberMap::.ctor(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberMap__ctor_m70EE2B2E7BFFA90ADBDBDBB0F4077B460A8121C3 (MemberMap_tA722F3C527755D23AB14FC21BFE6A283F7C75D66 * __this, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		PropertyInfo_t * L_0 = ___propertyInfo0;
		__this->set_MemberInfo_0(L_0);
		PropertyInfo_t * L_1 = ___propertyInfo0;
		NullCheck(L_1);
		Type_t * L_2;
		L_2 = VirtFuncInvoker0< Type_t * >::Invoke(19 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_1);
		__this->set_Type_1(L_2);
		PropertyInfo_t * L_3 = ___propertyInfo0;
		IL2CPP_RUNTIME_CLASS_INIT(CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0_il2cpp_TypeInfo_var);
		GetHandler_tAE31D3C378B82D9F3EC44C4BD9691E9E1836ED73 * L_4;
		L_4 = CacheResolver_createGetHandler_m68CA49A523B46D11DDEFC0022746103BA8DA5FB2(L_3, /*hidden argument*/NULL);
		__this->set_Getter_2(L_4);
		PropertyInfo_t * L_5 = ___propertyInfo0;
		SetHandler_tAE38CDA0AFD7619D49B7E3A9FE386955818B44E8 * L_6;
		L_6 = CacheResolver_createSetHandler_m8599002127B717EC9692AB528DEB5C1EB94CCFC3(L_5, /*hidden argument*/NULL);
		__this->set_Setter_3(L_6);
		return;
	}
}
// System.Void Prime31.Reflection.CacheResolver/MemberMap::.ctor(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberMap__ctor_m0AFC2A4F322FA25E1B61806670B40FD2380C302B (MemberMap_tA722F3C527755D23AB14FC21BFE6A283F7C75D66 * __this, FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		FieldInfo_t * L_0 = ___fieldInfo0;
		__this->set_MemberInfo_0(L_0);
		FieldInfo_t * L_1 = ___fieldInfo0;
		NullCheck(L_1);
		Type_t * L_2;
		L_2 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_1);
		__this->set_Type_1(L_2);
		FieldInfo_t * L_3 = ___fieldInfo0;
		IL2CPP_RUNTIME_CLASS_INIT(CacheResolver_t598D600EF9A01FCFE5CFFDA613D73B36DDF18ED0_il2cpp_TypeInfo_var);
		GetHandler_tAE31D3C378B82D9F3EC44C4BD9691E9E1836ED73 * L_4;
		L_4 = CacheResolver_createGetHandler_m292F615289C20DD2D407685BB738267E4F9365C2(L_3, /*hidden argument*/NULL);
		__this->set_Getter_2(L_4);
		FieldInfo_t * L_5 = ___fieldInfo0;
		SetHandler_tAE38CDA0AFD7619D49B7E3A9FE386955818B44E8 * L_6;
		L_6 = CacheResolver_createSetHandler_mAE39A30C48F160B352B8E000B929552681333AD5(L_5, /*hidden argument*/NULL);
		__this->set_Setter_3(L_6);
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
// System.Void Prime31.Json/Deserializer::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deserializer__ctor_mD97507885387B54AE2983879F9EA33CC6E274829 (Deserializer_t462BAFC366F4A16034E00799D6C0E08B2A720212 * __this, String_t* ___json0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___json0;
		NullCheck(L_0);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1;
		L_1 = String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C(L_0, /*hidden argument*/NULL);
		__this->set_charArray_0(L_1);
		return;
	}
}
// System.Object Prime31.Json/Deserializer::deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Deserializer_deserialize_m936174988598B97A1F321404ECD4268474B7F725 (String_t* ___json0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Deserializer_t462BAFC366F4A16034E00799D6C0E08B2A720212_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Deserializer_t462BAFC366F4A16034E00799D6C0E08B2A720212 * V_0 = NULL;
	{
		String_t* L_0 = ___json0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_1 = ___json0;
		Deserializer_t462BAFC366F4A16034E00799D6C0E08B2A720212 * L_2 = (Deserializer_t462BAFC366F4A16034E00799D6C0E08B2A720212 *)il2cpp_codegen_object_new(Deserializer_t462BAFC366F4A16034E00799D6C0E08B2A720212_il2cpp_TypeInfo_var);
		Deserializer__ctor_mD97507885387B54AE2983879F9EA33CC6E274829(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Deserializer_t462BAFC366F4A16034E00799D6C0E08B2A720212 * L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject * L_4;
		L_4 = Deserializer_deserialize_m4C003633D9CBAAEAC50C092130F1CDDB6BFC606A(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0014:
	{
		return NULL;
	}
}
// System.Object Prime31.Json/Deserializer::deserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Deserializer_deserialize_m4C003633D9CBAAEAC50C092130F1CDDB6BFC606A (Deserializer_t462BAFC366F4A16034E00799D6C0E08B2A720212 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = __this->get_charArray_0();
		RuntimeObject * L_1;
		L_1 = Deserializer_parseValue_m0372CAE3C60CEC2986CAA70ECC5AABA6165DF36F(__this, L_0, (int32_t*)(&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object Prime31.Json/Deserializer::parseValue(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Deserializer_parseValue_m0372CAE3C60CEC2986CAA70ECC5AABA6165DF36F (Deserializer_t462BAFC366F4A16034E00799D6C0E08B2A720212 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___json0, int32_t* ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA539038315AABE91ABF55F3F1AEE619EEBFC183A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA88A2D964F57B37C63183F5236085B715F076B8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		int32_t L_2 = *((int32_t*)L_1);
		int32_t L_3;
		L_3 = Deserializer_lookAhead_m8CB7D0B3B77F59E1A7360A1499BA2C514E65783E(__this, L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		switch (L_4)
		{
			case 0:
			{
				goto IL_00a6;
			}
			case 1:
			{
				goto IL_0057;
			}
			case 2:
			{
				goto IL_00ab;
			}
			case 3:
			{
				goto IL_0060;
			}
			case 4:
			{
				goto IL_00ab;
			}
			case 5:
			{
				goto IL_00ab;
			}
			case 6:
			{
				goto IL_00ab;
			}
			case 7:
			{
				goto IL_0045;
			}
			case 8:
			{
				goto IL_004e;
			}
			case 9:
			{
				goto IL_0069;
			}
			case 10:
			{
				goto IL_0082;
			}
			case 11:
			{
				goto IL_009b;
			}
		}
	}
	{
		goto IL_00ab;
	}

IL_0045:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = ___json0;
		int32_t* L_6 = ___index1;
		String_t* L_7;
		L_7 = Deserializer_parseString_m6F7C08929B3E829139CA6DF476AF6494C2B0C069(__this, L_5, (int32_t*)L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_004e:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_8 = ___json0;
		int32_t* L_9 = ___index1;
		RuntimeObject * L_10;
		L_10 = Deserializer_parseNumber_m712623F57801F97A279CD88234A0B3A3863E64B5(__this, L_8, (int32_t*)L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0057:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_11 = ___json0;
		int32_t* L_12 = ___index1;
		RuntimeObject* L_13;
		L_13 = Deserializer_parseObject_m30E5F094344085606025462441166355CAAFB70F(__this, L_11, (int32_t*)L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0060:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_14 = ___json0;
		int32_t* L_15 = ___index1;
		RuntimeObject* L_16;
		L_16 = Deserializer_parseArray_mF12E301EE19CC00460A194F36B95E8F2841F900A(__this, L_14, (int32_t*)L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_0069:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_17 = ___json0;
		int32_t* L_18 = ___index1;
		int32_t L_19;
		L_19 = Deserializer_nextToken_m515F03A4C98FD8A0DB8A99567B4BC7CF085533A9(__this, L_17, (int32_t*)L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Boolean_Parse_m97AFBD113AE4629041678100C5A595F3529C7F7D(_stringLiteralDA88A2D964F57B37C63183F5236085B715F076B8, /*hidden argument*/NULL);
		bool L_21 = L_20;
		RuntimeObject * L_22 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_21);
		return L_22;
	}

IL_0082:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_23 = ___json0;
		int32_t* L_24 = ___index1;
		int32_t L_25;
		L_25 = Deserializer_nextToken_m515F03A4C98FD8A0DB8A99567B4BC7CF085533A9(__this, L_23, (int32_t*)L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Boolean_Parse_m97AFBD113AE4629041678100C5A595F3529C7F7D(_stringLiteralA539038315AABE91ABF55F3F1AEE619EEBFC183A, /*hidden argument*/NULL);
		bool L_27 = L_26;
		RuntimeObject * L_28 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_27);
		return L_28;
	}

IL_009b:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_29 = ___json0;
		int32_t* L_30 = ___index1;
		int32_t L_31;
		L_31 = Deserializer_nextToken_m515F03A4C98FD8A0DB8A99567B4BC7CF085533A9(__this, L_29, (int32_t*)L_30, /*hidden argument*/NULL);
		return NULL;
	}

IL_00a6:
	{
		goto IL_00ab;
	}

IL_00ab:
	{
		return NULL;
	}
}
// System.Collections.IDictionary Prime31.Json/Deserializer::parseObject(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Deserializer_parseObject_m30E5F094344085606025462441166355CAAFB70F (Deserializer_t462BAFC366F4A16034E00799D6C0E08B2A720212 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___json0, int32_t* ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(L_0, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		V_0 = L_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___json0;
		int32_t* L_2 = ___index1;
		int32_t L_3;
		L_3 = Deserializer_nextToken_m515F03A4C98FD8A0DB8A99567B4BC7CF085533A9(__this, L_1, (int32_t*)L_2, /*hidden argument*/NULL);
		V_2 = (bool)0;
		goto IL_0085;
	}

IL_0016:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = ___json0;
		int32_t* L_5 = ___index1;
		int32_t L_6 = *((int32_t*)L_5);
		int32_t L_7;
		L_7 = Deserializer_lookAhead_m8CB7D0B3B77F59E1A7360A1499BA2C514E65783E(__this, L_4, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		int32_t L_8 = V_1;
		if (L_8)
		{
			goto IL_0028;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_0028:
	{
		int32_t L_9 = V_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)6))))
		{
			goto IL_003d;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_10 = ___json0;
		int32_t* L_11 = ___index1;
		int32_t L_12;
		L_12 = Deserializer_nextToken_m515F03A4C98FD8A0DB8A99567B4BC7CF085533A9(__this, L_10, (int32_t*)L_11, /*hidden argument*/NULL);
		goto IL_0085;
	}

IL_003d:
	{
		int32_t L_13 = V_1;
		if ((!(((uint32_t)L_13) == ((uint32_t)2))))
		{
			goto IL_004f;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_14 = ___json0;
		int32_t* L_15 = ___index1;
		int32_t L_16;
		L_16 = Deserializer_nextToken_m515F03A4C98FD8A0DB8A99567B4BC7CF085533A9(__this, L_14, (int32_t*)L_15, /*hidden argument*/NULL);
		RuntimeObject* L_17 = V_0;
		return L_17;
	}

IL_004f:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_18 = ___json0;
		int32_t* L_19 = ___index1;
		String_t* L_20;
		L_20 = Deserializer_parseString_m6F7C08929B3E829139CA6DF476AF6494C2B0C069(__this, L_18, (int32_t*)L_19, /*hidden argument*/NULL);
		V_3 = L_20;
		String_t* L_21 = V_3;
		if (L_21)
		{
			goto IL_0060;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_0060:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_22 = ___json0;
		int32_t* L_23 = ___index1;
		int32_t L_24;
		L_24 = Deserializer_nextToken_m515F03A4C98FD8A0DB8A99567B4BC7CF085533A9(__this, L_22, (int32_t*)L_23, /*hidden argument*/NULL);
		V_1 = L_24;
		int32_t L_25 = V_1;
		if ((((int32_t)L_25) == ((int32_t)5)))
		{
			goto IL_0072;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_0072:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_26 = ___json0;
		int32_t* L_27 = ___index1;
		RuntimeObject * L_28;
		L_28 = Deserializer_parseValue_m0372CAE3C60CEC2986CAA70ECC5AABA6165DF36F(__this, L_26, (int32_t*)L_27, /*hidden argument*/NULL);
		V_4 = L_28;
		RuntimeObject* L_29 = V_0;
		String_t* L_30 = V_3;
		RuntimeObject * L_31 = V_4;
		NullCheck(L_29);
		InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_29, L_30, L_31);
	}

IL_0085:
	{
		bool L_32 = V_2;
		if (!L_32)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_33 = V_0;
		return L_33;
	}
}
// System.Collections.IList Prime31.Json/Deserializer::parseArray(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Deserializer_parseArray_mF12E301EE19CC00460A194F36B95E8F2841F900A (Deserializer_t462BAFC366F4A16034E00799D6C0E08B2A720212 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___json0, int32_t* ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)il2cpp_codegen_object_new(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B(L_0, /*hidden argument*/List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		V_0 = L_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___json0;
		int32_t* L_2 = ___index1;
		int32_t L_3;
		L_3 = Deserializer_nextToken_m515F03A4C98FD8A0DB8A99567B4BC7CF085533A9(__this, L_1, (int32_t*)L_2, /*hidden argument*/NULL);
		V_1 = (bool)0;
		goto IL_0062;
	}

IL_0016:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = ___json0;
		int32_t* L_5 = ___index1;
		int32_t L_6 = *((int32_t*)L_5);
		int32_t L_7;
		L_7 = Deserializer_lookAhead_m8CB7D0B3B77F59E1A7360A1499BA2C514E65783E(__this, L_4, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		int32_t L_8 = V_2;
		if (L_8)
		{
			goto IL_0028;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_0028:
	{
		int32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) == ((uint32_t)6))))
		{
			goto IL_003d;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_10 = ___json0;
		int32_t* L_11 = ___index1;
		int32_t L_12;
		L_12 = Deserializer_nextToken_m515F03A4C98FD8A0DB8A99567B4BC7CF085533A9(__this, L_10, (int32_t*)L_11, /*hidden argument*/NULL);
		goto IL_0062;
	}

IL_003d:
	{
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)4))))
		{
			goto IL_0052;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_14 = ___json0;
		int32_t* L_15 = ___index1;
		int32_t L_16;
		L_16 = Deserializer_nextToken_m515F03A4C98FD8A0DB8A99567B4BC7CF085533A9(__this, L_14, (int32_t*)L_15, /*hidden argument*/NULL);
		goto IL_0068;
	}

IL_0052:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_17 = ___json0;
		int32_t* L_18 = ___index1;
		RuntimeObject * L_19;
		L_19 = Deserializer_parseValue_m0372CAE3C60CEC2986CAA70ECC5AABA6165DF36F(__this, L_17, (int32_t*)L_18, /*hidden argument*/NULL);
		V_3 = L_19;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_20 = V_0;
		RuntimeObject * L_21 = V_3;
		NullCheck(L_20);
		List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E(L_20, L_21, /*hidden argument*/List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
	}

IL_0062:
	{
		bool L_22 = V_1;
		if (!L_22)
		{
			goto IL_0016;
		}
	}

IL_0068:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_23 = V_0;
		return L_23;
	}
}
// System.String Prime31.Json/Deserializer::parseString(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Deserializer_parseString_m6F7C08929B3E829139CA6DF476AF6494C2B0C069 (Deserializer_t462BAFC366F4A16034E00799D6C0E08B2A720212 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___json0, int32_t* ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_5 = NULL;
	uint32_t V_6 = 0;
	Il2CppChar V_7 = 0x0;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_8 = NULL;
	int32_t V_9 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_0 = L_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___json0;
		int32_t* L_2 = ___index1;
		Deserializer_eatWhitespace_m41DBE8FC8D3E3458EF4B97E87E388C9B03D149C1(__this, L_1, (int32_t*)L_2, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ___json0;
		int32_t* L_4 = ___index1;
		int32_t* L_5 = ___index1;
		int32_t L_6 = *((int32_t*)L_5);
		int32_t L_7 = L_6;
		V_2 = L_7;
		*((int32_t*)L_4) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		int32_t L_8 = V_2;
		NullCheck(L_3);
		int32_t L_9 = L_8;
		uint16_t L_10 = (uint16_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_1 = L_10;
		V_3 = (bool)0;
		goto IL_01f1;
	}

IL_0021:
	{
		int32_t* L_11 = ___index1;
		int32_t L_12 = *((int32_t*)L_11);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_13 = ___json0;
		NullCheck(L_13);
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))))
		{
			goto IL_0030;
		}
	}
	{
		goto IL_01f7;
	}

IL_0030:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_14 = ___json0;
		int32_t* L_15 = ___index1;
		int32_t* L_16 = ___index1;
		int32_t L_17 = *((int32_t*)L_16);
		int32_t L_18 = L_17;
		V_2 = L_18;
		*((int32_t*)L_15) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
		int32_t L_19 = V_2;
		NullCheck(L_14);
		int32_t L_20 = L_19;
		uint16_t L_21 = (uint16_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_1 = L_21;
		Il2CppChar L_22 = V_1;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_004b;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_01f7;
	}

IL_004b:
	{
		Il2CppChar L_23 = V_1;
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_01e4;
		}
	}
	{
		int32_t* L_24 = ___index1;
		int32_t L_25 = *((int32_t*)L_24);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_26 = ___json0;
		NullCheck(L_26);
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))))
		{
			goto IL_0062;
		}
	}
	{
		goto IL_01f7;
	}

IL_0062:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_27 = ___json0;
		int32_t* L_28 = ___index1;
		int32_t* L_29 = ___index1;
		int32_t L_30 = *((int32_t*)L_29);
		int32_t L_31 = L_30;
		V_2 = L_31;
		*((int32_t*)L_28) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
		int32_t L_32 = V_2;
		NullCheck(L_27);
		int32_t L_33 = L_32;
		uint16_t L_34 = (uint16_t)(L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_1 = L_34;
		Il2CppChar L_35 = V_1;
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0089;
		}
	}
	{
		String_t* L_36 = V_0;
		Il2CppChar L_37 = ((Il2CppChar)((int32_t)34));
		RuntimeObject * L_38 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_37);
		String_t* L_39;
		L_39 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(L_36, L_38, /*hidden argument*/NULL);
		V_0 = L_39;
		goto IL_01df;
	}

IL_0089:
	{
		Il2CppChar L_40 = V_1;
		if ((!(((uint32_t)L_40) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00a4;
		}
	}
	{
		String_t* L_41 = V_0;
		Il2CppChar L_42 = ((Il2CppChar)((int32_t)92));
		RuntimeObject * L_43 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_42);
		String_t* L_44;
		L_44 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(L_41, L_43, /*hidden argument*/NULL);
		V_0 = L_44;
		goto IL_01df;
	}

IL_00a4:
	{
		Il2CppChar L_45 = V_1;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00bf;
		}
	}
	{
		String_t* L_46 = V_0;
		Il2CppChar L_47 = ((Il2CppChar)((int32_t)47));
		RuntimeObject * L_48 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_47);
		String_t* L_49;
		L_49 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(L_46, L_48, /*hidden argument*/NULL);
		V_0 = L_49;
		goto IL_01df;
	}

IL_00bf:
	{
		Il2CppChar L_50 = V_1;
		if ((!(((uint32_t)L_50) == ((uint32_t)((int32_t)98)))))
		{
			goto IL_00d9;
		}
	}
	{
		String_t* L_51 = V_0;
		Il2CppChar L_52 = ((Il2CppChar)8);
		RuntimeObject * L_53 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_52);
		String_t* L_54;
		L_54 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(L_51, L_53, /*hidden argument*/NULL);
		V_0 = L_54;
		goto IL_01df;
	}

IL_00d9:
	{
		Il2CppChar L_55 = V_1;
		if ((!(((uint32_t)L_55) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_00f4;
		}
	}
	{
		String_t* L_56 = V_0;
		Il2CppChar L_57 = ((Il2CppChar)((int32_t)12));
		RuntimeObject * L_58 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_57);
		String_t* L_59;
		L_59 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(L_56, L_58, /*hidden argument*/NULL);
		V_0 = L_59;
		goto IL_01df;
	}

IL_00f4:
	{
		Il2CppChar L_60 = V_1;
		if ((!(((uint32_t)L_60) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_010f;
		}
	}
	{
		String_t* L_61 = V_0;
		Il2CppChar L_62 = ((Il2CppChar)((int32_t)10));
		RuntimeObject * L_63 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_62);
		String_t* L_64;
		L_64 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(L_61, L_63, /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_01df;
	}

IL_010f:
	{
		Il2CppChar L_65 = V_1;
		if ((!(((uint32_t)L_65) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_012a;
		}
	}
	{
		String_t* L_66 = V_0;
		Il2CppChar L_67 = ((Il2CppChar)((int32_t)13));
		RuntimeObject * L_68 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_67);
		String_t* L_69;
		L_69 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(L_66, L_68, /*hidden argument*/NULL);
		V_0 = L_69;
		goto IL_01df;
	}

IL_012a:
	{
		Il2CppChar L_70 = V_1;
		if ((!(((uint32_t)L_70) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_0145;
		}
	}
	{
		String_t* L_71 = V_0;
		Il2CppChar L_72 = ((Il2CppChar)((int32_t)9));
		RuntimeObject * L_73 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_72);
		String_t* L_74;
		L_74 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(L_71, L_73, /*hidden argument*/NULL);
		V_0 = L_74;
		goto IL_01df;
	}

IL_0145:
	{
		Il2CppChar L_75 = V_1;
		if ((!(((uint32_t)L_75) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_01df;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_76 = ___json0;
		NullCheck(L_76);
		int32_t* L_77 = ___index1;
		int32_t L_78 = *((int32_t*)L_77);
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_76)->max_length))), (int32_t)L_78));
		int32_t L_79 = V_4;
		if ((((int32_t)L_79) < ((int32_t)4)))
		{
			goto IL_01da;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_80 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)4);
		V_5 = L_80;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_81 = ___json0;
		int32_t* L_82 = ___index1;
		int32_t L_83 = *((int32_t*)L_82);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_84 = V_5;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_81, L_83, (RuntimeArray *)(RuntimeArray *)L_84, 0, 4, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_85 = V_5;
		String_t* L_86;
		L_86 = String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344(NULL, L_85, /*hidden argument*/NULL);
		uint32_t L_87;
		L_87 = UInt32_Parse_m98EAE0991755E35BE7F7713E73CF004BFE2C9DBA(L_86, ((int32_t)515), /*hidden argument*/NULL);
		V_6 = L_87;
	}

IL_0184:
	try
	{ // begin try (depth: 1)
		String_t* L_88 = V_0;
		uint32_t L_89 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		String_t* L_90;
		L_90 = Char_ConvertFromUtf32_m61381B403A3A7CF89350DE07F87D91C169C71AD7(L_89, /*hidden argument*/NULL);
		String_t* L_91;
		L_91 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_88, L_90, /*hidden argument*/NULL);
		V_0 = L_91;
		goto IL_01cf;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0197;
		throw e;
	}

CATCH_0197:
	{ // begin catch(System.Exception)
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_92 = V_5;
			V_8 = L_92;
			V_9 = 0;
			goto IL_01bf;
		}

IL_01a4:
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_93 = V_8;
			int32_t L_94 = V_9;
			NullCheck(L_93);
			int32_t L_95 = L_94;
			uint16_t L_96 = (uint16_t)(L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
			V_7 = L_96;
			String_t* L_97 = V_0;
			Il2CppChar L_98 = V_7;
			Il2CppChar L_99 = L_98;
			RuntimeObject * L_100 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)), &L_99);
			String_t* L_101;
			L_101 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(L_97, L_100, /*hidden argument*/NULL);
			V_0 = L_101;
			int32_t L_102 = V_9;
			V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_102, (int32_t)1));
		}

IL_01bf:
		{
			int32_t L_103 = V_9;
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_104 = V_8;
			NullCheck(L_104);
			if ((((int32_t)L_103) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_104)->max_length))))))
			{
				goto IL_01a4;
			}
		}

IL_01ca:
		{
			goto IL_01cf;
		}
	} // end catch (depth: 1)

IL_01cf:
	{
		int32_t* L_105 = ___index1;
		int32_t* L_106 = ___index1;
		int32_t L_107 = *((int32_t*)L_106);
		*((int32_t*)L_105) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_107, (int32_t)4));
		goto IL_01df;
	}

IL_01da:
	{
		goto IL_01f7;
	}

IL_01df:
	{
		goto IL_01f1;
	}

IL_01e4:
	{
		String_t* L_108 = V_0;
		Il2CppChar L_109 = V_1;
		Il2CppChar L_110 = L_109;
		RuntimeObject * L_111 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_110);
		String_t* L_112;
		L_112 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(L_108, L_111, /*hidden argument*/NULL);
		V_0 = L_112;
	}

IL_01f1:
	{
		bool L_113 = V_3;
		if (!L_113)
		{
			goto IL_0021;
		}
	}

IL_01f7:
	{
		bool L_114 = V_3;
		if (L_114)
		{
			goto IL_01ff;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_01ff:
	{
		String_t* L_115 = V_0;
		return L_115;
	}
}
// System.Object Prime31.Json/Deserializer::parseNumber(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Deserializer_parseNumber_m712623F57801F97A279CD88234A0B3A3863E64B5 (Deserializer_t462BAFC366F4A16034E00799D6C0E08B2A720212 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___json0, int32_t* ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_2 = NULL;
	String_t* V_3 = NULL;
	int64_t V_4 = 0;
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		Deserializer_eatWhitespace_m41DBE8FC8D3E3458EF4B97E87E388C9B03D149C1(__this, L_0, (int32_t*)L_1, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = ___json0;
		int32_t* L_3 = ___index1;
		int32_t L_4 = *((int32_t*)L_3);
		int32_t L_5;
		L_5 = Deserializer_getLastIndexOfNumber_mC11CDDF2ADB33028C39C6FBCE31A941783EA1A2F(__this, L_2, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		int32_t* L_7 = ___index1;
		int32_t L_8 = *((int32_t*)L_7);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_8)), (int32_t)1));
		int32_t L_9 = V_1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_10 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)L_9);
		V_2 = L_10;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_11 = ___json0;
		int32_t* L_12 = ___index1;
		int32_t L_13 = *((int32_t*)L_12);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_14 = V_2;
		int32_t L_15 = V_1;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_11, L_13, (RuntimeArray *)(RuntimeArray *)L_14, 0, L_15, /*hidden argument*/NULL);
		int32_t* L_16 = ___index1;
		int32_t L_17 = V_0;
		*((int32_t*)L_16) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_18 = V_2;
		String_t* L_19;
		L_19 = String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344(NULL, L_18, /*hidden argument*/NULL);
		V_3 = L_19;
		String_t* L_20 = V_3;
		NullCheck(L_20);
		bool L_21;
		L_21 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_20, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_22 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_23;
		L_23 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		bool L_24;
		L_24 = Int64_TryParse_m4A94015941D9BD9F9304D1FE14F17E84BFD3B69A(L_22, 7, L_23, (int64_t*)(&V_4), /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_0062;
		}
	}
	{
		int64_t L_25 = V_4;
		int64_t L_26 = L_25;
		RuntimeObject * L_27 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_26);
		return L_27;
	}

IL_0062:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_28 = V_2;
		String_t* L_29;
		L_29 = String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344(NULL, L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_30;
		L_30 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		double L_31;
		L_31 = Double_Parse_m281C3FAE601723AC732D26BAFC6D61CEFD2E0F7D(L_29, L_30, /*hidden argument*/NULL);
		double L_32 = L_31;
		RuntimeObject * L_33 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_32);
		return L_33;
	}
}
// System.Int32 Prime31.Json/Deserializer::getLastIndexOfNumber(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deserializer_getLastIndexOfNumber_mC11CDDF2ADB33028C39C6FBCE31A941783EA1A2F (Deserializer_t462BAFC366F4A16034E00799D6C0E08B2A720212 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___json0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral750483B1B79D7876103D12AD91A365DD2A867A80);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index1;
		V_0 = L_0;
		goto IL_0023;
	}

IL_0007:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___json0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint16_t L_4 = (uint16_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(_stringLiteral750483B1B79D7876103D12AD91A365DD2A867A80);
		int32_t L_5;
		L_5 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(_stringLiteral750483B1B79D7876103D12AD91A365DD2A867A80, L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_002c;
	}

IL_001f:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0023:
	{
		int32_t L_7 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_8 = ___json0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_0007;
		}
	}

IL_002c:
	{
		int32_t L_9 = V_0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1));
	}
}
// System.Void Prime31.Json/Deserializer::eatWhitespace(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deserializer_eatWhitespace_m41DBE8FC8D3E3458EF4B97E87E388C9B03D149C1 (Deserializer_t462BAFC366F4A16034E00799D6C0E08B2A720212 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___json0, int32_t* ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBC658B067B5C785A3F0BB67D73755F6FEE7F70C);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0024;
	}

IL_0005:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		int32_t L_2 = *((int32_t*)L_1);
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint16_t L_4 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(_stringLiteralEBC658B067B5C785A3F0BB67D73755F6FEE7F70C);
		int32_t L_5;
		L_5 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(_stringLiteralEBC658B067B5C785A3F0BB67D73755F6FEE7F70C, L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_001e;
		}
	}
	{
		goto IL_002e;
	}

IL_001e:
	{
		int32_t* L_6 = ___index1;
		int32_t* L_7 = ___index1;
		int32_t L_8 = *((int32_t*)L_7);
		*((int32_t*)L_6) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0024:
	{
		int32_t* L_9 = ___index1;
		int32_t L_10 = *((int32_t*)L_9);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_11 = ___json0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_0005;
		}
	}

IL_002e:
	{
		return;
	}
}
// Prime31.Json/Deserializer/JsonToken Prime31.Json/Deserializer::lookAhead(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deserializer_lookAhead_m8CB7D0B3B77F59E1A7360A1499BA2C514E65783E (Deserializer_t462BAFC366F4A16034E00799D6C0E08B2A720212 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___json0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index1;
		V_0 = L_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___json0;
		int32_t L_2;
		L_2 = Deserializer_nextToken_m515F03A4C98FD8A0DB8A99567B4BC7CF085533A9(__this, L_1, (int32_t*)(&V_0), /*hidden argument*/NULL);
		return L_2;
	}
}
// Prime31.Json/Deserializer/JsonToken Prime31.Json/Deserializer::nextToken(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deserializer_nextToken_m515F03A4C98FD8A0DB8A99567B4BC7CF085533A9 (Deserializer_t462BAFC366F4A16034E00799D6C0E08B2A720212 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___json0, int32_t* ___index1, const RuntimeMethod* method)
{
	Il2CppChar V_0 = 0x0;
	int32_t V_1 = 0;
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		Deserializer_eatWhitespace_m41DBE8FC8D3E3458EF4B97E87E388C9B03D149C1(__this, L_0, (int32_t*)L_1, /*hidden argument*/NULL);
		int32_t* L_2 = ___index1;
		int32_t L_3 = *((int32_t*)L_2);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = ___json0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))))
		{
			goto IL_0014;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0014:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = ___json0;
		int32_t* L_6 = ___index1;
		int32_t L_7 = *((int32_t*)L_6);
		NullCheck(L_5);
		int32_t L_8 = L_7;
		uint16_t L_9 = (uint16_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = L_9;
		int32_t* L_10 = ___index1;
		int32_t* L_11 = ___index1;
		int32_t L_12 = *((int32_t*)L_11);
		*((int32_t*)L_10) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		Il2CppChar L_13 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)((int32_t)44))))
		{
			case 0:
			{
				goto IL_00a3;
			}
			case 1:
			{
				goto IL_00a7;
			}
			case 2:
			{
				goto IL_0064;
			}
			case 3:
			{
				goto IL_0064;
			}
			case 4:
			{
				goto IL_00a7;
			}
			case 5:
			{
				goto IL_00a7;
			}
			case 6:
			{
				goto IL_00a7;
			}
			case 7:
			{
				goto IL_00a7;
			}
			case 8:
			{
				goto IL_00a7;
			}
			case 9:
			{
				goto IL_00a7;
			}
			case 10:
			{
				goto IL_00a7;
			}
			case 11:
			{
				goto IL_00a7;
			}
			case 12:
			{
				goto IL_00a7;
			}
			case 13:
			{
				goto IL_00a7;
			}
			case 14:
			{
				goto IL_00a9;
			}
		}
	}

IL_0064:
	{
		Il2CppChar L_14 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)((int32_t)91))))
		{
			case 0:
			{
				goto IL_009f;
			}
			case 1:
			{
				goto IL_0079;
			}
			case 2:
			{
				goto IL_00a1;
			}
		}
	}

IL_0079:
	{
		Il2CppChar L_15 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)((int32_t)123))))
		{
			case 0:
			{
				goto IL_009b;
			}
			case 1:
			{
				goto IL_008e;
			}
			case 2:
			{
				goto IL_009d;
			}
		}
	}

IL_008e:
	{
		Il2CppChar L_16 = V_0;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)34))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_00ab;
	}

IL_009b:
	{
		return (int32_t)(1);
	}

IL_009d:
	{
		return (int32_t)(2);
	}

IL_009f:
	{
		return (int32_t)(3);
	}

IL_00a1:
	{
		return (int32_t)(4);
	}

IL_00a3:
	{
		return (int32_t)(6);
	}

IL_00a5:
	{
		return (int32_t)(7);
	}

IL_00a7:
	{
		return (int32_t)(8);
	}

IL_00a9:
	{
		return (int32_t)(5);
	}

IL_00ab:
	{
		int32_t* L_17 = ___index1;
		int32_t* L_18 = ___index1;
		int32_t L_19 = *((int32_t*)L_18);
		*((int32_t*)L_17) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_20 = ___json0;
		NullCheck(L_20);
		int32_t* L_21 = ___index1;
		int32_t L_22 = *((int32_t*)L_21);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))), (int32_t)L_22));
		int32_t L_23 = V_1;
		if ((((int32_t)L_23) < ((int32_t)5)))
		{
			goto IL_0107;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_24 = ___json0;
		int32_t* L_25 = ___index1;
		int32_t L_26 = *((int32_t*)L_25);
		NullCheck(L_24);
		int32_t L_27 = L_26;
		uint16_t L_28 = (uint16_t)(L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		if ((!(((uint32_t)L_28) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_0107;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_29 = ___json0;
		int32_t* L_30 = ___index1;
		int32_t L_31 = *((int32_t*)L_30);
		NullCheck(L_29);
		int32_t L_32 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
		uint16_t L_33 = (uint16_t)(L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)97)))))
		{
			goto IL_0107;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_34 = ___json0;
		int32_t* L_35 = ___index1;
		int32_t L_36 = *((int32_t*)L_35);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)2));
		uint16_t L_38 = (uint16_t)(L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_0107;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_39 = ___json0;
		int32_t* L_40 = ___index1;
		int32_t L_41 = *((int32_t*)L_40);
		NullCheck(L_39);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)3));
		uint16_t L_43 = (uint16_t)(L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		if ((!(((uint32_t)L_43) == ((uint32_t)((int32_t)115)))))
		{
			goto IL_0107;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_44 = ___json0;
		int32_t* L_45 = ___index1;
		int32_t L_46 = *((int32_t*)L_45);
		NullCheck(L_44);
		int32_t L_47 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)4));
		uint16_t L_48 = (uint16_t)(L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		if ((!(((uint32_t)L_48) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_0107;
		}
	}
	{
		int32_t* L_49 = ___index1;
		int32_t* L_50 = ___index1;
		int32_t L_51 = *((int32_t*)L_50);
		*((int32_t*)L_49) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)5));
		return (int32_t)(((int32_t)10));
	}

IL_0107:
	{
		int32_t L_52 = V_1;
		if ((((int32_t)L_52) < ((int32_t)4)))
		{
			goto IL_0149;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_53 = ___json0;
		int32_t* L_54 = ___index1;
		int32_t L_55 = *((int32_t*)L_54);
		NullCheck(L_53);
		int32_t L_56 = L_55;
		uint16_t L_57 = (uint16_t)(L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		if ((!(((uint32_t)L_57) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_0149;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_58 = ___json0;
		int32_t* L_59 = ___index1;
		int32_t L_60 = *((int32_t*)L_59);
		NullCheck(L_58);
		int32_t L_61 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
		uint16_t L_62 = (uint16_t)(L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		if ((!(((uint32_t)L_62) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_0149;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_63 = ___json0;
		int32_t* L_64 = ___index1;
		int32_t L_65 = *((int32_t*)L_64);
		NullCheck(L_63);
		int32_t L_66 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)2));
		uint16_t L_67 = (uint16_t)(L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		if ((!(((uint32_t)L_67) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_0149;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_68 = ___json0;
		int32_t* L_69 = ___index1;
		int32_t L_70 = *((int32_t*)L_69);
		NullCheck(L_68);
		int32_t L_71 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)3));
		uint16_t L_72 = (uint16_t)(L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_0149;
		}
	}
	{
		int32_t* L_73 = ___index1;
		int32_t* L_74 = ___index1;
		int32_t L_75 = *((int32_t*)L_74);
		*((int32_t*)L_73) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)4));
		return (int32_t)(((int32_t)9));
	}

IL_0149:
	{
		int32_t L_76 = V_1;
		if ((((int32_t)L_76) < ((int32_t)4)))
		{
			goto IL_018b;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_77 = ___json0;
		int32_t* L_78 = ___index1;
		int32_t L_79 = *((int32_t*)L_78);
		NullCheck(L_77);
		int32_t L_80 = L_79;
		uint16_t L_81 = (uint16_t)(L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		if ((!(((uint32_t)L_81) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_018b;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_82 = ___json0;
		int32_t* L_83 = ___index1;
		int32_t L_84 = *((int32_t*)L_83);
		NullCheck(L_82);
		int32_t L_85 = ((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)1));
		uint16_t L_86 = (uint16_t)(L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		if ((!(((uint32_t)L_86) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_018b;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_87 = ___json0;
		int32_t* L_88 = ___index1;
		int32_t L_89 = *((int32_t*)L_88);
		NullCheck(L_87);
		int32_t L_90 = ((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)2));
		uint16_t L_91 = (uint16_t)(L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		if ((!(((uint32_t)L_91) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_018b;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_92 = ___json0;
		int32_t* L_93 = ___index1;
		int32_t L_94 = *((int32_t*)L_93);
		NullCheck(L_92);
		int32_t L_95 = ((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)3));
		uint16_t L_96 = (uint16_t)(L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		if ((!(((uint32_t)L_96) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_018b;
		}
	}
	{
		int32_t* L_97 = ___index1;
		int32_t* L_98 = ___index1;
		int32_t L_99 = *((int32_t*)L_98);
		*((int32_t*)L_97) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_99, (int32_t)4));
		return (int32_t)(((int32_t)11));
	}

IL_018b:
	{
		return (int32_t)(0);
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
// System.Void Prime31.Json/ObjectDecoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDecoder__ctor_m1FB4D22A08192A5E7D2CCC542EAD3A3C6268B3DB (ObjectDecoder_tA5ED99430A82C53E75E54ACC619AE501AAAAD8C6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.Object,System.Object>> Prime31.Json/ObjectDecoder::getMemberInfoForObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4 * ObjectDecoder_getMemberInfoForObject_m8B803CFAE35A1D34C4BF63D1BC63953F8F8A2C30 (ObjectDecoder_tA5ED99430A82C53E75E54ACC619AE501AAAAD8C6 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4 * L_0 = __this->get__memberInfo_0();
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4 * L_2;
		L_2 = ObjectDecoder_getMembersWithSetters_mAE14A90AE0834D538C667D4CF52C0C9C4A693DC5(L_1, /*hidden argument*/NULL);
		__this->set__memberInfo_0(L_2);
	}

IL_0017:
	{
		Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4 * L_3 = __this->get__memberInfo_0();
		return L_3;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.Object,System.Object>> Prime31.Json/ObjectDecoder::getMembersWithSetters(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4 * ObjectDecoder_getMembersWithSetters_mAE14A90AE0834D538C667D4CF52C0C9C4A693DC5 (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_mE1761BE81335B68DA4E0F742344DA72F092A29C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC7E6095767F64C43E03802A7C5E11740196065FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC3A2BFFC362947ED3225DD391545F04E5AD7239B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CgetMembersWithSettersU3Ec__AnonStorey0_U3CU3Em__0_mA38A89F937E76C1B4E2A9CBF18D2902B037C4E06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CgetMembersWithSettersU3Ec__AnonStorey0_t1D44DCBA25E160019A1FE234896DCD22AE74AA1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CgetMembersWithSettersU3Ec__AnonStorey1_U3CU3Em__0_m5BEFD2E0C9A02A684B4769BB36C3B20F6756DE1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CgetMembersWithSettersU3Ec__AnonStorey1_tC36F03EB94E9570E7200C55D5F819BF0C4036206_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FF374709F3F171D980E4E8BEA80A7954877FE64);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4 * V_0 = NULL;
	FieldInfo_t * V_1 = NULL;
	FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* V_2 = NULL;
	int32_t V_3 = 0;
	U3CgetMembersWithSettersU3Ec__AnonStorey0_t1D44DCBA25E160019A1FE234896DCD22AE74AA1C * V_4 = NULL;
	PropertyInfo_t * V_5 = NULL;
	PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* V_6 = NULL;
	int32_t V_7 = 0;
	U3CgetMembersWithSettersU3Ec__AnonStorey1_tC36F03EB94E9570E7200C55D5F819BF0C4036206 * V_8 = NULL;
	{
		Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4 * L_0 = (Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4 *)il2cpp_codegen_object_new(Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mC7E6095767F64C43E03802A7C5E11740196065FB(L_0, /*hidden argument*/Dictionary_2__ctor_mC7E6095767F64C43E03802A7C5E11740196065FB_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject * L_1 = ___obj0;
		NullCheck(L_1);
		Type_t * L_2;
		L_2 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_3;
		L_3 = VirtFuncInvoker1< FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E*, int32_t >::Invoke(43 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_2, ((int32_t)52));
		V_2 = L_3;
		V_3 = 0;
		goto IL_0077;
	}

IL_001b:
	{
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_4 = V_2;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		FieldInfo_t * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		U3CgetMembersWithSettersU3Ec__AnonStorey0_t1D44DCBA25E160019A1FE234896DCD22AE74AA1C * L_8 = (U3CgetMembersWithSettersU3Ec__AnonStorey0_t1D44DCBA25E160019A1FE234896DCD22AE74AA1C *)il2cpp_codegen_object_new(U3CgetMembersWithSettersU3Ec__AnonStorey0_t1D44DCBA25E160019A1FE234896DCD22AE74AA1C_il2cpp_TypeInfo_var);
		U3CgetMembersWithSettersU3Ec__AnonStorey0__ctor_mC06865E80340C9F1A97CD454C942ECC0FC6D198D(L_8, /*hidden argument*/NULL);
		V_4 = L_8;
		FieldInfo_t * L_9 = V_1;
		NullCheck(L_9);
		Type_t * L_10;
		L_10 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_9);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_Namespace() */, L_10);
		NullCheck(L_11);
		bool L_12;
		L_12 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_11, _stringLiteral5FF374709F3F171D980E4E8BEA80A7954877FE64, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0045;
		}
	}
	{
		goto IL_0073;
	}

IL_0045:
	{
		U3CgetMembersWithSettersU3Ec__AnonStorey0_t1D44DCBA25E160019A1FE234896DCD22AE74AA1C * L_13 = V_4;
		FieldInfo_t * L_14 = V_1;
		NullCheck(L_13);
		L_13->set_theInfo_0(L_14);
		U3CgetMembersWithSettersU3Ec__AnonStorey0_t1D44DCBA25E160019A1FE234896DCD22AE74AA1C * L_15 = V_4;
		FieldInfo_t * L_16 = V_1;
		NullCheck(L_16);
		Type_t * L_17;
		L_17 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_16);
		NullCheck(L_15);
		L_15->set_theFieldType_1(L_17);
		Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4 * L_18 = V_0;
		FieldInfo_t * L_19 = V_1;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_19);
		U3CgetMembersWithSettersU3Ec__AnonStorey0_t1D44DCBA25E160019A1FE234896DCD22AE74AA1C * L_21 = V_4;
		Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * L_22 = (Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D *)il2cpp_codegen_object_new(Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D_il2cpp_TypeInfo_var);
		Action_2__ctor_mE1761BE81335B68DA4E0F742344DA72F092A29C1(L_22, L_21, (intptr_t)((intptr_t)U3CgetMembersWithSettersU3Ec__AnonStorey0_U3CU3Em__0_mA38A89F937E76C1B4E2A9CBF18D2902B037C4E06_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mE1761BE81335B68DA4E0F742344DA72F092A29C1_RuntimeMethod_var);
		NullCheck(L_18);
		Dictionary_2_set_Item_mC3A2BFFC362947ED3225DD391545F04E5AD7239B(L_18, L_20, L_22, /*hidden argument*/Dictionary_2_set_Item_mC3A2BFFC362947ED3225DD391545F04E5AD7239B_RuntimeMethod_var);
	}

IL_0073:
	{
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0077:
	{
		int32_t L_24 = V_3;
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_25 = V_2;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject * L_26 = ___obj0;
		NullCheck(L_26);
		Type_t * L_27;
		L_27 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_28;
		L_28 = VirtFuncInvoker1< PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A*, int32_t >::Invoke(49 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_27, ((int32_t)52));
		V_6 = L_28;
		V_7 = 0;
		goto IL_0115;
	}

IL_0097:
	{
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_29 = V_6;
		int32_t L_30 = V_7;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		PropertyInfo_t * L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_5 = L_32;
		PropertyInfo_t * L_33 = V_5;
		NullCheck(L_33);
		Type_t * L_34;
		L_34 = VirtFuncInvoker0< Type_t * >::Invoke(19 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_33);
		NullCheck(L_34);
		String_t* L_35;
		L_35 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_Namespace() */, L_34);
		NullCheck(L_35);
		bool L_36;
		L_36 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_35, _stringLiteral5FF374709F3F171D980E4E8BEA80A7954877FE64, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_00be;
		}
	}
	{
		goto IL_010f;
	}

IL_00be:
	{
		PropertyInfo_t * L_37 = V_5;
		NullCheck(L_37);
		bool L_38;
		L_38 = VirtFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_37);
		if (!L_38)
		{
			goto IL_010f;
		}
	}
	{
		PropertyInfo_t * L_39 = V_5;
		NullCheck(L_39);
		MethodInfo_t * L_40;
		L_40 = VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(23 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean) */, L_39, (bool)1);
		if (!L_40)
		{
			goto IL_010f;
		}
	}
	{
		U3CgetMembersWithSettersU3Ec__AnonStorey1_tC36F03EB94E9570E7200C55D5F819BF0C4036206 * L_41 = (U3CgetMembersWithSettersU3Ec__AnonStorey1_tC36F03EB94E9570E7200C55D5F819BF0C4036206 *)il2cpp_codegen_object_new(U3CgetMembersWithSettersU3Ec__AnonStorey1_tC36F03EB94E9570E7200C55D5F819BF0C4036206_il2cpp_TypeInfo_var);
		U3CgetMembersWithSettersU3Ec__AnonStorey1__ctor_m52BBAAB32FC73270276D9C0CC54B172DD413A943(L_41, /*hidden argument*/NULL);
		V_8 = L_41;
		U3CgetMembersWithSettersU3Ec__AnonStorey1_tC36F03EB94E9570E7200C55D5F819BF0C4036206 * L_42 = V_8;
		PropertyInfo_t * L_43 = V_5;
		NullCheck(L_42);
		L_42->set_theInfo_0(L_43);
		U3CgetMembersWithSettersU3Ec__AnonStorey1_tC36F03EB94E9570E7200C55D5F819BF0C4036206 * L_44 = V_8;
		PropertyInfo_t * L_45 = V_5;
		NullCheck(L_45);
		Type_t * L_46;
		L_46 = VirtFuncInvoker0< Type_t * >::Invoke(19 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_45);
		NullCheck(L_44);
		L_44->set_thePropertyType_1(L_46);
		Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4 * L_47 = V_0;
		PropertyInfo_t * L_48 = V_5;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_48);
		U3CgetMembersWithSettersU3Ec__AnonStorey1_tC36F03EB94E9570E7200C55D5F819BF0C4036206 * L_50 = V_8;
		Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * L_51 = (Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D *)il2cpp_codegen_object_new(Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D_il2cpp_TypeInfo_var);
		Action_2__ctor_mE1761BE81335B68DA4E0F742344DA72F092A29C1(L_51, L_50, (intptr_t)((intptr_t)U3CgetMembersWithSettersU3Ec__AnonStorey1_U3CU3Em__0_m5BEFD2E0C9A02A684B4769BB36C3B20F6756DE1D_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mE1761BE81335B68DA4E0F742344DA72F092A29C1_RuntimeMethod_var);
		NullCheck(L_47);
		Dictionary_2_set_Item_mC3A2BFFC362947ED3225DD391545F04E5AD7239B(L_47, L_49, L_51, /*hidden argument*/Dictionary_2_set_Item_mC3A2BFFC362947ED3225DD391545F04E5AD7239B_RuntimeMethod_var);
	}

IL_010f:
	{
		int32_t L_52 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
	}

IL_0115:
	{
		int32_t L_53 = V_7;
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_54 = V_6;
		NullCheck(L_54);
		if ((((int32_t)L_53) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length))))))
		{
			goto IL_0097;
		}
	}
	{
		Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4 * L_55 = V_0;
		return L_55;
	}
}
// System.Object Prime31.Json/ObjectDecoder::createAndPopulateObjectFromDictionary(System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ObjectDecoder_createAndPopulateObjectFromDictionary_m11575889B5A4F0BA33898249B001FD3BE2CC0906 (ObjectDecoder_tA5ED99430A82C53E75E54ACC619AE501AAAAD8C6 * __this, Type_t * ___objectType0, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___dict1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_m54EE979C4D83695ED736A3177A68C2968C8C4382_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m5020E2E0843575E8C35BFF383E6230E270238200_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mD35CC224B1371CA217FF9D886A9CC15BC9B52E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mE3B6496D9EE741F44C34E12F543B7DC7065BD84B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m794A8065F96A52A636116CD7475B246BD39574CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m4D8899097FFAE4593AA535D2A9311C7884F75492_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m557855CD7AB5535158BEBB5F773B80036E88369E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_mA7A3EDE79F7F742613170703D44941D7EBE09E7D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4 * V_1 = NULL;
	KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * V_2 = NULL;
	String_t* V_3 = NULL;
	Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Type_t * L_0 = ___objectType0;
		RuntimeObject * L_1;
		L_1 = Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4 * L_3;
		L_3 = ObjectDecoder_getMemberInfoForObject_m8B803CFAE35A1D34C4BF63D1BC63953F8F8A2C30(__this, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_4 = ___dict1;
		NullCheck(L_4);
		KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * L_5;
		L_5 = Dictionary_2_get_Keys_mE3B6496D9EE741F44C34E12F543B7DC7065BD84B(L_4, /*hidden argument*/Dictionary_2_get_Keys_mE3B6496D9EE741F44C34E12F543B7DC7065BD84B_RuntimeMethod_var);
		V_2 = L_5;
		KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * L_6 = V_2;
		NullCheck(L_6);
		Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF  L_7;
		L_7 = KeyCollection_GetEnumerator_mA7A3EDE79F7F742613170703D44941D7EBE09E7D(L_6, /*hidden argument*/KeyCollection_GetEnumerator_mA7A3EDE79F7F742613170703D44941D7EBE09E7D_RuntimeMethod_var);
		V_4 = L_7;
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005e;
		}

IL_0023:
		{
			String_t* L_8;
			L_8 = Enumerator_get_Current_m557855CD7AB5535158BEBB5F773B80036E88369E_inline((Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF *)(&V_4), /*hidden argument*/Enumerator_get_Current_m557855CD7AB5535158BEBB5F773B80036E88369E_RuntimeMethod_var);
			V_3 = L_8;
			Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4 * L_9 = V_1;
			String_t* L_10 = V_3;
			NullCheck(L_9);
			bool L_11;
			L_11 = Dictionary_2_ContainsKey_m5020E2E0843575E8C35BFF383E6230E270238200(L_9, L_10, /*hidden argument*/Dictionary_2_ContainsKey_m5020E2E0843575E8C35BFF383E6230E270238200_RuntimeMethod_var);
			if (!L_11)
			{
				goto IL_005e;
			}
		}

IL_0037:
		try
		{ // begin try (depth: 2)
			Dictionary_2_tEE20CCB47CF25ABD4342837C29C4C3BF6E02CAE4 * L_12 = V_1;
			String_t* L_13 = V_3;
			NullCheck(L_12);
			Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * L_14;
			L_14 = Dictionary_2_get_Item_mD35CC224B1371CA217FF9D886A9CC15BC9B52E5F(L_12, L_13, /*hidden argument*/Dictionary_2_get_Item_mD35CC224B1371CA217FF9D886A9CC15BC9B52E5F_RuntimeMethod_var);
			RuntimeObject * L_15 = V_0;
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_16 = ___dict1;
			String_t* L_17 = V_3;
			NullCheck(L_16);
			RuntimeObject * L_18;
			L_18 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_16, L_17, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
			NullCheck(L_14);
			Action_2_Invoke_m54EE979C4D83695ED736A3177A68C2968C8C4382(L_14, L_15, L_18, /*hidden argument*/Action_2_Invoke_m54EE979C4D83695ED736A3177A68C2968C8C4382_RuntimeMethod_var);
			goto IL_005e;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0050;
			throw e;
		}

CATCH_0050:
		{ // begin catch(System.Exception)
			V_5 = ((Exception_t *)__exception_local);
			Exception_t * L_19 = V_5;
			Utils_logObject_m9DE5038BEEEC42EE1DB1D72499FBB5E374C2E8C2(L_19, /*hidden argument*/NULL);
			goto IL_005e;
		} // end catch (depth: 2)

IL_005e:
		{
			bool L_20;
			L_20 = Enumerator_MoveNext_m4D8899097FFAE4593AA535D2A9311C7884F75492((Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m4D8899097FFAE4593AA535D2A9311C7884F75492_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_0023;
			}
		}

IL_006a:
		{
			IL2CPP_LEAVE(0x7D, FINALLY_006f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006f;
	}

FINALLY_006f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m794A8065F96A52A636116CD7475B246BD39574CA((Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF *)(&V_4), /*hidden argument*/Enumerator_Dispose_m794A8065F96A52A636116CD7475B246BD39574CA_RuntimeMethod_var);
		IL2CPP_END_FINALLY(111)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(111)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7D, IL_007d)
	}

IL_007d:
	{
		RuntimeObject * L_21 = V_0;
		return L_21;
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
// System.Void Prime31.Json/Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_m32221D568BF25D7701599D59E929021320241D41 (Serializer_t8E8E654A0E429ECF8D377E7F0081F82173C60854 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		__this->set__builder_0(L_0);
		return;
	}
}
// System.String Prime31.Json/Serializer::serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_serialize_mEDC001694EE2C2A808D7092756E0963022BFBE7E (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_t8E8E654A0E429ECF8D377E7F0081F82173C60854_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Serializer_t8E8E654A0E429ECF8D377E7F0081F82173C60854 * V_0 = NULL;
	{
		Serializer_t8E8E654A0E429ECF8D377E7F0081F82173C60854 * L_0 = (Serializer_t8E8E654A0E429ECF8D377E7F0081F82173C60854 *)il2cpp_codegen_object_new(Serializer_t8E8E654A0E429ECF8D377E7F0081F82173C60854_il2cpp_TypeInfo_var);
		Serializer__ctor_m32221D568BF25D7701599D59E929021320241D41(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Serializer_t8E8E654A0E429ECF8D377E7F0081F82173C60854 * L_1 = V_0;
		RuntimeObject * L_2 = ___obj0;
		NullCheck(L_1);
		Serializer_serializeObject_m94EB54FBE494EA20573DD5BE3759FA0B15ACF090(L_1, L_2, /*hidden argument*/NULL);
		Serializer_t8E8E654A0E429ECF8D377E7F0081F82173C60854 * L_3 = V_0;
		NullCheck(L_3);
		StringBuilder_t * L_4 = L_3->get__builder_0();
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		return L_5;
	}
}
// System.Void Prime31.Json/Serializer::serializeObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_serializeObject_m94EB54FBE494EA20573DD5BE3759FA0B15ACF090 (Serializer_t8E8E654A0E429ECF8D377E7F0081F82173C60854 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	double V_1 = 0.0;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_2;
	memset((&V_2), 0, sizeof(V_2));
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		StringBuilder_t * L_1 = __this->get__builder_0();
		NullCheck(L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_1, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, /*hidden argument*/NULL);
		goto IL_014a;
	}

IL_001c:
	{
		RuntimeObject * L_3 = ___value0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_4 = ___value0;
		Serializer_serializeString_m491B546988E17F9AD3DBFC6E125BEB074EF6B350(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		goto IL_014a;
	}

IL_0038:
	{
		RuntimeObject * L_5 = ___value0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_5, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var)))
		{
			goto IL_0054;
		}
	}
	{
		RuntimeObject * L_6 = ___value0;
		Serializer_serializeIList_m8AD071C3002DFCE5987CDAFA70FFF88157B9988D(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_6, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		goto IL_014a;
	}

IL_0054:
	{
		RuntimeObject * L_7 = ___value0;
		if (!((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_7, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var)))
		{
			goto IL_0070;
		}
	}
	{
		RuntimeObject * L_8 = ___value0;
		Serializer_serializeDictionary_m05BCA044663332D71EF9FDDB8F6ABBB3B93E4E47(__this, ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)CastclassClass((RuntimeObject*)L_8, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		goto IL_014a;
	}

IL_0070:
	{
		RuntimeObject * L_9 = ___value0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_9, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var)))
		{
			goto IL_008c;
		}
	}
	{
		RuntimeObject * L_10 = ___value0;
		Serializer_serializeIDictionary_mD494C9D9040ED7673F2DBFB58AED0DADA1A02367(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_10, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		goto IL_014a;
	}

IL_008c:
	{
		RuntimeObject * L_11 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_11, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))
		{
			goto IL_00b3;
		}
	}
	{
		StringBuilder_t * L_12 = __this->get__builder_0();
		RuntimeObject * L_13 = ___value0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_12, L_15, /*hidden argument*/NULL);
		goto IL_014a;
	}

IL_00b3:
	{
		RuntimeObject * L_17 = ___value0;
		NullCheck(L_17);
		Type_t * L_18;
		L_18 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		bool L_19;
		L_19 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00d5;
		}
	}
	{
		StringBuilder_t * L_20 = __this->get__builder_0();
		RuntimeObject * L_21 = ___value0;
		NullCheck(L_20);
		StringBuilder_t * L_22;
		L_22 = StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F(L_20, L_21, /*hidden argument*/NULL);
		goto IL_014a;
	}

IL_00d5:
	{
		RuntimeObject * L_23 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_23, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var)))
		{
			goto IL_0120;
		}
	}
	{
		DateTime__ctor_mE84FCDCEAD332A62B587191C5874DAD7C238CFEA((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 1, /*hidden argument*/NULL);
		RuntimeObject * L_24 = ___value0;
		V_2 = ((*(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)UnBox(L_24, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var))));
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_25 = V_0;
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_26;
		L_26 = DateTime_Subtract_mB3CA7BD87D07F9A98AA7A571D7CA179A4209AE0B((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), L_25, /*hidden argument*/NULL);
		V_3 = L_26;
		double L_27;
		L_27 = TimeSpan_get_TotalMilliseconds_m97368AE0609D865EB2A6BAE96AAA97AF8BDBF1C5((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_3), /*hidden argument*/NULL);
		V_1 = L_27;
		double L_28 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_29;
		L_29 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_30;
		L_30 = Convert_ToString_m5BC045F91E837268FECEA78DA859902005EF91D1(L_28, L_29, /*hidden argument*/NULL);
		Serializer_serializeString_m491B546988E17F9AD3DBFC6E125BEB074EF6B350(__this, L_30, /*hidden argument*/NULL);
		goto IL_014a;
	}

IL_0120:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_31 = ___value0;
		Serializer_serializeClass_mC36217FCFB2EA7EBF6E2A77523897D4991F77999(__this, L_31, /*hidden argument*/NULL);
		goto IL_014a;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_012c;
		throw e;
	}

CATCH_012c:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)__exception_local);
		RuntimeObject * L_32 = ___value0;
		Exception_t * L_33 = V_4;
		NullCheck(L_33);
		String_t* L_34;
		L_34 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_33);
		String_t* L_35;
		L_35 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1D92D76ADC54506AD8D04147559DC910C26FA222)), L_32, L_34, /*hidden argument*/NULL);
		Utils_logObject_m9DE5038BEEEC42EE1DB1D72499FBB5E374C2E8C2(L_35, /*hidden argument*/NULL);
		goto IL_014a;
	} // end catch (depth: 1)

IL_014a:
	{
		return;
	}
}
// System.Void Prime31.Json/Serializer::serializeIList(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_serializeIList_m8AD071C3002DFCE5987CDAFA70FFF88157B9988D (Serializer_t8E8E654A0E429ECF8D377E7F0081F82173C60854 * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	{
		StringBuilder_t * L_0 = __this->get__builder_0();
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_0, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, /*hidden argument*/NULL);
		V_0 = (bool)1;
		V_1 = 0;
		goto IL_0046;
	}

IL_001a:
	{
		RuntimeObject* L_2 = ___anArray0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		RuntimeObject * L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_2, L_3);
		V_2 = L_4;
		bool L_5 = V_0;
		if (L_5)
		{
			goto IL_0039;
		}
	}
	{
		StringBuilder_t * L_6 = __this->get__builder_0();
		NullCheck(L_6);
		StringBuilder_t * L_7;
		L_7 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_6, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, /*hidden argument*/NULL);
	}

IL_0039:
	{
		RuntimeObject * L_8 = V_2;
		Serializer_serializeObject_m94EB54FBE494EA20573DD5BE3759FA0B15ACF090(__this, L_8, /*hidden argument*/NULL);
		V_0 = (bool)0;
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0046:
	{
		int32_t L_10 = V_1;
		RuntimeObject* L_11 = ___anArray0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, L_11);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		StringBuilder_t * L_13 = __this->get__builder_0();
		NullCheck(L_13);
		StringBuilder_t * L_14;
		L_14 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_13, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Prime31.Json/Serializer::serializeIDictionary(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_serializeIDictionary_mD494C9D9040ED7673F2DBFB58AED0DADA1A02367 (Serializer_t8E8E654A0E429ECF8D377E7F0081F82173C60854 * __this, RuntimeObject* ___dict0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		StringBuilder_t * L_0 = __this->get__builder_0();
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_0, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, /*hidden argument*/NULL);
		V_0 = (bool)1;
		RuntimeObject* L_2 = ___dict0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_3);
		V_2 = L_4;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006e;
		}

IL_0024:
		{
			RuntimeObject* L_5 = V_2;
			NullCheck(L_5);
			RuntimeObject * L_6;
			L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_5);
			V_1 = L_6;
			bool L_7 = V_0;
			if (L_7)
			{
				goto IL_0042;
			}
		}

IL_0031:
		{
			StringBuilder_t * L_8 = __this->get__builder_0();
			NullCheck(L_8);
			StringBuilder_t * L_9;
			L_9 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_8, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, /*hidden argument*/NULL);
		}

IL_0042:
		{
			RuntimeObject * L_10 = V_1;
			NullCheck(L_10);
			String_t* L_11;
			L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
			Serializer_serializeString_m491B546988E17F9AD3DBFC6E125BEB074EF6B350(__this, L_11, /*hidden argument*/NULL);
			StringBuilder_t * L_12 = __this->get__builder_0();
			NullCheck(L_12);
			StringBuilder_t * L_13;
			L_13 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_12, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, /*hidden argument*/NULL);
			RuntimeObject* L_14 = ___dict0;
			RuntimeObject * L_15 = V_1;
			NullCheck(L_14);
			RuntimeObject * L_16;
			L_16 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_14, L_15);
			Serializer_serializeObject_m94EB54FBE494EA20573DD5BE3759FA0B15ACF090(__this, L_16, /*hidden argument*/NULL);
			V_0 = (bool)0;
		}

IL_006e:
		{
			RuntimeObject* L_17 = V_2;
			NullCheck(L_17);
			bool L_18;
			L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_17);
			if (L_18)
			{
				goto IL_0024;
			}
		}

IL_0079:
		{
			IL2CPP_LEAVE(0x92, FINALLY_007e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007e;
	}

FINALLY_007e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_19 = V_2;
			RuntimeObject* L_20 = ((RuntimeObject*)IsInst((RuntimeObject*)L_19, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			V_3 = L_20;
			if (!L_20)
			{
				goto IL_0091;
			}
		}

IL_008b:
		{
			RuntimeObject* L_21 = V_3;
			NullCheck(L_21);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_21);
		}

IL_0091:
		{
			IL2CPP_END_FINALLY(126)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(126)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x92, IL_0092)
	}

IL_0092:
	{
		StringBuilder_t * L_22 = __this->get__builder_0();
		NullCheck(L_22);
		StringBuilder_t * L_23;
		L_23 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_22, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Prime31.Json/Serializer::serializeDictionary(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_serializeDictionary_m05BCA044663332D71EF9FDDB8F6ABBB3B93E4E47 (Serializer_t8E8E654A0E429ECF8D377E7F0081F82173C60854 * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___dict0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mE3B6496D9EE741F44C34E12F543B7DC7065BD84B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m794A8065F96A52A636116CD7475B246BD39574CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m4D8899097FFAE4593AA535D2A9311C7884F75492_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m557855CD7AB5535158BEBB5F773B80036E88369E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_mA7A3EDE79F7F742613170703D44941D7EBE09E7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * V_1 = NULL;
	String_t* V_2 = NULL;
	Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		StringBuilder_t * L_0 = __this->get__builder_0();
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_0, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, /*hidden argument*/NULL);
		V_0 = (bool)1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_2 = ___dict0;
		NullCheck(L_2);
		KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * L_3;
		L_3 = Dictionary_2_get_Keys_mE3B6496D9EE741F44C34E12F543B7DC7065BD84B(L_2, /*hidden argument*/Dictionary_2_get_Keys_mE3B6496D9EE741F44C34E12F543B7DC7065BD84B_RuntimeMethod_var);
		V_1 = L_3;
		KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * L_4 = V_1;
		NullCheck(L_4);
		Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF  L_5;
		L_5 = KeyCollection_GetEnumerator_mA7A3EDE79F7F742613170703D44941D7EBE09E7D(L_4, /*hidden argument*/KeyCollection_GetEnumerator_mA7A3EDE79F7F742613170703D44941D7EBE09E7D_RuntimeMethod_var);
		V_3 = L_5;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0071;
		}

IL_0026:
		{
			String_t* L_6;
			L_6 = Enumerator_get_Current_m557855CD7AB5535158BEBB5F773B80036E88369E_inline((Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF *)(&V_3), /*hidden argument*/Enumerator_get_Current_m557855CD7AB5535158BEBB5F773B80036E88369E_RuntimeMethod_var);
			V_2 = L_6;
			bool L_7 = V_0;
			if (L_7)
			{
				goto IL_0045;
			}
		}

IL_0034:
		{
			StringBuilder_t * L_8 = __this->get__builder_0();
			NullCheck(L_8);
			StringBuilder_t * L_9;
			L_9 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_8, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, /*hidden argument*/NULL);
		}

IL_0045:
		{
			String_t* L_10 = V_2;
			NullCheck(L_10);
			String_t* L_11;
			L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
			Serializer_serializeString_m491B546988E17F9AD3DBFC6E125BEB074EF6B350(__this, L_11, /*hidden argument*/NULL);
			StringBuilder_t * L_12 = __this->get__builder_0();
			NullCheck(L_12);
			StringBuilder_t * L_13;
			L_13 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_12, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, /*hidden argument*/NULL);
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_14 = ___dict0;
			String_t* L_15 = V_2;
			NullCheck(L_14);
			RuntimeObject * L_16;
			L_16 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_14, L_15, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
			Serializer_serializeObject_m94EB54FBE494EA20573DD5BE3759FA0B15ACF090(__this, L_16, /*hidden argument*/NULL);
			V_0 = (bool)0;
		}

IL_0071:
		{
			bool L_17;
			L_17 = Enumerator_MoveNext_m4D8899097FFAE4593AA535D2A9311C7884F75492((Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m4D8899097FFAE4593AA535D2A9311C7884F75492_RuntimeMethod_var);
			if (L_17)
			{
				goto IL_0026;
			}
		}

IL_007d:
		{
			IL2CPP_LEAVE(0x90, FINALLY_0082);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0082;
	}

FINALLY_0082:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m794A8065F96A52A636116CD7475B246BD39574CA((Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF *)(&V_3), /*hidden argument*/Enumerator_Dispose_m794A8065F96A52A636116CD7475B246BD39574CA_RuntimeMethod_var);
		IL2CPP_END_FINALLY(130)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(130)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x90, IL_0090)
	}

IL_0090:
	{
		StringBuilder_t * L_18 = __this->get__builder_0();
		NullCheck(L_18);
		StringBuilder_t * L_19;
		L_19 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_18, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Prime31.Json/Serializer::serializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_serializeString_m491B546988E17F9AD3DBFC6E125BEB074EF6B350 (Serializer_t8E8E654A0E429ECF8D377E7F0081F82173C60854 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	{
		StringBuilder_t * L_0 = __this->get__builder_0();
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_0, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, /*hidden argument*/NULL);
		String_t* L_2 = ___str0;
		NullCheck(L_2);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3;
		L_3 = String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0151;
	}

IL_001f:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (uint16_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		Il2CppChar L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0041;
		}
	}
	{
		StringBuilder_t * L_9 = __this->get__builder_0();
		NullCheck(L_9);
		StringBuilder_t * L_10;
		L_10 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_9, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, /*hidden argument*/NULL);
		goto IL_014d;
	}

IL_0041:
	{
		Il2CppChar L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_005f;
		}
	}
	{
		StringBuilder_t * L_12 = __this->get__builder_0();
		NullCheck(L_12);
		StringBuilder_t * L_13;
		L_13 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_12, _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE, /*hidden argument*/NULL);
		goto IL_014d;
	}

IL_005f:
	{
		Il2CppChar L_14 = V_2;
		if ((!(((uint32_t)L_14) == ((uint32_t)8))))
		{
			goto IL_007c;
		}
	}
	{
		StringBuilder_t * L_15 = __this->get__builder_0();
		NullCheck(L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_15, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9, /*hidden argument*/NULL);
		goto IL_014d;
	}

IL_007c:
	{
		Il2CppChar L_17 = V_2;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_009a;
		}
	}
	{
		StringBuilder_t * L_18 = __this->get__builder_0();
		NullCheck(L_18);
		StringBuilder_t * L_19;
		L_19 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_18, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122, /*hidden argument*/NULL);
		goto IL_014d;
	}

IL_009a:
	{
		Il2CppChar L_20 = V_2;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_00b8;
		}
	}
	{
		StringBuilder_t * L_21 = __this->get__builder_0();
		NullCheck(L_21);
		StringBuilder_t * L_22;
		L_22 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_21, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, /*hidden argument*/NULL);
		goto IL_014d;
	}

IL_00b8:
	{
		Il2CppChar L_23 = V_2;
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_00d6;
		}
	}
	{
		StringBuilder_t * L_24 = __this->get__builder_0();
		NullCheck(L_24);
		StringBuilder_t * L_25;
		L_25 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_24, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F, /*hidden argument*/NULL);
		goto IL_014d;
	}

IL_00d6:
	{
		Il2CppChar L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_00f4;
		}
	}
	{
		StringBuilder_t * L_27 = __this->get__builder_0();
		NullCheck(L_27);
		StringBuilder_t * L_28;
		L_28 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_27, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462, /*hidden argument*/NULL);
		goto IL_014d;
	}

IL_00f4:
	{
		Il2CppChar L_29 = V_2;
		Il2CppChar L_30 = L_29;
		RuntimeObject * L_31 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_30);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_32;
		L_32 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_33;
		L_33 = Convert_ToInt32_mCDD3456A0F07EF72C62EF668CF9141937D0EB041(L_31, L_32, /*hidden argument*/NULL);
		V_3 = L_33;
		int32_t L_34 = V_3;
		if ((((int32_t)L_34) < ((int32_t)((int32_t)32))))
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_35 = V_3;
		if ((((int32_t)L_35) > ((int32_t)((int32_t)126))))
		{
			goto IL_0127;
		}
	}
	{
		StringBuilder_t * L_36 = __this->get__builder_0();
		Il2CppChar L_37 = V_2;
		NullCheck(L_36);
		StringBuilder_t * L_38;
		L_38 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_36, L_37, /*hidden argument*/NULL);
		goto IL_014d;
	}

IL_0127:
	{
		StringBuilder_t * L_39 = __this->get__builder_0();
		int32_t L_40 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_41;
		L_41 = Convert_ToString_mA60945431DE8F2DFDF3A3E4C76C21703562F2906(L_40, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_41);
		String_t* L_42;
		L_42 = String_PadLeft_m7666BD115C91CF7F69642532F4CA9B0726C0A328(L_41, 4, ((int32_t)48), /*hidden argument*/NULL);
		String_t* L_43;
		L_43 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699, L_42, /*hidden argument*/NULL);
		NullCheck(L_39);
		StringBuilder_t * L_44;
		L_44 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_39, L_43, /*hidden argument*/NULL);
	}

IL_014d:
	{
		int32_t L_45 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_0151:
	{
		int32_t L_46 = V_1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_47 = V_0;
		NullCheck(L_47);
		if ((((int32_t)L_46) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length))))))
		{
			goto IL_001f;
		}
	}
	{
		StringBuilder_t * L_48 = __this->get__builder_0();
		NullCheck(L_48);
		StringBuilder_t * L_49;
		L_49 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_48, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Prime31.Json/Serializer::serializeClass(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_serializeClass_mC36217FCFB2EA7EBF6E2A77523897D4991F77999 (Serializer_t8E8E654A0E429ECF8D377E7F0081F82173C60854 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36CEB5CD7B9DF9760BC1A6FC3F383FD0227BA51A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	FieldInfo_t * V_1 = NULL;
	FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* V_2 = NULL;
	int32_t V_3 = 0;
	PropertyInfo_t * V_4 = NULL;
	PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* V_5 = NULL;
	int32_t V_6 = 0;
	{
		StringBuilder_t * L_0 = __this->get__builder_0();
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_0, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, /*hidden argument*/NULL);
		V_0 = (bool)1;
		RuntimeObject * L_2 = ___value0;
		NullCheck(L_2);
		Type_t * L_3;
		L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_4;
		L_4 = VirtFuncInvoker1< FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E*, int32_t >::Invoke(43 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_3, ((int32_t)52));
		V_2 = L_4;
		V_3 = 0;
		goto IL_0098;
	}

IL_0028:
	{
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_5 = V_2;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		FieldInfo_t * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
		FieldInfo_t * L_9 = V_1;
		NullCheck(L_9);
		bool L_10;
		L_10 = FieldInfo_get_IsPrivate_m33AC8E111CE7497070E6F65F11E68CD536D42072(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0051;
		}
	}
	{
		FieldInfo_t * L_11 = V_1;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_11);
		NullCheck(L_12);
		bool L_13;
		L_13 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_12, _stringLiteral36CEB5CD7B9DF9760BC1A6FC3F383FD0227BA51A, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0051;
		}
	}
	{
		goto IL_0094;
	}

IL_0051:
	{
		bool L_14 = V_0;
		if (L_14)
		{
			goto IL_0068;
		}
	}
	{
		StringBuilder_t * L_15 = __this->get__builder_0();
		NullCheck(L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_15, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, /*hidden argument*/NULL);
	}

IL_0068:
	{
		FieldInfo_t * L_17 = V_1;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_17);
		Serializer_serializeString_m491B546988E17F9AD3DBFC6E125BEB074EF6B350(__this, L_18, /*hidden argument*/NULL);
		StringBuilder_t * L_19 = __this->get__builder_0();
		NullCheck(L_19);
		StringBuilder_t * L_20;
		L_20 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_19, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, /*hidden argument*/NULL);
		FieldInfo_t * L_21 = V_1;
		RuntimeObject * L_22 = ___value0;
		NullCheck(L_21);
		RuntimeObject * L_23;
		L_23 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(19 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_21, L_22);
		Serializer_serializeObject_m94EB54FBE494EA20573DD5BE3759FA0B15ACF090(__this, L_23, /*hidden argument*/NULL);
		V_0 = (bool)0;
	}

IL_0094:
	{
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_0098:
	{
		int32_t L_25 = V_3;
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_26 = V_2;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length))))))
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject * L_27 = ___value0;
		NullCheck(L_27);
		Type_t * L_28;
		L_28 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_29;
		L_29 = VirtFuncInvoker1< PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A*, int32_t >::Invoke(49 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_28, ((int32_t)52));
		V_5 = L_29;
		V_6 = 0;
		goto IL_010b;
	}

IL_00b8:
	{
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_30 = V_5;
		int32_t L_31 = V_6;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		PropertyInfo_t * L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		V_4 = L_33;
		bool L_34 = V_0;
		if (L_34)
		{
			goto IL_00d6;
		}
	}
	{
		StringBuilder_t * L_35 = __this->get__builder_0();
		NullCheck(L_35);
		StringBuilder_t * L_36;
		L_36 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_35, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, /*hidden argument*/NULL);
	}

IL_00d6:
	{
		PropertyInfo_t * L_37 = V_4;
		NullCheck(L_37);
		String_t* L_38;
		L_38 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_37);
		Serializer_serializeString_m491B546988E17F9AD3DBFC6E125BEB074EF6B350(__this, L_38, /*hidden argument*/NULL);
		StringBuilder_t * L_39 = __this->get__builder_0();
		NullCheck(L_39);
		StringBuilder_t * L_40;
		L_40 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_39, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, /*hidden argument*/NULL);
		PropertyInfo_t * L_41 = V_4;
		RuntimeObject * L_42 = ___value0;
		NullCheck(L_41);
		RuntimeObject * L_43;
		L_43 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(24 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_41, L_42, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		Serializer_serializeObject_m94EB54FBE494EA20573DD5BE3759FA0B15ACF090(__this, L_43, /*hidden argument*/NULL);
		V_0 = (bool)0;
		int32_t L_44 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_010b:
	{
		int32_t L_45 = V_6;
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_46 = V_5;
		NullCheck(L_46);
		if ((((int32_t)L_45) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_00b8;
		}
	}
	{
		StringBuilder_t * L_47 = __this->get__builder_0();
		NullCheck(L_47);
		StringBuilder_t * L_48;
		L_48 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_47, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, /*hidden argument*/NULL);
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
// System.Void Prime31.Json/ObjectDecoder/<getMembersWithSetters>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetMembersWithSettersU3Ec__AnonStorey0__ctor_mC06865E80340C9F1A97CD454C942ECC0FC6D198D (U3CgetMembersWithSettersU3Ec__AnonStorey0_t1D44DCBA25E160019A1FE234896DCD22AE74AA1C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Prime31.Json/ObjectDecoder/<getMembersWithSetters>c__AnonStorey0::<>m__0(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetMembersWithSettersU3Ec__AnonStorey0_U3CU3Em__0_mA38A89F937E76C1B4E2A9CBF18D2902B037C4E06 (U3CgetMembersWithSettersU3Ec__AnonStorey0_t1D44DCBA25E160019A1FE234896DCD22AE74AA1C * __this, RuntimeObject * ___ownerObject0, RuntimeObject * ___val1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FieldInfo_t * L_0 = __this->get_theInfo_0();
		RuntimeObject * L_1 = ___ownerObject0;
		RuntimeObject * L_2 = ___val1;
		Type_t * L_3 = __this->get_theFieldType_1();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		RuntimeObject * L_4;
		L_4 = Convert_ChangeType_mD726EC15920319382D858ECD7FD78339110D7FD4(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C(L_0, L_1, L_4, /*hidden argument*/NULL);
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
// System.Void Prime31.Json/ObjectDecoder/<getMembersWithSetters>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetMembersWithSettersU3Ec__AnonStorey1__ctor_m52BBAAB32FC73270276D9C0CC54B172DD413A943 (U3CgetMembersWithSettersU3Ec__AnonStorey1_tC36F03EB94E9570E7200C55D5F819BF0C4036206 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Prime31.Json/ObjectDecoder/<getMembersWithSetters>c__AnonStorey1::<>m__0(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetMembersWithSettersU3Ec__AnonStorey1_U3CU3Em__0_m5BEFD2E0C9A02A684B4769BB36C3B20F6756DE1D (U3CgetMembersWithSettersU3Ec__AnonStorey1_tC36F03EB94E9570E7200C55D5F819BF0C4036206 * __this, RuntimeObject * ___ownerObject0, RuntimeObject * ___val1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PropertyInfo_t * L_0 = __this->get_theInfo_0();
		RuntimeObject * L_1 = ___ownerObject0;
		RuntimeObject * L_2 = ___val1;
		Type_t * L_3 = __this->get_thePropertyType_1();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		RuntimeObject * L_4;
		L_4 = Convert_ChangeType_mD726EC15920319382D858ECD7FD78339110D7FD4(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(26 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, L_0, L_1, L_4, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline (Delegate_t * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_m_target_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_m1AF2B6C928CADEA982B916AEA040B7FFB73CD66E_gshared_inline (Stack_1_tCBDE4BE19279E76640CBE54E3E6B4B1536906F84 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_1();
		return (int32_t)L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mF254C3BDEA9F0829958522BF88C75DE8BEC4961F_gshared_inline (Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_currentKey_3();
		return (RuntimeObject *)L_0;
	}
}
