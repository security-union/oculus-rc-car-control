#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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

// System.Collections.Generic.IList`1<System.Byte>
struct IList_1_t958E1E27F44A1E57CF73D43A68F1EF1A1E07FE0C;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>
struct List_1_t271481075A654FA9D7D7F2CBC8C8484249302E6A;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B;
// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>
struct List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A;
// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig>
struct List_1_tBEE447C5DCA2C53BE427F5C2A320C9E183805319;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte>
struct ReadOnlyCollection_1_t439295507312D66D6AE8BD395D29969804EE9EA7;
// System.Collections.Generic.List`1<System.Byte>[]
struct List_1U5BU5D_t6829C3B90A22D03AFA24266773025F73631248F2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// UnityEngine.Networking.ChannelQOS[]
struct ChannelQOSU5BU5D_tFDD803834B2C3C60B24887FD4DB639B4A82C51F7;
// UnityEngine.Networking.ConnectionConfig[]
struct ConnectionConfigU5BU5D_t13FECFFDC9EC0A46EA6D4166F9D327FE4AF9B771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Networking.ChannelQOS
struct ChannelQOS_t88C42079F6B6C6E32595E6A6196D4253D15806AB;
// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60;
// UnityEngine.Networking.ConnectionConfigInternal
struct ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21;
// UnityEngine.Networking.HostTopology
struct HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F;
// UnityEngine.Networking.HostTopologyInternal
struct HostTopologyInternal_t7FC89C6D2676DBFC6E2267EC2BA7BD242C1AD171;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChannelQOS_t88C42079F6B6C6E32595E6A6196D4253D15806AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HostTopologyInternal_t7FC89C6D2676DBFC6E2267EC2BA7BD242C1AD171_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t2F3F43301A2C4258285E66980237B7AE65F4CD7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t271481075A654FA9D7D7F2CBC8C8484249302E6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBEE447C5DCA2C53BE427F5C2A320C9E183805319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QosType_tCBCBB4E4465E250D1108F0F864F12E4E7F5D55CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1F4F8DCA94A6832B1312A4D1589F77B40D6B6BA1;
IL2CPP_EXTERN_C String_t* _stringLiteral317EE74AF038EFA1EFB835A1A142AD358C5939C3;
IL2CPP_EXTERN_C String_t* _stringLiteral3866C00AAA41CBA51BF961FDAB79035290665796;
IL2CPP_EXTERN_C String_t* _stringLiteral4DB1A45BB662D79231E9447F2CBFDE3B6CE19D71;
IL2CPP_EXTERN_C String_t* _stringLiteral515E8DC0021BC9F0BE2285E066E0396A65CF1DE2;
IL2CPP_EXTERN_C String_t* _stringLiteral56FC7ACF83761F215C42F94457870B28C159AD13;
IL2CPP_EXTERN_C String_t* _stringLiteral572189F4EA97569D6C0D3A4A68C98F20D9FC95A5;
IL2CPP_EXTERN_C String_t* _stringLiteral5A068CD5BEF2AF2FF0E3642874366761954C834B;
IL2CPP_EXTERN_C String_t* _stringLiteral603078036E4F6701B78C3C841B17DE1BD4B49EB7;
IL2CPP_EXTERN_C String_t* _stringLiteral6BD2C10566F502C3C2BF829339E1CCBA316C993F;
IL2CPP_EXTERN_C String_t* _stringLiteral7BD2BAAE773711A25E2A86E4644B6FA5287BE9CB;
IL2CPP_EXTERN_C String_t* _stringLiteral8A4CACA68D0889BCC0B193D3EB8B384C328208A3;
IL2CPP_EXTERN_C String_t* _stringLiteral970E2379B8ADD15A47FF04C1F1AE7051F01DA5DC;
IL2CPP_EXTERN_C String_t* _stringLiteral9CB64D4DAF8CDF7B5A2130FCCDD62ECE720AFE8E;
IL2CPP_EXTERN_C String_t* _stringLiteralB7924E654A4528032CD5FC50B5878AA01E102C42;
IL2CPP_EXTERN_C String_t* _stringLiteralC94B47F32002FEDF4A271879FE7A0BC4157B2A6F;
IL2CPP_EXTERN_C String_t* _stringLiteralCDBC178854E256F8C61DC4C296BB7F91494D0D08;
IL2CPP_EXTERN_C String_t* _stringLiteralD545B2AC9E1F7D2797A7BD919E1632698CEF91B5;
IL2CPP_EXTERN_C String_t* _stringLiteralDC4A22150C3582A362005292F9B7BDE6394836BA;
IL2CPP_EXTERN_C String_t* _stringLiteralDF5230F0D16A6901ED26AE1F9636F2A61DA5D6ED;
IL2CPP_EXTERN_C String_t* _stringLiteralEA9F88EAA400C7758A1C3CF48D8E6A867EF21B25;
IL2CPP_EXTERN_C String_t* _stringLiteralFB53011A10B004A1383FD0B7A61E675D7980F715;
IL2CPP_EXTERN_C const RuntimeMethod* ChannelQOS__ctor_m1ED2DE7DC1454D74CC4A22069EBA9C92B6EFE236_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionConfigInternal__ctor_m120A581ACAAD31F073CB6DAE7D32FE84CAC4B614_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionConfig_AddChannel_m8272FB8322A2D4E18F56FC4FDCCACB043851C11E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionConfig_GetChannel_mF8A40F89C7B2FAA1A19A6AAE764747AAA5CBF7D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionConfig_GetSharedOrderChannels_mBE34CB1332CC01B01526A2B41C7B7CF89F584FD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionConfig_Validate_m53A1C534AEBA90364B0FF9A85C74F7901D73F7E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionConfig__ctor_mC7173A13A86DE7BB740E7DBACB6CD4C25234C3D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m390DA107BD23DAA9675F02F107C58B5963719B89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m72DB5162A57B53CC4FE6AAAF6CCFD2EC0D6979E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m1CD842C06C2EE91A078A835EEB3235CBEFAB1EF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m28C6D66CE4E85CADFE2C9F2480BEDC2B0EB725E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m167ED6452B3449FBF08E213017E646F36EA4362F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB9880DDD47251277F5C63EAA7800C23E03EA1FFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HostTopology_GetSpecialConnectionConfig_m7A3FC66410FFC912B43B159182339B67280C3523_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HostTopology__ctor_mC7A4302FD60DCD0207953FE6EA520B29ABDDCF13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCC56E3F2BAC7B5D8048C15FDE221FFFEBE8363D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCE6BFCF66CB516F954724F5125CA91914E9DFEC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AsReadOnly_m2C521D4F94351E14531A41F199E31B3BE298A5EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3A3D8AA10FCF10DBBFCE37425BC4BCFB3ADD47EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mC321A3225E4D1918F8CC4205C7C523D51F72DF6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m470B457DE56865A771F1D3D14A9FA7274812394B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5DC5C1BC05E9F0D42B5F462558AD6C944EAF3303_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m85BF125FC9834FDD02F39B8D99AFE6318F1D1AEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m53DDE3F45B350B4002177C8229EC3C8832DFB6DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m99134DCB6052F11F62BC68C4F2529113657232C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mA4407BF11853ADCE80E5510309BD4DD992B230C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m494C27AC04D222EFBC05B305F3A503BBD393F313_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m57B9E895CBF5D76E3FCFCA08C1549AB3C900758A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mC858856E9653527118D0803019902D80836E4187_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkTransport_AddHostWithSimulator_mDE5120A2632360C5BE31FF6F2038F874DE41566D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkTransport_CheckTopology_mAA8FECF24CA789C88EC00C16D24378D8F160310B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkTransport_QueueMessageForSending_mBCFD4B1C14BA55D53E8C4F5928E4182C1FC38B5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkTransport_Send_m58F29B19199882D9D8053858C265380DCF292855_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* QosType_tCBCBB4E4465E250D1108F0F864F12E4E7F5D55CA_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t13DEA89D07060302B357E8F2282A56478714D525 
{
};

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>
struct List_1_t271481075A654FA9D7D7F2CBC8C8484249302E6A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	List_1U5BU5D_t6829C3B90A22D03AFA24266773025F73631248F2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t271481075A654FA9D7D7F2CBC8C8484249302E6A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	List_1U5BU5D_t6829C3B90A22D03AFA24266773025F73631248F2* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>
struct List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ChannelQOSU5BU5D_tFDD803834B2C3C60B24887FD4DB639B4A82C51F7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ChannelQOSU5BU5D_tFDD803834B2C3C60B24887FD4DB639B4A82C51F7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig>
struct List_1_tBEE447C5DCA2C53BE427F5C2A320C9E183805319  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ConnectionConfigU5BU5D_t13FECFFDC9EC0A46EA6D4166F9D327FE4AF9B771* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tBEE447C5DCA2C53BE427F5C2A320C9E183805319_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ConnectionConfigU5BU5D_t13FECFFDC9EC0A46EA6D4166F9D327FE4AF9B771* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte>
struct ReadOnlyCollection_1_t439295507312D66D6AE8BD395D29969804EE9EA7  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject* ____syncRoot_1;
};
struct Il2CppArrayBounds;

// UnityEngine.Networking.ChannelQOS
struct ChannelQOS_t88C42079F6B6C6E32595E6A6196D4253D15806AB  : public RuntimeObject
{
	// UnityEngine.Networking.QosType UnityEngine.Networking.ChannelQOS::m_Type
	int32_t ___m_Type_0;
	// System.Boolean UnityEngine.Networking.ChannelQOS::m_BelongsSharedOrderChannel
	bool ___m_BelongsSharedOrderChannel_1;
};

// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60  : public RuntimeObject
{
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_PacketSize
	uint16_t ___m_PacketSize_0;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_FragmentSize
	uint16_t ___m_FragmentSize_1;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ResendTimeout
	uint32_t ___m_ResendTimeout_2;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_DisconnectTimeout
	uint32_t ___m_DisconnectTimeout_3;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ConnectTimeout
	uint32_t ___m_ConnectTimeout_4;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_MinUpdateTimeout
	uint32_t ___m_MinUpdateTimeout_5;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_PingTimeout
	uint32_t ___m_PingTimeout_6;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ReducedPingTimeout
	uint32_t ___m_ReducedPingTimeout_7;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_AllCostTimeout
	uint32_t ___m_AllCostTimeout_8;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_NetworkDropThreshold
	uint8_t ___m_NetworkDropThreshold_9;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_OverflowDropThreshold
	uint8_t ___m_OverflowDropThreshold_10;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_MaxConnectionAttempt
	uint8_t ___m_MaxConnectionAttempt_11;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_AckDelay
	uint32_t ___m_AckDelay_12;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_SendDelay
	uint32_t ___m_SendDelay_13;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxCombinedReliableMessageSize
	uint16_t ___m_MaxCombinedReliableMessageSize_14;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxCombinedReliableMessageCount
	uint16_t ___m_MaxCombinedReliableMessageCount_15;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxSentMessageQueueSize
	uint16_t ___m_MaxSentMessageQueueSize_16;
	// UnityEngine.Networking.ConnectionAcksType UnityEngine.Networking.ConnectionConfig::m_AcksType
	int32_t ___m_AcksType_17;
	// System.Boolean UnityEngine.Networking.ConnectionConfig::m_UsePlatformSpecificProtocols
	bool ___m_UsePlatformSpecificProtocols_18;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_InitialBandwidth
	uint32_t ___m_InitialBandwidth_19;
	// System.Single UnityEngine.Networking.ConnectionConfig::m_BandwidthPeakFactor
	float ___m_BandwidthPeakFactor_20;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_WebSocketReceiveBufferMaxSize
	uint16_t ___m_WebSocketReceiveBufferMaxSize_21;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_UdpSocketReceiveBufferMaxSize
	uint32_t ___m_UdpSocketReceiveBufferMaxSize_22;
	// System.String UnityEngine.Networking.ConnectionConfig::m_SSLCertFilePath
	String_t* ___m_SSLCertFilePath_23;
	// System.String UnityEngine.Networking.ConnectionConfig::m_SSLPrivateKeyFilePath
	String_t* ___m_SSLPrivateKeyFilePath_24;
	// System.String UnityEngine.Networking.ConnectionConfig::m_SSLCAFilePath
	String_t* ___m_SSLCAFilePath_25;
	// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS> UnityEngine.Networking.ConnectionConfig::m_Channels
	List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A* ___m_Channels_26;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>> UnityEngine.Networking.ConnectionConfig::m_SharedOrderChannels
	List_1_t271481075A654FA9D7D7F2CBC8C8484249302E6A* ___m_SharedOrderChannels_27;
};

// UnityEngine.Networking.HostTopology
struct HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F  : public RuntimeObject
{
	// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::m_DefConfig
	ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* ___m_DefConfig_0;
	// System.Int32 UnityEngine.Networking.HostTopology::m_MaxDefConnections
	int32_t ___m_MaxDefConnections_1;
	// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig> UnityEngine.Networking.HostTopology::m_SpecialConnections
	List_1_tBEE447C5DCA2C53BE427F5C2A320C9E183805319* ___m_SpecialConnections_2;
	// System.UInt16 UnityEngine.Networking.HostTopology::m_ReceivedMessagePoolSize
	uint16_t ___m_ReceivedMessagePoolSize_3;
	// System.UInt16 UnityEngine.Networking.HostTopology::m_SentMessagePoolSize
	uint16_t ___m_SentMessagePoolSize_4;
	// System.Single UnityEngine.Networking.HostTopology::m_MessagePoolSizeGrowthFactor
	float ___m_MessagePoolSizeGrowthFactor_5;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// UnityEngine.Networking.NetworkTransport
struct NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4  : public RuntimeObject
{
};

struct NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_StaticFields
{
	// System.Int32 UnityEngine.Networking.NetworkTransport::s_nextSceneId
	int32_t ___s_nextSceneId_0;
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

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.Byte>>
struct Enumerator_t942C15577E5F631A0AE18A48C9752CE9F2B55218 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t271481075A654FA9D7D7F2CBC8C8484249302E6A* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.ChannelQOS>
struct Enumerator_tF7460079042BD76803E26FDA9C168CC22AF3AA5E 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ChannelQOS_t88C42079F6B6C6E32595E6A6196D4253D15806AB* ____current_3;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// UnityEngine.Networking.ConnectionConfigInternal
struct ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.ConnectionConfigInternal::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.ConnectionConfigInternal
struct ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.ConnectionConfigInternal
struct ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Networking.HostTopologyInternal
struct HostTopologyInternal_t7FC89C6D2676DBFC6E2267EC2BA7BD242C1AD171  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.HostTopologyInternal::m_Ptr
	intptr_t ___m_Ptr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Byte>::AsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t439295507312D66D6AE8BD395D29969804EE9EA7* List_1_AsReadOnly_m2C521D4F94351E14531A41F199E31B3BE298A5EE_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.Networking.NetworkTransport::InitializeClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_InitializeClass_m052269EFFAFB22F21C2ED407836F83ABFD8AC4CE (const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.NetworkTransport::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_Cleanup_mEBC3B570563F0BB12FFE09B4F9D97BD5AA0143B8 (const RuntimeMethod* method) ;
// System.Void System.NullReferenceException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4 (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.NetworkTransport::CheckTopology(UnityEngine.Networking.HostTopology)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_CheckTopology_mAA8FECF24CA789C88EC00C16D24378D8F160310B (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* ___topology0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.HostTopologyInternal::.ctor(UnityEngine.Networking.HostTopology)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal__ctor_m174813E8C0300EFA7DBA36B392348408F7B47844 (HostTopologyInternal_t7FC89C6D2676DBFC6E2267EC2BA7BD242C1AD171* __this, HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* ___topology0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostInternal(UnityEngine.Networking.HostTopologyInternal,System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHostInternal_m29788F841EB3466FF1222523591F222D40E0B688 (HostTopologyInternal_t7FC89C6D2676DBFC6E2267EC2BA7BD242C1AD171* ___topologyInt0, String_t* ___ip1, int32_t ___port2, int32_t ___minTimeout3, int32_t ___maxTimeout4, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostWithSimulator(UnityEngine.Networking.HostTopology,System.Int32,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHostWithSimulator_mDE5120A2632360C5BE31FF6F2038F874DE41566D (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* ___topology0, int32_t ___minTimeout1, int32_t ___maxTimeout2, int32_t ___port3, String_t* ___ip4, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.NetworkTransport::IsStartedInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_IsStartedInternal_mED5EECA9D43289C3766FECA63B224C39005242A9 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.NetworkTransport::SendWrapper(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_SendWrapper_mD6A69080BD5C577A2D7830EBFF60E6FAEE0013DD (int32_t ___hostId0, int32_t ___connectionId1, int32_t ___channelId2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer3, int32_t ___size4, uint8_t* ___error5, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.NetworkTransport::QueueMessageForSendingWrapper(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_QueueMessageForSendingWrapper_m0F172A20DEFC4810DAB37844FC66665638E324B6 (int32_t ___hostId0, int32_t ___connectionId1, int32_t ___channelId2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer3, int32_t ___size4, uint8_t* ___error5, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Networking.NetworkTransport::PopData(System.Int32&,System.Int32&,System.Int32&,System.Byte[],System.Int32,System.Int32&,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_PopData_m3FAC284011C5E03083E66421A615E1B3EEE3FA4E (int32_t* ___hostId0, int32_t* ___connectionId1, int32_t* ___channelId2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer3, int32_t ___bufferSize4, int32_t* ___receivedSize5, uint8_t* ___error6, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Networking.NetworkTransport::GetMaxPacketSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_GetMaxPacketSize_m13D0A75A36015831F4B7A17B62899CA6D9DB7AB7 (const RuntimeMethod* method) ;
// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::get_DefaultConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* HostTopology_get_DefaultConfig_m1B7FCC0012504CAF14C7AC1C39F5A4A31409BF8A (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* __this, const RuntimeMethod* method) ;
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_PacketSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_PacketSize_m3E5665AD5A5449791593872901FD6A4DECAFABB1 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig> UnityEngine.Networking.HostTopology::get_SpecialConnectionConfigs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBEE447C5DCA2C53BE427F5C2A320C9E183805319* HostTopology_get_SpecialConnectionConfigs_mD7BAC8EA0F2050C2C3B3D46E32512107F6C93AE5 (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig>::get_Item(System.Int32)
inline ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* List_1_get_Item_m57B9E895CBF5D76E3FCFCA08C1549AB3C900758A (List_1_tBEE447C5DCA2C53BE427F5C2A320C9E183805319* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* (*) (List_1_tBEE447C5DCA2C53BE427F5C2A320C9E183805319*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig>::get_Count()
inline int32_t List_1_get_Count_mA4407BF11853ADCE80E5510309BD4DD992B230C5_inline (List_1_tBEE447C5DCA2C53BE427F5C2A320C9E183805319* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tBEE447C5DCA2C53BE427F5C2A320C9E183805319*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>::.ctor()
inline void List_1__ctor_m5DC5C1BC05E9F0D42B5F462558AD6C944EAF3303 (List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>::.ctor()
inline void List_1__ctor_m85BF125FC9834FDD02F39B8D99AFE6318F1D1AEB (List_1_t271481075A654FA9D7D7F2CBC8C8484249302E6A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t271481075A654FA9D7D7F2CBC8C8484249302E6A*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxCombinedReliableMessageSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_MaxCombinedReliableMessageSize_m7F38DCB83C42DDF8B99F5952A9C33A4CCB901D43 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>::GetEnumerator()
inline Enumerator_tF7460079042BD76803E26FDA9C168CC22AF3AA5E List_1_GetEnumerator_m3A3D8AA10FCF10DBBFCE37425BC4BCFB3ADD47EC (List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF7460079042BD76803E26FDA9C168CC22AF3AA5E (*) (List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.ChannelQOS>::Dispose()
inline void Enumerator_Dispose_m390DA107BD23DAA9675F02F107C58B5963719B89 (Enumerator_tF7460079042BD76803E26FDA9C168CC22AF3AA5E* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF7460079042BD76803E26FDA9C168CC22AF3AA5E*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.ChannelQOS>::get_Current()
inline ChannelQOS_t88C42079F6B6C6E32595E6A6196D4253D15806AB* Enumerator_get_Current_mB9880DDD47251277F5C63EAA7800C23E03EA1FFA_inline (Enumerator_tF7460079042BD76803E26FDA9C168CC22AF3AA5E* __this, const RuntimeMethod* method)
{
	return ((  ChannelQOS_t88C42079F6B6C6E32595E6A6196D4253D15806AB* (*) (Enumerator_tF7460079042BD76803E26FDA9C168CC22AF3AA5E*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Networking.ChannelQOS::.ctor(UnityEngine.Networking.ChannelQOS)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelQOS__ctor_m1ED2DE7DC1454D74CC4A22069EBA9C92B6EFE236 (ChannelQOS_t88C42079F6B6C6E32595E6A6196D4253D15806AB* __this, ChannelQOS_t88C42079F6B6C6E32595E6A6196D4253D15806AB* ___channel0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>::Add(T)
inline void List_1_Add_mCE6BFCF66CB516F954724F5125CA91914E9DFEC8_inline (List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A* __this, ChannelQOS_t88C42079F6B6C6E32595E6A6196D4253D15806AB* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A*, ChannelQOS_t88C42079F6B6C6E32595E6A6196D4253D15806AB*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.ChannelQOS>::MoveNext()
inline bool Enumerator_MoveNext_m1CD842C06C2EE91A078A835EEB3235CBEFAB1EF5 (Enumerator_tF7460079042BD76803E26FDA9C168CC22AF3AA5E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF7460079042BD76803E26FDA9C168CC22AF3AA5E*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>::GetEnumerator()
inline Enumerator_t942C15577E5F631A0AE18A48C9752CE9F2B55218 List_1_GetEnumerator_mC321A3225E4D1918F8CC4205C7C523D51F72DF6B (List_1_t271481075A654FA9D7D7F2CBC8C8484249302E6A* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t942C15577E5F631A0AE18A48C9752CE9F2B55218 (*) (List_1_t271481075A654FA9D7D7F2CBC8C8484249302E6A*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.Byte>>::Dispose()
inline void Enumerator_Dispose_m72DB5162A57B53CC4FE6AAAF6CCFD2EC0D6979E9 (Enumerator_t942C15577E5F631A0AE18A48C9752CE9F2B55218* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t942C15577E5F631A0AE18A48C9752CE9F2B55218*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.Byte>>::get_Current()
inline List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* Enumerator_get_Current_m167ED6452B3449FBF08E213017E646F36EA4362F_inline (Enumerator_t942C15577E5F631A0AE18A48C9752CE9F2B55218* __this, const RuntimeMethod* method)
{
	return ((  List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* (*) (Enumerator_t942C15577E5F631A0AE18A48C9752CE9F2B55218*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>::Add(T)
inline void List_1_Add_mCC56E3F2BAC7B5D8048C15FDE221FFFEBE8363D2_inline (List_1_t271481075A654FA9D7D7F2CBC8C8484249302E6A* __this, List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t271481075A654FA9D7D7F2CBC8C8484249302E6A*, List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.Byte>>::MoveNext()
inline bool Enumerator_MoveNext_m28C6D66CE4E85CADFE2C9F2480BEDC2B0EB725E8 (Enumerator_t942C15577E5F631A0AE18A48C9752CE9F2B55218* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t942C15577E5F631A0AE18A48C9752CE9F2B55218*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>::get_Count()
inline int32_t List_1_get_Count_m99134DCB6052F11F62BC68C4F2529113657232C6_inline (List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>::get_Count()
inline int32_t List_1_get_Count_m53DDE3F45B350B4002177C8229EC3C8832DFB6DB_inline (List_1_t271481075A654FA9D7D7F2CBC8C8484249302E6A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t271481075A654FA9D7D7F2CBC8C8484249302E6A*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Enum::IsDefined(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_IsDefined_m1C9A0C4F54B0538351585FF563A01091A6FE2F28 (Type_t* ___enumType0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.ChannelQOS::.ctor(UnityEngine.Networking.QosType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelQOS__ctor_m6E6E1F3D0811C9AAF6B11D2AC31D7C6DFC16CFB2 (ChannelQOS_t88C42079F6B6C6E32595E6A6196D4253D15806AB* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>::get_Item(System.Int32)
inline ChannelQOS_t88C42079F6B6C6E32595E6A6196D4253D15806AB* List_1_get_Item_m494C27AC04D222EFBC05B305F3A503BBD393F313 (List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ChannelQOS_t88C42079F6B6C6E32595E6A6196D4253D15806AB* (*) (List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.Networking.QosType UnityEngine.Networking.ChannelQOS::get_QOS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChannelQOS_get_QOS_m963F4A9BB91282AE00B5B0205EF8D8FF0DA2E417 (ChannelQOS_t88C42079F6B6C6E32595E6A6196D4253D15806AB* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>::get_Item(System.Int32)
inline List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* List_1_get_Item_mC858856E9653527118D0803019902D80836E4187 (List_1_t271481075A654FA9D7D7F2CBC8C8484249302E6A* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* (*) (List_1_t271481075A654FA9D7D7F2CBC8C8484249302E6A*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Byte>::AsReadOnly()
inline ReadOnlyCollection_1_t439295507312D66D6AE8BD395D29969804EE9EA7* List_1_AsReadOnly_m2C521D4F94351E14531A41F199E31B3BE298A5EE (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_t439295507312D66D6AE8BD395D29969804EE9EA7* (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1_AsReadOnly_m2C521D4F94351E14531A41F199E31B3BE298A5EE_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig>::.ctor()
inline void List_1__ctor_m470B457DE56865A771F1D3D14A9FA7274812394B (List_1_tBEE447C5DCA2C53BE427F5C2A320C9E183805319* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBEE447C5DCA2C53BE427F5C2A320C9E183805319*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.ConnectionConfig::Validate(UnityEngine.Networking.ConnectionConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig_Validate_m53A1C534AEBA90364B0FF9A85C74F7901D73F7E6 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* ___config0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.ConnectionConfig::.ctor(UnityEngine.Networking.ConnectionConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig__ctor_mC7173A13A86DE7BB740E7DBACB6CD4C25234C3D4 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* ___config0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.Networking.ConnectionConfigInternal::InternalCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ConnectionConfigInternal_InternalCreate_m44C14AC9346C01AA4EAA02F47D9F1508F256A83D (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.ConnectionConfigInternal::SetPacketSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionConfigInternal_SetPacketSize_mD5756AE0C8B3DECC9977B5315C9FBEC8441FB7E0 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint16_t ___value0, const RuntimeMethod* method) ;
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_FragmentSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_FragmentSize_m45EC36906EEC9252E36A32307BC314F0942E8047 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_FragmentSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_FragmentSize_m46D5EE2E3720543FB45CB7862951D0498F8F4939 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint16_t ___value0, const RuntimeMethod* method) ;
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_ResendTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_ResendTimeout_m1B9838FDDDC0834953C031A98E4650CD977BAE64 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_ResendTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_ResendTimeout_mDBB6A3E87C69014104A911F978BDCED0D6F7D590 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_DisconnectTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_DisconnectTimeout_mCF53AF6904303F43AD78A090B1A9CA2C3303698D (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_DisconnectTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_DisconnectTimeout_mFD0CDEF2F2645A3E324FA5BC40C40CFBB633F43E (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_ConnectTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_ConnectTimeout_m1123D7612CEB51EDDAB509CA8AAD20A6210C19E3 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_ConnectTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_ConnectTimeout_m0896F88749093E776B5ECCB407732A386FDF104D (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_MinUpdateTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_MinUpdateTimeout_m8F0E078E261D6A4CC9F333F1684998A0F870DA18 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_MinUpdateTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_MinUpdateTimeout_m05FCA90D5B2394C3ED953B03CF57848A42D8F64D (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_PingTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_PingTimeout_m3AF224715FBA5A09F4594E65172AE584662FAB6E (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_PingTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_PingTimeout_m7B12C20177A0847E367C21BCF4AA433E1505E80B (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_ReducedPingTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_ReducedPingTimeout_m696E86B1B2F9CB80E993F24D28FF9598FA81621E (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_ReducedPingTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_ReducedPingTimeout_mD7ADC9073918F09B2683B821BBA9474525059B89 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_AllCostTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_AllCostTimeout_m75E31AF31E3E61446AC48A70C6B0C870531B9038 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_AllCostTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_AllCostTimeout_m8248AA8E131A4305DCC9327700F208F7D28AC5FA (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.Byte UnityEngine.Networking.ConnectionConfig::get_NetworkDropThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_get_NetworkDropThreshold_mDEDA7A8C23C29BC1B52FC2A7EF3B3282C84E4EFA (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_NetworkDropThreshold(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_NetworkDropThreshold_m9FAD641C84D235167500A2AA62764BF6E6BCA80F (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint8_t ___value0, const RuntimeMethod* method) ;
// System.Byte UnityEngine.Networking.ConnectionConfig::get_OverflowDropThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_get_OverflowDropThreshold_mDEE3B17D3810562D9D6BD46A4511F73C350DB51C (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_OverflowDropThreshold(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_OverflowDropThreshold_m683C77D2345F3AE9AD53FC6B8088DE3F7161D730 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint8_t ___value0, const RuntimeMethod* method) ;
// System.Byte UnityEngine.Networking.ConnectionConfig::get_MaxConnectionAttempt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_get_MaxConnectionAttempt_m64C3E9BAF3200CB3FD8A82AB8B8CDFF25CC3125F (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_MaxConnectionAttempt(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_MaxConnectionAttempt_m47BA68B2C09640D855DE2C3B739595C470597F70 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint8_t ___value0, const RuntimeMethod* method) ;
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_AckDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_AckDelay_mB9A2977F558C4803F59CD7FF84D97094AB3B16C8 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_AckDelay(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_AckDelay_m4B424659A3A494F6C8003AB466544802691BFB31 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_SendDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_SendDelay_mF8ECFD82771106940F3680DAF211540B259595E7 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_SendDelay(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_SendDelay_m00085383E441175E357BF781802A64A0118F8783 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_MaxCombinedReliableMessageSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_MaxCombinedReliableMessageSize_m2A76B2131216A5065302E9736DC63C55AADDB9D4 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint16_t ___value0, const RuntimeMethod* method) ;
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxCombinedReliableMessageCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_MaxCombinedReliableMessageCount_m876678182499559E8C328DC5245138184DE70FB5 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_MaxCombinedReliableMessageCount(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_MaxCombinedReliableMessageCount_mDAFE5361D2EF68C11DD40421289C4A7770686238 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint16_t ___value0, const RuntimeMethod* method) ;
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxSentMessageQueueSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_MaxSentMessageQueueSize_m2303DF7AA39DF65F6AC8E3E09712D569FC142496 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_MaxSentMessageQueueSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_MaxSentMessageQueueSize_m96A20AA22BF2082EBDF6D4CF630ECB0474282B8C (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint16_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Networking.ConnectionAcksType UnityEngine.Networking.ConnectionConfig::get_AcksType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfig_get_AcksType_mA7D805EB6E25D753BC6B90207E42275DDFE2457A (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_AcksType(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_AcksType_mD083D792946F8057F115E0A70BEE91539442222A (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint8_t ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.ConnectionConfig::get_UsePlatformSpecificProtocols()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionConfig_get_UsePlatformSpecificProtocols_m26AB5587FC7948E4146420A28B9ACE4DB838BBEF (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_UsePlatformSpecificProtocols(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_UsePlatformSpecificProtocols_mDEED7ADB58D0F61AAD69B72109EF119A29EAEDB4 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, bool ___value0, const RuntimeMethod* method) ;
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_InitialBandwidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_InitialBandwidth_m6F1ED856FD5AF1D1ED9D5CB5D702F83A6B6E0450 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_InitialBandwidth(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_InitialBandwidth_m40FC19F3A7DE65B5B396249A3B1C78E1690BB81C (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Networking.ConnectionConfig::get_BandwidthPeakFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ConnectionConfig_get_BandwidthPeakFactor_mDCBC6D81636835A41FA646D11A7D54002CB6F66B (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_BandwidthPeakFactor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_BandwidthPeakFactor_m26B5068707137BA7812159FA4D70C6524CEC250F (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, float ___value0, const RuntimeMethod* method) ;
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_WebSocketReceiveBufferMaxSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_WebSocketReceiveBufferMaxSize_m80CAB726F8DAD340BBF0A5E5AFEC937F2BBC7413 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_WebSocketReceiveBufferMaxSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_WebSocketReceiveBufferMaxSize_m2FF1661331B1E85E25E915AE5543AE13C982C5B9 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint16_t ___value0, const RuntimeMethod* method) ;
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_UdpSocketReceiveBufferMaxSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_UdpSocketReceiveBufferMaxSize_mD17BEEF8D82F058E351A61388A54EB152EF4D030 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_UdpSocketReceiveBufferMaxSize(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_UdpSocketReceiveBufferMaxSize_mF67362C4A4F4C7493257C35D0D2F6323BDECE318 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.ConnectionConfig::get_SSLCertFilePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectionConfig_get_SSLCertFilePath_m2EE0429E02FF2AEA616F0F8A50213E0A194840BA (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Networking.ConnectionConfigInternal::SetSSLCertFilePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfigInternal_SetSSLCertFilePath_m4A61E55DADAFC37233593BE5EAB420FC2338F9B3 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.ConnectionConfig::get_SSLPrivateKeyFilePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectionConfig_get_SSLPrivateKeyFilePath_m7BB97A3F2B0120FFEAB814D5751755FE808BEB42 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Networking.ConnectionConfigInternal::SetSSLPrivateKeyFilePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfigInternal_SetSSLPrivateKeyFilePath_mDBF01205AF64411A245559B4DED723A4DF8AA1ED (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.ConnectionConfig::get_SSLCAFilePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectionConfig_get_SSLCAFilePath_m082FAA99BAD72B785D61F2DE5888A5BAEFB4533E (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Networking.ConnectionConfigInternal::SetSSLCAFilePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfigInternal_SetSSLCAFilePath_mD13872C691CF91C6E98CA636C780BFD289093E23 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Networking.QosType UnityEngine.Networking.ConnectionConfig::GetChannel(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfig_GetChannel_mF8A40F89C7B2FAA1A19A6AAE764747AAA5CBF7D8 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, uint8_t ___idx0, const RuntimeMethod* method) ;
// System.Byte UnityEngine.Networking.ConnectionConfigInternal::AddChannel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ConnectionConfigInternal_AddChannel_m64DA7523A11F434FA79C52C39FF94ACF8EBC5897 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Networking.ConnectionConfig::get_ChannelCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfig_get_ChannelCount_m80233F3A7DB27A25CA36484350D951BA86EC1506 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<System.Byte> UnityEngine.Networking.ConnectionConfig::GetSharedOrderChannels(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionConfig_GetSharedOrderChannels_mBE34CB1332CC01B01526A2B41C7B7CF89F584FD7 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, uint8_t ___idx0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.ConnectionConfigInternal::MakeChannelsSharedOrder(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionConfigInternal_MakeChannelsSharedOrder_m9D049C38D2450790463845EACBEB2CC65E6FCF33 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___values0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Networking.ConnectionConfig::get_SharedOrderChannelCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfig_get_SharedOrderChannelCount_m825DA0CE6DA174020BB7EDDA8755FD702FAC4BCB (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InternalDestroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InternalDestroy_m0994D18CCD7981B361D3F62C6AB54E36567E4E08 (intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::.ctor(UnityEngine.Networking.ConnectionConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal__ctor_m120A581ACAAD31F073CB6DAE7D32FE84CAC4B614 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* ___config0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Networking.HostTopology::get_MaxDefaultConnections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HostTopology_get_MaxDefaultConnections_mC1576CFA7C97379B9CCC1B864BD913CAB94A4AFD (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.Networking.HostTopologyInternal::InternalCreate(UnityEngine.Networking.ConnectionConfigInternal,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t HostTopologyInternal_InternalCreate_mB79A636DF589C5736E909DA4C150B10333399ED8 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* ___config0, int32_t ___maxDefaultConnections1, const RuntimeMethod* method) ;
// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::GetSpecialConnectionConfig(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* HostTopology_GetSpecialConnectionConfig_m7A3FC66410FFC912B43B159182339B67280C3523 (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.UInt16 UnityEngine.Networking.HostTopologyInternal::AddSpecialConnectionConfig(UnityEngine.Networking.ConnectionConfigInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t HostTopologyInternal_AddSpecialConnectionConfig_m847F2B98290E3E6336D72DF56F4AADFF5F33F16C (HostTopologyInternal_t7FC89C6D2676DBFC6E2267EC2BA7BD242C1AD171* __this, ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* ___config0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Networking.HostTopology::get_SpecialConnectionConfigsCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HostTopology_get_SpecialConnectionConfigsCount_m19CA3BCAD147B57FF2465C19E517DA17DC589434 (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* __this, const RuntimeMethod* method) ;
// System.UInt16 UnityEngine.Networking.HostTopology::get_ReceivedMessagePoolSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t HostTopology_get_ReceivedMessagePoolSize_mCCA508BDE4B0B898A4E53BA0C2B28C356925E61A (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.HostTopologyInternal::set_ReceivedMessagePoolSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal_set_ReceivedMessagePoolSize_m2807DA47F904E8EED09B471AA075B61EF30EB9FE (HostTopologyInternal_t7FC89C6D2676DBFC6E2267EC2BA7BD242C1AD171* __this, uint16_t ___value0, const RuntimeMethod* method) ;
// System.UInt16 UnityEngine.Networking.HostTopology::get_SentMessagePoolSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t HostTopology_get_SentMessagePoolSize_m0668100CA27D8989635F9DED2149111BB765DE06 (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.HostTopologyInternal::set_SentMessagePoolSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal_set_SentMessagePoolSize_m83B555A1A1C99AEF25A49E602A325D2FAC2C153B (HostTopologyInternal_t7FC89C6D2676DBFC6E2267EC2BA7BD242C1AD171* __this, uint16_t ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Networking.HostTopology::get_MessagePoolSizeGrowthFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HostTopology_get_MessagePoolSizeGrowthFactor_m52F438EBC915905859F22D1DFCF64ACAB30A541E (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.HostTopologyInternal::set_MessagePoolSizeGrowthFactor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal_set_MessagePoolSizeGrowthFactor_m68B9A9F4BD87FFD800D136E2D5BEA301E2F549A2 (HostTopologyInternal_t7FC89C6D2676DBFC6E2267EC2BA7BD242C1AD171* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.HostTopologyInternal::InternalDestroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal_InternalDestroy_m4CC4AD2ECA546D616BFE626C6471E00E0A05D802 (intptr_t ___ptr0, const RuntimeMethod* method) ;
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
// System.Void UnityEngine.Networking.NetworkTransport::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_Init_m0ADB18EAE22E2B2AFD8183ED3A3EE71A6020B0BE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		NetworkTransport_InitializeClass_m052269EFFAFB22F21C2ED407836F83ABFD8AC4CE(NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransport::InitializeClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_InitializeClass_m052269EFFAFB22F21C2ED407836F83ABFD8AC4CE (const RuntimeMethod* method) 
{
	typedef void (*NetworkTransport_InitializeClass_m052269EFFAFB22F21C2ED407836F83ABFD8AC4CE_ftn) ();
	static NetworkTransport_InitializeClass_m052269EFFAFB22F21C2ED407836F83ABFD8AC4CE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_InitializeClass_m052269EFFAFB22F21C2ED407836F83ABFD8AC4CE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::InitializeClass()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.Networking.NetworkTransport::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_Shutdown_mBC882DF0C55BA635D3E0281F95D9BFC2F9FE1996 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		NetworkTransport_Cleanup_mEBC3B570563F0BB12FFE09B4F9D97BD5AA0143B8(NULL);
		return;
	}
}
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostWithSimulator(UnityEngine.Networking.HostTopology,System.Int32,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHostWithSimulator_mDE5120A2632360C5BE31FF6F2038F874DE41566D (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* ___topology0, int32_t ___minTimeout1, int32_t ___maxTimeout2, int32_t ___port3, String_t* ___ip4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HostTopologyInternal_t7FC89C6D2676DBFC6E2267EC2BA7BD242C1AD171_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* L_0 = ___topology0;
		V_0 = (bool)((((RuntimeObject*)(HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_2 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD545B2AC9E1F7D2797A7BD919E1632698CEF91B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetworkTransport_AddHostWithSimulator_mDE5120A2632360C5BE31FF6F2038F874DE41566D_RuntimeMethod_var)));
	}

IL_0014:
	{
		HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* L_3 = ___topology0;
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		NetworkTransport_CheckTopology_mAA8FECF24CA789C88EC00C16D24378D8F160310B(L_3, NULL);
		HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* L_4 = ___topology0;
		HostTopologyInternal_t7FC89C6D2676DBFC6E2267EC2BA7BD242C1AD171* L_5 = (HostTopologyInternal_t7FC89C6D2676DBFC6E2267EC2BA7BD242C1AD171*)il2cpp_codegen_object_new(HostTopologyInternal_t7FC89C6D2676DBFC6E2267EC2BA7BD242C1AD171_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		HostTopologyInternal__ctor_m174813E8C0300EFA7DBA36B392348408F7B47844(L_5, L_4, NULL);
		String_t* L_6 = ___ip4;
		int32_t L_7 = ___port3;
		int32_t L_8 = ___minTimeout1;
		int32_t L_9 = ___maxTimeout2;
		int32_t L_10;
		L_10 = NetworkTransport_AddHostInternal_m29788F841EB3466FF1222523591F222D40E0B688(L_5, L_6, L_7, L_8, L_9, NULL);
		V_1 = L_10;
		goto IL_002e;
	}

IL_002e:
	{
		int32_t L_11 = V_1;
		return L_11;
	}
}
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHost(UnityEngine.Networking.HostTopology,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHost_m2C18DF965A03542887B43E391DC153A0CB44F33C (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* ___topology0, int32_t ___port1, String_t* ___ip2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* L_0 = ___topology0;
		int32_t L_1 = ___port1;
		String_t* L_2 = ___ip2;
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = NetworkTransport_AddHostWithSimulator_mDE5120A2632360C5BE31FF6F2038F874DE41566D(L_0, 0, 0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostInternal(UnityEngine.Networking.HostTopologyInternal,System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHostInternal_m29788F841EB3466FF1222523591F222D40E0B688 (HostTopologyInternal_t7FC89C6D2676DBFC6E2267EC2BA7BD242C1AD171* ___topologyInt0, String_t* ___ip1, int32_t ___port2, int32_t ___minTimeout3, int32_t ___maxTimeout4, const RuntimeMethod* method) 
{
	typedef int32_t (*NetworkTransport_AddHostInternal_m29788F841EB3466FF1222523591F222D40E0B688_ftn) (HostTopologyInternal_t7FC89C6D2676DBFC6E2267EC2BA7BD242C1AD171*, String_t*, int32_t, int32_t, int32_t);
	static NetworkTransport_AddHostInternal_m29788F841EB3466FF1222523591F222D40E0B688_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_AddHostInternal_m29788F841EB3466FF1222523591F222D40E0B688_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::AddHostInternal(UnityEngine.Networking.HostTopologyInternal,System.String,System.Int32,System.Int32,System.Int32)");
	int32_t icallRetVal = _il2cpp_icall_func(___topologyInt0, ___ip1, ___port2, ___minTimeout3, ___maxTimeout4);
	return icallRetVal;
}
// System.Int32 UnityEngine.Networking.NetworkTransport::GetCurrentRTT(System.Int32,System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_GetCurrentRTT_mB6407834EF7EF2DE689EFF0CB276825A51C3E10D (int32_t ___hostId0, int32_t ___connectionId1, uint8_t* ___error2, const RuntimeMethod* method) 
{
	typedef int32_t (*NetworkTransport_GetCurrentRTT_mB6407834EF7EF2DE689EFF0CB276825A51C3E10D_ftn) (int32_t, int32_t, uint8_t*);
	static NetworkTransport_GetCurrentRTT_mB6407834EF7EF2DE689EFF0CB276825A51C3E10D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_GetCurrentRTT_mB6407834EF7EF2DE689EFF0CB276825A51C3E10D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::GetCurrentRTT(System.Int32,System.Int32,System.Byte&)");
	int32_t icallRetVal = _il2cpp_icall_func(___hostId0, ___connectionId1, ___error2);
	return icallRetVal;
}
// System.Int32 UnityEngine.Networking.NetworkTransport::GetMaxPacketSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_GetMaxPacketSize_m13D0A75A36015831F4B7A17B62899CA6D9DB7AB7 (const RuntimeMethod* method) 
{
	typedef int32_t (*NetworkTransport_GetMaxPacketSize_m13D0A75A36015831F4B7A17B62899CA6D9DB7AB7_ftn) ();
	static NetworkTransport_GetMaxPacketSize_m13D0A75A36015831F4B7A17B62899CA6D9DB7AB7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_GetMaxPacketSize_m13D0A75A36015831F4B7A17B62899CA6D9DB7AB7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::GetMaxPacketSize()");
	int32_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Boolean UnityEngine.Networking.NetworkTransport::get_IsStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_get_IsStarted_mB18FFFD3F8718BFE678B7460A9D5772F1B02628E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = NetworkTransport_IsStartedInternal_mED5EECA9D43289C3766FECA63B224C39005242A9(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Networking.NetworkTransport::IsStartedInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_IsStartedInternal_mED5EECA9D43289C3766FECA63B224C39005242A9 (const RuntimeMethod* method) 
{
	typedef bool (*NetworkTransport_IsStartedInternal_mED5EECA9D43289C3766FECA63B224C39005242A9_ftn) ();
	static NetworkTransport_IsStartedInternal_mED5EECA9D43289C3766FECA63B224C39005242A9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_IsStartedInternal_mED5EECA9D43289C3766FECA63B224C39005242A9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::IsStartedInternal()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Int32 UnityEngine.Networking.NetworkTransport::Connect(System.Int32,System.String,System.Int32,System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_Connect_mF7BC9C0E04D5D5D6763128FAB3F51FD5CF62BDEC (int32_t ___hostId0, String_t* ___address1, int32_t ___port2, int32_t ___exeptionConnectionId3, uint8_t* ___error4, const RuntimeMethod* method) 
{
	typedef int32_t (*NetworkTransport_Connect_mF7BC9C0E04D5D5D6763128FAB3F51FD5CF62BDEC_ftn) (int32_t, String_t*, int32_t, int32_t, uint8_t*);
	static NetworkTransport_Connect_mF7BC9C0E04D5D5D6763128FAB3F51FD5CF62BDEC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_Connect_mF7BC9C0E04D5D5D6763128FAB3F51FD5CF62BDEC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::Connect(System.Int32,System.String,System.Int32,System.Int32,System.Byte&)");
	int32_t icallRetVal = _il2cpp_icall_func(___hostId0, ___address1, ___port2, ___exeptionConnectionId3, ___error4);
	return icallRetVal;
}
// System.Boolean UnityEngine.Networking.NetworkTransport::Disconnect(System.Int32,System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_Disconnect_m8E51494D2734381CA06AF22578A8EE5B8E6A5F20 (int32_t ___hostId0, int32_t ___connectionId1, uint8_t* ___error2, const RuntimeMethod* method) 
{
	typedef bool (*NetworkTransport_Disconnect_m8E51494D2734381CA06AF22578A8EE5B8E6A5F20_ftn) (int32_t, int32_t, uint8_t*);
	static NetworkTransport_Disconnect_m8E51494D2734381CA06AF22578A8EE5B8E6A5F20_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_Disconnect_m8E51494D2734381CA06AF22578A8EE5B8E6A5F20_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::Disconnect(System.Int32,System.Int32,System.Byte&)");
	bool icallRetVal = _il2cpp_icall_func(___hostId0, ___connectionId1, ___error2);
	return icallRetVal;
}
// System.Boolean UnityEngine.Networking.NetworkTransport::Send(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_Send_m58F29B19199882D9D8053858C265380DCF292855 (int32_t ___hostId0, int32_t ___connectionId1, int32_t ___channelId2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer3, int32_t ___size4, uint8_t* ___error5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buffer3;
		V_0 = (bool)((((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_2 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral603078036E4F6701B78C3C841B17DE1BD4B49EB7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetworkTransport_Send_m58F29B19199882D9D8053858C265380DCF292855_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_3 = ___hostId0;
		int32_t L_4 = ___connectionId1;
		int32_t L_5 = ___channelId2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___buffer3;
		int32_t L_7 = ___size4;
		uint8_t* L_8 = ___error5;
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = NetworkTransport_SendWrapper_mD6A69080BD5C577A2D7830EBFF60E6FAEE0013DD(L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		V_1 = L_9;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_10 = V_1;
		return L_10;
	}
}
// System.Boolean UnityEngine.Networking.NetworkTransport::SendWrapper(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_SendWrapper_mD6A69080BD5C577A2D7830EBFF60E6FAEE0013DD (int32_t ___hostId0, int32_t ___connectionId1, int32_t ___channelId2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer3, int32_t ___size4, uint8_t* ___error5, const RuntimeMethod* method) 
{
	typedef bool (*NetworkTransport_SendWrapper_mD6A69080BD5C577A2D7830EBFF60E6FAEE0013DD_ftn) (int32_t, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, uint8_t*);
	static NetworkTransport_SendWrapper_mD6A69080BD5C577A2D7830EBFF60E6FAEE0013DD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_SendWrapper_mD6A69080BD5C577A2D7830EBFF60E6FAEE0013DD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::SendWrapper(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)");
	bool icallRetVal = _il2cpp_icall_func(___hostId0, ___connectionId1, ___channelId2, ___buffer3, ___size4, ___error5);
	return icallRetVal;
}
// System.Boolean UnityEngine.Networking.NetworkTransport::QueueMessageForSending(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_QueueMessageForSending_mBCFD4B1C14BA55D53E8C4F5928E4182C1FC38B5F (int32_t ___hostId0, int32_t ___connectionId1, int32_t ___channelId2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer3, int32_t ___size4, uint8_t* ___error5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buffer3;
		V_0 = (bool)((((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_2 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral603078036E4F6701B78C3C841B17DE1BD4B49EB7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetworkTransport_QueueMessageForSending_mBCFD4B1C14BA55D53E8C4F5928E4182C1FC38B5F_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_3 = ___hostId0;
		int32_t L_4 = ___connectionId1;
		int32_t L_5 = ___channelId2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___buffer3;
		int32_t L_7 = ___size4;
		uint8_t* L_8 = ___error5;
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = NetworkTransport_QueueMessageForSendingWrapper_m0F172A20DEFC4810DAB37844FC66665638E324B6(L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		V_1 = L_9;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_10 = V_1;
		return L_10;
	}
}
// System.Boolean UnityEngine.Networking.NetworkTransport::QueueMessageForSendingWrapper(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_QueueMessageForSendingWrapper_m0F172A20DEFC4810DAB37844FC66665638E324B6 (int32_t ___hostId0, int32_t ___connectionId1, int32_t ___channelId2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer3, int32_t ___size4, uint8_t* ___error5, const RuntimeMethod* method) 
{
	typedef bool (*NetworkTransport_QueueMessageForSendingWrapper_m0F172A20DEFC4810DAB37844FC66665638E324B6_ftn) (int32_t, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, uint8_t*);
	static NetworkTransport_QueueMessageForSendingWrapper_m0F172A20DEFC4810DAB37844FC66665638E324B6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_QueueMessageForSendingWrapper_m0F172A20DEFC4810DAB37844FC66665638E324B6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::QueueMessageForSendingWrapper(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)");
	bool icallRetVal = _il2cpp_icall_func(___hostId0, ___connectionId1, ___channelId2, ___buffer3, ___size4, ___error5);
	return icallRetVal;
}
// System.Boolean UnityEngine.Networking.NetworkTransport::SendQueuedMessages(System.Int32,System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_SendQueuedMessages_mB66F1C5C0101405B87D5258D3FC75900F456C76E (int32_t ___hostId0, int32_t ___connectionId1, uint8_t* ___error2, const RuntimeMethod* method) 
{
	typedef bool (*NetworkTransport_SendQueuedMessages_mB66F1C5C0101405B87D5258D3FC75900F456C76E_ftn) (int32_t, int32_t, uint8_t*);
	static NetworkTransport_SendQueuedMessages_mB66F1C5C0101405B87D5258D3FC75900F456C76E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_SendQueuedMessages_mB66F1C5C0101405B87D5258D3FC75900F456C76E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::SendQueuedMessages(System.Int32,System.Int32,System.Byte&)");
	bool icallRetVal = _il2cpp_icall_func(___hostId0, ___connectionId1, ___error2);
	return icallRetVal;
}
// UnityEngine.Networking.NetworkEventType UnityEngine.Networking.NetworkTransport::Receive(System.Int32&,System.Int32&,System.Int32&,System.Byte[],System.Int32,System.Int32&,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_Receive_mB4ED3D95EAE1EFC83A28F78D49E03565F353CB74 (int32_t* ___hostId0, int32_t* ___connectionId1, int32_t* ___channelId2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer3, int32_t ___bufferSize4, int32_t* ___receivedSize5, uint8_t* ___error6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___hostId0;
		int32_t* L_1 = ___connectionId1;
		int32_t* L_2 = ___channelId2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___buffer3;
		int32_t L_4 = ___bufferSize4;
		int32_t* L_5 = ___receivedSize5;
		uint8_t* L_6 = ___error6;
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = NetworkTransport_PopData_m3FAC284011C5E03083E66421A615E1B3EEE3FA4E(L_0, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_0 = L_7;
		goto IL_0013;
	}

IL_0013:
	{
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Int32 UnityEngine.Networking.NetworkTransport::PopData(System.Int32&,System.Int32&,System.Int32&,System.Byte[],System.Int32,System.Int32&,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_PopData_m3FAC284011C5E03083E66421A615E1B3EEE3FA4E (int32_t* ___hostId0, int32_t* ___connectionId1, int32_t* ___channelId2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer3, int32_t ___bufferSize4, int32_t* ___receivedSize5, uint8_t* ___error6, const RuntimeMethod* method) 
{
	typedef int32_t (*NetworkTransport_PopData_m3FAC284011C5E03083E66421A615E1B3EEE3FA4E_ftn) (int32_t*, int32_t*, int32_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t*, uint8_t*);
	static NetworkTransport_PopData_m3FAC284011C5E03083E66421A615E1B3EEE3FA4E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_PopData_m3FAC284011C5E03083E66421A615E1B3EEE3FA4E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::PopData(System.Int32&,System.Int32&,System.Int32&,System.Byte[],System.Int32,System.Int32&,System.Byte&)");
	int32_t icallRetVal = _il2cpp_icall_func(___hostId0, ___connectionId1, ___channelId2, ___buffer3, ___bufferSize4, ___receivedSize5, ___error6);
	return icallRetVal;
}
// System.Void UnityEngine.Networking.NetworkTransport::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_Cleanup_mEBC3B570563F0BB12FFE09B4F9D97BD5AA0143B8 (const RuntimeMethod* method) 
{
	typedef void (*NetworkTransport_Cleanup_mEBC3B570563F0BB12FFE09B4F9D97BD5AA0143B8_ftn) ();
	static NetworkTransport_Cleanup_mEBC3B570563F0BB12FFE09B4F9D97BD5AA0143B8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_Cleanup_mEBC3B570563F0BB12FFE09B4F9D97BD5AA0143B8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::Cleanup()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.Networking.NetworkTransport::CheckTopology(UnityEngine.Networking.HostTopology)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_CheckTopology_mAA8FECF24CA789C88EC00C16D24378D8F160310B (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* ___topology0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA4407BF11853ADCE80E5510309BD4DD992B230C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m57B9E895CBF5D76E3FCFCA08C1549AB3C900758A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = NetworkTransport_GetMaxPacketSize_m13D0A75A36015831F4B7A17B62899CA6D9DB7AB7(NULL);
		V_0 = L_0;
		HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* L_1 = ___topology0;
		NullCheck(L_1);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_2;
		L_2 = HostTopology_get_DefaultConfig_m1B7FCC0012504CAF14C7AC1C39F5A4A31409BF8A(L_1, NULL);
		NullCheck(L_2);
		uint16_t L_3;
		L_3 = ConnectionConfig_get_PacketSize_m3E5665AD5A5449791593872901FD6A4DECAFABB1(L_2, NULL);
		int32_t L_4 = V_0;
		V_1 = (bool)((((int32_t)L_3) > ((int32_t)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFB53011A10B004A1383FD0B7A61E675D7980F715)), L_6, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_8 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetworkTransport_CheckTopology_mAA8FECF24CA789C88EC00C16D24378D8F160310B_RuntimeMethod_var)));
	}

IL_0030:
	{
		V_2 = 0;
		goto IL_0076;
	}

IL_0034:
	{
		HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* L_9 = ___topology0;
		NullCheck(L_9);
		List_1_tBEE447C5DCA2C53BE427F5C2A320C9E183805319* L_10;
		L_10 = HostTopology_get_SpecialConnectionConfigs_mD7BAC8EA0F2050C2C3B3D46E32512107F6C93AE5(L_9, NULL);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_12;
		L_12 = List_1_get_Item_m57B9E895CBF5D76E3FCFCA08C1549AB3C900758A(L_10, L_11, List_1_get_Item_m57B9E895CBF5D76E3FCFCA08C1549AB3C900758A_RuntimeMethod_var);
		NullCheck(L_12);
		uint16_t L_13;
		L_13 = ConnectionConfig_get_PacketSize_m3E5665AD5A5449791593872901FD6A4DECAFABB1(L_12, NULL);
		int32_t L_14 = V_0;
		V_3 = (bool)((((int32_t)L_13) > ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_16;
		L_16 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_17;
		L_17 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_18;
		L_18 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral515E8DC0021BC9F0BE2285E066E0396A65CF1DE2)), L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEA9F88EAA400C7758A1C3CF48D8E6A867EF21B25)), L_17, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_19 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetworkTransport_CheckTopology_mAA8FECF24CA789C88EC00C16D24378D8F160310B_RuntimeMethod_var)));
	}

IL_0071:
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0076:
	{
		int32_t L_21 = V_2;
		HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* L_22 = ___topology0;
		NullCheck(L_22);
		List_1_tBEE447C5DCA2C53BE427F5C2A320C9E183805319* L_23;
		L_23 = HostTopology_get_SpecialConnectionConfigs_mD7BAC8EA0F2050C2C3B3D46E32512107F6C93AE5(L_22, NULL);
		NullCheck(L_23);
		int32_t L_24;
		L_24 = List_1_get_Count_mA4407BF11853ADCE80E5510309BD4DD992B230C5_inline(L_23, List_1_get_Count_mA4407BF11853ADCE80E5510309BD4DD992B230C5_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_21) < ((int32_t)L_24))? 1 : 0);
		bool L_25 = V_4;
		if (L_25)
		{
			goto IL_0034;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransport::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport__cctor_m10DC358D62A6475D2AD0B1ACDF2EEE1AC54C125E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var))->___s_nextSceneId_0 = 1;
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
// System.Void UnityEngine.Networking.ChannelQOS::.ctor(UnityEngine.Networking.QosType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelQOS__ctor_m6E6E1F3D0811C9AAF6B11D2AC31D7C6DFC16CFB2 (ChannelQOS_t88C42079F6B6C6E32595E6A6196D4253D15806AB* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___value0;
		__this->___m_Type_0 = L_0;
		__this->___m_BelongsSharedOrderChannel_1 = (bool)0;
		return;
	}
}
// System.Void UnityEngine.Networking.ChannelQOS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelQOS__ctor_m6784373BC8D0B32693F4433D217BBC7E534C3470 (ChannelQOS_t88C42079F6B6C6E32595E6A6196D4253D15806AB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___m_Type_0 = 0;
		__this->___m_BelongsSharedOrderChannel_1 = (bool)0;
		return;
	}
}
// System.Void UnityEngine.Networking.ChannelQOS::.ctor(UnityEngine.Networking.ChannelQOS)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelQOS__ctor_m1ED2DE7DC1454D74CC4A22069EBA9C92B6EFE236 (ChannelQOS_t88C42079F6B6C6E32595E6A6196D4253D15806AB* __this, ChannelQOS_t88C42079F6B6C6E32595E6A6196D4253D15806AB* ___channel0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ChannelQOS_t88C42079F6B6C6E32595E6A6196D4253D15806AB* L_0 = ___channel0;
		V_0 = (bool)((((RuntimeObject*)(ChannelQOS_t88C42079F6B6C6E32595E6A6196D4253D15806AB*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_2 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4DB1A45BB662D79231E9447F2CBFDE3B6CE19D71)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChannelQOS__ctor_m1ED2DE7DC1454D74CC4A22069EBA9C92B6EFE236_RuntimeMethod_var)));
	}

IL_001b:
	{
		ChannelQOS_t88C42079F6B6C6E32595E6A6196D4253D15806AB* L_3 = ___channel0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___m_Type_0;
		__this->___m_Type_0 = L_4;
		ChannelQOS_t88C42079F6B6C6E32595E6A6196D4253D15806AB* L_5 = ___channel0;
		NullCheck(L_5);
		bool L_6 = L_5->___m_BelongsSharedOrderChannel_1;
		__this->___m_BelongsSharedOrderChannel_1 = L_6;
		return;
	}
}
// UnityEngine.Networking.QosType UnityEngine.Networking.ChannelQOS::get_QOS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChannelQOS_get_QOS_m963F4A9BB91282AE00B5B0205EF8D8FF0DA2E417 (ChannelQOS_t88C42079F6B6C6E32595E6A6196D4253D15806AB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Type_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
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
// System.Void UnityEngine.Networking.ConnectionConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig__ctor_mF6E6BBCAC0C41237A0A26FC3BDA8C882AC627113 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5DC5C1BC05E9F0D42B5F462558AD6C944EAF3303_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m85BF125FC9834FDD02F39B8D99AFE6318F1D1AEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t271481075A654FA9D7D7F2CBC8C8484249302E6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A* L_0 = (List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A*)il2cpp_codegen_object_new(List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m5DC5C1BC05E9F0D42B5F462558AD6C944EAF3303(L_0, List_1__ctor_m5DC5C1BC05E9F0D42B5F462558AD6C944EAF3303_RuntimeMethod_var);
		__this->___m_Channels_26 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Channels_26), (void*)L_0);
		List_1_t271481075A654FA9D7D7F2CBC8C8484249302E6A* L_1 = (List_1_t271481075A654FA9D7D7F2CBC8C8484249302E6A*)il2cpp_codegen_object_new(List_1_t271481075A654FA9D7D7F2CBC8C8484249302E6A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m85BF125FC9834FDD02F39B8D99AFE6318F1D1AEB(L_1, List_1__ctor_m85BF125FC9834FDD02F39B8D99AFE6318F1D1AEB_RuntimeMethod_var);
		__this->___m_SharedOrderChannels_27 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SharedOrderChannels_27), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___m_PacketSize_0 = (uint16_t)((int32_t)1440);
		__this->___m_FragmentSize_1 = (uint16_t)((int32_t)500);
		__this->___m_ResendTimeout_2 = ((int32_t)1200);
		__this->___m_DisconnectTimeout_3 = ((int32_t)2000);
		__this->___m_ConnectTimeout_4 = ((int32_t)2000);
		__this->___m_MinUpdateTimeout_5 = ((int32_t)10);
		__this->___m_PingTimeout_6 = ((int32_t)500);
		__this->___m_ReducedPingTimeout_7 = ((int32_t)100);
		__this->___m_AllCostTimeout_8 = ((int32_t)20);
		__this->___m_NetworkDropThreshold_9 = (uint8_t)5;
		__this->___m_OverflowDropThreshold_10 = (uint8_t)5;
		__this->___m_MaxConnectionAttempt_11 = (uint8_t)((int32_t)10);
		__this->___m_AckDelay_12 = ((int32_t)33);
		__this->___m_SendDelay_13 = ((int32_t)10);
		__this->___m_MaxCombinedReliableMessageSize_14 = (uint16_t)((int32_t)100);
		__this->___m_MaxCombinedReliableMessageCount_15 = (uint16_t)((int32_t)10);
		__this->___m_MaxSentMessageQueueSize_16 = (uint16_t)((int32_t)512);
		__this->___m_AcksType_17 = 1;
		__this->___m_UsePlatformSpecificProtocols_18 = (bool)0;
		__this->___m_InitialBandwidth_19 = 0;
		__this->___m_BandwidthPeakFactor_20 = (2.0f);
		__this->___m_WebSocketReceiveBufferMaxSize_21 = (uint16_t)0;
		__this->___m_UdpSocketReceiveBufferMaxSize_22 = 0;
		__this->___m_SSLCertFilePath_23 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SSLCertFilePath_23), (void*)(String_t*)NULL);
		__this->___m_SSLPrivateKeyFilePath_24 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SSLPrivateKeyFilePath_24), (void*)(String_t*)NULL);
		__this->___m_SSLCAFilePath_25 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SSLCAFilePath_25), (void*)(String_t*)NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::.ctor(UnityEngine.Networking.ConnectionConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig__ctor_mC7173A13A86DE7BB740E7DBACB6CD4C25234C3D4 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* ___config0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelQOS_t88C42079F6B6C6E32595E6A6196D4253D15806AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m390DA107BD23DAA9675F02F107C58B5963719B89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m72DB5162A57B53CC4FE6AAAF6CCFD2EC0D6979E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1CD842C06C2EE91A078A835EEB3235CBEFAB1EF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m28C6D66CE4E85CADFE2C9F2480BEDC2B0EB725E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m167ED6452B3449FBF08E213017E646F36EA4362F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB9880DDD47251277F5C63EAA7800C23E03EA1FFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCC56E3F2BAC7B5D8048C15FDE221FFFEBE8363D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCE6BFCF66CB516F954724F5125CA91914E9DFEC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3A3D8AA10FCF10DBBFCE37425BC4BCFB3ADD47EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC321A3225E4D1918F8CC4205C7C523D51F72DF6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5DC5C1BC05E9F0D42B5F462558AD6C944EAF3303_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m85BF125FC9834FDD02F39B8D99AFE6318F1D1AEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t271481075A654FA9D7D7F2CBC8C8484249302E6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Enumerator_tF7460079042BD76803E26FDA9C168CC22AF3AA5E V_2;
	memset((&V_2), 0, sizeof(V_2));
	ChannelQOS_t88C42079F6B6C6E32595E6A6196D4253D15806AB* V_3 = NULL;
	Enumerator_t942C15577E5F631A0AE18A48C9752CE9F2B55218 V_4;
	memset((&V_4), 0, sizeof(V_4));
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* V_5 = NULL;
	{
		List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A* L_0 = (List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A*)il2cpp_codegen_object_new(List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m5DC5C1BC05E9F0D42B5F462558AD6C944EAF3303(L_0, List_1__ctor_m5DC5C1BC05E9F0D42B5F462558AD6C944EAF3303_RuntimeMethod_var);
		__this->___m_Channels_26 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Channels_26), (void*)L_0);
		List_1_t271481075A654FA9D7D7F2CBC8C8484249302E6A* L_1 = (List_1_t271481075A654FA9D7D7F2CBC8C8484249302E6A*)il2cpp_codegen_object_new(List_1_t271481075A654FA9D7D7F2CBC8C8484249302E6A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m85BF125FC9834FDD02F39B8D99AFE6318F1D1AEB(L_1, List_1__ctor_m85BF125FC9834FDD02F39B8D99AFE6318F1D1AEB_RuntimeMethod_var);
		__this->___m_SharedOrderChannels_27 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SharedOrderChannels_27), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_2 = ___config0;
		V_0 = (bool)((((RuntimeObject*)(ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_4 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral317EE74AF038EFA1EFB835A1A142AD358C5939C3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConnectionConfig__ctor_mC7173A13A86DE7BB740E7DBACB6CD4C25234C3D4_RuntimeMethod_var)));
	}

IL_0031:
	{
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_5 = ___config0;
		NullCheck(L_5);
		uint16_t L_6 = L_5->___m_PacketSize_0;
		__this->___m_PacketSize_0 = L_6;
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_7 = ___config0;
		NullCheck(L_7);
		uint16_t L_8 = L_7->___m_FragmentSize_1;
		__this->___m_FragmentSize_1 = L_8;
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_9 = ___config0;
		NullCheck(L_9);
		uint32_t L_10 = L_9->___m_ResendTimeout_2;
		__this->___m_ResendTimeout_2 = L_10;
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_11 = ___config0;
		NullCheck(L_11);
		uint32_t L_12 = L_11->___m_DisconnectTimeout_3;
		__this->___m_DisconnectTimeout_3 = L_12;
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_13 = ___config0;
		NullCheck(L_13);
		uint32_t L_14 = L_13->___m_ConnectTimeout_4;
		__this->___m_ConnectTimeout_4 = L_14;
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_15 = ___config0;
		NullCheck(L_15);
		uint32_t L_16 = L_15->___m_MinUpdateTimeout_5;
		__this->___m_MinUpdateTimeout_5 = L_16;
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_17 = ___config0;
		NullCheck(L_17);
		uint32_t L_18 = L_17->___m_PingTimeout_6;
		__this->___m_PingTimeout_6 = L_18;
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_19 = ___config0;
		NullCheck(L_19);
		uint32_t L_20 = L_19->___m_ReducedPingTimeout_7;
		__this->___m_ReducedPingTimeout_7 = L_20;
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_21 = ___config0;
		NullCheck(L_21);
		uint32_t L_22 = L_21->___m_AllCostTimeout_8;
		__this->___m_AllCostTimeout_8 = L_22;
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_23 = ___config0;
		NullCheck(L_23);
		uint8_t L_24 = L_23->___m_NetworkDropThreshold_9;
		__this->___m_NetworkDropThreshold_9 = L_24;
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_25 = ___config0;
		NullCheck(L_25);
		uint8_t L_26 = L_25->___m_OverflowDropThreshold_10;
		__this->___m_OverflowDropThreshold_10 = L_26;
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_27 = ___config0;
		NullCheck(L_27);
		uint8_t L_28 = L_27->___m_MaxConnectionAttempt_11;
		__this->___m_MaxConnectionAttempt_11 = L_28;
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_29 = ___config0;
		NullCheck(L_29);
		uint32_t L_30 = L_29->___m_AckDelay_12;
		__this->___m_AckDelay_12 = L_30;
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_31 = ___config0;
		NullCheck(L_31);
		uint32_t L_32 = L_31->___m_SendDelay_13;
		__this->___m_SendDelay_13 = L_32;
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_33 = ___config0;
		NullCheck(L_33);
		uint16_t L_34;
		L_34 = ConnectionConfig_get_MaxCombinedReliableMessageSize_m7F38DCB83C42DDF8B99F5952A9C33A4CCB901D43(L_33, NULL);
		__this->___m_MaxCombinedReliableMessageSize_14 = L_34;
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_35 = ___config0;
		NullCheck(L_35);
		uint16_t L_36 = L_35->___m_MaxCombinedReliableMessageCount_15;
		__this->___m_MaxCombinedReliableMessageCount_15 = L_36;
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_37 = ___config0;
		NullCheck(L_37);
		uint16_t L_38 = L_37->___m_MaxSentMessageQueueSize_16;
		__this->___m_MaxSentMessageQueueSize_16 = L_38;
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_39 = ___config0;
		NullCheck(L_39);
		int32_t L_40 = L_39->___m_AcksType_17;
		__this->___m_AcksType_17 = L_40;
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_41 = ___config0;
		NullCheck(L_41);
		bool L_42 = L_41->___m_UsePlatformSpecificProtocols_18;
		__this->___m_UsePlatformSpecificProtocols_18 = L_42;
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_43 = ___config0;
		NullCheck(L_43);
		uint32_t L_44 = L_43->___m_InitialBandwidth_19;
		__this->___m_InitialBandwidth_19 = L_44;
		uint32_t L_45 = __this->___m_InitialBandwidth_19;
		V_1 = (bool)((((int32_t)L_45) == ((int32_t)0))? 1 : 0);
		bool L_46 = V_1;
		if (!L_46)
		{
			goto IL_0149;
		}
	}
	{
		uint16_t L_47 = __this->___m_PacketSize_0;
		uint32_t L_48 = __this->___m_MinUpdateTimeout_5;
		__this->___m_InitialBandwidth_19 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_47, ((int32_t)1000)))/(uint32_t)(int32_t)L_48));
	}

IL_0149:
	{
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_49 = ___config0;
		NullCheck(L_49);
		float L_50 = L_49->___m_BandwidthPeakFactor_20;
		__this->___m_BandwidthPeakFactor_20 = L_50;
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_51 = ___config0;
		NullCheck(L_51);
		uint16_t L_52 = L_51->___m_WebSocketReceiveBufferMaxSize_21;
		__this->___m_WebSocketReceiveBufferMaxSize_21 = L_52;
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_53 = ___config0;
		NullCheck(L_53);
		uint32_t L_54 = L_53->___m_UdpSocketReceiveBufferMaxSize_22;
		__this->___m_UdpSocketReceiveBufferMaxSize_22 = L_54;
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_55 = ___config0;
		NullCheck(L_55);
		String_t* L_56 = L_55->___m_SSLCertFilePath_23;
		__this->___m_SSLCertFilePath_23 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SSLCertFilePath_23), (void*)L_56);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_57 = ___config0;
		NullCheck(L_57);
		String_t* L_58 = L_57->___m_SSLPrivateKeyFilePath_24;
		__this->___m_SSLPrivateKeyFilePath_24 = L_58;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SSLPrivateKeyFilePath_24), (void*)L_58);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_59 = ___config0;
		NullCheck(L_59);
		String_t* L_60 = L_59->___m_SSLCAFilePath_25;
		__this->___m_SSLCAFilePath_25 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SSLCAFilePath_25), (void*)L_60);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_61 = ___config0;
		NullCheck(L_61);
		List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A* L_62 = L_61->___m_Channels_26;
		NullCheck(L_62);
		Enumerator_tF7460079042BD76803E26FDA9C168CC22AF3AA5E L_63;
		L_63 = List_1_GetEnumerator_m3A3D8AA10FCF10DBBFCE37425BC4BCFB3ADD47EC(L_62, List_1_GetEnumerator_m3A3D8AA10FCF10DBBFCE37425BC4BCFB3ADD47EC_RuntimeMethod_var);
		V_2 = L_63;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01c7:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m390DA107BD23DAA9675F02F107C58B5963719B89((&V_2), Enumerator_Dispose_m390DA107BD23DAA9675F02F107C58B5963719B89_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_01bc_1;
			}

IL_01a0_1:
			{
				ChannelQOS_t88C42079F6B6C6E32595E6A6196D4253D15806AB* L_64;
				L_64 = Enumerator_get_Current_mB9880DDD47251277F5C63EAA7800C23E03EA1FFA_inline((&V_2), Enumerator_get_Current_mB9880DDD47251277F5C63EAA7800C23E03EA1FFA_RuntimeMethod_var);
				V_3 = L_64;
				List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A* L_65 = __this->___m_Channels_26;
				ChannelQOS_t88C42079F6B6C6E32595E6A6196D4253D15806AB* L_66 = V_3;
				ChannelQOS_t88C42079F6B6C6E32595E6A6196D4253D15806AB* L_67 = (ChannelQOS_t88C42079F6B6C6E32595E6A6196D4253D15806AB*)il2cpp_codegen_object_new(ChannelQOS_t88C42079F6B6C6E32595E6A6196D4253D15806AB_il2cpp_TypeInfo_var);
				NullCheck(L_67);
				ChannelQOS__ctor_m1ED2DE7DC1454D74CC4A22069EBA9C92B6EFE236(L_67, L_66, NULL);
				NullCheck(L_65);
				List_1_Add_mCE6BFCF66CB516F954724F5125CA91914E9DFEC8_inline(L_65, L_67, List_1_Add_mCE6BFCF66CB516F954724F5125CA91914E9DFEC8_RuntimeMethod_var);
			}

IL_01bc_1:
			{
				bool L_68;
				L_68 = Enumerator_MoveNext_m1CD842C06C2EE91A078A835EEB3235CBEFAB1EF5((&V_2), Enumerator_MoveNext_m1CD842C06C2EE91A078A835EEB3235CBEFAB1EF5_RuntimeMethod_var);
				if (L_68)
				{
					goto IL_01a0_1;
				}
			}
			{
				goto IL_01d6;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01d6:
	{
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_69 = ___config0;
		NullCheck(L_69);
		List_1_t271481075A654FA9D7D7F2CBC8C8484249302E6A* L_70 = L_69->___m_SharedOrderChannels_27;
		NullCheck(L_70);
		Enumerator_t942C15577E5F631A0AE18A48C9752CE9F2B55218 L_71;
		L_71 = List_1_GetEnumerator_mC321A3225E4D1918F8CC4205C7C523D51F72DF6B(L_70, List_1_GetEnumerator_mC321A3225E4D1918F8CC4205C7C523D51F72DF6B_RuntimeMethod_var);
		V_4 = L_71;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_020a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m72DB5162A57B53CC4FE6AAAF6CCFD2EC0D6979E9((&V_4), Enumerator_Dispose_m72DB5162A57B53CC4FE6AAAF6CCFD2EC0D6979E9_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_01ff_1;
			}

IL_01e6_1:
			{
				List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_72;
				L_72 = Enumerator_get_Current_m167ED6452B3449FBF08E213017E646F36EA4362F_inline((&V_4), Enumerator_get_Current_m167ED6452B3449FBF08E213017E646F36EA4362F_RuntimeMethod_var);
				V_5 = L_72;
				List_1_t271481075A654FA9D7D7F2CBC8C8484249302E6A* L_73 = __this->___m_SharedOrderChannels_27;
				List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_74 = V_5;
				NullCheck(L_73);
				List_1_Add_mCC56E3F2BAC7B5D8048C15FDE221FFFEBE8363D2_inline(L_73, L_74, List_1_Add_mCC56E3F2BAC7B5D8048C15FDE221FFFEBE8363D2_RuntimeMethod_var);
			}

IL_01ff_1:
			{
				bool L_75;
				L_75 = Enumerator_MoveNext_m28C6D66CE4E85CADFE2C9F2480BEDC2B0EB725E8((&V_4), Enumerator_MoveNext_m28C6D66CE4E85CADFE2C9F2480BEDC2B0EB725E8_RuntimeMethod_var);
				if (L_75)
				{
					goto IL_01e6_1;
				}
			}
			{
				goto IL_0219;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0219:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::Validate(UnityEngine.Networking.ConnectionConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig_Validate_m53A1C534AEBA90364B0FF9A85C74F7901D73F7E6 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* ___config0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m99134DCB6052F11F62BC68C4F2529113657232C6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_0 = ___config0;
		NullCheck(L_0);
		uint16_t L_1 = L_0->___m_PacketSize_0;
		V_0 = (bool)((((int32_t)L_1) < ((int32_t)((int32_t)128)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		V_1 = ((int32_t)128);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCDBC178854E256F8C61DC4C296BB7F91494D0D08)), L_3, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConnectionConfig_Validate_m53A1C534AEBA90364B0FF9A85C74F7901D73F7E6_RuntimeMethod_var)));
	}

IL_002f:
	{
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_6 = ___config0;
		NullCheck(L_6);
		uint16_t L_7 = L_6->___m_FragmentSize_1;
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_8 = ___config0;
		NullCheck(L_8);
		uint16_t L_9 = L_8->___m_PacketSize_0;
		V_2 = (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_9, ((int32_t)128)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0067;
		}
	}
	{
		V_1 = ((int32_t)128);
		String_t* L_11;
		L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5A068CD5BEF2AF2FF0E3642874366761954C834B)), L_11, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_13 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConnectionConfig_Validate_m53A1C534AEBA90364B0FF9A85C74F7901D73F7E6_RuntimeMethod_var)));
	}

IL_0067:
	{
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_14 = ___config0;
		NullCheck(L_14);
		List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A* L_15 = L_14->___m_Channels_26;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_m99134DCB6052F11F62BC68C4F2529113657232C6_inline(L_15, List_1_get_Count_m99134DCB6052F11F62BC68C4F2529113657232C6_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_16) > ((int32_t)((int32_t)255)))? 1 : 0);
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0088;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_18 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC4A22150C3582A362005292F9B7BDE6394836BA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConnectionConfig_Validate_m53A1C534AEBA90364B0FF9A85C74F7901D73F7E6_RuntimeMethod_var)));
	}

IL_0088:
	{
		return;
	}
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_PacketSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_PacketSize_m3E5665AD5A5449791593872901FD6A4DECAFABB1 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->___m_PacketSize_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_FragmentSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_FragmentSize_m45EC36906EEC9252E36A32307BC314F0942E8047 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->___m_FragmentSize_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_ResendTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_ResendTimeout_m1B9838FDDDC0834953C031A98E4650CD977BAE64 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->___m_ResendTimeout_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_DisconnectTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_DisconnectTimeout_mCF53AF6904303F43AD78A090B1A9CA2C3303698D (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->___m_DisconnectTimeout_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_ConnectTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_ConnectTimeout_m1123D7612CEB51EDDAB509CA8AAD20A6210C19E3 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->___m_ConnectTimeout_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_MinUpdateTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_MinUpdateTimeout_m8F0E078E261D6A4CC9F333F1684998A0F870DA18 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->___m_MinUpdateTimeout_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_PingTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_PingTimeout_m3AF224715FBA5A09F4594E65172AE584662FAB6E (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->___m_PingTimeout_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_ReducedPingTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_ReducedPingTimeout_m696E86B1B2F9CB80E993F24D28FF9598FA81621E (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->___m_ReducedPingTimeout_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_AllCostTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_AllCostTimeout_m75E31AF31E3E61446AC48A70C6B0C870531B9038 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->___m_AllCostTimeout_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Byte UnityEngine.Networking.ConnectionConfig::get_NetworkDropThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_get_NetworkDropThreshold_mDEDA7A8C23C29BC1B52FC2A7EF3B3282C84E4EFA (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->___m_NetworkDropThreshold_9;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Byte UnityEngine.Networking.ConnectionConfig::get_OverflowDropThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_get_OverflowDropThreshold_mDEE3B17D3810562D9D6BD46A4511F73C350DB51C (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->___m_OverflowDropThreshold_10;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Byte UnityEngine.Networking.ConnectionConfig::get_MaxConnectionAttempt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_get_MaxConnectionAttempt_m64C3E9BAF3200CB3FD8A82AB8B8CDFF25CC3125F (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->___m_MaxConnectionAttempt_11;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_AckDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_AckDelay_mB9A2977F558C4803F59CD7FF84D97094AB3B16C8 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->___m_AckDelay_12;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_SendDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_SendDelay_mF8ECFD82771106940F3680DAF211540B259595E7 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->___m_SendDelay_13;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxCombinedReliableMessageSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_MaxCombinedReliableMessageSize_m7F38DCB83C42DDF8B99F5952A9C33A4CCB901D43 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->___m_MaxCombinedReliableMessageSize_14;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxCombinedReliableMessageCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_MaxCombinedReliableMessageCount_m876678182499559E8C328DC5245138184DE70FB5 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->___m_MaxCombinedReliableMessageCount_15;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxSentMessageQueueSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_MaxSentMessageQueueSize_m2303DF7AA39DF65F6AC8E3E09712D569FC142496 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->___m_MaxSentMessageQueueSize_16;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::set_MaxSentMessageQueueSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig_set_MaxSentMessageQueueSize_m4EF0FBEF7C0BF9A3D28BE8577B7AA449522EDEE7 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, uint16_t ___value0, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___value0;
		__this->___m_MaxSentMessageQueueSize_16 = L_0;
		return;
	}
}
// UnityEngine.Networking.ConnectionAcksType UnityEngine.Networking.ConnectionConfig::get_AcksType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfig_get_AcksType_mA7D805EB6E25D753BC6B90207E42275DDFE2457A (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_AcksType_17;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Networking.ConnectionConfig::get_UsePlatformSpecificProtocols()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionConfig_get_UsePlatformSpecificProtocols_m26AB5587FC7948E4146420A28B9ACE4DB838BBEF (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->___m_UsePlatformSpecificProtocols_18;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_InitialBandwidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_InitialBandwidth_m6F1ED856FD5AF1D1ED9D5CB5D702F83A6B6E0450 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->___m_InitialBandwidth_19;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Single UnityEngine.Networking.ConnectionConfig::get_BandwidthPeakFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ConnectionConfig_get_BandwidthPeakFactor_mDCBC6D81636835A41FA646D11A7D54002CB6F66B (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_BandwidthPeakFactor_20;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_WebSocketReceiveBufferMaxSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_WebSocketReceiveBufferMaxSize_m80CAB726F8DAD340BBF0A5E5AFEC937F2BBC7413 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->___m_WebSocketReceiveBufferMaxSize_21;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_UdpSocketReceiveBufferMaxSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_UdpSocketReceiveBufferMaxSize_mD17BEEF8D82F058E351A61388A54EB152EF4D030 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->___m_UdpSocketReceiveBufferMaxSize_22;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Networking.ConnectionConfig::get_SSLCertFilePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectionConfig_get_SSLCertFilePath_m2EE0429E02FF2AEA616F0F8A50213E0A194840BA (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___m_SSLCertFilePath_23;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Networking.ConnectionConfig::get_SSLPrivateKeyFilePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectionConfig_get_SSLPrivateKeyFilePath_m7BB97A3F2B0120FFEAB814D5751755FE808BEB42 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___m_SSLPrivateKeyFilePath_24;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Networking.ConnectionConfig::get_SSLCAFilePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectionConfig_get_SSLCAFilePath_m082FAA99BAD72B785D61F2DE5888A5BAEFB4533E (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___m_SSLCAFilePath_25;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Networking.ConnectionConfig::get_ChannelCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfig_get_ChannelCount_m80233F3A7DB27A25CA36484350D951BA86EC1506 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m99134DCB6052F11F62BC68C4F2529113657232C6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A* L_0 = __this->___m_Channels_26;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m99134DCB6052F11F62BC68C4F2529113657232C6_inline(L_0, List_1_get_Count_m99134DCB6052F11F62BC68C4F2529113657232C6_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.Networking.ConnectionConfig::get_SharedOrderChannelCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfig_get_SharedOrderChannelCount_m825DA0CE6DA174020BB7EDDA8755FD702FAC4BCB (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m53DDE3F45B350B4002177C8229EC3C8832DFB6DB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t271481075A654FA9D7D7F2CBC8C8484249302E6A* L_0 = __this->___m_SharedOrderChannels_27;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m53DDE3F45B350B4002177C8229EC3C8832DFB6DB_inline(L_0, List_1_get_Count_m53DDE3F45B350B4002177C8229EC3C8832DFB6DB_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Byte UnityEngine.Networking.ConnectionConfig::AddChannel(UnityEngine.Networking.QosType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_AddChannel_m8272FB8322A2D4E18F56FC4FDCCACB043851C11E (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelQOS_t88C42079F6B6C6E32595E6A6196D4253D15806AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCE6BFCF66CB516F954724F5125CA91914E9DFEC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m99134DCB6052F11F62BC68C4F2529113657232C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QosType_tCBCBB4E4465E250D1108F0F864F12E4E7F5D55CA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QosType_tCBCBB4E4465E250D1108F0F864F12E4E7F5D55CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ChannelQOS_t88C42079F6B6C6E32595E6A6196D4253D15806AB* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	{
		List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A* L_0 = __this->___m_Channels_26;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m99134DCB6052F11F62BC68C4F2529113657232C6_inline(L_0, List_1_get_Count_m99134DCB6052F11F62BC68C4F2529113657232C6_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_1) > ((int32_t)((int32_t)255)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1F4F8DCA94A6832B1312A4D1589F77B40D6B6BA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConnectionConfig_AddChannel_m8272FB8322A2D4E18F56FC4FDCCACB043851C11E_RuntimeMethod_var)));
	}

IL_0022:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (QosType_tCBCBB4E4465E250D1108F0F864F12E4E7F5D55CA_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		int32_t L_6 = ___value0;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(QosType_tCBCBB4E4465E250D1108F0F864F12E4E7F5D55CA_il2cpp_TypeInfo_var, &L_7);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Enum_IsDefined_m1C9A0C4F54B0538351585FF563A01091A6FE2F28(L_5, L_8, NULL);
		V_2 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_11 = ___value0;
		V_3 = L_11;
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDF5230F0D16A6901ED26AE1F9636F2A61DA5D6ED)), L_12, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_14 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConnectionConfig_AddChannel_m8272FB8322A2D4E18F56FC4FDCCACB043851C11E_RuntimeMethod_var)));
	}

IL_0058:
	{
		int32_t L_15 = ___value0;
		ChannelQOS_t88C42079F6B6C6E32595E6A6196D4253D15806AB* L_16 = (ChannelQOS_t88C42079F6B6C6E32595E6A6196D4253D15806AB*)il2cpp_codegen_object_new(ChannelQOS_t88C42079F6B6C6E32595E6A6196D4253D15806AB_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		ChannelQOS__ctor_m6E6E1F3D0811C9AAF6B11D2AC31D7C6DFC16CFB2(L_16, L_15, NULL);
		V_0 = L_16;
		List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A* L_17 = __this->___m_Channels_26;
		ChannelQOS_t88C42079F6B6C6E32595E6A6196D4253D15806AB* L_18 = V_0;
		NullCheck(L_17);
		List_1_Add_mCE6BFCF66CB516F954724F5125CA91914E9DFEC8_inline(L_17, L_18, List_1_Add_mCE6BFCF66CB516F954724F5125CA91914E9DFEC8_RuntimeMethod_var);
		List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A* L_19 = __this->___m_Channels_26;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = List_1_get_Count_m99134DCB6052F11F62BC68C4F2529113657232C6_inline(L_19, List_1_get_Count_m99134DCB6052F11F62BC68C4F2529113657232C6_RuntimeMethod_var);
		V_4 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract(L_20, 1)));
		goto IL_007e;
	}

IL_007e:
	{
		uint8_t L_21 = V_4;
		return L_21;
	}
}
// UnityEngine.Networking.QosType UnityEngine.Networking.ConnectionConfig::GetChannel(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfig_GetChannel_mF8A40F89C7B2FAA1A19A6AAE764747AAA5CBF7D8 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, uint8_t ___idx0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m99134DCB6052F11F62BC68C4F2529113657232C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m494C27AC04D222EFBC05B305F3A503BBD393F313_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		uint8_t L_0 = ___idx0;
		List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A* L_1 = __this->___m_Channels_26;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m99134DCB6052F11F62BC68C4F2529113657232C6_inline(L_1, List_1_get_Count_m99134DCB6052F11F62BC68C4F2529113657232C6_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral970E2379B8ADD15A47FF04C1F1AE7051F01DA5DC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConnectionConfig_GetChannel_mF8A40F89C7B2FAA1A19A6AAE764747AAA5CBF7D8_RuntimeMethod_var)));
	}

IL_0021:
	{
		List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A* L_5 = __this->___m_Channels_26;
		uint8_t L_6 = ___idx0;
		NullCheck(L_5);
		ChannelQOS_t88C42079F6B6C6E32595E6A6196D4253D15806AB* L_7;
		L_7 = List_1_get_Item_m494C27AC04D222EFBC05B305F3A503BBD393F313(L_5, L_6, List_1_get_Item_m494C27AC04D222EFBC05B305F3A503BBD393F313_RuntimeMethod_var);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = ChannelQOS_get_QOS_m963F4A9BB91282AE00B5B0205EF8D8FF0DA2E417(L_7, NULL);
		V_1 = L_8;
		goto IL_0035;
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		return L_9;
	}
}
// System.Collections.Generic.IList`1<System.Byte> UnityEngine.Networking.ConnectionConfig::GetSharedOrderChannels(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionConfig_GetSharedOrderChannels_mBE34CB1332CC01B01526A2B41C7B7CF89F584FD7 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, uint8_t ___idx0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AsReadOnly_m2C521D4F94351E14531A41F199E31B3BE298A5EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m53DDE3F45B350B4002177C8229EC3C8832DFB6DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC858856E9653527118D0803019902D80836E4187_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		uint8_t L_0 = ___idx0;
		List_1_t271481075A654FA9D7D7F2CBC8C8484249302E6A* L_1 = __this->___m_SharedOrderChannels_27;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m53DDE3F45B350B4002177C8229EC3C8832DFB6DB_inline(L_1, List_1_get_Count_m53DDE3F45B350B4002177C8229EC3C8832DFB6DB_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB7924E654A4528032CD5FC50B5878AA01E102C42)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConnectionConfig_GetSharedOrderChannels_mBE34CB1332CC01B01526A2B41C7B7CF89F584FD7_RuntimeMethod_var)));
	}

IL_0021:
	{
		List_1_t271481075A654FA9D7D7F2CBC8C8484249302E6A* L_5 = __this->___m_SharedOrderChannels_27;
		uint8_t L_6 = ___idx0;
		NullCheck(L_5);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_7;
		L_7 = List_1_get_Item_mC858856E9653527118D0803019902D80836E4187(L_5, L_6, List_1_get_Item_mC858856E9653527118D0803019902D80836E4187_RuntimeMethod_var);
		NullCheck(L_7);
		ReadOnlyCollection_1_t439295507312D66D6AE8BD395D29969804EE9EA7* L_8;
		L_8 = List_1_AsReadOnly_m2C521D4F94351E14531A41F199E31B3BE298A5EE(L_7, List_1_AsReadOnly_m2C521D4F94351E14531A41F199E31B3BE298A5EE_RuntimeMethod_var);
		V_1 = L_8;
		goto IL_0035;
	}

IL_0035:
	{
		RuntimeObject* L_9 = V_1;
		return L_9;
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
// System.Void UnityEngine.Networking.HostTopology::.ctor(UnityEngine.Networking.ConnectionConfig,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopology__ctor_mC7A4302FD60DCD0207953FE6EA520B29ABDDCF13 (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* __this, ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* ___defaultConfig0, int32_t ___maxDefaultConnections1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m470B457DE56865A771F1D3D14A9FA7274812394B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBEE447C5DCA2C53BE427F5C2A320C9E183805319_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		__this->___m_DefConfig_0 = (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DefConfig_0), (void*)(ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60*)NULL);
		__this->___m_MaxDefConnections_1 = 0;
		List_1_tBEE447C5DCA2C53BE427F5C2A320C9E183805319* L_0 = (List_1_tBEE447C5DCA2C53BE427F5C2A320C9E183805319*)il2cpp_codegen_object_new(List_1_tBEE447C5DCA2C53BE427F5C2A320C9E183805319_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m470B457DE56865A771F1D3D14A9FA7274812394B(L_0, List_1__ctor_m470B457DE56865A771F1D3D14A9FA7274812394B_RuntimeMethod_var);
		__this->___m_SpecialConnections_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SpecialConnections_2), (void*)L_0);
		__this->___m_ReceivedMessagePoolSize_3 = (uint16_t)((int32_t)1024);
		__this->___m_SentMessagePoolSize_4 = (uint16_t)((int32_t)1024);
		__this->___m_MessagePoolSizeGrowthFactor_5 = (0.75f);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_1 = ___defaultConfig0;
		V_0 = (bool)((((RuntimeObject*)(ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0055;
		}
	}
	{
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_3 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral317EE74AF038EFA1EFB835A1A142AD358C5939C3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HostTopology__ctor_mC7A4302FD60DCD0207953FE6EA520B29ABDDCF13_RuntimeMethod_var)));
	}

IL_0055:
	{
		int32_t L_4 = ___maxDefaultConnections1;
		V_1 = (bool)((((int32_t)((((int32_t)L_4) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0070;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9CB64D4DAF8CDF7B5A2130FCCDD62ECE720AFE8E)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral572189F4EA97569D6C0D3A4A68C98F20D9FC95A5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HostTopology__ctor_mC7A4302FD60DCD0207953FE6EA520B29ABDDCF13_RuntimeMethod_var)));
	}

IL_0070:
	{
		int32_t L_7 = ___maxDefaultConnections1;
		V_2 = (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)((int32_t)65535)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_008f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9CB64D4DAF8CDF7B5A2130FCCDD62ECE720AFE8E)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC94B47F32002FEDF4A271879FE7A0BC4157B2A6F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HostTopology__ctor_mC7A4302FD60DCD0207953FE6EA520B29ABDDCF13_RuntimeMethod_var)));
	}

IL_008f:
	{
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_10 = ___defaultConfig0;
		ConnectionConfig_Validate_m53A1C534AEBA90364B0FF9A85C74F7901D73F7E6(L_10, NULL);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_11 = ___defaultConfig0;
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_12 = (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60*)il2cpp_codegen_object_new(ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		ConnectionConfig__ctor_mC7173A13A86DE7BB740E7DBACB6CD4C25234C3D4(L_12, L_11, NULL);
		__this->___m_DefConfig_0 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DefConfig_0), (void*)L_12);
		int32_t L_13 = ___maxDefaultConnections1;
		__this->___m_MaxDefConnections_1 = L_13;
		return;
	}
}
// System.Void UnityEngine.Networking.HostTopology::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopology__ctor_m9952CA8193AFC8CB4281F22C9CBA197D7C937B8E (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m470B457DE56865A771F1D3D14A9FA7274812394B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBEE447C5DCA2C53BE427F5C2A320C9E183805319_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___m_DefConfig_0 = (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DefConfig_0), (void*)(ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60*)NULL);
		__this->___m_MaxDefConnections_1 = 0;
		List_1_tBEE447C5DCA2C53BE427F5C2A320C9E183805319* L_0 = (List_1_tBEE447C5DCA2C53BE427F5C2A320C9E183805319*)il2cpp_codegen_object_new(List_1_tBEE447C5DCA2C53BE427F5C2A320C9E183805319_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m470B457DE56865A771F1D3D14A9FA7274812394B(L_0, List_1__ctor_m470B457DE56865A771F1D3D14A9FA7274812394B_RuntimeMethod_var);
		__this->___m_SpecialConnections_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SpecialConnections_2), (void*)L_0);
		__this->___m_ReceivedMessagePoolSize_3 = (uint16_t)((int32_t)1024);
		__this->___m_SentMessagePoolSize_4 = (uint16_t)((int32_t)1024);
		__this->___m_MessagePoolSizeGrowthFactor_5 = (0.75f);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::get_DefaultConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* HostTopology_get_DefaultConfig_m1B7FCC0012504CAF14C7AC1C39F5A4A31409BF8A (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* __this, const RuntimeMethod* method) 
{
	ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* V_0 = NULL;
	{
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_0 = __this->___m_DefConfig_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Networking.HostTopology::get_MaxDefaultConnections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HostTopology_get_MaxDefaultConnections_mC1576CFA7C97379B9CCC1B864BD913CAB94A4AFD (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_MaxDefConnections_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Networking.HostTopology::get_SpecialConnectionConfigsCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HostTopology_get_SpecialConnectionConfigsCount_m19CA3BCAD147B57FF2465C19E517DA17DC589434 (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA4407BF11853ADCE80E5510309BD4DD992B230C5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_tBEE447C5DCA2C53BE427F5C2A320C9E183805319* L_0 = __this->___m_SpecialConnections_2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mA4407BF11853ADCE80E5510309BD4DD992B230C5_inline(L_0, List_1_get_Count_mA4407BF11853ADCE80E5510309BD4DD992B230C5_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig> UnityEngine.Networking.HostTopology::get_SpecialConnectionConfigs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBEE447C5DCA2C53BE427F5C2A320C9E183805319* HostTopology_get_SpecialConnectionConfigs_mD7BAC8EA0F2050C2C3B3D46E32512107F6C93AE5 (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* __this, const RuntimeMethod* method) 
{
	List_1_tBEE447C5DCA2C53BE427F5C2A320C9E183805319* V_0 = NULL;
	{
		List_1_tBEE447C5DCA2C53BE427F5C2A320C9E183805319* L_0 = __this->___m_SpecialConnections_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		List_1_tBEE447C5DCA2C53BE427F5C2A320C9E183805319* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::GetSpecialConnectionConfig(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* HostTopology_GetSpecialConnectionConfig_m7A3FC66410FFC912B43B159182339B67280C3523 (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA4407BF11853ADCE80E5510309BD4DD992B230C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m57B9E895CBF5D76E3FCFCA08C1549AB3C900758A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___i0;
		List_1_tBEE447C5DCA2C53BE427F5C2A320C9E183805319* L_1 = __this->___m_SpecialConnections_2;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mA4407BF11853ADCE80E5510309BD4DD992B230C5_inline(L_1, List_1_get_Count_mA4407BF11853ADCE80E5510309BD4DD992B230C5_RuntimeMethod_var);
		if ((((int32_t)L_0) > ((int32_t)L_2)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = ___i0;
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8A4CACA68D0889BCC0B193D3EB8B384C328208A3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HostTopology_GetSpecialConnectionConfig_m7A3FC66410FFC912B43B159182339B67280C3523_RuntimeMethod_var)));
	}

IL_0025:
	{
		List_1_tBEE447C5DCA2C53BE427F5C2A320C9E183805319* L_6 = __this->___m_SpecialConnections_2;
		int32_t L_7 = ___i0;
		NullCheck(L_6);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_8;
		L_8 = List_1_get_Item_m57B9E895CBF5D76E3FCFCA08C1549AB3C900758A(L_6, ((int32_t)il2cpp_codegen_subtract(L_7, 1)), List_1_get_Item_m57B9E895CBF5D76E3FCFCA08C1549AB3C900758A_RuntimeMethod_var);
		V_1 = L_8;
		goto IL_0036;
	}

IL_0036:
	{
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_9 = V_1;
		return L_9;
	}
}
// System.UInt16 UnityEngine.Networking.HostTopology::get_ReceivedMessagePoolSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t HostTopology_get_ReceivedMessagePoolSize_mCCA508BDE4B0B898A4E53BA0C2B28C356925E61A (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* __this, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->___m_ReceivedMessagePoolSize_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt16 UnityEngine.Networking.HostTopology::get_SentMessagePoolSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t HostTopology_get_SentMessagePoolSize_m0668100CA27D8989635F9DED2149111BB765DE06 (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* __this, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->___m_SentMessagePoolSize_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Single UnityEngine.Networking.HostTopology::get_MessagePoolSizeGrowthFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HostTopology_get_MessagePoolSizeGrowthFactor_m52F438EBC915905859F22D1DFCF64ACAB30A541E (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_MessagePoolSizeGrowthFactor_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
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
// Conversion methods for marshalling of: UnityEngine.Networking.ConnectionConfigInternal
IL2CPP_EXTERN_C void ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21_marshal_pinvoke(const ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21& unmarshaled, ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
IL2CPP_EXTERN_C void ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21_marshal_pinvoke_back(const ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21_marshaled_pinvoke& marshaled, ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.ConnectionConfigInternal
IL2CPP_EXTERN_C void ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21_marshal_pinvoke_cleanup(ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.ConnectionConfigInternal
IL2CPP_EXTERN_C void ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21_marshal_com(const ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21& unmarshaled, ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
IL2CPP_EXTERN_C void ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21_marshal_com_back(const ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21_marshaled_com& marshaled, ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.ConnectionConfigInternal
IL2CPP_EXTERN_C void ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21_marshal_com_cleanup(ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::.ctor(UnityEngine.Networking.ConnectionConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal__ctor_m120A581ACAAD31F073CB6DAE7D32FE84CAC4B614 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* ___config0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t2F3F43301A2C4258285E66980237B7AE65F4CD7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	uint8_t V_11 = 0x0;
	bool V_12 = false;
	uint8_t V_13 = 0x0;
	RuntimeObject* V_14 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_15 = NULL;
	bool V_16 = false;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_0 = ___config0;
		V_0 = (bool)((((RuntimeObject*)(ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_2 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral317EE74AF038EFA1EFB835A1A142AD358C5939C3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConnectionConfigInternal__ctor_m120A581ACAAD31F073CB6DAE7D32FE84CAC4B614_RuntimeMethod_var)));
	}

IL_001b:
	{
		intptr_t L_3;
		L_3 = ConnectionConfigInternal_InternalCreate_m44C14AC9346C01AA4EAA02F47D9F1508F256A83D(NULL);
		__this->___m_Ptr_0 = L_3;
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_4 = ___config0;
		NullCheck(L_4);
		uint16_t L_5;
		L_5 = ConnectionConfig_get_PacketSize_m3E5665AD5A5449791593872901FD6A4DECAFABB1(L_4, NULL);
		bool L_6;
		L_6 = ConnectionConfigInternal_SetPacketSize_mD5756AE0C8B3DECC9977B5315C9FBEC8441FB7E0(__this, L_5, NULL);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_8 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6BD2C10566F502C3C2BF829339E1CCBA316C993F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConnectionConfigInternal__ctor_m120A581ACAAD31F073CB6DAE7D32FE84CAC4B614_RuntimeMethod_var)));
	}

IL_0044:
	{
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_9 = ___config0;
		NullCheck(L_9);
		uint16_t L_10;
		L_10 = ConnectionConfig_get_FragmentSize_m45EC36906EEC9252E36A32307BC314F0942E8047(L_9, NULL);
		ConnectionConfigInternal_set_FragmentSize_m46D5EE2E3720543FB45CB7862951D0498F8F4939(__this, L_10, NULL);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_11 = ___config0;
		NullCheck(L_11);
		uint32_t L_12;
		L_12 = ConnectionConfig_get_ResendTimeout_m1B9838FDDDC0834953C031A98E4650CD977BAE64(L_11, NULL);
		ConnectionConfigInternal_set_ResendTimeout_mDBB6A3E87C69014104A911F978BDCED0D6F7D590(__this, L_12, NULL);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_13 = ___config0;
		NullCheck(L_13);
		uint32_t L_14;
		L_14 = ConnectionConfig_get_DisconnectTimeout_mCF53AF6904303F43AD78A090B1A9CA2C3303698D(L_13, NULL);
		ConnectionConfigInternal_set_DisconnectTimeout_mFD0CDEF2F2645A3E324FA5BC40C40CFBB633F43E(__this, L_14, NULL);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_15 = ___config0;
		NullCheck(L_15);
		uint32_t L_16;
		L_16 = ConnectionConfig_get_ConnectTimeout_m1123D7612CEB51EDDAB509CA8AAD20A6210C19E3(L_15, NULL);
		ConnectionConfigInternal_set_ConnectTimeout_m0896F88749093E776B5ECCB407732A386FDF104D(__this, L_16, NULL);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_17 = ___config0;
		NullCheck(L_17);
		uint32_t L_18;
		L_18 = ConnectionConfig_get_MinUpdateTimeout_m8F0E078E261D6A4CC9F333F1684998A0F870DA18(L_17, NULL);
		ConnectionConfigInternal_set_MinUpdateTimeout_m05FCA90D5B2394C3ED953B03CF57848A42D8F64D(__this, L_18, NULL);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_19 = ___config0;
		NullCheck(L_19);
		uint32_t L_20;
		L_20 = ConnectionConfig_get_PingTimeout_m3AF224715FBA5A09F4594E65172AE584662FAB6E(L_19, NULL);
		ConnectionConfigInternal_set_PingTimeout_m7B12C20177A0847E367C21BCF4AA433E1505E80B(__this, L_20, NULL);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_21 = ___config0;
		NullCheck(L_21);
		uint32_t L_22;
		L_22 = ConnectionConfig_get_ReducedPingTimeout_m696E86B1B2F9CB80E993F24D28FF9598FA81621E(L_21, NULL);
		ConnectionConfigInternal_set_ReducedPingTimeout_mD7ADC9073918F09B2683B821BBA9474525059B89(__this, L_22, NULL);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_23 = ___config0;
		NullCheck(L_23);
		uint32_t L_24;
		L_24 = ConnectionConfig_get_AllCostTimeout_m75E31AF31E3E61446AC48A70C6B0C870531B9038(L_23, NULL);
		ConnectionConfigInternal_set_AllCostTimeout_m8248AA8E131A4305DCC9327700F208F7D28AC5FA(__this, L_24, NULL);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_25 = ___config0;
		NullCheck(L_25);
		uint8_t L_26;
		L_26 = ConnectionConfig_get_NetworkDropThreshold_mDEDA7A8C23C29BC1B52FC2A7EF3B3282C84E4EFA(L_25, NULL);
		ConnectionConfigInternal_set_NetworkDropThreshold_m9FAD641C84D235167500A2AA62764BF6E6BCA80F(__this, L_26, NULL);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_27 = ___config0;
		NullCheck(L_27);
		uint8_t L_28;
		L_28 = ConnectionConfig_get_OverflowDropThreshold_mDEE3B17D3810562D9D6BD46A4511F73C350DB51C(L_27, NULL);
		ConnectionConfigInternal_set_OverflowDropThreshold_m683C77D2345F3AE9AD53FC6B8088DE3F7161D730(__this, L_28, NULL);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_29 = ___config0;
		NullCheck(L_29);
		uint8_t L_30;
		L_30 = ConnectionConfig_get_MaxConnectionAttempt_m64C3E9BAF3200CB3FD8A82AB8B8CDFF25CC3125F(L_29, NULL);
		ConnectionConfigInternal_set_MaxConnectionAttempt_m47BA68B2C09640D855DE2C3B739595C470597F70(__this, L_30, NULL);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_31 = ___config0;
		NullCheck(L_31);
		uint32_t L_32;
		L_32 = ConnectionConfig_get_AckDelay_mB9A2977F558C4803F59CD7FF84D97094AB3B16C8(L_31, NULL);
		ConnectionConfigInternal_set_AckDelay_m4B424659A3A494F6C8003AB466544802691BFB31(__this, L_32, NULL);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_33 = ___config0;
		NullCheck(L_33);
		uint32_t L_34;
		L_34 = ConnectionConfig_get_SendDelay_mF8ECFD82771106940F3680DAF211540B259595E7(L_33, NULL);
		ConnectionConfigInternal_set_SendDelay_m00085383E441175E357BF781802A64A0118F8783(__this, L_34, NULL);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_35 = ___config0;
		NullCheck(L_35);
		uint16_t L_36;
		L_36 = ConnectionConfig_get_MaxCombinedReliableMessageSize_m7F38DCB83C42DDF8B99F5952A9C33A4CCB901D43(L_35, NULL);
		ConnectionConfigInternal_set_MaxCombinedReliableMessageSize_m2A76B2131216A5065302E9736DC63C55AADDB9D4(__this, L_36, NULL);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_37 = ___config0;
		NullCheck(L_37);
		uint16_t L_38;
		L_38 = ConnectionConfig_get_MaxCombinedReliableMessageCount_m876678182499559E8C328DC5245138184DE70FB5(L_37, NULL);
		ConnectionConfigInternal_set_MaxCombinedReliableMessageCount_mDAFE5361D2EF68C11DD40421289C4A7770686238(__this, L_38, NULL);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_39 = ___config0;
		NullCheck(L_39);
		uint16_t L_40;
		L_40 = ConnectionConfig_get_MaxSentMessageQueueSize_m2303DF7AA39DF65F6AC8E3E09712D569FC142496(L_39, NULL);
		ConnectionConfigInternal_set_MaxSentMessageQueueSize_m96A20AA22BF2082EBDF6D4CF630ECB0474282B8C(__this, L_40, NULL);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_41 = ___config0;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = ConnectionConfig_get_AcksType_mA7D805EB6E25D753BC6B90207E42275DDFE2457A(L_41, NULL);
		ConnectionConfigInternal_set_AcksType_mD083D792946F8057F115E0A70BEE91539442222A(__this, (uint8_t)((int32_t)(uint8_t)L_42), NULL);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_43 = ___config0;
		NullCheck(L_43);
		bool L_44;
		L_44 = ConnectionConfig_get_UsePlatformSpecificProtocols_m26AB5587FC7948E4146420A28B9ACE4DB838BBEF(L_43, NULL);
		ConnectionConfigInternal_set_UsePlatformSpecificProtocols_mDEED7ADB58D0F61AAD69B72109EF119A29EAEDB4(__this, L_44, NULL);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_45 = ___config0;
		NullCheck(L_45);
		uint32_t L_46;
		L_46 = ConnectionConfig_get_InitialBandwidth_m6F1ED856FD5AF1D1ED9D5CB5D702F83A6B6E0450(L_45, NULL);
		ConnectionConfigInternal_set_InitialBandwidth_m40FC19F3A7DE65B5B396249A3B1C78E1690BB81C(__this, L_46, NULL);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_47 = ___config0;
		NullCheck(L_47);
		float L_48;
		L_48 = ConnectionConfig_get_BandwidthPeakFactor_mDCBC6D81636835A41FA646D11A7D54002CB6F66B(L_47, NULL);
		ConnectionConfigInternal_set_BandwidthPeakFactor_m26B5068707137BA7812159FA4D70C6524CEC250F(__this, L_48, NULL);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_49 = ___config0;
		NullCheck(L_49);
		uint16_t L_50;
		L_50 = ConnectionConfig_get_WebSocketReceiveBufferMaxSize_m80CAB726F8DAD340BBF0A5E5AFEC937F2BBC7413(L_49, NULL);
		ConnectionConfigInternal_set_WebSocketReceiveBufferMaxSize_m2FF1661331B1E85E25E915AE5543AE13C982C5B9(__this, L_50, NULL);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_51 = ___config0;
		NullCheck(L_51);
		uint32_t L_52;
		L_52 = ConnectionConfig_get_UdpSocketReceiveBufferMaxSize_mD17BEEF8D82F058E351A61388A54EB152EF4D030(L_51, NULL);
		ConnectionConfigInternal_set_UdpSocketReceiveBufferMaxSize_mF67362C4A4F4C7493257C35D0D2F6323BDECE318(__this, L_52, NULL);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_53 = ___config0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = ConnectionConfig_get_SSLCertFilePath_m2EE0429E02FF2AEA616F0F8A50213E0A194840BA(L_53, NULL);
		V_2 = (bool)((!(((RuntimeObject*)(String_t*)L_54) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_55 = V_2;
		if (!L_55)
		{
			goto IL_01a0;
		}
	}
	{
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_56 = ___config0;
		NullCheck(L_56);
		String_t* L_57;
		L_57 = ConnectionConfig_get_SSLCertFilePath_m2EE0429E02FF2AEA616F0F8A50213E0A194840BA(L_56, NULL);
		int32_t L_58;
		L_58 = ConnectionConfigInternal_SetSSLCertFilePath_m4A61E55DADAFC37233593BE5EAB420FC2338F9B3(__this, L_57, NULL);
		V_3 = L_58;
		int32_t L_59 = V_3;
		V_4 = (bool)((!(((uint32_t)L_59) <= ((uint32_t)0)))? 1 : 0);
		bool L_60 = V_4;
		if (!L_60)
		{
			goto IL_019f;
		}
	}
	{
		String_t* L_61;
		L_61 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		String_t* L_62;
		L_62 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral56FC7ACF83761F215C42F94457870B28C159AD13)), L_61, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_63 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_63);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_63, L_62, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_63, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConnectionConfigInternal__ctor_m120A581ACAAD31F073CB6DAE7D32FE84CAC4B614_RuntimeMethod_var)));
	}

IL_019f:
	{
	}

IL_01a0:
	{
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_64 = ___config0;
		NullCheck(L_64);
		String_t* L_65;
		L_65 = ConnectionConfig_get_SSLPrivateKeyFilePath_m7BB97A3F2B0120FFEAB814D5751755FE808BEB42(L_64, NULL);
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (!L_66)
		{
			goto IL_01e1;
		}
	}
	{
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_67 = ___config0;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = ConnectionConfig_get_SSLPrivateKeyFilePath_m7BB97A3F2B0120FFEAB814D5751755FE808BEB42(L_67, NULL);
		int32_t L_69;
		L_69 = ConnectionConfigInternal_SetSSLPrivateKeyFilePath_mDBF01205AF64411A245559B4DED723A4DF8AA1ED(__this, L_68, NULL);
		V_6 = L_69;
		int32_t L_70 = V_6;
		V_7 = (bool)((!(((uint32_t)L_70) <= ((uint32_t)0)))? 1 : 0);
		bool L_71 = V_7;
		if (!L_71)
		{
			goto IL_01e0;
		}
	}
	{
		String_t* L_72;
		L_72 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_6), NULL);
		String_t* L_73;
		L_73 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7BD2BAAE773711A25E2A86E4644B6FA5287BE9CB)), L_72, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_74 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_74);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_74, L_73, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_74, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConnectionConfigInternal__ctor_m120A581ACAAD31F073CB6DAE7D32FE84CAC4B614_RuntimeMethod_var)));
	}

IL_01e0:
	{
	}

IL_01e1:
	{
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_75 = ___config0;
		NullCheck(L_75);
		String_t* L_76;
		L_76 = ConnectionConfig_get_SSLCAFilePath_m082FAA99BAD72B785D61F2DE5888A5BAEFB4533E(L_75, NULL);
		V_8 = (bool)((!(((RuntimeObject*)(String_t*)L_76) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_77 = V_8;
		if (!L_77)
		{
			goto IL_0222;
		}
	}
	{
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_78 = ___config0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = ConnectionConfig_get_SSLCAFilePath_m082FAA99BAD72B785D61F2DE5888A5BAEFB4533E(L_78, NULL);
		int32_t L_80;
		L_80 = ConnectionConfigInternal_SetSSLCAFilePath_mD13872C691CF91C6E98CA636C780BFD289093E23(__this, L_79, NULL);
		V_9 = L_80;
		int32_t L_81 = V_9;
		V_10 = (bool)((!(((uint32_t)L_81) <= ((uint32_t)0)))? 1 : 0);
		bool L_82 = V_10;
		if (!L_82)
		{
			goto IL_0221;
		}
	}
	{
		String_t* L_83;
		L_83 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_9), NULL);
		String_t* L_84;
		L_84 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3866C00AAA41CBA51BF961FDAB79035290665796)), L_83, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_85 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_85);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_85, L_84, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_85, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConnectionConfigInternal__ctor_m120A581ACAAD31F073CB6DAE7D32FE84CAC4B614_RuntimeMethod_var)));
	}

IL_0221:
	{
	}

IL_0222:
	{
		V_11 = (uint8_t)0;
		goto IL_0240;
	}

IL_0227:
	{
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_86 = ___config0;
		uint8_t L_87 = V_11;
		NullCheck(L_86);
		int32_t L_88;
		L_88 = ConnectionConfig_GetChannel_mF8A40F89C7B2FAA1A19A6AAE764747AAA5CBF7D8(L_86, L_87, NULL);
		uint8_t L_89;
		L_89 = ConnectionConfigInternal_AddChannel_m64DA7523A11F434FA79C52C39FF94ACF8EBC5897(__this, ((int32_t)(uint8_t)L_88), NULL);
		uint8_t L_90 = V_11;
		V_11 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_90, 1)));
	}

IL_0240:
	{
		uint8_t L_91 = V_11;
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_92 = ___config0;
		NullCheck(L_92);
		int32_t L_93;
		L_93 = ConnectionConfig_get_ChannelCount_m80233F3A7DB27A25CA36484350D951BA86EC1506(L_92, NULL);
		V_12 = (bool)((((int32_t)L_91) < ((int32_t)L_93))? 1 : 0);
		bool L_94 = V_12;
		if (L_94)
		{
			goto IL_0227;
		}
	}
	{
		V_13 = (uint8_t)0;
		goto IL_028a;
	}

IL_0255:
	{
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_95 = ___config0;
		uint8_t L_96 = V_13;
		NullCheck(L_95);
		RuntimeObject* L_97;
		L_97 = ConnectionConfig_GetSharedOrderChannels_mBE34CB1332CC01B01526A2B41C7B7CF89F584FD7(L_95, L_96, NULL);
		V_14 = L_97;
		RuntimeObject* L_98 = V_14;
		NullCheck(L_98);
		int32_t L_99;
		L_99 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Byte>::get_Count() */, ICollection_1_t2F3F43301A2C4258285E66980237B7AE65F4CD7C_il2cpp_TypeInfo_var, L_98);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_100 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_99);
		V_15 = L_100;
		RuntimeObject* L_101 = V_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_102 = V_15;
		NullCheck(L_101);
		InterfaceActionInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Byte>::CopyTo(T[],System.Int32) */, ICollection_1_t2F3F43301A2C4258285E66980237B7AE65F4CD7C_il2cpp_TypeInfo_var, L_101, L_102, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_103 = V_15;
		bool L_104;
		L_104 = ConnectionConfigInternal_MakeChannelsSharedOrder_m9D049C38D2450790463845EACBEB2CC65E6FCF33(__this, L_103, NULL);
		uint8_t L_105 = V_13;
		V_13 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_105, 1)));
	}

IL_028a:
	{
		uint8_t L_106 = V_13;
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_107 = ___config0;
		NullCheck(L_107);
		int32_t L_108;
		L_108 = ConnectionConfig_get_SharedOrderChannelCount_m825DA0CE6DA174020BB7EDDA8755FD702FAC4BCB(L_107, NULL);
		V_16 = (bool)((((int32_t)L_106) < ((int32_t)L_108))? 1 : 0);
		bool L_109 = V_16;
		if (L_109)
		{
			goto IL_0255;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_Dispose_m5EF15CABE363D16DC32A3816BC22DCCF32A441D3 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->___m_Ptr_0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_4 = __this->___m_Ptr_0;
		ConnectionConfigInternal_InternalDestroy_m0994D18CCD7981B361D3F62C6AB54E36567E4E08(L_4, NULL);
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___m_Ptr_0 = L_5;
	}

IL_002e:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_Finalize_m036C73181066928B3BE226AA473BFAE92861DCD1 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			VirtualActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Networking.ConnectionConfigInternal::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_Dispose_m3CEAC1C82837ECB8E699E93D2090E95111447904 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->___m_Ptr_0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_4 = __this->___m_Ptr_0;
		ConnectionConfigInternal_InternalDestroy_m0994D18CCD7981B361D3F62C6AB54E36567E4E08(L_4, NULL);
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___m_Ptr_0 = L_5;
	}

IL_002e:
	{
		return;
	}
}
// System.IntPtr UnityEngine.Networking.ConnectionConfigInternal::InternalCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ConnectionConfigInternal_InternalCreate_m44C14AC9346C01AA4EAA02F47D9F1508F256A83D (const RuntimeMethod* method) 
{
	typedef intptr_t (*ConnectionConfigInternal_InternalCreate_m44C14AC9346C01AA4EAA02F47D9F1508F256A83D_ftn) ();
	static ConnectionConfigInternal_InternalCreate_m44C14AC9346C01AA4EAA02F47D9F1508F256A83D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InternalCreate_m44C14AC9346C01AA4EAA02F47D9F1508F256A83D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InternalCreate()");
	intptr_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InternalDestroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InternalDestroy_m0994D18CCD7981B361D3F62C6AB54E36567E4E08 (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef void (*ConnectionConfigInternal_InternalDestroy_m0994D18CCD7981B361D3F62C6AB54E36567E4E08_ftn) (intptr_t);
	static ConnectionConfigInternal_InternalDestroy_m0994D18CCD7981B361D3F62C6AB54E36567E4E08_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InternalDestroy_m0994D18CCD7981B361D3F62C6AB54E36567E4E08_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InternalDestroy(System.IntPtr)");
	_il2cpp_icall_func(___ptr0);
}
// System.Byte UnityEngine.Networking.ConnectionConfigInternal::AddChannel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ConnectionConfigInternal_AddChannel_m64DA7523A11F434FA79C52C39FF94ACF8EBC5897 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	typedef uint8_t (*ConnectionConfigInternal_AddChannel_m64DA7523A11F434FA79C52C39FF94ACF8EBC5897_ftn) (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21*, int32_t);
	static ConnectionConfigInternal_AddChannel_m64DA7523A11F434FA79C52C39FF94ACF8EBC5897_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_AddChannel_m64DA7523A11F434FA79C52C39FF94ACF8EBC5897_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::AddChannel(System.Int32)");
	uint8_t icallRetVal = _il2cpp_icall_func(__this, ___value0);
	return icallRetVal;
}
// System.Boolean UnityEngine.Networking.ConnectionConfigInternal::SetPacketSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionConfigInternal_SetPacketSize_mD5756AE0C8B3DECC9977B5315C9FBEC8441FB7E0 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint16_t ___value0, const RuntimeMethod* method) 
{
	typedef bool (*ConnectionConfigInternal_SetPacketSize_mD5756AE0C8B3DECC9977B5315C9FBEC8441FB7E0_ftn) (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21*, uint16_t);
	static ConnectionConfigInternal_SetPacketSize_mD5756AE0C8B3DECC9977B5315C9FBEC8441FB7E0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_SetPacketSize_mD5756AE0C8B3DECC9977B5315C9FBEC8441FB7E0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::SetPacketSize(System.UInt16)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___value0);
	return icallRetVal;
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_FragmentSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_FragmentSize_m46D5EE2E3720543FB45CB7862951D0498F8F4939 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint16_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*ConnectionConfigInternal_set_FragmentSize_m46D5EE2E3720543FB45CB7862951D0498F8F4939_ftn) (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21*, uint16_t);
	static ConnectionConfigInternal_set_FragmentSize_m46D5EE2E3720543FB45CB7862951D0498F8F4939_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_FragmentSize_m46D5EE2E3720543FB45CB7862951D0498F8F4939_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_FragmentSize(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_ResendTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_ResendTimeout_mDBB6A3E87C69014104A911F978BDCED0D6F7D590 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*ConnectionConfigInternal_set_ResendTimeout_mDBB6A3E87C69014104A911F978BDCED0D6F7D590_ftn) (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21*, uint32_t);
	static ConnectionConfigInternal_set_ResendTimeout_mDBB6A3E87C69014104A911F978BDCED0D6F7D590_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_ResendTimeout_mDBB6A3E87C69014104A911F978BDCED0D6F7D590_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_ResendTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_DisconnectTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_DisconnectTimeout_mFD0CDEF2F2645A3E324FA5BC40C40CFBB633F43E (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*ConnectionConfigInternal_set_DisconnectTimeout_mFD0CDEF2F2645A3E324FA5BC40C40CFBB633F43E_ftn) (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21*, uint32_t);
	static ConnectionConfigInternal_set_DisconnectTimeout_mFD0CDEF2F2645A3E324FA5BC40C40CFBB633F43E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_DisconnectTimeout_mFD0CDEF2F2645A3E324FA5BC40C40CFBB633F43E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_DisconnectTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_ConnectTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_ConnectTimeout_m0896F88749093E776B5ECCB407732A386FDF104D (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*ConnectionConfigInternal_set_ConnectTimeout_m0896F88749093E776B5ECCB407732A386FDF104D_ftn) (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21*, uint32_t);
	static ConnectionConfigInternal_set_ConnectTimeout_m0896F88749093E776B5ECCB407732A386FDF104D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_ConnectTimeout_m0896F88749093E776B5ECCB407732A386FDF104D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_ConnectTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_MinUpdateTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_MinUpdateTimeout_m05FCA90D5B2394C3ED953B03CF57848A42D8F64D (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*ConnectionConfigInternal_set_MinUpdateTimeout_m05FCA90D5B2394C3ED953B03CF57848A42D8F64D_ftn) (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21*, uint32_t);
	static ConnectionConfigInternal_set_MinUpdateTimeout_m05FCA90D5B2394C3ED953B03CF57848A42D8F64D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_MinUpdateTimeout_m05FCA90D5B2394C3ED953B03CF57848A42D8F64D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_MinUpdateTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_PingTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_PingTimeout_m7B12C20177A0847E367C21BCF4AA433E1505E80B (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*ConnectionConfigInternal_set_PingTimeout_m7B12C20177A0847E367C21BCF4AA433E1505E80B_ftn) (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21*, uint32_t);
	static ConnectionConfigInternal_set_PingTimeout_m7B12C20177A0847E367C21BCF4AA433E1505E80B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_PingTimeout_m7B12C20177A0847E367C21BCF4AA433E1505E80B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_PingTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_ReducedPingTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_ReducedPingTimeout_mD7ADC9073918F09B2683B821BBA9474525059B89 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*ConnectionConfigInternal_set_ReducedPingTimeout_mD7ADC9073918F09B2683B821BBA9474525059B89_ftn) (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21*, uint32_t);
	static ConnectionConfigInternal_set_ReducedPingTimeout_mD7ADC9073918F09B2683B821BBA9474525059B89_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_ReducedPingTimeout_mD7ADC9073918F09B2683B821BBA9474525059B89_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_ReducedPingTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_AllCostTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_AllCostTimeout_m8248AA8E131A4305DCC9327700F208F7D28AC5FA (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*ConnectionConfigInternal_set_AllCostTimeout_m8248AA8E131A4305DCC9327700F208F7D28AC5FA_ftn) (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21*, uint32_t);
	static ConnectionConfigInternal_set_AllCostTimeout_m8248AA8E131A4305DCC9327700F208F7D28AC5FA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_AllCostTimeout_m8248AA8E131A4305DCC9327700F208F7D28AC5FA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_AllCostTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_NetworkDropThreshold(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_NetworkDropThreshold_m9FAD641C84D235167500A2AA62764BF6E6BCA80F (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*ConnectionConfigInternal_set_NetworkDropThreshold_m9FAD641C84D235167500A2AA62764BF6E6BCA80F_ftn) (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21*, uint8_t);
	static ConnectionConfigInternal_set_NetworkDropThreshold_m9FAD641C84D235167500A2AA62764BF6E6BCA80F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_NetworkDropThreshold_m9FAD641C84D235167500A2AA62764BF6E6BCA80F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_NetworkDropThreshold(System.Byte)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_OverflowDropThreshold(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_OverflowDropThreshold_m683C77D2345F3AE9AD53FC6B8088DE3F7161D730 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*ConnectionConfigInternal_set_OverflowDropThreshold_m683C77D2345F3AE9AD53FC6B8088DE3F7161D730_ftn) (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21*, uint8_t);
	static ConnectionConfigInternal_set_OverflowDropThreshold_m683C77D2345F3AE9AD53FC6B8088DE3F7161D730_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_OverflowDropThreshold_m683C77D2345F3AE9AD53FC6B8088DE3F7161D730_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_OverflowDropThreshold(System.Byte)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_MaxConnectionAttempt(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_MaxConnectionAttempt_m47BA68B2C09640D855DE2C3B739595C470597F70 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*ConnectionConfigInternal_set_MaxConnectionAttempt_m47BA68B2C09640D855DE2C3B739595C470597F70_ftn) (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21*, uint8_t);
	static ConnectionConfigInternal_set_MaxConnectionAttempt_m47BA68B2C09640D855DE2C3B739595C470597F70_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_MaxConnectionAttempt_m47BA68B2C09640D855DE2C3B739595C470597F70_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_MaxConnectionAttempt(System.Byte)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_AckDelay(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_AckDelay_m4B424659A3A494F6C8003AB466544802691BFB31 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*ConnectionConfigInternal_set_AckDelay_m4B424659A3A494F6C8003AB466544802691BFB31_ftn) (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21*, uint32_t);
	static ConnectionConfigInternal_set_AckDelay_m4B424659A3A494F6C8003AB466544802691BFB31_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_AckDelay_m4B424659A3A494F6C8003AB466544802691BFB31_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_AckDelay(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_SendDelay(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_SendDelay_m00085383E441175E357BF781802A64A0118F8783 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*ConnectionConfigInternal_set_SendDelay_m00085383E441175E357BF781802A64A0118F8783_ftn) (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21*, uint32_t);
	static ConnectionConfigInternal_set_SendDelay_m00085383E441175E357BF781802A64A0118F8783_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_SendDelay_m00085383E441175E357BF781802A64A0118F8783_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_SendDelay(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_MaxCombinedReliableMessageSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_MaxCombinedReliableMessageSize_m2A76B2131216A5065302E9736DC63C55AADDB9D4 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint16_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*ConnectionConfigInternal_set_MaxCombinedReliableMessageSize_m2A76B2131216A5065302E9736DC63C55AADDB9D4_ftn) (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21*, uint16_t);
	static ConnectionConfigInternal_set_MaxCombinedReliableMessageSize_m2A76B2131216A5065302E9736DC63C55AADDB9D4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_MaxCombinedReliableMessageSize_m2A76B2131216A5065302E9736DC63C55AADDB9D4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_MaxCombinedReliableMessageSize(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_MaxCombinedReliableMessageCount(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_MaxCombinedReliableMessageCount_mDAFE5361D2EF68C11DD40421289C4A7770686238 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint16_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*ConnectionConfigInternal_set_MaxCombinedReliableMessageCount_mDAFE5361D2EF68C11DD40421289C4A7770686238_ftn) (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21*, uint16_t);
	static ConnectionConfigInternal_set_MaxCombinedReliableMessageCount_mDAFE5361D2EF68C11DD40421289C4A7770686238_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_MaxCombinedReliableMessageCount_mDAFE5361D2EF68C11DD40421289C4A7770686238_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_MaxCombinedReliableMessageCount(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_MaxSentMessageQueueSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_MaxSentMessageQueueSize_m96A20AA22BF2082EBDF6D4CF630ECB0474282B8C (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint16_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*ConnectionConfigInternal_set_MaxSentMessageQueueSize_m96A20AA22BF2082EBDF6D4CF630ECB0474282B8C_ftn) (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21*, uint16_t);
	static ConnectionConfigInternal_set_MaxSentMessageQueueSize_m96A20AA22BF2082EBDF6D4CF630ECB0474282B8C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_MaxSentMessageQueueSize_m96A20AA22BF2082EBDF6D4CF630ECB0474282B8C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_MaxSentMessageQueueSize(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_AcksType(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_AcksType_mD083D792946F8057F115E0A70BEE91539442222A (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*ConnectionConfigInternal_set_AcksType_mD083D792946F8057F115E0A70BEE91539442222A_ftn) (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21*, uint8_t);
	static ConnectionConfigInternal_set_AcksType_mD083D792946F8057F115E0A70BEE91539442222A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_AcksType_mD083D792946F8057F115E0A70BEE91539442222A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_AcksType(System.Byte)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_UsePlatformSpecificProtocols(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_UsePlatformSpecificProtocols_mDEED7ADB58D0F61AAD69B72109EF119A29EAEDB4 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, bool ___value0, const RuntimeMethod* method) 
{
	typedef void (*ConnectionConfigInternal_set_UsePlatformSpecificProtocols_mDEED7ADB58D0F61AAD69B72109EF119A29EAEDB4_ftn) (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21*, bool);
	static ConnectionConfigInternal_set_UsePlatformSpecificProtocols_mDEED7ADB58D0F61AAD69B72109EF119A29EAEDB4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_UsePlatformSpecificProtocols_mDEED7ADB58D0F61AAD69B72109EF119A29EAEDB4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_UsePlatformSpecificProtocols(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_InitialBandwidth(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_InitialBandwidth_m40FC19F3A7DE65B5B396249A3B1C78E1690BB81C (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*ConnectionConfigInternal_set_InitialBandwidth_m40FC19F3A7DE65B5B396249A3B1C78E1690BB81C_ftn) (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21*, uint32_t);
	static ConnectionConfigInternal_set_InitialBandwidth_m40FC19F3A7DE65B5B396249A3B1C78E1690BB81C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_InitialBandwidth_m40FC19F3A7DE65B5B396249A3B1C78E1690BB81C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_InitialBandwidth(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_BandwidthPeakFactor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_BandwidthPeakFactor_m26B5068707137BA7812159FA4D70C6524CEC250F (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, float ___value0, const RuntimeMethod* method) 
{
	typedef void (*ConnectionConfigInternal_set_BandwidthPeakFactor_m26B5068707137BA7812159FA4D70C6524CEC250F_ftn) (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21*, float);
	static ConnectionConfigInternal_set_BandwidthPeakFactor_m26B5068707137BA7812159FA4D70C6524CEC250F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_BandwidthPeakFactor_m26B5068707137BA7812159FA4D70C6524CEC250F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_BandwidthPeakFactor(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_WebSocketReceiveBufferMaxSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_WebSocketReceiveBufferMaxSize_m2FF1661331B1E85E25E915AE5543AE13C982C5B9 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint16_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*ConnectionConfigInternal_set_WebSocketReceiveBufferMaxSize_m2FF1661331B1E85E25E915AE5543AE13C982C5B9_ftn) (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21*, uint16_t);
	static ConnectionConfigInternal_set_WebSocketReceiveBufferMaxSize_m2FF1661331B1E85E25E915AE5543AE13C982C5B9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_WebSocketReceiveBufferMaxSize_m2FF1661331B1E85E25E915AE5543AE13C982C5B9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_WebSocketReceiveBufferMaxSize(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::set_UdpSocketReceiveBufferMaxSize(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfigInternal_set_UdpSocketReceiveBufferMaxSize_mF67362C4A4F4C7493257C35D0D2F6323BDECE318 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*ConnectionConfigInternal_set_UdpSocketReceiveBufferMaxSize_mF67362C4A4F4C7493257C35D0D2F6323BDECE318_ftn) (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21*, uint32_t);
	static ConnectionConfigInternal_set_UdpSocketReceiveBufferMaxSize_mF67362C4A4F4C7493257C35D0D2F6323BDECE318_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_set_UdpSocketReceiveBufferMaxSize_mF67362C4A4F4C7493257C35D0D2F6323BDECE318_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::set_UdpSocketReceiveBufferMaxSize(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Int32 UnityEngine.Networking.ConnectionConfigInternal::SetSSLCertFilePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfigInternal_SetSSLCertFilePath_m4A61E55DADAFC37233593BE5EAB420FC2338F9B3 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	typedef int32_t (*ConnectionConfigInternal_SetSSLCertFilePath_m4A61E55DADAFC37233593BE5EAB420FC2338F9B3_ftn) (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21*, String_t*);
	static ConnectionConfigInternal_SetSSLCertFilePath_m4A61E55DADAFC37233593BE5EAB420FC2338F9B3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_SetSSLCertFilePath_m4A61E55DADAFC37233593BE5EAB420FC2338F9B3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::SetSSLCertFilePath(System.String)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___value0);
	return icallRetVal;
}
// System.Int32 UnityEngine.Networking.ConnectionConfigInternal::SetSSLPrivateKeyFilePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfigInternal_SetSSLPrivateKeyFilePath_mDBF01205AF64411A245559B4DED723A4DF8AA1ED (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	typedef int32_t (*ConnectionConfigInternal_SetSSLPrivateKeyFilePath_mDBF01205AF64411A245559B4DED723A4DF8AA1ED_ftn) (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21*, String_t*);
	static ConnectionConfigInternal_SetSSLPrivateKeyFilePath_mDBF01205AF64411A245559B4DED723A4DF8AA1ED_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_SetSSLPrivateKeyFilePath_mDBF01205AF64411A245559B4DED723A4DF8AA1ED_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::SetSSLPrivateKeyFilePath(System.String)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___value0);
	return icallRetVal;
}
// System.Int32 UnityEngine.Networking.ConnectionConfigInternal::SetSSLCAFilePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionConfigInternal_SetSSLCAFilePath_mD13872C691CF91C6E98CA636C780BFD289093E23 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	typedef int32_t (*ConnectionConfigInternal_SetSSLCAFilePath_mD13872C691CF91C6E98CA636C780BFD289093E23_ftn) (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21*, String_t*);
	static ConnectionConfigInternal_SetSSLCAFilePath_mD13872C691CF91C6E98CA636C780BFD289093E23_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_SetSSLCAFilePath_mD13872C691CF91C6E98CA636C780BFD289093E23_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::SetSSLCAFilePath(System.String)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___value0);
	return icallRetVal;
}
// System.Boolean UnityEngine.Networking.ConnectionConfigInternal::MakeChannelsSharedOrder(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionConfigInternal_MakeChannelsSharedOrder_m9D049C38D2450790463845EACBEB2CC65E6FCF33 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___values0, const RuntimeMethod* method) 
{
	typedef bool (*ConnectionConfigInternal_MakeChannelsSharedOrder_m9D049C38D2450790463845EACBEB2CC65E6FCF33_ftn) (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*);
	static ConnectionConfigInternal_MakeChannelsSharedOrder_m9D049C38D2450790463845EACBEB2CC65E6FCF33_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_MakeChannelsSharedOrder_m9D049C38D2450790463845EACBEB2CC65E6FCF33_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::MakeChannelsSharedOrder(System.Byte[])");
	bool icallRetVal = _il2cpp_icall_func(__this, ___values0);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.HostTopologyInternal::.ctor(UnityEngine.Networking.HostTopology)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal__ctor_m174813E8C0300EFA7DBA36B392348408F7B47844 (HostTopologyInternal_t7FC89C6D2676DBFC6E2267EC2BA7BD242C1AD171* __this, HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* ___topology0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* V_0 = NULL;
	int32_t V_1 = 0;
	ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* V_2 = NULL;
	ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* V_3 = NULL;
	bool V_4 = false;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* L_0 = ___topology0;
		NullCheck(L_0);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_1;
		L_1 = HostTopology_get_DefaultConfig_m1B7FCC0012504CAF14C7AC1C39F5A4A31409BF8A(L_0, NULL);
		ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* L_2 = (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21*)il2cpp_codegen_object_new(ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ConnectionConfigInternal__ctor_m120A581ACAAD31F073CB6DAE7D32FE84CAC4B614(L_2, L_1, NULL);
		V_0 = L_2;
		ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* L_3 = V_0;
		HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* L_4 = ___topology0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = HostTopology_get_MaxDefaultConnections_mC1576CFA7C97379B9CCC1B864BD913CAB94A4AFD(L_4, NULL);
		intptr_t L_6;
		L_6 = HostTopologyInternal_InternalCreate_mB79A636DF589C5736E909DA4C150B10333399ED8(L_3, L_5, NULL);
		__this->___m_Ptr_0 = L_6;
		V_1 = 1;
		goto IL_0047;
	}

IL_002a:
	{
		HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* L_7 = ___topology0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_9;
		L_9 = HostTopology_GetSpecialConnectionConfig_m7A3FC66410FFC912B43B159182339B67280C3523(L_7, L_8, NULL);
		V_2 = L_9;
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_10 = V_2;
		ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* L_11 = (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21*)il2cpp_codegen_object_new(ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		ConnectionConfigInternal__ctor_m120A581ACAAD31F073CB6DAE7D32FE84CAC4B614(L_11, L_10, NULL);
		V_3 = L_11;
		ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* L_12 = V_3;
		uint16_t L_13;
		L_13 = HostTopologyInternal_AddSpecialConnectionConfig_m847F2B98290E3E6336D72DF56F4AADFF5F33F16C(__this, L_12, NULL);
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0047:
	{
		int32_t L_15 = V_1;
		HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* L_16 = ___topology0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = HostTopology_get_SpecialConnectionConfigsCount_m19CA3BCAD147B57FF2465C19E517DA17DC589434(L_16, NULL);
		V_4 = (bool)((((int32_t)((((int32_t)L_15) > ((int32_t)L_17))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_4;
		if (L_18)
		{
			goto IL_002a;
		}
	}
	{
		HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* L_19 = ___topology0;
		NullCheck(L_19);
		uint16_t L_20;
		L_20 = HostTopology_get_ReceivedMessagePoolSize_mCCA508BDE4B0B898A4E53BA0C2B28C356925E61A(L_19, NULL);
		HostTopologyInternal_set_ReceivedMessagePoolSize_m2807DA47F904E8EED09B471AA075B61EF30EB9FE(__this, L_20, NULL);
		HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* L_21 = ___topology0;
		NullCheck(L_21);
		uint16_t L_22;
		L_22 = HostTopology_get_SentMessagePoolSize_m0668100CA27D8989635F9DED2149111BB765DE06(L_21, NULL);
		HostTopologyInternal_set_SentMessagePoolSize_m83B555A1A1C99AEF25A49E602A325D2FAC2C153B(__this, L_22, NULL);
		HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* L_23 = ___topology0;
		NullCheck(L_23);
		float L_24;
		L_24 = HostTopology_get_MessagePoolSizeGrowthFactor_m52F438EBC915905859F22D1DFCF64ACAB30A541E(L_23, NULL);
		HostTopologyInternal_set_MessagePoolSizeGrowthFactor_m68B9A9F4BD87FFD800D136E2D5BEA301E2F549A2(__this, L_24, NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.HostTopologyInternal::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal_Dispose_mD0B7EEBF31D09D5D7F36B7892C3C49A1AC0DA967 (HostTopologyInternal_t7FC89C6D2676DBFC6E2267EC2BA7BD242C1AD171* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->___m_Ptr_0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_4 = __this->___m_Ptr_0;
		HostTopologyInternal_InternalDestroy_m4CC4AD2ECA546D616BFE626C6471E00E0A05D802(L_4, NULL);
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___m_Ptr_0 = L_5;
	}

IL_002e:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.HostTopologyInternal::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal_Finalize_m2E23B235B4E58956CDEAA17F0EDE66B4E0E4F5BF (HostTopologyInternal_t7FC89C6D2676DBFC6E2267EC2BA7BD242C1AD171* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			VirtualActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Networking.HostTopologyInternal::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.HostTopologyInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal_Dispose_mF2E57AC1B0B5226F889BFA69B11C1DF0C80F30EC (HostTopologyInternal_t7FC89C6D2676DBFC6E2267EC2BA7BD242C1AD171* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->___m_Ptr_0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_4 = __this->___m_Ptr_0;
		HostTopologyInternal_InternalDestroy_m4CC4AD2ECA546D616BFE626C6471E00E0A05D802(L_4, NULL);
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___m_Ptr_0 = L_5;
	}

IL_002e:
	{
		return;
	}
}
// System.IntPtr UnityEngine.Networking.HostTopologyInternal::InternalCreate(UnityEngine.Networking.ConnectionConfigInternal,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t HostTopologyInternal_InternalCreate_mB79A636DF589C5736E909DA4C150B10333399ED8 (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* ___config0, int32_t ___maxDefaultConnections1, const RuntimeMethod* method) 
{
	typedef intptr_t (*HostTopologyInternal_InternalCreate_mB79A636DF589C5736E909DA4C150B10333399ED8_ftn) (ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21*, int32_t);
	static HostTopologyInternal_InternalCreate_mB79A636DF589C5736E909DA4C150B10333399ED8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HostTopologyInternal_InternalCreate_mB79A636DF589C5736E909DA4C150B10333399ED8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.HostTopologyInternal::InternalCreate(UnityEngine.Networking.ConnectionConfigInternal,System.Int32)");
	intptr_t icallRetVal = _il2cpp_icall_func(___config0, ___maxDefaultConnections1);
	return icallRetVal;
}
// System.Void UnityEngine.Networking.HostTopologyInternal::InternalDestroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal_InternalDestroy_m4CC4AD2ECA546D616BFE626C6471E00E0A05D802 (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef void (*HostTopologyInternal_InternalDestroy_m4CC4AD2ECA546D616BFE626C6471E00E0A05D802_ftn) (intptr_t);
	static HostTopologyInternal_InternalDestroy_m4CC4AD2ECA546D616BFE626C6471E00E0A05D802_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HostTopologyInternal_InternalDestroy_m4CC4AD2ECA546D616BFE626C6471E00E0A05D802_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.HostTopologyInternal::InternalDestroy(System.IntPtr)");
	_il2cpp_icall_func(___ptr0);
}
// System.UInt16 UnityEngine.Networking.HostTopologyInternal::AddSpecialConnectionConfig(UnityEngine.Networking.ConnectionConfigInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t HostTopologyInternal_AddSpecialConnectionConfig_m847F2B98290E3E6336D72DF56F4AADFF5F33F16C (HostTopologyInternal_t7FC89C6D2676DBFC6E2267EC2BA7BD242C1AD171* __this, ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21* ___config0, const RuntimeMethod* method) 
{
	typedef uint16_t (*HostTopologyInternal_AddSpecialConnectionConfig_m847F2B98290E3E6336D72DF56F4AADFF5F33F16C_ftn) (HostTopologyInternal_t7FC89C6D2676DBFC6E2267EC2BA7BD242C1AD171*, ConnectionConfigInternal_tF86D3BC2034EB121824A34FB81BC6B6803AC6A21*);
	static HostTopologyInternal_AddSpecialConnectionConfig_m847F2B98290E3E6336D72DF56F4AADFF5F33F16C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HostTopologyInternal_AddSpecialConnectionConfig_m847F2B98290E3E6336D72DF56F4AADFF5F33F16C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.HostTopologyInternal::AddSpecialConnectionConfig(UnityEngine.Networking.ConnectionConfigInternal)");
	uint16_t icallRetVal = _il2cpp_icall_func(__this, ___config0);
	return icallRetVal;
}
// System.Void UnityEngine.Networking.HostTopologyInternal::set_ReceivedMessagePoolSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal_set_ReceivedMessagePoolSize_m2807DA47F904E8EED09B471AA075B61EF30EB9FE (HostTopologyInternal_t7FC89C6D2676DBFC6E2267EC2BA7BD242C1AD171* __this, uint16_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*HostTopologyInternal_set_ReceivedMessagePoolSize_m2807DA47F904E8EED09B471AA075B61EF30EB9FE_ftn) (HostTopologyInternal_t7FC89C6D2676DBFC6E2267EC2BA7BD242C1AD171*, uint16_t);
	static HostTopologyInternal_set_ReceivedMessagePoolSize_m2807DA47F904E8EED09B471AA075B61EF30EB9FE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HostTopologyInternal_set_ReceivedMessagePoolSize_m2807DA47F904E8EED09B471AA075B61EF30EB9FE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.HostTopologyInternal::set_ReceivedMessagePoolSize(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.HostTopologyInternal::set_SentMessagePoolSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal_set_SentMessagePoolSize_m83B555A1A1C99AEF25A49E602A325D2FAC2C153B (HostTopologyInternal_t7FC89C6D2676DBFC6E2267EC2BA7BD242C1AD171* __this, uint16_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*HostTopologyInternal_set_SentMessagePoolSize_m83B555A1A1C99AEF25A49E602A325D2FAC2C153B_ftn) (HostTopologyInternal_t7FC89C6D2676DBFC6E2267EC2BA7BD242C1AD171*, uint16_t);
	static HostTopologyInternal_set_SentMessagePoolSize_m83B555A1A1C99AEF25A49E602A325D2FAC2C153B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HostTopologyInternal_set_SentMessagePoolSize_m83B555A1A1C99AEF25A49E602A325D2FAC2C153B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.HostTopologyInternal::set_SentMessagePoolSize(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.HostTopologyInternal::set_MessagePoolSizeGrowthFactor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopologyInternal_set_MessagePoolSizeGrowthFactor_m68B9A9F4BD87FFD800D136E2D5BEA301E2F549A2 (HostTopologyInternal_t7FC89C6D2676DBFC6E2267EC2BA7BD242C1AD171* __this, float ___value0, const RuntimeMethod* method) 
{
	typedef void (*HostTopologyInternal_set_MessagePoolSizeGrowthFactor_m68B9A9F4BD87FFD800D136E2D5BEA301E2F549A2_ftn) (HostTopologyInternal_t7FC89C6D2676DBFC6E2267EC2BA7BD242C1AD171*, float);
	static HostTopologyInternal_set_MessagePoolSizeGrowthFactor_m68B9A9F4BD87FFD800D136E2D5BEA301E2F549A2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HostTopologyInternal_set_MessagePoolSizeGrowthFactor_m68B9A9F4BD87FFD800D136E2D5BEA301E2F549A2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.HostTopologyInternal::set_MessagePoolSizeGrowthFactor(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
