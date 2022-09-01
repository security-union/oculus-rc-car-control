#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.UInt32 Unity.TLS.LowLevel.Binding::unitytls_client_send_data(Unity.TLS.LowLevel.Binding/unitytls_client*,System.Byte*,System.UIntPtr)
extern void Binding_unitytls_client_send_data_m5086C52FA8F5F51D6A764CDF277FFFBCBA6D1928 (void);
// 0x00000002 System.UInt32 Unity.TLS.LowLevel.Binding::unitytls_client_read_data(Unity.TLS.LowLevel.Binding/unitytls_client*,System.Byte*,System.UIntPtr,System.UIntPtr*)
extern void Binding_unitytls_client_read_data_mF232A9B9C2DB17E25ACB540144CB2C4CD3D67C2F (void);
// 0x00000003 System.Void Unity.TLS.LowLevel.Binding::unitytls_client_init_config(Unity.TLS.LowLevel.Binding/unitytls_client_config*)
extern void Binding_unitytls_client_init_config_m82074495EA2A17758484F4A7FF1C6BB2EFE198B5 (void);
// 0x00000004 Unity.TLS.LowLevel.Binding/unitytls_client* Unity.TLS.LowLevel.Binding::unitytls_client_create(System.UInt32,Unity.TLS.LowLevel.Binding/unitytls_client_config*)
extern void Binding_unitytls_client_create_mA830787311EBD55A7ACAA925541EE3A28F398026 (void);
// 0x00000005 System.Void Unity.TLS.LowLevel.Binding::unitytls_client_destroy(Unity.TLS.LowLevel.Binding/unitytls_client*)
extern void Binding_unitytls_client_destroy_m3454EE8424B3F530183F2FB04DE935EFA0D4CE0B (void);
// 0x00000006 System.Int32 Unity.TLS.LowLevel.Binding::unitytls_client_init(Unity.TLS.LowLevel.Binding/unitytls_client*)
extern void Binding_unitytls_client_init_m4A2D0AEC37B2EEAFFF7793ECE1C27B52E718C9AA (void);
// 0x00000007 System.UInt32 Unity.TLS.LowLevel.Binding::unitytls_client_handshake(Unity.TLS.LowLevel.Binding/unitytls_client*)
extern void Binding_unitytls_client_handshake_mD90B620858219D8DF2E01747ED7DEFE6CF944F46 (void);
// 0x00000008 System.UInt32 Unity.TLS.LowLevel.Binding::unitytls_client_get_handshake_state(Unity.TLS.LowLevel.Binding/unitytls_client*)
extern void Binding_unitytls_client_get_handshake_state_m5DCB8B5E8841F1BCF2CC2E52310B30CCE0EB2199 (void);
// 0x00000009 System.UInt32 Unity.TLS.LowLevel.Binding::unitytls_client_get_state(Unity.TLS.LowLevel.Binding/unitytls_client*)
extern void Binding_unitytls_client_get_state_mFA36FD1C48800D3B88D142ED9E1FFFC65F196B0F (void);
// 0x0000000A System.UInt32 Unity.TLS.LowLevel.Binding::unitytls_client_get_role(Unity.TLS.LowLevel.Binding/unitytls_client*)
extern void Binding_unitytls_client_get_role_m1F838334033B29D9251DDD0153303DEE21B6C8EB (void);
// 0x0000000B System.Void Unity.TLS.LowLevel.Binding/unitytls_client_data_send_callback::.ctor(System.Object,System.IntPtr)
extern void unitytls_client_data_send_callback__ctor_mA3190917673633997FB351384D19AC2DCB09F3D4 (void);
// 0x0000000C System.Int32 Unity.TLS.LowLevel.Binding/unitytls_client_data_send_callback::Invoke(System.IntPtr,System.Byte*,System.UIntPtr,System.UInt32)
extern void unitytls_client_data_send_callback_Invoke_m9BAC5496CD637DEBFA55F4D2BA1960C45B8AF277 (void);
// 0x0000000D System.Void Unity.TLS.LowLevel.Binding/unitytls_client_data_receive_callback::.ctor(System.Object,System.IntPtr)
extern void unitytls_client_data_receive_callback__ctor_m856BA3CAF960B07B7C62FF0A91FA3108F55FF56E (void);
// 0x0000000E System.Int32 Unity.TLS.LowLevel.Binding/unitytls_client_data_receive_callback::Invoke(System.IntPtr,System.Byte*,System.UIntPtr,System.UInt32)
extern void unitytls_client_data_receive_callback_Invoke_m569CE992486A426475D923974F91171087AAE6B8 (void);
static Il2CppMethodPointer s_methodPointers[14] = 
{
	Binding_unitytls_client_send_data_m5086C52FA8F5F51D6A764CDF277FFFBCBA6D1928,
	Binding_unitytls_client_read_data_mF232A9B9C2DB17E25ACB540144CB2C4CD3D67C2F,
	Binding_unitytls_client_init_config_m82074495EA2A17758484F4A7FF1C6BB2EFE198B5,
	Binding_unitytls_client_create_mA830787311EBD55A7ACAA925541EE3A28F398026,
	Binding_unitytls_client_destroy_m3454EE8424B3F530183F2FB04DE935EFA0D4CE0B,
	Binding_unitytls_client_init_m4A2D0AEC37B2EEAFFF7793ECE1C27B52E718C9AA,
	Binding_unitytls_client_handshake_mD90B620858219D8DF2E01747ED7DEFE6CF944F46,
	Binding_unitytls_client_get_handshake_state_m5DCB8B5E8841F1BCF2CC2E52310B30CCE0EB2199,
	Binding_unitytls_client_get_state_mFA36FD1C48800D3B88D142ED9E1FFFC65F196B0F,
	Binding_unitytls_client_get_role_m1F838334033B29D9251DDD0153303DEE21B6C8EB,
	unitytls_client_data_send_callback__ctor_mA3190917673633997FB351384D19AC2DCB09F3D4,
	unitytls_client_data_send_callback_Invoke_m9BAC5496CD637DEBFA55F4D2BA1960C45B8AF277,
	unitytls_client_data_receive_callback__ctor_m856BA3CAF960B07B7C62FF0A91FA3108F55FF56E,
	unitytls_client_data_receive_callback_Invoke_m569CE992486A426475D923974F91171087AAE6B8,
};
static const int32_t s_InvokerIndices[14] = 
{
	9399,
	8692,
	12093,
	9868,
	12093,
	11679,
	11959,
	11959,
	11959,
	11959,
	3311,
	860,
	3311,
	860,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_TLSModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_TLSModule_CodeGenModule = 
{
	"UnityEngine.TLSModule.dll",
	14,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
