#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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

// System.Action`1<WebSocketSharp.MessageEventArgs>
struct Action_1_tE2FF6C6ED3193749757706C080667C24E501D39C;
// System.Action`1<System.UInt64>
struct Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C;
// System.Action`2<WebSocketSharp.LogData,System.String>
struct Action_2_t10E7F0FC274074A13ADF02000324CF4CC268642B;
// System.Action`2<Unity.Netcode.NetworkManager/ConnectionApprovalRequest,Unity.Netcode.NetworkManager/ConnectionApprovalResponse>
struct Action_2_t5E7B4E17493B71D65B87865FA28E6CCE1C2ED68B;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>
struct Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.String,WebSocketSharp.Net.HttpHeaderInfo>
struct Dictionary_2_t4297A57BB6F4D23AA0088652355F29659843E148;
// System.Collections.Generic.Dictionary`2<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler>
struct Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD;
// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.NetworkClient>
struct Dictionary_2_t04CE97C57D2E25D600E03BF7F53BDCDDAC05C9DF;
// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.PendingClient>
struct Dictionary_2_tD7776C25E1F5D1B8408431CA83EAAFFE3C4C9684;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.UInt64>
struct Dictionary_2_tE1184E8D53864B83C43E4E0E93F8388CEE760D42;
// System.Collections.Generic.Dictionary`2<System.UInt64,Netcode.Transports.WebSocket.WebSocketPeer>
struct Dictionary_2_t25C2B1256DA6CA53630FF1ABF2AABF3208E9DA55;
// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.NetworkManager/ConnectionApprovalResponse>
struct Dictionary_2_t647F7F7CA786348F8808D433385C1B2D157E852A;
// System.EventHandler`1<WebSocketSharp.CloseEventArgs>
struct EventHandler_1_tE64C66477C8D3A58B6645C9F015B5AD78E47C08B;
// System.EventHandler`1<WebSocketSharp.ErrorEventArgs>
struct EventHandler_1_t26C98047352625FB580C2AB0368052211F6CC24E;
// System.EventHandler`1<WebSocketSharp.MessageEventArgs>
struct EventHandler_1_t83FB68A622E9BE4A5F2DE4B25A49199E64387714;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>
struct EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`2<WebSocketSharp.Net.HttpListenerRequest,WebSocketSharp.Net.AuthenticationSchemes>
struct Func_2_tE0B42AAFEBB9171D2A5BA6DD7FD28B73C859A36B;
// System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential>
struct Func_2_t15D1CC9486E434EBA5D287D539335A1D72420090;
// System.Func`2<System.String,System.Boolean>
struct Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D;
// System.Func`2<WebSocketSharp.Net.WebSockets.WebSocketContext,System.String>
struct Func_2_t13AA5DCA668C32DAF3B2F3CB4B04FF37A733EDAD;
// System.Func`3<WebSocketSharp.Net.CookieCollection,WebSocketSharp.Net.CookieCollection,System.Boolean>
struct Func_3_t180FD037A407451DF6306B7D15FF0340E987A3DF;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t958EAC5D5BD188327B4736D6F82A08EA1476A4C8;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,Netcode.Transports.WebSocket.WebSocketPeer>
struct KeyCollection_tE875A331446E8415EFB1C149354F0492DF2AC794;
// System.Collections.Generic.LinkedList`1<WebSocketSharp.Net.HttpListenerContext>
struct LinkedList_1_t902BE277943F02B18DE0AA697AA624D754FDA121;
// System.Collections.Generic.List`1<WebSocketSharp.Net.Cookie>
struct List_1_tC653688728025FC31CAD0802A5E2F55DEF9899F6;
// System.Collections.Generic.List`1<Unity.Netcode.NetworkClient>
struct List_1_t57C6C818F7D91A7154A4799FE6DEFD3ACD6F39A5;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284;
// System.Collections.Generic.Queue`1<WebSocketSharp.Net.HttpListenerAsyncResult>
struct Queue_1_t04BBC26171816247A0FB1FFD9AFBB4E9517690F1;
// System.Collections.Generic.Queue`1<WebSocketSharp.Net.HttpListenerContext>
struct Queue_1_t794C69485AA2C8B7777D69C8654027B37C03EF06;
// System.Collections.Generic.Queue`1<WebSocketSharp.MessageEventArgs>
struct Queue_1_tFC8C660F9568E6712E865A77EE1C769F3A1AA278;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Collections.Generic.Queue`1<System.UInt64>
struct Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF;
// System.Collections.Generic.Queue`1<Netcode.Transports.WebSocket.WebSocketEvent>
struct Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10;
// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket>
struct TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,Netcode.Transports.WebSocket.WebSocketPeer>
struct ValueCollection_t744F79203C210820F1A57B04C2FC91D4058EC0C7;
// System.Collections.Generic.Dictionary`2/Entry<System.UInt64,Netcode.Transports.WebSocket.WebSocketPeer>[]
struct EntryU5BU5D_tA2AC371E2DA00C069A9386A116FACB1DC51C7A7F;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// Netcode.Transports.WebSocket.WebSocketEvent[]
struct WebSocketEventU5BU5D_tF947C60EBDC9EDF3B58A8AE7FDF1919458372DE3;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// WebSocketSharp.Net.AuthenticationChallenge
struct AuthenticationChallenge_tF056169477C958482677E5AA6F46CE3F55C1D14B;
// WebSocketSharp.Net.ClientSslConfiguration
struct ClientSslConfiguration_t6AE5E3778E738BEA41CA6B372384790EF6454DB7;
// WebSocketSharp.CloseEventArgs
struct CloseEventArgs_t22B98E782E975F0442E2C9EB49E699F1D934A588;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// WebSocketSharp.Net.CookieCollection
struct CookieCollection_tF33A67A4729E8AB85409A8733A7AA4EEC807C6DF;
// Unity.Netcode.CustomMessagingManager
struct CustomMessagingManager_t713DDF9DC30FAF5178913295556DD07C946A9746;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564;
// WebSocketSharp.Net.EndPointListener
struct EndPointListener_t731248B27CA5F213958AA1E92C962238DE64B931;
// WebSocketSharp.ErrorEventArgs
struct ErrorEventArgs_t994316A1E3F79A575728D7388FAFD8BA05DD4052;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Exception
struct Exception_t;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// WebSocketSharp.HttpBase
struct HttpBase_t23596200D738BFD45A1801CF7AB265233611E96A;
// WebSocketSharp.Net.HttpConnection
struct HttpConnection_tF70009B09FAD5A4B7492CCAAB79480EA70DD3EA9;
// WebSocketSharp.Net.HttpListener
struct HttpListener_tFAA6A3F0382BEBACA28631D4E831D334006DA1F9;
// WebSocketSharp.Net.HttpListenerContext
struct HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44;
// WebSocketSharp.Net.HttpListenerPrefixCollection
struct HttpListenerPrefixCollection_t3336EE4956A8ED3B60A5264A12596B497A06F7E8;
// WebSocketSharp.Net.HttpListenerRequest
struct HttpListenerRequest_t89F42007013FD4C768C1630A02E475507C563575;
// WebSocketSharp.Net.HttpListenerResponse
struct HttpListenerResponse_t67D6387C1CCEE533F721B27C7ECFCD4E231DB3A0;
// WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext
struct HttpListenerWebSocketContext_tAD3851F58DB3C094958D121685C3E85FA99FEA83;
// WebSocketSharp.HttpRequest
struct HttpRequest_tC4EBD60896D30D3F354443F03AB29F7960C5F492;
// WebSocketSharp.HttpResponse
struct HttpResponse_tD541C05A3498F1B78E0461EEDDE5BCF6CD3A09AD;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Unity.Netcode.IDeferredMessageManager
struct IDeferredMessageManager_t4090EBA76E1C9A5B841E21584A74976F383AD793;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// System.Security.Principal.IIdentity
struct IIdentity_tBB5D8B8DE9EC3D8C9F92BB7038257E31E488896A;
// Unity.Netcode.INetworkMetrics
struct INetworkMetrics_tE2C13758A950A5C77D2682C15F47914B13AC1C41;
// System.IOAsyncCallback
struct IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388;
// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484;
// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// Netcode.Transports.WebSocket.IWebSocketClient
struct IWebSocketClient_t5DF940F4CDA707136A5E508E466B6D56F2B5F2EA;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859;
// WebSocketSharp.Logger
struct Logger_t53407739C86D76B1D27356B732E39367394F4ABA;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// WebSocketSharp.MessageEventArgs
struct MessageEventArgs_tC1868DA80225C18CE3B1286ED2D4B87474E87919;
// Unity.Netcode.MessagingSystem
struct MessagingSystem_tE5E070D8EDEED13D4D0C9D518961289FB3EE1C5D;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Mono.Net.Security.MobileAuthenticatedStream
struct MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E;
// Mono.Net.Security.MobileTlsProvider
struct MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017;
// Mono.Security.Interface.MonoTlsSettings
struct MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7;
// Netcode.Transports.WebSocket.NativeWebSocketClient
struct NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B;
// Unity.Netcode.NetworkBehaviourUpdater
struct NetworkBehaviourUpdater_t215DD428092983D5AECE1BF5BA0576E5070F987C;
// Unity.Netcode.NetworkClient
struct NetworkClient_t4EB5B562D3C8D21DDD5749455CE80E5B12571F64;
// Unity.Netcode.NetworkConfig
struct NetworkConfig_tBDA76D459879B7025939BE0E2AF6D82B4A925113;
// WebSocketSharp.Net.NetworkCredential
struct NetworkCredential_t934675975A72BE23BB92AEB9DD51A5A1D40F009A;
// Unity.Netcode.NetworkManager
struct NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468;
// Unity.Netcode.NetworkPrefabHandler
struct NetworkPrefabHandler_tDAE80C95FD27B1749A8657944402C831679B0AAE;
// Unity.Netcode.NetworkSceneManager
struct NetworkSceneManager_tC93DADE5972B29C0860CC236D9E11A74953C65BC;
// Unity.Netcode.NetworkSpawnManager
struct NetworkSpawnManager_t3C69A0FCA3E0961ED401C35188393E80BF22294D;
// System.Net.Sockets.NetworkStream
struct NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0;
// Unity.Netcode.NetworkTickSystem
struct NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A;
// Unity.Netcode.NetworkTimeSystem
struct NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2;
// Unity.Netcode.NetworkTransport
struct NetworkTransport_t55E07951299283974C86476F46CC977780560B64;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Security.Cryptography.Oid
struct Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287;
// WebSocketSharp.PayloadData
struct PayloadData_tDD05DBD34B4A478E288039202D3C444A641413D4;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405;
// WebSocketSharp.Net.QueryStringCollection
struct QueryStringCollection_tF304E01672FC558C1BAB0A634BC78CA51A8AEA11;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955;
// WebSocketSharp.Net.RequestStream
struct RequestStream_tF3DB62C2E1D04F7B43EF883C0056CFEA6E2DCB07;
// WebSocketSharp.Net.ResponseStream
struct ResponseStream_t6115564A50530552D97B25CB5F4C6475F5121342;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// WebSocketSharp.Net.ServerSslConfiguration
struct ServerSslConfiguration_tFE7CD988C3426FA1F6D02567C24D49FCD8DB6A42;
// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E;
// System.Net.Security.SslStream
struct SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06;
// System.Net.Sockets.TcpClient
struct TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58;
// System.Net.Sockets.TcpListener
struct TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82;
// WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext
struct TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// System.Threading.Timer
struct Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// WebSocketSharp.Net.WebHeaderCollection
struct WebHeaderCollection_t87B66BA664497F19ED4925E70BEB6432ED0E250D;
// WebSocketSharp.WebSocket
struct WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171;
// WebSocketSharp.Server.WebSocketBehavior
struct WebSocketBehavior_tE591886B40BB216DD21122093C87124CB0B74037;
// Netcode.Transports.WebSocket.WebSocketClientFactory
struct WebSocketClientFactory_tCA248E17AF61B325512C2DC6515C5484B149C910;
// WebSocketSharp.Net.WebSockets.WebSocketContext
struct WebSocketContext_t210263DD230B87766F206EC3DDBC301B24F5748B;
// Netcode.Transports.WebSocket.WebSocketEvent
struct WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434;
// Netcode.Transports.WebSocket.WebSocketException
struct WebSocketException_tB3A36C56AA2ACFE8E6E58AC75DB700A08B940A3C;
// WebSocketSharp.Server.WebSocketServer
struct WebSocketServer_t100358D00BE6A025323C3449FF95E300DCED1A71;
// Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior
struct WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122;
// WebSocketSharp.Server.WebSocketServiceManager
struct WebSocketServiceManager_t79A81283659CE51B4C4859148014DABF6D74FB41;
// WebSocketSharp.Server.WebSocketSessionManager
struct WebSocketSessionManager_tBE2E611408F6189250BBDC259D9CC47DE85DEB1B;
// Netcode.Transports.WebSocket.WebSocketTransport
struct WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D;
// System.Security.Cryptography.X509Certificates.X509CertificateImpl
struct X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0;
// WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext/<get_SecWebSocketProtocols>d__30
struct U3Cget_SecWebSocketProtocolsU3Ed__30_t577F379C68DABB00612A02095F8455251051506F;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81;
// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
struct NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2;
// Unity.Netcode.NetworkTransport/TransportEventDelegate
struct TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135;
// System.Net.Sockets.Socket/CachedEventArgs
struct CachedEventArgs_tF0692E89962FD1A045B17BC985F838C11FB6822C;
// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs
struct Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<>c__DisplayClass51_0
struct U3CU3Ec__DisplayClass51_0_t581519BFB0F07914A9105FAE3DE9C6838ECAF454;
// WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<get_SecWebSocketProtocols>d__39
struct U3Cget_SecWebSocketProtocolsU3Ed__39_t8227D89EC3D7A5BF15A302E0EBDE90FEBBF50155;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;

IL2CPP_EXTERN_C RuntimeClass* AuthenticationChallenge_tF056169477C958482677E5AA6F46CE3F55C1D14B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t25C2B1256DA6CA53630FF1ABF2AABF3208E9DA55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t26C98047352625FB580C2AB0368052211F6CC24E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t83FB68A622E9BE4A5F2DE4B25A49199E64387714_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tE64C66477C8D3A58B6645C9F015B5AD78E47C08B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Ext_t3CC4EF796122EB13B0AEA2AC31BCC95AB9EB29D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpUtility_t0CB64989ECDD50CC66266E185D56EE86F08EB11B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IIdentity_tBB5D8B8DE9EC3D8C9F92BB7038257E31E488896A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWebSocketClient_t5DF940F4CDA707136A5E508E466B6D56F2B5F2EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass51_0_t581519BFB0F07914A9105FAE3DE9C6838ECAF454_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_SecWebSocketProtocolsU3Ed__30_t577F379C68DABB00612A02095F8455251051506F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_SecWebSocketProtocolsU3Ed__39_t8227D89EC3D7A5BF15A302E0EBDE90FEBBF50155_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketException_tB3A36C56AA2ACFE8E6E58AC75DB700A08B940A3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketServer_t100358D00BE6A025323C3449FF95E300DCED1A71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral016883CC2D11508514732ED5F0D7359E02501158;
IL2CPP_EXTERN_C String_t* _stringLiteral0242F31341D314854DB5EA5749448625B0A0AAE3;
IL2CPP_EXTERN_C String_t* _stringLiteral17DCB6DC77B5841EDA742002E9E451C700AD1742;
IL2CPP_EXTERN_C String_t* _stringLiteral2B05881D969F55B8A024BCEBD4B48AB5645311B5;
IL2CPP_EXTERN_C String_t* _stringLiteral3299F571BBF7C6F21CF1E9B8CA0239E502AFCB4D;
IL2CPP_EXTERN_C String_t* _stringLiteral33B3063694EC42095FDB4F99AF7DCB5B4014CBA6;
IL2CPP_EXTERN_C String_t* _stringLiteral3AB210039B5A2CF5872076AA022415132BB72E3B;
IL2CPP_EXTERN_C String_t* _stringLiteral446EBFE0AF15621B72FD60AC796D8BDD96BA7175;
IL2CPP_EXTERN_C String_t* _stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C;
IL2CPP_EXTERN_C String_t* _stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95;
IL2CPP_EXTERN_C String_t* _stringLiteral60202784C238D8D280B8FD997BE00D2B2F592EDB;
IL2CPP_EXTERN_C String_t* _stringLiteral65750519211B02676B1D8242D58F149E2CCC7A0B;
IL2CPP_EXTERN_C String_t* _stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE;
IL2CPP_EXTERN_C String_t* _stringLiteral7834CF4EF86F7E4B257C99799BE0F2B8C798C97A;
IL2CPP_EXTERN_C String_t* _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907;
IL2CPP_EXTERN_C String_t* _stringLiteralA7BC336A27F57F20AF6E78FD9E8FEBEE28598343;
IL2CPP_EXTERN_C String_t* _stringLiteralC992B97C25BAA8390F09D138A31A939A948EE437;
IL2CPP_EXTERN_C String_t* _stringLiteralCDC87456366F1F84EF88ED47E4FCD54786C1FF2C;
IL2CPP_EXTERN_C String_t* _stringLiteralDCD66B4EDBD6EF2E0EEE2EE492FC364F2BE725F2;
IL2CPP_EXTERN_C String_t* _stringLiteralEBFF2F7F7EA10913C8B5F989BA54092697153269;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mFA2958260FA323A32289C3365F90DD5017E5E810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m1B934ECCB68BBDB4E20FC582AF4D3370980D6435_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mFA6CBB79B6B226357DDAA4938F7CD33DE4526557_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m49F06D8B0A22AD4DBCCCBC6936A4A1B7BDBE57CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m8F64CE276AD814D28C39A8711B646AE4A9283743_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeWebSocketClient_Close_mA13175B8B9EF237C52EFCF61ECEE67CCFC02490F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeWebSocketClient_Connect_mE3CD3A7E905567BEE70FD0B0D2A4F2A74DA41592_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeWebSocketClient_OnClose_mF2A60104C8EC3495DE2F9F008F286A3C44700199_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeWebSocketClient_OnError_m1BCB9E7687F1E1F07712FDA9964FF6239E797BB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeWebSocketClient_OnMessage_mECCC6BBCE17E879C37EDE0FA5FB850038BB95AB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeWebSocketClient_OnOpen_m2B9C86865A39B36E066351A4196C1CA405D60B6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeWebSocketClient_Send_m79C3D9D7848D5DE9FC4AA6AC9B10934FCC794B26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m61058CB40F8E38F73E03279A288A436B288946DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m83073538B9EDC7DA9AC9239902E95E5C3AAC5666_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m1730DB68850554D215EBC943E35FEF5A7BF18CF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m4518DCA73D4E47E028387221A627BFDF2C113841_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mA15F3464308E1DD267ED3B9BB7D8849D2CA73F74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mFACE75E8CAEA49C2487FA67C243F15DAFC67357E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m51C468F12B79CB459E75FFF1A9ED64067800C8FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mF408F7F539EA2D8DF7E25FF32A7DB433FFB9F67A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass51_0_U3CAuthenticateU3Eb__0_mB929BA8FFD875DE7414887CB41660821FD25D4D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_SecWebSocketProtocolsU3Ed__30_System_Collections_IEnumerator_Reset_mEF1392C61BBBE9BA447598722144033D029C445D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_SecWebSocketProtocolsU3Ed__39_System_Collections_IEnumerator_Reset_mB16C06729C80E77DCD96006503EAEAC909C748B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketServer_AddWebSocketService_TisWebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_mA026A3E93873B7F55AD52CF81006BF9A81A88EF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketTransport_StartClient_mBEFA2F4D649DC8FB5D91F940FD6D7672652BAB13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketTransport_StartServer_m2D39DB8B330B661210FDDACBFD4984F1B9B4C072_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.UInt64,Netcode.Transports.WebSocket.WebSocketPeer>
struct Dictionary_2_t25C2B1256DA6CA53630FF1ABF2AABF3208E9DA55  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tA2AC371E2DA00C069A9386A116FACB1DC51C7A7F* ____entries_1;
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
	KeyCollection_tE875A331446E8415EFB1C149354F0492DF2AC794* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t744F79203C210820F1A57B04C2FC91D4058EC0C7* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<System.UInt64>
struct Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<Netcode.Transports.WebSocket.WebSocketEvent>
struct Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	WebSocketEventU5BU5D_tF947C60EBDC9EDF3B58A8AE7FDF1919458372DE3* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};
struct Il2CppArrayBounds;

// WebSocketSharp.Net.AuthenticationBase
struct AuthenticationBase_tFB3673E409CA4F77052C79B3595ACDDDD7FB2072  : public RuntimeObject
{
	// WebSocketSharp.Net.AuthenticationSchemes WebSocketSharp.Net.AuthenticationBase::_scheme
	int32_t ____scheme_0;
	// System.Collections.Specialized.NameValueCollection WebSocketSharp.Net.AuthenticationBase::Parameters
	NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* ___Parameters_1;
};

// WebSocketSharp.Net.CookieCollection
struct CookieCollection_tF33A67A4729E8AB85409A8733A7AA4EEC807C6DF  : public RuntimeObject
{
	// System.Collections.Generic.List`1<WebSocketSharp.Net.Cookie> WebSocketSharp.Net.CookieCollection::_list
	List_1_tC653688728025FC31CAD0802A5E2F55DEF9899F6* ____list_0;
	// System.Boolean WebSocketSharp.Net.CookieCollection::_readOnly
	bool ____readOnly_1;
	// System.Object WebSocketSharp.Net.CookieCollection::_sync
	RuntimeObject* ____sync_2;
};

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

// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564  : public RuntimeObject
{
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// WebSocketSharp.HttpBase
struct HttpBase_t23596200D738BFD45A1801CF7AB265233611E96A  : public RuntimeObject
{
	// System.Collections.Specialized.NameValueCollection WebSocketSharp.HttpBase::_headers
	NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* ____headers_0;
	// System.Version WebSocketSharp.HttpBase::_version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ____version_2;
	// System.Byte[] WebSocketSharp.HttpBase::EntityBodyData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___EntityBodyData_3;
};

// WebSocketSharp.Net.HttpConnection
struct HttpConnection_tF70009B09FAD5A4B7492CCAAB79480EA70DD3EA9  : public RuntimeObject
{
	// System.Int32 WebSocketSharp.Net.HttpConnection::_attempts
	int32_t ____attempts_0;
	// System.Byte[] WebSocketSharp.Net.HttpConnection::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_1;
	// WebSocketSharp.Net.HttpListenerContext WebSocketSharp.Net.HttpConnection::_context
	HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* ____context_3;
	// System.Text.StringBuilder WebSocketSharp.Net.HttpConnection::_currentLine
	StringBuilder_t* ____currentLine_4;
	// WebSocketSharp.Net.InputState WebSocketSharp.Net.HttpConnection::_inputState
	int32_t ____inputState_5;
	// WebSocketSharp.Net.RequestStream WebSocketSharp.Net.HttpConnection::_inputStream
	RequestStream_tF3DB62C2E1D04F7B43EF883C0056CFEA6E2DCB07* ____inputStream_6;
	// WebSocketSharp.Net.LineState WebSocketSharp.Net.HttpConnection::_lineState
	int32_t ____lineState_7;
	// WebSocketSharp.Net.EndPointListener WebSocketSharp.Net.HttpConnection::_listener
	EndPointListener_t731248B27CA5F213958AA1E92C962238DE64B931* ____listener_8;
	// System.Net.EndPoint WebSocketSharp.Net.HttpConnection::_localEndPoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ____localEndPoint_9;
	// WebSocketSharp.Net.ResponseStream WebSocketSharp.Net.HttpConnection::_outputStream
	ResponseStream_t6115564A50530552D97B25CB5F4C6475F5121342* ____outputStream_11;
	// System.Int32 WebSocketSharp.Net.HttpConnection::_position
	int32_t ____position_12;
	// System.Net.EndPoint WebSocketSharp.Net.HttpConnection::_remoteEndPoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ____remoteEndPoint_13;
	// System.IO.MemoryStream WebSocketSharp.Net.HttpConnection::_requestBuffer
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ____requestBuffer_14;
	// System.Int32 WebSocketSharp.Net.HttpConnection::_reuses
	int32_t ____reuses_15;
	// System.Boolean WebSocketSharp.Net.HttpConnection::_secure
	bool ____secure_16;
	// System.Net.Sockets.Socket WebSocketSharp.Net.HttpConnection::_socket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ____socket_17;
	// System.IO.Stream WebSocketSharp.Net.HttpConnection::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_18;
	// System.Object WebSocketSharp.Net.HttpConnection::_sync
	RuntimeObject* ____sync_19;
	// System.Int32 WebSocketSharp.Net.HttpConnection::_timeout
	int32_t ____timeout_20;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean> WebSocketSharp.Net.HttpConnection::_timeoutCanceled
	Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ____timeoutCanceled_21;
	// System.Threading.Timer WebSocketSharp.Net.HttpConnection::_timer
	Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00* ____timer_22;
};

struct HttpConnection_tF70009B09FAD5A4B7492CCAAB79480EA70DD3EA9_StaticFields
{
	// System.Int32 WebSocketSharp.Net.HttpConnection::_bufferLength
	int32_t ____bufferLength_2;
	// System.Int32 WebSocketSharp.Net.HttpConnection::_maxInputLength
	int32_t ____maxInputLength_10;
};

// WebSocketSharp.Net.HttpListener
struct HttpListener_tFAA6A3F0382BEBACA28631D4E831D334006DA1F9  : public RuntimeObject
{
	// WebSocketSharp.Net.AuthenticationSchemes WebSocketSharp.Net.HttpListener::_authSchemes
	int32_t ____authSchemes_0;
	// System.Func`2<WebSocketSharp.Net.HttpListenerRequest,WebSocketSharp.Net.AuthenticationSchemes> WebSocketSharp.Net.HttpListener::_authSchemeSelector
	Func_2_tE0B42AAFEBB9171D2A5BA6DD7FD28B73C859A36B* ____authSchemeSelector_1;
	// System.String WebSocketSharp.Net.HttpListener::_certFolderPath
	String_t* ____certFolderPath_2;
	// System.Collections.Generic.Queue`1<WebSocketSharp.Net.HttpListenerContext> WebSocketSharp.Net.HttpListener::_contextQueue
	Queue_1_t794C69485AA2C8B7777D69C8654027B37C03EF06* ____contextQueue_3;
	// System.Collections.Generic.LinkedList`1<WebSocketSharp.Net.HttpListenerContext> WebSocketSharp.Net.HttpListener::_contextRegistry
	LinkedList_1_t902BE277943F02B18DE0AA697AA624D754FDA121* ____contextRegistry_4;
	// System.Object WebSocketSharp.Net.HttpListener::_contextRegistrySync
	RuntimeObject* ____contextRegistrySync_5;
	// System.Boolean WebSocketSharp.Net.HttpListener::_disposed
	bool ____disposed_7;
	// System.Boolean WebSocketSharp.Net.HttpListener::_ignoreWriteExceptions
	bool ____ignoreWriteExceptions_8;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.Net.HttpListener::_listening
	bool ____listening_9;
	// WebSocketSharp.Logger WebSocketSharp.Net.HttpListener::_log
	Logger_t53407739C86D76B1D27356B732E39367394F4ABA* ____log_10;
	// System.String WebSocketSharp.Net.HttpListener::_objectName
	String_t* ____objectName_11;
	// WebSocketSharp.Net.HttpListenerPrefixCollection WebSocketSharp.Net.HttpListener::_prefixes
	HttpListenerPrefixCollection_t3336EE4956A8ED3B60A5264A12596B497A06F7E8* ____prefixes_12;
	// System.String WebSocketSharp.Net.HttpListener::_realm
	String_t* ____realm_13;
	// System.Boolean WebSocketSharp.Net.HttpListener::_reuseAddress
	bool ____reuseAddress_14;
	// WebSocketSharp.Net.ServerSslConfiguration WebSocketSharp.Net.HttpListener::_sslConfig
	ServerSslConfiguration_tFE7CD988C3426FA1F6D02567C24D49FCD8DB6A42* ____sslConfig_15;
	// System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential> WebSocketSharp.Net.HttpListener::_userCredFinder
	Func_2_t15D1CC9486E434EBA5D287D539335A1D72420090* ____userCredFinder_16;
	// System.Collections.Generic.Queue`1<WebSocketSharp.Net.HttpListenerAsyncResult> WebSocketSharp.Net.HttpListener::_waitQueue
	Queue_1_t04BBC26171816247A0FB1FFD9AFBB4E9517690F1* ____waitQueue_17;
};

struct HttpListener_tFAA6A3F0382BEBACA28631D4E831D334006DA1F9_StaticFields
{
	// System.String WebSocketSharp.Net.HttpListener::_defaultRealm
	String_t* ____defaultRealm_6;
};

// WebSocketSharp.Net.HttpListenerContext
struct HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44  : public RuntimeObject
{
	// WebSocketSharp.Net.HttpConnection WebSocketSharp.Net.HttpListenerContext::_connection
	HttpConnection_tF70009B09FAD5A4B7492CCAAB79480EA70DD3EA9* ____connection_0;
	// System.String WebSocketSharp.Net.HttpListenerContext::_errorMessage
	String_t* ____errorMessage_1;
	// System.Int32 WebSocketSharp.Net.HttpListenerContext::_errorStatusCode
	int32_t ____errorStatusCode_2;
	// WebSocketSharp.Net.HttpListener WebSocketSharp.Net.HttpListenerContext::_listener
	HttpListener_tFAA6A3F0382BEBACA28631D4E831D334006DA1F9* ____listener_3;
	// WebSocketSharp.Net.HttpListenerRequest WebSocketSharp.Net.HttpListenerContext::_request
	HttpListenerRequest_t89F42007013FD4C768C1630A02E475507C563575* ____request_4;
	// WebSocketSharp.Net.HttpListenerResponse WebSocketSharp.Net.HttpListenerContext::_response
	HttpListenerResponse_t67D6387C1CCEE533F721B27C7ECFCD4E231DB3A0* ____response_5;
	// System.Security.Principal.IPrincipal WebSocketSharp.Net.HttpListenerContext::_user
	RuntimeObject* ____user_6;
	// WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext WebSocketSharp.Net.HttpListenerContext::_websocketContext
	HttpListenerWebSocketContext_tAD3851F58DB3C094958D121685C3E85FA99FEA83* ____websocketContext_7;
};

// WebSocketSharp.Net.HttpListenerResponse
struct HttpListenerResponse_t67D6387C1CCEE533F721B27C7ECFCD4E231DB3A0  : public RuntimeObject
{
	// System.Boolean WebSocketSharp.Net.HttpListenerResponse::_closeConnection
	bool ____closeConnection_0;
	// System.Text.Encoding WebSocketSharp.Net.HttpListenerResponse::_contentEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____contentEncoding_1;
	// System.Int64 WebSocketSharp.Net.HttpListenerResponse::_contentLength
	int64_t ____contentLength_2;
	// System.String WebSocketSharp.Net.HttpListenerResponse::_contentType
	String_t* ____contentType_3;
	// WebSocketSharp.Net.HttpListenerContext WebSocketSharp.Net.HttpListenerResponse::_context
	HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* ____context_4;
	// WebSocketSharp.Net.CookieCollection WebSocketSharp.Net.HttpListenerResponse::_cookies
	CookieCollection_tF33A67A4729E8AB85409A8733A7AA4EEC807C6DF* ____cookies_5;
	// System.Boolean WebSocketSharp.Net.HttpListenerResponse::_disposed
	bool ____disposed_6;
	// WebSocketSharp.Net.WebHeaderCollection WebSocketSharp.Net.HttpListenerResponse::_headers
	WebHeaderCollection_t87B66BA664497F19ED4925E70BEB6432ED0E250D* ____headers_7;
	// System.Boolean WebSocketSharp.Net.HttpListenerResponse::_headersSent
	bool ____headersSent_8;
	// System.Boolean WebSocketSharp.Net.HttpListenerResponse::_keepAlive
	bool ____keepAlive_9;
	// WebSocketSharp.Net.ResponseStream WebSocketSharp.Net.HttpListenerResponse::_outputStream
	ResponseStream_t6115564A50530552D97B25CB5F4C6475F5121342* ____outputStream_10;
	// System.Uri WebSocketSharp.Net.HttpListenerResponse::_redirectLocation
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ____redirectLocation_11;
	// System.Boolean WebSocketSharp.Net.HttpListenerResponse::_sendChunked
	bool ____sendChunked_12;
	// System.Int32 WebSocketSharp.Net.HttpListenerResponse::_statusCode
	int32_t ____statusCode_13;
	// System.String WebSocketSharp.Net.HttpListenerResponse::_statusDescription
	String_t* ____statusDescription_14;
	// System.Version WebSocketSharp.Net.HttpListenerResponse::_version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ____version_15;
};

// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484  : public RuntimeObject
{
	// System.UInt32 System.Net.IPAddress::_addressOrScopeId
	uint32_t ____addressOrScopeId_8;
	// System.UInt16[] System.Net.IPAddress::_numbers
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ____numbers_9;
	// System.String System.Net.IPAddress::_toString
	String_t* ____toString_10;
	// System.Int32 System.Net.IPAddress::_hashCode
	int32_t ____hashCode_11;
};

struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields
{
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Any_5;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Loopback_6;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6None_7;
};

// WebSocketSharp.Logger
struct Logger_t53407739C86D76B1D27356B732E39367394F4ABA  : public RuntimeObject
{
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.Logger::_file
	String_t* ____file_0;
	// WebSocketSharp.LogLevel modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.Logger::_level
	int32_t ____level_1;
	// System.Action`2<WebSocketSharp.LogData,System.String> WebSocketSharp.Logger::_output
	Action_2_t10E7F0FC274074A13ADF02000324CF4CC268642B* ____output_2;
	// System.Object WebSocketSharp.Logger::_sync
	RuntimeObject* ____sync_3;
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
	bool ____readOnly_8;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::_entriesArray
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____entriesArray_9;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::_keyComparer
	RuntimeObject* ____keyComparer_10;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_entriesTable
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____entriesTable_11;
	// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_nullKeyEntry
	NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* ____nullKeyEntry_12;
	// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::_keys
	KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81* ____keys_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::_serializationInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____serializationInfo_14;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::_version
	int32_t ____version_15;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase::_syncRoot
	RuntimeObject* ____syncRoot_16;
};

struct NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_StaticFields
{
	// System.StringComparer System.Collections.Specialized.NameObjectCollectionBase::defaultComparer
	StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* ___defaultComparer_17;
};

// Netcode.Transports.WebSocket.NativeWebSocketClient
struct NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B  : public RuntimeObject
{
	// WebSocketSharp.WebSocket Netcode.Transports.WebSocket.NativeWebSocketClient::Connection
	WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* ___Connection_1;
	// System.Collections.Generic.Queue`1<Netcode.Transports.WebSocket.WebSocketEvent> Netcode.Transports.WebSocket.NativeWebSocketClient::<EventQueue>k__BackingField
	Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10* ___U3CEventQueueU3Ek__BackingField_2;
};

struct NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B_StaticFields
{
	// System.Object Netcode.Transports.WebSocket.NativeWebSocketClient::ConnectionLock
	RuntimeObject* ___ConnectionLock_0;
};

// WebSocketSharp.Net.ServerSslConfiguration
struct ServerSslConfiguration_tFE7CD988C3426FA1F6D02567C24D49FCD8DB6A42  : public RuntimeObject
{
	// System.Boolean WebSocketSharp.Net.ServerSslConfiguration::_checkCertRevocation
	bool ____checkCertRevocation_0;
	// System.Boolean WebSocketSharp.Net.ServerSslConfiguration::_clientCertRequired
	bool ____clientCertRequired_1;
	// System.Net.Security.RemoteCertificateValidationCallback WebSocketSharp.Net.ServerSslConfiguration::_clientCertValidationCallback
	RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* ____clientCertValidationCallback_2;
	// System.Security.Authentication.SslProtocols WebSocketSharp.Net.ServerSslConfiguration::_enabledSslProtocols
	int32_t ____enabledSslProtocols_3;
	// System.Security.Cryptography.X509Certificates.X509Certificate2 WebSocketSharp.Net.ServerSslConfiguration::_serverCert
	X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* ____serverCert_4;
};

// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E  : public RuntimeObject
{
	// System.Net.Sockets.Socket/CachedEventArgs System.Net.Sockets.Socket::_cachedTaskEventArgs
	CachedEventArgs_tF0692E89962FD1A045B17BC985F838C11FB6822C* ____cachedTaskEventArgs_6;
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_17;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_18;
	// System.Boolean System.Net.Sockets.Socket::useOverlappedIO
	bool ___useOverlappedIO_19;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_20;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_21;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_22;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_23;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE* ___m_Handle_24;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___seed_endpoint_25;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___ReadSem_26;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___WriteSem_27;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_28;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_29;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_30;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_31;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_32;
	// System.Int32 System.Net.Sockets.Socket::ID
	int32_t ___ID_33;
};

struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_StaticFields
{
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::AcceptCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___AcceptCompletedHandler_0;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::ReceiveCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___ReceiveCompletedHandler_1;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::SendCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___SendCompletedHandler_2;
	// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket> System.Net.Sockets.Socket::s_rentedSocketSentinel
	TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401* ___s_rentedSocketSentinel_3;
	// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs System.Net.Sockets.Socket::s_rentedInt32Sentinel
	Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9* ___s_rentedInt32Sentinel_4;
	// System.Threading.Tasks.Task`1<System.Int32> System.Net.Sockets.Socket::s_zeroTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___s_zeroTask_5;
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_7;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_8;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_9;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_10;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_11;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_PerfCountersEnabled
	bool ___s_PerfCountersEnabled_13;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___AcceptAsyncCallback_34;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginAcceptCallback_35;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginAcceptReceiveCallback_36;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ConnectAsyncCallback_37;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginConnectCallback_38;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___DisconnectAsyncCallback_39;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginDisconnectCallback_40;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ReceiveAsyncCallback_41;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveCallback_42;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveGenericCallback_43;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ReceiveFromAsyncCallback_44;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveFromCallback_45;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___SendAsyncCallback_46;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginSendGenericCallback_47;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___SendToAsyncCallback_48;
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

// System.Net.Sockets.TcpClient
struct TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58  : public RuntimeObject
{
	// System.Net.Sockets.Socket System.Net.Sockets.TcpClient::m_ClientSocket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___m_ClientSocket_0;
	// System.Boolean System.Net.Sockets.TcpClient::m_Active
	bool ___m_Active_1;
	// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::m_DataStream
	NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* ___m_DataStream_2;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.TcpClient::m_Family
	int32_t ___m_Family_3;
	// System.Boolean System.Net.Sockets.TcpClient::m_CleanedUp
	bool ___m_CleanedUp_4;
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;
};

struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
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
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_35;
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

// Netcode.Transports.WebSocket.WebSocketClientFactory
struct WebSocketClientFactory_tCA248E17AF61B325512C2DC6515C5484B149C910  : public RuntimeObject
{
};

// WebSocketSharp.Net.WebSockets.WebSocketContext
struct WebSocketContext_t210263DD230B87766F206EC3DDBC301B24F5748B  : public RuntimeObject
{
};

// Netcode.Transports.WebSocket.WebSocketEvent
struct WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434  : public RuntimeObject
{
	// Netcode.Transports.WebSocket.WebSocketEvent/WebSocketEventType Netcode.Transports.WebSocket.WebSocketEvent::Type
	int32_t ___Type_0;
	// System.UInt64 Netcode.Transports.WebSocket.WebSocketEvent::ClientId
	uint64_t ___ClientId_1;
	// System.Byte[] Netcode.Transports.WebSocket.WebSocketEvent::Payload
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Payload_2;
	// System.String Netcode.Transports.WebSocket.WebSocketEvent::Error
	String_t* ___Error_3;
	// System.String Netcode.Transports.WebSocket.WebSocketEvent::Reason
	String_t* ___Reason_4;
};

// WebSocketSharp.Server.WebSocketServer
struct WebSocketServer_t100358D00BE6A025323C3449FF95E300DCED1A71  : public RuntimeObject
{
	// System.Net.IPAddress WebSocketSharp.Server.WebSocketServer::_address
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ____address_0;
	// System.Boolean WebSocketSharp.Server.WebSocketServer::_allowForwardedRequest
	bool ____allowForwardedRequest_1;
	// WebSocketSharp.Net.AuthenticationSchemes WebSocketSharp.Server.WebSocketServer::_authSchemes
	int32_t ____authSchemes_2;
	// System.Boolean WebSocketSharp.Server.WebSocketServer::_dnsStyle
	bool ____dnsStyle_4;
	// System.String WebSocketSharp.Server.WebSocketServer::_hostname
	String_t* ____hostname_5;
	// System.Net.Sockets.TcpListener WebSocketSharp.Server.WebSocketServer::_listener
	TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82* ____listener_6;
	// WebSocketSharp.Logger WebSocketSharp.Server.WebSocketServer::_log
	Logger_t53407739C86D76B1D27356B732E39367394F4ABA* ____log_7;
	// System.Int32 WebSocketSharp.Server.WebSocketServer::_port
	int32_t ____port_8;
	// System.String WebSocketSharp.Server.WebSocketServer::_realm
	String_t* ____realm_9;
	// System.String WebSocketSharp.Server.WebSocketServer::_realmInUse
	String_t* ____realmInUse_10;
	// System.Threading.Thread WebSocketSharp.Server.WebSocketServer::_receiveThread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ____receiveThread_11;
	// System.Boolean WebSocketSharp.Server.WebSocketServer::_reuseAddress
	bool ____reuseAddress_12;
	// System.Boolean WebSocketSharp.Server.WebSocketServer::_secure
	bool ____secure_13;
	// WebSocketSharp.Server.WebSocketServiceManager WebSocketSharp.Server.WebSocketServer::_services
	WebSocketServiceManager_t79A81283659CE51B4C4859148014DABF6D74FB41* ____services_14;
	// WebSocketSharp.Net.ServerSslConfiguration WebSocketSharp.Server.WebSocketServer::_sslConfig
	ServerSslConfiguration_tFE7CD988C3426FA1F6D02567C24D49FCD8DB6A42* ____sslConfig_15;
	// WebSocketSharp.Net.ServerSslConfiguration WebSocketSharp.Server.WebSocketServer::_sslConfigInUse
	ServerSslConfiguration_tFE7CD988C3426FA1F6D02567C24D49FCD8DB6A42* ____sslConfigInUse_16;
	// WebSocketSharp.Server.ServerState modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.Server.WebSocketServer::_state
	int32_t ____state_17;
	// System.Object WebSocketSharp.Server.WebSocketServer::_sync
	RuntimeObject* ____sync_18;
	// System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential> WebSocketSharp.Server.WebSocketServer::_userCredFinder
	Func_2_t15D1CC9486E434EBA5D287D539335A1D72420090* ____userCredFinder_19;
};

struct WebSocketServer_t100358D00BE6A025323C3449FF95E300DCED1A71_StaticFields
{
	// System.String WebSocketSharp.Server.WebSocketServer::_defaultRealm
	String_t* ____defaultRealm_3;
};

// WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext/<get_SecWebSocketProtocols>d__30
struct U3Cget_SecWebSocketProtocolsU3Ed__30_t577F379C68DABB00612A02095F8455251051506F  : public RuntimeObject
{
	// System.Int32 WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext/<get_SecWebSocketProtocols>d__30::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext/<get_SecWebSocketProtocols>d__30::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext/<get_SecWebSocketProtocols>d__30::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext/<get_SecWebSocketProtocols>d__30::<>4__this
	HttpListenerWebSocketContext_tAD3851F58DB3C094958D121685C3E85FA99FEA83* ___U3CU3E4__this_3;
	// System.String[] WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext/<get_SecWebSocketProtocols>d__30::<>7__wrap1
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CU3E7__wrap1_4;
	// System.Int32 WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext/<get_SecWebSocketProtocols>d__30::<>7__wrap2
	int32_t ___U3CU3E7__wrap2_5;
};

// WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<>c__DisplayClass51_0
struct U3CU3Ec__DisplayClass51_0_t581519BFB0F07914A9105FAE3DE9C6838ECAF454  : public RuntimeObject
{
	// System.Int32 WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<>c__DisplayClass51_0::retry
	int32_t ___retry_0;
	// WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<>c__DisplayClass51_0::<>4__this
	TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* ___U3CU3E4__this_1;
	// WebSocketSharp.Net.AuthenticationSchemes WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<>c__DisplayClass51_0::scheme
	int32_t ___scheme_2;
	// System.String WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<>c__DisplayClass51_0::realm
	String_t* ___realm_3;
	// System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential> WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<>c__DisplayClass51_0::credentialsFinder
	Func_2_t15D1CC9486E434EBA5D287D539335A1D72420090* ___credentialsFinder_4;
	// System.String WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<>c__DisplayClass51_0::chal
	String_t* ___chal_5;
	// System.Func`1<System.Boolean> WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<>c__DisplayClass51_0::auth
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___auth_6;
};

// WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<get_SecWebSocketProtocols>d__39
struct U3Cget_SecWebSocketProtocolsU3Ed__39_t8227D89EC3D7A5BF15A302E0EBDE90FEBBF50155  : public RuntimeObject
{
	// System.Int32 WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<get_SecWebSocketProtocols>d__39::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<get_SecWebSocketProtocols>d__39::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<get_SecWebSocketProtocols>d__39::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<get_SecWebSocketProtocols>d__39::<>4__this
	TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* ___U3CU3E4__this_3;
	// System.String[] WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<get_SecWebSocketProtocols>d__39::<>7__wrap1
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CU3E7__wrap1_4;
	// System.Int32 WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<get_SecWebSocketProtocols>d__39::<>7__wrap2
	int32_t ___U3CU3E7__wrap2_5;
};

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 
{
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
};

struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___U3CEmptyU3Ek__BackingField_0;
};

// WebSocketSharp.Net.AuthenticationChallenge
struct AuthenticationChallenge_tF056169477C958482677E5AA6F46CE3F55C1D14B  : public AuthenticationBase_tFB3673E409CA4F77052C79B3595ACDDDD7FB2072
{
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// WebSocketSharp.CloseEventArgs
struct CloseEventArgs_t22B98E782E975F0442E2C9EB49E699F1D934A588  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Boolean WebSocketSharp.CloseEventArgs::_clean
	bool ____clean_1;
	// WebSocketSharp.PayloadData WebSocketSharp.CloseEventArgs::_payloadData
	PayloadData_tDD05DBD34B4A478E288039202D3C444A641413D4* ____payloadData_2;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// WebSocketSharp.ErrorEventArgs
struct ErrorEventArgs_t994316A1E3F79A575728D7388FAFD8BA05DD4052  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Exception WebSocketSharp.ErrorEventArgs::_exception
	Exception_t* ____exception_1;
	// System.String WebSocketSharp.ErrorEventArgs::_message
	String_t* ____message_2;
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

// WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext
struct HttpListenerWebSocketContext_tAD3851F58DB3C094958D121685C3E85FA99FEA83  : public WebSocketContext_t210263DD230B87766F206EC3DDBC301B24F5748B
{
	// WebSocketSharp.Net.HttpListenerContext WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::_context
	HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* ____context_0;
	// WebSocketSharp.WebSocket WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::_websocket
	WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* ____websocket_1;
};

// WebSocketSharp.HttpRequest
struct HttpRequest_tC4EBD60896D30D3F354443F03AB29F7960C5F492  : public HttpBase_t23596200D738BFD45A1801CF7AB265233611E96A
{
	// WebSocketSharp.Net.CookieCollection WebSocketSharp.HttpRequest::_cookies
	CookieCollection_tF33A67A4729E8AB85409A8733A7AA4EEC807C6DF* ____cookies_5;
	// System.String WebSocketSharp.HttpRequest::_method
	String_t* ____method_6;
	// System.String WebSocketSharp.HttpRequest::_uri
	String_t* ____uri_7;
};

// WebSocketSharp.HttpResponse
struct HttpResponse_tD541C05A3498F1B78E0461EEDDE5BCF6CD3A09AD  : public HttpBase_t23596200D738BFD45A1801CF7AB265233611E96A
{
	// System.String WebSocketSharp.HttpResponse::_code
	String_t* ____code_5;
	// System.String WebSocketSharp.HttpResponse::_reason
	String_t* ____reason_6;
};

// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB  : public EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564
{
	// System.Net.IPAddress System.Net.IPEndPoint::_address
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ____address_2;
	// System.Int32 System.Net.IPEndPoint::_port
	int32_t ____port_3;
};

struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_StaticFields
{
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___Any_5;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___IPv6Any_6;
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

// WebSocketSharp.MessageEventArgs
struct MessageEventArgs_tC1868DA80225C18CE3B1286ED2D4B87474E87919  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String WebSocketSharp.MessageEventArgs::_data
	String_t* ____data_1;
	// System.Boolean WebSocketSharp.MessageEventArgs::_dataSet
	bool ____dataSet_2;
	// WebSocketSharp.Opcode WebSocketSharp.MessageEventArgs::_opcode
	uint8_t ____opcode_3;
	// System.Byte[] WebSocketSharp.MessageEventArgs::_rawData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____rawData_4;
};

// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7  : public NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC
{
	// System.String[] System.Collections.Specialized.NameValueCollection::_all
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____all_18;
	// System.String[] System.Collections.Specialized.NameValueCollection::_allKeys
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____allKeys_19;
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
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext
struct TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D  : public WebSocketContext_t210263DD230B87766F206EC3DDBC301B24F5748B
{
	// WebSocketSharp.Logger WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_log
	Logger_t53407739C86D76B1D27356B732E39367394F4ABA* ____log_0;
	// System.Collections.Specialized.NameValueCollection WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_queryString
	NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* ____queryString_1;
	// WebSocketSharp.HttpRequest WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_request
	HttpRequest_tC4EBD60896D30D3F354443F03AB29F7960C5F492* ____request_2;
	// System.Uri WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_requestUri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ____requestUri_3;
	// System.Boolean WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_secure
	bool ____secure_4;
	// System.Net.EndPoint WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_serverEndPoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ____serverEndPoint_5;
	// System.IO.Stream WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_6;
	// System.Net.Sockets.TcpClient WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_tcpClient
	TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* ____tcpClient_7;
	// System.Security.Principal.IPrincipal WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_user
	RuntimeObject* ____user_8;
	// System.Net.EndPoint WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_userEndPoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ____userEndPoint_9;
	// WebSocketSharp.WebSocket WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_websocket
	WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* ____websocket_10;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// Netcode.Transports.WebSocket.WebSocketPeer
struct WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA 
{
	// System.UInt64 Netcode.Transports.WebSocket.WebSocketPeer::ClientId
	uint64_t ___ClientId_0;
	// WebSocketSharp.Net.WebSockets.WebSocketContext Netcode.Transports.WebSocket.WebSocketPeer::Context
	WebSocketContext_t210263DD230B87766F206EC3DDBC301B24F5748B* ___Context_1;
};
// Native definition for P/Invoke marshalling of Netcode.Transports.WebSocket.WebSocketPeer
struct WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA_marshaled_pinvoke
{
	uint64_t ___ClientId_0;
	WebSocketContext_t210263DD230B87766F206EC3DDBC301B24F5748B* ___Context_1;
};
// Native definition for COM marshalling of Netcode.Transports.WebSocket.WebSocketPeer
struct WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA_marshaled_com
{
	uint64_t ___ClientId_0;
	WebSocketContext_t210263DD230B87766F206EC3DDBC301B24F5748B* ___Context_1;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5
struct __StaticArrayInitTypeSizeU3D5_tE4F2BA664447B2C906E6A66125CAD49C1924384B 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D5_tE4F2BA664447B2C906E6A66125CAD49C1924384B__padding[5];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t23597A0FA532AE18B1DCABF04777E5C1CB2E3266  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t23597A0FA532AE18B1DCABF04777E5C1CB2E3266_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5 <PrivateImplementationDetails>::933B971C6388D594A23FA1559825DB5BEC8ADE2DB1240AA8FC9D0C684949E8C9
	__StaticArrayInitTypeSizeU3D5_tE4F2BA664447B2C906E6A66125CAD49C1924384B ___933B971C6388D594A23FA1559825DB5BEC8ADE2DB1240AA8FC9D0C684949E8C9_0;
};

// System.Net.Security.AuthenticatedStream
struct AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.IO.Stream System.Net.Security.AuthenticatedStream::_InnerStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____InnerStream_5;
	// System.Boolean System.Net.Security.AuthenticatedStream::_LeaveStreamOpen
	bool ____LeaveStreamOpen_6;
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

// WebSocketSharp.Net.HttpListenerRequest
struct HttpListenerRequest_t89F42007013FD4C768C1630A02E475507C563575  : public RuntimeObject
{
	// System.String[] WebSocketSharp.Net.HttpListenerRequest::_acceptTypes
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____acceptTypes_1;
	// System.Boolean WebSocketSharp.Net.HttpListenerRequest::_chunked
	bool ____chunked_2;
	// WebSocketSharp.Net.HttpConnection WebSocketSharp.Net.HttpListenerRequest::_connection
	HttpConnection_tF70009B09FAD5A4B7492CCAAB79480EA70DD3EA9* ____connection_3;
	// System.Text.Encoding WebSocketSharp.Net.HttpListenerRequest::_contentEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____contentEncoding_4;
	// System.Int64 WebSocketSharp.Net.HttpListenerRequest::_contentLength
	int64_t ____contentLength_5;
	// WebSocketSharp.Net.HttpListenerContext WebSocketSharp.Net.HttpListenerRequest::_context
	HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* ____context_6;
	// WebSocketSharp.Net.CookieCollection WebSocketSharp.Net.HttpListenerRequest::_cookies
	CookieCollection_tF33A67A4729E8AB85409A8733A7AA4EEC807C6DF* ____cookies_7;
	// WebSocketSharp.Net.WebHeaderCollection WebSocketSharp.Net.HttpListenerRequest::_headers
	WebHeaderCollection_t87B66BA664497F19ED4925E70BEB6432ED0E250D* ____headers_8;
	// System.String WebSocketSharp.Net.HttpListenerRequest::_httpMethod
	String_t* ____httpMethod_9;
	// System.IO.Stream WebSocketSharp.Net.HttpListenerRequest::_inputStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____inputStream_10;
	// System.Version WebSocketSharp.Net.HttpListenerRequest::_protocolVersion
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ____protocolVersion_11;
	// System.Collections.Specialized.NameValueCollection WebSocketSharp.Net.HttpListenerRequest::_queryString
	NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* ____queryString_12;
	// System.String WebSocketSharp.Net.HttpListenerRequest::_rawUrl
	String_t* ____rawUrl_13;
	// System.Guid WebSocketSharp.Net.HttpListenerRequest::_requestTraceIdentifier
	Guid_t ____requestTraceIdentifier_14;
	// System.Uri WebSocketSharp.Net.HttpListenerRequest::_url
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ____url_15;
	// System.Uri WebSocketSharp.Net.HttpListenerRequest::_urlReferrer
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ____urlReferrer_16;
	// System.Boolean WebSocketSharp.Net.HttpListenerRequest::_urlSet
	bool ____urlSet_17;
	// System.String WebSocketSharp.Net.HttpListenerRequest::_userHostName
	String_t* ____userHostName_18;
	// System.String[] WebSocketSharp.Net.HttpListenerRequest::_userLanguages
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____userLanguages_19;
};

struct HttpListenerRequest_t89F42007013FD4C768C1630A02E475507C563575_StaticFields
{
	// System.Byte[] WebSocketSharp.Net.HttpListenerRequest::_100continue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____100continue_0;
};

// System.Net.Sockets.NetworkStream
struct NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Net.Sockets.Socket System.Net.Sockets.NetworkStream::_streamSocket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ____streamSocket_5;
	// System.Boolean System.Net.Sockets.NetworkStream::_ownsSocket
	bool ____ownsSocket_6;
	// System.Boolean System.Net.Sockets.NetworkStream::_readable
	bool ____readable_7;
	// System.Boolean System.Net.Sockets.NetworkStream::_writeable
	bool ____writeable_8;
	// System.Int32 System.Net.Sockets.NetworkStream::_closeTimeout
	int32_t ____closeTimeout_9;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.NetworkStream::_cleanedUp
	bool ____cleanedUp_10;
	// System.Int32 System.Net.Sockets.NetworkStream::_currentReadTimeout
	int32_t ____currentReadTimeout_11;
	// System.Int32 System.Net.Sockets.NetworkStream::_currentWriteTimeout
	int32_t ____currentWriteTimeout_12;
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

// WebSocketSharp.Net.QueryStringCollection
struct QueryStringCollection_tF304E01672FC558C1BAB0A634BC78CA51A8AEA11  : public NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7
{
};

// WebSocketSharp.Net.WebHeaderCollection
struct WebHeaderCollection_t87B66BA664497F19ED4925E70BEB6432ED0E250D  : public NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7
{
	// System.Boolean WebSocketSharp.Net.WebHeaderCollection::_internallyUsed
	bool ____internallyUsed_21;
	// WebSocketSharp.Net.HttpHeaderType WebSocketSharp.Net.WebHeaderCollection::_state
	int32_t ____state_22;
};

struct WebHeaderCollection_t87B66BA664497F19ED4925E70BEB6432ED0E250D_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,WebSocketSharp.Net.HttpHeaderInfo> WebSocketSharp.Net.WebHeaderCollection::_headers
	Dictionary_2_t4297A57BB6F4D23AA0088652355F29659843E148* ____headers_20;
};

// WebSocketSharp.WebSocket
struct WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171  : public RuntimeObject
{
	// WebSocketSharp.Net.AuthenticationChallenge WebSocketSharp.WebSocket::_authChallenge
	AuthenticationChallenge_tF056169477C958482677E5AA6F46CE3F55C1D14B* ____authChallenge_0;
	// System.String WebSocketSharp.WebSocket::_base64Key
	String_t* ____base64Key_1;
	// System.Boolean WebSocketSharp.WebSocket::_client
	bool ____client_2;
	// System.Action WebSocketSharp.WebSocket::_closeContext
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ____closeContext_3;
	// WebSocketSharp.CompressionMethod WebSocketSharp.WebSocket::_compression
	uint8_t ____compression_4;
	// WebSocketSharp.Net.WebSockets.WebSocketContext WebSocketSharp.WebSocket::_context
	WebSocketContext_t210263DD230B87766F206EC3DDBC301B24F5748B* ____context_5;
	// WebSocketSharp.Net.CookieCollection WebSocketSharp.WebSocket::_cookies
	CookieCollection_tF33A67A4729E8AB85409A8733A7AA4EEC807C6DF* ____cookies_6;
	// WebSocketSharp.Net.NetworkCredential WebSocketSharp.WebSocket::_credentials
	NetworkCredential_t934675975A72BE23BB92AEB9DD51A5A1D40F009A* ____credentials_7;
	// System.Boolean WebSocketSharp.WebSocket::_emitOnPing
	bool ____emitOnPing_8;
	// System.Boolean WebSocketSharp.WebSocket::_enableRedirection
	bool ____enableRedirection_9;
	// System.String WebSocketSharp.WebSocket::_extensions
	String_t* ____extensions_10;
	// System.Boolean WebSocketSharp.WebSocket::_extensionsRequested
	bool ____extensionsRequested_11;
	// System.Object WebSocketSharp.WebSocket::_forMessageEventQueue
	RuntimeObject* ____forMessageEventQueue_12;
	// System.Object WebSocketSharp.WebSocket::_forPing
	RuntimeObject* ____forPing_13;
	// System.Object WebSocketSharp.WebSocket::_forSend
	RuntimeObject* ____forSend_14;
	// System.Object WebSocketSharp.WebSocket::_forState
	RuntimeObject* ____forState_15;
	// System.IO.MemoryStream WebSocketSharp.WebSocket::_fragmentsBuffer
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ____fragmentsBuffer_16;
	// System.Boolean WebSocketSharp.WebSocket::_fragmentsCompressed
	bool ____fragmentsCompressed_17;
	// WebSocketSharp.Opcode WebSocketSharp.WebSocket::_fragmentsOpcode
	uint8_t ____fragmentsOpcode_18;
	// System.Func`2<WebSocketSharp.Net.WebSockets.WebSocketContext,System.String> WebSocketSharp.WebSocket::_handshakeRequestChecker
	Func_2_t13AA5DCA668C32DAF3B2F3CB4B04FF37A733EDAD* ____handshakeRequestChecker_20;
	// System.Boolean WebSocketSharp.WebSocket::_ignoreExtensions
	bool ____ignoreExtensions_21;
	// System.Boolean WebSocketSharp.WebSocket::_inContinuation
	bool ____inContinuation_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.WebSocket::_inMessage
	bool ____inMessage_23;
	// WebSocketSharp.Logger modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.WebSocket::_logger
	Logger_t53407739C86D76B1D27356B732E39367394F4ABA* ____logger_24;
	// System.Action`1<WebSocketSharp.MessageEventArgs> WebSocketSharp.WebSocket::_message
	Action_1_tE2FF6C6ED3193749757706C080667C24E501D39C* ____message_26;
	// System.Collections.Generic.Queue`1<WebSocketSharp.MessageEventArgs> WebSocketSharp.WebSocket::_messageEventQueue
	Queue_1_tFC8C660F9568E6712E865A77EE1C769F3A1AA278* ____messageEventQueue_27;
	// System.UInt32 WebSocketSharp.WebSocket::_nonceCount
	uint32_t ____nonceCount_28;
	// System.String WebSocketSharp.WebSocket::_origin
	String_t* ____origin_29;
	// System.Threading.ManualResetEvent WebSocketSharp.WebSocket::_pongReceived
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ____pongReceived_30;
	// System.Boolean WebSocketSharp.WebSocket::_preAuth
	bool ____preAuth_31;
	// System.String WebSocketSharp.WebSocket::_protocol
	String_t* ____protocol_32;
	// System.String[] WebSocketSharp.WebSocket::_protocols
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____protocols_33;
	// System.Boolean WebSocketSharp.WebSocket::_protocolsRequested
	bool ____protocolsRequested_34;
	// WebSocketSharp.Net.NetworkCredential WebSocketSharp.WebSocket::_proxyCredentials
	NetworkCredential_t934675975A72BE23BB92AEB9DD51A5A1D40F009A* ____proxyCredentials_35;
	// System.Uri WebSocketSharp.WebSocket::_proxyUri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ____proxyUri_36;
	// WebSocketSharp.WebSocketState modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.WebSocket::_readyState
	uint16_t ____readyState_37;
	// System.Threading.ManualResetEvent WebSocketSharp.WebSocket::_receivingExited
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ____receivingExited_38;
	// System.Int32 WebSocketSharp.WebSocket::_retryCountForConnect
	int32_t ____retryCountForConnect_39;
	// System.Boolean WebSocketSharp.WebSocket::_secure
	bool ____secure_40;
	// WebSocketSharp.Net.ClientSslConfiguration WebSocketSharp.WebSocket::_sslConfig
	ClientSslConfiguration_t6AE5E3778E738BEA41CA6B372384790EF6454DB7* ____sslConfig_41;
	// System.IO.Stream WebSocketSharp.WebSocket::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_42;
	// System.Net.Sockets.TcpClient WebSocketSharp.WebSocket::_tcpClient
	TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* ____tcpClient_43;
	// System.Uri WebSocketSharp.WebSocket::_uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ____uri_44;
	// System.TimeSpan WebSocketSharp.WebSocket::_waitTime
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ____waitTime_46;
	// System.EventHandler`1<WebSocketSharp.CloseEventArgs> WebSocketSharp.WebSocket::OnClose
	EventHandler_1_tE64C66477C8D3A58B6645C9F015B5AD78E47C08B* ___OnClose_50;
	// System.EventHandler`1<WebSocketSharp.ErrorEventArgs> WebSocketSharp.WebSocket::OnError
	EventHandler_1_t26C98047352625FB580C2AB0368052211F6CC24E* ___OnError_51;
	// System.EventHandler`1<WebSocketSharp.MessageEventArgs> WebSocketSharp.WebSocket::OnMessage
	EventHandler_1_t83FB68A622E9BE4A5F2DE4B25A49199E64387714* ___OnMessage_52;
	// System.EventHandler WebSocketSharp.WebSocket::OnOpen
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnOpen_53;
};

struct WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171_StaticFields
{
	// System.Int32 WebSocketSharp.WebSocket::_maxRetryCountForConnect
	int32_t ____maxRetryCountForConnect_25;
	// System.Byte[] WebSocketSharp.WebSocket::EmptyBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___EmptyBytes_47;
	// System.Int32 WebSocketSharp.WebSocket::FragmentLength
	int32_t ___FragmentLength_48;
	// System.Security.Cryptography.RandomNumberGenerator WebSocketSharp.WebSocket::RandomNumber
	RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* ___RandomNumber_49;
};

// WebSocketSharp.Server.WebSocketBehavior
struct WebSocketBehavior_tE591886B40BB216DD21122093C87124CB0B74037  : public RuntimeObject
{
	// WebSocketSharp.Net.WebSockets.WebSocketContext WebSocketSharp.Server.WebSocketBehavior::_context
	WebSocketContext_t210263DD230B87766F206EC3DDBC301B24F5748B* ____context_0;
	// System.Func`3<WebSocketSharp.Net.CookieCollection,WebSocketSharp.Net.CookieCollection,System.Boolean> WebSocketSharp.Server.WebSocketBehavior::_cookiesValidator
	Func_3_t180FD037A407451DF6306B7D15FF0340E987A3DF* ____cookiesValidator_1;
	// System.Boolean WebSocketSharp.Server.WebSocketBehavior::_emitOnPing
	bool ____emitOnPing_2;
	// System.String WebSocketSharp.Server.WebSocketBehavior::_id
	String_t* ____id_3;
	// System.Boolean WebSocketSharp.Server.WebSocketBehavior::_ignoreExtensions
	bool ____ignoreExtensions_4;
	// System.Func`2<System.String,System.Boolean> WebSocketSharp.Server.WebSocketBehavior::_originValidator
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ____originValidator_5;
	// System.String WebSocketSharp.Server.WebSocketBehavior::_protocol
	String_t* ____protocol_6;
	// WebSocketSharp.Server.WebSocketSessionManager WebSocketSharp.Server.WebSocketBehavior::_sessions
	WebSocketSessionManager_tBE2E611408F6189250BBDC259D9CC47DE85DEB1B* ____sessions_7;
	// System.DateTime WebSocketSharp.Server.WebSocketBehavior::_startTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____startTime_8;
	// WebSocketSharp.WebSocket WebSocketSharp.Server.WebSocketBehavior::_websocket
	WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* ____websocket_9;
};

// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4  : public RuntimeObject
{
	// System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509Certificate::impl
	X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* ___impl_0;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyCertHash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyCertHash_1;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazySerialNumber
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazySerialNumber_2;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyIssuer
	String_t* ___lazyIssuer_3;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazySubject
	String_t* ___lazySubject_4;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyKeyAlgorithm
	String_t* ___lazyKeyAlgorithm_5;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyKeyAlgorithmParameters
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyKeyAlgorithmParameters_6;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyPublicKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyPublicKey_7;
	// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate::lazyNotBefore
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lazyNotBefore_8;
	// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate::lazyNotAfter
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lazyNotAfter_9;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.Net.Security.SslStream
struct SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27  : public AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39
{
	// Mono.Net.Security.MobileTlsProvider System.Net.Security.SslStream::provider
	MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017* ___provider_7;
	// Mono.Security.Interface.MonoTlsSettings System.Net.Security.SslStream::settings
	MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* ___settings_8;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.Security.SslStream::validationCallback
	RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* ___validationCallback_9;
	// System.Net.Security.LocalCertificateSelectionCallback System.Net.Security.SslStream::selectionCallback
	LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* ___selectionCallback_10;
	// Mono.Net.Security.MobileAuthenticatedStream System.Net.Security.SslStream::impl
	MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* ___impl_11;
	// System.Boolean System.Net.Security.SslStream::explicitSettings
	bool ___explicitSettings_12;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// Netcode.Transports.WebSocket.WebSocketException
struct WebSocketException_tB3A36C56AA2ACFE8E6E58AC75DB700A08B940A3C  : public Exception_t
{
};

// Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior
struct WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122  : public WebSocketBehavior_tE591886B40BB216DD21122093C87124CB0B74037
{
	// System.Net.IPEndPoint Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior::<Endpoint>k__BackingField
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___U3CEndpointU3Ek__BackingField_15;
	// WebSocketSharp.WebSocket Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior::<Socket>k__BackingField
	WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* ___U3CSocketU3Ek__BackingField_16;
	// System.UInt64 Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior::<ClientId>k__BackingField
	uint64_t ___U3CClientIdU3Ek__BackingField_17;
};

struct WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.UInt64,Netcode.Transports.WebSocket.WebSocketPeer> Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior::Clients
	Dictionary_2_t25C2B1256DA6CA53630FF1ABF2AABF3208E9DA55* ___Clients_10;
	// System.Object Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior::ConnectionLock
	RuntimeObject* ___ConnectionLock_11;
	// System.UInt64 Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior::ClientIdCounter
	uint64_t ___ClientIdCounter_12;
	// System.Collections.Generic.Queue`1<System.UInt64> Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior::ReleasedClientIds
	Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* ___ReleasedClientIds_13;
	// System.Collections.Generic.Queue`1<Netcode.Transports.WebSocket.WebSocketEvent> Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior::EventQueue
	Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10* ___EventQueue_14;
};

// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D  : public X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4
{
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazyRawData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyRawData_11;
	// System.Security.Cryptography.Oid modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazySignatureAlgorithm
	Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* ___lazySignatureAlgorithm_12;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazyVersion
	int32_t ___lazyVersion_13;
	// System.Security.Cryptography.X509Certificates.X500DistinguishedName modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazySubjectName
	X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6* ___lazySubjectName_14;
	// System.Security.Cryptography.X509Certificates.X500DistinguishedName modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazyIssuerName
	X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6* ___lazyIssuerName_15;
	// System.Security.Cryptography.X509Certificates.PublicKey modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazyPublicKey
	PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* ___lazyPublicKey_16;
	// System.Security.Cryptography.AsymmetricAlgorithm modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazyPrivateKey
	AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* ___lazyPrivateKey_17;
	// System.Security.Cryptography.X509Certificates.X509ExtensionCollection modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazyExtensions
	X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0* ___lazyExtensions_18;
};

// System.EventHandler`1<WebSocketSharp.CloseEventArgs>
struct EventHandler_1_tE64C66477C8D3A58B6645C9F015B5AD78E47C08B  : public MulticastDelegate_t
{
};

// System.EventHandler`1<WebSocketSharp.ErrorEventArgs>
struct EventHandler_1_t26C98047352625FB580C2AB0368052211F6CC24E  : public MulticastDelegate_t
{
};

// System.EventHandler`1<WebSocketSharp.MessageEventArgs>
struct EventHandler_1_t83FB68A622E9BE4A5F2DE4B25A49199E64387714  : public MulticastDelegate_t
{
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential>
struct Func_2_t15D1CC9486E434EBA5D287D539335A1D72420090  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82  : public MulticastDelegate_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Unity.Netcode.NetworkManager
struct NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Unity.Netcode.NetworkBehaviourUpdater Unity.Netcode.NetworkManager::<BehaviourUpdater>k__BackingField
	NetworkBehaviourUpdater_t215DD428092983D5AECE1BF5BA0576E5070F987C* ___U3CBehaviourUpdaterU3Ek__BackingField_7;
	// Unity.Netcode.MessagingSystem Unity.Netcode.NetworkManager::<MessagingSystem>k__BackingField
	MessagingSystem_tE5E070D8EDEED13D4D0C9D518961289FB3EE1C5D* ___U3CMessagingSystemU3Ek__BackingField_8;
	// Unity.Netcode.NetworkPrefabHandler Unity.Netcode.NetworkManager::m_PrefabHandler
	NetworkPrefabHandler_tDAE80C95FD27B1749A8657944402C831679B0AAE* ___m_PrefabHandler_9;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.NetworkManager/ConnectionApprovalResponse> Unity.Netcode.NetworkManager::ClientsToApprove
	Dictionary_2_t647F7F7CA786348F8808D433385C1B2D157E852A* ___ClientsToApprove_10;
	// System.Boolean Unity.Netcode.NetworkManager::m_ShuttingDown
	bool ___m_ShuttingDown_11;
	// System.Boolean Unity.Netcode.NetworkManager::m_StopProcessingMessages
	bool ___m_StopProcessingMessages_12;
	// Unity.Netcode.NetworkTimeSystem Unity.Netcode.NetworkManager::<NetworkTimeSystem>k__BackingField
	NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* ___U3CNetworkTimeSystemU3Ek__BackingField_13;
	// Unity.Netcode.NetworkTickSystem Unity.Netcode.NetworkManager::<NetworkTickSystem>k__BackingField
	NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A* ___U3CNetworkTickSystemU3Ek__BackingField_14;
	// System.Boolean Unity.Netcode.NetworkManager::RunInBackground
	bool ___RunInBackground_15;
	// Unity.Netcode.LogLevel Unity.Netcode.NetworkManager::LogLevel
	int32_t ___LogLevel_16;
	// Unity.Netcode.NetworkSpawnManager Unity.Netcode.NetworkManager::<SpawnManager>k__BackingField
	NetworkSpawnManager_t3C69A0FCA3E0961ED401C35188393E80BF22294D* ___U3CSpawnManagerU3Ek__BackingField_18;
	// Unity.Netcode.IDeferredMessageManager Unity.Netcode.NetworkManager::<DeferredMessageManager>k__BackingField
	RuntimeObject* ___U3CDeferredMessageManagerU3Ek__BackingField_19;
	// Unity.Netcode.CustomMessagingManager Unity.Netcode.NetworkManager::<CustomMessagingManager>k__BackingField
	CustomMessagingManager_t713DDF9DC30FAF5178913295556DD07C946A9746* ___U3CCustomMessagingManagerU3Ek__BackingField_20;
	// Unity.Netcode.NetworkSceneManager Unity.Netcode.NetworkManager::<SceneManager>k__BackingField
	NetworkSceneManager_tC93DADE5972B29C0860CC236D9E11A74953C65BC* ___U3CSceneManagerU3Ek__BackingField_21;
	// System.UInt64 Unity.Netcode.NetworkManager::m_LocalClientId
	uint64_t ___m_LocalClientId_23;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.NetworkClient> Unity.Netcode.NetworkManager::m_ConnectedClients
	Dictionary_2_t04CE97C57D2E25D600E03BF7F53BDCDDAC05C9DF* ___m_ConnectedClients_24;
	// System.UInt64 Unity.Netcode.NetworkManager::m_NextClientId
	uint64_t ___m_NextClientId_25;
	// System.Collections.Generic.Dictionary`2<System.UInt64,System.UInt64> Unity.Netcode.NetworkManager::m_ClientIdToTransportIdMap
	Dictionary_2_tE1184E8D53864B83C43E4E0E93F8388CEE760D42* ___m_ClientIdToTransportIdMap_26;
	// System.Collections.Generic.Dictionary`2<System.UInt64,System.UInt64> Unity.Netcode.NetworkManager::m_TransportIdToClientIdMap
	Dictionary_2_tE1184E8D53864B83C43E4E0E93F8388CEE760D42* ___m_TransportIdToClientIdMap_27;
	// System.Collections.Generic.List`1<Unity.Netcode.NetworkClient> Unity.Netcode.NetworkManager::m_ConnectedClientsList
	List_1_t57C6C818F7D91A7154A4799FE6DEFD3ACD6F39A5* ___m_ConnectedClientsList_28;
	// System.Collections.Generic.List`1<System.UInt64> Unity.Netcode.NetworkManager::m_ConnectedClientIds
	List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* ___m_ConnectedClientIds_29;
	// Unity.Netcode.NetworkClient Unity.Netcode.NetworkManager::<LocalClient>k__BackingField
	NetworkClient_t4EB5B562D3C8D21DDD5749455CE80E5B12571F64* ___U3CLocalClientU3Ek__BackingField_30;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.PendingClient> Unity.Netcode.NetworkManager::PendingClients
	Dictionary_2_tD7776C25E1F5D1B8408431CA83EAAFFE3C4C9684* ___PendingClients_31;
	// System.Boolean Unity.Netcode.NetworkManager::<IsServer>k__BackingField
	bool ___U3CIsServerU3Ek__BackingField_32;
	// System.Boolean Unity.Netcode.NetworkManager::<IsClient>k__BackingField
	bool ___U3CIsClientU3Ek__BackingField_33;
	// System.Boolean Unity.Netcode.NetworkManager::<IsListening>k__BackingField
	bool ___U3CIsListeningU3Ek__BackingField_34;
	// System.Boolean Unity.Netcode.NetworkManager::<IsConnectedClient>k__BackingField
	bool ___U3CIsConnectedClientU3Ek__BackingField_35;
	// System.Action`1<System.UInt64> Unity.Netcode.NetworkManager::OnClientConnectedCallback
	Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C* ___OnClientConnectedCallback_36;
	// System.Action`1<System.UInt64> Unity.Netcode.NetworkManager::OnClientDisconnectCallback
	Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C* ___OnClientDisconnectCallback_37;
	// System.Action Unity.Netcode.NetworkManager::OnServerStarted
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnServerStarted_38;
	// System.Action Unity.Netcode.NetworkManager::OnTransportFailure
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnTransportFailure_39;
	// System.Action`2<Unity.Netcode.NetworkManager/ConnectionApprovalRequest,Unity.Netcode.NetworkManager/ConnectionApprovalResponse> Unity.Netcode.NetworkManager::m_ConnectionApprovalCallback
	Action_2_t5E7B4E17493B71D65B87865FA28E6CCE1C2ED68B* ___m_ConnectionApprovalCallback_40;
	// Unity.Netcode.NetworkConfig Unity.Netcode.NetworkManager::NetworkConfig
	NetworkConfig_tBDA76D459879B7025939BE0E2AF6D82B4A925113* ___NetworkConfig_41;
	// System.String Unity.Netcode.NetworkManager::<ConnectedHostname>k__BackingField
	String_t* ___U3CConnectedHostnameU3Ek__BackingField_42;
	// Unity.Netcode.INetworkMetrics Unity.Netcode.NetworkManager::<NetworkMetrics>k__BackingField
	RuntimeObject* ___U3CNetworkMetricsU3Ek__BackingField_43;
};

struct NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler> Unity.Netcode.NetworkManager::__rpc_func_table
	Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD* _____rpc_func_table_4;
	// Unity.Netcode.NetworkManager Unity.Netcode.NetworkManager::<Singleton>k__BackingField
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* ___U3CSingletonU3Ek__BackingField_17;
	// System.Action Unity.Netcode.NetworkManager::OnSingletonReady
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnSingletonReady_44;
};

// Unity.Netcode.NetworkTransport
struct NetworkTransport_t55E07951299283974C86476F46CC977780560B64  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Unity.Netcode.INetworkMetrics Unity.Netcode.NetworkTransport::NetworkMetrics
	RuntimeObject* ___NetworkMetrics_4;
	// Unity.Netcode.NetworkTransport/TransportEventDelegate Unity.Netcode.NetworkTransport::OnTransportEvent
	TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* ___OnTransportEvent_5;
};

// Netcode.Transports.WebSocket.WebSocketTransport
struct WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35  : public NetworkTransport_t55E07951299283974C86476F46CC977780560B64
{
	// System.String Netcode.Transports.WebSocket.WebSocketTransport::ConnectAddress
	String_t* ___ConnectAddress_9;
	// System.UInt16 Netcode.Transports.WebSocket.WebSocketTransport::Port
	uint16_t ___Port_10;
	// System.Boolean Netcode.Transports.WebSocket.WebSocketTransport::SecureConnection
	bool ___SecureConnection_11;
};

struct WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_StaticFields
{
	// WebSocketSharp.Server.WebSocketServer Netcode.Transports.WebSocket.WebSocketTransport::WebSocketServer
	WebSocketServer_t100358D00BE6A025323C3449FF95E300DCED1A71* ___WebSocketServer_6;
	// Netcode.Transports.WebSocket.IWebSocketClient Netcode.Transports.WebSocket.WebSocketTransport::WebSocketClient
	RuntimeObject* ___WebSocketClient_7;
	// System.Boolean Netcode.Transports.WebSocket.WebSocketTransport::IsStarted
	bool ___IsStarted_8;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Boolean>::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_gshared_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// T[] System.ArraySegment`1<System.Byte>::get_Array()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.UInt64>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mF408F7F539EA2D8DF7E25FF32A7DB433FFB9F67A_gshared_inline (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.UInt64>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Queue_1_Dequeue_m61058CB40F8E38F73E03279A288A436B288946DB_gshared (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.UInt64>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m1730DB68850554D215EBC943E35FEF5A7BF18CF1_gshared (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* __this, uint64_t ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,Netcode.Transports.WebSocket.WebSocketPeer>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mFA2958260FA323A32289C3365F90DD5017E5E810_gshared (Dictionary_2_t25C2B1256DA6CA53630FF1ABF2AABF3208E9DA55* __this, uint64_t ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,Netcode.Transports.WebSocket.WebSocketPeer>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA Dictionary_2_get_Item_m49F06D8B0A22AD4DBCCCBC6936A4A1B7BDBE57CA_gshared (Dictionary_2_t25C2B1256DA6CA53630FF1ABF2AABF3208E9DA55* __this, uint64_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,Netcode.Transports.WebSocket.WebSocketPeer>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m8F64CE276AD814D28C39A8711B646AE4A9283743_gshared (Dictionary_2_t25C2B1256DA6CA53630FF1ABF2AABF3208E9DA55* __this, uint64_t ___key0, WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,Netcode.Transports.WebSocket.WebSocketPeer>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m1B934ECCB68BBDB4E20FC582AF4D3370980D6435_gshared (Dictionary_2_t25C2B1256DA6CA53630FF1ABF2AABF3208E9DA55* __this, uint64_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,Netcode.Transports.WebSocket.WebSocketPeer>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mFA6CBB79B6B226357DDAA4938F7CD33DE4526557_gshared (Dictionary_2_t25C2B1256DA6CA53630FF1ABF2AABF3208E9DA55* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.UInt64>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mA15F3464308E1DD267ED3B9BB7D8849D2CA73F74_gshared (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* __this, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<System.Byte>::.ctor(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_gshared (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) ;
// System.Void WebSocketSharp.Server.WebSocketServer::AddWebSocketService<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketServer_AddWebSocketService_TisRuntimeObject_mAFC953AE701DBA56AA686467B3DE20710082CB55_gshared (WebSocketServer_t100358D00BE6A025323C3449FF95E300DCED1A71* __this, String_t* ___path0, const RuntimeMethod* method) ;

// System.Void WebSocketSharp.Net.WebSockets.WebSocketContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketContext__ctor_m8E95F5823E493B474C8F9E24A73E7C6564CFA83C (WebSocketContext_t210263DD230B87766F206EC3DDBC301B24F5748B* __this, const RuntimeMethod* method) ;
// System.Void WebSocketSharp.WebSocket::.ctor(WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_mC305F62EF919C35A670661896555627A8905877F (WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* __this, HttpListenerWebSocketContext_tAD3851F58DB3C094958D121685C3E85FA99FEA83* ___context0, String_t* ___protocol1, const RuntimeMethod* method) ;
// WebSocketSharp.Net.HttpListener WebSocketSharp.Net.HttpListenerContext::get_Listener()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpListener_tFAA6A3F0382BEBACA28631D4E831D334006DA1F9* HttpListenerContext_get_Listener_m6103F00159F143FF4E81916748EF8861DB2F7C0E_inline (HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* __this, const RuntimeMethod* method) ;
// WebSocketSharp.Logger WebSocketSharp.Net.HttpListener::get_Log()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Logger_t53407739C86D76B1D27356B732E39367394F4ABA* HttpListener_get_Log_mC2F80F8DF4C5B4B5A781D8F3C31548153DC75EFD_inline (HttpListener_tFAA6A3F0382BEBACA28631D4E831D334006DA1F9* __this, const RuntimeMethod* method) ;
// WebSocketSharp.Net.HttpConnection WebSocketSharp.Net.HttpListenerContext::get_Connection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpConnection_tF70009B09FAD5A4B7492CCAAB79480EA70DD3EA9* HttpListenerContext_get_Connection_m22D9CB4FE622EF43F02DEE0C9691874661216B2B_inline (HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* __this, const RuntimeMethod* method) ;
// System.IO.Stream WebSocketSharp.Net.HttpConnection::get_Stream()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* HttpConnection_get_Stream_m26609E51E336816BE4F76AF531709258F4FC5142_inline (HttpConnection_tF70009B09FAD5A4B7492CCAAB79480EA70DD3EA9* __this, const RuntimeMethod* method) ;
// WebSocketSharp.Net.HttpListenerRequest WebSocketSharp.Net.HttpListenerContext::get_Request()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpListenerRequest_t89F42007013FD4C768C1630A02E475507C563575* HttpListenerContext_get_Request_mB8E8B02F17D9175290AF08EC514CEC4A96B599D1_inline (HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* __this, const RuntimeMethod* method) ;
// WebSocketSharp.Net.CookieCollection WebSocketSharp.Net.HttpListenerRequest::get_Cookies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CookieCollection_tF33A67A4729E8AB85409A8733A7AA4EEC807C6DF* HttpListenerRequest_get_Cookies_mBC736ED3FF1EB4F963F89C2DE17122AC7D178261 (HttpListenerRequest_t89F42007013FD4C768C1630A02E475507C563575* __this, const RuntimeMethod* method) ;
// System.Collections.Specialized.NameValueCollection WebSocketSharp.Net.HttpListenerRequest::get_Headers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* HttpListenerRequest_get_Headers_mD573F0D8618E54DA7F458736F95512354AC7FF42_inline (HttpListenerRequest_t89F42007013FD4C768C1630A02E475507C563575* __this, const RuntimeMethod* method) ;
// System.String WebSocketSharp.Net.HttpListenerRequest::get_UserHostName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* HttpListenerRequest_get_UserHostName_mA090FB0737FB6B88D6E5AD1199105125253E9584_inline (HttpListenerRequest_t89F42007013FD4C768C1630A02E475507C563575* __this, const RuntimeMethod* method) ;
// System.Boolean WebSocketSharp.Net.HttpListenerRequest::get_IsAuthenticated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HttpListenerRequest_get_IsAuthenticated_m0FCE7376378398226DB2C192606DAB7F21B07860 (HttpListenerRequest_t89F42007013FD4C768C1630A02E475507C563575* __this, const RuntimeMethod* method) ;
// System.Boolean WebSocketSharp.Net.HttpListenerRequest::get_IsLocal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HttpListenerRequest_get_IsLocal_m3B9A872908C437F7FF84A38F815E2B76954AA626 (HttpListenerRequest_t89F42007013FD4C768C1630A02E475507C563575* __this, const RuntimeMethod* method) ;
// System.Boolean WebSocketSharp.Net.HttpListenerRequest::get_IsSecureConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HttpListenerRequest_get_IsSecureConnection_m9778F050D46BFC85270F25ACEE44CBA448FBBA75 (HttpListenerRequest_t89F42007013FD4C768C1630A02E475507C563575* __this, const RuntimeMethod* method) ;
// System.Boolean WebSocketSharp.Net.HttpListenerRequest::get_IsWebSocketRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HttpListenerRequest_get_IsWebSocketRequest_m696FB3B68EC01923CCBB7B105B4950A6516C77B4 (HttpListenerRequest_t89F42007013FD4C768C1630A02E475507C563575* __this, const RuntimeMethod* method) ;
// System.String System.Collections.Specialized.NameValueCollection::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NameValueCollection_get_Item_mE3ED755803E67BC852123C70EEF8D53774FA635F (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Collections.Specialized.NameValueCollection WebSocketSharp.Net.HttpListenerRequest::get_QueryString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* HttpListenerRequest_get_QueryString_m54A9DE93B685874AD45CDB18A25D826C6A832479 (HttpListenerRequest_t89F42007013FD4C768C1630A02E475507C563575* __this, const RuntimeMethod* method) ;
// System.Uri WebSocketSharp.Net.HttpListenerRequest::get_Url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* HttpListenerRequest_get_Url_m5E260649EAEAF67574E8589601C6184BF854539E (HttpListenerRequest_t89F42007013FD4C768C1630A02E475507C563575* __this, const RuntimeMethod* method) ;
// System.Void WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext/<get_SecWebSocketProtocols>d__30::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_SecWebSocketProtocolsU3Ed__30__ctor_m921068103CD18F3BBF5C221708929ADEA980CF6F (U3Cget_SecWebSocketProtocolsU3Ed__30_t577F379C68DABB00612A02095F8455251051506F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Net.IPEndPoint WebSocketSharp.Net.HttpListenerRequest::get_LocalEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* HttpListenerRequest_get_LocalEndPoint_mA8D9E064B387CA473F62DD82322A9C3C910A4994 (HttpListenerRequest_t89F42007013FD4C768C1630A02E475507C563575* __this, const RuntimeMethod* method) ;
// System.Security.Principal.IPrincipal WebSocketSharp.Net.HttpListenerContext::get_User()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HttpListenerContext_get_User_m6F46F002CC8FF9ED085E5273F095F7E634958A4E_inline (HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* __this, const RuntimeMethod* method) ;
// System.Net.IPEndPoint WebSocketSharp.Net.HttpListenerRequest::get_RemoteEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* HttpListenerRequest_get_RemoteEndPoint_m5A870494C753F95FCA588F368EC5D46469AFF17C (HttpListenerRequest_t89F42007013FD4C768C1630A02E475507C563575* __this, const RuntimeMethod* method) ;
// System.Void WebSocketSharp.Net.HttpConnection::Close(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpConnection_Close_mD8033745E36D64F101B6CAA6A87822BC49398307 (HttpConnection_tF70009B09FAD5A4B7492CCAAB79480EA70DD3EA9* __this, bool ___force0, const RuntimeMethod* method) ;
// WebSocketSharp.Net.HttpListenerResponse WebSocketSharp.Net.HttpListenerContext::get_Response()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpListenerResponse_t67D6387C1CCEE533F721B27C7ECFCD4E231DB3A0* HttpListenerContext_get_Response_m7BB1B78E06381A2315E8034E4644460610ABBDA2_inline (HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* __this, const RuntimeMethod* method) ;
// System.Void WebSocketSharp.Net.HttpListenerResponse::set_StatusCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpListenerResponse_set_StatusCode_mB9DC5083E381A534D002DCFFEFF0E3FD08C02592 (HttpListenerResponse_t67D6387C1CCEE533F721B27C7ECFCD4E231DB3A0* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void WebSocketSharp.Net.HttpListenerResponse::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpListenerResponse_Close_m98BB67E05619285EDE1E9E8A0E785BB237A13202 (HttpListenerResponse_t67D6387C1CCEE533F721B27C7ECFCD4E231DB3A0* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF (const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.String> WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext/<get_SecWebSocketProtocols>d__30::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_SecWebSocketProtocolsU3Ed__30_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m77117CA74E94CC549054FFB435EF4BC2E9BC5482 (U3Cget_SecWebSocketProtocolsU3Ed__30_t577F379C68DABB00612A02095F8455251051506F* __this, const RuntimeMethod* method) ;
// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::GetStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* TcpClient_GetStream_mDD54336B17D1267BD593E0A1EB9EDF3E9506AEBA (TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* __this, const RuntimeMethod* method) ;
// System.Net.Security.RemoteCertificateValidationCallback WebSocketSharp.Net.ServerSslConfiguration::get_ClientCertificateValidationCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* ServerSslConfiguration_get_ClientCertificateValidationCallback_m273AA1A90A349431550BCA9C68414FEE7F62E549 (ServerSslConfiguration_tFE7CD988C3426FA1F6D02567C24D49FCD8DB6A42* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Security.SslStream::.ctor(System.IO.Stream,System.Boolean,System.Net.Security.RemoteCertificateValidationCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream__ctor_m9096E6E85E60C4D205A26FA43D121FECEC735484 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___innerStream0, bool ___leaveInnerStreamOpen1, RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* ___userCertificateValidationCallback2, const RuntimeMethod* method) ;
// System.Security.Cryptography.X509Certificates.X509Certificate2 WebSocketSharp.Net.ServerSslConfiguration::get_ServerCertificate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* ServerSslConfiguration_get_ServerCertificate_mF4275E3B95B3DC27216793F9E8C09793EE5F94D3_inline (ServerSslConfiguration_tFE7CD988C3426FA1F6D02567C24D49FCD8DB6A42* __this, const RuntimeMethod* method) ;
// System.Boolean WebSocketSharp.Net.ServerSslConfiguration::get_ClientCertificateRequired()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ServerSslConfiguration_get_ClientCertificateRequired_mC424E87917DB3A35FB1179DC9C35FB530AFC4CBB_inline (ServerSslConfiguration_tFE7CD988C3426FA1F6D02567C24D49FCD8DB6A42* __this, const RuntimeMethod* method) ;
// System.Security.Authentication.SslProtocols WebSocketSharp.Net.ServerSslConfiguration::get_EnabledSslProtocols()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ServerSslConfiguration_get_EnabledSslProtocols_m211F1231991B91763419260775DDCE3A3F876D56_inline (ServerSslConfiguration_tFE7CD988C3426FA1F6D02567C24D49FCD8DB6A42* __this, const RuntimeMethod* method) ;
// System.Boolean WebSocketSharp.Net.ServerSslConfiguration::get_CheckCertificateRevocation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ServerSslConfiguration_get_CheckCertificateRevocation_m61D703CA95D406C0C2A44AE1405487908861B57F_inline (ServerSslConfiguration_tFE7CD988C3426FA1F6D02567C24D49FCD8DB6A42* __this, const RuntimeMethod* method) ;
// System.Net.Sockets.Socket System.Net.Sockets.TcpClient::get_Client()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* TcpClient_get_Client_m38B7DCD73EB42C6BBE6340B5E4C0A8432C1140C0_inline (TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* __this, const RuntimeMethod* method) ;
// System.Net.EndPoint System.Net.Sockets.Socket::get_LocalEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* Socket_get_LocalEndPoint_m3A2B4E60F0096E2DB31F7C28EF3CDE148D256E26 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) ;
// System.Net.EndPoint System.Net.Sockets.Socket::get_RemoteEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* Socket_get_RemoteEndPoint_m6A626481D55A640C7654B91BFDE00199C2C95479 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) ;
// WebSocketSharp.HttpRequest WebSocketSharp.HttpRequest::Read(System.IO.Stream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tC4EBD60896D30D3F354443F03AB29F7960C5F492* HttpRequest_Read_mA128419FCCDDAC96F6CEE541A7A75B3B57F2CA31 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___millisecondsTimeout1, const RuntimeMethod* method) ;
// System.Void WebSocketSharp.WebSocket::.ctor(WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_mE04E7ABBD27C86191A8BBE505F6D75B1DC710D83 (WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* __this, TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* ___context0, String_t* ___protocol1, const RuntimeMethod* method) ;
// WebSocketSharp.Net.CookieCollection WebSocketSharp.HttpRequest::get_Cookies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CookieCollection_tF33A67A4729E8AB85409A8733A7AA4EEC807C6DF* HttpRequest_get_Cookies_m642B7144A85351A2FF344FFE459A37FDCDA10852 (HttpRequest_tC4EBD60896D30D3F354443F03AB29F7960C5F492* __this, const RuntimeMethod* method) ;
// System.Collections.Specialized.NameValueCollection WebSocketSharp.HttpBase::get_Headers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* HttpBase_get_Headers_m04F30F8C39D5F5089590FEA1FFAB420481912E7C_inline (HttpBase_t23596200D738BFD45A1801CF7AB265233611E96A* __this, const RuntimeMethod* method) ;
// System.Net.IPAddress System.Net.IPEndPoint::get_Address()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, const RuntimeMethod* method) ;
// System.Boolean WebSocketSharp.Ext::IsLocal(System.Net.IPAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ext_IsLocal_m82AE10F6C2025F938DE1813F58352FB456A95F4C (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___address0, const RuntimeMethod* method) ;
// System.Boolean WebSocketSharp.HttpRequest::get_IsWebSocketRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HttpRequest_get_IsWebSocketRequest_mF9E6116BFBC1407F112E022361B2DF8590CB0636 (HttpRequest_tC4EBD60896D30D3F354443F03AB29F7960C5F492* __this, const RuntimeMethod* method) ;
// System.Boolean System.Uri::op_Inequality(System.Uri,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_op_Inequality_m64BE981CDF88B751677B80D883B201BF3CFD83F7 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri10, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri21, const RuntimeMethod* method) ;
// System.String System.Uri::get_Query()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_Query_m17DEC663263C486C8C8177AF9C4BFE2FFBE51178 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// WebSocketSharp.Net.QueryStringCollection WebSocketSharp.Net.QueryStringCollection::Parse(System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QueryStringCollection_tF304E01672FC558C1BAB0A634BC78CA51A8AEA11* QueryStringCollection_Parse_m8E5EC081BB64307A1C28F31CC3C67E1A9FE5E374 (String_t* ___query0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, const RuntimeMethod* method) ;
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_op_Equality_mD7D7AAB7023C0873B37D8B8C7195BEF34002A194 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri10, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri21, const RuntimeMethod* method) ;
// System.String WebSocketSharp.HttpRequest::get_RequestUri()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* HttpRequest_get_RequestUri_m581094A6BE87E41522283E47D5E8DF29124CEECE_inline (HttpRequest_tC4EBD60896D30D3F354443F03AB29F7960C5F492* __this, const RuntimeMethod* method) ;
// System.Uri WebSocketSharp.Net.HttpUtility::CreateRequestUrl(System.String,System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* HttpUtility_CreateRequestUrl_mDC4FF439D1ED37859BD45F0D71ED08E0AC7E48EA (String_t* ___requestUri0, String_t* ___host1, bool ___websocketRequest2, bool ___secure3, const RuntimeMethod* method) ;
// System.Void WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<get_SecWebSocketProtocols>d__39::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_SecWebSocketProtocolsU3Ed__39__ctor_mD62C3A1645DD803F52F19945D6774B82CF10DA70 (U3Cget_SecWebSocketProtocolsU3Ed__39_t8227D89EC3D7A5BF15A302E0EBDE90FEBBF50155* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// WebSocketSharp.HttpResponse WebSocketSharp.HttpResponse::CreateUnauthorizedResponse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpResponse_tD541C05A3498F1B78E0461EEDDE5BCF6CD3A09AD* HttpResponse_CreateUnauthorizedResponse_mCE82B76C1A75B7CDC438B9DC41D1BEB3E3FB2827 (String_t* ___challenge0, const RuntimeMethod* method) ;
// System.Byte[] WebSocketSharp.HttpBase::ToByteArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HttpBase_ToByteArray_m7CF5266464488FA7556CE387A7C348E81300888A (HttpBase_t23596200D738BFD45A1801CF7AB265233611E96A* __this, const RuntimeMethod* method) ;
// System.Void WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<>c__DisplayClass51_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass51_0__ctor_mA95D780004D4A9A2CA72564B6B4137C517AE6457 (U3CU3Ec__DisplayClass51_0_t581519BFB0F07914A9105FAE3DE9C6838ECAF454* __this, const RuntimeMethod* method) ;
// System.Void WebSocketSharp.Net.AuthenticationChallenge::.ctor(WebSocketSharp.Net.AuthenticationSchemes,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationChallenge__ctor_m14E59FE170A99E14BD5DB30ECBFA41CF7D89E99C (AuthenticationChallenge_tF056169477C958482677E5AA6F46CE3F55C1D14B* __this, int32_t ___scheme0, String_t* ___realm1, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___object0, ___method1, method);
}
// TResult System.Func`1<System.Boolean>::Invoke()
inline bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, const RuntimeMethod*))Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_gshared_inline)(__this, method);
}
// System.Void System.Net.Sockets.TcpClient::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient_Close_m03E0ED4E4BA87B3F1ED17585AB1327ED76F5FE89 (TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* __this, const RuntimeMethod* method) ;
// WebSocketSharp.HttpResponse WebSocketSharp.HttpResponse::CreateCloseResponse(WebSocketSharp.Net.HttpStatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpResponse_tD541C05A3498F1B78E0461EEDDE5BCF6CD3A09AD* HttpResponse_CreateCloseResponse_mE37E2E1B2CC7D1814832A305FD1502179B2D0806 (int32_t ___code0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.String> WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<get_SecWebSocketProtocols>d__39::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_SecWebSocketProtocolsU3Ed__39_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_mF4E7F6CEC0F16612D6560E8B63ACBA94A05CE4D7 (U3Cget_SecWebSocketProtocolsU3Ed__39_t8227D89EC3D7A5BF15A302E0EBDE90FEBBF50155* __this, const RuntimeMethod* method) ;
// System.String WebSocketSharp.HttpRequest::get_HttpMethod()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* HttpRequest_get_HttpMethod_m08FC9EA28184859CD01C6B257823482E0801E37D_inline (HttpRequest_tC4EBD60896D30D3F354443F03AB29F7960C5F492* __this, const RuntimeMethod* method) ;
// System.Security.Principal.IPrincipal WebSocketSharp.Net.HttpUtility::CreateUser(System.String,WebSocketSharp.Net.AuthenticationSchemes,System.String,System.String,System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HttpUtility_CreateUser_mE6741DC0DDD973A8593F2C150A6A852EA2F6F251 (String_t* ___response0, int32_t ___scheme1, String_t* ___realm2, String_t* ___method3, Func_2_t15D1CC9486E434EBA5D287D539335A1D72420090* ___credentialsFinder4, const RuntimeMethod* method) ;
// WebSocketSharp.HttpRequest WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::sendAuthenticationChallenge(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tC4EBD60896D30D3F354443F03AB29F7960C5F492* TcpListenerWebSocketContext_sendAuthenticationChallenge_m2B77ECA83A087A1C61BCB5B93A9D0172084E3EAA (TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* __this, String_t* ___challenge0, const RuntimeMethod* method) ;
// System.TimeSpan WebSocketSharp.WebSocket::get_WaitTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A WebSocket_get_WaitTime_m1F9DADF61FDAE43664C81C6D3F58CCD97A01653E_inline (WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* __this, const RuntimeMethod* method) ;
// System.Int32 System.TimeSpan::get_Milliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Milliseconds_m09D9D6D0033D5FBC62A3C4007CC716A85F4FC8EA (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// WebSocketSharp.WebSocketState WebSocketSharp.WebSocket::get_ReadyState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t WebSocket_get_ReadyState_m740791C3B269FAFFB16C67D105C416E3C7A90418 (WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<Netcode.Transports.WebSocket.WebSocketEvent>::.ctor()
inline void Queue_1__ctor_mFACE75E8CAEA49C2487FA67C243F15DAFC67357E (Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// T[] System.Array::Empty<System.String>()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_inline (const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void WebSocketSharp.WebSocket::.ctor(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_m0D66F66AAE0852B2B80C083F36748C722F9DC392 (WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* __this, String_t* ___url0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___protocols1, const RuntimeMethod* method) ;
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void WebSocketSharp.WebSocket::add_OnOpen(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnOpen_m42C3B580DF83E8339700646E11E6E0115B12129C (WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<WebSocketSharp.MessageEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m805D083EA11F9EC453468D846499F9CB7B88E37F (EventHandler_1_t83FB68A622E9BE4A5F2DE4B25A49199E64387714* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t83FB68A622E9BE4A5F2DE4B25A49199E64387714*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void WebSocketSharp.WebSocket::add_OnMessage(System.EventHandler`1<WebSocketSharp.MessageEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnMessage_m31C182B4DC435DE0F23D208855CDA8F8E0488518 (WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* __this, EventHandler_1_t83FB68A622E9BE4A5F2DE4B25A49199E64387714* ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<WebSocketSharp.ErrorEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m350381C8E2EB938DC2A035B980E1CE2CA0F4C499 (EventHandler_1_t26C98047352625FB580C2AB0368052211F6CC24E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t26C98047352625FB580C2AB0368052211F6CC24E*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void WebSocketSharp.WebSocket::add_OnError(System.EventHandler`1<WebSocketSharp.ErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnError_mADC0BE6EB6FFA23E69A57AAC5D66077FB5331639 (WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* __this, EventHandler_1_t26C98047352625FB580C2AB0368052211F6CC24E* ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<WebSocketSharp.CloseEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m0CE12814032CFB68D86632690A17E46716360774 (EventHandler_1_tE64C66477C8D3A58B6645C9F015B5AD78E47C08B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tE64C66477C8D3A58B6645C9F015B5AD78E47C08B*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void WebSocketSharp.WebSocket::add_OnClose(System.EventHandler`1<WebSocketSharp.CloseEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnClose_mBCE837EB5C3C5B4253E55D7F56A6BD3B9F3122FF (WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* __this, EventHandler_1_tE64C66477C8D3A58B6645C9F015B5AD78E47C08B* ___value0, const RuntimeMethod* method) ;
// WebSocketSharp.WebSocketState Netcode.Transports.WebSocket.NativeWebSocketClient::get_ReadyState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t NativeWebSocketClient_get_ReadyState_mD77A7665DCF42D50BEE67DB763D2C5E383DEF33C (NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void WebSocketSharp.WebSocket::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Connect_m3071958A89ED8EA13F9B07B254E7B748D776E66A (WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* __this, const RuntimeMethod* method) ;
// System.Void Netcode.Transports.WebSocket.WebSocketException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m959EAC51C84A45BFCE29D1D8D7C35BC99DD86402 (WebSocketException_tB3A36C56AA2ACFE8E6E58AC75DB700A08B940A3C* __this, String_t* ___message0, Exception_t* ___inner1, const RuntimeMethod* method) ;
// System.Void WebSocketSharp.WebSocket::Close(WebSocketSharp.CloseStatusCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Close_m3811640FFD4E49EB174A63103072757860C0203B (WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* __this, uint16_t ___code0, String_t* ___reason1, const RuntimeMethod* method) ;
// System.Void Netcode.Transports.WebSocket.WebSocketException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m808671308609F84384340A8084CC71B5BE052219 (WebSocketException_tB3A36C56AA2ACFE8E6E58AC75DB700A08B940A3C* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
inline int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline)(__this, method);
}
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
inline int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline)(__this, method);
}
// T[] System.ArraySegment`1<System.Byte>::get_Array()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline)(__this, method);
}
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___src0, int32_t ___srcOffset1, RuntimeArray* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method) ;
// System.Void WebSocketSharp.WebSocket::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Send_mCB3ED89CD2946491F79910EE01042EFCC475B6EC (WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Collections.Generic.Queue`1<Netcode.Transports.WebSocket.WebSocketEvent> Netcode.Transports.WebSocket.NativeWebSocketClient::get_EventQueue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10* NativeWebSocketClient_get_EventQueue_mD5D6BEB913A28A893EABA22ACC3095E429D809D8_inline (NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<Netcode.Transports.WebSocket.WebSocketEvent>::get_Count()
inline int32_t Queue_1_get_Count_m51C468F12B79CB459E75FFF1A9ED64067800C8FA_inline (Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<Netcode.Transports.WebSocket.WebSocketEvent>::Dequeue()
inline WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* Queue_1_Dequeue_m83073538B9EDC7DA9AC9239902E95E5C3AAC5666 (Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10* __this, const RuntimeMethod* method)
{
	return ((  WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* (*) (Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Void Netcode.Transports.WebSocket.WebSocketEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketEvent__ctor_m1115093A79E6BB0D3F0133B73BB122B9BD5E26A9 (WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<Netcode.Transports.WebSocket.WebSocketEvent>::Enqueue(T)
inline void Queue_1_Enqueue_m4518DCA73D4E47E028387221A627BFDF2C113841 (Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10* __this, WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10*, WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___item0, method);
}
// System.String WebSocketSharp.CloseEventArgs::get_Reason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CloseEventArgs_get_Reason_mE32FCC3084521656EB808025B3F841382F8B4E66 (CloseEventArgs_t22B98E782E975F0442E2C9EB49E699F1D934A588* __this, const RuntimeMethod* method) ;
// System.String WebSocketSharp.ErrorEventArgs::get_Message()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ErrorEventArgs_get_Message_m00F54F07334EA99D97F093FF80668E1C2CA0DD92_inline (ErrorEventArgs_t994316A1E3F79A575728D7388FAFD8BA05DD4052* __this, const RuntimeMethod* method) ;
// System.Byte[] WebSocketSharp.MessageEventArgs::get_RawData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MessageEventArgs_get_RawData_m523F58617AF9EBE0251FBB46C7DF22BB7AC38BB7 (MessageEventArgs_tC1868DA80225C18CE3B1286ED2D4B87474E87919* __this, const RuntimeMethod* method) ;
// System.Void Netcode.Transports.WebSocket.NativeWebSocketClient::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebSocketClient__ctor_m702BD181F76BF363E36DD901D3353FDF09D3572E (NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B* __this, String_t* ___url0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void Netcode.Transports.WebSocket.WebSocketPeer::.ctor(System.UInt64,WebSocketSharp.Net.WebSockets.WebSocketContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketPeer__ctor_m5AF3F1B6A5B40B6EB53F1BCD61852DE8E6C34895 (WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA* __this, uint64_t ___clientId0, WebSocketContext_t210263DD230B87766F206EC3DDBC301B24F5748B* ___context1, const RuntimeMethod* method) ;
// System.Void Netcode.Transports.WebSocket.WebSocketPeer::Close(WebSocketSharp.CloseStatusCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketPeer_Close_m57CC19BA40CD2BDF0B62736967A7E02D1C576026 (WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA* __this, uint16_t ___code0, String_t* ___reason1, const RuntimeMethod* method) ;
// System.Void Netcode.Transports.WebSocket.WebSocketPeer::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketPeer_Send_m52492A0F15B085EEE22663C2F4349F7DAE8C0CAC (WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.UInt64 Netcode.Transports.WebSocket.WebSocketPeer::get_Ping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t WebSocketPeer_get_Ping_mEE22CAD3C0BEDCFE3C4ABAACDD1F354ADFEB93FE (WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.UInt64>::get_Count()
inline int32_t Queue_1_get_Count_mF408F7F539EA2D8DF7E25FF32A7DB433FFB9F67A_inline (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF*, const RuntimeMethod*))Queue_1_get_Count_mF408F7F539EA2D8DF7E25FF32A7DB433FFB9F67A_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<System.UInt64>::Dequeue()
inline uint64_t Queue_1_Dequeue_m61058CB40F8E38F73E03279A288A436B288946DB (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* __this, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF*, const RuntimeMethod*))Queue_1_Dequeue_m61058CB40F8E38F73E03279A288A436B288946DB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<System.UInt64>::Enqueue(T)
inline void Queue_1_Enqueue_m1730DB68850554D215EBC943E35FEF5A7BF18CF1 (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* __this, uint64_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF*, uint64_t, const RuntimeMethod*))Queue_1_Enqueue_m1730DB68850554D215EBC943E35FEF5A7BF18CF1_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,Netcode.Transports.WebSocket.WebSocketPeer>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mFA2958260FA323A32289C3365F90DD5017E5E810 (Dictionary_2_t25C2B1256DA6CA53630FF1ABF2AABF3208E9DA55* __this, uint64_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t25C2B1256DA6CA53630FF1ABF2AABF3208E9DA55*, uint64_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mFA2958260FA323A32289C3365F90DD5017E5E810_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,Netcode.Transports.WebSocket.WebSocketPeer>::get_Item(TKey)
inline WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA Dictionary_2_get_Item_m49F06D8B0A22AD4DBCCCBC6936A4A1B7BDBE57CA (Dictionary_2_t25C2B1256DA6CA53630FF1ABF2AABF3208E9DA55* __this, uint64_t ___key0, const RuntimeMethod* method)
{
	return ((  WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA (*) (Dictionary_2_t25C2B1256DA6CA53630FF1ABF2AABF3208E9DA55*, uint64_t, const RuntimeMethod*))Dictionary_2_get_Item_m49F06D8B0A22AD4DBCCCBC6936A4A1B7BDBE57CA_gshared)(__this, ___key0, method);
}
// WebSocketSharp.Net.WebSockets.WebSocketContext WebSocketSharp.Server.WebSocketBehavior::get_Context()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WebSocketContext_t210263DD230B87766F206EC3DDBC301B24F5748B* WebSocketBehavior_get_Context_mD22E88B612B52E63BC55E2084070C7E27CFB72D0_inline (WebSocketBehavior_tE591886B40BB216DD21122093C87124CB0B74037* __this, const RuntimeMethod* method) ;
// System.Void Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior::set_Endpoint(System.Net.IPEndPoint)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebSocketServerConnectionBehavior_set_Endpoint_mBE247A4C877F3E860345C247DD6F3DF67615C606_inline (WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122* __this, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___value0, const RuntimeMethod* method) ;
// System.Void Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior::set_Socket(WebSocketSharp.WebSocket)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebSocketServerConnectionBehavior_set_Socket_m37898BBE2A9D85D98743BC5C99E1F10B7A6B7344_inline (WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122* __this, WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* ___value0, const RuntimeMethod* method) ;
// System.UInt64 Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior::GetNextClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t WebSocketServerConnectionBehavior_GetNextClientId_m19370BE8B075B327B5194C7E13212CB19E9D6C09 (const RuntimeMethod* method) ;
// System.Void Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior::set_ClientId(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebSocketServerConnectionBehavior_set_ClientId_m11FA239C40665A5D4765A4C4748D27BBC5A917C5_inline (WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122* __this, uint64_t ___value0, const RuntimeMethod* method) ;
// System.UInt64 Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior::get_ClientId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t WebSocketServerConnectionBehavior_get_ClientId_mFAB74E1F55A55D7AD815903A9A5526D094A95540_inline (WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,Netcode.Transports.WebSocket.WebSocketPeer>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m8F64CE276AD814D28C39A8711B646AE4A9283743 (Dictionary_2_t25C2B1256DA6CA53630FF1ABF2AABF3208E9DA55* __this, uint64_t ___key0, WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t25C2B1256DA6CA53630FF1ABF2AABF3208E9DA55*, uint64_t, WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA, const RuntimeMethod*))Dictionary_2_set_Item_m8F64CE276AD814D28C39A8711B646AE4A9283743_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,Netcode.Transports.WebSocket.WebSocketPeer>::Remove(TKey)
inline bool Dictionary_2_Remove_m1B934ECCB68BBDB4E20FC582AF4D3370980D6435 (Dictionary_2_t25C2B1256DA6CA53630FF1ABF2AABF3208E9DA55* __this, uint64_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t25C2B1256DA6CA53630FF1ABF2AABF3208E9DA55*, uint64_t, const RuntimeMethod*))Dictionary_2_Remove_m1B934ECCB68BBDB4E20FC582AF4D3370980D6435_gshared)(__this, ___key0, method);
}
// System.Void Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior::ReleaseClientId(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketServerConnectionBehavior_ReleaseClientId_mE909E7DA82F34622247D565EBB209DC9944AE8A7 (uint64_t ___clientId0, const RuntimeMethod* method) ;
// System.Void WebSocketSharp.Server.WebSocketBehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketBehavior__ctor_m85ACC0286267D77399D41433FCE8D53094D5DC30 (WebSocketBehavior_tE591886B40BB216DD21122093C87124CB0B74037* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,Netcode.Transports.WebSocket.WebSocketPeer>::.ctor()
inline void Dictionary_2__ctor_mFA6CBB79B6B226357DDAA4938F7CD33DE4526557 (Dictionary_2_t25C2B1256DA6CA53630FF1ABF2AABF3208E9DA55* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t25C2B1256DA6CA53630FF1ABF2AABF3208E9DA55*, const RuntimeMethod*))Dictionary_2__ctor_mFA6CBB79B6B226357DDAA4938F7CD33DE4526557_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<System.UInt64>::.ctor()
inline void Queue_1__ctor_mA15F3464308E1DD267ED3B9BB7D8849D2CA73F74 (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF*, const RuntimeMethod*))Queue_1__ctor_mA15F3464308E1DD267ED3B9BB7D8849D2CA73F74_gshared)(__this, method);
}
// System.Void Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior::DisconnectClient(System.UInt64,WebSocketSharp.CloseStatusCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketServerConnectionBehavior_DisconnectClient_mA56BF8B29E2B714807CB818630C74985D78E7338 (uint64_t ___clientId0, uint16_t ___code1, String_t* ___reason2, const RuntimeMethod* method) ;
// System.UInt64 Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior::Ping(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t WebSocketServerConnectionBehavior_Ping_m3B32BC6C4739A8225A8572E9F7C89A98CD63C45D (uint64_t ___clientId0, const RuntimeMethod* method) ;
// Netcode.Transports.WebSocket.WebSocketEvent Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior::Poll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* WebSocketServerConnectionBehavior_Poll_m836B6E31C4B6EAC75318FB0CB104516CC7664C9F (const RuntimeMethod* method) ;
// Netcode.Transports.WebSocket.WebSocketEvent Netcode.Transports.WebSocket.WebSocketTransport::GetNextWebSocketEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* WebSocketTransport_GetNextWebSocketEvent_m1327FADCA10CAB13429A8C822FB6F3BEB8663F7E (WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510 (const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<System.Byte>::.ctor(T[])
inline void ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86 (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_gshared)(__this, ___array0, method);
}
// Unity.Netcode.NetworkEvent Netcode.Transports.WebSocket.WebSocketEvent::GetNetworkEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocketEvent_GetNetworkEvent_m2149FD7F124704A34612DFBC3C967CE84E2DA142 (WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* __this, const RuntimeMethod* method) ;
// System.Void Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior::Send(System.UInt64,System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketServerConnectionBehavior_Send_m13D53A5C425A0658A20986062F0BE59185A9BC96 (uint64_t ___clientId0, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___data1, const RuntimeMethod* method) ;
// System.Void WebSocketSharp.Server.WebSocketServer::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketServer_Stop_mBF3CBE255A4045821B0CCC11F16922E912B34654 (WebSocketServer_t100358D00BE6A025323C3449FF95E300DCED1A71* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// Netcode.Transports.WebSocket.IWebSocketClient Netcode.Transports.WebSocket.WebSocketClientFactory::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketClientFactory_Create_m2AE7C908673A0A72F0226C06402EB9EEB7B7DF19 (String_t* ___url0, const RuntimeMethod* method) ;
// System.Void WebSocketSharp.Server.WebSocketServer::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketServer__ctor_mB59F901B188E535145B57FCEAFF2D44F2A05B0E0 (WebSocketServer_t100358D00BE6A025323C3449FF95E300DCED1A71* __this, int32_t ___port0, const RuntimeMethod* method) ;
// System.Void WebSocketSharp.Server.WebSocketServer::AddWebSocketService<Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior>(System.String)
inline void WebSocketServer_AddWebSocketService_TisWebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_mA026A3E93873B7F55AD52CF81006BF9A81A88EF3 (WebSocketServer_t100358D00BE6A025323C3449FF95E300DCED1A71* __this, String_t* ___path0, const RuntimeMethod* method)
{
	((  void (*) (WebSocketServer_t100358D00BE6A025323C3449FF95E300DCED1A71*, String_t*, const RuntimeMethod*))WebSocketServer_AddWebSocketService_TisRuntimeObject_mAFC953AE701DBA56AA686467B3DE20710082CB55_gshared)(__this, ___path0, method);
}
// System.Void WebSocketSharp.Server.WebSocketServer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketServer_Start_m3AB36EF40AE61DD126739A51CD6DFB40F2EB4E70 (WebSocketServer_t100358D00BE6A025323C3449FF95E300DCED1A71* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkTransport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport__ctor_m4539E8F121DB9DFB42D7B63EC51A14FB1C7738AF (NetworkTransport_t55E07951299283974C86476F46CC977780560B64* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::.ctor(WebSocketSharp.Net.HttpListenerContext,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpListenerWebSocketContext__ctor_m0D283831BAE5E878770238F34E2B9E916A0AC333 (HttpListenerWebSocketContext_tAD3851F58DB3C094958D121685C3E85FA99FEA83* __this, HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* ___context0, String_t* ___protocol1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal HttpListenerWebSocketContext (
		//   HttpListenerContext context, string protocol
		// )
		WebSocketContext__ctor_m8E95F5823E493B474C8F9E24A73E7C6564CFA83C(__this, NULL);
		// _context = context;
		HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* L_0 = ___context0;
		__this->____context_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____context_0), (void*)L_0);
		// _websocket = new WebSocket (this, protocol);
		String_t* L_1 = ___protocol1;
		WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* L_2 = (WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171*)il2cpp_codegen_object_new(WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		WebSocket__ctor_mC305F62EF919C35A670661896555627A8905877F(L_2, __this, L_1, NULL);
		__this->____websocket_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____websocket_1), (void*)L_2);
		// }
		return;
	}
}
// WebSocketSharp.Logger WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_Log()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Logger_t53407739C86D76B1D27356B732E39367394F4ABA* HttpListenerWebSocketContext_get_Log_m30931A123A17E9CD7E79677FB0B9F3ECC02A8F19 (HttpListenerWebSocketContext_tAD3851F58DB3C094958D121685C3E85FA99FEA83* __this, const RuntimeMethod* method) 
{
	{
		// return _context.Listener.Log;
		HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* L_0 = __this->____context_0;
		NullCheck(L_0);
		HttpListener_tFAA6A3F0382BEBACA28631D4E831D334006DA1F9* L_1;
		L_1 = HttpListenerContext_get_Listener_m6103F00159F143FF4E81916748EF8861DB2F7C0E_inline(L_0, NULL);
		NullCheck(L_1);
		Logger_t53407739C86D76B1D27356B732E39367394F4ABA* L_2;
		L_2 = HttpListener_get_Log_mC2F80F8DF4C5B4B5A781D8F3C31548153DC75EFD_inline(L_1, NULL);
		return L_2;
	}
}
// System.IO.Stream WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_Stream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* HttpListenerWebSocketContext_get_Stream_mB2BF3B3EBDCBB8517D78F2F1CA25E696F41B912E (HttpListenerWebSocketContext_tAD3851F58DB3C094958D121685C3E85FA99FEA83* __this, const RuntimeMethod* method) 
{
	{
		// return _context.Connection.Stream;
		HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* L_0 = __this->____context_0;
		NullCheck(L_0);
		HttpConnection_tF70009B09FAD5A4B7492CCAAB79480EA70DD3EA9* L_1;
		L_1 = HttpListenerContext_get_Connection_m22D9CB4FE622EF43F02DEE0C9691874661216B2B_inline(L_0, NULL);
		NullCheck(L_1);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2;
		L_2 = HttpConnection_get_Stream_m26609E51E336816BE4F76AF531709258F4FC5142_inline(L_1, NULL);
		return L_2;
	}
}
// WebSocketSharp.Net.CookieCollection WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_CookieCollection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CookieCollection_tF33A67A4729E8AB85409A8733A7AA4EEC807C6DF* HttpListenerWebSocketContext_get_CookieCollection_mDDB7B6C760F8982728CE4112212EC440DC1BFCAD (HttpListenerWebSocketContext_tAD3851F58DB3C094958D121685C3E85FA99FEA83* __this, const RuntimeMethod* method) 
{
	{
		// return _context.Request.Cookies;
		HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* L_0 = __this->____context_0;
		NullCheck(L_0);
		HttpListenerRequest_t89F42007013FD4C768C1630A02E475507C563575* L_1;
		L_1 = HttpListenerContext_get_Request_mB8E8B02F17D9175290AF08EC514CEC4A96B599D1_inline(L_0, NULL);
		NullCheck(L_1);
		CookieCollection_tF33A67A4729E8AB85409A8733A7AA4EEC807C6DF* L_2;
		L_2 = HttpListenerRequest_get_Cookies_mBC736ED3FF1EB4F963F89C2DE17122AC7D178261(L_1, NULL);
		return L_2;
	}
}
// System.Collections.Specialized.NameValueCollection WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_Headers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* HttpListenerWebSocketContext_get_Headers_m875827972A4A183B6C5CCCB7D8D1792B1A28F207 (HttpListenerWebSocketContext_tAD3851F58DB3C094958D121685C3E85FA99FEA83* __this, const RuntimeMethod* method) 
{
	{
		// return _context.Request.Headers;
		HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* L_0 = __this->____context_0;
		NullCheck(L_0);
		HttpListenerRequest_t89F42007013FD4C768C1630A02E475507C563575* L_1;
		L_1 = HttpListenerContext_get_Request_mB8E8B02F17D9175290AF08EC514CEC4A96B599D1_inline(L_0, NULL);
		NullCheck(L_1);
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_2;
		L_2 = HttpListenerRequest_get_Headers_mD573F0D8618E54DA7F458736F95512354AC7FF42_inline(L_1, NULL);
		return L_2;
	}
}
// System.String WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_Host()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HttpListenerWebSocketContext_get_Host_m2B9BC54F17F1B24BB7A000F85496E66DD9EB91C9 (HttpListenerWebSocketContext_tAD3851F58DB3C094958D121685C3E85FA99FEA83* __this, const RuntimeMethod* method) 
{
	{
		// return _context.Request.UserHostName;
		HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* L_0 = __this->____context_0;
		NullCheck(L_0);
		HttpListenerRequest_t89F42007013FD4C768C1630A02E475507C563575* L_1;
		L_1 = HttpListenerContext_get_Request_mB8E8B02F17D9175290AF08EC514CEC4A96B599D1_inline(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = HttpListenerRequest_get_UserHostName_mA090FB0737FB6B88D6E5AD1199105125253E9584_inline(L_1, NULL);
		return L_2;
	}
}
// System.Boolean WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_IsAuthenticated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HttpListenerWebSocketContext_get_IsAuthenticated_mDED18B5D83CD0778919CFD51ADD127FF262A1DA6 (HttpListenerWebSocketContext_tAD3851F58DB3C094958D121685C3E85FA99FEA83* __this, const RuntimeMethod* method) 
{
	{
		// return _context.Request.IsAuthenticated;
		HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* L_0 = __this->____context_0;
		NullCheck(L_0);
		HttpListenerRequest_t89F42007013FD4C768C1630A02E475507C563575* L_1;
		L_1 = HttpListenerContext_get_Request_mB8E8B02F17D9175290AF08EC514CEC4A96B599D1_inline(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = HttpListenerRequest_get_IsAuthenticated_m0FCE7376378398226DB2C192606DAB7F21B07860(L_1, NULL);
		return L_2;
	}
}
// System.Boolean WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_IsLocal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HttpListenerWebSocketContext_get_IsLocal_mFDEAE7936610219B7512A612E96330BABCAF00A7 (HttpListenerWebSocketContext_tAD3851F58DB3C094958D121685C3E85FA99FEA83* __this, const RuntimeMethod* method) 
{
	{
		// return _context.Request.IsLocal;
		HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* L_0 = __this->____context_0;
		NullCheck(L_0);
		HttpListenerRequest_t89F42007013FD4C768C1630A02E475507C563575* L_1;
		L_1 = HttpListenerContext_get_Request_mB8E8B02F17D9175290AF08EC514CEC4A96B599D1_inline(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = HttpListenerRequest_get_IsLocal_m3B9A872908C437F7FF84A38F815E2B76954AA626(L_1, NULL);
		return L_2;
	}
}
// System.Boolean WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_IsSecureConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HttpListenerWebSocketContext_get_IsSecureConnection_m89775AF88209F8BB40B6BE434F3D3C4DBBBC864D (HttpListenerWebSocketContext_tAD3851F58DB3C094958D121685C3E85FA99FEA83* __this, const RuntimeMethod* method) 
{
	{
		// return _context.Request.IsSecureConnection;
		HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* L_0 = __this->____context_0;
		NullCheck(L_0);
		HttpListenerRequest_t89F42007013FD4C768C1630A02E475507C563575* L_1;
		L_1 = HttpListenerContext_get_Request_mB8E8B02F17D9175290AF08EC514CEC4A96B599D1_inline(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = HttpListenerRequest_get_IsSecureConnection_m9778F050D46BFC85270F25ACEE44CBA448FBBA75(L_1, NULL);
		return L_2;
	}
}
// System.Boolean WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_IsWebSocketRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HttpListenerWebSocketContext_get_IsWebSocketRequest_m5583805E28E95424F03BBA49E8110108129278E5 (HttpListenerWebSocketContext_tAD3851F58DB3C094958D121685C3E85FA99FEA83* __this, const RuntimeMethod* method) 
{
	{
		// return _context.Request.IsWebSocketRequest;
		HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* L_0 = __this->____context_0;
		NullCheck(L_0);
		HttpListenerRequest_t89F42007013FD4C768C1630A02E475507C563575* L_1;
		L_1 = HttpListenerContext_get_Request_mB8E8B02F17D9175290AF08EC514CEC4A96B599D1_inline(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = HttpListenerRequest_get_IsWebSocketRequest_m696FB3B68EC01923CCBB7B105B4950A6516C77B4(L_1, NULL);
		return L_2;
	}
}
// System.String WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_Origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HttpListenerWebSocketContext_get_Origin_mD6E891048C3284B83FBBA0989A3C6A55A4ADE6F7 (HttpListenerWebSocketContext_tAD3851F58DB3C094958D121685C3E85FA99FEA83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral446EBFE0AF15621B72FD60AC796D8BDD96BA7175);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _context.Request.Headers["Origin"];
		HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* L_0 = __this->____context_0;
		NullCheck(L_0);
		HttpListenerRequest_t89F42007013FD4C768C1630A02E475507C563575* L_1;
		L_1 = HttpListenerContext_get_Request_mB8E8B02F17D9175290AF08EC514CEC4A96B599D1_inline(L_0, NULL);
		NullCheck(L_1);
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_2;
		L_2 = HttpListenerRequest_get_Headers_mD573F0D8618E54DA7F458736F95512354AC7FF42_inline(L_1, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = NameValueCollection_get_Item_mE3ED755803E67BC852123C70EEF8D53774FA635F(L_2, _stringLiteral446EBFE0AF15621B72FD60AC796D8BDD96BA7175, NULL);
		return L_3;
	}
}
// System.Collections.Specialized.NameValueCollection WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_QueryString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* HttpListenerWebSocketContext_get_QueryString_m394967FEB0B620914D0123D26A93DAF39BD7BE46 (HttpListenerWebSocketContext_tAD3851F58DB3C094958D121685C3E85FA99FEA83* __this, const RuntimeMethod* method) 
{
	{
		// return _context.Request.QueryString;
		HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* L_0 = __this->____context_0;
		NullCheck(L_0);
		HttpListenerRequest_t89F42007013FD4C768C1630A02E475507C563575* L_1;
		L_1 = HttpListenerContext_get_Request_mB8E8B02F17D9175290AF08EC514CEC4A96B599D1_inline(L_0, NULL);
		NullCheck(L_1);
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_2;
		L_2 = HttpListenerRequest_get_QueryString_m54A9DE93B685874AD45CDB18A25D826C6A832479(L_1, NULL);
		return L_2;
	}
}
// System.Uri WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_RequestUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* HttpListenerWebSocketContext_get_RequestUri_mA370016837102AC442B8168F7A8F36889DE1A447 (HttpListenerWebSocketContext_tAD3851F58DB3C094958D121685C3E85FA99FEA83* __this, const RuntimeMethod* method) 
{
	{
		// return _context.Request.Url;
		HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* L_0 = __this->____context_0;
		NullCheck(L_0);
		HttpListenerRequest_t89F42007013FD4C768C1630A02E475507C563575* L_1;
		L_1 = HttpListenerContext_get_Request_mB8E8B02F17D9175290AF08EC514CEC4A96B599D1_inline(L_0, NULL);
		NullCheck(L_1);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_2;
		L_2 = HttpListenerRequest_get_Url_m5E260649EAEAF67574E8589601C6184BF854539E(L_1, NULL);
		return L_2;
	}
}
// System.String WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_SecWebSocketKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HttpListenerWebSocketContext_get_SecWebSocketKey_m4852425156863AAE34FC93EDDAB44F65764B2CB2 (HttpListenerWebSocketContext_tAD3851F58DB3C094958D121685C3E85FA99FEA83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7834CF4EF86F7E4B257C99799BE0F2B8C798C97A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _context.Request.Headers["Sec-WebSocket-Key"];
		HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* L_0 = __this->____context_0;
		NullCheck(L_0);
		HttpListenerRequest_t89F42007013FD4C768C1630A02E475507C563575* L_1;
		L_1 = HttpListenerContext_get_Request_mB8E8B02F17D9175290AF08EC514CEC4A96B599D1_inline(L_0, NULL);
		NullCheck(L_1);
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_2;
		L_2 = HttpListenerRequest_get_Headers_mD573F0D8618E54DA7F458736F95512354AC7FF42_inline(L_1, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = NameValueCollection_get_Item_mE3ED755803E67BC852123C70EEF8D53774FA635F(L_2, _stringLiteral7834CF4EF86F7E4B257C99799BE0F2B8C798C97A, NULL);
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_SecWebSocketProtocols()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HttpListenerWebSocketContext_get_SecWebSocketProtocols_m8C1B2155086DFAC731B569D5B5479BA1F5DC6DB9 (HttpListenerWebSocketContext_tAD3851F58DB3C094958D121685C3E85FA99FEA83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_SecWebSocketProtocolsU3Ed__30_t577F379C68DABB00612A02095F8455251051506F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cget_SecWebSocketProtocolsU3Ed__30_t577F379C68DABB00612A02095F8455251051506F* L_0 = (U3Cget_SecWebSocketProtocolsU3Ed__30_t577F379C68DABB00612A02095F8455251051506F*)il2cpp_codegen_object_new(U3Cget_SecWebSocketProtocolsU3Ed__30_t577F379C68DABB00612A02095F8455251051506F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3Cget_SecWebSocketProtocolsU3Ed__30__ctor_m921068103CD18F3BBF5C221708929ADEA980CF6F(L_0, ((int32_t)-2), NULL);
		U3Cget_SecWebSocketProtocolsU3Ed__30_t577F379C68DABB00612A02095F8455251051506F* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		return L_1;
	}
}
// System.String WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_SecWebSocketVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HttpListenerWebSocketContext_get_SecWebSocketVersion_m1E6447FC3C5CD6921986AF48BC3C60DA5E8C8987 (HttpListenerWebSocketContext_tAD3851F58DB3C094958D121685C3E85FA99FEA83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17DCB6DC77B5841EDA742002E9E451C700AD1742);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _context.Request.Headers["Sec-WebSocket-Version"];
		HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* L_0 = __this->____context_0;
		NullCheck(L_0);
		HttpListenerRequest_t89F42007013FD4C768C1630A02E475507C563575* L_1;
		L_1 = HttpListenerContext_get_Request_mB8E8B02F17D9175290AF08EC514CEC4A96B599D1_inline(L_0, NULL);
		NullCheck(L_1);
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_2;
		L_2 = HttpListenerRequest_get_Headers_mD573F0D8618E54DA7F458736F95512354AC7FF42_inline(L_1, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = NameValueCollection_get_Item_mE3ED755803E67BC852123C70EEF8D53774FA635F(L_2, _stringLiteral17DCB6DC77B5841EDA742002E9E451C700AD1742, NULL);
		return L_3;
	}
}
// System.Net.IPEndPoint WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_ServerEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* HttpListenerWebSocketContext_get_ServerEndPoint_m8159D40BDB738F06ADC665C5188E4CC339375D7D (HttpListenerWebSocketContext_tAD3851F58DB3C094958D121685C3E85FA99FEA83* __this, const RuntimeMethod* method) 
{
	{
		// return _context.Request.LocalEndPoint;
		HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* L_0 = __this->____context_0;
		NullCheck(L_0);
		HttpListenerRequest_t89F42007013FD4C768C1630A02E475507C563575* L_1;
		L_1 = HttpListenerContext_get_Request_mB8E8B02F17D9175290AF08EC514CEC4A96B599D1_inline(L_0, NULL);
		NullCheck(L_1);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_2;
		L_2 = HttpListenerRequest_get_LocalEndPoint_mA8D9E064B387CA473F62DD82322A9C3C910A4994(L_1, NULL);
		return L_2;
	}
}
// System.Security.Principal.IPrincipal WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_User()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HttpListenerWebSocketContext_get_User_m2EA82F28FF236364680F4FBCBADC31546A603869 (HttpListenerWebSocketContext_tAD3851F58DB3C094958D121685C3E85FA99FEA83* __this, const RuntimeMethod* method) 
{
	{
		// return _context.User;
		HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* L_0 = __this->____context_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = HttpListenerContext_get_User_m6F46F002CC8FF9ED085E5273F095F7E634958A4E_inline(L_0, NULL);
		return L_1;
	}
}
// System.Net.IPEndPoint WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_UserEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* HttpListenerWebSocketContext_get_UserEndPoint_mA15325C80BA384CB4847167EAC5AD443D92DDC1D (HttpListenerWebSocketContext_tAD3851F58DB3C094958D121685C3E85FA99FEA83* __this, const RuntimeMethod* method) 
{
	{
		// return _context.Request.RemoteEndPoint;
		HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* L_0 = __this->____context_0;
		NullCheck(L_0);
		HttpListenerRequest_t89F42007013FD4C768C1630A02E475507C563575* L_1;
		L_1 = HttpListenerContext_get_Request_mB8E8B02F17D9175290AF08EC514CEC4A96B599D1_inline(L_0, NULL);
		NullCheck(L_1);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_2;
		L_2 = HttpListenerRequest_get_RemoteEndPoint_m5A870494C753F95FCA588F368EC5D46469AFF17C(L_1, NULL);
		return L_2;
	}
}
// WebSocketSharp.WebSocket WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_WebSocket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* HttpListenerWebSocketContext_get_WebSocket_m92F2AF2B3DDC88CD9FD776354306733B6186A344 (HttpListenerWebSocketContext_tAD3851F58DB3C094958D121685C3E85FA99FEA83* __this, const RuntimeMethod* method) 
{
	{
		// return _websocket;
		WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* L_0 = __this->____websocket_1;
		return L_0;
	}
}
// System.Void WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpListenerWebSocketContext_Close_m2C40F3EB2F977728CC85985C96EBE9CD700FDF0C (HttpListenerWebSocketContext_tAD3851F58DB3C094958D121685C3E85FA99FEA83* __this, const RuntimeMethod* method) 
{
	{
		// _context.Connection.Close (true);
		HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* L_0 = __this->____context_0;
		NullCheck(L_0);
		HttpConnection_tF70009B09FAD5A4B7492CCAAB79480EA70DD3EA9* L_1;
		L_1 = HttpListenerContext_get_Connection_m22D9CB4FE622EF43F02DEE0C9691874661216B2B_inline(L_0, NULL);
		NullCheck(L_1);
		HttpConnection_Close_mD8033745E36D64F101B6CAA6A87822BC49398307(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::Close(WebSocketSharp.Net.HttpStatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpListenerWebSocketContext_Close_m52016AF68C9A12972F63F451EE20F902295D7696 (HttpListenerWebSocketContext_tAD3851F58DB3C094958D121685C3E85FA99FEA83* __this, int32_t ___code0, const RuntimeMethod* method) 
{
	{
		// _context.Response.StatusCode = (int) code;
		HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* L_0 = __this->____context_0;
		NullCheck(L_0);
		HttpListenerResponse_t67D6387C1CCEE533F721B27C7ECFCD4E231DB3A0* L_1;
		L_1 = HttpListenerContext_get_Response_m7BB1B78E06381A2315E8034E4644460610ABBDA2_inline(L_0, NULL);
		int32_t L_2 = ___code0;
		NullCheck(L_1);
		HttpListenerResponse_set_StatusCode_mB9DC5083E381A534D002DCFFEFF0E3FD08C02592(L_1, L_2, NULL);
		// _context.Response.Close ();
		HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* L_3 = __this->____context_0;
		NullCheck(L_3);
		HttpListenerResponse_t67D6387C1CCEE533F721B27C7ECFCD4E231DB3A0* L_4;
		L_4 = HttpListenerContext_get_Response_m7BB1B78E06381A2315E8034E4644460610ABBDA2_inline(L_3, NULL);
		NullCheck(L_4);
		HttpListenerResponse_Close_m98BB67E05619285EDE1E9E8A0E785BB237A13202(L_4, NULL);
		// }
		return;
	}
}
// System.String WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HttpListenerWebSocketContext_ToString_m59B460088DD22A14ADC099110C3BBB62C694C9E6 (HttpListenerWebSocketContext_tAD3851F58DB3C094958D121685C3E85FA99FEA83* __this, const RuntimeMethod* method) 
{
	{
		// return _context.Request.ToString ();
		HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* L_0 = __this->____context_0;
		NullCheck(L_0);
		HttpListenerRequest_t89F42007013FD4C768C1630A02E475507C563575* L_1;
		L_1 = HttpListenerContext_get_Request_mB8E8B02F17D9175290AF08EC514CEC4A96B599D1_inline(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
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
// System.Void WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext/<get_SecWebSocketProtocols>d__30::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_SecWebSocketProtocolsU3Ed__30__ctor_m921068103CD18F3BBF5C221708929ADEA980CF6F (U3Cget_SecWebSocketProtocolsU3Ed__30_t577F379C68DABB00612A02095F8455251051506F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext/<get_SecWebSocketProtocols>d__30::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_SecWebSocketProtocolsU3Ed__30_System_IDisposable_Dispose_mCCB2115D6F998B293790245FB44613BF4B72ECB1 (U3Cget_SecWebSocketProtocolsU3Ed__30_t577F379C68DABB00612A02095F8455251051506F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext/<get_SecWebSocketProtocols>d__30::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_SecWebSocketProtocolsU3Ed__30_MoveNext_mC088B672AF118F33B29B6B9C3F23273CD93E2B3E (U3Cget_SecWebSocketProtocolsU3Ed__30_t577F379C68DABB00612A02095F8455251051506F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33B3063694EC42095FDB4F99AF7DCB5B4014CBA6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HttpListenerWebSocketContext_tAD3851F58DB3C094958D121685C3E85FA99FEA83* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		HttpListenerWebSocketContext_tAD3851F58DB3C094958D121685C3E85FA99FEA83* L_1 = __this->___U3CU3E4__this_3;
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
			goto IL_0089;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var val = _context.Request.Headers["Sec-WebSocket-Protocol"];
		HttpListenerWebSocketContext_tAD3851F58DB3C094958D121685C3E85FA99FEA83* L_4 = V_1;
		NullCheck(L_4);
		HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* L_5 = L_4->____context_0;
		NullCheck(L_5);
		HttpListenerRequest_t89F42007013FD4C768C1630A02E475507C563575* L_6;
		L_6 = HttpListenerContext_get_Request_mB8E8B02F17D9175290AF08EC514CEC4A96B599D1_inline(L_5, NULL);
		NullCheck(L_6);
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_7;
		L_7 = HttpListenerRequest_get_Headers_mD573F0D8618E54DA7F458736F95512354AC7FF42_inline(L_6, NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = NameValueCollection_get_Item_mE3ED755803E67BC852123C70EEF8D53774FA635F(L_7, _stringLiteral33B3063694EC42095FDB4F99AF7DCB5B4014CBA6, NULL);
		V_2 = L_8;
		// if (val == null || val.Length == 0)
		String_t* L_9 = V_2;
		if (!L_9)
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_10 = V_2;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		if (L_11)
		{
			goto IL_0046;
		}
	}

IL_0044:
	{
		// yield break;
		return (bool)0;
	}

IL_0046:
	{
		// foreach (var elm in val.Split (',')) {
		String_t* L_12 = V_2;
		NullCheck(L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13;
		L_13 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_12, ((int32_t)44), 0, NULL);
		__this->___U3CU3E7__wrap1_4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_4), (void*)L_13);
		__this->___U3CU3E7__wrap2_5 = 0;
		goto IL_009e;
	}

IL_005e:
	{
		// foreach (var elm in val.Split (',')) {
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = __this->___U3CU3E7__wrap1_4;
		int32_t L_15 = __this->___U3CU3E7__wrap2_5;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		String_t* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		// var protocol = elm.Trim ();
		NullCheck(L_17);
		String_t* L_18;
		L_18 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_17, NULL);
		V_3 = L_18;
		// if (protocol.Length == 0)
		String_t* L_19 = V_3;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_19, NULL);
		if (!L_20)
		{
			goto IL_0090;
		}
	}
	{
		// yield return protocol;
		String_t* L_21 = V_3;
		__this->___U3CU3E2__current_1 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_21);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0089:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0090:
	{
		int32_t L_22 = __this->___U3CU3E7__wrap2_5;
		__this->___U3CU3E7__wrap2_5 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_009e:
	{
		// foreach (var elm in val.Split (',')) {
		int32_t L_23 = __this->___U3CU3E7__wrap2_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = __this->___U3CU3E7__wrap1_4;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_005e;
		}
	}
	{
		__this->___U3CU3E7__wrap1_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_4), (void*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL);
		// }
		return (bool)0;
	}
}
// System.String WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext/<get_SecWebSocketProtocols>d__30::System.Collections.Generic.IEnumerator<System.String>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3Cget_SecWebSocketProtocolsU3Ed__30_System_Collections_Generic_IEnumeratorU3CSystem_StringU3E_get_Current_m525944649F887BCB2DD8B059F3BFCE66C04A1F13 (U3Cget_SecWebSocketProtocolsU3Ed__30_t577F379C68DABB00612A02095F8455251051506F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext/<get_SecWebSocketProtocols>d__30::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_SecWebSocketProtocolsU3Ed__30_System_Collections_IEnumerator_Reset_mEF1392C61BBBE9BA447598722144033D029C445D (U3Cget_SecWebSocketProtocolsU3Ed__30_t577F379C68DABB00612A02095F8455251051506F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_SecWebSocketProtocolsU3Ed__30_System_Collections_IEnumerator_Reset_mEF1392C61BBBE9BA447598722144033D029C445D_RuntimeMethod_var)));
	}
}
// System.Object WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext/<get_SecWebSocketProtocols>d__30::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_SecWebSocketProtocolsU3Ed__30_System_Collections_IEnumerator_get_Current_m67BD935FE673347074B98D920C1B70904012DBFB (U3Cget_SecWebSocketProtocolsU3Ed__30_t577F379C68DABB00612A02095F8455251051506F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.String> WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext/<get_SecWebSocketProtocols>d__30::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_SecWebSocketProtocolsU3Ed__30_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m77117CA74E94CC549054FFB435EF4BC2E9BC5482 (U3Cget_SecWebSocketProtocolsU3Ed__30_t577F379C68DABB00612A02095F8455251051506F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_SecWebSocketProtocolsU3Ed__30_t577F379C68DABB00612A02095F8455251051506F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_SecWebSocketProtocolsU3Ed__30_t577F379C68DABB00612A02095F8455251051506F* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_SecWebSocketProtocolsU3Ed__30_t577F379C68DABB00612A02095F8455251051506F* L_3 = (U3Cget_SecWebSocketProtocolsU3Ed__30_t577F379C68DABB00612A02095F8455251051506F*)il2cpp_codegen_object_new(U3Cget_SecWebSocketProtocolsU3Ed__30_t577F379C68DABB00612A02095F8455251051506F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3Cget_SecWebSocketProtocolsU3Ed__30__ctor_m921068103CD18F3BBF5C221708929ADEA980CF6F(L_3, 0, NULL);
		V_0 = L_3;
		U3Cget_SecWebSocketProtocolsU3Ed__30_t577F379C68DABB00612A02095F8455251051506F* L_4 = V_0;
		HttpListenerWebSocketContext_tAD3851F58DB3C094958D121685C3E85FA99FEA83* L_5 = __this->___U3CU3E4__this_3;
		NullCheck(L_4);
		L_4->___U3CU3E4__this_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this_3), (void*)L_5);
	}

IL_0035:
	{
		U3Cget_SecWebSocketProtocolsU3Ed__30_t577F379C68DABB00612A02095F8455251051506F* L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext/<get_SecWebSocketProtocols>d__30::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_SecWebSocketProtocolsU3Ed__30_System_Collections_IEnumerable_GetEnumerator_m163538E1C881D030F75801841487738BB18DA0A9 (U3Cget_SecWebSocketProtocolsU3Ed__30_t577F379C68DABB00612A02095F8455251051506F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_SecWebSocketProtocolsU3Ed__30_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m77117CA74E94CC549054FFB435EF4BC2E9BC5482(__this, NULL);
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
// System.Void WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::.ctor(System.Net.Sockets.TcpClient,System.String,System.Boolean,WebSocketSharp.Net.ServerSslConfiguration,WebSocketSharp.Logger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpListenerWebSocketContext__ctor_m4C37CDA29E79BBF6EC4F1962093FDDB261026F3E (TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* __this, TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* ___tcpClient0, String_t* ___protocol1, bool ___secure2, ServerSslConfiguration_tFE7CD988C3426FA1F6D02567C24D49FCD8DB6A42* ___sslConfig3, Logger_t53407739C86D76B1D27356B732E39367394F4ABA* ___log4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* V_0 = NULL;
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* V_1 = NULL;
	SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* V_2 = NULL;
	{
		// internal TcpListenerWebSocketContext (
		//   TcpClient tcpClient,
		//   string protocol,
		//   bool secure,
		//   ServerSslConfiguration sslConfig,
		//   Logger log
		// )
		WebSocketContext__ctor_m8E95F5823E493B474C8F9E24A73E7C6564CFA83C(__this, NULL);
		// _tcpClient = tcpClient;
		TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* L_0 = ___tcpClient0;
		__this->____tcpClient_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tcpClient_7), (void*)L_0);
		// _secure = secure;
		bool L_1 = ___secure2;
		__this->____secure_4 = L_1;
		// _log = log;
		Logger_t53407739C86D76B1D27356B732E39367394F4ABA* L_2 = ___log4;
		__this->____log_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____log_0), (void*)L_2);
		// var netStream = tcpClient.GetStream ();
		TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* L_3 = ___tcpClient0;
		NullCheck(L_3);
		NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* L_4;
		L_4 = TcpClient_GetStream_mDD54336B17D1267BD593E0A1EB9EDF3E9506AEBA(L_3, NULL);
		V_0 = L_4;
		// if (secure) {
		bool L_5 = ___secure2;
		if (!L_5)
		{
			goto IL_0060;
		}
	}
	{
		// var sslStream = new SslStream (
		//                   netStream,
		//                   false,
		//                   sslConfig.ClientCertificateValidationCallback
		//                 );
		NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* L_6 = V_0;
		ServerSslConfiguration_tFE7CD988C3426FA1F6D02567C24D49FCD8DB6A42* L_7 = ___sslConfig3;
		NullCheck(L_7);
		RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* L_8;
		L_8 = ServerSslConfiguration_get_ClientCertificateValidationCallback_m273AA1A90A349431550BCA9C68414FEE7F62E549(L_7, NULL);
		SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_9 = (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27*)il2cpp_codegen_object_new(SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		SslStream__ctor_m9096E6E85E60C4D205A26FA43D121FECEC735484(L_9, L_6, (bool)0, L_8, NULL);
		V_2 = L_9;
		// sslStream.AuthenticateAsServer (
		//   sslConfig.ServerCertificate,
		//   sslConfig.ClientCertificateRequired,
		//   sslConfig.EnabledSslProtocols,
		//   sslConfig.CheckCertificateRevocation
		// );
		SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_10 = V_2;
		ServerSslConfiguration_tFE7CD988C3426FA1F6D02567C24D49FCD8DB6A42* L_11 = ___sslConfig3;
		NullCheck(L_11);
		X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* L_12;
		L_12 = ServerSslConfiguration_get_ServerCertificate_mF4275E3B95B3DC27216793F9E8C09793EE5F94D3_inline(L_11, NULL);
		ServerSslConfiguration_tFE7CD988C3426FA1F6D02567C24D49FCD8DB6A42* L_13 = ___sslConfig3;
		NullCheck(L_13);
		bool L_14;
		L_14 = ServerSslConfiguration_get_ClientCertificateRequired_mC424E87917DB3A35FB1179DC9C35FB530AFC4CBB_inline(L_13, NULL);
		ServerSslConfiguration_tFE7CD988C3426FA1F6D02567C24D49FCD8DB6A42* L_15 = ___sslConfig3;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = ServerSslConfiguration_get_EnabledSslProtocols_m211F1231991B91763419260775DDCE3A3F876D56_inline(L_15, NULL);
		ServerSslConfiguration_tFE7CD988C3426FA1F6D02567C24D49FCD8DB6A42* L_17 = ___sslConfig3;
		NullCheck(L_17);
		bool L_18;
		L_18 = ServerSslConfiguration_get_CheckCertificateRevocation_m61D703CA95D406C0C2A44AE1405487908861B57F_inline(L_17, NULL);
		NullCheck(L_10);
		VirtualActionInvoker4< X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, bool, int32_t, bool >::Invoke(43 /* System.Void System.Net.Security.SslStream::AuthenticateAsServer(System.Security.Cryptography.X509Certificates.X509Certificate,System.Boolean,System.Security.Authentication.SslProtocols,System.Boolean) */, L_10, L_12, L_14, L_16, L_18);
		// _stream = sslStream;
		SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_19 = V_2;
		__this->____stream_6 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stream_6), (void*)L_19);
		goto IL_0067;
	}

IL_0060:
	{
		// _stream = netStream;
		NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* L_20 = V_0;
		__this->____stream_6 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stream_6), (void*)L_20);
	}

IL_0067:
	{
		// var sock = tcpClient.Client;
		TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* L_21 = ___tcpClient0;
		NullCheck(L_21);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_22;
		L_22 = TcpClient_get_Client_m38B7DCD73EB42C6BBE6340B5E4C0A8432C1140C0_inline(L_21, NULL);
		V_1 = L_22;
		// _serverEndPoint = sock.LocalEndPoint;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_23 = V_1;
		NullCheck(L_23);
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_24;
		L_24 = Socket_get_LocalEndPoint_m3A2B4E60F0096E2DB31F7C28EF3CDE148D256E26(L_23, NULL);
		__this->____serverEndPoint_5 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____serverEndPoint_5), (void*)L_24);
		// _userEndPoint = sock.RemoteEndPoint;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_25 = V_1;
		NullCheck(L_25);
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_26;
		L_26 = Socket_get_RemoteEndPoint_m6A626481D55A640C7654B91BFDE00199C2C95479(L_25, NULL);
		__this->____userEndPoint_9 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____userEndPoint_9), (void*)L_26);
		// _request = HttpRequest.Read (_stream, 90000);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_27 = __this->____stream_6;
		HttpRequest_tC4EBD60896D30D3F354443F03AB29F7960C5F492* L_28;
		L_28 = HttpRequest_Read_mA128419FCCDDAC96F6CEE541A7A75B3B57F2CA31(L_27, ((int32_t)90000), NULL);
		__this->____request_2 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____request_2), (void*)L_28);
		// _websocket = new WebSocket (this, protocol);
		String_t* L_29 = ___protocol1;
		WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* L_30 = (WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171*)il2cpp_codegen_object_new(WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		WebSocket__ctor_mE04E7ABBD27C86191A8BBE505F6D75B1DC710D83(L_30, __this, L_29, NULL);
		__this->____websocket_10 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____websocket_10), (void*)L_30);
		// }
		return;
	}
}
// WebSocketSharp.Logger WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_Log()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Logger_t53407739C86D76B1D27356B732E39367394F4ABA* TcpListenerWebSocketContext_get_Log_mA08A693769281DDC85B56CF5B36AF26D371FADAE (TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* __this, const RuntimeMethod* method) 
{
	{
		// return _log;
		Logger_t53407739C86D76B1D27356B732E39367394F4ABA* L_0 = __this->____log_0;
		return L_0;
	}
}
// System.IO.Stream WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_Stream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* TcpListenerWebSocketContext_get_Stream_m8878F0CEE9C224C0DECA0F716822E5477CEC0EDD (TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* __this, const RuntimeMethod* method) 
{
	{
		// return _stream;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____stream_6;
		return L_0;
	}
}
// WebSocketSharp.Net.CookieCollection WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_CookieCollection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CookieCollection_tF33A67A4729E8AB85409A8733A7AA4EEC807C6DF* TcpListenerWebSocketContext_get_CookieCollection_mB9D77B428875386FDF6FB261BCA4C73157344FBA (TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* __this, const RuntimeMethod* method) 
{
	{
		// return _request.Cookies;
		HttpRequest_tC4EBD60896D30D3F354443F03AB29F7960C5F492* L_0 = __this->____request_2;
		NullCheck(L_0);
		CookieCollection_tF33A67A4729E8AB85409A8733A7AA4EEC807C6DF* L_1;
		L_1 = HttpRequest_get_Cookies_m642B7144A85351A2FF344FFE459A37FDCDA10852(L_0, NULL);
		return L_1;
	}
}
// System.Collections.Specialized.NameValueCollection WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_Headers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* TcpListenerWebSocketContext_get_Headers_m9379BC5016DE8D6CD69A00BD620C5858FA273368 (TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* __this, const RuntimeMethod* method) 
{
	{
		// return _request.Headers;
		HttpRequest_tC4EBD60896D30D3F354443F03AB29F7960C5F492* L_0 = __this->____request_2;
		NullCheck(L_0);
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_1;
		L_1 = HttpBase_get_Headers_m04F30F8C39D5F5089590FEA1FFAB420481912E7C_inline(L_0, NULL);
		return L_1;
	}
}
// System.String WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_Host()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TcpListenerWebSocketContext_get_Host_m21F989998C226B303E0CA4400284103DD0363CA2 (TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0242F31341D314854DB5EA5749448625B0A0AAE3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _request.Headers["Host"];
		HttpRequest_tC4EBD60896D30D3F354443F03AB29F7960C5F492* L_0 = __this->____request_2;
		NullCheck(L_0);
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_1;
		L_1 = HttpBase_get_Headers_m04F30F8C39D5F5089590FEA1FFAB420481912E7C_inline(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = NameValueCollection_get_Item_mE3ED755803E67BC852123C70EEF8D53774FA635F(L_1, _stringLiteral0242F31341D314854DB5EA5749448625B0A0AAE3, NULL);
		return L_2;
	}
}
// System.Boolean WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_IsAuthenticated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpListenerWebSocketContext_get_IsAuthenticated_mF602F885F626AEDD0AFB9B6324BA10F863EB76A3 (TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* __this, const RuntimeMethod* method) 
{
	{
		// return _user != null;
		RuntimeObject* L_0 = __this->____user_8;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_IsLocal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpListenerWebSocketContext_get_IsLocal_mC9AB8BA3A1FEFCF0B6348E31CBE9801813DA8132 (TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ext_t3CC4EF796122EB13B0AEA2AC31BCC95AB9EB29D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return UserEndPoint.Address.IsLocal ();
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_0;
		L_0 = VirtualFuncInvoker0< IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* >::Invoke(19 /* System.Net.IPEndPoint WebSocketSharp.Net.WebSockets.WebSocketContext::get_UserEndPoint() */, __this);
		NullCheck(L_0);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_1;
		L_1 = IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Ext_t3CC4EF796122EB13B0AEA2AC31BCC95AB9EB29D2_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Ext_IsLocal_m82AE10F6C2025F938DE1813F58352FB456A95F4C(L_1, NULL);
		return L_2;
	}
}
// System.Boolean WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_IsSecureConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpListenerWebSocketContext_get_IsSecureConnection_m688FAD1EF6263673C85848056D04147DA8B2F056 (TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* __this, const RuntimeMethod* method) 
{
	{
		// return _secure;
		bool L_0 = __this->____secure_4;
		return L_0;
	}
}
// System.Boolean WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_IsWebSocketRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpListenerWebSocketContext_get_IsWebSocketRequest_mB050DED0CBFCC15EEB532CA7F9A72B2A43CB1D1F (TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* __this, const RuntimeMethod* method) 
{
	{
		// return _request.IsWebSocketRequest;
		HttpRequest_tC4EBD60896D30D3F354443F03AB29F7960C5F492* L_0 = __this->____request_2;
		NullCheck(L_0);
		bool L_1;
		L_1 = HttpRequest_get_IsWebSocketRequest_mF9E6116BFBC1407F112E022361B2DF8590CB0636(L_0, NULL);
		return L_1;
	}
}
// System.String WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_Origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TcpListenerWebSocketContext_get_Origin_m93F786AD366C1B8C0C96BD16CB1681F75935FD32 (TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral446EBFE0AF15621B72FD60AC796D8BDD96BA7175);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _request.Headers["Origin"];
		HttpRequest_tC4EBD60896D30D3F354443F03AB29F7960C5F492* L_0 = __this->____request_2;
		NullCheck(L_0);
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_1;
		L_1 = HttpBase_get_Headers_m04F30F8C39D5F5089590FEA1FFAB420481912E7C_inline(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = NameValueCollection_get_Item_mE3ED755803E67BC852123C70EEF8D53774FA635F(L_1, _stringLiteral446EBFE0AF15621B72FD60AC796D8BDD96BA7175, NULL);
		return L_2;
	}
}
// System.Collections.Specialized.NameValueCollection WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_QueryString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* TcpListenerWebSocketContext_get_QueryString_m74E14BAFB37FC5B90D9DB04D1917AB9CFD332F34 (TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* V_0 = NULL;
	TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* G_B3_0 = NULL;
	TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* G_B2_0 = NULL;
	String_t* G_B4_0 = NULL;
	TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* G_B4_1 = NULL;
	{
		// if (_queryString == null) {
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_0 = __this->____queryString_1;
		if (L_0)
		{
			goto IL_0031;
		}
	}
	{
		// var uri = RequestUri;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_1;
		L_1 = VirtualFuncInvoker0< Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* >::Invoke(13 /* System.Uri WebSocketSharp.Net.WebSockets.WebSocketContext::get_RequestUri() */, __this);
		V_0 = L_1;
		// _queryString = QueryStringCollection.Parse (
		//                  uri != null ? uri.Query : null,
		//                  Encoding.UTF8
		//                );
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Uri_op_Inequality_m64BE981CDF88B751677B80D883B201BF3CFD83F7(L_2, (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)NULL, NULL);
		G_B2_0 = __this;
		if (L_3)
		{
			G_B3_0 = __this;
			goto IL_001c;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_0;
		goto IL_0022;
	}

IL_001c:
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Uri_get_Query_m17DEC663263C486C8C8177AF9C4BFE2FFBE51178(L_4, NULL);
		G_B4_0 = L_5;
		G_B4_1 = G_B3_0;
	}

IL_0022:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6;
		L_6 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		QueryStringCollection_tF304E01672FC558C1BAB0A634BC78CA51A8AEA11* L_7;
		L_7 = QueryStringCollection_Parse_m8E5EC081BB64307A1C28F31CC3C67E1A9FE5E374(G_B4_0, L_6, NULL);
		NullCheck(G_B4_1);
		G_B4_1->____queryString_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->____queryString_1), (void*)L_7);
	}

IL_0031:
	{
		// return _queryString;
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_8 = __this->____queryString_1;
		return L_8;
	}
}
// System.Uri WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_RequestUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* TcpListenerWebSocketContext_get_RequestUri_mE3D82D84964AAA0D63ADE207DA9ABAD5ECAAAF3C (TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpUtility_t0CB64989ECDD50CC66266E185D56EE86F08EB11B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0242F31341D314854DB5EA5749448625B0A0AAE3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_requestUri == null) {
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = __this->____requestUri_3;
		il2cpp_codegen_runtime_class_init_inline(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Uri_op_Equality_mD7D7AAB7023C0873B37D8B8C7195BEF34002A194(L_0, (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)NULL, NULL);
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		// _requestUri = HttpUtility.CreateRequestUrl (
		//                 _request.RequestUri,
		//                 _request.Headers["Host"],
		//                 _request.IsWebSocketRequest,
		//                 _secure
		//               );
		HttpRequest_tC4EBD60896D30D3F354443F03AB29F7960C5F492* L_2 = __this->____request_2;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = HttpRequest_get_RequestUri_m581094A6BE87E41522283E47D5E8DF29124CEECE_inline(L_2, NULL);
		HttpRequest_tC4EBD60896D30D3F354443F03AB29F7960C5F492* L_4 = __this->____request_2;
		NullCheck(L_4);
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_5;
		L_5 = HttpBase_get_Headers_m04F30F8C39D5F5089590FEA1FFAB420481912E7C_inline(L_4, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = NameValueCollection_get_Item_mE3ED755803E67BC852123C70EEF8D53774FA635F(L_5, _stringLiteral0242F31341D314854DB5EA5749448625B0A0AAE3, NULL);
		HttpRequest_tC4EBD60896D30D3F354443F03AB29F7960C5F492* L_7 = __this->____request_2;
		NullCheck(L_7);
		bool L_8;
		L_8 = HttpRequest_get_IsWebSocketRequest_mF9E6116BFBC1407F112E022361B2DF8590CB0636(L_7, NULL);
		bool L_9 = __this->____secure_4;
		il2cpp_codegen_runtime_class_init_inline(HttpUtility_t0CB64989ECDD50CC66266E185D56EE86F08EB11B_il2cpp_TypeInfo_var);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_10;
		L_10 = HttpUtility_CreateRequestUrl_mDC4FF439D1ED37859BD45F0D71ED08E0AC7E48EA(L_3, L_6, L_8, L_9, NULL);
		__this->____requestUri_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____requestUri_3), (void*)L_10);
	}

IL_004a:
	{
		// return _requestUri;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_11 = __this->____requestUri_3;
		return L_11;
	}
}
// System.String WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_SecWebSocketKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TcpListenerWebSocketContext_get_SecWebSocketKey_m001E2D60A4C1B45CB5BBDC59D8D92FD267AB3A19 (TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7834CF4EF86F7E4B257C99799BE0F2B8C798C97A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _request.Headers["Sec-WebSocket-Key"];
		HttpRequest_tC4EBD60896D30D3F354443F03AB29F7960C5F492* L_0 = __this->____request_2;
		NullCheck(L_0);
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_1;
		L_1 = HttpBase_get_Headers_m04F30F8C39D5F5089590FEA1FFAB420481912E7C_inline(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = NameValueCollection_get_Item_mE3ED755803E67BC852123C70EEF8D53774FA635F(L_1, _stringLiteral7834CF4EF86F7E4B257C99799BE0F2B8C798C97A, NULL);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_SecWebSocketProtocols()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TcpListenerWebSocketContext_get_SecWebSocketProtocols_m124F64D2561D784AAE692BA2E04EDA72ADA9EF15 (TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_SecWebSocketProtocolsU3Ed__39_t8227D89EC3D7A5BF15A302E0EBDE90FEBBF50155_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cget_SecWebSocketProtocolsU3Ed__39_t8227D89EC3D7A5BF15A302E0EBDE90FEBBF50155* L_0 = (U3Cget_SecWebSocketProtocolsU3Ed__39_t8227D89EC3D7A5BF15A302E0EBDE90FEBBF50155*)il2cpp_codegen_object_new(U3Cget_SecWebSocketProtocolsU3Ed__39_t8227D89EC3D7A5BF15A302E0EBDE90FEBBF50155_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3Cget_SecWebSocketProtocolsU3Ed__39__ctor_mD62C3A1645DD803F52F19945D6774B82CF10DA70(L_0, ((int32_t)-2), NULL);
		U3Cget_SecWebSocketProtocolsU3Ed__39_t8227D89EC3D7A5BF15A302E0EBDE90FEBBF50155* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		return L_1;
	}
}
// System.String WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_SecWebSocketVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TcpListenerWebSocketContext_get_SecWebSocketVersion_mF9CE2E645A2A2F736888AF888726C0B9201F1100 (TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17DCB6DC77B5841EDA742002E9E451C700AD1742);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _request.Headers["Sec-WebSocket-Version"];
		HttpRequest_tC4EBD60896D30D3F354443F03AB29F7960C5F492* L_0 = __this->____request_2;
		NullCheck(L_0);
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_1;
		L_1 = HttpBase_get_Headers_m04F30F8C39D5F5089590FEA1FFAB420481912E7C_inline(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = NameValueCollection_get_Item_mE3ED755803E67BC852123C70EEF8D53774FA635F(L_1, _stringLiteral17DCB6DC77B5841EDA742002E9E451C700AD1742, NULL);
		return L_2;
	}
}
// System.Net.IPEndPoint WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_ServerEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* TcpListenerWebSocketContext_get_ServerEndPoint_mD447A0F1C26740B0936B52CD733A6A62F9B5B5F9 (TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (System.Net.IPEndPoint) _serverEndPoint;
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = __this->____serverEndPoint_5;
		return ((IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)CastclassClass((RuntimeObject*)L_0, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var));
	}
}
// System.Security.Principal.IPrincipal WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_User()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TcpListenerWebSocketContext_get_User_m062B3AAC7F5709C72C35F4C4ED1989F134E48C47 (TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* __this, const RuntimeMethod* method) 
{
	{
		// return _user;
		RuntimeObject* L_0 = __this->____user_8;
		return L_0;
	}
}
// System.Net.IPEndPoint WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_UserEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* TcpListenerWebSocketContext_get_UserEndPoint_mD0FC1FC940895DDC1CB1DFCF36EC3AC7B3FEB62D (TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (System.Net.IPEndPoint) _userEndPoint;
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = __this->____userEndPoint_9;
		return ((IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)CastclassClass((RuntimeObject*)L_0, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var));
	}
}
// WebSocketSharp.WebSocket WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_WebSocket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* TcpListenerWebSocketContext_get_WebSocket_m3EF01004397BA85658D18147EEC7F98B3F929FAA (TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* __this, const RuntimeMethod* method) 
{
	{
		// return _websocket;
		WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* L_0 = __this->____websocket_10;
		return L_0;
	}
}
// WebSocketSharp.HttpRequest WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::sendAuthenticationChallenge(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tC4EBD60896D30D3F354443F03AB29F7960C5F492* TcpListenerWebSocketContext_sendAuthenticationChallenge_m2B77ECA83A087A1C61BCB5B93A9D0172084E3EAA (TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* __this, String_t* ___challenge0, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// var res = HttpResponse.CreateUnauthorizedResponse (challenge);
		String_t* L_0 = ___challenge0;
		HttpResponse_tD541C05A3498F1B78E0461EEDDE5BCF6CD3A09AD* L_1;
		L_1 = HttpResponse_CreateUnauthorizedResponse_mCE82B76C1A75B7CDC438B9DC41D1BEB3E3FB2827(L_0, NULL);
		// var bytes = res.ToByteArray ();
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = HttpBase_ToByteArray_m7CF5266464488FA7556CE387A7C348E81300888A(L_1, NULL);
		V_0 = L_2;
		// _stream.Write (bytes, 0, bytes.Length);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = __this->____stream_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		NullCheck(L_5);
		NullCheck(L_3);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, 0, ((int32_t)(((RuntimeArray*)L_5)->max_length)));
		// return HttpRequest.Read (_stream, 15000);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = __this->____stream_6;
		HttpRequest_tC4EBD60896D30D3F354443F03AB29F7960C5F492* L_7;
		L_7 = HttpRequest_Read_mA128419FCCDDAC96F6CEE541A7A75B3B57F2CA31(L_6, ((int32_t)15000), NULL);
		return L_7;
	}
}
// System.Boolean WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::Authenticate(WebSocketSharp.Net.AuthenticationSchemes,System.String,System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpListenerWebSocketContext_Authenticate_m52CF9654C8B28A113F8BF633888D5750DEFC4D45 (TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* __this, int32_t ___scheme0, String_t* ___realm1, Func_2_t15D1CC9486E434EBA5D287D539335A1D72420090* ___credentialsFinder2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationChallenge_tF056169477C958482677E5AA6F46CE3F55C1D14B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass51_0_U3CAuthenticateU3Eb__0_mB929BA8FFD875DE7414887CB41660821FD25D4D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass51_0_t581519BFB0F07914A9105FAE3DE9C6838ECAF454_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass51_0_t581519BFB0F07914A9105FAE3DE9C6838ECAF454* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass51_0_t581519BFB0F07914A9105FAE3DE9C6838ECAF454* L_0 = (U3CU3Ec__DisplayClass51_0_t581519BFB0F07914A9105FAE3DE9C6838ECAF454*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass51_0_t581519BFB0F07914A9105FAE3DE9C6838ECAF454_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass51_0__ctor_mA95D780004D4A9A2CA72564B6B4137C517AE6457(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass51_0_t581519BFB0F07914A9105FAE3DE9C6838ECAF454* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_1), (void*)__this);
		U3CU3Ec__DisplayClass51_0_t581519BFB0F07914A9105FAE3DE9C6838ECAF454* L_2 = V_0;
		int32_t L_3 = ___scheme0;
		NullCheck(L_2);
		L_2->___scheme_2 = L_3;
		U3CU3Ec__DisplayClass51_0_t581519BFB0F07914A9105FAE3DE9C6838ECAF454* L_4 = V_0;
		String_t* L_5 = ___realm1;
		NullCheck(L_4);
		L_4->___realm_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___realm_3), (void*)L_5);
		U3CU3Ec__DisplayClass51_0_t581519BFB0F07914A9105FAE3DE9C6838ECAF454* L_6 = V_0;
		Func_2_t15D1CC9486E434EBA5D287D539335A1D72420090* L_7 = ___credentialsFinder2;
		NullCheck(L_6);
		L_6->___credentialsFinder_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___credentialsFinder_4), (void*)L_7);
		// var chal = new AuthenticationChallenge (scheme, realm).ToString ();
		U3CU3Ec__DisplayClass51_0_t581519BFB0F07914A9105FAE3DE9C6838ECAF454* L_8 = V_0;
		U3CU3Ec__DisplayClass51_0_t581519BFB0F07914A9105FAE3DE9C6838ECAF454* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = L_9->___scheme_2;
		U3CU3Ec__DisplayClass51_0_t581519BFB0F07914A9105FAE3DE9C6838ECAF454* L_11 = V_0;
		NullCheck(L_11);
		String_t* L_12 = L_11->___realm_3;
		AuthenticationChallenge_tF056169477C958482677E5AA6F46CE3F55C1D14B* L_13 = (AuthenticationChallenge_tF056169477C958482677E5AA6F46CE3F55C1D14B*)il2cpp_codegen_object_new(AuthenticationChallenge_tF056169477C958482677E5AA6F46CE3F55C1D14B_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		AuthenticationChallenge__ctor_m14E59FE170A99E14BD5DB30ECBFA41CF7D89E99C(L_13, L_10, L_12, NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		NullCheck(L_8);
		L_8->___chal_5 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___chal_5), (void*)L_14);
		// var retry = -1;
		U3CU3Ec__DisplayClass51_0_t581519BFB0F07914A9105FAE3DE9C6838ECAF454* L_15 = V_0;
		NullCheck(L_15);
		L_15->___retry_0 = (-1);
		// Func<bool> auth = null;
		U3CU3Ec__DisplayClass51_0_t581519BFB0F07914A9105FAE3DE9C6838ECAF454* L_16 = V_0;
		NullCheck(L_16);
		L_16->___auth_6 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->___auth_6), (void*)(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)NULL);
		// auth =
		//   () => {
		//     retry++;
		//     if (retry > 99)
		//       return false;
		// 
		//     var user = HttpUtility.CreateUser (
		//                  _request.Headers["Authorization"],
		//                  scheme,
		//                  realm,
		//                  _request.HttpMethod,
		//                  credentialsFinder
		//                );
		// 
		//     if (user != null && user.Identity.IsAuthenticated) {
		//       _user = user;
		//       return true;
		//     }
		// 
		//     _request = sendAuthenticationChallenge (chal);
		//     return auth ();
		//   };
		U3CU3Ec__DisplayClass51_0_t581519BFB0F07914A9105FAE3DE9C6838ECAF454* L_17 = V_0;
		U3CU3Ec__DisplayClass51_0_t581519BFB0F07914A9105FAE3DE9C6838ECAF454* L_18 = V_0;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_19 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_19, L_18, (intptr_t)((void*)U3CU3Ec__DisplayClass51_0_U3CAuthenticateU3Eb__0_mB929BA8FFD875DE7414887CB41660821FD25D4D9_RuntimeMethod_var), NULL);
		NullCheck(L_17);
		L_17->___auth_6 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___auth_6), (void*)L_19);
		// return auth ();
		U3CU3Ec__DisplayClass51_0_t581519BFB0F07914A9105FAE3DE9C6838ECAF454* L_20 = V_0;
		NullCheck(L_20);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_21 = L_20->___auth_6;
		NullCheck(L_21);
		bool L_22;
		L_22 = Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_inline(L_21, NULL);
		return L_22;
	}
}
// System.Void WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpListenerWebSocketContext_Close_mD9D4E9EEDDFF3372B361E87A0DBC901D60FAF3C7 (TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* __this, const RuntimeMethod* method) 
{
	{
		// _stream.Close ();
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____stream_6;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(20 /* System.Void System.IO.Stream::Close() */, L_0);
		// _tcpClient.Close ();
		TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* L_1 = __this->____tcpClient_7;
		NullCheck(L_1);
		TcpClient_Close_m03E0ED4E4BA87B3F1ED17585AB1327ED76F5FE89(L_1, NULL);
		// }
		return;
	}
}
// System.Void WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::Close(WebSocketSharp.Net.HttpStatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpListenerWebSocketContext_Close_m1F39994A986FE836A27D50258B548FAE62E51A58 (TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* __this, int32_t ___code0, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// var res = HttpResponse.CreateCloseResponse (code);
		int32_t L_0 = ___code0;
		HttpResponse_tD541C05A3498F1B78E0461EEDDE5BCF6CD3A09AD* L_1;
		L_1 = HttpResponse_CreateCloseResponse_mE37E2E1B2CC7D1814832A305FD1502179B2D0806(L_0, NULL);
		// var bytes = res.ToByteArray ();
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = HttpBase_ToByteArray_m7CF5266464488FA7556CE387A7C348E81300888A(L_1, NULL);
		V_0 = L_2;
		// _stream.Write (bytes, 0, bytes.Length);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = __this->____stream_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		NullCheck(L_5);
		NullCheck(L_3);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, 0, ((int32_t)(((RuntimeArray*)L_5)->max_length)));
		// _stream.Close ();
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = __this->____stream_6;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(20 /* System.Void System.IO.Stream::Close() */, L_6);
		// _tcpClient.Close ();
		TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* L_7 = __this->____tcpClient_7;
		NullCheck(L_7);
		TcpClient_Close_m03E0ED4E4BA87B3F1ED17585AB1327ED76F5FE89(L_7, NULL);
		// }
		return;
	}
}
// System.String WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TcpListenerWebSocketContext_ToString_m9F991D87388E91B8322C3CCCF6B18EB20B14E5D4 (TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* __this, const RuntimeMethod* method) 
{
	{
		// return _request.ToString ();
		HttpRequest_tC4EBD60896D30D3F354443F03AB29F7960C5F492* L_0 = __this->____request_2;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
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
// System.Void WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<get_SecWebSocketProtocols>d__39::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_SecWebSocketProtocolsU3Ed__39__ctor_mD62C3A1645DD803F52F19945D6774B82CF10DA70 (U3Cget_SecWebSocketProtocolsU3Ed__39_t8227D89EC3D7A5BF15A302E0EBDE90FEBBF50155* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<get_SecWebSocketProtocols>d__39::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_SecWebSocketProtocolsU3Ed__39_System_IDisposable_Dispose_mCF6D50FAD84C7AFB55EABE7875959E92C2449177 (U3Cget_SecWebSocketProtocolsU3Ed__39_t8227D89EC3D7A5BF15A302E0EBDE90FEBBF50155* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<get_SecWebSocketProtocols>d__39::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_SecWebSocketProtocolsU3Ed__39_MoveNext_m992FFC40FE9E7C8CD8FDB50BE7CC8175A0CEB17E (U3Cget_SecWebSocketProtocolsU3Ed__39_t8227D89EC3D7A5BF15A302E0EBDE90FEBBF50155* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33B3063694EC42095FDB4F99AF7DCB5B4014CBA6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* L_1 = __this->___U3CU3E4__this_3;
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
			goto IL_0084;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var val = _request.Headers["Sec-WebSocket-Protocol"];
		TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* L_4 = V_1;
		NullCheck(L_4);
		HttpRequest_tC4EBD60896D30D3F354443F03AB29F7960C5F492* L_5 = L_4->____request_2;
		NullCheck(L_5);
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_6;
		L_6 = HttpBase_get_Headers_m04F30F8C39D5F5089590FEA1FFAB420481912E7C_inline(L_5, NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = NameValueCollection_get_Item_mE3ED755803E67BC852123C70EEF8D53774FA635F(L_6, _stringLiteral33B3063694EC42095FDB4F99AF7DCB5B4014CBA6, NULL);
		V_2 = L_7;
		// if (val == null || val.Length == 0)
		String_t* L_8 = V_2;
		if (!L_8)
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_9 = V_2;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_9, NULL);
		if (L_10)
		{
			goto IL_0041;
		}
	}

IL_003f:
	{
		// yield break;
		return (bool)0;
	}

IL_0041:
	{
		// foreach (var elm in val.Split (',')) {
		String_t* L_11 = V_2;
		NullCheck(L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12;
		L_12 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_11, ((int32_t)44), 0, NULL);
		__this->___U3CU3E7__wrap1_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_4), (void*)L_12);
		__this->___U3CU3E7__wrap2_5 = 0;
		goto IL_0099;
	}

IL_0059:
	{
		// foreach (var elm in val.Split (',')) {
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = __this->___U3CU3E7__wrap1_4;
		int32_t L_14 = __this->___U3CU3E7__wrap2_5;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		String_t* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		// var protocol = elm.Trim ();
		NullCheck(L_16);
		String_t* L_17;
		L_17 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_16, NULL);
		V_3 = L_17;
		// if (protocol.Length == 0)
		String_t* L_18 = V_3;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		// yield return protocol;
		String_t* L_20 = V_3;
		__this->___U3CU3E2__current_1 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_20);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0084:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_008b:
	{
		int32_t L_21 = __this->___U3CU3E7__wrap2_5;
		__this->___U3CU3E7__wrap2_5 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0099:
	{
		// foreach (var elm in val.Split (',')) {
		int32_t L_22 = __this->___U3CU3E7__wrap2_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = __this->___U3CU3E7__wrap1_4;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0059;
		}
	}
	{
		__this->___U3CU3E7__wrap1_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_4), (void*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL);
		// }
		return (bool)0;
	}
}
// System.String WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<get_SecWebSocketProtocols>d__39::System.Collections.Generic.IEnumerator<System.String>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3Cget_SecWebSocketProtocolsU3Ed__39_System_Collections_Generic_IEnumeratorU3CSystem_StringU3E_get_Current_mBFA9B50323ED5851C9D61312CC5A0C6E1E766C13 (U3Cget_SecWebSocketProtocolsU3Ed__39_t8227D89EC3D7A5BF15A302E0EBDE90FEBBF50155* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<get_SecWebSocketProtocols>d__39::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_SecWebSocketProtocolsU3Ed__39_System_Collections_IEnumerator_Reset_mB16C06729C80E77DCD96006503EAEAC909C748B2 (U3Cget_SecWebSocketProtocolsU3Ed__39_t8227D89EC3D7A5BF15A302E0EBDE90FEBBF50155* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_SecWebSocketProtocolsU3Ed__39_System_Collections_IEnumerator_Reset_mB16C06729C80E77DCD96006503EAEAC909C748B2_RuntimeMethod_var)));
	}
}
// System.Object WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<get_SecWebSocketProtocols>d__39::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_SecWebSocketProtocolsU3Ed__39_System_Collections_IEnumerator_get_Current_mAE7776300FCD184565F995810D4CCBA0BE9E9F0C (U3Cget_SecWebSocketProtocolsU3Ed__39_t8227D89EC3D7A5BF15A302E0EBDE90FEBBF50155* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.String> WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<get_SecWebSocketProtocols>d__39::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_SecWebSocketProtocolsU3Ed__39_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_mF4E7F6CEC0F16612D6560E8B63ACBA94A05CE4D7 (U3Cget_SecWebSocketProtocolsU3Ed__39_t8227D89EC3D7A5BF15A302E0EBDE90FEBBF50155* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_SecWebSocketProtocolsU3Ed__39_t8227D89EC3D7A5BF15A302E0EBDE90FEBBF50155_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_SecWebSocketProtocolsU3Ed__39_t8227D89EC3D7A5BF15A302E0EBDE90FEBBF50155* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_SecWebSocketProtocolsU3Ed__39_t8227D89EC3D7A5BF15A302E0EBDE90FEBBF50155* L_3 = (U3Cget_SecWebSocketProtocolsU3Ed__39_t8227D89EC3D7A5BF15A302E0EBDE90FEBBF50155*)il2cpp_codegen_object_new(U3Cget_SecWebSocketProtocolsU3Ed__39_t8227D89EC3D7A5BF15A302E0EBDE90FEBBF50155_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3Cget_SecWebSocketProtocolsU3Ed__39__ctor_mD62C3A1645DD803F52F19945D6774B82CF10DA70(L_3, 0, NULL);
		V_0 = L_3;
		U3Cget_SecWebSocketProtocolsU3Ed__39_t8227D89EC3D7A5BF15A302E0EBDE90FEBBF50155* L_4 = V_0;
		TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* L_5 = __this->___U3CU3E4__this_3;
		NullCheck(L_4);
		L_4->___U3CU3E4__this_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this_3), (void*)L_5);
	}

IL_0035:
	{
		U3Cget_SecWebSocketProtocolsU3Ed__39_t8227D89EC3D7A5BF15A302E0EBDE90FEBBF50155* L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<get_SecWebSocketProtocols>d__39::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_SecWebSocketProtocolsU3Ed__39_System_Collections_IEnumerable_GetEnumerator_mC601126AF43102F8261DBA182C6AD9FACF43730F (U3Cget_SecWebSocketProtocolsU3Ed__39_t8227D89EC3D7A5BF15A302E0EBDE90FEBBF50155* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_SecWebSocketProtocolsU3Ed__39_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_mF4E7F6CEC0F16612D6560E8B63ACBA94A05CE4D7(__this, NULL);
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
// System.Void WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<>c__DisplayClass51_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass51_0__ctor_mA95D780004D4A9A2CA72564B6B4137C517AE6457 (U3CU3Ec__DisplayClass51_0_t581519BFB0F07914A9105FAE3DE9C6838ECAF454* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<>c__DisplayClass51_0::<Authenticate>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass51_0_U3CAuthenticateU3Eb__0_mB929BA8FFD875DE7414887CB41660821FD25D4D9 (U3CU3Ec__DisplayClass51_0_t581519BFB0F07914A9105FAE3DE9C6838ECAF454* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpUtility_t0CB64989ECDD50CC66266E185D56EE86F08EB11B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIdentity_tBB5D8B8DE9EC3D8C9F92BB7038257E31E488896A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// retry++;
		int32_t L_0 = __this->___retry_0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		__this->___retry_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		// if (retry > 99)
		int32_t L_2 = __this->___retry_0;
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)99))))
		{
			goto IL_001c;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001c:
	{
		// var user = HttpUtility.CreateUser (
		//              _request.Headers["Authorization"],
		//              scheme,
		//              realm,
		//              _request.HttpMethod,
		//              credentialsFinder
		//            );
		TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* L_3 = __this->___U3CU3E4__this_1;
		NullCheck(L_3);
		HttpRequest_tC4EBD60896D30D3F354443F03AB29F7960C5F492* L_4 = L_3->____request_2;
		NullCheck(L_4);
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_5;
		L_5 = HttpBase_get_Headers_m04F30F8C39D5F5089590FEA1FFAB420481912E7C_inline(L_4, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = NameValueCollection_get_Item_mE3ED755803E67BC852123C70EEF8D53774FA635F(L_5, _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907, NULL);
		int32_t L_7 = __this->___scheme_2;
		String_t* L_8 = __this->___realm_3;
		TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* L_9 = __this->___U3CU3E4__this_1;
		NullCheck(L_9);
		HttpRequest_tC4EBD60896D30D3F354443F03AB29F7960C5F492* L_10 = L_9->____request_2;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = HttpRequest_get_HttpMethod_m08FC9EA28184859CD01C6B257823482E0801E37D_inline(L_10, NULL);
		Func_2_t15D1CC9486E434EBA5D287D539335A1D72420090* L_12 = __this->___credentialsFinder_4;
		il2cpp_codegen_runtime_class_init_inline(HttpUtility_t0CB64989ECDD50CC66266E185D56EE86F08EB11B_il2cpp_TypeInfo_var);
		RuntimeObject* L_13;
		L_13 = HttpUtility_CreateUser_mE6741DC0DDD973A8593F2C150A6A852EA2F6F251(L_6, L_7, L_8, L_11, L_12, NULL);
		V_0 = L_13;
		// if (user != null && user.Identity.IsAuthenticated) {
		RuntimeObject* L_14 = V_0;
		if (!L_14)
		{
			goto IL_007c;
		}
	}
	{
		RuntimeObject* L_15 = V_0;
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Security.Principal.IIdentity System.Security.Principal.IPrincipal::get_Identity() */, IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_16);
		bool L_17;
		L_17 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean System.Security.Principal.IIdentity::get_IsAuthenticated() */, IIdentity_tBB5D8B8DE9EC3D8C9F92BB7038257E31E488896A_il2cpp_TypeInfo_var, L_16);
		if (!L_17)
		{
			goto IL_007c;
		}
	}
	{
		// _user = user;
		TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* L_18 = __this->___U3CU3E4__this_1;
		RuntimeObject* L_19 = V_0;
		NullCheck(L_18);
		L_18->____user_8 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->____user_8), (void*)L_19);
		// return true;
		return (bool)1;
	}

IL_007c:
	{
		// _request = sendAuthenticationChallenge (chal);
		TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* L_20 = __this->___U3CU3E4__this_1;
		TcpListenerWebSocketContext_t952B3C37F12B5BFA96111A5EF850706571B65B6D* L_21 = __this->___U3CU3E4__this_1;
		String_t* L_22 = __this->___chal_5;
		NullCheck(L_21);
		HttpRequest_tC4EBD60896D30D3F354443F03AB29F7960C5F492* L_23;
		L_23 = TcpListenerWebSocketContext_sendAuthenticationChallenge_m2B77ECA83A087A1C61BCB5B93A9D0172084E3EAA(L_21, L_22, NULL);
		NullCheck(L_20);
		L_20->____request_2 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->____request_2), (void*)L_23);
		// return auth ();
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_24 = __this->___auth_6;
		NullCheck(L_24);
		bool L_25;
		L_25 = Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_inline(L_24, NULL);
		return L_25;
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
// System.Void WebSocketSharp.Net.WebSockets.WebSocketContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketContext__ctor_m8E95F5823E493B474C8F9E24A73E7C6564CFA83C (WebSocketContext_t210263DD230B87766F206EC3DDBC301B24F5748B* __this, const RuntimeMethod* method) 
{
	{
		// protected WebSocketContext ()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Collections.Generic.Queue`1<Netcode.Transports.WebSocket.WebSocketEvent> Netcode.Transports.WebSocket.NativeWebSocketClient::get_EventQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10* NativeWebSocketClient_get_EventQueue_mD5D6BEB913A28A893EABA22ACC3095E429D809D8 (NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B* __this, const RuntimeMethod* method) 
{
	{
		// public Queue<WebSocketEvent> EventQueue { get; } = new Queue<WebSocketEvent>();
		Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10* L_0 = __this->___U3CEventQueueU3Ek__BackingField_2;
		return L_0;
	}
}
// System.UInt64 Netcode.Transports.WebSocket.NativeWebSocketClient::get_WaitTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NativeWebSocketClient_get_WaitTime_mCCA808F5F038514EDFCAD9721A65EF90D44E43EE (NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B* __this, const RuntimeMethod* method) 
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return (ulong)Connection.WaitTime.Milliseconds;
		WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* L_0 = __this->___Connection_1;
		NullCheck(L_0);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1;
		L_1 = WebSocket_get_WaitTime_m1F9DADF61FDAE43664C81C6D3F58CCD97A01653E_inline(L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = TimeSpan_get_Milliseconds_m09D9D6D0033D5FBC62A3C4007CC716A85F4FC8EA((&V_0), NULL);
		return ((int64_t)L_2);
	}
}
// WebSocketSharp.WebSocketState Netcode.Transports.WebSocket.NativeWebSocketClient::get_ReadyState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t NativeWebSocketClient_get_ReadyState_mD77A7665DCF42D50BEE67DB763D2C5E383DEF33C (NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B* __this, const RuntimeMethod* method) 
{
	WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* G_B2_0 = NULL;
	WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* G_B1_0 = NULL;
	{
		// return Connection?.ReadyState ?? WebSocketState.Closed;
		WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* L_0 = __this->___Connection_1;
		WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (uint16_t)(3);
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		uint16_t L_2;
		L_2 = WebSocket_get_ReadyState_m740791C3B269FAFFB16C67D105C416E3C7A90418(G_B2_0, NULL);
		return L_2;
	}
}
// System.Void Netcode.Transports.WebSocket.NativeWebSocketClient::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebSocketClient__ctor_m702BD181F76BF363E36DD901D3353FDF09D3572E (NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B* __this, String_t* ___url0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t26C98047352625FB580C2AB0368052211F6CC24E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t83FB68A622E9BE4A5F2DE4B25A49199E64387714_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tE64C66477C8D3A58B6645C9F015B5AD78E47C08B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeWebSocketClient_OnClose_mF2A60104C8EC3495DE2F9F008F286A3C44700199_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeWebSocketClient_OnError_m1BCB9E7687F1E1F07712FDA9964FF6239E797BB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeWebSocketClient_OnMessage_mECCC6BBCE17E879C37EDE0FA5FB850038BB95AB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeWebSocketClient_OnOpen_m2B9C86865A39B36E066351A4196C1CA405D60B6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mFACE75E8CAEA49C2487FA67C243F15DAFC67357E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Queue<WebSocketEvent> EventQueue { get; } = new Queue<WebSocketEvent>();
		Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10* L_0 = (Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10*)il2cpp_codegen_object_new(Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Queue_1__ctor_mFACE75E8CAEA49C2487FA67C243F15DAFC67357E(L_0, Queue_1__ctor_mFACE75E8CAEA49C2487FA67C243F15DAFC67357E_RuntimeMethod_var);
		__this->___U3CEventQueueU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEventQueueU3Ek__BackingField_2), (void*)L_0);
		// public NativeWebSocketClient(string url)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Connection = new WebSocketSharp.WebSocket(url);
		String_t* L_1 = ___url0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_inline(Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var);
		WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* L_3 = (WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171*)il2cpp_codegen_object_new(WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WebSocket__ctor_m0D66F66AAE0852B2B80C083F36748C722F9DC392(L_3, L_1, L_2, NULL);
		__this->___Connection_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Connection_1), (void*)L_3);
		// Connection.OnOpen += OnOpen;
		WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* L_4 = __this->___Connection_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_5, __this, (intptr_t)((void*)NativeWebSocketClient_OnOpen_m2B9C86865A39B36E066351A4196C1CA405D60B6E_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		WebSocket_add_OnOpen_m42C3B580DF83E8339700646E11E6E0115B12129C(L_4, L_5, NULL);
		// Connection.OnMessage += OnMessage;
		WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* L_6 = __this->___Connection_1;
		EventHandler_1_t83FB68A622E9BE4A5F2DE4B25A49199E64387714* L_7 = (EventHandler_1_t83FB68A622E9BE4A5F2DE4B25A49199E64387714*)il2cpp_codegen_object_new(EventHandler_1_t83FB68A622E9BE4A5F2DE4B25A49199E64387714_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		EventHandler_1__ctor_m805D083EA11F9EC453468D846499F9CB7B88E37F(L_7, __this, (intptr_t)((void*)NativeWebSocketClient_OnMessage_mECCC6BBCE17E879C37EDE0FA5FB850038BB95AB2_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		WebSocket_add_OnMessage_m31C182B4DC435DE0F23D208855CDA8F8E0488518(L_6, L_7, NULL);
		// Connection.OnError += OnError;
		WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* L_8 = __this->___Connection_1;
		EventHandler_1_t26C98047352625FB580C2AB0368052211F6CC24E* L_9 = (EventHandler_1_t26C98047352625FB580C2AB0368052211F6CC24E*)il2cpp_codegen_object_new(EventHandler_1_t26C98047352625FB580C2AB0368052211F6CC24E_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		EventHandler_1__ctor_m350381C8E2EB938DC2A035B980E1CE2CA0F4C499(L_9, __this, (intptr_t)((void*)NativeWebSocketClient_OnError_m1BCB9E7687F1E1F07712FDA9964FF6239E797BB1_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		WebSocket_add_OnError_mADC0BE6EB6FFA23E69A57AAC5D66077FB5331639(L_8, L_9, NULL);
		// Connection.OnClose += OnClose;
		WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* L_10 = __this->___Connection_1;
		EventHandler_1_tE64C66477C8D3A58B6645C9F015B5AD78E47C08B* L_11 = (EventHandler_1_tE64C66477C8D3A58B6645C9F015B5AD78E47C08B*)il2cpp_codegen_object_new(EventHandler_1_tE64C66477C8D3A58B6645C9F015B5AD78E47C08B_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		EventHandler_1__ctor_m0CE12814032CFB68D86632690A17E46716360774(L_11, __this, (intptr_t)((void*)NativeWebSocketClient_OnClose_mF2A60104C8EC3495DE2F9F008F286A3C44700199_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		WebSocket_add_OnClose_mBCE837EB5C3C5B4253E55D7F56A6BD3B9F3122FF(L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void Netcode.Transports.WebSocket.NativeWebSocketClient::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebSocketClient_Connect_mE3CD3A7E905567BEE70FD0B0D2A4F2A74DA41592 (NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B* __this, const RuntimeMethod* method) 
{
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (ReadyState == WebSocketSharp.WebSocketState.Open)
		uint16_t L_0;
		L_0 = NativeWebSocketClient_get_ReadyState_mD77A7665DCF42D50BEE67DB763D2C5E383DEF33C(__this, NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0014;
		}
	}
	{
		// throw new InvalidOperationException("Socket is already open");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC992B97C25BAA8390F09D138A31A939A948EE437)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeWebSocketClient_Connect_mE3CD3A7E905567BEE70FD0B0D2A4F2A74DA41592_RuntimeMethod_var)));
	}

IL_0014:
	{
		// if (ReadyState == WebSocketSharp.WebSocketState.Closing)
		uint16_t L_2;
		L_2 = NativeWebSocketClient_get_ReadyState_mD77A7665DCF42D50BEE67DB763D2C5E383DEF33C(__this, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_0028;
		}
	}
	{
		// throw new InvalidOperationException("Socket is closing");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7BC336A27F57F20AF6E78FD9E8FEBEE28598343)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeWebSocketClient_Connect_mE3CD3A7E905567BEE70FD0B0D2A4F2A74DA41592_RuntimeMethod_var)));
	}

IL_0028:
	{
	}
	try
	{// begin try (depth: 1)
		// Connection.Connect();
		WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* L_4 = __this->___Connection_1;
		NullCheck(L_4);
		WebSocket_Connect_m3071958A89ED8EA13F9B07B254E7B748D776E66A(L_4, NULL);
		// }
		goto IL_0043;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0036;
		}
		throw e;
	}

CATCH_0036:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_0 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// throw new WebSocketException("Connection failed", e);
		Exception_t* L_5 = V_0;
		WebSocketException_tB3A36C56AA2ACFE8E6E58AC75DB700A08B940A3C* L_6 = (WebSocketException_tB3A36C56AA2ACFE8E6E58AC75DB700A08B940A3C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocketException_tB3A36C56AA2ACFE8E6E58AC75DB700A08B940A3C_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		WebSocketException__ctor_m959EAC51C84A45BFCE29D1D8D7C35BC99DD86402(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B05881D969F55B8A024BCEBD4B48AB5645311B5)), L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeWebSocketClient_Connect_mE3CD3A7E905567BEE70FD0B0D2A4F2A74DA41592_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0043:
	{
		// }
		return;
	}
}
// System.Void Netcode.Transports.WebSocket.NativeWebSocketClient::Close(WebSocketSharp.CloseStatusCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebSocketClient_Close_mA13175B8B9EF237C52EFCF61ECEE67CCFC02490F (NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B* __this, uint16_t ___code0, String_t* ___reason1, const RuntimeMethod* method) 
{
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (ReadyState == WebSocketSharp.WebSocketState.Closing)
		uint16_t L_0;
		L_0 = NativeWebSocketClient_get_ReadyState_mD77A7665DCF42D50BEE67DB763D2C5E383DEF33C(__this, NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0014;
		}
	}
	{
		// throw new InvalidOperationException("Socket is already closing");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral016883CC2D11508514732ED5F0D7359E02501158)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeWebSocketClient_Close_mA13175B8B9EF237C52EFCF61ECEE67CCFC02490F_RuntimeMethod_var)));
	}

IL_0014:
	{
		// if (ReadyState == WebSocketSharp.WebSocketState.Closed)
		uint16_t L_2;
		L_2 = NativeWebSocketClient_get_ReadyState_mD77A7665DCF42D50BEE67DB763D2C5E383DEF33C(__this, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)3))))
		{
			goto IL_0028;
		}
	}
	{
		// throw new InvalidOperationException("Socket is already closed");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral65750519211B02676B1D8242D58F149E2CCC7A0B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeWebSocketClient_Close_mA13175B8B9EF237C52EFCF61ECEE67CCFC02490F_RuntimeMethod_var)));
	}

IL_0028:
	{
	}
	try
	{// begin try (depth: 1)
		// Connection.Close(code, reason);
		WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* L_4 = __this->___Connection_1;
		uint16_t L_5 = ___code0;
		String_t* L_6 = ___reason1;
		NullCheck(L_4);
		WebSocket_Close_m3811640FFD4E49EB174A63103072757860C0203B(L_4, L_5, L_6, NULL);
		// }
		goto IL_0045;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0038;
		}
		throw e;
	}

CATCH_0038:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_0 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// throw new WebSocketException("Could not close socket", e);
		Exception_t* L_7 = V_0;
		WebSocketException_tB3A36C56AA2ACFE8E6E58AC75DB700A08B940A3C* L_8 = (WebSocketException_tB3A36C56AA2ACFE8E6E58AC75DB700A08B940A3C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocketException_tB3A36C56AA2ACFE8E6E58AC75DB700A08B940A3C_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		WebSocketException__ctor_m959EAC51C84A45BFCE29D1D8D7C35BC99DD86402(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCDC87456366F1F84EF88ED47E4FCD54786C1FF2C)), L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeWebSocketClient_Close_mA13175B8B9EF237C52EFCF61ECEE67CCFC02490F_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0045:
	{
		// }
		return;
	}
}
// System.Void Netcode.Transports.WebSocket.NativeWebSocketClient::Send(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebSocketClient_Send_m79C3D9D7848D5DE9FC4AA6AC9B10934FCC794B26 (NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (ReadyState != WebSocketSharp.WebSocketState.Open)
		uint16_t L_0;
		L_0 = NativeWebSocketClient_get_ReadyState_mD77A7665DCF42D50BEE67DB763D2C5E383DEF33C(__this, NULL);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		// throw new WebSocketException("Socket is not open");
		WebSocketException_tB3A36C56AA2ACFE8E6E58AC75DB700A08B940A3C* L_1 = (WebSocketException_tB3A36C56AA2ACFE8E6E58AC75DB700A08B940A3C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocketException_tB3A36C56AA2ACFE8E6E58AC75DB700A08B940A3C_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		WebSocketException__ctor_m808671308609F84384340A8084CC71B5BE052219(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3299F571BBF7C6F21CF1E9B8CA0239E502AFCB4D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeWebSocketClient_Send_m79C3D9D7848D5DE9FC4AA6AC9B10934FCC794B26_RuntimeMethod_var)));
	}

IL_0014:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// if (data.Offset > 0 || data.Count < data.Array.Length)
			int32_t L_2;
			L_2 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&___data0), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
			if ((((int32_t)L_2) > ((int32_t)0)))
			{
				goto IL_0031_1;
			}
		}
		{
			int32_t L_3;
			L_3 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___data0), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
			L_4 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&___data0), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
			NullCheck(L_4);
			if ((((int32_t)L_3) >= ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
			{
				goto IL_0068_1;
			}
		}

IL_0031_1:
		{
			// byte[] buf = new byte[data.Count];
			int32_t L_5;
			L_5 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___data0), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_5);
			V_0 = L_6;
			// Buffer.BlockCopy(data.Array, data.Offset, buf, 0, data.Count);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&___data0), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
			int32_t L_8;
			L_8 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&___data0), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
			int32_t L_10;
			L_10 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___data0), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
			Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, 0, L_10, NULL);
			// Connection.Send(buf);
			WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* L_11 = __this->___Connection_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
			NullCheck(L_11);
			WebSocket_Send_mCB3ED89CD2946491F79910EE01042EFCC475B6EC(L_11, L_12, NULL);
			goto IL_007a_1;
		}

IL_0068_1:
		{
			// Connection.Send(data.Array);
			WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* L_13 = __this->___Connection_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
			L_14 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&___data0), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
			NullCheck(L_13);
			WebSocket_Send_mCB3ED89CD2946491F79910EE01042EFCC475B6EC(L_13, L_14, NULL);
		}

IL_007a_1:
		{
			// }
			goto IL_0089;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007c;
		}
		throw e;
	}

CATCH_007c:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// throw new WebSocketException("Unknown error while sending the message", e);
		Exception_t* L_15 = V_1;
		WebSocketException_tB3A36C56AA2ACFE8E6E58AC75DB700A08B940A3C* L_16 = (WebSocketException_tB3A36C56AA2ACFE8E6E58AC75DB700A08B940A3C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocketException_tB3A36C56AA2ACFE8E6E58AC75DB700A08B940A3C_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		WebSocketException__ctor_m959EAC51C84A45BFCE29D1D8D7C35BC99DD86402(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEBFF2F7F7EA10913C8B5F989BA54092697153269)), L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeWebSocketClient_Send_m79C3D9D7848D5DE9FC4AA6AC9B10934FCC794B26_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0089:
	{
		// }
		return;
	}
}
// Netcode.Transports.WebSocket.WebSocketEvent Netcode.Transports.WebSocket.NativeWebSocketClient::Poll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* NativeWebSocketClient_Poll_m911724E4F4F29D66E896DDD4FAFF42C7768D29D1 (NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m83073538B9EDC7DA9AC9239902E95E5C3AAC5666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m51C468F12B79CB459E75FFF1A9ED64067800C8FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* V_2 = NULL;
	{
		// lock (ConnectionLock)
		il2cpp_codegen_runtime_class_init_inline(NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B_StaticFields*)il2cpp_codegen_static_fields_for(NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B_il2cpp_TypeInfo_var))->___ConnectionLock_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0058:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0061;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0061:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				// if (EventQueue.Count > 0)
				Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10* L_4;
				L_4 = NativeWebSocketClient_get_EventQueue_mD5D6BEB913A28A893EABA22ACC3095E429D809D8_inline(__this, NULL);
				NullCheck(L_4);
				int32_t L_5;
				L_5 = Queue_1_get_Count_m51C468F12B79CB459E75FFF1A9ED64067800C8FA_inline(L_4, Queue_1_get_Count_m51C468F12B79CB459E75FFF1A9ED64067800C8FA_RuntimeMethod_var);
				if ((((int32_t)L_5) <= ((int32_t)0)))
				{
					goto IL_002c_1;
				}
			}
			{
				// return EventQueue.Dequeue();
				Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10* L_6;
				L_6 = NativeWebSocketClient_get_EventQueue_mD5D6BEB913A28A893EABA22ACC3095E429D809D8_inline(__this, NULL);
				NullCheck(L_6);
				WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_7;
				L_7 = Queue_1_Dequeue_m83073538B9EDC7DA9AC9239902E95E5C3AAC5666(L_6, Queue_1_Dequeue_m83073538B9EDC7DA9AC9239902E95E5C3AAC5666_RuntimeMethod_var);
				V_2 = L_7;
				goto IL_0062;
			}

IL_002c_1:
			{
				// return new WebSocketEvent()
				// {
				//     ClientId = 0,
				//     Payload = null,
				//     Type = WebSocketEvent.WebSocketEventType.Nothing,
				//     Error = null,
				//     Reason = null
				// };
				WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_8 = (WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434*)il2cpp_codegen_object_new(WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434_il2cpp_TypeInfo_var);
				NullCheck(L_8);
				WebSocketEvent__ctor_m1115093A79E6BB0D3F0133B73BB122B9BD5E26A9(L_8, NULL);
				WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_9 = L_8;
				NullCheck(L_9);
				L_9->___ClientId_1 = ((int64_t)0);
				WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_10 = L_9;
				NullCheck(L_10);
				L_10->___Payload_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&L_10->___Payload_2), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
				WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_11 = L_10;
				NullCheck(L_11);
				L_11->___Type_0 = 0;
				WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_12 = L_11;
				NullCheck(L_12);
				L_12->___Error_3 = (String_t*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&L_12->___Error_3), (void*)(String_t*)NULL);
				WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_13 = L_12;
				NullCheck(L_13);
				L_13->___Reason_4 = (String_t*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&L_13->___Reason_4), (void*)(String_t*)NULL);
				V_2 = L_13;
				goto IL_0062;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0062:
	{
		// }
		WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_14 = V_2;
		return L_14;
	}
}
// System.Void Netcode.Transports.WebSocket.NativeWebSocketClient::OnOpen(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebSocketClient_OnOpen_m2B9C86865A39B36E066351A4196C1CA405D60B6E (NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m4518DCA73D4E47E028387221A627BFDF2C113841_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (ConnectionLock)
		il2cpp_codegen_runtime_class_init_inline(NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B_StaticFields*)il2cpp_codegen_static_fields_for(NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B_il2cpp_TypeInfo_var))->___ConnectionLock_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0046:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_004f;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_004f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// EventQueue.Enqueue(new WebSocketEvent()
			// {
			//     ClientId = 0,
			//     Payload = null,
			//     Type = WebSocketEvent.WebSocketEventType.Open,
			//     Error = null,
			//     Reason = null
			// });
			Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10* L_4;
			L_4 = NativeWebSocketClient_get_EventQueue_mD5D6BEB913A28A893EABA22ACC3095E429D809D8_inline(__this, NULL);
			WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_5 = (WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434*)il2cpp_codegen_object_new(WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434_il2cpp_TypeInfo_var);
			NullCheck(L_5);
			WebSocketEvent__ctor_m1115093A79E6BB0D3F0133B73BB122B9BD5E26A9(L_5, NULL);
			WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_6 = L_5;
			NullCheck(L_6);
			L_6->___ClientId_1 = ((int64_t)0);
			WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_7 = L_6;
			NullCheck(L_7);
			L_7->___Payload_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&L_7->___Payload_2), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
			WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_8 = L_7;
			NullCheck(L_8);
			L_8->___Type_0 = 1;
			WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_9 = L_8;
			NullCheck(L_9);
			L_9->___Error_3 = (String_t*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&L_9->___Error_3), (void*)(String_t*)NULL);
			WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_10 = L_9;
			NullCheck(L_10);
			L_10->___Reason_4 = (String_t*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&L_10->___Reason_4), (void*)(String_t*)NULL);
			NullCheck(L_4);
			Queue_1_Enqueue_m4518DCA73D4E47E028387221A627BFDF2C113841(L_4, L_10, Queue_1_Enqueue_m4518DCA73D4E47E028387221A627BFDF2C113841_RuntimeMethod_var);
			// }
			goto IL_0050;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void Netcode.Transports.WebSocket.NativeWebSocketClient::OnClose(System.Object,WebSocketSharp.CloseEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebSocketClient_OnClose_mF2A60104C8EC3495DE2F9F008F286A3C44700199 (NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B* __this, RuntimeObject* ___sender0, CloseEventArgs_t22B98E782E975F0442E2C9EB49E699F1D934A588* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m4518DCA73D4E47E028387221A627BFDF2C113841_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (ConnectionLock)
		il2cpp_codegen_runtime_class_init_inline(NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B_StaticFields*)il2cpp_codegen_static_fields_for(NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B_il2cpp_TypeInfo_var))->___ConnectionLock_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004b:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0054;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0054:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// EventQueue.Enqueue(new WebSocketEvent()
			// {
			//     ClientId = 0,
			//     Payload = null,
			//     Type = WebSocketEvent.WebSocketEventType.Close,
			//     Error = null,
			//     Reason = e.Reason
			// });
			Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10* L_4;
			L_4 = NativeWebSocketClient_get_EventQueue_mD5D6BEB913A28A893EABA22ACC3095E429D809D8_inline(__this, NULL);
			WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_5 = (WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434*)il2cpp_codegen_object_new(WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434_il2cpp_TypeInfo_var);
			NullCheck(L_5);
			WebSocketEvent__ctor_m1115093A79E6BB0D3F0133B73BB122B9BD5E26A9(L_5, NULL);
			WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_6 = L_5;
			NullCheck(L_6);
			L_6->___ClientId_1 = ((int64_t)0);
			WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_7 = L_6;
			NullCheck(L_7);
			L_7->___Payload_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&L_7->___Payload_2), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
			WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_8 = L_7;
			NullCheck(L_8);
			L_8->___Type_0 = 2;
			WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_9 = L_8;
			NullCheck(L_9);
			L_9->___Error_3 = (String_t*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&L_9->___Error_3), (void*)(String_t*)NULL);
			WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_10 = L_9;
			CloseEventArgs_t22B98E782E975F0442E2C9EB49E699F1D934A588* L_11 = ___e1;
			NullCheck(L_11);
			String_t* L_12;
			L_12 = CloseEventArgs_get_Reason_mE32FCC3084521656EB808025B3F841382F8B4E66(L_11, NULL);
			NullCheck(L_10);
			L_10->___Reason_4 = L_12;
			Il2CppCodeGenWriteBarrier((void**)(&L_10->___Reason_4), (void*)L_12);
			NullCheck(L_4);
			Queue_1_Enqueue_m4518DCA73D4E47E028387221A627BFDF2C113841(L_4, L_10, Queue_1_Enqueue_m4518DCA73D4E47E028387221A627BFDF2C113841_RuntimeMethod_var);
			// }
			goto IL_0055;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void Netcode.Transports.WebSocket.NativeWebSocketClient::OnError(System.Object,WebSocketSharp.ErrorEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebSocketClient_OnError_m1BCB9E7687F1E1F07712FDA9964FF6239E797BB1 (NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B* __this, RuntimeObject* ___sender0, ErrorEventArgs_t994316A1E3F79A575728D7388FAFD8BA05DD4052* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m4518DCA73D4E47E028387221A627BFDF2C113841_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (ConnectionLock)
		il2cpp_codegen_runtime_class_init_inline(NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B_StaticFields*)il2cpp_codegen_static_fields_for(NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B_il2cpp_TypeInfo_var))->___ConnectionLock_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004b:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0054;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0054:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// EventQueue.Enqueue(new WebSocketEvent()
			// {
			//     ClientId = 0,
			//     Payload = null,
			//     Type = WebSocketEvent.WebSocketEventType.Error,
			//     Error = e.Message,
			//     Reason = null,
			// });
			Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10* L_4;
			L_4 = NativeWebSocketClient_get_EventQueue_mD5D6BEB913A28A893EABA22ACC3095E429D809D8_inline(__this, NULL);
			WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_5 = (WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434*)il2cpp_codegen_object_new(WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434_il2cpp_TypeInfo_var);
			NullCheck(L_5);
			WebSocketEvent__ctor_m1115093A79E6BB0D3F0133B73BB122B9BD5E26A9(L_5, NULL);
			WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_6 = L_5;
			NullCheck(L_6);
			L_6->___ClientId_1 = ((int64_t)0);
			WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_7 = L_6;
			NullCheck(L_7);
			L_7->___Payload_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&L_7->___Payload_2), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
			WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_8 = L_7;
			NullCheck(L_8);
			L_8->___Type_0 = 4;
			WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_9 = L_8;
			ErrorEventArgs_t994316A1E3F79A575728D7388FAFD8BA05DD4052* L_10 = ___e1;
			NullCheck(L_10);
			String_t* L_11;
			L_11 = ErrorEventArgs_get_Message_m00F54F07334EA99D97F093FF80668E1C2CA0DD92_inline(L_10, NULL);
			NullCheck(L_9);
			L_9->___Error_3 = L_11;
			Il2CppCodeGenWriteBarrier((void**)(&L_9->___Error_3), (void*)L_11);
			WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_12 = L_9;
			NullCheck(L_12);
			L_12->___Reason_4 = (String_t*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&L_12->___Reason_4), (void*)(String_t*)NULL);
			NullCheck(L_4);
			Queue_1_Enqueue_m4518DCA73D4E47E028387221A627BFDF2C113841(L_4, L_12, Queue_1_Enqueue_m4518DCA73D4E47E028387221A627BFDF2C113841_RuntimeMethod_var);
			// }
			goto IL_0055;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void Netcode.Transports.WebSocket.NativeWebSocketClient::OnMessage(System.Object,WebSocketSharp.MessageEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebSocketClient_OnMessage_mECCC6BBCE17E879C37EDE0FA5FB850038BB95AB2 (NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B* __this, RuntimeObject* ___sender0, MessageEventArgs_tC1868DA80225C18CE3B1286ED2D4B87474E87919* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m4518DCA73D4E47E028387221A627BFDF2C113841_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (ConnectionLock)
		il2cpp_codegen_runtime_class_init_inline(NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B_StaticFields*)il2cpp_codegen_static_fields_for(NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B_il2cpp_TypeInfo_var))->___ConnectionLock_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004b:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0054;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0054:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// EventQueue.Enqueue(new WebSocketEvent()
			// {
			//     ClientId = 0,
			//     Payload = e.RawData,
			//     Type = WebSocketEvent.WebSocketEventType.Payload,
			//     Error = null,
			//     Reason = null,
			// });
			Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10* L_4;
			L_4 = NativeWebSocketClient_get_EventQueue_mD5D6BEB913A28A893EABA22ACC3095E429D809D8_inline(__this, NULL);
			WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_5 = (WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434*)il2cpp_codegen_object_new(WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434_il2cpp_TypeInfo_var);
			NullCheck(L_5);
			WebSocketEvent__ctor_m1115093A79E6BB0D3F0133B73BB122B9BD5E26A9(L_5, NULL);
			WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_6 = L_5;
			NullCheck(L_6);
			L_6->___ClientId_1 = ((int64_t)0);
			WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_7 = L_6;
			MessageEventArgs_tC1868DA80225C18CE3B1286ED2D4B87474E87919* L_8 = ___e1;
			NullCheck(L_8);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
			L_9 = MessageEventArgs_get_RawData_m523F58617AF9EBE0251FBB46C7DF22BB7AC38BB7(L_8, NULL);
			NullCheck(L_7);
			L_7->___Payload_2 = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&L_7->___Payload_2), (void*)L_9);
			WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_10 = L_7;
			NullCheck(L_10);
			L_10->___Type_0 = 3;
			WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_11 = L_10;
			NullCheck(L_11);
			L_11->___Error_3 = (String_t*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&L_11->___Error_3), (void*)(String_t*)NULL);
			WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_12 = L_11;
			NullCheck(L_12);
			L_12->___Reason_4 = (String_t*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&L_12->___Reason_4), (void*)(String_t*)NULL);
			NullCheck(L_4);
			Queue_1_Enqueue_m4518DCA73D4E47E028387221A627BFDF2C113841(L_4, L_12, Queue_1_Enqueue_m4518DCA73D4E47E028387221A627BFDF2C113841_RuntimeMethod_var);
			// }
			goto IL_0055;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void Netcode.Transports.WebSocket.NativeWebSocketClient::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebSocketClient__cctor_m23C99BB664DC968F79AD39C5358686DE2CAC686E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly object ConnectionLock = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B_StaticFields*)il2cpp_codegen_static_fields_for(NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B_il2cpp_TypeInfo_var))->___ConnectionLock_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B_StaticFields*)il2cpp_codegen_static_fields_for(NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B_il2cpp_TypeInfo_var))->___ConnectionLock_0), (void*)L_0);
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
// Netcode.Transports.WebSocket.IWebSocketClient Netcode.Transports.WebSocket.WebSocketClientFactory::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketClientFactory_Create_m2AE7C908673A0A72F0226C06402EB9EEB7B7DF19 (String_t* ___url0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new NativeWebSocketClient(url);
		String_t* L_0 = ___url0;
		NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B* L_1 = (NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B*)il2cpp_codegen_object_new(NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		NativeWebSocketClient__ctor_m702BD181F76BF363E36DD901D3353FDF09D3572E(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void Netcode.Transports.WebSocket.WebSocketClientFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketClientFactory__ctor_m21FD309142CC1CECCB006E4E7118F3511FA82F5B (WebSocketClientFactory_tCA248E17AF61B325512C2DC6515C5484B149C910* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Unity.Netcode.NetworkEvent Netcode.Transports.WebSocket.WebSocketEvent::GetNetworkEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocketEvent_GetNetworkEvent_m2149FD7F124704A34612DFBC3C967CE84E2DA142 (WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch (Type)
		int32_t L_0 = __this->___Type_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0029;
			}
			case 3:
			{
				goto IL_0023;
			}
			case 4:
			{
				goto IL_0025;
			}
		}
	}
	{
		goto IL_002b;
	}

IL_0023:
	{
		// return NetworkEvent.Data;
		return (int32_t)(0);
	}

IL_0025:
	{
		// return NetworkEvent.Nothing;
		return (int32_t)(4);
	}

IL_0027:
	{
		// return NetworkEvent.Connect;
		return (int32_t)(1);
	}

IL_0029:
	{
		// return NetworkEvent.Disconnect;
		return (int32_t)(2);
	}

IL_002b:
	{
		// return NetworkEvent.Nothing;
		return (int32_t)(4);
	}
}
// System.Void Netcode.Transports.WebSocket.WebSocketEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketEvent__ctor_m1115093A79E6BB0D3F0133B73BB122B9BD5E26A9 (WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Netcode.Transports.WebSocket.WebSocketException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_mCE2ACA60DC22C8070DEF732C818D940AF9EB4A73 (WebSocketException_tB3A36C56AA2ACFE8E6E58AC75DB700A08B940A3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebSocketException()
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		// }
		return;
	}
}
// System.Void Netcode.Transports.WebSocket.WebSocketException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m808671308609F84384340A8084CC71B5BE052219 (WebSocketException_tB3A36C56AA2ACFE8E6E58AC75DB700A08B940A3C* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebSocketException(string message) : base(message)
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Netcode.Transports.WebSocket.WebSocketException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m959EAC51C84A45BFCE29D1D8D7C35BC99DD86402 (WebSocketException_tB3A36C56AA2ACFE8E6E58AC75DB700A08B940A3C* __this, String_t* ___message0, Exception_t* ___inner1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebSocketException(string message, Exception inner) : base(message, inner)
		String_t* L_0 = ___message0;
		Exception_t* L_1 = ___inner1;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
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
// Conversion methods for marshalling of: Netcode.Transports.WebSocket.WebSocketPeer
IL2CPP_EXTERN_C void WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA_marshal_pinvoke(const WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA& unmarshaled, WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Context_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Context' of type 'WebSocketPeer': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Context_1Exception, NULL);
}
IL2CPP_EXTERN_C void WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA_marshal_pinvoke_back(const WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA_marshaled_pinvoke& marshaled, WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA& unmarshaled)
{
	Exception_t* ___Context_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Context' of type 'WebSocketPeer': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Context_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Netcode.Transports.WebSocket.WebSocketPeer
IL2CPP_EXTERN_C void WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA_marshal_pinvoke_cleanup(WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Netcode.Transports.WebSocket.WebSocketPeer
IL2CPP_EXTERN_C void WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA_marshal_com(const WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA& unmarshaled, WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA_marshaled_com& marshaled)
{
	Exception_t* ___Context_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Context' of type 'WebSocketPeer': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Context_1Exception, NULL);
}
IL2CPP_EXTERN_C void WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA_marshal_com_back(const WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA_marshaled_com& marshaled, WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA& unmarshaled)
{
	Exception_t* ___Context_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Context' of type 'WebSocketPeer': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Context_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Netcode.Transports.WebSocket.WebSocketPeer
IL2CPP_EXTERN_C void WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA_marshal_com_cleanup(WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA_marshaled_com& marshaled)
{
}
// System.Void Netcode.Transports.WebSocket.WebSocketPeer::.ctor(System.UInt64,WebSocketSharp.Net.WebSockets.WebSocketContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketPeer__ctor_m5AF3F1B6A5B40B6EB53F1BCD61852DE8E6C34895 (WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA* __this, uint64_t ___clientId0, WebSocketContext_t210263DD230B87766F206EC3DDBC301B24F5748B* ___context1, const RuntimeMethod* method) 
{
	{
		// ClientId = clientId;
		uint64_t L_0 = ___clientId0;
		__this->___ClientId_0 = L_0;
		// Context = context;
		WebSocketContext_t210263DD230B87766F206EC3DDBC301B24F5748B* L_1 = ___context1;
		__this->___Context_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Context_1), (void*)L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void WebSocketPeer__ctor_m5AF3F1B6A5B40B6EB53F1BCD61852DE8E6C34895_AdjustorThunk (RuntimeObject* __this, uint64_t ___clientId0, WebSocketContext_t210263DD230B87766F206EC3DDBC301B24F5748B* ___context1, const RuntimeMethod* method)
{
	WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA*>(__this + _offset);
	WebSocketPeer__ctor_m5AF3F1B6A5B40B6EB53F1BCD61852DE8E6C34895(_thisAdjusted, ___clientId0, ___context1, method);
}
// System.Void Netcode.Transports.WebSocket.WebSocketPeer::Close(WebSocketSharp.CloseStatusCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketPeer_Close_m57CC19BA40CD2BDF0B62736967A7E02D1C576026 (WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA* __this, uint16_t ___code0, String_t* ___reason1, const RuntimeMethod* method) 
{
	{
		// Context.WebSocket.Close(code, reason);
		WebSocketContext_t210263DD230B87766F206EC3DDBC301B24F5748B* L_0 = __this->___Context_1;
		NullCheck(L_0);
		WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* L_1;
		L_1 = VirtualFuncInvoker0< WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* >::Invoke(20 /* WebSocketSharp.WebSocket WebSocketSharp.Net.WebSockets.WebSocketContext::get_WebSocket() */, L_0);
		uint16_t L_2 = ___code0;
		String_t* L_3 = ___reason1;
		NullCheck(L_1);
		WebSocket_Close_m3811640FFD4E49EB174A63103072757860C0203B(L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void WebSocketPeer_Close_m57CC19BA40CD2BDF0B62736967A7E02D1C576026_AdjustorThunk (RuntimeObject* __this, uint16_t ___code0, String_t* ___reason1, const RuntimeMethod* method)
{
	WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA*>(__this + _offset);
	WebSocketPeer_Close_m57CC19BA40CD2BDF0B62736967A7E02D1C576026(_thisAdjusted, ___code0, ___reason1, method);
}
// System.Void Netcode.Transports.WebSocket.WebSocketPeer::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketPeer_Send_m52492A0F15B085EEE22663C2F4349F7DAE8C0CAC (WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	{
		// Context.WebSocket.Send(data);
		WebSocketContext_t210263DD230B87766F206EC3DDBC301B24F5748B* L_0 = __this->___Context_1;
		NullCheck(L_0);
		WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* L_1;
		L_1 = VirtualFuncInvoker0< WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* >::Invoke(20 /* WebSocketSharp.WebSocket WebSocketSharp.Net.WebSockets.WebSocketContext::get_WebSocket() */, L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___data0;
		NullCheck(L_1);
		WebSocket_Send_mCB3ED89CD2946491F79910EE01042EFCC475B6EC(L_1, L_2, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void WebSocketPeer_Send_m52492A0F15B085EEE22663C2F4349F7DAE8C0CAC_AdjustorThunk (RuntimeObject* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method)
{
	WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA*>(__this + _offset);
	WebSocketPeer_Send_m52492A0F15B085EEE22663C2F4349F7DAE8C0CAC(_thisAdjusted, ___data0, method);
}
// System.UInt64 Netcode.Transports.WebSocket.WebSocketPeer::get_Ping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t WebSocketPeer_get_Ping_mEE22CAD3C0BEDCFE3C4ABAACDD1F354ADFEB93FE (WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA* __this, const RuntimeMethod* method) 
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return (ulong)Context.WebSocket.WaitTime.Milliseconds;
		WebSocketContext_t210263DD230B87766F206EC3DDBC301B24F5748B* L_0 = __this->___Context_1;
		NullCheck(L_0);
		WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* L_1;
		L_1 = VirtualFuncInvoker0< WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* >::Invoke(20 /* WebSocketSharp.WebSocket WebSocketSharp.Net.WebSockets.WebSocketContext::get_WebSocket() */, L_0);
		NullCheck(L_1);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = WebSocket_get_WaitTime_m1F9DADF61FDAE43664C81C6D3F58CCD97A01653E_inline(L_1, NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = TimeSpan_get_Milliseconds_m09D9D6D0033D5FBC62A3C4007CC716A85F4FC8EA((&V_0), NULL);
		return ((int64_t)L_3);
	}
}
IL2CPP_EXTERN_C  uint64_t WebSocketPeer_get_Ping_mEE22CAD3C0BEDCFE3C4ABAACDD1F354ADFEB93FE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA*>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = WebSocketPeer_get_Ping_mEE22CAD3C0BEDCFE3C4ABAACDD1F354ADFEB93FE(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt64 Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior::GetNextClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t WebSocketServerConnectionBehavior_GetNextClientId_m19370BE8B075B327B5194C7E13212CB19E9D6C09 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m61058CB40F8E38F73E03279A288A436B288946DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mF408F7F539EA2D8DF7E25FF32A7DB433FFB9F67A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReleasedClientIds.Count > 0)
		il2cpp_codegen_runtime_class_init_inline(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
		Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* L_0 = ((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___ReleasedClientIds_13;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Queue_1_get_Count_mF408F7F539EA2D8DF7E25FF32A7DB433FFB9F67A_inline(L_0, Queue_1_get_Count_mF408F7F539EA2D8DF7E25FF32A7DB433FFB9F67A_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		// return ReleasedClientIds.Dequeue();
		il2cpp_codegen_runtime_class_init_inline(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
		Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* L_2 = ((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___ReleasedClientIds_13;
		NullCheck(L_2);
		uint64_t L_3;
		L_3 = Queue_1_Dequeue_m61058CB40F8E38F73E03279A288A436B288946DB(L_2, Queue_1_Dequeue_m61058CB40F8E38F73E03279A288A436B288946DB_RuntimeMethod_var);
		return L_3;
	}

IL_0018:
	{
		// return ClientIdCounter++;
		il2cpp_codegen_runtime_class_init_inline(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
		uint64_t L_4 = ((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___ClientIdCounter_12;
		uint64_t L_5 = L_4;
		((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___ClientIdCounter_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_5, ((int64_t)1)));
		return L_5;
	}
}
// System.Void Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior::ReleaseClientId(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketServerConnectionBehavior_ReleaseClientId_mE909E7DA82F34622247D565EBB209DC9944AE8A7 (uint64_t ___clientId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m1730DB68850554D215EBC943E35FEF5A7BF18CF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ReleasedClientIds.Enqueue(clientId);
		il2cpp_codegen_runtime_class_init_inline(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
		Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* L_0 = ((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___ReleasedClientIds_13;
		uint64_t L_1 = ___clientId0;
		NullCheck(L_0);
		Queue_1_Enqueue_m1730DB68850554D215EBC943E35FEF5A7BF18CF1(L_0, L_1, Queue_1_Enqueue_m1730DB68850554D215EBC943E35FEF5A7BF18CF1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior::DisconnectClient(System.UInt64,WebSocketSharp.CloseStatusCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketServerConnectionBehavior_DisconnectClient_mA56BF8B29E2B714807CB818630C74985D78E7338 (uint64_t ___clientId0, uint16_t ___code1, String_t* ___reason2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mFA2958260FA323A32289C3365F90DD5017E5E810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m49F06D8B0A22AD4DBCCCBC6936A4A1B7BDBE57CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// lock (ConnectionLock)
		il2cpp_codegen_runtime_class_init_inline(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___ConnectionLock_11;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0041;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0041:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				// if (Clients.ContainsKey(clientId))
				il2cpp_codegen_runtime_class_init_inline(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
				Dictionary_2_t25C2B1256DA6CA53630FF1ABF2AABF3208E9DA55* L_4 = ((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___Clients_10;
				uint64_t L_5 = ___clientId0;
				NullCheck(L_4);
				bool L_6;
				L_6 = Dictionary_2_ContainsKey_mFA2958260FA323A32289C3365F90DD5017E5E810(L_4, L_5, Dictionary_2_ContainsKey_mFA2958260FA323A32289C3365F90DD5017E5E810_RuntimeMethod_var);
				if (!L_6)
				{
					goto IL_0036_1;
				}
			}
			{
				// Clients[clientId].Close();
				il2cpp_codegen_runtime_class_init_inline(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
				Dictionary_2_t25C2B1256DA6CA53630FF1ABF2AABF3208E9DA55* L_7 = ((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___Clients_10;
				uint64_t L_8 = ___clientId0;
				NullCheck(L_7);
				WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA L_9;
				L_9 = Dictionary_2_get_Item_m49F06D8B0A22AD4DBCCCBC6936A4A1B7BDBE57CA(L_7, L_8, Dictionary_2_get_Item_m49F06D8B0A22AD4DBCCCBC6936A4A1B7BDBE57CA_RuntimeMethod_var);
				V_2 = L_9;
				WebSocketPeer_Close_m57CC19BA40CD2BDF0B62736967A7E02D1C576026((&V_2), ((int32_t)1000), (String_t*)NULL, NULL);
			}

IL_0036_1:
			{
				// }
				goto IL_0042;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.UInt64 Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior::Ping(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t WebSocketServerConnectionBehavior_Ping_m3B32BC6C4739A8225A8572E9F7C89A98CD63C45D (uint64_t ___clientId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mFA2958260FA323A32289C3365F90DD5017E5E810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m49F06D8B0A22AD4DBCCCBC6936A4A1B7BDBE57CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	{
		// lock (ConnectionLock)
		il2cpp_codegen_runtime_class_init_inline(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___ConnectionLock_11;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_003e;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_003e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				// if (Clients.ContainsKey(clientId))
				il2cpp_codegen_runtime_class_init_inline(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
				Dictionary_2_t25C2B1256DA6CA53630FF1ABF2AABF3208E9DA55* L_4 = ((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___Clients_10;
				uint64_t L_5 = ___clientId0;
				NullCheck(L_4);
				bool L_6;
				L_6 = Dictionary_2_ContainsKey_mFA2958260FA323A32289C3365F90DD5017E5E810(L_4, L_5, Dictionary_2_ContainsKey_mFA2958260FA323A32289C3365F90DD5017E5E810_RuntimeMethod_var);
				if (!L_6)
				{
					goto IL_0033_1;
				}
			}
			{
				// return Clients[clientId].Ping;
				il2cpp_codegen_runtime_class_init_inline(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
				Dictionary_2_t25C2B1256DA6CA53630FF1ABF2AABF3208E9DA55* L_7 = ((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___Clients_10;
				uint64_t L_8 = ___clientId0;
				NullCheck(L_7);
				WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA L_9;
				L_9 = Dictionary_2_get_Item_m49F06D8B0A22AD4DBCCCBC6936A4A1B7BDBE57CA(L_7, L_8, Dictionary_2_get_Item_m49F06D8B0A22AD4DBCCCBC6936A4A1B7BDBE57CA_RuntimeMethod_var);
				V_2 = L_9;
				uint64_t L_10;
				L_10 = WebSocketPeer_get_Ping_mEE22CAD3C0BEDCFE3C4ABAACDD1F354ADFEB93FE((&V_2), NULL);
				V_3 = L_10;
				goto IL_0042;
			}

IL_0033_1:
			{
				// }
				goto IL_003f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003f:
	{
		// return 0;
		return ((int64_t)0);
	}

IL_0042:
	{
		// }
		uint64_t L_11 = V_3;
		return L_11;
	}
}
// System.Void Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior::Send(System.UInt64,System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketServerConnectionBehavior_Send_m13D53A5C425A0658A20986062F0BE59185A9BC96 (uint64_t ___clientId0, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___data1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mFA2958260FA323A32289C3365F90DD5017E5E810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m49F06D8B0A22AD4DBCCCBC6936A4A1B7BDBE57CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// lock (ConnectionLock)
		il2cpp_codegen_runtime_class_init_inline(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___ConnectionLock_11;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0094:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_009d;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_009d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				// if (Clients.ContainsKey(clientId))
				il2cpp_codegen_runtime_class_init_inline(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
				Dictionary_2_t25C2B1256DA6CA53630FF1ABF2AABF3208E9DA55* L_4 = ((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___Clients_10;
				uint64_t L_5 = ___clientId0;
				NullCheck(L_4);
				bool L_6;
				L_6 = Dictionary_2_ContainsKey_mFA2958260FA323A32289C3365F90DD5017E5E810(L_4, L_5, Dictionary_2_ContainsKey_mFA2958260FA323A32289C3365F90DD5017E5E810_RuntimeMethod_var);
				if (!L_6)
				{
					goto IL_0092_1;
				}
			}
			{
				// if (data.Count < data.Array.Length || data.Offset > 0)
				int32_t L_7;
				L_7 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___data1), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
				L_8 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&___data1), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
				NullCheck(L_8);
				if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
				{
					goto IL_0039_1;
				}
			}
			{
				int32_t L_9;
				L_9 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&___data1), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
				if ((((int32_t)L_9) <= ((int32_t)0)))
				{
					goto IL_0078_1;
				}
			}

IL_0039_1:
			{
				// byte[] slimPayload = new byte[data.Count];
				int32_t L_10;
				L_10 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___data1), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_10);
				V_2 = L_11;
				// Buffer.BlockCopy(data.Array, data.Offset, slimPayload, 0, data.Count);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
				L_12 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&___data1), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
				int32_t L_13;
				L_13 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&___data1), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
				int32_t L_15;
				L_15 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___data1), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
				Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, 0, L_15, NULL);
				// Clients[clientId].Send(slimPayload);
				il2cpp_codegen_runtime_class_init_inline(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
				Dictionary_2_t25C2B1256DA6CA53630FF1ABF2AABF3208E9DA55* L_16 = ((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___Clients_10;
				uint64_t L_17 = ___clientId0;
				NullCheck(L_16);
				WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA L_18;
				L_18 = Dictionary_2_get_Item_m49F06D8B0A22AD4DBCCCBC6936A4A1B7BDBE57CA(L_16, L_17, Dictionary_2_get_Item_m49F06D8B0A22AD4DBCCCBC6936A4A1B7BDBE57CA_RuntimeMethod_var);
				V_3 = L_18;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_2;
				WebSocketPeer_Send_m52492A0F15B085EEE22663C2F4349F7DAE8C0CAC((&V_3), L_19, NULL);
				goto IL_009e;
			}

IL_0078_1:
			{
				// Clients[clientId].Send(data.Array);
				il2cpp_codegen_runtime_class_init_inline(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
				Dictionary_2_t25C2B1256DA6CA53630FF1ABF2AABF3208E9DA55* L_20 = ((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___Clients_10;
				uint64_t L_21 = ___clientId0;
				NullCheck(L_20);
				WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA L_22;
				L_22 = Dictionary_2_get_Item_m49F06D8B0A22AD4DBCCCBC6936A4A1B7BDBE57CA(L_20, L_21, Dictionary_2_get_Item_m49F06D8B0A22AD4DBCCCBC6936A4A1B7BDBE57CA_RuntimeMethod_var);
				V_3 = L_22;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
				L_23 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&___data1), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
				WebSocketPeer_Send_m52492A0F15B085EEE22663C2F4349F7DAE8C0CAC((&V_3), L_23, NULL);
			}

IL_0092_1:
			{
				// }
				goto IL_009e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009e:
	{
		// }
		return;
	}
}
// Netcode.Transports.WebSocket.WebSocketEvent Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior::Poll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* WebSocketServerConnectionBehavior_Poll_m836B6E31C4B6EAC75318FB0CB104516CC7664C9F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m83073538B9EDC7DA9AC9239902E95E5C3AAC5666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m51C468F12B79CB459E75FFF1A9ED64067800C8FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* V_2 = NULL;
	{
		// lock (ConnectionLock)
		il2cpp_codegen_runtime_class_init_inline(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___ConnectionLock_11;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0056:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_005f;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_005f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				// if (EventQueue.Count > 0)
				il2cpp_codegen_runtime_class_init_inline(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
				Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10* L_4 = ((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___EventQueue_14;
				NullCheck(L_4);
				int32_t L_5;
				L_5 = Queue_1_get_Count_m51C468F12B79CB459E75FFF1A9ED64067800C8FA_inline(L_4, Queue_1_get_Count_m51C468F12B79CB459E75FFF1A9ED64067800C8FA_RuntimeMethod_var);
				if ((((int32_t)L_5) <= ((int32_t)0)))
				{
					goto IL_002a_1;
				}
			}
			{
				// return EventQueue.Dequeue();
				il2cpp_codegen_runtime_class_init_inline(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
				Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10* L_6 = ((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___EventQueue_14;
				NullCheck(L_6);
				WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_7;
				L_7 = Queue_1_Dequeue_m83073538B9EDC7DA9AC9239902E95E5C3AAC5666(L_6, Queue_1_Dequeue_m83073538B9EDC7DA9AC9239902E95E5C3AAC5666_RuntimeMethod_var);
				V_2 = L_7;
				goto IL_0060;
			}

IL_002a_1:
			{
				// return new WebSocketEvent()
				// {
				//     ClientId = 0,
				//     Payload = null,
				//     Type = WebSocketEvent.WebSocketEventType.Nothing,
				//     Error = null,
				//     Reason = null
				// };
				WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_8 = (WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434*)il2cpp_codegen_object_new(WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434_il2cpp_TypeInfo_var);
				NullCheck(L_8);
				WebSocketEvent__ctor_m1115093A79E6BB0D3F0133B73BB122B9BD5E26A9(L_8, NULL);
				WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_9 = L_8;
				NullCheck(L_9);
				L_9->___ClientId_1 = ((int64_t)0);
				WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_10 = L_9;
				NullCheck(L_10);
				L_10->___Payload_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&L_10->___Payload_2), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
				WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_11 = L_10;
				NullCheck(L_11);
				L_11->___Type_0 = 0;
				WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_12 = L_11;
				NullCheck(L_12);
				L_12->___Error_3 = (String_t*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&L_12->___Error_3), (void*)(String_t*)NULL);
				WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_13 = L_12;
				NullCheck(L_13);
				L_13->___Reason_4 = (String_t*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&L_13->___Reason_4), (void*)(String_t*)NULL);
				V_2 = L_13;
				goto IL_0060;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0060:
	{
		// }
		WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_14 = V_2;
		return L_14;
	}
}
// System.Net.IPEndPoint Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior::get_Endpoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* WebSocketServerConnectionBehavior_get_Endpoint_mDF4DA3705B3E89CD89B0F4B4F57E87033E596007 (WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122* __this, const RuntimeMethod* method) 
{
	{
		// public IPEndPoint Endpoint { get; private set; }
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_0 = __this->___U3CEndpointU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior::set_Endpoint(System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketServerConnectionBehavior_set_Endpoint_mBE247A4C877F3E860345C247DD6F3DF67615C606 (WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122* __this, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___value0, const RuntimeMethod* method) 
{
	{
		// public IPEndPoint Endpoint { get; private set; }
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_0 = ___value0;
		__this->___U3CEndpointU3Ek__BackingField_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEndpointU3Ek__BackingField_15), (void*)L_0);
		return;
	}
}
// WebSocketSharp.WebSocket Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior::get_Socket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* WebSocketServerConnectionBehavior_get_Socket_mC82005895EC153A29BF4670BCBB0203FD5A6059B (WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122* __this, const RuntimeMethod* method) 
{
	{
		// public WebSocketSharp.WebSocket Socket { get; private set; }
		WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* L_0 = __this->___U3CSocketU3Ek__BackingField_16;
		return L_0;
	}
}
// System.Void Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior::set_Socket(WebSocketSharp.WebSocket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketServerConnectionBehavior_set_Socket_m37898BBE2A9D85D98743BC5C99E1F10B7A6B7344 (WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122* __this, WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* ___value0, const RuntimeMethod* method) 
{
	{
		// public WebSocketSharp.WebSocket Socket { get; private set; }
		WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* L_0 = ___value0;
		__this->___U3CSocketU3Ek__BackingField_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSocketU3Ek__BackingField_16), (void*)L_0);
		return;
	}
}
// System.UInt64 Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior::get_ClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t WebSocketServerConnectionBehavior_get_ClientId_mFAB74E1F55A55D7AD815903A9A5526D094A95540 (WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122* __this, const RuntimeMethod* method) 
{
	{
		// public ulong ClientId { get; private set; }
		uint64_t L_0 = __this->___U3CClientIdU3Ek__BackingField_17;
		return L_0;
	}
}
// System.Void Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior::set_ClientId(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketServerConnectionBehavior_set_ClientId_m11FA239C40665A5D4765A4C4748D27BBC5A917C5 (WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	{
		// public ulong ClientId { get; private set; }
		uint64_t L_0 = ___value0;
		__this->___U3CClientIdU3Ek__BackingField_17 = L_0;
		return;
	}
}
// System.Void Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior::OnOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketServerConnectionBehavior_OnOpen_m89D78BAC9720137BC05D2248F84C2E3986DCEB17 (WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m8F64CE276AD814D28C39A8711B646AE4A9283743_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m4518DCA73D4E47E028387221A627BFDF2C113841_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// Endpoint = Context.UserEndPoint;
		WebSocketContext_t210263DD230B87766F206EC3DDBC301B24F5748B* L_0;
		L_0 = WebSocketBehavior_get_Context_mD22E88B612B52E63BC55E2084070C7E27CFB72D0_inline(__this, NULL);
		NullCheck(L_0);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_1;
		L_1 = VirtualFuncInvoker0< IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* >::Invoke(19 /* System.Net.IPEndPoint WebSocketSharp.Net.WebSockets.WebSocketContext::get_UserEndPoint() */, L_0);
		WebSocketServerConnectionBehavior_set_Endpoint_mBE247A4C877F3E860345C247DD6F3DF67615C606_inline(__this, L_1, NULL);
		// Socket = Context.WebSocket;
		WebSocketContext_t210263DD230B87766F206EC3DDBC301B24F5748B* L_2;
		L_2 = WebSocketBehavior_get_Context_mD22E88B612B52E63BC55E2084070C7E27CFB72D0_inline(__this, NULL);
		NullCheck(L_2);
		WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* L_3;
		L_3 = VirtualFuncInvoker0< WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* >::Invoke(20 /* WebSocketSharp.WebSocket WebSocketSharp.Net.WebSockets.WebSocketContext::get_WebSocket() */, L_2);
		WebSocketServerConnectionBehavior_set_Socket_m37898BBE2A9D85D98743BC5C99E1F10B7A6B7344_inline(__this, L_3, NULL);
		// lock (ConnectionLock)
		il2cpp_codegen_runtime_class_init_inline(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = ((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___ConnectionLock_11;
		V_0 = L_4;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0097:
			{// begin finally (depth: 1)
				{
					bool L_5 = V_1;
					if (!L_5)
					{
						goto IL_00a0;
					}
				}
				{
					RuntimeObject* L_6 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_00a0:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_7 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_1), NULL);
			// ClientId = GetNextClientId();
			il2cpp_codegen_runtime_class_init_inline(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
			uint64_t L_8;
			L_8 = WebSocketServerConnectionBehavior_GetNextClientId_m19370BE8B075B327B5194C7E13212CB19E9D6C09(NULL);
			WebSocketServerConnectionBehavior_set_ClientId_m11FA239C40665A5D4765A4C4748D27BBC5A917C5_inline(__this, L_8, NULL);
			// Clients[ClientId] = new WebSocketPeer(ClientId, Context);
			Dictionary_2_t25C2B1256DA6CA53630FF1ABF2AABF3208E9DA55* L_9 = ((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___Clients_10;
			uint64_t L_10;
			L_10 = WebSocketServerConnectionBehavior_get_ClientId_mFAB74E1F55A55D7AD815903A9A5526D094A95540_inline(__this, NULL);
			uint64_t L_11;
			L_11 = WebSocketServerConnectionBehavior_get_ClientId_mFAB74E1F55A55D7AD815903A9A5526D094A95540_inline(__this, NULL);
			WebSocketContext_t210263DD230B87766F206EC3DDBC301B24F5748B* L_12;
			L_12 = WebSocketBehavior_get_Context_mD22E88B612B52E63BC55E2084070C7E27CFB72D0_inline(__this, NULL);
			WebSocketPeer_tDE35517CAA962C3B032D9C68960B2F64510414FA L_13;
			memset((&L_13), 0, sizeof(L_13));
			WebSocketPeer__ctor_m5AF3F1B6A5B40B6EB53F1BCD61852DE8E6C34895((&L_13), L_11, L_12, /*hidden argument*/NULL);
			NullCheck(L_9);
			Dictionary_2_set_Item_m8F64CE276AD814D28C39A8711B646AE4A9283743(L_9, L_10, L_13, Dictionary_2_set_Item_m8F64CE276AD814D28C39A8711B646AE4A9283743_RuntimeMethod_var);
			// EventQueue.Enqueue(new WebSocketEvent()
			// {
			//     ClientId = ClientId,
			//     Payload = null,
			//     Type = WebSocketEvent.WebSocketEventType.Open,
			//     Error = null,
			//     Reason = null
			// });
			Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10* L_14 = ((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___EventQueue_14;
			WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_15 = (WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434*)il2cpp_codegen_object_new(WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434_il2cpp_TypeInfo_var);
			NullCheck(L_15);
			WebSocketEvent__ctor_m1115093A79E6BB0D3F0133B73BB122B9BD5E26A9(L_15, NULL);
			WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_16 = L_15;
			uint64_t L_17;
			L_17 = WebSocketServerConnectionBehavior_get_ClientId_mFAB74E1F55A55D7AD815903A9A5526D094A95540_inline(__this, NULL);
			NullCheck(L_16);
			L_16->___ClientId_1 = L_17;
			WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_18 = L_16;
			NullCheck(L_18);
			L_18->___Payload_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&L_18->___Payload_2), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
			WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_19 = L_18;
			NullCheck(L_19);
			L_19->___Type_0 = 1;
			WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_20 = L_19;
			NullCheck(L_20);
			L_20->___Error_3 = (String_t*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&L_20->___Error_3), (void*)(String_t*)NULL);
			WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_21 = L_20;
			NullCheck(L_21);
			L_21->___Reason_4 = (String_t*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&L_21->___Reason_4), (void*)(String_t*)NULL);
			NullCheck(L_14);
			Queue_1_Enqueue_m4518DCA73D4E47E028387221A627BFDF2C113841(L_14, L_21, Queue_1_Enqueue_m4518DCA73D4E47E028387221A627BFDF2C113841_RuntimeMethod_var);
			// }
			goto IL_00a1;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a1:
	{
		// }
		return;
	}
}
// System.Void Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior::OnClose(WebSocketSharp.CloseEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketServerConnectionBehavior_OnClose_mA77961687FB123A03914B9ACB2B6500C243DC710 (WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122* __this, CloseEventArgs_t22B98E782E975F0442E2C9EB49E699F1D934A588* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mFA2958260FA323A32289C3365F90DD5017E5E810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m1B934ECCB68BBDB4E20FC582AF4D3370980D6435_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m4518DCA73D4E47E028387221A627BFDF2C113841_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (ConnectionLock)
		il2cpp_codegen_runtime_class_init_inline(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___ConnectionLock_11;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007c:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0085;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0085:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				// if (Clients.ContainsKey(ClientId))
				il2cpp_codegen_runtime_class_init_inline(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
				Dictionary_2_t25C2B1256DA6CA53630FF1ABF2AABF3208E9DA55* L_4 = ((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___Clients_10;
				uint64_t L_5;
				L_5 = WebSocketServerConnectionBehavior_get_ClientId_mFAB74E1F55A55D7AD815903A9A5526D094A95540_inline(__this, NULL);
				NullCheck(L_4);
				bool L_6;
				L_6 = Dictionary_2_ContainsKey_mFA2958260FA323A32289C3365F90DD5017E5E810(L_4, L_5, Dictionary_2_ContainsKey_mFA2958260FA323A32289C3365F90DD5017E5E810_RuntimeMethod_var);
				if (!L_6)
				{
					goto IL_007a_1;
				}
			}
			{
				// Clients.Remove(ClientId);
				il2cpp_codegen_runtime_class_init_inline(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
				Dictionary_2_t25C2B1256DA6CA53630FF1ABF2AABF3208E9DA55* L_7 = ((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___Clients_10;
				uint64_t L_8;
				L_8 = WebSocketServerConnectionBehavior_get_ClientId_mFAB74E1F55A55D7AD815903A9A5526D094A95540_inline(__this, NULL);
				NullCheck(L_7);
				bool L_9;
				L_9 = Dictionary_2_Remove_m1B934ECCB68BBDB4E20FC582AF4D3370980D6435(L_7, L_8, Dictionary_2_Remove_m1B934ECCB68BBDB4E20FC582AF4D3370980D6435_RuntimeMethod_var);
				// ReleaseClientId(ClientId);
				uint64_t L_10;
				L_10 = WebSocketServerConnectionBehavior_get_ClientId_mFAB74E1F55A55D7AD815903A9A5526D094A95540_inline(__this, NULL);
				WebSocketServerConnectionBehavior_ReleaseClientId_mE909E7DA82F34622247D565EBB209DC9944AE8A7(L_10, NULL);
				// EventQueue.Enqueue(new WebSocketEvent()
				// {
				//     ClientId = ClientId,
				//     Payload = null,
				//     Type = WebSocketEvent.WebSocketEventType.Close,
				//     Error = null,
				//     Reason = e.Reason
				// });
				Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10* L_11 = ((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___EventQueue_14;
				WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_12 = (WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434*)il2cpp_codegen_object_new(WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434_il2cpp_TypeInfo_var);
				NullCheck(L_12);
				WebSocketEvent__ctor_m1115093A79E6BB0D3F0133B73BB122B9BD5E26A9(L_12, NULL);
				WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_13 = L_12;
				uint64_t L_14;
				L_14 = WebSocketServerConnectionBehavior_get_ClientId_mFAB74E1F55A55D7AD815903A9A5526D094A95540_inline(__this, NULL);
				NullCheck(L_13);
				L_13->___ClientId_1 = L_14;
				WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_15 = L_13;
				NullCheck(L_15);
				L_15->___Payload_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&L_15->___Payload_2), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
				WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_16 = L_15;
				NullCheck(L_16);
				L_16->___Type_0 = 2;
				WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_17 = L_16;
				NullCheck(L_17);
				L_17->___Error_3 = (String_t*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&L_17->___Error_3), (void*)(String_t*)NULL);
				WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_18 = L_17;
				CloseEventArgs_t22B98E782E975F0442E2C9EB49E699F1D934A588* L_19 = ___e0;
				NullCheck(L_19);
				String_t* L_20;
				L_20 = CloseEventArgs_get_Reason_mE32FCC3084521656EB808025B3F841382F8B4E66(L_19, NULL);
				NullCheck(L_18);
				L_18->___Reason_4 = L_20;
				Il2CppCodeGenWriteBarrier((void**)(&L_18->___Reason_4), (void*)L_20);
				NullCheck(L_11);
				Queue_1_Enqueue_m4518DCA73D4E47E028387221A627BFDF2C113841(L_11, L_18, Queue_1_Enqueue_m4518DCA73D4E47E028387221A627BFDF2C113841_RuntimeMethod_var);
			}

IL_007a_1:
			{
				// }
				goto IL_0086;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0086:
	{
		// }
		return;
	}
}
// System.Void Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior::OnError(WebSocketSharp.ErrorEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketServerConnectionBehavior_OnError_m2CFD0D8B2819F0632D04E369B5E55B97867C0EF4 (WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122* __this, ErrorEventArgs_t994316A1E3F79A575728D7388FAFD8BA05DD4052* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mFA2958260FA323A32289C3365F90DD5017E5E810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m4518DCA73D4E47E028387221A627BFDF2C113841_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (ConnectionLock)
		il2cpp_codegen_runtime_class_init_inline(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___ConnectionLock_11;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0060:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0069;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0069:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				// if (Clients.ContainsKey(ClientId))
				il2cpp_codegen_runtime_class_init_inline(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
				Dictionary_2_t25C2B1256DA6CA53630FF1ABF2AABF3208E9DA55* L_4 = ((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___Clients_10;
				uint64_t L_5;
				L_5 = WebSocketServerConnectionBehavior_get_ClientId_mFAB74E1F55A55D7AD815903A9A5526D094A95540_inline(__this, NULL);
				NullCheck(L_4);
				bool L_6;
				L_6 = Dictionary_2_ContainsKey_mFA2958260FA323A32289C3365F90DD5017E5E810(L_4, L_5, Dictionary_2_ContainsKey_mFA2958260FA323A32289C3365F90DD5017E5E810_RuntimeMethod_var);
				if (!L_6)
				{
					goto IL_005e_1;
				}
			}
			{
				// EventQueue.Enqueue(new WebSocketEvent()
				// {
				//     ClientId = ClientId,
				//     Payload = null,
				//     Type = WebSocketEvent.WebSocketEventType.Error,
				//     Error = e.Message,
				//     Reason = null,
				// });
				il2cpp_codegen_runtime_class_init_inline(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
				Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10* L_7 = ((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___EventQueue_14;
				WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_8 = (WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434*)il2cpp_codegen_object_new(WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434_il2cpp_TypeInfo_var);
				NullCheck(L_8);
				WebSocketEvent__ctor_m1115093A79E6BB0D3F0133B73BB122B9BD5E26A9(L_8, NULL);
				WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_9 = L_8;
				uint64_t L_10;
				L_10 = WebSocketServerConnectionBehavior_get_ClientId_mFAB74E1F55A55D7AD815903A9A5526D094A95540_inline(__this, NULL);
				NullCheck(L_9);
				L_9->___ClientId_1 = L_10;
				WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_11 = L_9;
				NullCheck(L_11);
				L_11->___Payload_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&L_11->___Payload_2), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
				WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_12 = L_11;
				NullCheck(L_12);
				L_12->___Type_0 = 4;
				WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_13 = L_12;
				ErrorEventArgs_t994316A1E3F79A575728D7388FAFD8BA05DD4052* L_14 = ___e0;
				NullCheck(L_14);
				String_t* L_15;
				L_15 = ErrorEventArgs_get_Message_m00F54F07334EA99D97F093FF80668E1C2CA0DD92_inline(L_14, NULL);
				NullCheck(L_13);
				L_13->___Error_3 = L_15;
				Il2CppCodeGenWriteBarrier((void**)(&L_13->___Error_3), (void*)L_15);
				WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_16 = L_13;
				NullCheck(L_16);
				L_16->___Reason_4 = (String_t*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&L_16->___Reason_4), (void*)(String_t*)NULL);
				NullCheck(L_7);
				Queue_1_Enqueue_m4518DCA73D4E47E028387221A627BFDF2C113841(L_7, L_16, Queue_1_Enqueue_m4518DCA73D4E47E028387221A627BFDF2C113841_RuntimeMethod_var);
			}

IL_005e_1:
			{
				// }
				goto IL_006a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior::OnMessage(WebSocketSharp.MessageEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketServerConnectionBehavior_OnMessage_m3C574E4DEC88D2547EDB0D8B7077D3718B0B17B5 (WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122* __this, MessageEventArgs_tC1868DA80225C18CE3B1286ED2D4B87474E87919* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mFA2958260FA323A32289C3365F90DD5017E5E810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m4518DCA73D4E47E028387221A627BFDF2C113841_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (ConnectionLock)
		il2cpp_codegen_runtime_class_init_inline(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___ConnectionLock_11;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0060:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0069;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0069:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				// if (Clients.ContainsKey(ClientId))
				il2cpp_codegen_runtime_class_init_inline(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
				Dictionary_2_t25C2B1256DA6CA53630FF1ABF2AABF3208E9DA55* L_4 = ((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___Clients_10;
				uint64_t L_5;
				L_5 = WebSocketServerConnectionBehavior_get_ClientId_mFAB74E1F55A55D7AD815903A9A5526D094A95540_inline(__this, NULL);
				NullCheck(L_4);
				bool L_6;
				L_6 = Dictionary_2_ContainsKey_mFA2958260FA323A32289C3365F90DD5017E5E810(L_4, L_5, Dictionary_2_ContainsKey_mFA2958260FA323A32289C3365F90DD5017E5E810_RuntimeMethod_var);
				if (!L_6)
				{
					goto IL_005e_1;
				}
			}
			{
				// EventQueue.Enqueue(new WebSocketEvent()
				// {
				//     ClientId = ClientId,
				//     Payload = e.RawData,
				//     Type = WebSocketEvent.WebSocketEventType.Payload,
				//     Error = null,
				//     Reason = null,
				// });
				il2cpp_codegen_runtime_class_init_inline(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
				Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10* L_7 = ((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___EventQueue_14;
				WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_8 = (WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434*)il2cpp_codegen_object_new(WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434_il2cpp_TypeInfo_var);
				NullCheck(L_8);
				WebSocketEvent__ctor_m1115093A79E6BB0D3F0133B73BB122B9BD5E26A9(L_8, NULL);
				WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_9 = L_8;
				uint64_t L_10;
				L_10 = WebSocketServerConnectionBehavior_get_ClientId_mFAB74E1F55A55D7AD815903A9A5526D094A95540_inline(__this, NULL);
				NullCheck(L_9);
				L_9->___ClientId_1 = L_10;
				WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_11 = L_9;
				MessageEventArgs_tC1868DA80225C18CE3B1286ED2D4B87474E87919* L_12 = ___e0;
				NullCheck(L_12);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
				L_13 = MessageEventArgs_get_RawData_m523F58617AF9EBE0251FBB46C7DF22BB7AC38BB7(L_12, NULL);
				NullCheck(L_11);
				L_11->___Payload_2 = L_13;
				Il2CppCodeGenWriteBarrier((void**)(&L_11->___Payload_2), (void*)L_13);
				WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_14 = L_11;
				NullCheck(L_14);
				L_14->___Type_0 = 3;
				WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_15 = L_14;
				NullCheck(L_15);
				L_15->___Error_3 = (String_t*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&L_15->___Error_3), (void*)(String_t*)NULL);
				WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_16 = L_15;
				NullCheck(L_16);
				L_16->___Reason_4 = (String_t*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&L_16->___Reason_4), (void*)(String_t*)NULL);
				NullCheck(L_7);
				Queue_1_Enqueue_m4518DCA73D4E47E028387221A627BFDF2C113841(L_7, L_16, Queue_1_Enqueue_m4518DCA73D4E47E028387221A627BFDF2C113841_RuntimeMethod_var);
			}

IL_005e_1:
			{
				// }
				goto IL_006a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketServerConnectionBehavior__ctor_m5E49566E4406B2FD7C799B969A615E9E1CE2D695 (WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122* __this, const RuntimeMethod* method) 
{
	{
		WebSocketBehavior__ctor_m85ACC0286267D77399D41433FCE8D53094D5DC30(__this, NULL);
		return;
	}
}
// System.Void Netcode.Transports.WebSocket.WebSocketServerConnectionBehavior::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketServerConnectionBehavior__cctor_m6B8470822E2706FE26A97BAFA7CD9729440A73AB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mFA6CBB79B6B226357DDAA4938F7CD33DE4526557_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t25C2B1256DA6CA53630FF1ABF2AABF3208E9DA55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mA15F3464308E1DD267ED3B9BB7D8849D2CA73F74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mFACE75E8CAEA49C2487FA67C243F15DAFC67357E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Dictionary<ulong, WebSocketPeer> Clients = new Dictionary<ulong, WebSocketPeer>();
		Dictionary_2_t25C2B1256DA6CA53630FF1ABF2AABF3208E9DA55* L_0 = (Dictionary_2_t25C2B1256DA6CA53630FF1ABF2AABF3208E9DA55*)il2cpp_codegen_object_new(Dictionary_2_t25C2B1256DA6CA53630FF1ABF2AABF3208E9DA55_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mFA6CBB79B6B226357DDAA4938F7CD33DE4526557(L_0, Dictionary_2__ctor_mFA6CBB79B6B226357DDAA4938F7CD33DE4526557_RuntimeMethod_var);
		((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___Clients_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___Clients_10), (void*)L_0);
		// private static readonly object ConnectionLock = new object();
		RuntimeObject* L_1 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_1, NULL);
		((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___ConnectionLock_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___ConnectionLock_11), (void*)L_1);
		// private static ulong ClientIdCounter = 1;
		((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___ClientIdCounter_12 = ((int64_t)1);
		// private static Queue<ulong> ReleasedClientIds = new Queue<ulong>();
		Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* L_2 = (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF*)il2cpp_codegen_object_new(Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Queue_1__ctor_mA15F3464308E1DD267ED3B9BB7D8849D2CA73F74(L_2, Queue_1__ctor_mA15F3464308E1DD267ED3B9BB7D8849D2CA73F74_RuntimeMethod_var);
		((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___ReleasedClientIds_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___ReleasedClientIds_13), (void*)L_2);
		// private static Queue<WebSocketEvent> EventQueue = new Queue<WebSocketEvent>();
		Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10* L_3 = (Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10*)il2cpp_codegen_object_new(Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Queue_1__ctor_mFACE75E8CAEA49C2487FA67C243F15DAFC67357E(L_3, Queue_1__ctor_mFACE75E8CAEA49C2487FA67C243F15DAFC67357E_RuntimeMethod_var);
		((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___EventQueue_14 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var))->___EventQueue_14), (void*)L_3);
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
// System.UInt64 Netcode.Transports.WebSocket.WebSocketTransport::get_ServerClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t WebSocketTransport_get_ServerClientId_m046DF26A44209B8D1C466E746A6147EB9508555C (WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35* __this, const RuntimeMethod* method) 
{
	{
		// public override ulong ServerClientId => 0;
		return ((int64_t)0);
	}
}
// System.Void Netcode.Transports.WebSocket.WebSocketTransport::DisconnectLocalClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketTransport_DisconnectLocalClient_mB04DD7E91F7FC47C2A27F43A89CA97A2D0048999 (WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebSocketClient_t5DF940F4CDA707136A5E508E466B6D56F2B5F2EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebSocketClient.Close();
		RuntimeObject* L_0 = ((WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_il2cpp_TypeInfo_var))->___WebSocketClient_7;
		NullCheck(L_0);
		InterfaceActionInvoker2< uint16_t, String_t* >::Invoke(4 /* System.Void Netcode.Transports.WebSocket.IWebSocketClient::Close(WebSocketSharp.CloseStatusCode,System.String) */, IWebSocketClient_t5DF940F4CDA707136A5E508E466B6D56F2B5F2EA_il2cpp_TypeInfo_var, L_0, ((int32_t)1000), (String_t*)NULL);
		// }
		return;
	}
}
// System.Void Netcode.Transports.WebSocket.WebSocketTransport::DisconnectRemoteClient(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketTransport_DisconnectRemoteClient_m46299C9E7B2B782456CC8DBF92DD2AC22BE2BA5A (WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35* __this, uint64_t ___clientId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebSocketServerConnectionBehavior.DisconnectClient(clientId);
		uint64_t L_0 = ___clientId0;
		il2cpp_codegen_runtime_class_init_inline(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
		WebSocketServerConnectionBehavior_DisconnectClient_mA56BF8B29E2B714807CB818630C74985D78E7338(L_0, ((int32_t)1000), (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.UInt64 Netcode.Transports.WebSocket.WebSocketTransport::GetCurrentRtt(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t WebSocketTransport_GetCurrentRtt_mE5F4F79BE4DE9E198E79F677D34BC2661BAF78BB (WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35* __this, uint64_t ___clientId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebSocketClient_t5DF940F4CDA707136A5E508E466B6D56F2B5F2EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (WebSocketClient != null)
		RuntimeObject* L_0 = ((WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_il2cpp_TypeInfo_var))->___WebSocketClient_7;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return WebSocketClient.WaitTime;
		RuntimeObject* L_1 = ((WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_il2cpp_TypeInfo_var))->___WebSocketClient_7;
		NullCheck(L_1);
		uint64_t L_2;
		L_2 = InterfaceFuncInvoker0< uint64_t >::Invoke(1 /* System.UInt64 Netcode.Transports.WebSocket.IWebSocketClient::get_WaitTime() */, IWebSocketClient_t5DF940F4CDA707136A5E508E466B6D56F2B5F2EA_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0012:
	{
		// else if (WebSocketServer != null)
		WebSocketServer_t100358D00BE6A025323C3449FF95E300DCED1A71* L_3 = ((WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_il2cpp_TypeInfo_var))->___WebSocketServer_6;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// return WebSocketServerConnectionBehavior.Ping(clientId);
		uint64_t L_4 = ___clientId0;
		il2cpp_codegen_runtime_class_init_inline(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
		uint64_t L_5;
		L_5 = WebSocketServerConnectionBehavior_Ping_m3B32BC6C4739A8225A8572E9F7C89A98CD63C45D(L_4, NULL);
		return L_5;
	}

IL_0020:
	{
		// return 0;
		return ((int64_t)0);
	}
}
// System.Void Netcode.Transports.WebSocket.WebSocketTransport::Initialize(Unity.Netcode.NetworkManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketTransport_Initialize_m1763CEA27EB055AC050D76B6D169AF2473D585EC (WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35* __this, NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* ___networkManager0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// Netcode.Transports.WebSocket.WebSocketEvent Netcode.Transports.WebSocket.WebSocketTransport::GetNextWebSocketEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* WebSocketTransport_GetNextWebSocketEvent_m1327FADCA10CAB13429A8C822FB6F3BEB8663F7E (WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebSocketClient_t5DF940F4CDA707136A5E508E466B6D56F2B5F2EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (WebSocketClient != null)
		RuntimeObject* L_0 = ((WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_il2cpp_TypeInfo_var))->___WebSocketClient_7;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return WebSocketClient.Poll();
		RuntimeObject* L_1 = ((WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_il2cpp_TypeInfo_var))->___WebSocketClient_7;
		NullCheck(L_1);
		WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_2;
		L_2 = InterfaceFuncInvoker0< WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* >::Invoke(6 /* Netcode.Transports.WebSocket.WebSocketEvent Netcode.Transports.WebSocket.IWebSocketClient::Poll() */, IWebSocketClient_t5DF940F4CDA707136A5E508E466B6D56F2B5F2EA_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0012:
	{
		// return WebSocketServerConnectionBehavior.Poll();
		il2cpp_codegen_runtime_class_init_inline(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
		WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_3;
		L_3 = WebSocketServerConnectionBehavior_Poll_m836B6E31C4B6EAC75318FB0CB104516CC7664C9F(NULL);
		return L_3;
	}
}
// Unity.Netcode.NetworkEvent Netcode.Transports.WebSocket.WebSocketTransport::PollEvent(System.UInt64&,System.ArraySegment`1<System.Byte>&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocketTransport_PollEvent_mBCA6F779F6E430C26C373913E809FA948B5B7158 (WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35* __this, uint64_t* ___clientId0, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* ___payload1, float* ___receiveTime2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* V_0 = NULL;
	{
		// var e = GetNextWebSocketEvent();
		WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_0;
		L_0 = WebSocketTransport_GetNextWebSocketEvent_m1327FADCA10CAB13429A8C822FB6F3BEB8663F7E(__this, NULL);
		V_0 = L_0;
		// clientId = e.ClientId;
		uint64_t* L_1 = ___clientId0;
		WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_2 = V_0;
		NullCheck(L_2);
		uint64_t L_3 = L_2->___ClientId_1;
		*((int64_t*)L_1) = (int64_t)L_3;
		// receiveTime = Time.realtimeSinceStartup;
		float* L_4 = ___receiveTime2;
		float L_5;
		L_5 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		*((float*)L_4) = (float)L_5;
		// if (e.Payload != null)
		WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_6 = V_0;
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6->___Payload_2;
		if (!L_7)
		{
			goto IL_0031;
		}
	}
	{
		// payload = new ArraySegment<byte>(e.Payload);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* L_8 = ___payload1;
		WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_9 = V_0;
		NullCheck(L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = L_9->___Payload_2;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_11;
		memset((&L_11), 0, sizeof(L_11));
		ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86((&L_11), L_10, /*hidden argument*/ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_RuntimeMethod_var);
		*(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*)L_8 = L_11;
		Il2CppCodeGenWriteBarrier((void**)&(((ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*)L_8)->____array_1), (void*)NULL);
		goto IL_0038;
	}

IL_0031:
	{
		// payload = new ArraySegment<byte>();
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* L_12 = ___payload1;
		il2cpp_codegen_initobj(L_12, sizeof(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093));
	}

IL_0038:
	{
		// return e.GetNetworkEvent();
		WebSocketEvent_tFA7C1B36846925BF84F617774FD1401BB0BCE434* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = WebSocketEvent_GetNetworkEvent_m2149FD7F124704A34612DFBC3C967CE84E2DA142(L_13, NULL);
		return L_14;
	}
}
// System.Void Netcode.Transports.WebSocket.WebSocketTransport::Send(System.UInt64,System.ArraySegment`1<System.Byte>,Unity.Netcode.NetworkDelivery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketTransport_Send_mA00B93441B916A81A4E61FD2E4A3F5FA1D5825D3 (WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35* __this, uint64_t ___clientId0, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___data1, int32_t ___delivery2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebSocketClient_t5DF940F4CDA707136A5E508E466B6D56F2B5F2EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (clientId == ServerClientId)
		uint64_t L_0 = ___clientId0;
		uint64_t L_1;
		L_1 = VirtualFuncInvoker0< uint64_t >::Invoke(4 /* System.UInt64 Unity.Netcode.NetworkTransport::get_ServerClientId() */, __this);
		if ((!(((uint64_t)L_0) == ((uint64_t)L_1))))
		{
			goto IL_0015;
		}
	}
	{
		// WebSocketClient.Send(data);
		RuntimeObject* L_2 = ((WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_il2cpp_TypeInfo_var))->___WebSocketClient_7;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_3 = ___data1;
		NullCheck(L_2);
		InterfaceActionInvoker1< ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 >::Invoke(5 /* System.Void Netcode.Transports.WebSocket.IWebSocketClient::Send(System.ArraySegment`1<System.Byte>) */, IWebSocketClient_t5DF940F4CDA707136A5E508E466B6D56F2B5F2EA_il2cpp_TypeInfo_var, L_2, L_3);
		return;
	}

IL_0015:
	{
		// WebSocketServerConnectionBehavior.Send(clientId, data);
		uint64_t L_4 = ___clientId0;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_5 = ___data1;
		il2cpp_codegen_runtime_class_init_inline(WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_il2cpp_TypeInfo_var);
		WebSocketServerConnectionBehavior_Send_m13D53A5C425A0658A20986062F0BE59185A9BC96(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Netcode.Transports.WebSocket.WebSocketTransport::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketTransport_Shutdown_m494A178B434A672DB6B1F2BE8D2D91E95BC57F12 (WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebSocketClient_t5DF940F4CDA707136A5E508E466B6D56F2B5F2EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (WebSocketClient != null)
		RuntimeObject* L_0 = ((WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_il2cpp_TypeInfo_var))->___WebSocketClient_7;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// WebSocketClient.Close();
		RuntimeObject* L_1 = ((WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_il2cpp_TypeInfo_var))->___WebSocketClient_7;
		NullCheck(L_1);
		InterfaceActionInvoker2< uint16_t, String_t* >::Invoke(4 /* System.Void Netcode.Transports.WebSocket.IWebSocketClient::Close(WebSocketSharp.CloseStatusCode,System.String) */, IWebSocketClient_t5DF940F4CDA707136A5E508E466B6D56F2B5F2EA_il2cpp_TypeInfo_var, L_1, ((int32_t)1000), (String_t*)NULL);
		return;
	}

IL_0018:
	{
		// else if (WebSocketServer != null)
		WebSocketServer_t100358D00BE6A025323C3449FF95E300DCED1A71* L_2 = ((WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_il2cpp_TypeInfo_var))->___WebSocketServer_6;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// WebSocketServer.Stop();
		WebSocketServer_t100358D00BE6A025323C3449FF95E300DCED1A71* L_3 = ((WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_il2cpp_TypeInfo_var))->___WebSocketServer_6;
		NullCheck(L_3);
		WebSocketServer_Stop_mBF3CBE255A4045821B0CCC11F16922E912B34654(L_3, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Boolean Netcode.Transports.WebSocket.WebSocketTransport::StartClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketTransport_StartClient_mBEFA2F4D649DC8FB5D91F940FD6D7672652BAB13 (WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebSocketClient_t5DF940F4CDA707136A5E508E466B6D56F2B5F2EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60202784C238D8D280B8FD997BE00D2B2F592EDB);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B5_0 = NULL;
	{
		// if (IsStarted)
		bool L_0 = ((WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_il2cpp_TypeInfo_var))->___IsStarted_8;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// throw new InvalidOperationException("Socket already started");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDCD66B4EDBD6EF2E0EEE2EE492FC364F2BE725F2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocketTransport_StartClient_mBEFA2F4D649DC8FB5D91F940FD6D7672652BAB13_RuntimeMethod_var)));
	}

IL_0012:
	{
		// var protocol = SecureConnection ? "wss" : "ws";
		bool L_2 = __this->___SecureConnection_11;
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		G_B5_0 = _stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95;
		goto IL_0026;
	}

IL_0021:
	{
		G_B5_0 = _stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C;
	}

IL_0026:
	{
		V_0 = G_B5_0;
		// WebSocketClient = WebSocketClientFactory.Create($"{protocol}://{ConnectAddress}:{Port}/netcode");
		String_t* L_3 = V_0;
		String_t* L_4 = __this->___ConnectAddress_9;
		uint16_t L_5 = __this->___Port_10;
		uint16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral60202784C238D8D280B8FD997BE00D2B2F592EDB, L_3, L_4, L_7, NULL);
		RuntimeObject* L_9;
		L_9 = WebSocketClientFactory_Create_m2AE7C908673A0A72F0226C06402EB9EEB7B7DF19(L_8, NULL);
		((WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_il2cpp_TypeInfo_var))->___WebSocketClient_7 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_il2cpp_TypeInfo_var))->___WebSocketClient_7), (void*)L_9);
		// WebSocketClient.Connect();
		RuntimeObject* L_10 = ((WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_il2cpp_TypeInfo_var))->___WebSocketClient_7;
		NullCheck(L_10);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Netcode.Transports.WebSocket.IWebSocketClient::Connect() */, IWebSocketClient_t5DF940F4CDA707136A5E508E466B6D56F2B5F2EA_il2cpp_TypeInfo_var, L_10);
		// IsStarted = true;
		((WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_il2cpp_TypeInfo_var))->___IsStarted_8 = (bool)1;
		// return true;
		return (bool)1;
	}
}
// System.Boolean Netcode.Transports.WebSocket.WebSocketTransport::StartServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketTransport_StartServer_m2D39DB8B330B661210FDDACBFD4984F1B9B4C072 (WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketServer_AddWebSocketService_TisWebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_mA026A3E93873B7F55AD52CF81006BF9A81A88EF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketServer_t100358D00BE6A025323C3449FF95E300DCED1A71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AB210039B5A2CF5872076AA022415132BB72E3B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsStarted)
		bool L_0 = ((WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_il2cpp_TypeInfo_var))->___IsStarted_8;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// throw new InvalidOperationException("Socket already started");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDCD66B4EDBD6EF2E0EEE2EE492FC364F2BE725F2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocketTransport_StartServer_m2D39DB8B330B661210FDDACBFD4984F1B9B4C072_RuntimeMethod_var)));
	}

IL_0012:
	{
		// WebSocketServer = new WebSocketServer(Port);
		uint16_t L_2 = __this->___Port_10;
		WebSocketServer_t100358D00BE6A025323C3449FF95E300DCED1A71* L_3 = (WebSocketServer_t100358D00BE6A025323C3449FF95E300DCED1A71*)il2cpp_codegen_object_new(WebSocketServer_t100358D00BE6A025323C3449FF95E300DCED1A71_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WebSocketServer__ctor_mB59F901B188E535145B57FCEAFF2D44F2A05B0E0(L_3, L_2, NULL);
		((WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_il2cpp_TypeInfo_var))->___WebSocketServer_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_il2cpp_TypeInfo_var))->___WebSocketServer_6), (void*)L_3);
		// WebSocketServer.AddWebSocketService<WebSocketServerConnectionBehavior>("/netcode");
		WebSocketServer_t100358D00BE6A025323C3449FF95E300DCED1A71* L_4 = ((WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_il2cpp_TypeInfo_var))->___WebSocketServer_6;
		NullCheck(L_4);
		WebSocketServer_AddWebSocketService_TisWebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_mA026A3E93873B7F55AD52CF81006BF9A81A88EF3(L_4, _stringLiteral3AB210039B5A2CF5872076AA022415132BB72E3B, WebSocketServer_AddWebSocketService_TisWebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122_mA026A3E93873B7F55AD52CF81006BF9A81A88EF3_RuntimeMethod_var);
		// WebSocketServer.Start();
		WebSocketServer_t100358D00BE6A025323C3449FF95E300DCED1A71* L_5 = ((WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_il2cpp_TypeInfo_var))->___WebSocketServer_6;
		NullCheck(L_5);
		WebSocketServer_Start_m3AB36EF40AE61DD126739A51CD6DFB40F2EB4E70(L_5, NULL);
		// IsStarted = true;
		((WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35_il2cpp_TypeInfo_var))->___IsStarted_8 = (bool)1;
		// return true;
		return (bool)1;
	}
}
// System.Void Netcode.Transports.WebSocket.WebSocketTransport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketTransport__ctor_m6D7522E03064EBDF389D46169A2AD9154694C8D7 (WebSocketTransport_t90316EC9F2EDDAA49FF8E31C3B3C083CD621CF35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string ConnectAddress = "127.0.0.1";
		__this->___ConnectAddress_9 = _stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ConnectAddress_9), (void*)_stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE);
		// public ushort Port = 7777;
		__this->___Port_10 = (uint16_t)((int32_t)7777);
		NetworkTransport__ctor_m4539E8F121DB9DFB42D7B63EC51A14FB1C7738AF(__this, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpListener_tFAA6A3F0382BEBACA28631D4E831D334006DA1F9* HttpListenerContext_get_Listener_m6103F00159F143FF4E81916748EF8861DB2F7C0E_inline (HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* __this, const RuntimeMethod* method) 
{
	{
		// return _listener;
		HttpListener_tFAA6A3F0382BEBACA28631D4E831D334006DA1F9* L_0 = __this->____listener_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Logger_t53407739C86D76B1D27356B732E39367394F4ABA* HttpListener_get_Log_mC2F80F8DF4C5B4B5A781D8F3C31548153DC75EFD_inline (HttpListener_tFAA6A3F0382BEBACA28631D4E831D334006DA1F9* __this, const RuntimeMethod* method) 
{
	{
		// return _log;
		Logger_t53407739C86D76B1D27356B732E39367394F4ABA* L_0 = __this->____log_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpConnection_tF70009B09FAD5A4B7492CCAAB79480EA70DD3EA9* HttpListenerContext_get_Connection_m22D9CB4FE622EF43F02DEE0C9691874661216B2B_inline (HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* __this, const RuntimeMethod* method) 
{
	{
		// return _connection;
		HttpConnection_tF70009B09FAD5A4B7492CCAAB79480EA70DD3EA9* L_0 = __this->____connection_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* HttpConnection_get_Stream_m26609E51E336816BE4F76AF531709258F4FC5142_inline (HttpConnection_tF70009B09FAD5A4B7492CCAAB79480EA70DD3EA9* __this, const RuntimeMethod* method) 
{
	{
		// return _stream;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____stream_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpListenerRequest_t89F42007013FD4C768C1630A02E475507C563575* HttpListenerContext_get_Request_mB8E8B02F17D9175290AF08EC514CEC4A96B599D1_inline (HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* __this, const RuntimeMethod* method) 
{
	{
		// return _request;
		HttpListenerRequest_t89F42007013FD4C768C1630A02E475507C563575* L_0 = __this->____request_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* HttpListenerRequest_get_Headers_mD573F0D8618E54DA7F458736F95512354AC7FF42_inline (HttpListenerRequest_t89F42007013FD4C768C1630A02E475507C563575* __this, const RuntimeMethod* method) 
{
	{
		// return _headers;
		WebHeaderCollection_t87B66BA664497F19ED4925E70BEB6432ED0E250D* L_0 = __this->____headers_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* HttpListenerRequest_get_UserHostName_mA090FB0737FB6B88D6E5AD1199105125253E9584_inline (HttpListenerRequest_t89F42007013FD4C768C1630A02E475507C563575* __this, const RuntimeMethod* method) 
{
	{
		// return _userHostName;
		String_t* L_0 = __this->____userHostName_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HttpListenerContext_get_User_m6F46F002CC8FF9ED085E5273F095F7E634958A4E_inline (HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* __this, const RuntimeMethod* method) 
{
	{
		// return _user;
		RuntimeObject* L_0 = __this->____user_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpListenerResponse_t67D6387C1CCEE533F721B27C7ECFCD4E231DB3A0* HttpListenerContext_get_Response_m7BB1B78E06381A2315E8034E4644460610ABBDA2_inline (HttpListenerContext_tEAC615AA4536B76044D388AB2C5828ECF9796E44* __this, const RuntimeMethod* method) 
{
	{
		// return _response;
		HttpListenerResponse_t67D6387C1CCEE533F721B27C7ECFCD4E231DB3A0* L_0 = __this->____response_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* ServerSslConfiguration_get_ServerCertificate_mF4275E3B95B3DC27216793F9E8C09793EE5F94D3_inline (ServerSslConfiguration_tFE7CD988C3426FA1F6D02567C24D49FCD8DB6A42* __this, const RuntimeMethod* method) 
{
	{
		// return _serverCert;
		X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* L_0 = __this->____serverCert_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ServerSslConfiguration_get_ClientCertificateRequired_mC424E87917DB3A35FB1179DC9C35FB530AFC4CBB_inline (ServerSslConfiguration_tFE7CD988C3426FA1F6D02567C24D49FCD8DB6A42* __this, const RuntimeMethod* method) 
{
	{
		// return _clientCertRequired;
		bool L_0 = __this->____clientCertRequired_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ServerSslConfiguration_get_EnabledSslProtocols_m211F1231991B91763419260775DDCE3A3F876D56_inline (ServerSslConfiguration_tFE7CD988C3426FA1F6D02567C24D49FCD8DB6A42* __this, const RuntimeMethod* method) 
{
	{
		// return _enabledSslProtocols;
		int32_t L_0 = __this->____enabledSslProtocols_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ServerSslConfiguration_get_CheckCertificateRevocation_m61D703CA95D406C0C2A44AE1405487908861B57F_inline (ServerSslConfiguration_tFE7CD988C3426FA1F6D02567C24D49FCD8DB6A42* __this, const RuntimeMethod* method) 
{
	{
		// return _checkCertRevocation;
		bool L_0 = __this->____checkCertRevocation_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* TcpClient_get_Client_m38B7DCD73EB42C6BBE6340B5E4C0A8432C1140C0_inline (TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* __this, const RuntimeMethod* method) 
{
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___m_ClientSocket_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* HttpBase_get_Headers_m04F30F8C39D5F5089590FEA1FFAB420481912E7C_inline (HttpBase_t23596200D738BFD45A1801CF7AB265233611E96A* __this, const RuntimeMethod* method) 
{
	{
		// return _headers;
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_0 = __this->____headers_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, const RuntimeMethod* method) 
{
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_0 = __this->____address_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* HttpRequest_get_RequestUri_m581094A6BE87E41522283E47D5E8DF29124CEECE_inline (HttpRequest_tC4EBD60896D30D3F354443F03AB29F7960C5F492* __this, const RuntimeMethod* method) 
{
	{
		// return _uri;
		String_t* L_0 = __this->____uri_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* HttpRequest_get_HttpMethod_m08FC9EA28184859CD01C6B257823482E0801E37D_inline (HttpRequest_tC4EBD60896D30D3F354443F03AB29F7960C5F492* __this, const RuntimeMethod* method) 
{
	{
		// return _method;
		String_t* L_0 = __this->____method_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A WebSocket_get_WaitTime_m1F9DADF61FDAE43664C81C6D3F58CCD97A01653E_inline (WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* __this, const RuntimeMethod* method) 
{
	{
		// return _waitTime;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = __this->____waitTime_46;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10* NativeWebSocketClient_get_EventQueue_mD5D6BEB913A28A893EABA22ACC3095E429D809D8_inline (NativeWebSocketClient_t36DFC01CDF5EEC449BA74F0F90DD1AE5C55B660B* __this, const RuntimeMethod* method) 
{
	{
		// public Queue<WebSocketEvent> EventQueue { get; } = new Queue<WebSocketEvent>();
		Queue_1_t01037F441DDCD06BC1D50F059EE098A186AECE10* L_0 = __this->___U3CEventQueueU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ErrorEventArgs_get_Message_m00F54F07334EA99D97F093FF80668E1C2CA0DD92_inline (ErrorEventArgs_t994316A1E3F79A575728D7388FAFD8BA05DD4052* __this, const RuntimeMethod* method) 
{
	{
		// return _message;
		String_t* L_0 = __this->____message_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WebSocketContext_t210263DD230B87766F206EC3DDBC301B24F5748B* WebSocketBehavior_get_Context_mD22E88B612B52E63BC55E2084070C7E27CFB72D0_inline (WebSocketBehavior_tE591886B40BB216DD21122093C87124CB0B74037* __this, const RuntimeMethod* method) 
{
	{
		// return _context;
		WebSocketContext_t210263DD230B87766F206EC3DDBC301B24F5748B* L_0 = __this->____context_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebSocketServerConnectionBehavior_set_Endpoint_mBE247A4C877F3E860345C247DD6F3DF67615C606_inline (WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122* __this, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___value0, const RuntimeMethod* method) 
{
	{
		// public IPEndPoint Endpoint { get; private set; }
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_0 = ___value0;
		__this->___U3CEndpointU3Ek__BackingField_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEndpointU3Ek__BackingField_15), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebSocketServerConnectionBehavior_set_Socket_m37898BBE2A9D85D98743BC5C99E1F10B7A6B7344_inline (WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122* __this, WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* ___value0, const RuntimeMethod* method) 
{
	{
		// public WebSocketSharp.WebSocket Socket { get; private set; }
		WebSocket_tA340337A8E6F0F05E264F46DBBFC5D147878A171* L_0 = ___value0;
		__this->___U3CSocketU3Ek__BackingField_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSocketU3Ek__BackingField_16), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebSocketServerConnectionBehavior_set_ClientId_m11FA239C40665A5D4765A4C4748D27BBC5A917C5_inline (WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	{
		// public ulong ClientId { get; private set; }
		uint64_t L_0 = ___value0;
		__this->___U3CClientIdU3Ek__BackingField_17 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t WebSocketServerConnectionBehavior_get_ClientId_mFAB74E1F55A55D7AD815903A9A5526D094A95540_inline (WebSocketServerConnectionBehavior_t13C500B7B52A18E7F3A5E5F6D891B23C77900122* __this, const RuntimeMethod* method) 
{
	{
		// public ulong ClientId { get; private set; }
		uint64_t L_0 = __this->___U3CClientIdU3Ek__BackingField_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_gshared_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____offset_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)__this->____array_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mF408F7F539EA2D8DF7E25FF32A7DB433FFB9F67A_gshared_inline (Queue_1_t03972BAF1B65E498DBC547EFF79E67F22DB323BF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
