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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Action`1<Google.Protobuf.IMessage>
struct Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`2<Google.Protobuf.IMessage,System.Object>
struct Action_2_t939E2CC3C1A7288E5CDB844113A2D158F3612171;
// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
// System.Collections.Generic.Dictionary`2<System.Int32,Google.Protobuf.IExtensionValue>
struct Dictionary_2_t7D99B8C24B0BFFDE97F3C514C8E7AA5FA84C046D;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct Dictionary_2_t31CFF5885A32B2296486F78FBD937CABF29763E7;
// System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor>
struct Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384;
// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Double>>
struct EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694;
// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Single>>
struct EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203;
// System.Collections.Generic.EqualityComparer`1<Google.Protobuf.Reflection.DescriptorProto>
struct EqualityComparer_1_t915621445F39410B66ADE17141012D47D7448DFB;
// System.Collections.Generic.EqualityComparer`1<System.Double>
struct EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB;
// System.Collections.Generic.EqualityComparer`1<Google.Protobuf.Reflection.EnumDescriptorProto>
struct EqualityComparer_1_t7121A20DD0C00861155D15449502A86E19ABBBDF;
// System.Collections.Generic.EqualityComparer`1<Google.Protobuf.Reflection.FieldDescriptorProto>
struct EqualityComparer_1_t9DD3C5B6D700A05D514621A4C6FF2C2AD64D5AC9;
// System.Collections.Generic.EqualityComparer`1<Google.Protobuf.Reflection.MethodDescriptorProto>
struct EqualityComparer_1_t5A1DC50B8DF80E0DE40F028FAEAA277E1F7D8094;
// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
// System.Collections.Generic.EqualityComparer`1<Google.Protobuf.Reflection.OneofDescriptorProto>
struct EqualityComparer_1_tA1732808B62C77F60F915CE60E339EBE4BD6F0AD;
// System.Collections.Generic.EqualityComparer`1<System.Single>
struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499;
// System.Collections.Generic.EqualityComparer`1<Google.Protobuf.Reflection.DescriptorProto/Types/ExtensionRange>
struct EqualityComparer_1_t0BC3473F7C2D04F77B3D071F158F2AB6B25FD504;
// Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.MessageOptions>
struct ExtensionSet_1_tF304BC81EFCE3C2142ACECC1A1E2B5FD4BD89D09;
// Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.MethodOptions>
struct ExtensionSet_1_t7852FD32A1BA06E9EC2E3A0A4FD20D1ECE125227;
// Google.Protobuf.ExtensionSet`1<System.Object>
struct ExtensionSet_1_tA306FF3953ADABAEE3DC44E13016F5BA6BAB5399;
// Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.OneofOptions>
struct ExtensionSet_1_t2F914810BA451806E5E9BDEBFF2EB33451DBC097;
// Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.ServiceOptions>
struct ExtensionSet_1_t89FDE7093BD8C1D18C53FBFAC7040214AE9BD25D;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.DescriptorProto>
struct FieldCodec_1_tAACC01F60039098F4E012BA2ECF3C95C55F9655C;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.EnumDescriptorProto>
struct FieldCodec_1_t26302C0D19596A86EAA32957047DC93218A3EF0A;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.EnumValueDescriptorProto>
struct FieldCodec_1_t20A177182A818B7310FEEA7DF9848B0F4DFBB604;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.FieldDescriptorProto>
struct FieldCodec_1_t21DF84ECEAE5A588438084C718EE0697F7495FD3;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.MethodDescriptorProto>
struct FieldCodec_1_tB268F98DDB08D3D7B86D4A773ADBB6C7BAA07058;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.OneofDescriptorProto>
struct FieldCodec_1_tD8B477E6E14F4C5A8C924507FE2973CAF1B52250;
// Google.Protobuf.FieldCodec`1<System.String>
struct FieldCodec_1_tB7730C8D2D4ADF6392F4D474DE844629557D8ABA;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.UninterpretedOption>
struct FieldCodec_1_t031494A43485F8D802C8F4754808FB82BD28E950;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.DescriptorProto/Types/ExtensionRange>
struct FieldCodec_1_t5558E926F40278AAC6C3AD93D265C4AA554DCD16;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.DescriptorProto/Types/ReservedRange>
struct FieldCodec_1_t90AB10B3ED8AC4DE44A947D1CF3329936C7132AB;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.EnumDescriptorProto/Types/EnumReservedRange>
struct FieldCodec_1_tCF98451FF0BD2005783BAC289042A4FAE6D865AF;
// System.Func`1<Google.Protobuf.IMessage>
struct Func_1_t726CD36CB50B2F99D102B003DBF9F7D5ECFE2918;
// System.Func`2<Google.Protobuf.Extension,System.Boolean>
struct Func_2_t437128A918A982CC9FB2758C20041B84F1890E7B;
// System.Func`2<Google.Protobuf.Reflection.FieldDescriptor,Google.Protobuf.Extension>
struct Func_2_tE3643DA0376B2A3A0C68890AF8193C8AB61EF667;
// System.Func`2<Google.Protobuf.Reflection.FieldDescriptor,System.Int32>
struct Func_2_tC1A88D50374165E90B663F30D638545C47ECFDAC;
// System.Func`2<Google.Protobuf.Reflection.FieldDescriptorProto,System.Boolean>
struct Func_2_tA328F6AF21E84812B76E5CDC390E8EA589CEB76F;
// System.Func`2<Google.Protobuf.Reflection.FileDescriptor,System.String>
struct Func_2_tB9D3E63930E6E171F5E3D5A91618184F87679319;
// System.Func`2<Google.Protobuf.Reflection.GeneratedClrTypeInfo,System.Boolean>
struct Func_2_t640DDE22360052A3C855A1FD066029744EC7BD16;
// System.Func`2<Google.Protobuf.IMessage,System.Boolean>
struct Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB;
// System.Func`2<Google.Protobuf.IMessage,System.Int32>
struct Func_2_tAA7621BADE44DD8FE95297120257F58E03B4D5D3;
// System.Func`2<Google.Protobuf.IMessage,System.Object>
struct Func_2_t9F375C79031DDA5B3E25DFCE11100F61C1E8BB2F;
// System.Func`2<Google.Protobuf.Reflection.MessageDescriptor,Google.Protobuf.Reflection.FileDescriptor>
struct Func_2_tAA9A15EB8AD5D30A7F469C695166D5A8779DD5F0;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Collections.Generic.HashSet`1<Google.Protobuf.Reflection.FileDescriptor>
struct HashSet_1_t57BDC9706421688AAA2C822E54970543F03C1FF8;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.IDictionary`2<Google.Protobuf.ObjectIntPair`1<Google.Protobuf.Reflection.IDescriptor>,Google.Protobuf.Reflection.EnumValueDescriptor>
struct IDictionary_2_t7F942C7C6EF6A977B2B39EC617079696EE060396;
// System.Collections.Generic.IDictionary`2<Google.Protobuf.ObjectIntPair`1<Google.Protobuf.Reflection.IDescriptor>,Google.Protobuf.Reflection.FieldDescriptor>
struct IDictionary_2_t60B0B63E546854D358E5BE8F789616FF3380B263;
// System.Collections.Generic.IDictionary`2<System.Int32,Google.Protobuf.IExtensionValue>
struct IDictionary_2_t94DFB02B7C8E7C064F4F96EACB912E25EA2F2E78;
// System.Collections.Generic.IDictionary`2<Google.Protobuf.Reflection.MessageDescriptor,System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor>>
struct IDictionary_2_tD4F825896A81A04DC6689176787FC455C5B7A813;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED;
// System.Collections.Generic.IDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct IDictionary_2_tDB170C5929E4ACA380EEF5C8E082139CE49EC21B;
// System.Collections.Generic.IDictionary`2<System.String,Google.Protobuf.Reflection.IDescriptor>
struct IDictionary_2_t3ABE52D9C581D30BB0194553D457CCFB9FC85C53;
// System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FieldDescriptor>
struct IEnumerable_1_tDDBABD38601B0B3CB8FE8BC3C7192A21443B0D06;
// System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FieldDescriptorProto>
struct IEnumerable_1_t9A8C5367546D20BD9171AEA9E7E6C1D4BA2C02A9;
// System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FileDescriptor>
struct IEnumerable_1_t122AEB8E657DD14AE7AC316E37A4B28082F53174;
// System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MessageDescriptor>
struct IEnumerable_1_t4CD5EF9BE7925478517917504140E652CD2D743B;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.DescriptorProto>
struct IList_1_t0AA5C9F9C50473E6B74CE272E301A3501ADBA51A;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor>
struct IList_1_t2113D31E64AB4BC3FE73AB5985B7D30B220225D2;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptorProto>
struct IList_1_t9B627132CD437EDF17D175484FF59796FAA3445E;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumValueDescriptor>
struct IList_1_t62C9D2B4434397290C22494EAE83EF82091C9DCD;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor>
struct IList_1_tBECF6C25D47C20B0CA9B3100FD02FED4BA91145E;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptorProto>
struct IList_1_t2D045D88BC2BE676C33B395AAD2B088FCF512C8F;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor>
struct IList_1_t1C3796CCB02A6FB46469A8C82C9FBB10883C38B1;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor>
struct IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MethodDescriptor>
struct IList_1_t8F9E40B57B31F24B4FF11D24C88155651A66C0E4;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MethodDescriptorProto>
struct IList_1_t54E8EFD4F83D97E7AA884CEDCEEBF277925EE6F6;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.OneofDescriptor>
struct IList_1_t72D63DEDFD3D09D9D034239EC2954718F7FCDB68;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.OneofDescriptorProto>
struct IList_1_t9904DA873DD391B88AFFBE6E68505C419755D7BC;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.ServiceDescriptor>
struct IList_1_t9B74854C0814D339537A7FFF6105D1D25A39C180;
// System.Linq.IOrderedEnumerable`1<Google.Protobuf.Reflection.FieldDescriptor>
struct IOrderedEnumerable_1_t2D4EC5915BEFCBDC71224725B1913D516835A176;
// System.Linq.IOrderedEnumerable`1<System.Object>
struct IOrderedEnumerable_1_t0E680E8E1A4A676334F2A0C9A6F9B93135A65EAC;
// System.Collections.Generic.IReadOnlyList`1<Google.Protobuf.Reflection.DescriptorBase>
struct IReadOnlyList_1_tE8529F2628C6B785ECC52D9CB4B1136C1013AE13;
// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.DescriptorProto,Google.Protobuf.Reflection.MessageDescriptor>
struct IndexedConverter_2_tFCAD597B937F3CEFE1C8FFF01A3045CE41F4F67C;
// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.EnumDescriptorProto,Google.Protobuf.Reflection.EnumDescriptor>
struct IndexedConverter_2_t3A6BE85E4DCF21D028DD56A9C8C71B10109B58C4;
// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.FieldDescriptorProto,Google.Protobuf.Reflection.FieldDescriptor>
struct IndexedConverter_2_t0DDCFB08F1D74E2C7092F67B7BD0E05107B62F08;
// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.MethodDescriptorProto,Google.Protobuf.Reflection.MethodDescriptor>
struct IndexedConverter_2_tBFDF7A55E5AD530A48988CD0D6F975525A8A1543;
// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<System.Object,System.Object>
struct IndexedConverter_2_t3F40E49B0902E46EF51FCD1900236654B206AD99;
// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.OneofDescriptorProto,Google.Protobuf.Reflection.OneofDescriptor>
struct IndexedConverter_2_tFF5D05C491F41287F243B4B526A8DADCC34E0BA9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Google.Protobuf.IExtensionValue>
struct KeyCollection_t646D2BE3ED009778C181880C7B6EEB0F6E430D36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct KeyCollection_t021EFE20A70B7F8FA6AB510DD471E8A9FC593CA4;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct KeyCollection_tA29BC9F740F30562FA6F6109BBBE2C793B20F65B;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Google.Protobuf.Reflection.MessageDescriptor>
struct KeyCollection_tFB20A0E74840A072063C53665F19BDF6081C04A3;
// System.Lazy`1<System.Collections.Generic.Dictionary`2<Google.Protobuf.Reflection.IDescriptor,Google.Protobuf.Reflection.DescriptorDeclaration>>
struct Lazy_1_t9EE2A1123EC79B036ABD6DA8C3433CC66609B4A6;
// System.Collections.Generic.List`1<Google.Protobuf.Reflection.FieldDescriptor>
struct List_1_t64981EE12A2A370C5000034039B00D57761431A3;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.DescriptorProto>
struct MessageParser_1_tC828A5AED52A2A1A6B443C129AB81159E952AA23;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.EnumDescriptorProto>
struct MessageParser_1_t350C9B91DAEAF8C30A89B29EC781797549504BC3;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.FieldDescriptorProto>
struct MessageParser_1_tF4DAA81C6A6F29BEC553A6676E86AC33118C52E3;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.MessageOptions>
struct MessageParser_1_tFFEB1180EAC16752D1427BFCDDC4B2505E7E6825;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.MethodDescriptorProto>
struct MessageParser_1_tA100AB071B3DCDB92D3B415C6CA42ADEF0E41B7C;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.MethodOptions>
struct MessageParser_1_tD087B27B49C43A6910639742980B8D26A13E7C22;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.OneofDescriptorProto>
struct MessageParser_1_tE7DD323B82F902A745394143FCD3A97DE59885FD;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.OneofOptions>
struct MessageParser_1_t521F874BA4869002851396C1D823B834193E6E28;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.ServiceDescriptorProto>
struct MessageParser_1_tAB75DE67CDAFD27D5FD5D410F5C6DAFB79FEF1CE;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.ServiceOptions>
struct MessageParser_1_tD751281EB3C202EB4829B26F67B05756385AF63B;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Google.Protobuf.Reflection.FieldDescriptor>
struct ReadOnlyCollection_1_t576A96EB67EFDB504EC4066151F3F1B55149AE2B;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Object>
struct ReadOnlyDictionary_2_tA5E205F3BBEB6B67DBCA3C316E87352486DFF1C2;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct ReadOnlyDictionary_2_tAD61E95979D9934AF3B06DCF0866D229C964C0DF;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto>
struct RepeatedField_1_t1647174A532CD385C86A4013E9A94E3ED25C783B;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.EnumDescriptorProto>
struct RepeatedField_1_tD86397FCB230839D8CDFAD16012311B08C27B0D3;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.EnumValueDescriptorProto>
struct RepeatedField_1_t3D59FA70FAD073B54E94A963E1906D5E534D48B9;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.FieldDescriptorProto>
struct RepeatedField_1_t7E4B2149855E87DEBE33830CBE70920C8A6E52E1;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.MethodDescriptorProto>
struct RepeatedField_1_tDBB28893EE104846AAAF4D79249AD6254CB6EC7E;
// Google.Protobuf.Collections.RepeatedField`1<System.Object>
struct RepeatedField_1_t9D56278C8E96FE81D8E75B66681CE2EAC61C01C9;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.OneofDescriptorProto>
struct RepeatedField_1_t9F109E2AE6C6DAA3EA0EE23E4CD97052F9301FC4;
// Google.Protobuf.Collections.RepeatedField`1<System.String>
struct RepeatedField_1_tDBC9CC23DDC2FC0F87E34F80D66034BB0F149A58;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.UninterpretedOption>
struct RepeatedField_1_tADEDC2A5667805E3FC722CCD2FBC72D15F57C3EB;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto/Types/ExtensionRange>
struct RepeatedField_1_t0E899A6F37E8797AEF754CE965684FD651FC2788;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto/Types/ReservedRange>
struct RepeatedField_1_tE6CF9D5A326C77D116E95AAC77621BF9905ACB87;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.EnumDescriptorProto/Types/EnumReservedRange>
struct RepeatedField_1_tBFF9DEF57804C2B6D88A9389B6112A4C07A87D1E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Google.Protobuf.IExtensionValue>
struct ValueCollection_t2F72BBEA7E6118D615BFFDBC42E6C627C1751561;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct ValueCollection_t0B68AF9EDE41398214B111550EEB1F7F24D37AB6;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct ValueCollection_t96CE05850836203216CED45E11B6AE4DC82A9876;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Google.Protobuf.Reflection.MessageDescriptor>
struct ValueCollection_t15F16639F81ED544F36FFDBF6ED43F0C1ED07AE8;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Google.Protobuf.IExtensionValue>[]
struct EntryU5BU5D_t4A61C36AFD7EEB43F4F99621604A335152488092;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Google.Protobuf.Reflection.FieldDescriptor>[]
struct EntryU5BU5D_t4A0F18D0C381A64C983D00FFFB9954A47B3F12AA;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Google.Protobuf.Reflection.MessageDescriptor>[]
struct EntryU5BU5D_tA818ACE9564737BABC35DAFB6FD643DF96DB5A57;
// System.Collections.Generic.HashSet`1/Slot<System.String>[]
struct SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Google.Protobuf.Reflection.DescriptorProto[]
struct DescriptorProtoU5BU5D_t627D9BA27EBB14ADC5EA0BA8166939B274782152;
// Google.Protobuf.Reflection.EnumDescriptorProto[]
struct EnumDescriptorProtoU5BU5D_tF77E21156336C7C95BAC350457E7818D4485A122;
// Google.Protobuf.Extension[]
struct ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66;
// Google.Protobuf.Reflection.FieldDescriptor[]
struct FieldDescriptorU5BU5D_tBD6F168D4566F082DA9EBBDC4AA3D412F2E9BF81;
// Google.Protobuf.Reflection.FieldDescriptorProto[]
struct FieldDescriptorProtoU5BU5D_t1E236065292831149EC4285422D641A7878068A3;
// Google.Protobuf.Reflection.FileDescriptor[]
struct FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F;
// Google.Protobuf.Reflection.GeneratedClrTypeInfo[]
struct GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Google.Protobuf.Reflection.MessageDescriptor[]
struct MessageDescriptorU5BU5D_t4F021BD7B685CDD76886DDA2D154EE93234B3818;
// Google.Protobuf.Reflection.MethodDescriptorProto[]
struct MethodDescriptorProtoU5BU5D_t1E5410DB2CA2B54451619E965FE330FD5C356AD1;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Google.Protobuf.Reflection.OneofDescriptorProto[]
struct OneofDescriptorProtoU5BU5D_t7FCEA5FFDD8AD6E0E9652A76B6FB5EBAE9CFE712;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Google.Protobuf.Reflection.DescriptorProto/Types/ExtensionRange[]
struct ExtensionRangeU5BU5D_tF0D042F9E93BDF572230445F8E0096F6DE6BA2E0;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Google.Protobuf.ByteString
struct ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592;
// Google.Protobuf.Reflection.CustomOptions
struct CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Google.Protobuf.Reflection.DescriptorBase
struct DescriptorBase_t5C5FA7C866B517618C4032DDBEF36522D92A18FA;
// Google.Protobuf.Reflection.DescriptorPool
struct DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94;
// Google.Protobuf.Reflection.DescriptorProto
struct DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D;
// Google.Protobuf.Reflection.DescriptorValidationException
struct DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D;
// Google.Protobuf.Reflection.EnumDescriptor
struct EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E;
// Google.Protobuf.Reflection.EnumDescriptorProto
struct EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344;
// Google.Protobuf.Reflection.EnumOptions
struct EnumOptions_t061B0E88B5D67182DBEB030D2A537918443F4E6C;
// Google.Protobuf.Extension
struct Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A;
// Google.Protobuf.Reflection.ExtensionCollection
struct ExtensionCollection_tB99C14F49DA3F67113593C9FD990613B6072E7A0;
// Google.Protobuf.ExtensionRegistry
struct ExtensionRegistry_t3A02F9CABE27F85D70F5444B20C9640194BCBDCC;
// Google.Protobuf.Reflection.FieldAccessorBase
struct FieldAccessorBase_t5DFC6F7627AB30BC3FE5A3FBBDD8F667872AD4F4;
// Google.Protobuf.Reflection.FieldDescriptor
struct FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E;
// Google.Protobuf.Reflection.FieldDescriptorProto
struct FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99;
// Google.Protobuf.Reflection.FieldOptions
struct FieldOptions_tD20E5439F1925F7E5632124FF0F5820F9A6F09DC;
// Google.Protobuf.Reflection.FileDescriptor
struct FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE;
// Google.Protobuf.Reflection.FileDescriptorProto
struct FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4;
// Google.Protobuf.Reflection.GeneratedClrTypeInfo
struct GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Google.Protobuf.Reflection.IDescriptor
struct IDescriptor_t7DB05C0E0D441ECC6ED64C00EEE1FE64C9C84B27;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Google.Protobuf.Reflection.IFieldAccessor
struct IFieldAccessor_t0F629A4029D7E802E3194891AA705EE4D7E2EA22;
// Google.Protobuf.IMessage
struct IMessage_t9ECCC3E84D1F213AF8837852FA69082DD564B940;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Collections.Generic.KeyNotFoundException
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E;
// Google.Protobuf.Reflection.MapFieldAccessor
struct MapFieldAccessor_tAFEEF2867D6275E9E7B870A029E4098B3151B9F0;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// Google.Protobuf.Reflection.MessageDescriptor
struct MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906;
// Google.Protobuf.Reflection.MessageOptions
struct MessageOptions_t21D90698973F4D57E228B9E596F8E3E8CC429B7A;
// Google.Protobuf.MessageParser
struct MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D;
// System.Reflection.MethodBase
struct MethodBase_t;
// Google.Protobuf.Reflection.MethodDescriptor
struct MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96;
// Google.Protobuf.Reflection.MethodDescriptorProto
struct MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Google.Protobuf.Reflection.MethodOptions
struct MethodOptions_t231FE38BD5312DB18559F1566A090E97A3AF6DB7;
// Google.Protobuf.Reflection.OneofAccessor
struct OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073;
// Google.Protobuf.Reflection.OneofDescriptor
struct OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC;
// Google.Protobuf.Reflection.OneofDescriptorProto
struct OneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A;
// Google.Protobuf.Reflection.OneofOptions
struct OneofOptions_t499A07FB7EEF49A12136BABBD159BC8B7B6107EF;
// Google.Protobuf.Reflection.OriginalNameAttribute
struct OriginalNameAttribute_t9E75B76C2743609B99104B17C9DED79F2F802EEC;
// Google.Protobuf.Reflection.PackageDescriptor
struct PackageDescriptor_t863834B5D80791AF82D2F92CAAF947D71D2F783F;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// Google.Protobuf.Reflection.RepeatedFieldAccessor
struct RepeatedFieldAccessor_t0136427FB150CA5D84DB77F24A844471125C2EE0;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// Google.Protobuf.Reflection.ServiceDescriptor
struct ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE;
// Google.Protobuf.Reflection.ServiceDescriptorProto
struct ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438;
// Google.Protobuf.Reflection.ServiceOptions
struct ServiceOptions_t7A8BC19A9254D2E797A516E26929EE2B1B12D334;
// Google.Protobuf.Reflection.SingleFieldAccessor
struct SingleFieldAccessor_tDC6937B124A5282A5302B6991E6D2A315BD49077;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D;
// Google.Protobuf.Reflection.TypeRegistry
struct TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976;
// Google.Protobuf.UnknownFieldSet
struct UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Google.Protobuf.Reflection.FileDescriptor/<>c
struct U3CU3Ec_tC879DEB426303AFF25326E6B9597A581ADA15878;
// Google.Protobuf.Reflection.FileDescriptor/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tB448A3B4A308D4BB4794F8E177B1BFE7A47212DA;
// Google.Protobuf.Reflection.MessageDescriptor/<>c
struct U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726;
// Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t2A570232FA374102D5B636100BB04C68654B5CD8;
// Google.Protobuf.Reflection.MessageDescriptor/FieldCollection
struct FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3;
// Google.Protobuf.Reflection.OneofAccessor/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t784C4EBE7C1FD299653F7D2D5E783389AAE74B70;
// Google.Protobuf.Reflection.OneofDescriptor/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t0886EC03EEC8581246EAE187D9CF8F5F3A355619;
// Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseDoubleEqualityComparerImpl
struct BitwiseDoubleEqualityComparerImpl_tF935A78EF392CD4354688989133EACA26C8640B8;
// Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableDoubleEqualityComparerImpl
struct BitwiseNullableDoubleEqualityComparerImpl_t17328B6D301E7839E81FEE9324CF4ABB7623836C;
// Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableSingleEqualityComparerImpl
struct BitwiseNullableSingleEqualityComparerImpl_tAC371318D4964393815DC27A1EAA2A0045F06EBA;
// Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseSingleEqualityComparerImpl
struct BitwiseSingleEqualityComparerImpl_t54A7C3CD2D3330DC90E7BF4E41E19A32A4630CB2;
// Google.Protobuf.Reflection.ReflectionUtil/IExtensionReflectionHelper
struct IExtensionReflectionHelper_t504BB68BD7DC3D89E0B09CE6F2DCF8A6530BD987;
// Google.Protobuf.Reflection.ReflectionUtil/IReflectionHelper
struct IReflectionHelper_t9FE95AD2946D280C723A7A15903BB5A1FC9DD1E6;
// Google.Protobuf.Reflection.ServiceDescriptor/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t0462B10BAFB8EAF0E79D516CCE2FF284B4B1EED2;
// Google.Protobuf.Reflection.SingleFieldAccessor/<>c
struct U3CU3Ec_tE711B535F3AE500B935BE1C9A071DB25F2437DFF;
// Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t7699988D597E698E40B86C773DD10233174D77FE;
// Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_1
struct U3CU3Ec__DisplayClass3_1_tA67F0AC390C7692ED34D30C8FF196E46D3C848DC;
// Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_2
struct U3CU3Ec__DisplayClass3_2_t4163C2A623E2EFB73A5AF767786C921A0D088750;
// Google.Protobuf.Reflection.TypeRegistry/<>c
struct U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB;
// Google.Protobuf.Reflection.TypeRegistry/Builder
struct Builder_t5E7B8A6814011F60023CBE0C67083A74E8479389;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitwiseDoubleEqualityComparerImpl_tF935A78EF392CD4354688989133EACA26C8640B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitwiseNullableDoubleEqualityComparerImpl_t17328B6D301E7839E81FEE9324CF4ABB7623836C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitwiseNullableSingleEqualityComparerImpl_tAC371318D4964393815DC27A1EAA2A0045F06EBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitwiseSingleEqualityComparerImpl_t54A7C3CD2D3330DC90E7BF4E41E19A32A4630CB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Builder_t5E7B8A6814011F60023CBE0C67083A74E8479389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t31CFF5885A32B2296486F78FBD937CABF29763E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExtensionCollection_tB99C14F49DA3F67113593C9FD990613B6072E7A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tA328F6AF21E84812B76E5CDC390E8EA589CEB76F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tAA7621BADE44DD8FE95297120257F58E03B4D5D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tAA9A15EB8AD5D30A7F469C695166D5A8779DD5F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tC1A88D50374165E90B663F30D638545C47ECFDAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tC604B851AD49C16909B341198A71DF48F318C067_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t122AEB8E657DD14AE7AC316E37A4B28082F53174_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t4CD5EF9BE7925478517917504140E652CD2D743B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t68F5A27EE65409E27999177803534A3D9708E03B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t898B7976CAE5D33C1622374D2775A0163540BD49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tDDBABD38601B0B3CB8FE8BC3C7192A21443B0D06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t3B98BB7867D2E52A76815600B0C3D9EB17791D09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t6644B6D12698554DCC2B0033A9F63423A9DCCE04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tAA6D759350859194E8F06C8B8A6467A3B07EFF18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tC133879EE4DE28AA1E795779EEAB7FFB6DFB65C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tC89C2FE0B79746F860EB87A17DDBB036B9B5CA30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IExtensionReflectionHelper_t504BB68BD7DC3D89E0B09CE6F2DCF8A6530BD987_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IExtensionSetReflector_tA767EE239C958562505990FACEF80D63E1DD2EFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFieldAccessor_t0F629A4029D7E802E3194891AA705EE4D7E2EA22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_tBECF6C25D47C20B0CA9B3100FD02FED4BA91145E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_tE8529F2628C6B785ECC52D9CB4B1136C1013AE13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReflectionHelper_t9FE95AD2946D280C723A7A15903BB5A1FC9DD1E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexedConverter_2_t0DDCFB08F1D74E2C7092F67B7BD0E05107B62F08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexedConverter_2_t3A6BE85E4DCF21D028DD56A9C8C71B10109B58C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexedConverter_2_tBFDF7A55E5AD530A48988CD0D6F975525A8A1543_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexedConverter_2_tFCAD597B937F3CEFE1C8FFF01A3045CE41F4F67C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexedConverter_2_tFF5D05C491F41287F243B4B526A8DADCC34E0BA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t64981EE12A2A370C5000034039B00D57761431A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyCollection_1_t576A96EB67EFDB504EC4066151F3F1B55149AE2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyDictionary_2_tAD61E95979D9934AF3B06DCF0866D229C964C0DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t0462B10BAFB8EAF0E79D516CCE2FF284B4B1EED2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_t7699988D597E698E40B86C773DD10233174D77FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_1_tA67F0AC390C7692ED34D30C8FF196E46D3C848DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_2_t4163C2A623E2EFB73A5AF767786C921A0D088750_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t0886EC03EEC8581246EAE187D9CF8F5F3A355619_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t784C4EBE7C1FD299653F7D2D5E783389AAE74B70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t2A570232FA374102D5B636100BB04C68654B5CD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC879DEB426303AFF25326E6B9597A581ADA15878_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE711B535F3AE500B935BE1C9A071DB25F2437DFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral09353E39448C302F003639F3B4C81D6B132357DE;
IL2CPP_EXTERN_C String_t* _stringLiteral12FC0BF60BCE54234CA58CFD037BD8E5ADE3F2FB;
IL2CPP_EXTERN_C String_t* _stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54;
IL2CPP_EXTERN_C String_t* _stringLiteral2417EEAF8227FB98545F6C2ACA9B3FBC2C4EEF90;
IL2CPP_EXTERN_C String_t* _stringLiteral242827F003BDCBB538091F25071ADDB721DF95BE;
IL2CPP_EXTERN_C String_t* _stringLiteral2E8550591CF778669ECDEAD573757A12AE56ADBA;
IL2CPP_EXTERN_C String_t* _stringLiteral352DC1AD46B06976FE1F09D69AD2AE07BA1C912F;
IL2CPP_EXTERN_C String_t* _stringLiteral3F55E7E43CB2A70586349A2527BA34E5C72A498B;
IL2CPP_EXTERN_C String_t* _stringLiteral4E88D3145087F1B0073380D7BAB6F4766F01F3A3;
IL2CPP_EXTERN_C String_t* _stringLiteral64EB2ACDA107A2EAFDE67F4CC2CC898B789613F4;
IL2CPP_EXTERN_C String_t* _stringLiteral6FB20A0F1B1FDAAAA1A739E2CAFF14897DF6C793;
IL2CPP_EXTERN_C String_t* _stringLiteral795419E0019C339EB191F029F9E7E9EBD13BCFAD;
IL2CPP_EXTERN_C String_t* _stringLiteral7F6EBD2865CE2FCCB1136CB39B9E6777A5F4777C;
IL2CPP_EXTERN_C String_t* _stringLiteral82183A23D174E9AEB50156CB7C2C0FF0773376F3;
IL2CPP_EXTERN_C String_t* _stringLiteral86B2D324A1CE45FD4C4F29A23FADDD09479C4A78;
IL2CPP_EXTERN_C String_t* _stringLiteral9F5ABC7336FC408C1B2A29784C0E0AD17174CBB3;
IL2CPP_EXTERN_C String_t* _stringLiteralA0CB010C646A9359AB17403B716C4C913EA48565;
IL2CPP_EXTERN_C String_t* _stringLiteralA598F7A018FBD9BE6B63FDAFF829654652603EEB;
IL2CPP_EXTERN_C String_t* _stringLiteralA74B955A01CCCA134BC24725EF08A248AA7C69AC;
IL2CPP_EXTERN_C String_t* _stringLiteralA9233D8C418C04829410724511B59AEC0EF627BA;
IL2CPP_EXTERN_C String_t* _stringLiteralAA2199D3FAB3E9A0592694D9E1A42317C06006B4;
IL2CPP_EXTERN_C String_t* _stringLiteralB7012EBD7A52FFE2177DD7A499A4226405016ACB;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralC735ABBBA0A4054E66CE20DF45D76FB73FAFF691;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralCE58DB664A03767A219FB187BBE2B769431C47F8;
IL2CPP_EXTERN_C String_t* _stringLiteralD25853350172E0B01427BE241CD73C9EA8AD7200;
IL2CPP_EXTERN_C String_t* _stringLiteralD344A405546B27CFAE8780105ACCE0B68620063A;
IL2CPP_EXTERN_C String_t* _stringLiteralD47CF5D6FE76B6693D0F4ADFBC7B1D127FBC8366;
IL2CPP_EXTERN_C String_t* _stringLiteralD7A7B98FBAE659C1B887B207BDC5507066DBC057;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE74B7F5EC9921B41AC1645B0E6B82427B4B0F9F5;
IL2CPP_EXTERN_C String_t* _stringLiteralE8AB46C8C5CCDCA487773A386E008015AD2FB899;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF89EBB3FB7B1E50D0240AC71C6748BC7640D332C;
IL2CPP_EXTERN_C const RuntimeMethod* DescriptorPool_FindSymbol_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_m2B4EFCB9D5CE363F133745A3FB23689CEF10E9AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DescriptorPool_FindSymbol_TisMethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96_mB3A2914B4CA53359B39647DA083161550B2B00E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DescriptorUtil_ConvertAndMakeReadOnly_TisDescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D_TisMessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_m00BFD4367E3579A99E57F18A64A2F3D3387FB5A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DescriptorUtil_ConvertAndMakeReadOnly_TisEnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344_TisEnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E_m45D69C4DC606E87A3E5240E9DE9FA6DD9D9A0C56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DescriptorUtil_ConvertAndMakeReadOnly_TisFieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_m73021BE4C490905DE83AAA9C8BF59FCEB4735A44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DescriptorUtil_ConvertAndMakeReadOnly_TisMethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A_TisMethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96_m03E8C603AF2B4DC1E3C48881C7C22ECCA8CBE6BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DescriptorUtil_ConvertAndMakeReadOnly_TisOneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A_TisOneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC_m17F7ED87C65644FB34ED8647AF6F8D780DDA566C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m252FB3D32AFC19DE1B40589C914D14FDEC7B5933_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m13E0AE1CE03825DBDF6EA7B22110FA2D3BD37B6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mBD4E6729CB2CD78876040FFFB6EF66E6642B2CEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m051A3A61EE67B219C4941AECCFD47540866807D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m15158F9A79EA2D0686E04F916C77D923DCE592E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisFieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99_m0D6BE36B71567E861086A478FAB5EA18C0AD7FCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderBy_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m64A74F5892458BD558B1F8E6ED1A07F1D308B53B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisMessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_TisFileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE_m438D9BFB50E5B069643FA8EF55777BC95F0C962D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_m070C184D2FF6F150CF8743729B3FA34414900E75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EqualityComparer_1__ctor_m58F9725A39988634937D9D8E456BFBC9C8816DB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EqualityComparer_1__ctor_mA454F90E707038D38215CD8C3E5E8DFD55D0E1FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EqualityComparer_1__ctor_mABD86A3C9CCEC7A2EEBFCD0D468A96CC3D0E12E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EqualityComparer_1__ctor_mC48678D94B2CF1801B7AE07518AC52EF47C1900E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtensionSet_1_get_ValuesByNumber_m2259912E80B0172D23AD9DF3A20D485B61EF2F43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtensionSet_1_get_ValuesByNumber_m39A446AA28C0F70EA7A7D2E25E39D1B76EDB896A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtensionSet_1_get_ValuesByNumber_m4CA89D90A6702AC7AD00EA5B169C136774EB0484_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtensionSet_1_get_ValuesByNumber_m8B6D8D5916152A49A8D16792A5A8720693522473_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FieldCollection_get_Item_m052B310D1DD599FD9B73016EA71F407461C87799_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FieldCollection_get_Item_mAB58D7A6EBCB6CC402484347DEA6DAB1EAD2D9BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m1DD998A0CDC162DF71974532CB819315DD20BF80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4905449B1DA3EBC3C62384AF048391EBE47AC1A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MapFieldAccessor_HasValue_mC6930D5AE6EBB2F7208DA22EB822D634E8ACA62B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MapFieldAccessor_SetValue_m8D2215877377E1F8C78F69B39D58D8BF2CCAC798_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageDescriptor__ctor_m70A471C5C93507DB23E607F2D0413B66C784DC78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MethodDescriptor_CrossLink_mDA009B32AEA452674E144983DE399890DC1340D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OneofDescriptor_CreateAccessor_m43F29BA6164F0BE8A54267EB293DBD4244D1999C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProtoPreconditions_CheckNotNull_TisIEnumerable_1_t122AEB8E657DD14AE7AC316E37A4B28082F53174_m16F77535CC68F84081450B50084376576827FBCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProtoPreconditions_CheckNotNull_TisIEnumerable_1_t4CD5EF9BE7925478517917504140E652CD2D743B_m212260B9F5E35AEB125A4FAE0F6F950455DE549A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProtoPreconditions_CheckNotNull_TisString_t_mB87C076C6ED4020555CBA6AAC7A3B4B4265A6414_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1__ctor_m9CFD56BDC2BB0527D5B794B37FC216610DECBBF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyDictionary_2__ctor_m6C6C746D696F91F5D5D592C67F2154901251DD05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6D048FDC3395B232A34CB24024E4650E201F4D99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mFEE0C4253D94732A298A360F4B7ADF953B946F63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m15EB8875357F20B0BB3B9B46F08CE52BB2EFB3E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mEC0C07E3F1240FE22F33436EE73393CADE642D99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisNullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_m6F0A86238A5C1390B6F05CD612655B528D57B724_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisNullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_mF39BF1664E65D8DB86BA395A687DBE2F681649AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisNullable_1_t6E154519A812D040E3016229CD7638843A2CC165_m6A1D86D58315257891B8FD2689F92CA59BBB6C98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisNullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_m7CF2FDF8AADB6992BD4586950F863780F17FC23A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_m8E3895E51B1AFFC80BB073FA62BE0F1F6E8EAE77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisNullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_mD5D21B919BB5DD26A8F9BC32002D581D6C5111CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisNullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_mA9F209671FD1304F632A97626905E045055BD08B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisSampleEnum_t2BD35E03D5408696826ED53B77DFC95192F17F37_mF80D395CA5906B387575C3DAECE74C73B3476919_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF84E29587D65D592332379116B8548FB2E1AADAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisString_t_mC1766A2E4F46E90D71FED8AA53DB5F8FA02C8AEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m0C75615AEC88E7F48CFFEA28106F3381F6EAD071_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m341230FF80086341D5AA0AA6CC3D1A15D114AB6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedFieldAccessor_HasValue_m24B3E4DE6466790C21312254BA5213C31A186BA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedFieldAccessor_SetValue_m409AC2667F08C82444547F454C86100883D2DF5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_get_Count_mD87395300020C8F70282FF01C81CA48400FBF7D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingleFieldAccessor__ctor_m667E244B7DF3B7F22AF99FA08D0FC4FEED4A74D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFromMessagesU3Eb__9_0_m503DDED16CF919240A19D29A2A8B17E2E4F55644_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__3_4_mF44BF9FB9C08A8BB6AAF0F09E7581DDF7018FEAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__5_4_m44B40D77F7AACC3320EA12BE11DB754CA9D0B5D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_mC2FCD36B70CE2EF303083CBB57F0622579EED5FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__0_mAF3D5411FE35AD0EFBD5E12470674FC634E93B5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__1_m16719DC248EB25E7A58FB17C7CB19F03FB12A330_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_1_U3C_ctorU3Eb__2_mEE542954687E17AC707AF7EBFEB4784F93B6BCF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_1_U3C_ctorU3Eb__3_m14097EA7E88688301DA4510228374B969D7C6653_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_2_U3C_ctorU3Eb__5_m88B7DF89D7EBBEB5CB26825C08A40681EF2560DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CForSyntheticOneofU3Eb__0_mC0779BEAC3F9A0BD19B83C7EA7FE4E50A864F41D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CForSyntheticOneofU3Eb__1_mB186EC920120CD12DCBCEFC8EB0DED674AF21326_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__0_m8E319F48983C06B89AECC1B66295B2CE516D8C5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__0_m1E5B298E03F36F4A60568E7F7E9D433315EF4563_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__1_m9E7873AE7FB909F605535561F3B432C18006596B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__2_mED870A3FBC82BCB62913B5DEC7C7DA87406A592B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__3_m95565C95A93EC9A54DCB78F1E5C1412696CA49D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ExtensionReflectionHelper_2_t139B2DC748F66E0D0655C26F99B7965F6FC9CF40_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ExtensionSetReflector_1_tF98F08CD3D21D58013D9FA333E0688910796ABE1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ReflectionHelper_2_t15D2105C58D73327CC9E1A4BEB87E4A8E941B515_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66;
struct FieldDescriptorU5BU5D_tBD6F168D4566F082DA9EBBDC4AA3D412F2E9BF81;
struct FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F;
struct GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89;
struct MessageDescriptorU5BU5D_t4F021BD7B685CDD76886DDA2D154EE93234B3818;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,Google.Protobuf.IExtensionValue>
struct Dictionary_2_t7D99B8C24B0BFFDE97F3C514C8E7AA5FA84C046D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t4A61C36AFD7EEB43F4F99621604A335152488092* ____entries_1;
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
	KeyCollection_t646D2BE3ED009778C181880C7B6EEB0F6E430D36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t2F72BBEA7E6118D615BFFDBC42E6C627C1751561* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct Dictionary_2_t31CFF5885A32B2296486F78FBD937CABF29763E7  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t4A0F18D0C381A64C983D00FFFB9954A47B3F12AA* ____entries_1;
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
	KeyCollection_t021EFE20A70B7F8FA6AB510DD471E8A9FC593CA4* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t0B68AF9EDE41398214B111550EEB1F7F24D37AB6* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor>
struct Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tA818ACE9564737BABC35DAFB6FD643DF96DB5A57* ____entries_1;
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
	KeyCollection_tFB20A0E74840A072063C53665F19BDF6081C04A3* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t15F16639F81ED544F36FFDBF6ED43F0C1ED07AE8* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Double>>
struct EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694  : public RuntimeObject
{
};

struct EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Single>>
struct EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203  : public RuntimeObject
{
};

struct EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Double>
struct EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB  : public RuntimeObject
{
};

struct EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Single>
struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499  : public RuntimeObject
{
};

struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* ___defaultComparer_0;
};

// Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.MessageOptions>
struct ExtensionSet_1_tF304BC81EFCE3C2142ACECC1A1E2B5FD4BD89D09  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Google.Protobuf.IExtensionValue> Google.Protobuf.ExtensionSet`1::<ValuesByNumber>k__BackingField
	Dictionary_2_t7D99B8C24B0BFFDE97F3C514C8E7AA5FA84C046D* ___U3CValuesByNumberU3Ek__BackingField_0;
};

// Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.MethodOptions>
struct ExtensionSet_1_t7852FD32A1BA06E9EC2E3A0A4FD20D1ECE125227  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Google.Protobuf.IExtensionValue> Google.Protobuf.ExtensionSet`1::<ValuesByNumber>k__BackingField
	Dictionary_2_t7D99B8C24B0BFFDE97F3C514C8E7AA5FA84C046D* ___U3CValuesByNumberU3Ek__BackingField_0;
};

// Google.Protobuf.ExtensionSet`1<System.Object>
struct ExtensionSet_1_tA306FF3953ADABAEE3DC44E13016F5BA6BAB5399  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Google.Protobuf.IExtensionValue> Google.Protobuf.ExtensionSet`1::<ValuesByNumber>k__BackingField
	Dictionary_2_t7D99B8C24B0BFFDE97F3C514C8E7AA5FA84C046D* ___U3CValuesByNumberU3Ek__BackingField_0;
};

// Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.OneofOptions>
struct ExtensionSet_1_t2F914810BA451806E5E9BDEBFF2EB33451DBC097  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Google.Protobuf.IExtensionValue> Google.Protobuf.ExtensionSet`1::<ValuesByNumber>k__BackingField
	Dictionary_2_t7D99B8C24B0BFFDE97F3C514C8E7AA5FA84C046D* ___U3CValuesByNumberU3Ek__BackingField_0;
};

// Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.ServiceOptions>
struct ExtensionSet_1_t89FDE7093BD8C1D18C53FBFAC7040214AE9BD25D  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Google.Protobuf.IExtensionValue> Google.Protobuf.ExtensionSet`1::<ValuesByNumber>k__BackingField
	Dictionary_2_t7D99B8C24B0BFFDE97F3C514C8E7AA5FA84C046D* ___U3CValuesByNumberU3Ek__BackingField_0;
};

// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<Google.Protobuf.Reflection.FieldDescriptor>
struct List_1_t64981EE12A2A370C5000034039B00D57761431A3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	FieldDescriptorU5BU5D_tBD6F168D4566F082DA9EBBDC4AA3D412F2E9BF81* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t64981EE12A2A370C5000034039B00D57761431A3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	FieldDescriptorU5BU5D_tBD6F168D4566F082DA9EBBDC4AA3D412F2E9BF81* ___s_emptyArray_5;
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

// System.Collections.ObjectModel.ReadOnlyCollection`1<Google.Protobuf.Reflection.FieldDescriptor>
struct ReadOnlyCollection_1_t576A96EB67EFDB504EC4066151F3F1B55149AE2B  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct ReadOnlyDictionary_2_tAD61E95979D9934AF3B06DCF0866D229C964C0DF  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::_keys
	KeyCollection_tA29BC9F740F30562FA6F6109BBBE2C793B20F65B* ____keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::_values
	ValueCollection_t96CE05850836203216CED45E11B6AE4DC82A9876* ____values_3;
};

// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto>
struct RepeatedField_1_t1647174A532CD385C86A4013E9A94E3ED25C783B  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	DescriptorProtoU5BU5D_t627D9BA27EBB14ADC5EA0BA8166939B274782152* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

struct RepeatedField_1_t1647174A532CD385C86A4013E9A94E3ED25C783B_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_t915621445F39410B66ADE17141012D47D7448DFB* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	DescriptorProtoU5BU5D_t627D9BA27EBB14ADC5EA0BA8166939B274782152* ___EmptyArray_1;
};

// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.EnumDescriptorProto>
struct RepeatedField_1_tD86397FCB230839D8CDFAD16012311B08C27B0D3  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	EnumDescriptorProtoU5BU5D_tF77E21156336C7C95BAC350457E7818D4485A122* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

struct RepeatedField_1_tD86397FCB230839D8CDFAD16012311B08C27B0D3_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_t7121A20DD0C00861155D15449502A86E19ABBBDF* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	EnumDescriptorProtoU5BU5D_tF77E21156336C7C95BAC350457E7818D4485A122* ___EmptyArray_1;
};

// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.FieldDescriptorProto>
struct RepeatedField_1_t7E4B2149855E87DEBE33830CBE70920C8A6E52E1  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	FieldDescriptorProtoU5BU5D_t1E236065292831149EC4285422D641A7878068A3* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

struct RepeatedField_1_t7E4B2149855E87DEBE33830CBE70920C8A6E52E1_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_t9DD3C5B6D700A05D514621A4C6FF2C2AD64D5AC9* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	FieldDescriptorProtoU5BU5D_t1E236065292831149EC4285422D641A7878068A3* ___EmptyArray_1;
};

// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.MethodDescriptorProto>
struct RepeatedField_1_tDBB28893EE104846AAAF4D79249AD6254CB6EC7E  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	MethodDescriptorProtoU5BU5D_t1E5410DB2CA2B54451619E965FE330FD5C356AD1* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

struct RepeatedField_1_tDBB28893EE104846AAAF4D79249AD6254CB6EC7E_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_t5A1DC50B8DF80E0DE40F028FAEAA277E1F7D8094* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	MethodDescriptorProtoU5BU5D_t1E5410DB2CA2B54451619E965FE330FD5C356AD1* ___EmptyArray_1;
};

// Google.Protobuf.Collections.RepeatedField`1<System.Object>
struct RepeatedField_1_t9D56278C8E96FE81D8E75B66681CE2EAC61C01C9  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

struct RepeatedField_1_t9D56278C8E96FE81D8E75B66681CE2EAC61C01C9_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___EmptyArray_1;
};

// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.OneofDescriptorProto>
struct RepeatedField_1_t9F109E2AE6C6DAA3EA0EE23E4CD97052F9301FC4  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	OneofDescriptorProtoU5BU5D_t7FCEA5FFDD8AD6E0E9652A76B6FB5EBAE9CFE712* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

struct RepeatedField_1_t9F109E2AE6C6DAA3EA0EE23E4CD97052F9301FC4_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_tA1732808B62C77F60F915CE60E339EBE4BD6F0AD* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	OneofDescriptorProtoU5BU5D_t7FCEA5FFDD8AD6E0E9652A76B6FB5EBAE9CFE712* ___EmptyArray_1;
};

// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto/Types/ExtensionRange>
struct RepeatedField_1_t0E899A6F37E8797AEF754CE965684FD651FC2788  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	ExtensionRangeU5BU5D_tF0D042F9E93BDF572230445F8E0096F6DE6BA2E0* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

struct RepeatedField_1_t0E899A6F37E8797AEF754CE965684FD651FC2788_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_t0BC3473F7C2D04F77B3D071F158F2AB6B25FD504* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	ExtensionRangeU5BU5D_tF0D042F9E93BDF572230445F8E0096F6DE6BA2E0* ___EmptyArray_1;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Google.Protobuf.Reflection.CustomOptions
struct CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<System.Int32,Google.Protobuf.IExtensionValue> Google.Protobuf.Reflection.CustomOptions::values
	RuntimeObject* ___values_1;
};

struct CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_StaticFields
{
	// System.Object[] Google.Protobuf.Reflection.CustomOptions::EmptyParameters
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___EmptyParameters_0;
};

// Google.Protobuf.Reflection.DescriptorBase
struct DescriptorBase_t5C5FA7C866B517618C4032DDBEF36522D92A18FA  : public RuntimeObject
{
	// System.Int32 Google.Protobuf.Reflection.DescriptorBase::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_0;
	// System.String Google.Protobuf.Reflection.DescriptorBase::<FullName>k__BackingField
	String_t* ___U3CFullNameU3Ek__BackingField_1;
	// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.DescriptorBase::<File>k__BackingField
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___U3CFileU3Ek__BackingField_2;
};

// Google.Protobuf.Reflection.DescriptorPool
struct DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<System.String,Google.Protobuf.Reflection.IDescriptor> Google.Protobuf.Reflection.DescriptorPool::descriptorsByName
	RuntimeObject* ___descriptorsByName_0;
	// System.Collections.Generic.IDictionary`2<Google.Protobuf.ObjectIntPair`1<Google.Protobuf.Reflection.IDescriptor>,Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.DescriptorPool::fieldsByNumber
	RuntimeObject* ___fieldsByNumber_1;
	// System.Collections.Generic.IDictionary`2<Google.Protobuf.ObjectIntPair`1<Google.Protobuf.Reflection.IDescriptor>,Google.Protobuf.Reflection.EnumValueDescriptor> Google.Protobuf.Reflection.DescriptorPool::enumValuesByNumber
	RuntimeObject* ___enumValuesByNumber_2;
	// System.Collections.Generic.HashSet`1<Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.DescriptorPool::dependencies
	HashSet_1_t57BDC9706421688AAA2C822E54970543F03C1FF8* ___dependencies_3;
};

struct DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94_StaticFields
{
	// System.Text.RegularExpressions.Regex Google.Protobuf.Reflection.DescriptorPool::ValidationRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___ValidationRegex_4;
};

// Google.Protobuf.Reflection.DescriptorProto
struct DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.DescriptorProto::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// System.String Google.Protobuf.Reflection.DescriptorProto::name_
	String_t* ___name__4;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.FieldDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::field_
	RepeatedField_1_t7E4B2149855E87DEBE33830CBE70920C8A6E52E1* ___field__7;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.FieldDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::extension_
	RepeatedField_1_t7E4B2149855E87DEBE33830CBE70920C8A6E52E1* ___extension__10;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto> Google.Protobuf.Reflection.DescriptorProto::nestedType_
	RepeatedField_1_t1647174A532CD385C86A4013E9A94E3ED25C783B* ___nestedType__13;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.EnumDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::enumType_
	RepeatedField_1_tD86397FCB230839D8CDFAD16012311B08C27B0D3* ___enumType__16;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto/Types/ExtensionRange> Google.Protobuf.Reflection.DescriptorProto::extensionRange_
	RepeatedField_1_t0E899A6F37E8797AEF754CE965684FD651FC2788* ___extensionRange__19;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.OneofDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::oneofDecl_
	RepeatedField_1_t9F109E2AE6C6DAA3EA0EE23E4CD97052F9301FC4* ___oneofDecl__22;
	// Google.Protobuf.Reflection.MessageOptions Google.Protobuf.Reflection.DescriptorProto::options_
	MessageOptions_t21D90698973F4D57E228B9E596F8E3E8CC429B7A* ___options__24;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto/Types/ReservedRange> Google.Protobuf.Reflection.DescriptorProto::reservedRange_
	RepeatedField_1_tE6CF9D5A326C77D116E95AAC77621BF9905ACB87* ___reservedRange__27;
	// Google.Protobuf.Collections.RepeatedField`1<System.String> Google.Protobuf.Reflection.DescriptorProto::reservedName_
	RepeatedField_1_tDBC9CC23DDC2FC0F87E34F80D66034BB0F149A58* ___reservedName__30;
};

struct DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.DescriptorProto> Google.Protobuf.Reflection.DescriptorProto::_parser
	MessageParser_1_tC828A5AED52A2A1A6B443C129AB81159E952AA23* ____parser_0;
	// System.String Google.Protobuf.Reflection.DescriptorProto::NameDefaultValue
	String_t* ___NameDefaultValue_3;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.FieldDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::_repeated_field_codec
	FieldCodec_1_t21DF84ECEAE5A588438084C718EE0697F7495FD3* ____repeated_field_codec_6;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.FieldDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::_repeated_extension_codec
	FieldCodec_1_t21DF84ECEAE5A588438084C718EE0697F7495FD3* ____repeated_extension_codec_9;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.DescriptorProto> Google.Protobuf.Reflection.DescriptorProto::_repeated_nestedType_codec
	FieldCodec_1_tAACC01F60039098F4E012BA2ECF3C95C55F9655C* ____repeated_nestedType_codec_12;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.EnumDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::_repeated_enumType_codec
	FieldCodec_1_t26302C0D19596A86EAA32957047DC93218A3EF0A* ____repeated_enumType_codec_15;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.DescriptorProto/Types/ExtensionRange> Google.Protobuf.Reflection.DescriptorProto::_repeated_extensionRange_codec
	FieldCodec_1_t5558E926F40278AAC6C3AD93D265C4AA554DCD16* ____repeated_extensionRange_codec_18;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.OneofDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::_repeated_oneofDecl_codec
	FieldCodec_1_tD8B477E6E14F4C5A8C924507FE2973CAF1B52250* ____repeated_oneofDecl_codec_21;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.DescriptorProto/Types/ReservedRange> Google.Protobuf.Reflection.DescriptorProto::_repeated_reservedRange_codec
	FieldCodec_1_t90AB10B3ED8AC4DE44A947D1CF3329936C7132AB* ____repeated_reservedRange_codec_26;
	// Google.Protobuf.FieldCodec`1<System.String> Google.Protobuf.Reflection.DescriptorProto::_repeated_reservedName_codec
	FieldCodec_1_tB7730C8D2D4ADF6392F4D474DE844629557D8ABA* ____repeated_reservedName_codec_29;
};

// Google.Protobuf.Reflection.EnumDescriptorProto
struct EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.EnumDescriptorProto::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// System.String Google.Protobuf.Reflection.EnumDescriptorProto::name_
	String_t* ___name__4;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.EnumValueDescriptorProto> Google.Protobuf.Reflection.EnumDescriptorProto::value_
	RepeatedField_1_t3D59FA70FAD073B54E94A963E1906D5E534D48B9* ___value__7;
	// Google.Protobuf.Reflection.EnumOptions Google.Protobuf.Reflection.EnumDescriptorProto::options_
	EnumOptions_t061B0E88B5D67182DBEB030D2A537918443F4E6C* ___options__9;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.EnumDescriptorProto/Types/EnumReservedRange> Google.Protobuf.Reflection.EnumDescriptorProto::reservedRange_
	RepeatedField_1_tBFF9DEF57804C2B6D88A9389B6112A4C07A87D1E* ___reservedRange__12;
	// Google.Protobuf.Collections.RepeatedField`1<System.String> Google.Protobuf.Reflection.EnumDescriptorProto::reservedName_
	RepeatedField_1_tDBC9CC23DDC2FC0F87E34F80D66034BB0F149A58* ___reservedName__15;
};

struct EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.EnumDescriptorProto> Google.Protobuf.Reflection.EnumDescriptorProto::_parser
	MessageParser_1_t350C9B91DAEAF8C30A89B29EC781797549504BC3* ____parser_0;
	// System.String Google.Protobuf.Reflection.EnumDescriptorProto::NameDefaultValue
	String_t* ___NameDefaultValue_3;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.EnumValueDescriptorProto> Google.Protobuf.Reflection.EnumDescriptorProto::_repeated_value_codec
	FieldCodec_1_t20A177182A818B7310FEEA7DF9848B0F4DFBB604* ____repeated_value_codec_6;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.EnumDescriptorProto/Types/EnumReservedRange> Google.Protobuf.Reflection.EnumDescriptorProto::_repeated_reservedRange_codec
	FieldCodec_1_tCF98451FF0BD2005783BAC289042A4FAE6D865AF* ____repeated_reservedRange_codec_11;
	// Google.Protobuf.FieldCodec`1<System.String> Google.Protobuf.Reflection.EnumDescriptorProto::_repeated_reservedName_codec
	FieldCodec_1_tB7730C8D2D4ADF6392F4D474DE844629557D8ABA* ____repeated_reservedName_codec_14;
};

// Google.Protobuf.Extension
struct Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A  : public RuntimeObject
{
	// System.Int32 Google.Protobuf.Extension::<FieldNumber>k__BackingField
	int32_t ___U3CFieldNumberU3Ek__BackingField_0;
};

// Google.Protobuf.Reflection.ExtensionCollection
struct ExtensionCollection_tB99C14F49DA3F67113593C9FD990613B6072E7A0  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<Google.Protobuf.Reflection.MessageDescriptor,System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor>> Google.Protobuf.Reflection.ExtensionCollection::extensionsByTypeInDeclarationOrder
	RuntimeObject* ___extensionsByTypeInDeclarationOrder_0;
	// System.Collections.Generic.IDictionary`2<Google.Protobuf.Reflection.MessageDescriptor,System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor>> Google.Protobuf.Reflection.ExtensionCollection::extensionsByTypeInNumberOrder
	RuntimeObject* ___extensionsByTypeInNumberOrder_1;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.ExtensionCollection::<UnorderedExtensions>k__BackingField
	RuntimeObject* ___U3CUnorderedExtensionsU3Ek__BackingField_2;
};

// Google.Protobuf.Reflection.FieldAccessorBase
struct FieldAccessorBase_t5DFC6F7627AB30BC3FE5A3FBBDD8F667872AD4F4  : public RuntimeObject
{
	// System.Func`2<Google.Protobuf.IMessage,System.Object> Google.Protobuf.Reflection.FieldAccessorBase::getValueDelegate
	Func_2_t9F375C79031DDA5B3E25DFCE11100F61C1E8BB2F* ___getValueDelegate_0;
	// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.FieldAccessorBase::descriptor
	FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* ___descriptor_1;
};

// Google.Protobuf.Reflection.FieldDescriptorProto
struct FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.FieldDescriptorProto::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// System.Int32 Google.Protobuf.Reflection.FieldDescriptorProto::_hasBits0
	int32_t ____hasBits0_2;
	// System.String Google.Protobuf.Reflection.FieldDescriptorProto::name_
	String_t* ___name__5;
	// System.Int32 Google.Protobuf.Reflection.FieldDescriptorProto::number_
	int32_t ___number__8;
	// Google.Protobuf.Reflection.FieldDescriptorProto/Types/Label Google.Protobuf.Reflection.FieldDescriptorProto::label_
	int32_t ___label__11;
	// Google.Protobuf.Reflection.FieldDescriptorProto/Types/Type Google.Protobuf.Reflection.FieldDescriptorProto::type_
	int32_t ___type__14;
	// System.String Google.Protobuf.Reflection.FieldDescriptorProto::typeName_
	String_t* ___typeName__17;
	// System.String Google.Protobuf.Reflection.FieldDescriptorProto::extendee_
	String_t* ___extendee__20;
	// System.String Google.Protobuf.Reflection.FieldDescriptorProto::defaultValue_
	String_t* ___defaultValue__23;
	// System.Int32 Google.Protobuf.Reflection.FieldDescriptorProto::oneofIndex_
	int32_t ___oneofIndex__26;
	// System.String Google.Protobuf.Reflection.FieldDescriptorProto::jsonName_
	String_t* ___jsonName__29;
	// Google.Protobuf.Reflection.FieldOptions Google.Protobuf.Reflection.FieldDescriptorProto::options_
	FieldOptions_tD20E5439F1925F7E5632124FF0F5820F9A6F09DC* ___options__31;
	// System.Boolean Google.Protobuf.Reflection.FieldDescriptorProto::proto3Optional_
	bool ___proto3Optional__34;
};

struct FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.FieldDescriptorProto> Google.Protobuf.Reflection.FieldDescriptorProto::_parser
	MessageParser_1_tF4DAA81C6A6F29BEC553A6676E86AC33118C52E3* ____parser_0;
	// System.String Google.Protobuf.Reflection.FieldDescriptorProto::NameDefaultValue
	String_t* ___NameDefaultValue_4;
	// System.Int32 Google.Protobuf.Reflection.FieldDescriptorProto::NumberDefaultValue
	int32_t ___NumberDefaultValue_7;
	// Google.Protobuf.Reflection.FieldDescriptorProto/Types/Label Google.Protobuf.Reflection.FieldDescriptorProto::LabelDefaultValue
	int32_t ___LabelDefaultValue_10;
	// Google.Protobuf.Reflection.FieldDescriptorProto/Types/Type Google.Protobuf.Reflection.FieldDescriptorProto::TypeDefaultValue
	int32_t ___TypeDefaultValue_13;
	// System.String Google.Protobuf.Reflection.FieldDescriptorProto::TypeNameDefaultValue
	String_t* ___TypeNameDefaultValue_16;
	// System.String Google.Protobuf.Reflection.FieldDescriptorProto::ExtendeeDefaultValue
	String_t* ___ExtendeeDefaultValue_19;
	// System.String Google.Protobuf.Reflection.FieldDescriptorProto::DefaultValueDefaultValue
	String_t* ___DefaultValueDefaultValue_22;
	// System.Int32 Google.Protobuf.Reflection.FieldDescriptorProto::OneofIndexDefaultValue
	int32_t ___OneofIndexDefaultValue_25;
	// System.String Google.Protobuf.Reflection.FieldDescriptorProto::JsonNameDefaultValue
	String_t* ___JsonNameDefaultValue_28;
	// System.Boolean Google.Protobuf.Reflection.FieldDescriptorProto::Proto3OptionalDefaultValue
	bool ___Proto3OptionalDefaultValue_33;
};

// Google.Protobuf.Reflection.FileDescriptor
struct FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE  : public RuntimeObject
{
	// System.Lazy`1<System.Collections.Generic.Dictionary`2<Google.Protobuf.Reflection.IDescriptor,Google.Protobuf.Reflection.DescriptorDeclaration>> Google.Protobuf.Reflection.FileDescriptor::declarations
	Lazy_1_t9EE2A1123EC79B036ABD6DA8C3433CC66609B4A6* ___declarations_0;
	// Google.Protobuf.Reflection.FileDescriptorProto Google.Protobuf.Reflection.FileDescriptor::<Proto>k__BackingField
	FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* ___U3CProtoU3Ek__BackingField_1;
	// Google.Protobuf.Reflection.Syntax Google.Protobuf.Reflection.FileDescriptor::<Syntax>k__BackingField
	int32_t ___U3CSyntaxU3Ek__BackingField_2;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.FileDescriptor::<MessageTypes>k__BackingField
	RuntimeObject* ___U3CMessageTypesU3Ek__BackingField_3;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor> Google.Protobuf.Reflection.FileDescriptor::<EnumTypes>k__BackingField
	RuntimeObject* ___U3CEnumTypesU3Ek__BackingField_4;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.ServiceDescriptor> Google.Protobuf.Reflection.FileDescriptor::<Services>k__BackingField
	RuntimeObject* ___U3CServicesU3Ek__BackingField_5;
	// Google.Protobuf.Reflection.ExtensionCollection Google.Protobuf.Reflection.FileDescriptor::<Extensions>k__BackingField
	ExtensionCollection_tB99C14F49DA3F67113593C9FD990613B6072E7A0* ___U3CExtensionsU3Ek__BackingField_6;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.FileDescriptor::<Dependencies>k__BackingField
	RuntimeObject* ___U3CDependenciesU3Ek__BackingField_7;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.FileDescriptor::<PublicDependencies>k__BackingField
	RuntimeObject* ___U3CPublicDependenciesU3Ek__BackingField_8;
	// Google.Protobuf.ByteString Google.Protobuf.Reflection.FileDescriptor::<SerializedData>k__BackingField
	ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* ___U3CSerializedDataU3Ek__BackingField_9;
	// Google.Protobuf.Reflection.DescriptorPool Google.Protobuf.Reflection.FileDescriptor::<DescriptorPool>k__BackingField
	DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* ___U3CDescriptorPoolU3Ek__BackingField_10;
};

// Google.Protobuf.Reflection.GeneratedClrTypeInfo
struct GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E  : public RuntimeObject
{
	// System.Type Google.Protobuf.Reflection.GeneratedClrTypeInfo::<ClrType>k__BackingField
	Type_t* ___U3CClrTypeU3Ek__BackingField_3;
	// Google.Protobuf.MessageParser Google.Protobuf.Reflection.GeneratedClrTypeInfo::<Parser>k__BackingField
	MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* ___U3CParserU3Ek__BackingField_4;
	// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<PropertyNames>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CPropertyNamesU3Ek__BackingField_5;
	// Google.Protobuf.Extension[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<Extensions>k__BackingField
	ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66* ___U3CExtensionsU3Ek__BackingField_6;
	// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<OneofNames>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3COneofNamesU3Ek__BackingField_7;
	// Google.Protobuf.Reflection.GeneratedClrTypeInfo[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<NestedTypes>k__BackingField
	GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* ___U3CNestedTypesU3Ek__BackingField_8;
	// System.Type[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<NestedEnums>k__BackingField
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___U3CNestedEnumsU3Ek__BackingField_9;
};

struct GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_StaticFields
{
	// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::EmptyNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___EmptyNames_0;
	// Google.Protobuf.Reflection.GeneratedClrTypeInfo[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::EmptyCodeInfo
	GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* ___EmptyCodeInfo_1;
	// Google.Protobuf.Extension[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::EmptyExtensions
	ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66* ___EmptyExtensions_2;
};

// Google.Protobuf.Collections.Lists
struct Lists_t5F1919E3FD092D0F7E508D57A72269962475E1B7  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Google.Protobuf.Reflection.MessageOptions
struct MessageOptions_t21D90698973F4D57E228B9E596F8E3E8CC429B7A  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.MessageOptions::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.MessageOptions> Google.Protobuf.Reflection.MessageOptions::_extensions
	ExtensionSet_1_tF304BC81EFCE3C2142ACECC1A1E2B5FD4BD89D09* ____extensions_2;
	// System.Int32 Google.Protobuf.Reflection.MessageOptions::_hasBits0
	int32_t ____hasBits0_3;
	// System.Boolean Google.Protobuf.Reflection.MessageOptions::messageSetWireFormat_
	bool ___messageSetWireFormat__6;
	// System.Boolean Google.Protobuf.Reflection.MessageOptions::noStandardDescriptorAccessor_
	bool ___noStandardDescriptorAccessor__9;
	// System.Boolean Google.Protobuf.Reflection.MessageOptions::deprecated_
	bool ___deprecated__12;
	// System.Boolean Google.Protobuf.Reflection.MessageOptions::mapEntry_
	bool ___mapEntry__15;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.MessageOptions::uninterpretedOption_
	RepeatedField_1_tADEDC2A5667805E3FC722CCD2FBC72D15F57C3EB* ___uninterpretedOption__18;
};

struct MessageOptions_t21D90698973F4D57E228B9E596F8E3E8CC429B7A_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.MessageOptions> Google.Protobuf.Reflection.MessageOptions::_parser
	MessageParser_1_tFFEB1180EAC16752D1427BFCDDC4B2505E7E6825* ____parser_0;
	// System.Boolean Google.Protobuf.Reflection.MessageOptions::MessageSetWireFormatDefaultValue
	bool ___MessageSetWireFormatDefaultValue_5;
	// System.Boolean Google.Protobuf.Reflection.MessageOptions::NoStandardDescriptorAccessorDefaultValue
	bool ___NoStandardDescriptorAccessorDefaultValue_8;
	// System.Boolean Google.Protobuf.Reflection.MessageOptions::DeprecatedDefaultValue
	bool ___DeprecatedDefaultValue_11;
	// System.Boolean Google.Protobuf.Reflection.MessageOptions::MapEntryDefaultValue
	bool ___MapEntryDefaultValue_14;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.MessageOptions::_repeated_uninterpretedOption_codec
	FieldCodec_1_t031494A43485F8D802C8F4754808FB82BD28E950* ____repeated_uninterpretedOption_codec_17;
};

// Google.Protobuf.MessageParser
struct MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D  : public RuntimeObject
{
	// System.Func`1<Google.Protobuf.IMessage> Google.Protobuf.MessageParser::factory
	Func_1_t726CD36CB50B2F99D102B003DBF9F7D5ECFE2918* ___factory_0;
	// System.Boolean Google.Protobuf.MessageParser::<DiscardUnknownFields>k__BackingField
	bool ___U3CDiscardUnknownFieldsU3Ek__BackingField_1;
	// Google.Protobuf.ExtensionRegistry Google.Protobuf.MessageParser::<Extensions>k__BackingField
	ExtensionRegistry_t3A02F9CABE27F85D70F5444B20C9640194BCBDCC* ___U3CExtensionsU3Ek__BackingField_2;
};

// Google.Protobuf.Reflection.MethodDescriptorProto
struct MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.MethodDescriptorProto::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// System.Int32 Google.Protobuf.Reflection.MethodDescriptorProto::_hasBits0
	int32_t ____hasBits0_2;
	// System.String Google.Protobuf.Reflection.MethodDescriptorProto::name_
	String_t* ___name__5;
	// System.String Google.Protobuf.Reflection.MethodDescriptorProto::inputType_
	String_t* ___inputType__8;
	// System.String Google.Protobuf.Reflection.MethodDescriptorProto::outputType_
	String_t* ___outputType__11;
	// Google.Protobuf.Reflection.MethodOptions Google.Protobuf.Reflection.MethodDescriptorProto::options_
	MethodOptions_t231FE38BD5312DB18559F1566A090E97A3AF6DB7* ___options__13;
	// System.Boolean Google.Protobuf.Reflection.MethodDescriptorProto::clientStreaming_
	bool ___clientStreaming__16;
	// System.Boolean Google.Protobuf.Reflection.MethodDescriptorProto::serverStreaming_
	bool ___serverStreaming__19;
};

struct MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.MethodDescriptorProto> Google.Protobuf.Reflection.MethodDescriptorProto::_parser
	MessageParser_1_tA100AB071B3DCDB92D3B415C6CA42ADEF0E41B7C* ____parser_0;
	// System.String Google.Protobuf.Reflection.MethodDescriptorProto::NameDefaultValue
	String_t* ___NameDefaultValue_4;
	// System.String Google.Protobuf.Reflection.MethodDescriptorProto::InputTypeDefaultValue
	String_t* ___InputTypeDefaultValue_7;
	// System.String Google.Protobuf.Reflection.MethodDescriptorProto::OutputTypeDefaultValue
	String_t* ___OutputTypeDefaultValue_10;
	// System.Boolean Google.Protobuf.Reflection.MethodDescriptorProto::ClientStreamingDefaultValue
	bool ___ClientStreamingDefaultValue_15;
	// System.Boolean Google.Protobuf.Reflection.MethodDescriptorProto::ServerStreamingDefaultValue
	bool ___ServerStreamingDefaultValue_18;
};

// Google.Protobuf.Reflection.MethodOptions
struct MethodOptions_t231FE38BD5312DB18559F1566A090E97A3AF6DB7  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.MethodOptions::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.MethodOptions> Google.Protobuf.Reflection.MethodOptions::_extensions
	ExtensionSet_1_t7852FD32A1BA06E9EC2E3A0A4FD20D1ECE125227* ____extensions_2;
	// System.Int32 Google.Protobuf.Reflection.MethodOptions::_hasBits0
	int32_t ____hasBits0_3;
	// System.Boolean Google.Protobuf.Reflection.MethodOptions::deprecated_
	bool ___deprecated__6;
	// Google.Protobuf.Reflection.MethodOptions/Types/IdempotencyLevel Google.Protobuf.Reflection.MethodOptions::idempotencyLevel_
	int32_t ___idempotencyLevel__9;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.MethodOptions::uninterpretedOption_
	RepeatedField_1_tADEDC2A5667805E3FC722CCD2FBC72D15F57C3EB* ___uninterpretedOption__12;
};

struct MethodOptions_t231FE38BD5312DB18559F1566A090E97A3AF6DB7_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.MethodOptions> Google.Protobuf.Reflection.MethodOptions::_parser
	MessageParser_1_tD087B27B49C43A6910639742980B8D26A13E7C22* ____parser_0;
	// System.Boolean Google.Protobuf.Reflection.MethodOptions::DeprecatedDefaultValue
	bool ___DeprecatedDefaultValue_5;
	// Google.Protobuf.Reflection.MethodOptions/Types/IdempotencyLevel Google.Protobuf.Reflection.MethodOptions::IdempotencyLevelDefaultValue
	int32_t ___IdempotencyLevelDefaultValue_8;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.MethodOptions::_repeated_uninterpretedOption_codec
	FieldCodec_1_t031494A43485F8D802C8F4754808FB82BD28E950* ____repeated_uninterpretedOption_codec_11;
};

// Google.Protobuf.Reflection.OneofAccessor
struct OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073  : public RuntimeObject
{
	// System.Func`2<Google.Protobuf.IMessage,System.Int32> Google.Protobuf.Reflection.OneofAccessor::caseDelegate
	Func_2_tAA7621BADE44DD8FE95297120257F58E03B4D5D3* ___caseDelegate_0;
	// System.Action`1<Google.Protobuf.IMessage> Google.Protobuf.Reflection.OneofAccessor::clearDelegate
	Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997* ___clearDelegate_1;
	// Google.Protobuf.Reflection.OneofDescriptor Google.Protobuf.Reflection.OneofAccessor::<Descriptor>k__BackingField
	OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* ___U3CDescriptorU3Ek__BackingField_2;
};

// Google.Protobuf.Reflection.OneofDescriptorProto
struct OneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.OneofDescriptorProto::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// System.String Google.Protobuf.Reflection.OneofDescriptorProto::name_
	String_t* ___name__4;
	// Google.Protobuf.Reflection.OneofOptions Google.Protobuf.Reflection.OneofDescriptorProto::options_
	OneofOptions_t499A07FB7EEF49A12136BABBD159BC8B7B6107EF* ___options__6;
};

struct OneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.OneofDescriptorProto> Google.Protobuf.Reflection.OneofDescriptorProto::_parser
	MessageParser_1_tE7DD323B82F902A745394143FCD3A97DE59885FD* ____parser_0;
	// System.String Google.Protobuf.Reflection.OneofDescriptorProto::NameDefaultValue
	String_t* ___NameDefaultValue_3;
};

// Google.Protobuf.Reflection.OneofOptions
struct OneofOptions_t499A07FB7EEF49A12136BABBD159BC8B7B6107EF  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.OneofOptions::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.OneofOptions> Google.Protobuf.Reflection.OneofOptions::_extensions
	ExtensionSet_1_t2F914810BA451806E5E9BDEBFF2EB33451DBC097* ____extensions_2;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.OneofOptions::uninterpretedOption_
	RepeatedField_1_tADEDC2A5667805E3FC722CCD2FBC72D15F57C3EB* ___uninterpretedOption__5;
};

struct OneofOptions_t499A07FB7EEF49A12136BABBD159BC8B7B6107EF_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.OneofOptions> Google.Protobuf.Reflection.OneofOptions::_parser
	MessageParser_1_t521F874BA4869002851396C1D823B834193E6E28* ____parser_0;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.OneofOptions::_repeated_uninterpretedOption_codec
	FieldCodec_1_t031494A43485F8D802C8F4754808FB82BD28E950* ____repeated_uninterpretedOption_codec_4;
};

// Google.Protobuf.Reflection.PackageDescriptor
struct PackageDescriptor_t863834B5D80791AF82D2F92CAAF947D71D2F783F  : public RuntimeObject
{
	// System.String Google.Protobuf.Reflection.PackageDescriptor::name
	String_t* ___name_0;
	// System.String Google.Protobuf.Reflection.PackageDescriptor::fullName
	String_t* ___fullName_1;
	// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.PackageDescriptor::file
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file_2;
};

// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F  : public RuntimeObject
{
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_0;
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t* ___ClassImpl_1;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject* ___DefaultValueImpl_2;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t* ___MemberImpl_3;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_4;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	char* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	Il2CppChar* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};

// Google.Protobuf.Compatibility.PropertyInfoExtensions
struct PropertyInfoExtensions_tFAB30722B1843380D00947F428BA53D05429CF19  : public RuntimeObject
{
};

// Google.Protobuf.Collections.ProtobufEqualityComparers
struct ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09  : public RuntimeObject
{
};

struct ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<System.Double> Google.Protobuf.Collections.ProtobufEqualityComparers::<BitwiseDoubleEqualityComparer>k__BackingField
	EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* ___U3CBitwiseDoubleEqualityComparerU3Ek__BackingField_0;
	// System.Collections.Generic.EqualityComparer`1<System.Single> Google.Protobuf.Collections.ProtobufEqualityComparers::<BitwiseSingleEqualityComparer>k__BackingField
	EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* ___U3CBitwiseSingleEqualityComparerU3Ek__BackingField_1;
	// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Double>> Google.Protobuf.Collections.ProtobufEqualityComparers::<BitwiseNullableDoubleEqualityComparer>k__BackingField
	EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* ___U3CBitwiseNullableDoubleEqualityComparerU3Ek__BackingField_2;
	// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Single>> Google.Protobuf.Collections.ProtobufEqualityComparers::<BitwiseNullableSingleEqualityComparer>k__BackingField
	EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* ___U3CBitwiseNullableSingleEqualityComparerU3Ek__BackingField_3;
};

// Google.Protobuf.Reflection.ReflectionUtil
struct ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A  : public RuntimeObject
{
};

struct ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_StaticFields
{
	// System.Type[] Google.Protobuf.Reflection.ReflectionUtil::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_0;
	// System.Boolean Google.Protobuf.Reflection.ReflectionUtil::<CanConvertEnumFuncToInt32Func>k__BackingField
	bool ___U3CCanConvertEnumFuncToInt32FuncU3Ek__BackingField_1;
};

// Google.Protobuf.Reflection.ServiceDescriptorProto
struct ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.ServiceDescriptorProto::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// System.String Google.Protobuf.Reflection.ServiceDescriptorProto::name_
	String_t* ___name__4;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.MethodDescriptorProto> Google.Protobuf.Reflection.ServiceDescriptorProto::method_
	RepeatedField_1_tDBB28893EE104846AAAF4D79249AD6254CB6EC7E* ___method__7;
	// Google.Protobuf.Reflection.ServiceOptions Google.Protobuf.Reflection.ServiceDescriptorProto::options_
	ServiceOptions_t7A8BC19A9254D2E797A516E26929EE2B1B12D334* ___options__9;
};

struct ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.ServiceDescriptorProto> Google.Protobuf.Reflection.ServiceDescriptorProto::_parser
	MessageParser_1_tAB75DE67CDAFD27D5FD5D410F5C6DAFB79FEF1CE* ____parser_0;
	// System.String Google.Protobuf.Reflection.ServiceDescriptorProto::NameDefaultValue
	String_t* ___NameDefaultValue_3;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.MethodDescriptorProto> Google.Protobuf.Reflection.ServiceDescriptorProto::_repeated_method_codec
	FieldCodec_1_tB268F98DDB08D3D7B86D4A773ADBB6C7BAA07058* ____repeated_method_codec_6;
};

// Google.Protobuf.Reflection.ServiceOptions
struct ServiceOptions_t7A8BC19A9254D2E797A516E26929EE2B1B12D334  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.ServiceOptions::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.ServiceOptions> Google.Protobuf.Reflection.ServiceOptions::_extensions
	ExtensionSet_1_t89FDE7093BD8C1D18C53FBFAC7040214AE9BD25D* ____extensions_2;
	// System.Int32 Google.Protobuf.Reflection.ServiceOptions::_hasBits0
	int32_t ____hasBits0_3;
	// System.Boolean Google.Protobuf.Reflection.ServiceOptions::deprecated_
	bool ___deprecated__6;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.ServiceOptions::uninterpretedOption_
	RepeatedField_1_tADEDC2A5667805E3FC722CCD2FBC72D15F57C3EB* ___uninterpretedOption__9;
};

struct ServiceOptions_t7A8BC19A9254D2E797A516E26929EE2B1B12D334_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.ServiceOptions> Google.Protobuf.Reflection.ServiceOptions::_parser
	MessageParser_1_tD751281EB3C202EB4829B26F67B05756385AF63B* ____parser_0;
	// System.Boolean Google.Protobuf.Reflection.ServiceOptions::DeprecatedDefaultValue
	bool ___DeprecatedDefaultValue_5;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.ServiceOptions::_repeated_uninterpretedOption_codec
	FieldCodec_1_t031494A43485F8D802C8F4754808FB82BD28E950* ____repeated_uninterpretedOption_codec_8;
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

// Google.Protobuf.Compatibility.TypeExtensions
struct TypeExtensions_tDD8D16010B6E9E3D57A4652D55E2B63AB86CEB6A  : public RuntimeObject
{
};

// Google.Protobuf.Reflection.TypeRegistry
struct TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.TypeRegistry::fullNameToMessageMap
	Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384* ___fullNameToMessageMap_1;
};

struct TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_StaticFields
{
	// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::<Empty>k__BackingField
	TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* ___U3CEmptyU3Ek__BackingField_0;
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

// Google.Protobuf.Reflection.FileDescriptor/<>c
struct U3CU3Ec_tC879DEB426303AFF25326E6B9597A581ADA15878  : public RuntimeObject
{
};

struct U3CU3Ec_tC879DEB426303AFF25326E6B9597A581ADA15878_StaticFields
{
	// Google.Protobuf.Reflection.FileDescriptor/<>c Google.Protobuf.Reflection.FileDescriptor/<>c::<>9
	U3CU3Ec_tC879DEB426303AFF25326E6B9597A581ADA15878* ___U3CU3E9_0;
	// System.Func`2<Google.Protobuf.Reflection.FileDescriptor,System.String> Google.Protobuf.Reflection.FileDescriptor/<>c::<>9__9_0
	Func_2_tB9D3E63930E6E171F5E3D5A91618184F87679319* ___U3CU3E9__9_0_1;
	// System.Func`2<Google.Protobuf.Reflection.GeneratedClrTypeInfo,System.Boolean> Google.Protobuf.Reflection.FileDescriptor/<>c::<>9__53_0
	Func_2_t640DDE22360052A3C855A1FD066029744EC7BD16* ___U3CU3E9__53_0_2;
	// System.Func`2<Google.Protobuf.Reflection.FieldDescriptor,Google.Protobuf.Extension> Google.Protobuf.Reflection.FileDescriptor/<>c::<>9__54_0
	Func_2_tE3643DA0376B2A3A0C68890AF8193C8AB61EF667* ___U3CU3E9__54_0_3;
	// System.Func`2<Google.Protobuf.Extension,System.Boolean> Google.Protobuf.Reflection.FileDescriptor/<>c::<>9__54_1
	Func_2_t437128A918A982CC9FB2758C20041B84F1890E7B* ___U3CU3E9__54_1_4;
	// System.Func`2<Google.Protobuf.Reflection.FieldDescriptor,Google.Protobuf.Extension> Google.Protobuf.Reflection.FileDescriptor/<>c::<>9__55_0
	Func_2_tE3643DA0376B2A3A0C68890AF8193C8AB61EF667* ___U3CU3E9__55_0_5;
	// System.Func`2<Google.Protobuf.Extension,System.Boolean> Google.Protobuf.Reflection.FileDescriptor/<>c::<>9__55_1
	Func_2_t437128A918A982CC9FB2758C20041B84F1890E7B* ___U3CU3E9__55_1_6;
};

// Google.Protobuf.Reflection.FileDescriptor/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tB448A3B4A308D4BB4794F8E177B1BFE7A47212DA  : public RuntimeObject
{
	// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.FileDescriptor/<>c__DisplayClass2_0::<>4__this
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___U3CU3E4__this_0;
	// Google.Protobuf.Reflection.GeneratedClrTypeInfo Google.Protobuf.Reflection.FileDescriptor/<>c__DisplayClass2_0::generatedCodeInfo
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* ___generatedCodeInfo_1;
};

// Google.Protobuf.Reflection.MessageDescriptor/<>c
struct U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726  : public RuntimeObject
{
};

struct U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_StaticFields
{
	// Google.Protobuf.Reflection.MessageDescriptor/<>c Google.Protobuf.Reflection.MessageDescriptor/<>c::<>9
	U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726* ___U3CU3E9_0;
	// System.Func`2<Google.Protobuf.Reflection.FieldDescriptor,System.Int32> Google.Protobuf.Reflection.MessageDescriptor/<>c::<>9__5_4
	Func_2_tC1A88D50374165E90B663F30D638545C47ECFDAC* ___U3CU3E9__5_4_1;
};

// Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t2A570232FA374102D5B636100BB04C68654B5CD8  : public RuntimeObject
{
	// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass5_0::file
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file_0;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass5_0::<>4__this
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___U3CU3E4__this_1;
	// Google.Protobuf.Reflection.GeneratedClrTypeInfo Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass5_0::generatedCodeInfo
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* ___generatedCodeInfo_2;
};

// Google.Protobuf.Reflection.MessageDescriptor/FieldCollection
struct FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3  : public RuntimeObject
{
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MessageDescriptor/FieldCollection::messageDescriptor
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___messageDescriptor_0;
};

// Google.Protobuf.Reflection.OneofAccessor/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t784C4EBE7C1FD299653F7D2D5E783389AAE74B70  : public RuntimeObject
{
	// Google.Protobuf.Reflection.OneofDescriptor Google.Protobuf.Reflection.OneofAccessor/<>c__DisplayClass4_0::descriptor
	OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* ___descriptor_0;
};

// Google.Protobuf.Reflection.OneofDescriptor/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t0886EC03EEC8581246EAE187D9CF8F5F3A355619  : public RuntimeObject
{
	// System.Int32 Google.Protobuf.Reflection.OneofDescriptor/<>c__DisplayClass4_0::index
	int32_t ___index_0;
};

// Google.Protobuf.Reflection.ServiceDescriptor/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t0462B10BAFB8EAF0E79D516CCE2FF284B4B1EED2  : public RuntimeObject
{
	// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.ServiceDescriptor/<>c__DisplayClass2_0::file
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file_0;
	// Google.Protobuf.Reflection.ServiceDescriptor Google.Protobuf.Reflection.ServiceDescriptor/<>c__DisplayClass2_0::<>4__this
	ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* ___U3CU3E4__this_1;
};

// Google.Protobuf.Reflection.SingleFieldAccessor/<>c
struct U3CU3Ec_tE711B535F3AE500B935BE1C9A071DB25F2437DFF  : public RuntimeObject
{
};

struct U3CU3Ec_tE711B535F3AE500B935BE1C9A071DB25F2437DFF_StaticFields
{
	// Google.Protobuf.Reflection.SingleFieldAccessor/<>c Google.Protobuf.Reflection.SingleFieldAccessor/<>c::<>9
	U3CU3Ec_tE711B535F3AE500B935BE1C9A071DB25F2437DFF* ___U3CU3E9_0;
	// System.Func`2<Google.Protobuf.IMessage,System.Boolean> Google.Protobuf.Reflection.SingleFieldAccessor/<>c::<>9__3_4
	Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB* ___U3CU3E9__3_4_1;
};

// Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t7699988D597E698E40B86C773DD10233174D77FE  : public RuntimeObject
{
	// Google.Protobuf.Reflection.SingleFieldAccessor Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_0::<>4__this
	SingleFieldAccessor_tDC6937B124A5282A5302B6991E6D2A315BD49077* ___U3CU3E4__this_0;
	// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_0::descriptor
	FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* ___descriptor_1;
};

// Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_1
struct U3CU3Ec__DisplayClass3_1_tA67F0AC390C7692ED34D30C8FF196E46D3C848DC  : public RuntimeObject
{
	// Google.Protobuf.Reflection.OneofAccessor Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_1::oneofAccessor
	OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* ___oneofAccessor_0;
	// Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_0 Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass3_0_t7699988D597E698E40B86C773DD10233174D77FE* ___CSU24U3CU3E8__locals1_1;
};

// Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_2
struct U3CU3Ec__DisplayClass3_2_t4163C2A623E2EFB73A5AF767786C921A0D088750  : public RuntimeObject
{
	// System.Object Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_2::defaultValue
	RuntimeObject* ___defaultValue_0;
	// Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_0 Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_2::CS$<>8__locals2
	U3CU3Ec__DisplayClass3_0_t7699988D597E698E40B86C773DD10233174D77FE* ___CSU24U3CU3E8__locals2_1;
};

// Google.Protobuf.Reflection.TypeRegistry/<>c
struct U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB  : public RuntimeObject
{
};

struct U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_StaticFields
{
	// Google.Protobuf.Reflection.TypeRegistry/<>c Google.Protobuf.Reflection.TypeRegistry/<>c::<>9
	U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB* ___U3CU3E9_0;
	// System.Func`2<Google.Protobuf.Reflection.MessageDescriptor,Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.TypeRegistry/<>c::<>9__9_0
	Func_2_tAA9A15EB8AD5D30A7F469C695166D5A8779DD5F0* ___U3CU3E9__9_0_1;
};

// Google.Protobuf.Reflection.TypeRegistry/Builder
struct Builder_t5E7B8A6814011F60023CBE0C67083A74E8479389  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.TypeRegistry/Builder::types
	Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384* ___types_0;
	// System.Collections.Generic.HashSet`1<System.String> Google.Protobuf.Reflection.TypeRegistry/Builder::fileDescriptorNames
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___fileDescriptorNames_1;
};

// System.Nullable`1<System.Double>
struct Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	double ___value_1;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
};

// System.ReadOnlyMemory`1<System.Byte>
struct ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 
{
	// System.Object System.ReadOnlyMemory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.ReadOnlyMemory`1::_index
	int32_t ____index_1;
	// System.Int32 System.ReadOnlyMemory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

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

// Google.Protobuf.Reflection.EnumDescriptor
struct EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E  : public DescriptorBase_t5C5FA7C866B517618C4032DDBEF36522D92A18FA
{
	// Google.Protobuf.Reflection.EnumDescriptorProto Google.Protobuf.Reflection.EnumDescriptor::proto
	EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344* ___proto_3;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.EnumDescriptor::containingType
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___containingType_4;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumValueDescriptor> Google.Protobuf.Reflection.EnumDescriptor::values
	RuntimeObject* ___values_5;
	// System.Type Google.Protobuf.Reflection.EnumDescriptor::clrType
	Type_t* ___clrType_6;
};

// Google.Protobuf.Reflection.FieldDescriptor
struct FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E  : public DescriptorBase_t5C5FA7C866B517618C4032DDBEF36522D92A18FA
{
	// Google.Protobuf.Reflection.EnumDescriptor Google.Protobuf.Reflection.FieldDescriptor::enumType
	EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* ___enumType_3;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.FieldDescriptor::extendeeType
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___extendeeType_4;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.FieldDescriptor::messageType
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___messageType_5;
	// Google.Protobuf.Reflection.FieldType Google.Protobuf.Reflection.FieldDescriptor::fieldType
	int32_t ___fieldType_6;
	// System.String Google.Protobuf.Reflection.FieldDescriptor::propertyName
	String_t* ___propertyName_7;
	// Google.Protobuf.Reflection.IFieldAccessor Google.Protobuf.Reflection.FieldDescriptor::accessor
	RuntimeObject* ___accessor_8;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.FieldDescriptor::<ContainingType>k__BackingField
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___U3CContainingTypeU3Ek__BackingField_9;
	// Google.Protobuf.Reflection.OneofDescriptor Google.Protobuf.Reflection.FieldDescriptor::<ContainingOneof>k__BackingField
	OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* ___U3CContainingOneofU3Ek__BackingField_10;
	// System.String Google.Protobuf.Reflection.FieldDescriptor::<JsonName>k__BackingField
	String_t* ___U3CJsonNameU3Ek__BackingField_11;
	// Google.Protobuf.Reflection.FieldDescriptorProto Google.Protobuf.Reflection.FieldDescriptor::<Proto>k__BackingField
	FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* ___U3CProtoU3Ek__BackingField_12;
	// Google.Protobuf.Extension Google.Protobuf.Reflection.FieldDescriptor::<Extension>k__BackingField
	Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A* ___U3CExtensionU3Ek__BackingField_13;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// Google.Protobuf.Reflection.MapFieldAccessor
struct MapFieldAccessor_tAFEEF2867D6275E9E7B870A029E4098B3151B9F0  : public FieldAccessorBase_t5DFC6F7627AB30BC3FE5A3FBBDD8F667872AD4F4
{
};

// Google.Protobuf.Reflection.MessageDescriptor
struct MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906  : public DescriptorBase_t5C5FA7C866B517618C4032DDBEF36522D92A18FA
{
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::fieldsInDeclarationOrder
	RuntimeObject* ___fieldsInDeclarationOrder_4;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::fieldsInNumberOrder
	RuntimeObject* ___fieldsInNumberOrder_5;
	// System.Collections.Generic.IDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::jsonFieldMap
	RuntimeObject* ___jsonFieldMap_6;
	// System.Func`2<Google.Protobuf.IMessage,System.Boolean> Google.Protobuf.Reflection.MessageDescriptor::extensionSetIsInitialized
	Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB* ___extensionSetIsInitialized_7;
	// Google.Protobuf.Reflection.DescriptorProto Google.Protobuf.Reflection.MessageDescriptor::<Proto>k__BackingField
	DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* ___U3CProtoU3Ek__BackingField_8;
	// System.Type Google.Protobuf.Reflection.MessageDescriptor::<ClrType>k__BackingField
	Type_t* ___U3CClrTypeU3Ek__BackingField_9;
	// Google.Protobuf.MessageParser Google.Protobuf.Reflection.MessageDescriptor::<Parser>k__BackingField
	MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* ___U3CParserU3Ek__BackingField_10;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MessageDescriptor::<ContainingType>k__BackingField
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___U3CContainingTypeU3Ek__BackingField_11;
	// Google.Protobuf.Reflection.MessageDescriptor/FieldCollection Google.Protobuf.Reflection.MessageDescriptor::<Fields>k__BackingField
	FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3* ___U3CFieldsU3Ek__BackingField_12;
	// Google.Protobuf.Reflection.ExtensionCollection Google.Protobuf.Reflection.MessageDescriptor::<Extensions>k__BackingField
	ExtensionCollection_tB99C14F49DA3F67113593C9FD990613B6072E7A0* ___U3CExtensionsU3Ek__BackingField_13;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.MessageDescriptor::<NestedTypes>k__BackingField
	RuntimeObject* ___U3CNestedTypesU3Ek__BackingField_14;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor> Google.Protobuf.Reflection.MessageDescriptor::<EnumTypes>k__BackingField
	RuntimeObject* ___U3CEnumTypesU3Ek__BackingField_15;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.OneofDescriptor> Google.Protobuf.Reflection.MessageDescriptor::<Oneofs>k__BackingField
	RuntimeObject* ___U3COneofsU3Ek__BackingField_16;
	// System.Int32 Google.Protobuf.Reflection.MessageDescriptor::<RealOneofCount>k__BackingField
	int32_t ___U3CRealOneofCountU3Ek__BackingField_17;
};

struct MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_StaticFields
{
	// System.Collections.Generic.HashSet`1<System.String> Google.Protobuf.Reflection.MessageDescriptor::WellKnownTypeNames
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___WellKnownTypeNames_3;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// Google.Protobuf.Reflection.MethodDescriptor
struct MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96  : public DescriptorBase_t5C5FA7C866B517618C4032DDBEF36522D92A18FA
{
	// Google.Protobuf.Reflection.MethodDescriptorProto Google.Protobuf.Reflection.MethodDescriptor::proto
	MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* ___proto_3;
	// Google.Protobuf.Reflection.ServiceDescriptor Google.Protobuf.Reflection.MethodDescriptor::service
	ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* ___service_4;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MethodDescriptor::inputType
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___inputType_5;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MethodDescriptor::outputType
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___outputType_6;
};

// Google.Protobuf.Reflection.OneofDescriptor
struct OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC  : public DescriptorBase_t5C5FA7C866B517618C4032DDBEF36522D92A18FA
{
	// Google.Protobuf.Reflection.OneofDescriptorProto Google.Protobuf.Reflection.OneofDescriptor::proto
	OneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A* ___proto_3;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.OneofDescriptor::containingType
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___containingType_4;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.OneofDescriptor::fields
	RuntimeObject* ___fields_5;
	// Google.Protobuf.Reflection.OneofAccessor Google.Protobuf.Reflection.OneofDescriptor::accessor
	OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* ___accessor_6;
	// System.Boolean Google.Protobuf.Reflection.OneofDescriptor::<IsSynthetic>k__BackingField
	bool ___U3CIsSyntheticU3Ek__BackingField_7;
};

// Google.Protobuf.Reflection.OriginalNameAttribute
struct OriginalNameAttribute_t9E75B76C2743609B99104B17C9DED79F2F802EEC  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Google.Protobuf.Reflection.OriginalNameAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Boolean Google.Protobuf.Reflection.OriginalNameAttribute::<PreferredAlias>k__BackingField
	bool ___U3CPreferredAliasU3Ek__BackingField_1;
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// Google.Protobuf.Reflection.RepeatedFieldAccessor
struct RepeatedFieldAccessor_t0136427FB150CA5D84DB77F24A844471125C2EE0  : public FieldAccessorBase_t5DFC6F7627AB30BC3FE5A3FBBDD8F667872AD4F4
{
};

// Google.Protobuf.Reflection.ServiceDescriptor
struct ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE  : public DescriptorBase_t5C5FA7C866B517618C4032DDBEF36522D92A18FA
{
	// Google.Protobuf.Reflection.ServiceDescriptorProto Google.Protobuf.Reflection.ServiceDescriptor::proto
	ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* ___proto_3;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MethodDescriptor> Google.Protobuf.Reflection.ServiceDescriptor::methods
	RuntimeObject* ___methods_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Google.Protobuf.Reflection.SingleFieldAccessor
struct SingleFieldAccessor_tDC6937B124A5282A5302B6991E6D2A315BD49077  : public FieldAccessorBase_t5DFC6F7627AB30BC3FE5A3FBBDD8F667872AD4F4
{
	// System.Action`2<Google.Protobuf.IMessage,System.Object> Google.Protobuf.Reflection.SingleFieldAccessor::setValueDelegate
	Action_2_t939E2CC3C1A7288E5CDB844113A2D158F3612171* ___setValueDelegate_2;
	// System.Action`1<Google.Protobuf.IMessage> Google.Protobuf.Reflection.SingleFieldAccessor::clearDelegate
	Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997* ___clearDelegate_3;
	// System.Func`2<Google.Protobuf.IMessage,System.Boolean> Google.Protobuf.Reflection.SingleFieldAccessor::hasDelegate
	Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB* ___hasDelegate_4;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44
struct __StaticArrayInitTypeSizeU3D44_t390A99C8B135BD831E960FF1669F3E502B6726D9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D44_t390A99C8B135BD831E960FF1669F3E502B6726D9__padding[44];
	};
};

// Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseDoubleEqualityComparerImpl
struct BitwiseDoubleEqualityComparerImpl_tF935A78EF392CD4354688989133EACA26C8640B8  : public EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB
{
};

// Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableDoubleEqualityComparerImpl
struct BitwiseNullableDoubleEqualityComparerImpl_t17328B6D301E7839E81FEE9324CF4ABB7623836C  : public EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694
{
};

// Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableSingleEqualityComparerImpl
struct BitwiseNullableSingleEqualityComparerImpl_tAC371318D4964393815DC27A1EAA2A0045F06EBA  : public EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203
{
};

// Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseSingleEqualityComparerImpl
struct BitwiseSingleEqualityComparerImpl_t54A7C3CD2D3330DC90E7BF4E41E19A32A4630CB2  : public EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499
{
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tA0FE1FFB7994264CC7B3DF722FA3F728F030F458  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tA0FE1FFB7994264CC7B3DF722FA3F728F030F458_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44 <PrivateImplementationDetails>::1EFF1891409D680B30DE202BD7A16F945ED09F02601C0E7B90FD917BE1162300
	__StaticArrayInitTypeSizeU3D44_t390A99C8B135BD831E960FF1669F3E502B6726D9 ___1EFF1891409D680B30DE202BD7A16F945ED09F02601C0E7B90FD917BE1162300_0;
};

// Google.Protobuf.ByteString
struct ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592  : public RuntimeObject
{
	// System.ReadOnlyMemory`1<System.Byte> Google.Protobuf.ByteString::bytes
	ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___bytes_1;
};

struct ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592_StaticFields
{
	// Google.Protobuf.ByteString Google.Protobuf.ByteString::empty
	ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* ___empty_0;
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

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Google.Protobuf.Reflection.DescriptorValidationException
struct DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D  : public Exception_t
{
	// System.String Google.Protobuf.Reflection.DescriptorValidationException::name
	String_t* ___name_18;
	// System.String Google.Protobuf.Reflection.DescriptorValidationException::description
	String_t* ___description_19;
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

// System.Action`1<Google.Protobuf.IMessage>
struct Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`2<Google.Protobuf.IMessage,System.Object>
struct Action_2_t939E2CC3C1A7288E5CDB844113A2D158F3612171  : public MulticastDelegate_t
{
};

// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C  : public MulticastDelegate_t
{
};

// System.Func`2<Google.Protobuf.Reflection.FieldDescriptor,System.Int32>
struct Func_2_tC1A88D50374165E90B663F30D638545C47ECFDAC  : public MulticastDelegate_t
{
};

// System.Func`2<Google.Protobuf.Reflection.FieldDescriptorProto,System.Boolean>
struct Func_2_tA328F6AF21E84812B76E5CDC390E8EA589CEB76F  : public MulticastDelegate_t
{
};

// System.Func`2<Google.Protobuf.IMessage,System.Boolean>
struct Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB  : public MulticastDelegate_t
{
};

// System.Func`2<Google.Protobuf.IMessage,System.Int32>
struct Func_2_tAA7621BADE44DD8FE95297120257F58E03B4D5D3  : public MulticastDelegate_t
{
};

// System.Func`2<Google.Protobuf.IMessage,System.Object>
struct Func_2_t9F375C79031DDA5B3E25DFCE11100F61C1E8BB2F  : public MulticastDelegate_t
{
};

// System.Func`2<Google.Protobuf.Reflection.MessageDescriptor,Google.Protobuf.Reflection.FileDescriptor>
struct Func_2_tAA9A15EB8AD5D30A7F469C695166D5A8779DD5F0  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Int32>
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B  : public MulticastDelegate_t
{
};

// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.DescriptorProto,Google.Protobuf.Reflection.MessageDescriptor>
struct IndexedConverter_2_tFCAD597B937F3CEFE1C8FFF01A3045CE41F4F67C  : public MulticastDelegate_t
{
};

// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.EnumDescriptorProto,Google.Protobuf.Reflection.EnumDescriptor>
struct IndexedConverter_2_t3A6BE85E4DCF21D028DD56A9C8C71B10109B58C4  : public MulticastDelegate_t
{
};

// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.FieldDescriptorProto,Google.Protobuf.Reflection.FieldDescriptor>
struct IndexedConverter_2_t0DDCFB08F1D74E2C7092F67B7BD0E05107B62F08  : public MulticastDelegate_t
{
};

// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.MethodDescriptorProto,Google.Protobuf.Reflection.MethodDescriptor>
struct IndexedConverter_2_tBFDF7A55E5AD530A48988CD0D6F975525A8A1543  : public MulticastDelegate_t
{
};

// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.OneofDescriptorProto,Google.Protobuf.Reflection.OneofDescriptor>
struct IndexedConverter_2_tFF5D05C491F41287F243B4B526A8DADCC34E0BA9  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Collections.Generic.KeyNotFoundException
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D  : public Type_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Google.Protobuf.Reflection.GeneratedClrTypeInfo[]
struct GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89  : public RuntimeArray
{
	ALIGN_FIELD (8) GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* m_Items[1];

	inline GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
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
// Google.Protobuf.Extension[]
struct ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66  : public RuntimeArray
{
	ALIGN_FIELD (8) Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A* m_Items[1];

	inline Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Google.Protobuf.Reflection.FieldDescriptor[]
struct FieldDescriptorU5BU5D_tBD6F168D4566F082DA9EBBDC4AA3D412F2E9BF81  : public RuntimeArray
{
	ALIGN_FIELD (8) FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* m_Items[1];

	inline FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* m_Items[1];

	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// Google.Protobuf.Reflection.FileDescriptor[]
struct FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F  : public RuntimeArray
{
	ALIGN_FIELD (8) FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* m_Items[1];

	inline FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Google.Protobuf.Reflection.MessageDescriptor[]
struct MessageDescriptorU5BU5D_t4F021BD7B685CDD76886DDA2D154EE93234B3818  : public RuntimeArray
{
	ALIGN_FIELD (8) MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* m_Items[1];

	inline MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedConverter_2__ctor_m2D06A6062BBEC46D07970CCEC1DCB4674C662547_gshared (IndexedConverter_2_t3F40E49B0902E46EF51FCD1900236654B206AD99* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<TOutput> Google.Protobuf.Reflection.DescriptorUtil::ConvertAndMakeReadOnly<System.Object,System.Object>(System.Collections.Generic.IList`1<TInput>,Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<TInput,TOutput>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DescriptorUtil_ConvertAndMakeReadOnly_TisRuntimeObject_TisRuntimeObject_m4DEBD663FE5610360A084DC63778C8AFC225C0D2_gshared (RuntimeObject* ___input0, IndexedConverter_2_t3F40E49B0902E46EF51FCD1900236654B206AD99* ___converter1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<System.Object,System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OrderBy_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0CD0677A1278BFC7E13405D11D1EF30919C9E9A2_gshared (RuntimeObject* ___source0, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___keySelector1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::.ctor(System.Collections.Generic.IList`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_mF2D2ACE0752C3B97343B72328D49200F45C14B65_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, RuntimeObject* ___list0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2__ctor_m96973475803B2B44481AF891D0B2AB063B5D4CDA_gshared (ReadOnlyDictionary_2_tA5E205F3BBEB6B67DBCA3C316E87352486DFF1C2* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.Collections.RepeatedField`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RepeatedField_1_get_Count_m27D2CA123A5BB11C5CB1AB34412C327A00FAB882_gshared_inline (RepeatedField_1_t9D56278C8E96FE81D8E75B66681CE2EAC61C01C9* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T Google.Protobuf.Reflection.DescriptorPool::FindSymbol<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DescriptorPool_FindSymbol_TisRuntimeObject_m0AEBF237D4755A091C30A8DD89F5021588253F75_gshared (DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* __this, String_t* ___fullName0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.Int32,Google.Protobuf.IExtensionValue> Google.Protobuf.ExtensionSet`1<System.Object>::get_ValuesByNumber()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t7D99B8C24B0BFFDE97F3C514C8E7AA5FA84C046D* ExtensionSet_1_get_ValuesByNumber_mF09E6EB60864810B11A9C69168CD1519187A8564_gshared_inline (ExtensionSet_1_tA306FF3953ADABAEE3DC44E13016F5BA6BAB5399* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,System.Int32>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_gshared_inline (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T Google.Protobuf.ProtoPreconditions::CheckNotNull<System.Object>(T,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProtoPreconditions_CheckNotNull_TisRuntimeObject_mF2D50EEA285EC24C4A33857428197C8C1ACA1B88_gshared (RuntimeObject* ___value0, String_t* ___name1, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisRuntimeObject_m5AD8E3036C39169AEC2B27E6F95F90489DE058C4_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m15EB8875357F20B0BB3B9B46F08CE52BB2EFB3E1_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Int64>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mEC0C07E3F1240FE22F33436EE73393CADE642D99_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m0C75615AEC88E7F48CFFEA28106F3381F6EAD071_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.UInt64>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m341230FF80086341D5AA0AA6CC3D1A15D114AB6C_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF84E29587D65D592332379116B8548FB2E1AADAC_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Double>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mFEE0C4253D94732A298A360F4B7ADF953B946F63_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Boolean>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6D048FDC3395B232A34CB24024E4650E201F4D99_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Int32>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_m8E3895E51B1AFFC80BB073FA62BE0F1F6E8EAE77_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Int64>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisNullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_m6F0A86238A5C1390B6F05CD612655B528D57B724_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.UInt32>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisNullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_mD5D21B919BB5DD26A8F9BC32002D581D6C5111CE_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.UInt64>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisNullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_mA9F209671FD1304F632A97626905E045055BD08B_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Single>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisNullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_mF39BF1664E65D8DB86BA395A687DBE2F681649AD_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Double>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisNullable_1_t6E154519A812D040E3016229CD7638843A2CC165_m6A1D86D58315257891B8FD2689F92CA59BBB6C98_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Boolean>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisNullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_m7CF2FDF8AADB6992BD4586950F863780F17FC23A_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Int32Enum>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mD0E673BE16C732D014DF4D3B89314C01179DB903_gshared (const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Object>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.EqualityComparer`1<System.Double>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_m58F9725A39988634937D9D8E456BFBC9C8816DB6_gshared (EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.EqualityComparer`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_mABD86A3C9CCEC7A2EEBFCD0D468A96CC3D0E12E3_gshared (EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Double>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Double>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_gshared (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Double>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_mA454F90E707038D38215CD8C3E5E8DFD55D0E1FB_gshared (EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Single>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_gshared (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Single>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_mC48678D94B2CF1801B7AE07518AC52EF47C1900E_gshared (EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.GeneratedClrTypeInfo[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_NestedTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* GeneratedClrTypeInfo_get_NestedTypes_m8AED7D6560730E69176023048554B849007EAAA0_inline (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.MessageDescriptor::.ctor(Google.Protobuf.Reflection.DescriptorProto,Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.MessageDescriptor,System.Int32,Google.Protobuf.Reflection.GeneratedClrTypeInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDescriptor__ctor_m70A471C5C93507DB23E607F2D0413B66C784DC78 (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* ___proto0, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file1, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___parent2, int32_t ___typeIndex3, GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* ___generatedCodeInfo4, const RuntimeMethod* method) ;
// System.Type[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_NestedEnums()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* GeneratedClrTypeInfo_get_NestedEnums_mD3FF2C77CA209172AA17731B31FA24968522A1CC_inline (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.EnumDescriptor::.ctor(Google.Protobuf.Reflection.EnumDescriptorProto,Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.MessageDescriptor,System.Int32,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumDescriptor__ctor_m5DF396F94AFB86FE46AC0D53FDCBAE16DC910FBE (EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* __this, EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344* ___proto0, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file1, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___parent2, int32_t ___index3, Type_t* ___clrType4, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ServiceDescriptor::.ctor(Google.Protobuf.Reflection.ServiceDescriptorProto,Google.Protobuf.Reflection.FileDescriptor,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceDescriptor__ctor_m70D586A7D348405DE1CCE844D4E855FB93602CF9 (ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* __this, ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* ___proto0, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file1, int32_t ___index2, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.FileDescriptor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m29B671913B367854DA9557CD88FC016DECEB1237 (U3CU3Ec_tC879DEB426303AFF25326E6B9597A581ADA15878* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.FileDescriptor::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileDescriptor_get_Name_m81861DDFBC6C17CD275F3374FC02268C0F376DF1 (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Extension Google.Protobuf.Reflection.FieldDescriptor::get_Extension()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A* FieldDescriptor_get_Extension_m2F4D257EF197FDF6F164B17A22728CA1052EB235_inline (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::set_ClrType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo_set_ClrType_m744F6287D106FBDF0B7E00832E5800CCA326AA08_inline (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::.ctor(System.Type,Google.Protobuf.MessageParser,System.String[],System.String[],System.Type[],Google.Protobuf.Extension[],Google.Protobuf.Reflection.GeneratedClrTypeInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo__ctor_m5F0B3E2F02BF50D81997F6B1E54DD261F2061108 (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, Type_t* ___clrType0, MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* ___parser1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___propertyNames2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___oneofNames3, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___nestedEnums4, ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66* ___extensions5, GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* ___nestedTypes6, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::.ctor(System.Type,Google.Protobuf.MessageParser,System.String[],System.String[],System.Type[],Google.Protobuf.Reflection.GeneratedClrTypeInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo__ctor_m99B9737F8FA9ADA1D9E0A059170EBBF4E37856A7 (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, Type_t* ___clrType0, MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* ___parser1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___propertyNames2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___oneofNames3, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___nestedEnums4, GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* ___nestedTypes5, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.FieldAccessorBase::.ctor(System.Reflection.PropertyInfo,Google.Protobuf.Reflection.FieldDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldAccessorBase__ctor_m756C8E5E365EACEDB10427BA73338222AAE0C279 (FieldAccessorBase_t5DFC6F7627AB30BC3FE5A3FBBDD8F667872AD4F4* __this, PropertyInfo_t* ___property0, FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* ___descriptor1, const RuntimeMethod* method) ;
// System.Object Google.Protobuf.Reflection.FieldAccessorBase::GetValue(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FieldAccessorBase_GetValue_mABB52C5E5391C56E34EE9254B629D0E05BD425D6 (FieldAccessorBase_t5DFC6F7627AB30BC3FE5A3FBBDD8F667872AD4F4* __this, RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mBBAA127F0B03E643A302434611A6690923816474 (U3CU3Ec__DisplayClass5_0_t2A570232FA374102D5B636100BB04C68654B5CD8* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.DescriptorProto::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DescriptorProto_get_Name_mB58CFB6E06E100F9A1DDEC369CDB332126160AFB (DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.FileDescriptor::ComputeFullName(Google.Protobuf.Reflection.MessageDescriptor,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileDescriptor_ComputeFullName_mCBDE9B2BB4FAD55885BE530C106C278E27E4D11F (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___parent0, String_t* ___name1, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorBase::.ctor(Google.Protobuf.Reflection.FileDescriptor,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptorBase__ctor_m002B5D6404EE5F2190E0DC0162F153B9AC6F454A (DescriptorBase_t5C5FA7C866B517618C4032DDBEF36522D92A18FA* __this, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file0, String_t* ___fullName1, int32_t ___index2, const RuntimeMethod* method) ;
// Google.Protobuf.MessageParser Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_Parser()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* GeneratedClrTypeInfo_get_Parser_m4C53F2D6CB863279546D11DE7B3D53ED351B48A8_inline (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) ;
// System.Type Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_ClrType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* GeneratedClrTypeInfo_get_ClrType_m5B443B2BB0A3783E56682580703FF212AF9AEDC2_inline (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.OneofDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::get_OneofDecl()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_t9F109E2AE6C6DAA3EA0EE23E4CD97052F9301FC4* DescriptorProto_get_OneofDecl_m88B6455AEF8DA27F82D763680A03D0B9E1565BDD_inline (DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.OneofDescriptorProto,Google.Protobuf.Reflection.OneofDescriptor>::.ctor(System.Object,System.IntPtr)
inline void IndexedConverter_2__ctor_m7A2C9983C97A680D32FD61DC7AE7537CD0A77236 (IndexedConverter_2_tFF5D05C491F41287F243B4B526A8DADCC34E0BA9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (IndexedConverter_2_tFF5D05C491F41287F243B4B526A8DADCC34E0BA9*, RuntimeObject*, intptr_t, const RuntimeMethod*))IndexedConverter_2__ctor_m2D06A6062BBEC46D07970CCEC1DCB4674C662547_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IList`1<TOutput> Google.Protobuf.Reflection.DescriptorUtil::ConvertAndMakeReadOnly<Google.Protobuf.Reflection.OneofDescriptorProto,Google.Protobuf.Reflection.OneofDescriptor>(System.Collections.Generic.IList`1<TInput>,Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<TInput,TOutput>)
inline RuntimeObject* DescriptorUtil_ConvertAndMakeReadOnly_TisOneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A_TisOneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC_m17F7ED87C65644FB34ED8647AF6F8D780DDA566C (RuntimeObject* ___input0, IndexedConverter_2_tFF5D05C491F41287F243B4B526A8DADCC34E0BA9* ___converter1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, IndexedConverter_2_tFF5D05C491F41287F243B4B526A8DADCC34E0BA9*, const RuntimeMethod*))DescriptorUtil_ConvertAndMakeReadOnly_TisRuntimeObject_TisRuntimeObject_m4DEBD663FE5610360A084DC63778C8AFC225C0D2_gshared)(___input0, ___converter1, method);
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.OneofDescriptor> Google.Protobuf.Reflection.MessageDescriptor::get_Oneofs()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_Oneofs_m4B21398E1D746B08DD3874635EB9B8BAF81F4E38_inline (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) ;
// System.Boolean Google.Protobuf.Reflection.OneofDescriptor::get_IsSynthetic()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OneofDescriptor_get_IsSynthetic_mB83EEA3B6B69356688ED25B0B93E37317AD96C60_inline (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto> Google.Protobuf.Reflection.DescriptorProto::get_NestedType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_t1647174A532CD385C86A4013E9A94E3ED25C783B* DescriptorProto_get_NestedType_mFB07AE39857C24A91E7C49707962CFB6D43038F1_inline (DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.DescriptorProto,Google.Protobuf.Reflection.MessageDescriptor>::.ctor(System.Object,System.IntPtr)
inline void IndexedConverter_2__ctor_m19E1854900D5593942F4E42D26A07C8B2041E605 (IndexedConverter_2_tFCAD597B937F3CEFE1C8FFF01A3045CE41F4F67C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (IndexedConverter_2_tFCAD597B937F3CEFE1C8FFF01A3045CE41F4F67C*, RuntimeObject*, intptr_t, const RuntimeMethod*))IndexedConverter_2__ctor_m2D06A6062BBEC46D07970CCEC1DCB4674C662547_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IList`1<TOutput> Google.Protobuf.Reflection.DescriptorUtil::ConvertAndMakeReadOnly<Google.Protobuf.Reflection.DescriptorProto,Google.Protobuf.Reflection.MessageDescriptor>(System.Collections.Generic.IList`1<TInput>,Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<TInput,TOutput>)
inline RuntimeObject* DescriptorUtil_ConvertAndMakeReadOnly_TisDescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D_TisMessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_m00BFD4367E3579A99E57F18A64A2F3D3387FB5A0 (RuntimeObject* ___input0, IndexedConverter_2_tFCAD597B937F3CEFE1C8FFF01A3045CE41F4F67C* ___converter1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, IndexedConverter_2_tFCAD597B937F3CEFE1C8FFF01A3045CE41F4F67C*, const RuntimeMethod*))DescriptorUtil_ConvertAndMakeReadOnly_TisRuntimeObject_TisRuntimeObject_m4DEBD663FE5610360A084DC63778C8AFC225C0D2_gshared)(___input0, ___converter1, method);
}
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.EnumDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::get_EnumType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_tD86397FCB230839D8CDFAD16012311B08C27B0D3* DescriptorProto_get_EnumType_mB638C54384C16C50C1ECD0D5895A4E829F1BEF34_inline (DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.EnumDescriptorProto,Google.Protobuf.Reflection.EnumDescriptor>::.ctor(System.Object,System.IntPtr)
inline void IndexedConverter_2__ctor_m87415CE302C72DDD3B741B5A6EEEB4E430D14F43 (IndexedConverter_2_t3A6BE85E4DCF21D028DD56A9C8C71B10109B58C4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (IndexedConverter_2_t3A6BE85E4DCF21D028DD56A9C8C71B10109B58C4*, RuntimeObject*, intptr_t, const RuntimeMethod*))IndexedConverter_2__ctor_m2D06A6062BBEC46D07970CCEC1DCB4674C662547_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IList`1<TOutput> Google.Protobuf.Reflection.DescriptorUtil::ConvertAndMakeReadOnly<Google.Protobuf.Reflection.EnumDescriptorProto,Google.Protobuf.Reflection.EnumDescriptor>(System.Collections.Generic.IList`1<TInput>,Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<TInput,TOutput>)
inline RuntimeObject* DescriptorUtil_ConvertAndMakeReadOnly_TisEnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344_TisEnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E_m45D69C4DC606E87A3E5240E9DE9FA6DD9D9A0C56 (RuntimeObject* ___input0, IndexedConverter_2_t3A6BE85E4DCF21D028DD56A9C8C71B10109B58C4* ___converter1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, IndexedConverter_2_t3A6BE85E4DCF21D028DD56A9C8C71B10109B58C4*, const RuntimeMethod*))DescriptorUtil_ConvertAndMakeReadOnly_TisRuntimeObject_TisRuntimeObject_m4DEBD663FE5610360A084DC63778C8AFC225C0D2_gshared)(___input0, ___converter1, method);
}
// Google.Protobuf.Extension[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_Extensions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66* GeneratedClrTypeInfo_get_Extensions_m99A0DD9B3A9BC39C66A9545C5C70847C1090138D_inline (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ExtensionCollection::.ctor(Google.Protobuf.Reflection.MessageDescriptor,Google.Protobuf.Extension[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionCollection__ctor_m345C848C38C8F064508891BC2FD0E3AE6B72E1DA (ExtensionCollection_tB99C14F49DA3F67113593C9FD990613B6072E7A0* __this, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___message0, ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66* ___extensions1, const RuntimeMethod* method) ;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.FieldDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::get_Field()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_t7E4B2149855E87DEBE33830CBE70920C8A6E52E1* DescriptorProto_get_Field_m5C69AC6B1B0D580AC85EA12068D434A482DA18BA_inline (DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.FieldDescriptorProto,Google.Protobuf.Reflection.FieldDescriptor>::.ctor(System.Object,System.IntPtr)
inline void IndexedConverter_2__ctor_m23548E454F54B7DACDEDFD4CA70FB37C63BBB4AC (IndexedConverter_2_t0DDCFB08F1D74E2C7092F67B7BD0E05107B62F08* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (IndexedConverter_2_t0DDCFB08F1D74E2C7092F67B7BD0E05107B62F08*, RuntimeObject*, intptr_t, const RuntimeMethod*))IndexedConverter_2__ctor_m2D06A6062BBEC46D07970CCEC1DCB4674C662547_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IList`1<TOutput> Google.Protobuf.Reflection.DescriptorUtil::ConvertAndMakeReadOnly<Google.Protobuf.Reflection.FieldDescriptorProto,Google.Protobuf.Reflection.FieldDescriptor>(System.Collections.Generic.IList`1<TInput>,Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<TInput,TOutput>)
inline RuntimeObject* DescriptorUtil_ConvertAndMakeReadOnly_TisFieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_m73021BE4C490905DE83AAA9C8BF59FCEB4735A44 (RuntimeObject* ___input0, IndexedConverter_2_t0DDCFB08F1D74E2C7092F67B7BD0E05107B62F08* ___converter1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, IndexedConverter_2_t0DDCFB08F1D74E2C7092F67B7BD0E05107B62F08*, const RuntimeMethod*))DescriptorUtil_ConvertAndMakeReadOnly_TisRuntimeObject_TisRuntimeObject_m4DEBD663FE5610360A084DC63778C8AFC225C0D2_gshared)(___input0, ___converter1, method);
}
// System.Void System.Func`2<Google.Protobuf.Reflection.FieldDescriptor,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mCB50FD0BBFFED49F5F9E0A145ED9A91DDE2E520B (Func_2_tC1A88D50374165E90B663F30D638545C47ECFDAC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tC1A88D50374165E90B663F30D638545C47ECFDAC*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared)(__this, ___object0, ___method1, method);
}
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<Google.Protobuf.Reflection.FieldDescriptor,System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
inline RuntimeObject* Enumerable_OrderBy_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m64A74F5892458BD558B1F8E6ED1A07F1D308B53B (RuntimeObject* ___source0, Func_2_tC1A88D50374165E90B663F30D638545C47ECFDAC* ___keySelector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tC1A88D50374165E90B663F30D638545C47ECFDAC*, const RuntimeMethod*))Enumerable_OrderBy_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0CD0677A1278BFC7E13405D11D1EF30919C9E9A2_gshared)(___source0, ___keySelector1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<Google.Protobuf.Reflection.FieldDescriptor>(System.Collections.Generic.IEnumerable`1<TSource>)
inline FieldDescriptorU5BU5D_tBD6F168D4566F082DA9EBBDC4AA3D412F2E9BF81* Enumerable_ToArray_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_m070C184D2FF6F150CF8743729B3FA34414900E75 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  FieldDescriptorU5BU5D_tBD6F168D4566F082DA9EBBDC4AA3D412F2E9BF81* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___source0, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Google.Protobuf.Reflection.FieldDescriptor>::.ctor(System.Collections.Generic.IList`1<T>)
inline void ReadOnlyCollection_1__ctor_m9CFD56BDC2BB0527D5B794B37FC216610DECBBF3 (ReadOnlyCollection_1_t576A96EB67EFDB504EC4066151F3F1B55149AE2B* __this, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_t576A96EB67EFDB504EC4066151F3F1B55149AE2B*, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_mF2D2ACE0752C3B97343B72328D49200F45C14B65_gshared)(__this, ___list0, method);
}
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::CreateJsonFieldMap(System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyDictionary_2_tAD61E95979D9934AF3B06DCF0866D229C964C0DF* MessageDescriptor_CreateJsonFieldMap_mD09C81A7A2F2564EA4D90F69A20AD15BB5696E21 (RuntimeObject* ___fields0, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.DescriptorPool Google.Protobuf.Reflection.FileDescriptor::get_DescriptorPool()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* FileDescriptor_get_DescriptorPool_m2C9A3FFBC669C3DAFDD5C7DBFE51EF37094021CD_inline (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorPool::AddSymbol(Google.Protobuf.Reflection.IDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptorPool_AddSymbol_m9F1D72975649FB85CEE9B12FA92EFC6C30B49614 (DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* __this, RuntimeObject* ___descriptor0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.MessageDescriptor/FieldCollection::.ctor(Google.Protobuf.Reflection.MessageDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldCollection__ctor_m43EAACB34F71AEE419BD80BE4D81514F9A3FB35F (FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3* __this, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___messageDescriptor0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>::.ctor()
inline void Dictionary_2__ctor_mBD4E6729CB2CD78876040FFFB6EF66E6642B2CEA (Dictionary_2_t31CFF5885A32B2296486F78FBD937CABF29763E7* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t31CFF5885A32B2296486F78FBD937CABF29763E7*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m15158F9A79EA2D0686E04F916C77D923DCE592E6 (Dictionary_2_t31CFF5885A32B2296486F78FBD937CABF29763E7* __this, String_t* ___key0, FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t31CFF5885A32B2296486F78FBD937CABF29763E7*, String_t*, FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.String Google.Protobuf.Reflection.FieldDescriptor::get_JsonName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* FieldDescriptor_get_JsonName_m1E7529AB79BEB8C99A1318FFDA81F6F4C9E81216_inline (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_m6C6C746D696F91F5D5D592C67F2154901251DD05 (ReadOnlyDictionary_2_tAD61E95979D9934AF3B06DCF0866D229C964C0DF* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_tAD61E95979D9934AF3B06DCF0866D229C964C0DF*, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m96973475803B2B44481AF891D0B2AB063B5D4CDA_gshared)(__this, ___dictionary0, method);
}
// Google.Protobuf.Reflection.DescriptorProto Google.Protobuf.Reflection.MessageDescriptor::get_Proto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* MessageDescriptor_get_Proto_mE5640E03D5D2191198B0B47401F194D9A1AFD59B_inline (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.MessageDescriptor::get_NestedTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_NestedTypes_m843BBF2AD3939A0AD39AE080A7E9AE6942FBF1A8_inline (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor> Google.Protobuf.Reflection.MessageDescriptor::get_EnumTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_EnumTypes_mCAC627C3D64CB7E3A1092FCDC6406C6DC52B70D8_inline (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto/Types/ExtensionRange> Google.Protobuf.Reflection.DescriptorProto::get_ExtensionRange()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_t0E899A6F37E8797AEF754CE965684FD651FC2788* DescriptorProto_get_ExtensionRange_mFB6530B27992B6529AC1899E670EC90D8B42B6B8_inline (DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* __this, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto/Types/ExtensionRange>::get_Count()
inline int32_t RepeatedField_1_get_Count_mD87395300020C8F70282FF01C81CA48400FBF7D0_inline (RepeatedField_1_t0E899A6F37E8797AEF754CE965684FD651FC2788* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RepeatedField_1_t0E899A6F37E8797AEF754CE965684FD651FC2788*, const RuntimeMethod*))RepeatedField_1_get_Count_m27D2CA123A5BB11C5CB1AB34412C327A00FAB882_gshared_inline)(__this, method);
}
// System.Type Google.Protobuf.Reflection.MessageDescriptor::get_ClrType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* MessageDescriptor_get_ClrType_mE5BB83F9A779B01E975658DFE4F51873F6745656_inline (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) ;
// System.Func`2<Google.Protobuf.IMessage,System.Boolean> Google.Protobuf.Reflection.ReflectionUtil::CreateIsInitializedCaller(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB* ReflectionUtil_CreateIsInitializedCaller_m1FE693B57BD570BC79A60981E25D7D462EEEA6AD (Type_t* ___msg0, const RuntimeMethod* method) ;
// TResult System.Func`2<Google.Protobuf.IMessage,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_m5C27E0BEEBC98CF7C0CD49A54934D4751F6FB718_inline (Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline)(__this, ___arg0, method);
}
// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.DescriptorBase::get_File()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* DescriptorBase_get_File_m4ADE18F8259D6F6DEC90FEEDCDCFAD1101AAE7BF_inline (DescriptorBase_t5C5FA7C866B517618C4032DDBEF36522D92A18FA* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.FileDescriptor::get_Package()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileDescriptor_get_Package_m23DC9E5095D1DD5F7CB43E67337C8A4B4F8AC41F (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Contains(T)
inline bool HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853 (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared)(__this, ___item0, method);
}
// System.String Google.Protobuf.Reflection.DescriptorBase::get_FullName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DescriptorBase_get_FullName_m09E17EE9C9184A528B154958832FDA2977D8B32D_inline (DescriptorBase_t5C5FA7C866B517618C4032DDBEF36522D92A18FA* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// T Google.Protobuf.Reflection.DescriptorPool::FindSymbol<Google.Protobuf.Reflection.FieldDescriptor>(System.String)
inline FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* DescriptorPool_FindSymbol_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_m2B4EFCB9D5CE363F133745A3FB23689CEF10E9AF (DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* __this, String_t* ___fullName0, const RuntimeMethod* method)
{
	return ((  FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* (*) (DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94*, String_t*, const RuntimeMethod*))DescriptorPool_FindSymbol_TisRuntimeObject_m0AEBF237D4755A091C30A8DD89F5021588253F75_gshared)(__this, ___fullName0, method);
}
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.DescriptorPool::FindFieldByNumber(Google.Protobuf.Reflection.MessageDescriptor,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* DescriptorPool_FindFieldByNumber_m3306450EAB967767481F0E183ACF0914C749906E (DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* __this, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___messageDescriptor0, int32_t ___number1, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MessageOptions Google.Protobuf.Reflection.DescriptorProto::get_Options()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageOptions_t21D90698973F4D57E228B9E596F8E3E8CC429B7A* DescriptorProto_get_Options_mFEB4E68AE42F39354016ECEA1350E11A25E7314C_inline (DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.Int32,Google.Protobuf.IExtensionValue> Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.MessageOptions>::get_ValuesByNumber()
inline Dictionary_2_t7D99B8C24B0BFFDE97F3C514C8E7AA5FA84C046D* ExtensionSet_1_get_ValuesByNumber_m4CA89D90A6702AC7AD00EA5B169C136774EB0484_inline (ExtensionSet_1_tF304BC81EFCE3C2142ACECC1A1E2B5FD4BD89D09* __this, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t7D99B8C24B0BFFDE97F3C514C8E7AA5FA84C046D* (*) (ExtensionSet_1_tF304BC81EFCE3C2142ACECC1A1E2B5FD4BD89D09*, const RuntimeMethod*))ExtensionSet_1_get_ValuesByNumber_mF09E6EB60864810B11A9C69168CD1519187A8564_gshared_inline)(__this, method);
}
// System.Void Google.Protobuf.Reflection.CustomOptions::.ctor(System.Collections.Generic.IDictionary`2<System.Int32,Google.Protobuf.IExtensionValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomOptions__ctor_m1210A6A5726546C7862286CD9BADFF187FF53B11 (CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* __this, RuntimeObject* ___values0, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MessageOptions Google.Protobuf.Reflection.MessageOptions::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageOptions_t21D90698973F4D57E228B9E596F8E3E8CC429B7A* MessageOptions_Clone_m163082FBB0F9406985C3C62BF385DF59161D5346 (MessageOptions_t21D90698973F4D57E228B9E596F8E3E8CC429B7A* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.MessageDescriptor::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDescriptor_CrossLink_mCEDFF8C6BDA2083BA94CB583CEE6AD31E6294C20 (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.FieldDescriptor::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldDescriptor_CrossLink_m8EDBF05BB7268AE1CBE65F796C5242058DBD8C1D (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.OneofDescriptor::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneofDescriptor_CrossLink_mA8C38E8741F9A1DF651EB74C3B05FFC67B9CE196 (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.ExtensionCollection Google.Protobuf.Reflection.MessageDescriptor::get_Extensions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExtensionCollection_tB99C14F49DA3F67113593C9FD990613B6072E7A0* MessageDescriptor_get_Extensions_m512F337245F65FA7AA8CC4507D7C5B2FF0963DAA_inline (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ExtensionCollection::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionCollection_CrossLink_m285AC1F36A71D36A45C57456A248607AE50B2B1C (ExtensionCollection_tB99C14F49DA3F67113593C9FD990613B6072E7A0* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor()
inline void HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03 (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(T)
inline bool HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.MessageDescriptor::FindFieldByNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* MessageDescriptor_FindFieldByNumber_m1D65624DECB12DDDD354206EB1B0BBE4944651DC (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, int32_t ___number0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyNotFoundException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* __this, String_t* ___message0, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.MessageDescriptor::FindFieldByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* MessageDescriptor_FindFieldByName_m5C4B4A4ECD41D310E72889BEF59BD89A1CC98DA9 (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_OneofNames()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* GeneratedClrTypeInfo_get_OneofNames_mEB47A698EDAC7237464F2AD15643BA0E43A5B0D6_inline (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.OneofDescriptor::.ctor(Google.Protobuf.Reflection.OneofDescriptorProto,Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.MessageDescriptor,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneofDescriptor__ctor_m1DF6BC68AE05031163B8774780CA2B5856545429 (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* __this, OneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A* ___proto0, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file1, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___parent2, int32_t ___index3, String_t* ___clrName4, const RuntimeMethod* method) ;
// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_PropertyNames()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* GeneratedClrTypeInfo_get_PropertyNames_m90234348C0C94D290A5B78AE50B651C4CDD8E302_inline (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.FieldDescriptor::.ctor(Google.Protobuf.Reflection.FieldDescriptorProto,Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.MessageDescriptor,System.Int32,System.String,Google.Protobuf.Extension)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldDescriptor__ctor_m74092D5AB00D6D4A81C2BA5FE7BEA941E2696A50 (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* ___proto0, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file1, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___parent2, int32_t ___index3, String_t* ___propertyName4, Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A* ___extension5, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.MessageDescriptor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBABF78AE22082EE0CDD0BA1D06892DC8D6CB8B00 (U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726* __this, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.Reflection.FieldDescriptor::get_FieldNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FieldDescriptor_get_FieldNumber_m92E0DC0243FE36CA28859096A93B82BAE6927452 (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) ;
// System.Boolean Google.Protobuf.Reflection.MethodDescriptorProto::get_ClientStreaming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodDescriptorProto_get_ClientStreaming_m2C6A7809C34840D7F55088937F25FEE7197409F3 (MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* __this, const RuntimeMethod* method) ;
// System.Boolean Google.Protobuf.Reflection.MethodDescriptorProto::get_ServerStreaming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodDescriptorProto_get_ServerStreaming_mFC81302136E94D4B06942C2FA32532C0731D67C3 (MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MethodDescriptorProto Google.Protobuf.Reflection.MethodDescriptor::get_Proto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* MethodDescriptor_get_Proto_m08BA64B9570CED9E3E993E1F8B6997395C3649F6_inline (MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MethodOptions Google.Protobuf.Reflection.MethodDescriptorProto::get_Options()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodOptions_t231FE38BD5312DB18559F1566A090E97A3AF6DB7* MethodDescriptorProto_get_Options_mEF31E491D76D1C67D9D2FB55C243B9F52E7E9D1A_inline (MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.Int32,Google.Protobuf.IExtensionValue> Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.MethodOptions>::get_ValuesByNumber()
inline Dictionary_2_t7D99B8C24B0BFFDE97F3C514C8E7AA5FA84C046D* ExtensionSet_1_get_ValuesByNumber_m39A446AA28C0F70EA7A7D2E25E39D1B76EDB896A_inline (ExtensionSet_1_t7852FD32A1BA06E9EC2E3A0A4FD20D1ECE125227* __this, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t7D99B8C24B0BFFDE97F3C514C8E7AA5FA84C046D* (*) (ExtensionSet_1_t7852FD32A1BA06E9EC2E3A0A4FD20D1ECE125227*, const RuntimeMethod*))ExtensionSet_1_get_ValuesByNumber_mF09E6EB60864810B11A9C69168CD1519187A8564_gshared_inline)(__this, method);
}
// Google.Protobuf.Reflection.MethodOptions Google.Protobuf.Reflection.MethodOptions::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodOptions_t231FE38BD5312DB18559F1566A090E97A3AF6DB7* MethodOptions_Clone_mBE76D3E12FA1DBA8E94923946A7A61B8CD898C1F (MethodOptions_t231FE38BD5312DB18559F1566A090E97A3AF6DB7* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.MethodDescriptorProto::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MethodDescriptorProto_get_Name_m0E0A77A1B97748A6331C972C766376AAC481BE9D (MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.MethodDescriptorProto::get_InputType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MethodDescriptorProto_get_InputType_m3E2EDDE6CB60B9C52CD82AD5216634820EF90FD3 (MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.IDescriptor Google.Protobuf.Reflection.DescriptorPool::LookupSymbol(System.String,Google.Protobuf.Reflection.IDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DescriptorPool_LookupSymbol_mF3E2C7A93E8BC401E2AC316FD81FF62CB72A866A (DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* __this, String_t* ___name0, RuntimeObject* ___relativeTo1, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorValidationException::.ctor(Google.Protobuf.Reflection.IDescriptor,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptorValidationException__ctor_mC2C1B536F9F3C49A6187D671B499BA003DB9F366 (DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D* __this, RuntimeObject* ___problemDescriptor0, String_t* ___description1, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.MethodDescriptorProto::get_OutputType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MethodDescriptorProto_get_OutputType_m535ED7F4F70B9FAD544EB237C5697414A5C37C9F (MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* PropertyInfo_GetGetMethod_mE0D6C0811D404DD977B53E68C0D36BA8CB889F74 (PropertyInfo_t* __this, const RuntimeMethod* method) ;
// System.Func`2<Google.Protobuf.IMessage,System.Int32> Google.Protobuf.Reflection.ReflectionUtil::CreateFuncIMessageInt32(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_tAA7621BADE44DD8FE95297120257F58E03B4D5D3* ReflectionUtil_CreateFuncIMessageInt32_m6FEFA788CA033B010A45B47A69D187749E6D2421 (MethodInfo_t* ___method0, const RuntimeMethod* method) ;
// System.Action`1<Google.Protobuf.IMessage> Google.Protobuf.Reflection.ReflectionUtil::CreateActionIMessage(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997* ReflectionUtil_CreateActionIMessage_mFC1E67BD3A4046F7AD553B883230B44D49B57893 (MethodInfo_t* ___method0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.OneofAccessor::.ctor(Google.Protobuf.Reflection.OneofDescriptor,System.Func`2<Google.Protobuf.IMessage,System.Int32>,System.Action`1<Google.Protobuf.IMessage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneofAccessor__ctor_mEA73C65F6B5D91E6B6C9BEF165122D361A66D6B0 (OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* __this, OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* ___descriptor0, Func_2_tAA7621BADE44DD8FE95297120257F58E03B4D5D3* ___caseDelegate1, Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997* ___clearDelegate2, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.OneofAccessor/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m681A160D69317E55220EC7477D759838FB218A25 (U3CU3Ec__DisplayClass4_0_t784C4EBE7C1FD299653F7D2D5E783389AAE74B70* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Google.Protobuf.IMessage,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mA4B3B80493DFB6ED8D0BD17138811BF7E5839E08 (Func_2_tAA7621BADE44DD8FE95297120257F58E03B4D5D3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tAA7621BADE44DD8FE95297120257F58E03B4D5D3*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<Google.Protobuf.IMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m489692DDBF6D8FDD191397E1A803CDC0D2D74DF2 (Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<Google.Protobuf.IMessage>::Invoke(T)
inline void Action_1_Invoke_mB741A5209F94DEA28AF75D2736CCB6CA8C50C133_inline (Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997*, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// TResult System.Func`2<Google.Protobuf.IMessage,System.Int32>::Invoke(T)
inline int32_t Func_2_Invoke_m33AD4763C10512F5603E6826A3C2EAC13E41D2B2_inline (Func_2_tAA7621BADE44DD8FE95297120257F58E03B4D5D3* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_tAA7621BADE44DD8FE95297120257F58E03B4D5D3*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_gshared_inline)(__this, ___arg0, method);
}
// Google.Protobuf.Reflection.OneofDescriptor Google.Protobuf.Reflection.OneofAccessor::get_Descriptor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* OneofAccessor_get_Descriptor_mE5762B7FAFA1F5089C8C00201824FC263D5DD9CE_inline (OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.OneofDescriptor::get_ContainingType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* OneofDescriptor_get_ContainingType_m1AE060E44800C9D8135AEE395CD1A522AFE8020D_inline (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.OneofDescriptor::get_Fields()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* OneofDescriptor_get_Fields_mA95D85FFC1D1E6A526DDCD8F14A2DB16F27140C0_inline (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.IFieldAccessor Google.Protobuf.Reflection.FieldDescriptor::get_Accessor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FieldDescriptor_get_Accessor_mBFA4302AF3C75C52CACD857427ABB300A482CA19_inline (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.OneofDescriptor/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m4637F2000EF105AD580F433A1E197CF44F3CF55B (U3CU3Ec__DisplayClass4_0_t0886EC03EEC8581246EAE187D9CF8F5F3A355619* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.OneofDescriptorProto::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OneofDescriptorProto_get_Name_m6987249315B54F5D46E0B07B2876370CAFEC826C (OneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Google.Protobuf.Reflection.FieldDescriptorProto,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m3C874E1F7B587D3F8768FB82CE09F8C341BC2357 (Func_2_tA328F6AF21E84812B76E5CDC390E8EA589CEB76F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tA328F6AF21E84812B76E5CDC390E8EA589CEB76F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<Google.Protobuf.Reflection.FieldDescriptorProto>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* Enumerable_FirstOrDefault_TisFieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99_m0D6BE36B71567E861086A478FAB5EA18C0AD7FCD (RuntimeObject* ___source0, Func_2_tA328F6AF21E84812B76E5CDC390E8EA589CEB76F* ___predicate1, const RuntimeMethod* method)
{
	return ((  FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* (*) (RuntimeObject*, Func_2_tA328F6AF21E84812B76E5CDC390E8EA589CEB76F*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared)(___source0, ___predicate1, method);
}
// System.Boolean Google.Protobuf.Reflection.FieldDescriptorProto::get_Proto3Optional()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldDescriptorProto_get_Proto3Optional_mC87D925C9EA4886AB63A882C52B2CC146947868A (FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.OneofAccessor Google.Protobuf.Reflection.OneofDescriptor::CreateAccessor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* OneofDescriptor_CreateAccessor_m43F29BA6164F0BE8A54267EB293DBD4244D1999C (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* __this, String_t* ___clrName0, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.OneofOptions Google.Protobuf.Reflection.OneofDescriptorProto::get_Options()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OneofOptions_t499A07FB7EEF49A12136BABBD159BC8B7B6107EF* OneofDescriptorProto_get_Options_m86DDF956444086BD981F9BA68D91DA3A8B9360B6_inline (OneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.Int32,Google.Protobuf.IExtensionValue> Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.OneofOptions>::get_ValuesByNumber()
inline Dictionary_2_t7D99B8C24B0BFFDE97F3C514C8E7AA5FA84C046D* ExtensionSet_1_get_ValuesByNumber_m8B6D8D5916152A49A8D16792A5A8720693522473_inline (ExtensionSet_1_t2F914810BA451806E5E9BDEBFF2EB33451DBC097* __this, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t7D99B8C24B0BFFDE97F3C514C8E7AA5FA84C046D* (*) (ExtensionSet_1_t2F914810BA451806E5E9BDEBFF2EB33451DBC097*, const RuntimeMethod*))ExtensionSet_1_get_ValuesByNumber_mF09E6EB60864810B11A9C69168CD1519187A8564_gshared_inline)(__this, method);
}
// Google.Protobuf.Reflection.OneofOptions Google.Protobuf.Reflection.OneofOptions::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofOptions_t499A07FB7EEF49A12136BABBD159BC8B7B6107EF* OneofOptions_Clone_m329E567213B269340BFC68AA2E980866A896C171 (OneofOptions_t499A07FB7EEF49A12136BABBD159BC8B7B6107EF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.Protobuf.Reflection.FieldDescriptor>::.ctor()
inline void List_1__ctor_m4905449B1DA3EBC3C62384AF048391EBE47AC1A6 (List_1_t64981EE12A2A370C5000034039B00D57761431A3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t64981EE12A2A370C5000034039B00D57761431A3*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// Google.Protobuf.Reflection.MessageDescriptor/FieldCollection Google.Protobuf.Reflection.MessageDescriptor::get_Fields()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3* MessageDescriptor_get_Fields_mA5EE82B81DE42BB3DAC85301639AD91C9AB94503_inline (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor/FieldCollection::InDeclarationOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FieldCollection_InDeclarationOrder_m51C3D79E9FE57BCD482DFF7ADE94555A2AA23FD7 (FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.OneofDescriptor Google.Protobuf.Reflection.FieldDescriptor::get_ContainingOneof()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* FieldDescriptor_get_ContainingOneof_m910021BB2A5C1B3EF595F5C557EF032691282E13_inline (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.Protobuf.Reflection.FieldDescriptor>::Add(T)
inline void List_1_Add_m1DD998A0CDC162DF71974532CB819315DD20BF80_inline (List_1_t64981EE12A2A370C5000034039B00D57761431A3* __this, FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t64981EE12A2A370C5000034039B00D57761431A3*, FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// Google.Protobuf.Reflection.OneofAccessor Google.Protobuf.Reflection.OneofAccessor::ForSyntheticOneof(Google.Protobuf.Reflection.OneofDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* OneofAccessor_ForSyntheticOneof_mCC58CA3A9FBB40541883155A8E7A20DF4D439FD8 (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* ___descriptor0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.PropertyInfo::op_Equality(System.Reflection.PropertyInfo,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyInfo_op_Equality_m3BFC2276AECF2A16B66F171D65516817B4578B4F (PropertyInfo_t* ___left0, PropertyInfo_t* ___right1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231 (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Equality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1 (MethodInfo_t* ___left0, MethodInfo_t* ___right1, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.OneofAccessor Google.Protobuf.Reflection.OneofAccessor::ForRegularOneof(Google.Protobuf.Reflection.OneofDescriptor,System.Reflection.PropertyInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* OneofAccessor_ForRegularOneof_m6640C861E01F3B6C3B76E36FD212CBB745022B07 (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* ___descriptor0, PropertyInfo_t* ___caseProperty1, MethodInfo_t* ___clearMethod2, const RuntimeMethod* method) ;
// System.Boolean Google.Protobuf.Reflection.FieldDescriptorProto::get_HasOneofIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldDescriptorProto_get_HasOneofIndex_m5E3FCAD3794E6AA64AC117B5F30B12B30CA6617D (FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* __this, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.Reflection.FieldDescriptorProto::get_OneofIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FieldDescriptorProto_get_OneofIndex_mC02FB09DEAD6B0AEE7AE4697A155844B761F25C2 (FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* __this, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// T Google.Protobuf.ProtoPreconditions::CheckNotNull<System.String>(T,System.String)
inline String_t* ProtoPreconditions_CheckNotNull_TisString_t_mB87C076C6ED4020555CBA6AAC7A3B4B4265A6414 (String_t* ___value0, String_t* ___name1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (String_t*, String_t*, const RuntimeMethod*))ProtoPreconditions_CheckNotNull_TisRuntimeObject_mF2D50EEA285EC24C4A33857428197C8C1ACA1B88_gshared)(___value0, ___name1, method);
}
// System.Void Google.Protobuf.Reflection.OriginalNameAttribute::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OriginalNameAttribute_set_Name_m59F2568A14369771D8A5471123A4409E6EF85B56_inline (OriginalNameAttribute_t9E75B76C2743609B99104B17C9DED79F2F802EEC* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.OriginalNameAttribute::set_PreferredAlias(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OriginalNameAttribute_set_PreferredAlias_m3D89CC8006C1930E461D3822B4B8EE35788679F3_inline (OriginalNameAttribute_t9E75B76C2743609B99104B17C9DED79F2F802EEC* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean Google.Protobuf.Reflection.ReflectionUtil::CheckCanConvertEnumFuncToInt32Func()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtil_CheckCanConvertEnumFuncToInt32Func_m85E5421E3FAFF00E9B61CB73D488336B495ECF9A (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.String>()
inline void ReflectionUtil_ForceInitialize_TisString_t_mC1766A2E4F46E90D71FED8AA53DB5F8FA02C8AEC (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisRuntimeObject_m5AD8E3036C39169AEC2B27E6F95F90489DE058C4_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Int32>()
inline void ReflectionUtil_ForceInitialize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m15EB8875357F20B0BB3B9B46F08CE52BB2EFB3E1 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m15EB8875357F20B0BB3B9B46F08CE52BB2EFB3E1_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Int64>()
inline void ReflectionUtil_ForceInitialize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mEC0C07E3F1240FE22F33436EE73393CADE642D99 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mEC0C07E3F1240FE22F33436EE73393CADE642D99_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.UInt32>()
inline void ReflectionUtil_ForceInitialize_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m0C75615AEC88E7F48CFFEA28106F3381F6EAD071 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m0C75615AEC88E7F48CFFEA28106F3381F6EAD071_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.UInt64>()
inline void ReflectionUtil_ForceInitialize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m341230FF80086341D5AA0AA6CC3D1A15D114AB6C (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m341230FF80086341D5AA0AA6CC3D1A15D114AB6C_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Single>()
inline void ReflectionUtil_ForceInitialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF84E29587D65D592332379116B8548FB2E1AADAC (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF84E29587D65D592332379116B8548FB2E1AADAC_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Double>()
inline void ReflectionUtil_ForceInitialize_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mFEE0C4253D94732A298A360F4B7ADF953B946F63 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mFEE0C4253D94732A298A360F4B7ADF953B946F63_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Boolean>()
inline void ReflectionUtil_ForceInitialize_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6D048FDC3395B232A34CB24024E4650E201F4D99 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6D048FDC3395B232A34CB24024E4650E201F4D99_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Int32>>()
inline void ReflectionUtil_ForceInitialize_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_m8E3895E51B1AFFC80BB073FA62BE0F1F6E8EAE77 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_m8E3895E51B1AFFC80BB073FA62BE0F1F6E8EAE77_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Int64>>()
inline void ReflectionUtil_ForceInitialize_TisNullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_m6F0A86238A5C1390B6F05CD612655B528D57B724 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisNullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_m6F0A86238A5C1390B6F05CD612655B528D57B724_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.UInt32>>()
inline void ReflectionUtil_ForceInitialize_TisNullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_mD5D21B919BB5DD26A8F9BC32002D581D6C5111CE (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisNullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_mD5D21B919BB5DD26A8F9BC32002D581D6C5111CE_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.UInt64>>()
inline void ReflectionUtil_ForceInitialize_TisNullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_mA9F209671FD1304F632A97626905E045055BD08B (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisNullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_mA9F209671FD1304F632A97626905E045055BD08B_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Single>>()
inline void ReflectionUtil_ForceInitialize_TisNullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_mF39BF1664E65D8DB86BA395A687DBE2F681649AD (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisNullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_mF39BF1664E65D8DB86BA395A687DBE2F681649AD_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Double>>()
inline void ReflectionUtil_ForceInitialize_TisNullable_1_t6E154519A812D040E3016229CD7638843A2CC165_m6A1D86D58315257891B8FD2689F92CA59BBB6C98 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisNullable_1_t6E154519A812D040E3016229CD7638843A2CC165_m6A1D86D58315257891B8FD2689F92CA59BBB6C98_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Boolean>>()
inline void ReflectionUtil_ForceInitialize_TisNullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_m7CF2FDF8AADB6992BD4586950F863780F17FC23A (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisNullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_m7CF2FDF8AADB6992BD4586950F863780F17FC23A_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<Google.Protobuf.Reflection.ReflectionUtil/SampleEnum>()
inline void ReflectionUtil_ForceInitialize_TisSampleEnum_t2BD35E03D5408696826ED53B77DFC95192F17F37_mF80D395CA5906B387575C3DAECE74C73B3476919 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mD0E673BE16C732D014DF4D3B89314C01179DB903_gshared)(method);
}
// Google.Protobuf.Reflection.ReflectionUtil/SampleEnum Google.Protobuf.Reflection.ReflectionUtil::SampleEnumMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReflectionUtil_SampleEnumMethod_mBEEDAAF0BEDCB91A5E3764EDE96AAC4E40EC8F96 (const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.ReflectionUtil/IReflectionHelper Google.Protobuf.Reflection.ReflectionUtil::GetReflectionHelper(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtil_GetReflectionHelper_mAA55F07F7128099496ADB7309B29A83BF2232C62 (Type_t* ___t10, Type_t* ___t21, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_mDBC65647828F8A3D3E63807B5AEA4A4ECDE397E6 (Type_t* ___type0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ServiceDescriptor/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m883D83E52598F0FD9D1E08791BF725660C24A370 (U3CU3Ec__DisplayClass2_0_t0462B10BAFB8EAF0E79D516CCE2FF284B4B1EED2* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.ServiceDescriptorProto::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServiceDescriptorProto_get_Name_m335601B56CC8C6E93B045072F27AC8D13C9068DC (ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.MethodDescriptorProto> Google.Protobuf.Reflection.ServiceDescriptorProto::get_Method()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_tDBB28893EE104846AAAF4D79249AD6254CB6EC7E* ServiceDescriptorProto_get_Method_mD603FB2CDAA65A667B86A080996B8FFA01FA3E7C_inline (ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.MethodDescriptorProto,Google.Protobuf.Reflection.MethodDescriptor>::.ctor(System.Object,System.IntPtr)
inline void IndexedConverter_2__ctor_m56898EAD4712836360F3B03E6F5EE4AF24B5FFC7 (IndexedConverter_2_tBFDF7A55E5AD530A48988CD0D6F975525A8A1543* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (IndexedConverter_2_tBFDF7A55E5AD530A48988CD0D6F975525A8A1543*, RuntimeObject*, intptr_t, const RuntimeMethod*))IndexedConverter_2__ctor_m2D06A6062BBEC46D07970CCEC1DCB4674C662547_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IList`1<TOutput> Google.Protobuf.Reflection.DescriptorUtil::ConvertAndMakeReadOnly<Google.Protobuf.Reflection.MethodDescriptorProto,Google.Protobuf.Reflection.MethodDescriptor>(System.Collections.Generic.IList`1<TInput>,Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<TInput,TOutput>)
inline RuntimeObject* DescriptorUtil_ConvertAndMakeReadOnly_TisMethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A_TisMethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96_m03E8C603AF2B4DC1E3C48881C7C22ECCA8CBE6BC (RuntimeObject* ___input0, IndexedConverter_2_tBFDF7A55E5AD530A48988CD0D6F975525A8A1543* ___converter1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, IndexedConverter_2_tBFDF7A55E5AD530A48988CD0D6F975525A8A1543*, const RuntimeMethod*))DescriptorUtil_ConvertAndMakeReadOnly_TisRuntimeObject_TisRuntimeObject_m4DEBD663FE5610360A084DC63778C8AFC225C0D2_gshared)(___input0, ___converter1, method);
}
// T Google.Protobuf.Reflection.DescriptorPool::FindSymbol<Google.Protobuf.Reflection.MethodDescriptor>(System.String)
inline MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* DescriptorPool_FindSymbol_TisMethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96_mB3A2914B4CA53359B39647DA083161550B2B00E6 (DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* __this, String_t* ___fullName0, const RuntimeMethod* method)
{
	return ((  MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* (*) (DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94*, String_t*, const RuntimeMethod*))DescriptorPool_FindSymbol_TisRuntimeObject_m0AEBF237D4755A091C30A8DD89F5021588253F75_gshared)(__this, ___fullName0, method);
}
// Google.Protobuf.Reflection.ServiceDescriptorProto Google.Protobuf.Reflection.ServiceDescriptor::get_Proto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* ServiceDescriptor_get_Proto_m6E7C4568043ACAAFE2D6CFEA8AD5B97CB3350170_inline (ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.ServiceOptions Google.Protobuf.Reflection.ServiceDescriptorProto::get_Options()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ServiceOptions_t7A8BC19A9254D2E797A516E26929EE2B1B12D334* ServiceDescriptorProto_get_Options_mC879FAA80CB6FF261B987734BF999D71E2013E03_inline (ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.Int32,Google.Protobuf.IExtensionValue> Google.Protobuf.ExtensionSet`1<Google.Protobuf.Reflection.ServiceOptions>::get_ValuesByNumber()
inline Dictionary_2_t7D99B8C24B0BFFDE97F3C514C8E7AA5FA84C046D* ExtensionSet_1_get_ValuesByNumber_m2259912E80B0172D23AD9DF3A20D485B61EF2F43_inline (ExtensionSet_1_t89FDE7093BD8C1D18C53FBFAC7040214AE9BD25D* __this, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t7D99B8C24B0BFFDE97F3C514C8E7AA5FA84C046D* (*) (ExtensionSet_1_t89FDE7093BD8C1D18C53FBFAC7040214AE9BD25D*, const RuntimeMethod*))ExtensionSet_1_get_ValuesByNumber_mF09E6EB60864810B11A9C69168CD1519187A8564_gshared_inline)(__this, method);
}
// Google.Protobuf.Reflection.ServiceOptions Google.Protobuf.Reflection.ServiceOptions::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceOptions_t7A8BC19A9254D2E797A516E26929EE2B1B12D334* ServiceOptions_Clone_m2C15B06C366456C5604C711169007950E99C18C0 (ServiceOptions_t7A8BC19A9254D2E797A516E26929EE2B1B12D334* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.MethodDescriptor::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodDescriptor_CrossLink_mDA009B32AEA452674E144983DE399890DC1340D7 (MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.MethodDescriptor::.ctor(Google.Protobuf.Reflection.MethodDescriptorProto,Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.ServiceDescriptor,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodDescriptor__ctor_m14EC122B2999003C0BA7C543F9ED0F728AA90FF2 (MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* __this, MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* ___proto0, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file1, ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* ___parent2, int32_t ___index3, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m5A24E4916BF14BB9949EF1395C053CDAD064B128 (U3CU3Ec__DisplayClass3_0_t7699988D597E698E40B86C773DD10233174D77FE* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* PropertyInfo_GetSetMethod_mA16842ADAD11B6F70F4EDCA2805C999E378C4C8B (PropertyInfo_t* __this, const RuntimeMethod* method) ;
// System.Action`2<Google.Protobuf.IMessage,System.Object> Google.Protobuf.Reflection.ReflectionUtil::CreateActionIMessageObject(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_t939E2CC3C1A7288E5CDB844113A2D158F3612171* ReflectionUtil_CreateActionIMessageObject_mD611838AE602E5A08BF6445CF397080D2A785774 (MethodInfo_t* ___method0, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.FieldType Google.Protobuf.Reflection.FieldDescriptor::get_FieldType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FieldDescriptor_get_FieldType_mD7E8085F4F0B7FCED231CB145D24118346428FB5_inline (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Google.Protobuf.IMessage,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m4AB35F331AB4E88428875BD2C6E7EBAC698F4F43 (Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// Google.Protobuf.Reflection.OneofDescriptor Google.Protobuf.Reflection.FieldDescriptor::get_RealContainingOneof()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* FieldDescriptor_get_RealContainingOneof_mEB09ABE451B1AEFF7D89E0D2FD1FEF9BA6054515 (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_1__ctor_m8B0684FEF305ABB523FA987280A461802696EEED (U3CU3Ec__DisplayClass3_1_tA67F0AC390C7692ED34D30C8FF196E46D3C848DC* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.OneofAccessor Google.Protobuf.Reflection.OneofDescriptor::get_Accessor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* OneofDescriptor_get_Accessor_m6EBDA81DDBD7EF8ACCA4FBF4F52175C73726A0E1_inline (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.Syntax Google.Protobuf.Reflection.FileDescriptor::get_Syntax()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FileDescriptor_get_Syntax_mB5C6EF1E70A665E41B1627C0FE2A87F8B416C033_inline (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.FieldDescriptorProto Google.Protobuf.Reflection.FieldDescriptor::get_Proto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* FieldDescriptor_get_Proto_m3FDA5E399D03D9BE3D346D654E0F1CC1DD4F2D19_inline (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) ;
// System.Reflection.PropertyInfo System.Reflection.RuntimeReflectionExtensions::GetRuntimeProperty(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* RuntimeReflectionExtensions_GetRuntimeProperty_mA07658BCB3B542E31B687781107DE2ED7B07AEFB (Type_t* ___type0, String_t* ___name1, const RuntimeMethod* method) ;
// System.Func`2<Google.Protobuf.IMessage,System.Boolean> Google.Protobuf.Reflection.ReflectionUtil::CreateFuncIMessageBool(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB* ReflectionUtil_CreateFuncIMessageBool_m7AA5F2A679725EEF84BF1D404B9B4C1944299AD9 (MethodInfo_t* ___method0, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Reflection.RuntimeReflectionExtensions::GetRuntimeMethod(System.Type,System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* RuntimeReflectionExtensions_GetRuntimeMethod_m4759237A7FCCC75A536DB354345AFB0E44687B3D (Type_t* ___type0, String_t* ___name1, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___parameters2, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_2__ctor_m0F8436BA813562271351FE848AD63FD5749CFDD7 (U3CU3Ec__DisplayClass3_2_t4163C2A623E2EFB73A5AF767786C921A0D088750* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// Google.Protobuf.ByteString Google.Protobuf.ByteString::get_Empty()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* ByteString_get_Empty_m2251FAD9C8D09FA127E81F228DF5A60D4EE3F414_inline (const RuntimeMethod* method) ;
// System.Void System.Action`2<Google.Protobuf.IMessage,System.Object>::Invoke(T1,T2)
inline void Action_2_Invoke_m0CF559CD5A31F07C66DF2E464260B44A5A1FA422_inline (Action_2_t939E2CC3C1A7288E5CDB844113A2D158F3612171* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t939E2CC3C1A7288E5CDB844113A2D158F3612171*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.OneofAccessor::GetCaseFieldDescriptor(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* OneofAccessor_GetCaseFieldDescriptor_m4915CF5321E80B0C750409F84E109D13FF47FBFC (OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* __this, RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.OneofAccessor::Clear(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneofAccessor_Clear_m29989D87DCDC7AA04E7083B47DD8AB511B058E7D (OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* __this, RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3D0E23855280035CE9E607FFA04738F0721FBDF7 (U3CU3Ec_tE711B535F3AE500B935BE1C9A071DB25F2437DFF* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m252FB3D32AFC19DE1B40589C914D14FDEC7B5933 (Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384* __this, String_t* ___key0, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384*, String_t*, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::FromFiles(System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FileDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* TypeRegistry_FromFiles_mDA10E0EF429B1F70DA52F548652BF78C96F121CB (RuntimeObject* ___fileDescriptors0, const RuntimeMethod* method) ;
// T Google.Protobuf.ProtoPreconditions::CheckNotNull<System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FileDescriptor>>(T,System.String)
inline RuntimeObject* ProtoPreconditions_CheckNotNull_TisIEnumerable_1_t122AEB8E657DD14AE7AC316E37A4B28082F53174_m16F77535CC68F84081450B50084376576827FBCE (RuntimeObject* ___value0, String_t* ___name1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, String_t*, const RuntimeMethod*))ProtoPreconditions_CheckNotNull_TisRuntimeObject_mF2D50EEA285EC24C4A33857428197C8C1ACA1B88_gshared)(___value0, ___name1, method);
}
// System.Void Google.Protobuf.Reflection.TypeRegistry/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_mB03F12F2C4E360F832D9ACC5F5184B0321A3CF47 (Builder_t5E7B8A6814011F60023CBE0C67083A74E8479389* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.TypeRegistry/Builder::AddFile(Google.Protobuf.Reflection.FileDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_AddFile_m08923155AF4823AA25B738CC9AC14C787C0AA69C (Builder_t5E7B8A6814011F60023CBE0C67083A74E8479389* __this, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___fileDescriptor0, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* Builder_Build_m9DE0B00C503E91F9B88293341A99AA9B7816B581 (Builder_t5E7B8A6814011F60023CBE0C67083A74E8479389* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::FromMessages(System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MessageDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* TypeRegistry_FromMessages_mA972124D47E7363DF37404443653F25EEC6A69C9 (RuntimeObject* ___messageDescriptors0, const RuntimeMethod* method) ;
// T Google.Protobuf.ProtoPreconditions::CheckNotNull<System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MessageDescriptor>>(T,System.String)
inline RuntimeObject* ProtoPreconditions_CheckNotNull_TisIEnumerable_1_t4CD5EF9BE7925478517917504140E652CD2D743B_m212260B9F5E35AEB125A4FAE0F6F950455DE549A (RuntimeObject* ___value0, String_t* ___name1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, String_t*, const RuntimeMethod*))ProtoPreconditions_CheckNotNull_TisRuntimeObject_mF2D50EEA285EC24C4A33857428197C8C1ACA1B88_gshared)(___value0, ___name1, method);
}
// System.Void System.Func`2<Google.Protobuf.Reflection.MessageDescriptor,Google.Protobuf.Reflection.FileDescriptor>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mF8C596E8574CB6944694007939CA8F3692F27663 (Func_2_tAA9A15EB8AD5D30A7F469C695166D5A8779DD5F0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tAA9A15EB8AD5D30A7F469C695166D5A8779DD5F0*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<Google.Protobuf.Reflection.MessageDescriptor,Google.Protobuf.Reflection.FileDescriptor>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisMessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_TisFileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE_m438D9BFB50E5B069643FA8EF55777BC95F0C962D (RuntimeObject* ___source0, Func_2_tAA9A15EB8AD5D30A7F469C695166D5A8779DD5F0* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tAA9A15EB8AD5D30A7F469C695166D5A8779DD5F0*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor>::.ctor()
inline void Dictionary_2__ctor_m13E0AE1CE03825DBDF6EA7B22110FA2D3BD37B6F (Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Google.Protobuf.Reflection.TypeRegistry::.ctor(System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeRegistry__ctor_mD8356BAAE81ED3D6C0DA14C145962505CE180FA3 (TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* __this, Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384* ___fullNameToMessageMap0, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.FileDescriptor::get_Dependencies()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_Dependencies_mAC7C5AB2751A6B9A4A2F6AE3A4E0DB2216793F7C_inline (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.FileDescriptor::get_MessageTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_MessageTypes_m0FB1C458BB323A507214648AC7944A9FBE4D3E78_inline (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.TypeRegistry/Builder::AddMessage(Google.Protobuf.Reflection.MessageDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_AddMessage_mB2D0FC7251A0DB7E18E70A90CA2BBA21EA38A070 (Builder_t5E7B8A6814011F60023CBE0C67083A74E8479389* __this, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___messageDescriptor0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m051A3A61EE67B219C4941AECCFD47540866807D9 (Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384* __this, String_t* ___key0, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384*, String_t*, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Google.Protobuf.Reflection.TypeRegistry/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m852E2A500025865494CCD1B737DB532D867677C1 (U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Inequality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8 (MethodInfo_t* ___left0, MethodInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodBase::get_IsPublic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsPublic_m471B6CEE0FF2B45843C1F314B624FC7968199AB4 (MethodBase_t* __this, const RuntimeMethod* method) ;
// System.Reflection.TypeInfo System.Reflection.IntrospectionExtensions::GetTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.PropertyInfo::op_Inequality(System.Reflection.PropertyInfo,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyInfo_op_Inequality_mE75A4F14CC678D8A670730FBD4338C718CACB51B (PropertyInfo_t* ___left0, PropertyInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseDoubleEqualityComparerImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitwiseDoubleEqualityComparerImpl__ctor_mAD6B0428075BBF43DE51F583D37BA0ABF38664D2 (BitwiseDoubleEqualityComparerImpl_tF935A78EF392CD4354688989133EACA26C8640B8* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseSingleEqualityComparerImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitwiseSingleEqualityComparerImpl__ctor_m1B0BE327275B9873E6334D1BF5F168CB7550485A (BitwiseSingleEqualityComparerImpl_t54A7C3CD2D3330DC90E7BF4E41E19A32A4630CB2* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableDoubleEqualityComparerImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitwiseNullableDoubleEqualityComparerImpl__ctor_mFB917A2DA5F18FCF1412412980B25B39169C056E (BitwiseNullableDoubleEqualityComparerImpl_t17328B6D301E7839E81FEE9324CF4ABB7623836C* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableSingleEqualityComparerImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitwiseNullableSingleEqualityComparerImpl__ctor_mE92B7379D88906CF7BE75DAEB5A478DE32E3AB8F (BitwiseNullableSingleEqualityComparerImpl_tAC371318D4964393815DC27A1EAA2A0045F06EBA* __this, const RuntimeMethod* method) ;
// System.Int64 System.BitConverter::DoubleToInt64Bits(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Int64::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496 (int64_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.EqualityComparer`1<System.Double>::.ctor()
inline void EqualityComparer_1__ctor_m58F9725A39988634937D9D8E456BFBC9C8816DB6 (EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB*, const RuntimeMethod*))EqualityComparer_1__ctor_m58F9725A39988634937D9D8E456BFBC9C8816DB6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Single>::.ctor()
inline void EqualityComparer_1__ctor_mABD86A3C9CCEC7A2EEBFCD0D468A96CC3D0E12E3 (EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499*, const RuntimeMethod*))EqualityComparer_1__ctor_mABD86A3C9CCEC7A2EEBFCD0D468A96CC3D0E12E3_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<System.Double>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline)(__this, method);
}
// System.Collections.Generic.EqualityComparer`1<System.Double> Google.Protobuf.Collections.ProtobufEqualityComparers::get_BitwiseDoubleEqualityComparer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* ProtobufEqualityComparers_get_BitwiseDoubleEqualityComparer_mE0E0358747BA998C14B09B00EF0EEC35FAD67189_inline (const RuntimeMethod* method) ;
// T System.Nullable`1<System.Double>::get_Value()
inline double Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1 (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  double (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_gshared)(__this, method);
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Double>>::.ctor()
inline void EqualityComparer_1__ctor_mA454F90E707038D38215CD8C3E5E8DFD55D0E1FB (EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694*, const RuntimeMethod*))EqualityComparer_1__ctor_mA454F90E707038D38215CD8C3E5E8DFD55D0E1FB_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline)(__this, method);
}
// System.Collections.Generic.EqualityComparer`1<System.Single> Google.Protobuf.Collections.ProtobufEqualityComparers::get_BitwiseSingleEqualityComparer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* ProtobufEqualityComparers_get_BitwiseSingleEqualityComparer_mB00254F465D7EAA2754FA111AF8F561BF50455A8_inline (const RuntimeMethod* method) ;
// T System.Nullable`1<System.Single>::get_Value()
inline float Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Single>>::.ctor()
inline void EqualityComparer_1__ctor_mC48678D94B2CF1801B7AE07518AC52EF47C1900E (EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203*, const RuntimeMethod*))EqualityComparer_1__ctor_mC48678D94B2CF1801B7AE07518AC52EF47C1900E_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.Protobuf.Reflection.FileDescriptor/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mA89B8C9B33126D0D03CDAF54977031AEDECD799D (U3CU3Ec__DisplayClass2_0_tB448A3B4A308D4BB4794F8E177B1BFE7A47212DA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.FileDescriptor/<>c__DisplayClass2_0::<.ctor>b__0(Google.Protobuf.Reflection.DescriptorProto,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_mD22EDD68016F3F38E72AB43EE4584B7B31A0BB29 (U3CU3Ec__DisplayClass2_0_tB448A3B4A308D4BB4794F8E177B1BFE7A47212DA* __this, DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* ___message0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	RuntimeObject* G_B2_2 = NULL;
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* G_B2_3 = NULL;
	DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* G_B2_4 = NULL;
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	RuntimeObject* G_B1_2 = NULL;
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* G_B1_3 = NULL;
	DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* G_B1_4 = NULL;
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	RuntimeObject* G_B3_2 = NULL;
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* G_B3_3 = NULL;
	DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* G_B3_4 = NULL;
	{
		DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* L_0 = ___message0;
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_1 = __this->___U3CU3E4__this_0;
		int32_t L_2 = ___index1;
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_3 = __this->___generatedCodeInfo_1;
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		G_B1_2 = NULL;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			G_B2_2 = NULL;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_0016;
		}
	}
	{
		G_B3_0 = ((GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		G_B3_4 = G_B1_4;
		goto IL_001d;
	}

IL_0016:
	{
		NullCheck(G_B2_0);
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_5;
		L_5 = GeneratedClrTypeInfo_get_NestedTypes_m8AED7D6560730E69176023048554B849007EAAA0_inline(G_B2_0, NULL);
		int32_t L_6 = ___index1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		G_B3_0 = L_8;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
		G_B3_4 = G_B2_4;
	}

IL_001d:
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_9 = (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*)il2cpp_codegen_object_new(MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		MessageDescriptor__ctor_m70A471C5C93507DB23E607F2D0413B66C784DC78(L_9, G_B3_4, G_B3_3, (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*)G_B3_2, G_B3_1, G_B3_0, NULL);
		return L_9;
	}
}
// Google.Protobuf.Reflection.EnumDescriptor Google.Protobuf.Reflection.FileDescriptor/<>c__DisplayClass2_0::<.ctor>b__1(Google.Protobuf.Reflection.EnumDescriptorProto,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__1_mCFF487FA1B9FCE7066E0E992FDEF3D0DE1F9D201 (U3CU3Ec__DisplayClass2_0_tB448A3B4A308D4BB4794F8E177B1BFE7A47212DA* __this, EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344* ___enumType0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	RuntimeObject* G_B2_2 = NULL;
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* G_B2_3 = NULL;
	EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344* G_B2_4 = NULL;
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	RuntimeObject* G_B1_2 = NULL;
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* G_B1_3 = NULL;
	EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344* G_B1_4 = NULL;
	Type_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	RuntimeObject* G_B3_2 = NULL;
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* G_B3_3 = NULL;
	EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344* G_B3_4 = NULL;
	{
		EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344* L_0 = ___enumType0;
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_1 = __this->___U3CU3E4__this_0;
		int32_t L_2 = ___index1;
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_3 = __this->___generatedCodeInfo_1;
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		G_B1_2 = NULL;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			G_B2_2 = NULL;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_0016;
		}
	}
	{
		G_B3_0 = ((Type_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		G_B3_4 = G_B1_4;
		goto IL_001d;
	}

IL_0016:
	{
		NullCheck(G_B2_0);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_5;
		L_5 = GeneratedClrTypeInfo_get_NestedEnums_mD3FF2C77CA209172AA17731B31FA24968522A1CC_inline(G_B2_0, NULL);
		int32_t L_6 = ___index1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Type_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		G_B3_0 = L_8;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
		G_B3_4 = G_B2_4;
	}

IL_001d:
	{
		EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* L_9 = (EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E*)il2cpp_codegen_object_new(EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		EnumDescriptor__ctor_m5DF396F94AFB86FE46AC0D53FDCBAE16DC910FBE(L_9, G_B3_4, G_B3_3, (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*)G_B3_2, G_B3_1, G_B3_0, NULL);
		return L_9;
	}
}
// Google.Protobuf.Reflection.ServiceDescriptor Google.Protobuf.Reflection.FileDescriptor/<>c__DisplayClass2_0::<.ctor>b__2(Google.Protobuf.Reflection.ServiceDescriptorProto,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__2_m07FFD1910963ACE00FB6AD60AF2ECD22F86B9B5B (U3CU3Ec__DisplayClass2_0_tB448A3B4A308D4BB4794F8E177B1BFE7A47212DA* __this, ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* ___service0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* L_0 = ___service0;
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_1 = __this->___U3CU3E4__this_0;
		int32_t L_2 = ___index1;
		ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* L_3 = (ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE*)il2cpp_codegen_object_new(ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ServiceDescriptor__ctor_m70D586A7D348405DE1CCE844D4E855FB93602CF9(L_3, L_0, L_1, L_2, NULL);
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
// System.Void Google.Protobuf.Reflection.FileDescriptor/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB97DE878DE0EF63D56E8A8303ADD1939DE599209 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC879DEB426303AFF25326E6B9597A581ADA15878_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC879DEB426303AFF25326E6B9597A581ADA15878* L_0 = (U3CU3Ec_tC879DEB426303AFF25326E6B9597A581ADA15878*)il2cpp_codegen_object_new(U3CU3Ec_tC879DEB426303AFF25326E6B9597A581ADA15878_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m29B671913B367854DA9557CD88FC016DECEB1237(L_0, NULL);
		((U3CU3Ec_tC879DEB426303AFF25326E6B9597A581ADA15878_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC879DEB426303AFF25326E6B9597A581ADA15878_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tC879DEB426303AFF25326E6B9597A581ADA15878_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC879DEB426303AFF25326E6B9597A581ADA15878_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.FileDescriptor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m29B671913B367854DA9557CD88FC016DECEB1237 (U3CU3Ec_tC879DEB426303AFF25326E6B9597A581ADA15878* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String Google.Protobuf.Reflection.FileDescriptor/<>c::<DeterminePublicDependencies>b__9_0(Google.Protobuf.Reflection.FileDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CDeterminePublicDependenciesU3Eb__9_0_m53260C5599CB1D56B825B9FBCE2C27B620C46708 (U3CU3Ec_tC879DEB426303AFF25326E6B9597A581ADA15878* __this, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file0, const RuntimeMethod* method) 
{
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0 = ___file0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = FileDescriptor_get_Name_m81861DDFBC6C17CD275F3374FC02268C0F376DF1(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Google.Protobuf.Reflection.FileDescriptor/<>c::<GetAllGeneratedExtensions>b__53_0(Google.Protobuf.Reflection.GeneratedClrTypeInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetAllGeneratedExtensionsU3Eb__53_0_mFBA375CAD0E99D8BB799CFBDE22F871DA4579327 (U3CU3Ec_tC879DEB426303AFF25326E6B9597A581ADA15878* __this, GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* ___t0, const RuntimeMethod* method) 
{
	{
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_0 = ___t0;
		return (bool)((!(((RuntimeObject*)(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Google.Protobuf.Extension Google.Protobuf.Reflection.FileDescriptor/<>c::<GetAllDependedExtensions>b__54_0(Google.Protobuf.Reflection.FieldDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A* U3CU3Ec_U3CGetAllDependedExtensionsU3Eb__54_0_mCFC2A4B8D6E1CA42675535C96FA3D3F119E7E425 (U3CU3Ec_tC879DEB426303AFF25326E6B9597A581ADA15878* __this, FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* ___s0, const RuntimeMethod* method) 
{
	{
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_0 = ___s0;
		NullCheck(L_0);
		Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A* L_1;
		L_1 = FieldDescriptor_get_Extension_m2F4D257EF197FDF6F164B17A22728CA1052EB235_inline(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Google.Protobuf.Reflection.FileDescriptor/<>c::<GetAllDependedExtensions>b__54_1(Google.Protobuf.Extension)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetAllDependedExtensionsU3Eb__54_1_m79589302E5D0C7B36B8BF3DF13A952224E4398FE (U3CU3Ec_tC879DEB426303AFF25326E6B9597A581ADA15878* __this, Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A* ___e0, const RuntimeMethod* method) 
{
	{
		Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A* L_0 = ___e0;
		return (bool)((!(((RuntimeObject*)(Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Google.Protobuf.Extension Google.Protobuf.Reflection.FileDescriptor/<>c::<GetAllDependedExtensionsFromMessage>b__55_0(Google.Protobuf.Reflection.FieldDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A* U3CU3Ec_U3CGetAllDependedExtensionsFromMessageU3Eb__55_0_m81E9F9025E8A7A52DF4789084AD49A9A4B28EBA1 (U3CU3Ec_tC879DEB426303AFF25326E6B9597A581ADA15878* __this, FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* ___s0, const RuntimeMethod* method) 
{
	{
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_0 = ___s0;
		NullCheck(L_0);
		Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A* L_1;
		L_1 = FieldDescriptor_get_Extension_m2F4D257EF197FDF6F164B17A22728CA1052EB235_inline(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Google.Protobuf.Reflection.FileDescriptor/<>c::<GetAllDependedExtensionsFromMessage>b__55_1(Google.Protobuf.Extension)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetAllDependedExtensionsFromMessageU3Eb__55_1_mAF7C1FA05FD2B315904B47EAD4F0AD1634CD9A38 (U3CU3Ec_tC879DEB426303AFF25326E6B9597A581ADA15878* __this, Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A* ___e0, const RuntimeMethod* method) 
{
	{
		Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A* L_0 = ___e0;
		return (bool)((!(((RuntimeObject*)(Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
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
// System.Type Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_ClrType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* GeneratedClrTypeInfo_get_ClrType_m5B443B2BB0A3783E56682580703FF212AF9AEDC2 (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CClrTypeU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::set_ClrType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo_set_ClrType_m744F6287D106FBDF0B7E00832E5800CCA326AA08 (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___value0;
		__this->___U3CClrTypeU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClrTypeU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// Google.Protobuf.MessageParser Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* GeneratedClrTypeInfo_get_Parser_m4C53F2D6CB863279546D11DE7B3D53ED351B48A8 (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) 
{
	{
		MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* L_0 = __this->___U3CParserU3Ek__BackingField_4;
		return L_0;
	}
}
// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_PropertyNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* GeneratedClrTypeInfo_get_PropertyNames_m90234348C0C94D290A5B78AE50B651C4CDD8E302 (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___U3CPropertyNamesU3Ek__BackingField_5;
		return L_0;
	}
}
// Google.Protobuf.Extension[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_Extensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66* GeneratedClrTypeInfo_get_Extensions_m99A0DD9B3A9BC39C66A9545C5C70847C1090138D (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) 
{
	{
		ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66* L_0 = __this->___U3CExtensionsU3Ek__BackingField_6;
		return L_0;
	}
}
// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_OneofNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* GeneratedClrTypeInfo_get_OneofNames_mEB47A698EDAC7237464F2AD15643BA0E43A5B0D6 (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___U3COneofNamesU3Ek__BackingField_7;
		return L_0;
	}
}
// Google.Protobuf.Reflection.GeneratedClrTypeInfo[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_NestedTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* GeneratedClrTypeInfo_get_NestedTypes_m8AED7D6560730E69176023048554B849007EAAA0 (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) 
{
	{
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_0 = __this->___U3CNestedTypesU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Type[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_NestedEnums()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* GeneratedClrTypeInfo_get_NestedEnums_mD3FF2C77CA209172AA17731B31FA24968522A1CC (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) 
{
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = __this->___U3CNestedEnumsU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::.ctor(System.Type,Google.Protobuf.MessageParser,System.String[],System.String[],System.Type[],Google.Protobuf.Extension[],Google.Protobuf.Reflection.GeneratedClrTypeInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo__ctor_m5F0B3E2F02BF50D81997F6B1E54DD261F2061108 (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, Type_t* ___clrType0, MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* ___parser1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___propertyNames2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___oneofNames3, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___nestedEnums4, ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66* ___extensions5, GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* ___nestedTypes6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* G_B2_0 = NULL;
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B2_1 = NULL;
	GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* G_B1_0 = NULL;
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B1_1 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B4_0 = NULL;
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B4_1 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B3_0 = NULL;
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B3_1 = NULL;
	ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66* G_B6_0 = NULL;
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B6_1 = NULL;
	ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66* G_B5_0 = NULL;
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B5_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_0 = NULL;
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B8_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_0 = NULL;
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B7_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_0 = NULL;
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B10_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_0 = NULL;
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B9_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_0 = ___nestedTypes6;
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var);
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_2 = ((GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_StaticFields*)il2cpp_codegen_static_fields_for(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var))->___EmptyCodeInfo_1;
		G_B2_0 = L_2;
		G_B2_1 = G_B1_1;
	}

IL_0012:
	{
		NullCheck(G_B2_1);
		G_B2_1->___U3CNestedTypesU3Ek__BackingField_8 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___U3CNestedTypesU3Ek__BackingField_8), (void*)G_B2_0);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = ___nestedEnums4;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_4 = L_3;
		G_B3_0 = L_4;
		G_B3_1 = __this;
		if (L_4)
		{
			G_B4_0 = L_4;
			G_B4_1 = __this;
			goto IL_0023;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_5 = ((ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var))->___EmptyTypes_0;
		G_B4_0 = L_5;
		G_B4_1 = G_B3_1;
	}

IL_0023:
	{
		NullCheck(G_B4_1);
		G_B4_1->___U3CNestedEnumsU3Ek__BackingField_9 = G_B4_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___U3CNestedEnumsU3Ek__BackingField_9), (void*)G_B4_0);
		Type_t* L_6 = ___clrType0;
		GeneratedClrTypeInfo_set_ClrType_m744F6287D106FBDF0B7E00832E5800CCA326AA08_inline(__this, L_6, NULL);
		ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66* L_7 = ___extensions5;
		ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66* L_8 = L_7;
		G_B5_0 = L_8;
		G_B5_1 = __this;
		if (L_8)
		{
			G_B6_0 = L_8;
			G_B6_1 = __this;
			goto IL_003b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var);
		ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66* L_9 = ((GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_StaticFields*)il2cpp_codegen_static_fields_for(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var))->___EmptyExtensions_2;
		G_B6_0 = L_9;
		G_B6_1 = G_B5_1;
	}

IL_003b:
	{
		NullCheck(G_B6_1);
		G_B6_1->___U3CExtensionsU3Ek__BackingField_6 = G_B6_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_1->___U3CExtensionsU3Ek__BackingField_6), (void*)G_B6_0);
		MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* L_10 = ___parser1;
		__this->___U3CParserU3Ek__BackingField_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParserU3Ek__BackingField_4), (void*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ___propertyNames2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		G_B7_0 = L_12;
		G_B7_1 = __this;
		if (L_12)
		{
			G_B8_0 = L_12;
			G_B8_1 = __this;
			goto IL_0052;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = ((GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_StaticFields*)il2cpp_codegen_static_fields_for(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var))->___EmptyNames_0;
		G_B8_0 = L_13;
		G_B8_1 = G_B7_1;
	}

IL_0052:
	{
		NullCheck(G_B8_1);
		G_B8_1->___U3CPropertyNamesU3Ek__BackingField_5 = G_B8_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B8_1->___U3CPropertyNamesU3Ek__BackingField_5), (void*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = ___oneofNames3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		G_B9_0 = L_15;
		G_B9_1 = __this;
		if (L_15)
		{
			G_B10_0 = L_15;
			G_B10_1 = __this;
			goto IL_0063;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = ((GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_StaticFields*)il2cpp_codegen_static_fields_for(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var))->___EmptyNames_0;
		G_B10_0 = L_16;
		G_B10_1 = G_B9_1;
	}

IL_0063:
	{
		NullCheck(G_B10_1);
		G_B10_1->___U3COneofNamesU3Ek__BackingField_7 = G_B10_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B10_1->___U3COneofNamesU3Ek__BackingField_7), (void*)G_B10_0);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::.ctor(System.Type,Google.Protobuf.MessageParser,System.String[],System.String[],System.Type[],Google.Protobuf.Reflection.GeneratedClrTypeInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo__ctor_m99B9737F8FA9ADA1D9E0A059170EBBF4E37856A7 (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, Type_t* ___clrType0, MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* ___parser1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___propertyNames2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___oneofNames3, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___nestedEnums4, GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* ___nestedTypes5, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___clrType0;
		MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* L_1 = ___parser1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = ___propertyNames2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___oneofNames3;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_4 = ___nestedEnums4;
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_5 = ___nestedTypes5;
		GeneratedClrTypeInfo__ctor_m5F0B3E2F02BF50D81997F6B1E54DD261F2061108(__this, L_0, L_1, L_2, L_3, L_4, (ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66*)NULL, L_5, NULL);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::.ctor(System.Type[],Google.Protobuf.Extension[],Google.Protobuf.Reflection.GeneratedClrTypeInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo__ctor_m6C6F4A657670674B74F3AF88AA06251E4C8DD022 (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___nestedEnums0, ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66* ___extensions1, GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* ___nestedTypes2, const RuntimeMethod* method) 
{
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = ___nestedEnums0;
		ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66* L_1 = ___extensions1;
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_2 = ___nestedTypes2;
		GeneratedClrTypeInfo__ctor_m5F0B3E2F02BF50D81997F6B1E54DD261F2061108(__this, (Type_t*)NULL, (MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D*)NULL, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::.ctor(System.Type[],Google.Protobuf.Reflection.GeneratedClrTypeInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo__ctor_m4B87283798FCFBF617184A3F5417575E243A6F1E (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___nestedEnums0, GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* ___nestedTypes1, const RuntimeMethod* method) 
{
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = ___nestedEnums0;
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_1 = ___nestedTypes1;
		GeneratedClrTypeInfo__ctor_m99B9737F8FA9ADA1D9E0A059170EBBF4E37856A7(__this, (Type_t*)NULL, (MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D*)NULL, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, L_0, L_1, NULL);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo__cctor_m6F58E5D0BBB877145BA2468DB92F3CA7DA61D585 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)0);
		((GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_StaticFields*)il2cpp_codegen_static_fields_for(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var))->___EmptyNames_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_StaticFields*)il2cpp_codegen_static_fields_for(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var))->___EmptyNames_0), (void*)L_0);
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_1 = (GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89*)(GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89*)SZArrayNew(GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89_il2cpp_TypeInfo_var, (uint32_t)0);
		((GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_StaticFields*)il2cpp_codegen_static_fields_for(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var))->___EmptyCodeInfo_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_StaticFields*)il2cpp_codegen_static_fields_for(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var))->___EmptyCodeInfo_1), (void*)L_1);
		ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66* L_2 = (ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66*)(ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66*)SZArrayNew(ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66_il2cpp_TypeInfo_var, (uint32_t)0);
		((GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_StaticFields*)il2cpp_codegen_static_fields_for(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var))->___EmptyExtensions_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_StaticFields*)il2cpp_codegen_static_fields_for(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var))->___EmptyExtensions_2), (void*)L_2);
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
// System.Void Google.Protobuf.Reflection.MapFieldAccessor::.ctor(System.Reflection.PropertyInfo,Google.Protobuf.Reflection.FieldDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapFieldAccessor__ctor_mB4B09BC7300B0D0B7C0D6A2C126DCC2FDE7F282C (MapFieldAccessor_tAFEEF2867D6275E9E7B870A029E4098B3151B9F0* __this, PropertyInfo_t* ___property0, FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* ___descriptor1, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = ___property0;
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_1 = ___descriptor1;
		FieldAccessorBase__ctor_m756C8E5E365EACEDB10427BA73338222AAE0C279(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.MapFieldAccessor::Clear(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapFieldAccessor_Clear_m608EF056A1BC6EDC1ADBD649181B291B24A09263 (MapFieldAccessor_tAFEEF2867D6275E9E7B870A029E4098B3151B9F0* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___message0;
		RuntimeObject* L_1;
		L_1 = FieldAccessorBase_GetValue_mABB52C5E5391C56E34EE9254B629D0E05BD425D6(__this, L_0, NULL);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_1, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker0::Invoke(6 /* System.Void System.Collections.IDictionary::Clear() */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Boolean Google.Protobuf.Reflection.MapFieldAccessor::HasValue(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MapFieldAccessor_HasValue_mC6930D5AE6EBB2F7208DA22EB822D634E8ACA62B (MapFieldAccessor_tAFEEF2867D6275E9E7B870A029E4098B3151B9F0* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8AB46C8C5CCDCA487773A386E008015AD2FB899)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MapFieldAccessor_HasValue_mC6930D5AE6EBB2F7208DA22EB822D634E8ACA62B_RuntimeMethod_var)));
	}
}
// System.Void Google.Protobuf.Reflection.MapFieldAccessor::SetValue(Google.Protobuf.IMessage,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapFieldAccessor_SetValue_m8D2215877377E1F8C78F69B39D58D8BF2CCAC798 (MapFieldAccessor_tAFEEF2867D6275E9E7B870A029E4098B3151B9F0* __this, RuntimeObject* ___message0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA2199D3FAB3E9A0592694D9E1A42317C06006B4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MapFieldAccessor_SetValue_m8D2215877377E1F8C78F69B39D58D8BF2CCAC798_RuntimeMethod_var)));
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
// System.Void Google.Protobuf.Reflection.MessageDescriptor::.ctor(Google.Protobuf.Reflection.DescriptorProto,Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.MessageDescriptor,System.Int32,Google.Protobuf.Reflection.GeneratedClrTypeInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDescriptor__ctor_m70A471C5C93507DB23E607F2D0413B66C784DC78 (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* ___proto0, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file1, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___parent2, int32_t ___typeIndex3, GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* ___generatedCodeInfo4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptorUtil_ConvertAndMakeReadOnly_TisDescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D_TisMessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_m00BFD4367E3579A99E57F18A64A2F3D3387FB5A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptorUtil_ConvertAndMakeReadOnly_TisEnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344_TisEnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E_m45D69C4DC606E87A3E5240E9DE9FA6DD9D9A0C56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptorUtil_ConvertAndMakeReadOnly_TisFieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_m73021BE4C490905DE83AAA9C8BF59FCEB4735A44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptorUtil_ConvertAndMakeReadOnly_TisOneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A_TisOneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC_m17F7ED87C65644FB34ED8647AF6F8D780DDA566C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderBy_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m64A74F5892458BD558B1F8E6ED1A07F1D308B53B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_m070C184D2FF6F150CF8743729B3FA34414900E75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionCollection_tB99C14F49DA3F67113593C9FD990613B6072E7A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC1A88D50374165E90B663F30D638545C47ECFDAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tC604B851AD49C16909B341198A71DF48F318C067_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t68F5A27EE65409E27999177803534A3D9708E03B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t6644B6D12698554DCC2B0033A9F63423A9DCCE04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedConverter_2_t0DDCFB08F1D74E2C7092F67B7BD0E05107B62F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedConverter_2_t3A6BE85E4DCF21D028DD56A9C8C71B10109B58C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedConverter_2_tFCAD597B937F3CEFE1C8FFF01A3045CE41F4F67C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedConverter_2_tFF5D05C491F41287F243B4B526A8DADCC34E0BA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1__ctor_m9CFD56BDC2BB0527D5B794B37FC216610DECBBF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_t576A96EB67EFDB504EC4066151F3F1B55149AE2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__5_4_m44B40D77F7AACC3320EA12BE11DB754CA9D0B5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__0_m1E5B298E03F36F4A60568E7F7E9D433315EF4563_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__1_m9E7873AE7FB909F605535561F3B432C18006596B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__2_mED870A3FBC82BCB62913B5DEC7C7DA87406A592B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__3_m95565C95A93EC9A54DCB78F1E5C1412696CA49D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t2A570232FA374102D5B636100BB04C68654B5CD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_t2A570232FA374102D5B636100BB04C68654B5CD8* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B2_0 = NULL;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* G_B2_1 = NULL;
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B1_0 = NULL;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* G_B1_1 = NULL;
	MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* G_B3_0 = NULL;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* G_B3_1 = NULL;
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B5_0 = NULL;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* G_B5_1 = NULL;
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B4_0 = NULL;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* G_B4_1 = NULL;
	Type_t* G_B6_0 = NULL;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* G_B6_1 = NULL;
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B19_0 = NULL;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* G_B19_1 = NULL;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* G_B19_2 = NULL;
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B18_0 = NULL;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* G_B18_1 = NULL;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* G_B18_2 = NULL;
	ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66* G_B20_0 = NULL;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* G_B20_1 = NULL;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* G_B20_2 = NULL;
	Func_2_tC1A88D50374165E90B663F30D638545C47ECFDAC* G_B22_0 = NULL;
	RuntimeObject* G_B22_1 = NULL;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* G_B22_2 = NULL;
	Func_2_tC1A88D50374165E90B663F30D638545C47ECFDAC* G_B21_0 = NULL;
	RuntimeObject* G_B21_1 = NULL;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* G_B21_2 = NULL;
	{
		U3CU3Ec__DisplayClass5_0_t2A570232FA374102D5B636100BB04C68654B5CD8* L_0 = (U3CU3Ec__DisplayClass5_0_t2A570232FA374102D5B636100BB04C68654B5CD8*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t2A570232FA374102D5B636100BB04C68654B5CD8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass5_0__ctor_mBBAA127F0B03E643A302434611A6690923816474(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_t2A570232FA374102D5B636100BB04C68654B5CD8* L_1 = V_0;
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_2 = ___file1;
		NullCheck(L_1);
		L_1->___file_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___file_0), (void*)L_2);
		U3CU3Ec__DisplayClass5_0_t2A570232FA374102D5B636100BB04C68654B5CD8* L_3 = V_0;
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_4 = ___generatedCodeInfo4;
		NullCheck(L_3);
		L_3->___generatedCodeInfo_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___generatedCodeInfo_2), (void*)L_4);
		U3CU3Ec__DisplayClass5_0_t2A570232FA374102D5B636100BB04C68654B5CD8* L_5 = V_0;
		NullCheck(L_5);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_6 = L_5->___file_0;
		U3CU3Ec__DisplayClass5_0_t2A570232FA374102D5B636100BB04C68654B5CD8* L_7 = V_0;
		NullCheck(L_7);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_8 = L_7->___file_0;
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_9 = ___parent2;
		DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* L_10 = ___proto0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = DescriptorProto_get_Name_mB58CFB6E06E100F9A1DDEC369CDB332126160AFB(L_10, NULL);
		NullCheck(L_8);
		String_t* L_12;
		L_12 = FileDescriptor_ComputeFullName_mCBDE9B2BB4FAD55885BE530C106C278E27E4D11F(L_8, L_9, L_11, NULL);
		int32_t L_13 = ___typeIndex3;
		DescriptorBase__ctor_m002B5D6404EE5F2190E0DC0162F153B9AC6F454A(__this, L_6, L_12, L_13, NULL);
		U3CU3Ec__DisplayClass5_0_t2A570232FA374102D5B636100BB04C68654B5CD8* L_14 = V_0;
		NullCheck(L_14);
		L_14->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___U3CU3E4__this_1), (void*)__this);
		DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* L_15 = ___proto0;
		__this->___U3CProtoU3Ek__BackingField_8 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProtoU3Ek__BackingField_8), (void*)L_15);
		U3CU3Ec__DisplayClass5_0_t2A570232FA374102D5B636100BB04C68654B5CD8* L_16 = V_0;
		NullCheck(L_16);
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_17 = L_16->___generatedCodeInfo_2;
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_18 = L_17;
		G_B1_0 = L_18;
		G_B1_1 = __this;
		if (L_18)
		{
			G_B2_0 = L_18;
			G_B2_1 = __this;
			goto IL_0051;
		}
	}
	{
		G_B3_0 = ((MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_0056;
	}

IL_0051:
	{
		NullCheck(G_B2_0);
		MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* L_19;
		L_19 = GeneratedClrTypeInfo_get_Parser_m4C53F2D6CB863279546D11DE7B3D53ED351B48A8_inline(G_B2_0, NULL);
		G_B3_0 = L_19;
		G_B3_1 = G_B2_1;
	}

IL_0056:
	{
		NullCheck(G_B3_1);
		G_B3_1->___U3CParserU3Ek__BackingField_10 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___U3CParserU3Ek__BackingField_10), (void*)G_B3_0);
		U3CU3Ec__DisplayClass5_0_t2A570232FA374102D5B636100BB04C68654B5CD8* L_20 = V_0;
		NullCheck(L_20);
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_21 = L_20->___generatedCodeInfo_2;
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_22 = L_21;
		G_B4_0 = L_22;
		G_B4_1 = __this;
		if (L_22)
		{
			G_B5_0 = L_22;
			G_B5_1 = __this;
			goto IL_0069;
		}
	}
	{
		G_B6_0 = ((Type_t*)(NULL));
		G_B6_1 = G_B4_1;
		goto IL_006e;
	}

IL_0069:
	{
		NullCheck(G_B5_0);
		Type_t* L_23;
		L_23 = GeneratedClrTypeInfo_get_ClrType_m5B443B2BB0A3783E56682580703FF212AF9AEDC2_inline(G_B5_0, NULL);
		G_B6_0 = L_23;
		G_B6_1 = G_B5_1;
	}

IL_006e:
	{
		NullCheck(G_B6_1);
		G_B6_1->___U3CClrTypeU3Ek__BackingField_9 = G_B6_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_1->___U3CClrTypeU3Ek__BackingField_9), (void*)G_B6_0);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_24 = ___parent2;
		__this->___U3CContainingTypeU3Ek__BackingField_11 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContainingTypeU3Ek__BackingField_11), (void*)L_24);
		DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* L_25 = ___proto0;
		NullCheck(L_25);
		RepeatedField_1_t9F109E2AE6C6DAA3EA0EE23E4CD97052F9301FC4* L_26;
		L_26 = DescriptorProto_get_OneofDecl_m88B6455AEF8DA27F82D763680A03D0B9E1565BDD_inline(L_25, NULL);
		U3CU3Ec__DisplayClass5_0_t2A570232FA374102D5B636100BB04C68654B5CD8* L_27 = V_0;
		IndexedConverter_2_tFF5D05C491F41287F243B4B526A8DADCC34E0BA9* L_28 = (IndexedConverter_2_tFF5D05C491F41287F243B4B526A8DADCC34E0BA9*)il2cpp_codegen_object_new(IndexedConverter_2_tFF5D05C491F41287F243B4B526A8DADCC34E0BA9_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		IndexedConverter_2__ctor_m7A2C9983C97A680D32FD61DC7AE7537CD0A77236(L_28, L_27, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__0_m1E5B298E03F36F4A60568E7F7E9D433315EF4563_RuntimeMethod_var), NULL);
		RuntimeObject* L_29;
		L_29 = DescriptorUtil_ConvertAndMakeReadOnly_TisOneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A_TisOneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC_m17F7ED87C65644FB34ED8647AF6F8D780DDA566C(L_26, L_28, DescriptorUtil_ConvertAndMakeReadOnly_TisOneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A_TisOneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC_m17F7ED87C65644FB34ED8647AF6F8D780DDA566C_RuntimeMethod_var);
		__this->___U3COneofsU3Ek__BackingField_16 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COneofsU3Ek__BackingField_16), (void*)L_29);
		V_1 = 0;
		RuntimeObject* L_30;
		L_30 = MessageDescriptor_get_Oneofs_m4B21398E1D746B08DD3874635EB9B8BAF81F4E38_inline(__this, NULL);
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.OneofDescriptor>::GetEnumerator() */, IEnumerable_1_t68F5A27EE65409E27999177803534A3D9708E03B_il2cpp_TypeInfo_var, L_30);
		V_2 = L_31;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d2:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_32 = V_2;
					if (!L_32)
					{
						goto IL_00db;
					}
				}
				{
					RuntimeObject* L_33 = V_2;
					NullCheck(L_33);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_33);
				}

IL_00db:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00c8_1;
			}

IL_00a7_1:
			{
				RuntimeObject* L_34 = V_2;
				NullCheck(L_34);
				OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* L_35;
				L_35 = InterfaceFuncInvoker0< OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.OneofDescriptor>::get_Current() */, IEnumerator_1_t6644B6D12698554DCC2B0033A9F63423A9DCCE04_il2cpp_TypeInfo_var, L_34);
				NullCheck(L_35);
				bool L_36;
				L_36 = OneofDescriptor_get_IsSynthetic_mB83EEA3B6B69356688ED25B0B93E37317AD96C60_inline(L_35, NULL);
				if (!L_36)
				{
					goto IL_00ba_1;
				}
			}
			{
				int32_t L_37 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_37, 1));
				goto IL_00c8_1;
			}

IL_00ba_1:
			{
				int32_t L_38 = V_1;
				if (!L_38)
				{
					goto IL_00c8_1;
				}
			}
			{
				ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_39 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
				NullCheck(L_39);
				ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_39, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA598F7A018FBD9BE6B63FDAFF829654652603EEB)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MessageDescriptor__ctor_m70A471C5C93507DB23E607F2D0413B66C784DC78_RuntimeMethod_var)));
			}

IL_00c8_1:
			{
				RuntimeObject* L_40 = V_2;
				NullCheck(L_40);
				bool L_41;
				L_41 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_40);
				if (L_41)
				{
					goto IL_00a7_1;
				}
			}
			{
				goto IL_00dc;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00dc:
	{
		RuntimeObject* L_42;
		L_42 = MessageDescriptor_get_Oneofs_m4B21398E1D746B08DD3874635EB9B8BAF81F4E38_inline(__this, NULL);
		NullCheck(L_42);
		int32_t L_43;
		L_43 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Google.Protobuf.Reflection.OneofDescriptor>::get_Count() */, ICollection_1_tC604B851AD49C16909B341198A71DF48F318C067_il2cpp_TypeInfo_var, L_42);
		int32_t L_44 = V_1;
		__this->___U3CRealOneofCountU3Ek__BackingField_17 = ((int32_t)il2cpp_codegen_subtract(L_43, L_44));
		DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* L_45 = ___proto0;
		NullCheck(L_45);
		RepeatedField_1_t1647174A532CD385C86A4013E9A94E3ED25C783B* L_46;
		L_46 = DescriptorProto_get_NestedType_mFB07AE39857C24A91E7C49707962CFB6D43038F1_inline(L_45, NULL);
		U3CU3Ec__DisplayClass5_0_t2A570232FA374102D5B636100BB04C68654B5CD8* L_47 = V_0;
		IndexedConverter_2_tFCAD597B937F3CEFE1C8FFF01A3045CE41F4F67C* L_48 = (IndexedConverter_2_tFCAD597B937F3CEFE1C8FFF01A3045CE41F4F67C*)il2cpp_codegen_object_new(IndexedConverter_2_tFCAD597B937F3CEFE1C8FFF01A3045CE41F4F67C_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		IndexedConverter_2__ctor_m19E1854900D5593942F4E42D26A07C8B2041E605(L_48, L_47, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__1_m9E7873AE7FB909F605535561F3B432C18006596B_RuntimeMethod_var), NULL);
		RuntimeObject* L_49;
		L_49 = DescriptorUtil_ConvertAndMakeReadOnly_TisDescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D_TisMessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_m00BFD4367E3579A99E57F18A64A2F3D3387FB5A0(L_46, L_48, DescriptorUtil_ConvertAndMakeReadOnly_TisDescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D_TisMessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_m00BFD4367E3579A99E57F18A64A2F3D3387FB5A0_RuntimeMethod_var);
		__this->___U3CNestedTypesU3Ek__BackingField_14 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNestedTypesU3Ek__BackingField_14), (void*)L_49);
		DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* L_50 = ___proto0;
		NullCheck(L_50);
		RepeatedField_1_tD86397FCB230839D8CDFAD16012311B08C27B0D3* L_51;
		L_51 = DescriptorProto_get_EnumType_mB638C54384C16C50C1ECD0D5895A4E829F1BEF34_inline(L_50, NULL);
		U3CU3Ec__DisplayClass5_0_t2A570232FA374102D5B636100BB04C68654B5CD8* L_52 = V_0;
		IndexedConverter_2_t3A6BE85E4DCF21D028DD56A9C8C71B10109B58C4* L_53 = (IndexedConverter_2_t3A6BE85E4DCF21D028DD56A9C8C71B10109B58C4*)il2cpp_codegen_object_new(IndexedConverter_2_t3A6BE85E4DCF21D028DD56A9C8C71B10109B58C4_il2cpp_TypeInfo_var);
		NullCheck(L_53);
		IndexedConverter_2__ctor_m87415CE302C72DDD3B741B5A6EEEB4E430D14F43(L_53, L_52, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__2_mED870A3FBC82BCB62913B5DEC7C7DA87406A592B_RuntimeMethod_var), NULL);
		RuntimeObject* L_54;
		L_54 = DescriptorUtil_ConvertAndMakeReadOnly_TisEnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344_TisEnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E_m45D69C4DC606E87A3E5240E9DE9FA6DD9D9A0C56(L_51, L_53, DescriptorUtil_ConvertAndMakeReadOnly_TisEnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344_TisEnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E_m45D69C4DC606E87A3E5240E9DE9FA6DD9D9A0C56_RuntimeMethod_var);
		__this->___U3CEnumTypesU3Ek__BackingField_15 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEnumTypesU3Ek__BackingField_15), (void*)L_54);
		U3CU3Ec__DisplayClass5_0_t2A570232FA374102D5B636100BB04C68654B5CD8* L_55 = V_0;
		NullCheck(L_55);
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_56 = L_55->___generatedCodeInfo_2;
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_57 = L_56;
		G_B18_0 = L_57;
		G_B18_1 = __this;
		G_B18_2 = __this;
		if (L_57)
		{
			G_B19_0 = L_57;
			G_B19_1 = __this;
			G_B19_2 = __this;
			goto IL_0138;
		}
	}
	{
		G_B20_0 = ((ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66*)(NULL));
		G_B20_1 = G_B18_1;
		G_B20_2 = G_B18_2;
		goto IL_013d;
	}

IL_0138:
	{
		NullCheck(G_B19_0);
		ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66* L_58;
		L_58 = GeneratedClrTypeInfo_get_Extensions_m99A0DD9B3A9BC39C66A9545C5C70847C1090138D_inline(G_B19_0, NULL);
		G_B20_0 = L_58;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
	}

IL_013d:
	{
		ExtensionCollection_tB99C14F49DA3F67113593C9FD990613B6072E7A0* L_59 = (ExtensionCollection_tB99C14F49DA3F67113593C9FD990613B6072E7A0*)il2cpp_codegen_object_new(ExtensionCollection_tB99C14F49DA3F67113593C9FD990613B6072E7A0_il2cpp_TypeInfo_var);
		NullCheck(L_59);
		ExtensionCollection__ctor_m345C848C38C8F064508891BC2FD0E3AE6B72E1DA(L_59, G_B20_1, G_B20_0, NULL);
		NullCheck(G_B20_2);
		G_B20_2->___U3CExtensionsU3Ek__BackingField_13 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&G_B20_2->___U3CExtensionsU3Ek__BackingField_13), (void*)L_59);
		DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* L_60 = ___proto0;
		NullCheck(L_60);
		RepeatedField_1_t7E4B2149855E87DEBE33830CBE70920C8A6E52E1* L_61;
		L_61 = DescriptorProto_get_Field_m5C69AC6B1B0D580AC85EA12068D434A482DA18BA_inline(L_60, NULL);
		U3CU3Ec__DisplayClass5_0_t2A570232FA374102D5B636100BB04C68654B5CD8* L_62 = V_0;
		IndexedConverter_2_t0DDCFB08F1D74E2C7092F67B7BD0E05107B62F08* L_63 = (IndexedConverter_2_t0DDCFB08F1D74E2C7092F67B7BD0E05107B62F08*)il2cpp_codegen_object_new(IndexedConverter_2_t0DDCFB08F1D74E2C7092F67B7BD0E05107B62F08_il2cpp_TypeInfo_var);
		NullCheck(L_63);
		IndexedConverter_2__ctor_m23548E454F54B7DACDEDFD4CA70FB37C63BBB4AC(L_63, L_62, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__3_m95565C95A93EC9A54DCB78F1E5C1412696CA49D2_RuntimeMethod_var), NULL);
		RuntimeObject* L_64;
		L_64 = DescriptorUtil_ConvertAndMakeReadOnly_TisFieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_m73021BE4C490905DE83AAA9C8BF59FCEB4735A44(L_61, L_63, DescriptorUtil_ConvertAndMakeReadOnly_TisFieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_m73021BE4C490905DE83AAA9C8BF59FCEB4735A44_RuntimeMethod_var);
		__this->___fieldsInDeclarationOrder_4 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fieldsInDeclarationOrder_4), (void*)L_64);
		RuntimeObject* L_65 = __this->___fieldsInDeclarationOrder_4;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_il2cpp_TypeInfo_var);
		Func_2_tC1A88D50374165E90B663F30D638545C47ECFDAC* L_66 = ((U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_il2cpp_TypeInfo_var))->___U3CU3E9__5_4_1;
		Func_2_tC1A88D50374165E90B663F30D638545C47ECFDAC* L_67 = L_66;
		G_B21_0 = L_67;
		G_B21_1 = L_65;
		G_B21_2 = __this;
		if (L_67)
		{
			G_B22_0 = L_67;
			G_B22_1 = L_65;
			G_B22_2 = __this;
			goto IL_018a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_il2cpp_TypeInfo_var);
		U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726* L_68 = ((U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tC1A88D50374165E90B663F30D638545C47ECFDAC* L_69 = (Func_2_tC1A88D50374165E90B663F30D638545C47ECFDAC*)il2cpp_codegen_object_new(Func_2_tC1A88D50374165E90B663F30D638545C47ECFDAC_il2cpp_TypeInfo_var);
		NullCheck(L_69);
		Func_2__ctor_mCB50FD0BBFFED49F5F9E0A145ED9A91DDE2E520B(L_69, L_68, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__5_4_m44B40D77F7AACC3320EA12BE11DB754CA9D0B5D7_RuntimeMethod_var), NULL);
		Func_2_tC1A88D50374165E90B663F30D638545C47ECFDAC* L_70 = L_69;
		((U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_il2cpp_TypeInfo_var))->___U3CU3E9__5_4_1 = L_70;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_il2cpp_TypeInfo_var))->___U3CU3E9__5_4_1), (void*)L_70);
		G_B22_0 = L_70;
		G_B22_1 = G_B21_1;
		G_B22_2 = G_B21_2;
	}

IL_018a:
	{
		RuntimeObject* L_71;
		L_71 = Enumerable_OrderBy_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m64A74F5892458BD558B1F8E6ED1A07F1D308B53B(G_B22_1, G_B22_0, Enumerable_OrderBy_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m64A74F5892458BD558B1F8E6ED1A07F1D308B53B_RuntimeMethod_var);
		FieldDescriptorU5BU5D_tBD6F168D4566F082DA9EBBDC4AA3D412F2E9BF81* L_72;
		L_72 = Enumerable_ToArray_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_m070C184D2FF6F150CF8743729B3FA34414900E75(L_71, Enumerable_ToArray_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_m070C184D2FF6F150CF8743729B3FA34414900E75_RuntimeMethod_var);
		ReadOnlyCollection_1_t576A96EB67EFDB504EC4066151F3F1B55149AE2B* L_73 = (ReadOnlyCollection_1_t576A96EB67EFDB504EC4066151F3F1B55149AE2B*)il2cpp_codegen_object_new(ReadOnlyCollection_1_t576A96EB67EFDB504EC4066151F3F1B55149AE2B_il2cpp_TypeInfo_var);
		NullCheck(L_73);
		ReadOnlyCollection_1__ctor_m9CFD56BDC2BB0527D5B794B37FC216610DECBBF3(L_73, (RuntimeObject*)L_72, ReadOnlyCollection_1__ctor_m9CFD56BDC2BB0527D5B794B37FC216610DECBBF3_RuntimeMethod_var);
		NullCheck(G_B22_2);
		G_B22_2->___fieldsInNumberOrder_5 = L_73;
		Il2CppCodeGenWriteBarrier((void**)(&G_B22_2->___fieldsInNumberOrder_5), (void*)L_73);
		RuntimeObject* L_74 = __this->___fieldsInNumberOrder_5;
		il2cpp_codegen_runtime_class_init_inline(MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var);
		ReadOnlyDictionary_2_tAD61E95979D9934AF3B06DCF0866D229C964C0DF* L_75;
		L_75 = MessageDescriptor_CreateJsonFieldMap_mD09C81A7A2F2564EA4D90F69A20AD15BB5696E21(L_74, NULL);
		__this->___jsonFieldMap_6 = L_75;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jsonFieldMap_6), (void*)L_75);
		U3CU3Ec__DisplayClass5_0_t2A570232FA374102D5B636100BB04C68654B5CD8* L_76 = V_0;
		NullCheck(L_76);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_77 = L_76->___file_0;
		NullCheck(L_77);
		DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* L_78;
		L_78 = FileDescriptor_get_DescriptorPool_m2C9A3FFBC669C3DAFDD5C7DBFE51EF37094021CD_inline(L_77, NULL);
		NullCheck(L_78);
		DescriptorPool_AddSymbol_m9F1D72975649FB85CEE9B12FA92EFC6C30B49614(L_78, __this, NULL);
		FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3* L_79 = (FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3*)il2cpp_codegen_object_new(FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3_il2cpp_TypeInfo_var);
		NullCheck(L_79);
		FieldCollection__ctor_m43EAACB34F71AEE419BD80BE4D81514F9A3FB35F(L_79, __this, NULL);
		__this->___U3CFieldsU3Ek__BackingField_12 = L_79;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFieldsU3Ek__BackingField_12), (void*)L_79);
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::CreateJsonFieldMap(System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyDictionary_2_tAD61E95979D9934AF3B06DCF0866D229C964C0DF* MessageDescriptor_CreateJsonFieldMap_mD09C81A7A2F2564EA4D90F69A20AD15BB5696E21 (RuntimeObject* ___fields0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mBD4E6729CB2CD78876040FFFB6EF66E6642B2CEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m15158F9A79EA2D0686E04F916C77D923DCE592E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t31CFF5885A32B2296486F78FBD937CABF29763E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tDDBABD38601B0B3CB8FE8BC3C7192A21443B0D06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tC89C2FE0B79746F860EB87A17DDBB036B9B5CA30_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2__ctor_m6C6C746D696F91F5D5D592C67F2154901251DD05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2_tAD61E95979D9934AF3B06DCF0866D229C964C0DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t31CFF5885A32B2296486F78FBD937CABF29763E7* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* V_2 = NULL;
	{
		Dictionary_2_t31CFF5885A32B2296486F78FBD937CABF29763E7* L_0 = (Dictionary_2_t31CFF5885A32B2296486F78FBD937CABF29763E7*)il2cpp_codegen_object_new(Dictionary_2_t31CFF5885A32B2296486F78FBD937CABF29763E7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mBD4E6729CB2CD78876040FFFB6EF66E6642B2CEA(L_0, Dictionary_2__ctor_mBD4E6729CB2CD78876040FFFB6EF66E6642B2CEA_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = ___fields0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FieldDescriptor>::GetEnumerator() */, IEnumerable_1_tDDBABD38601B0B3CB8FE8BC3C7192A21443B0D06_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_0043;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0043:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0030_1;
			}

IL_000f_1:
			{
				RuntimeObject* L_5 = V_1;
				NullCheck(L_5);
				FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_6;
				L_6 = InterfaceFuncInvoker0< FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.FieldDescriptor>::get_Current() */, IEnumerator_1_tC89C2FE0B79746F860EB87A17DDBB036B9B5CA30_il2cpp_TypeInfo_var, L_5);
				V_2 = L_6;
				Dictionary_2_t31CFF5885A32B2296486F78FBD937CABF29763E7* L_7 = V_0;
				FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_8 = V_2;
				NullCheck(L_8);
				String_t* L_9;
				L_9 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String Google.Protobuf.Reflection.DescriptorBase::get_Name() */, L_8);
				FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_10 = V_2;
				NullCheck(L_7);
				Dictionary_2_set_Item_m15158F9A79EA2D0686E04F916C77D923DCE592E6(L_7, L_9, L_10, Dictionary_2_set_Item_m15158F9A79EA2D0686E04F916C77D923DCE592E6_RuntimeMethod_var);
				Dictionary_2_t31CFF5885A32B2296486F78FBD937CABF29763E7* L_11 = V_0;
				FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_12 = V_2;
				NullCheck(L_12);
				String_t* L_13;
				L_13 = FieldDescriptor_get_JsonName_m1E7529AB79BEB8C99A1318FFDA81F6F4C9E81216_inline(L_12, NULL);
				FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_14 = V_2;
				NullCheck(L_11);
				Dictionary_2_set_Item_m15158F9A79EA2D0686E04F916C77D923DCE592E6(L_11, L_13, L_14, Dictionary_2_set_Item_m15158F9A79EA2D0686E04F916C77D923DCE592E6_RuntimeMethod_var);
			}

IL_0030_1:
			{
				RuntimeObject* L_15 = V_1;
				NullCheck(L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_0044;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		Dictionary_2_t31CFF5885A32B2296486F78FBD937CABF29763E7* L_17 = V_0;
		ReadOnlyDictionary_2_tAD61E95979D9934AF3B06DCF0866D229C964C0DF* L_18 = (ReadOnlyDictionary_2_tAD61E95979D9934AF3B06DCF0866D229C964C0DF*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_tAD61E95979D9934AF3B06DCF0866D229C964C0DF_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		ReadOnlyDictionary_2__ctor_m6C6C746D696F91F5D5D592C67F2154901251DD05(L_18, L_17, ReadOnlyDictionary_2__ctor_m6C6C746D696F91F5D5D592C67F2154901251DD05_RuntimeMethod_var);
		return L_18;
	}
}
// System.String Google.Protobuf.Reflection.MessageDescriptor::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MessageDescriptor_get_Name_m278060B190E17339607EAE1C15C0C92CA6405F08 (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	{
		DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* L_0;
		L_0 = MessageDescriptor_get_Proto_mE5640E03D5D2191198B0B47401F194D9A1AFD59B_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = DescriptorProto_get_Name_mB58CFB6E06E100F9A1DDEC369CDB332126160AFB(L_0, NULL);
		return L_1;
	}
}
// System.Collections.Generic.IReadOnlyList`1<Google.Protobuf.Reflection.DescriptorBase> Google.Protobuf.Reflection.MessageDescriptor::GetNestedDescriptorListForField(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_GetNestedDescriptorListForField_mF3E923453539B240A15970A792EBBD98ABFCB43E (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, int32_t ___fieldNumber0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_tE8529F2628C6B785ECC52D9CB4B1136C1013AE13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___fieldNumber0;
		switch (((int32_t)il2cpp_codegen_subtract(L_0, 2)))
		{
			case 0:
			{
				goto IL_0016;
			}
			case 1:
			{
				goto IL_0022;
			}
			case 2:
			{
				goto IL_002e;
			}
		}
	}
	{
		goto IL_003a;
	}

IL_0016:
	{
		RuntimeObject* L_1 = __this->___fieldsInDeclarationOrder_4;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IReadOnlyList_1_tE8529F2628C6B785ECC52D9CB4B1136C1013AE13_il2cpp_TypeInfo_var));
	}

IL_0022:
	{
		RuntimeObject* L_2;
		L_2 = MessageDescriptor_get_NestedTypes_m843BBF2AD3939A0AD39AE080A7E9AE6942FBF1A8_inline(__this, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_2, IReadOnlyList_1_tE8529F2628C6B785ECC52D9CB4B1136C1013AE13_il2cpp_TypeInfo_var));
	}

IL_002e:
	{
		RuntimeObject* L_3;
		L_3 = MessageDescriptor_get_EnumTypes_mCAC627C3D64CB7E3A1092FCDC6406C6DC52B70D8_inline(__this, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_3, IReadOnlyList_1_tE8529F2628C6B785ECC52D9CB4B1136C1013AE13_il2cpp_TypeInfo_var));
	}

IL_003a:
	{
		return (RuntimeObject*)NULL;
	}
}
// Google.Protobuf.Reflection.DescriptorProto Google.Protobuf.Reflection.MessageDescriptor::get_Proto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* MessageDescriptor_get_Proto_mE5640E03D5D2191198B0B47401F194D9A1AFD59B (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	{
		DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* L_0 = __this->___U3CProtoU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Boolean Google.Protobuf.Reflection.MessageDescriptor::IsExtensionsInitialized(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MessageDescriptor_IsExtensionsInitialized_m6A9EB055F1B29660AFFBAEA5E707BBE09BC5BD2D (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_get_Count_mD87395300020C8F70282FF01C81CA48400FBF7D0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* L_0;
		L_0 = MessageDescriptor_get_Proto_mE5640E03D5D2191198B0B47401F194D9A1AFD59B_inline(__this, NULL);
		NullCheck(L_0);
		RepeatedField_1_t0E899A6F37E8797AEF754CE965684FD651FC2788* L_1;
		L_1 = DescriptorProto_get_ExtensionRange_mFB6530B27992B6529AC1899E670EC90D8B42B6B8_inline(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = RepeatedField_1_get_Count_mD87395300020C8F70282FF01C81CA48400FBF7D0_inline(L_1, RepeatedField_1_get_Count_mD87395300020C8F70282FF01C81CA48400FBF7D0_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB* L_3 = __this->___extensionSetIsInitialized_7;
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		Type_t* L_4;
		L_4 = MessageDescriptor_get_ClrType_mE5BB83F9A779B01E975658DFE4F51873F6745656_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB* L_5;
		L_5 = ReflectionUtil_CreateIsInitializedCaller_m1FE693B57BD570BC79A60981E25D7D462EEEA6AD(L_4, NULL);
		__this->___extensionSetIsInitialized_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___extensionSetIsInitialized_7), (void*)L_5);
	}

IL_002d:
	{
		Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB* L_6 = __this->___extensionSetIsInitialized_7;
		RuntimeObject* L_7 = ___message0;
		NullCheck(L_6);
		bool L_8;
		L_8 = Func_2_Invoke_m5C27E0BEEBC98CF7C0CD49A54934D4751F6FB718_inline(L_6, L_7, NULL);
		return L_8;
	}
}
// System.Type Google.Protobuf.Reflection.MessageDescriptor::get_ClrType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MessageDescriptor_get_ClrType_mE5BB83F9A779B01E975658DFE4F51873F6745656 (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CClrTypeU3Ek__BackingField_9;
		return L_0;
	}
}
// Google.Protobuf.MessageParser Google.Protobuf.Reflection.MessageDescriptor::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* MessageDescriptor_get_Parser_m14CB9BDD6595DEB48D7B860039EDFA121EB076AE (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	{
		MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* L_0 = __this->___U3CParserU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Boolean Google.Protobuf.Reflection.MessageDescriptor::get_IsWellKnownType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MessageDescriptor_get_IsWellKnownType_m95783C76BB8A87930649C5153AF19EE0718BFC08 (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral242827F003BDCBB538091F25071ADDB721DF95BE);
		s_Il2CppMethodInitialized = true;
	}
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0;
		L_0 = DescriptorBase_get_File_m4ADE18F8259D6F6DEC90FEEDCDCFAD1101AAE7BF_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = FileDescriptor_get_Package_m23DC9E5095D1DD5F7CB43E67337C8A4B4F8AC41F(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral242827F003BDCBB538091F25071ADDB721DF95BE, NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_3 = ((MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_StaticFields*)il2cpp_codegen_static_fields_for(MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var))->___WellKnownTypeNames_3;
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_4;
		L_4 = DescriptorBase_get_File_m4ADE18F8259D6F6DEC90FEEDCDCFAD1101AAE7BF_inline(__this, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = FileDescriptor_get_Name_m81861DDFBC6C17CD275F3374FC02268C0F376DF1(L_4, NULL);
		NullCheck(L_3);
		bool L_6;
		L_6 = HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853(L_3, L_5, HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		return L_6;
	}

IL_002d:
	{
		return (bool)0;
	}
}
// System.Boolean Google.Protobuf.Reflection.MessageDescriptor::get_IsWrapperType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MessageDescriptor_get_IsWrapperType_m88B9F67DEB6A63910B0A67376D2D23D533D91735 (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral242827F003BDCBB538091F25071ADDB721DF95BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA74B955A01CCCA134BC24725EF08A248AA7C69AC);
		s_Il2CppMethodInitialized = true;
	}
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0;
		L_0 = DescriptorBase_get_File_m4ADE18F8259D6F6DEC90FEEDCDCFAD1101AAE7BF_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = FileDescriptor_get_Package_m23DC9E5095D1DD5F7CB43E67337C8A4B4F8AC41F(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral242827F003BDCBB538091F25071ADDB721DF95BE, NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_3;
		L_3 = DescriptorBase_get_File_m4ADE18F8259D6F6DEC90FEEDCDCFAD1101AAE7BF_inline(__this, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = FileDescriptor_get_Name_m81861DDFBC6C17CD275F3374FC02268C0F376DF1(L_3, NULL);
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteralA74B955A01CCCA134BC24725EF08A248AA7C69AC, NULL);
		return L_5;
	}

IL_002d:
	{
		return (bool)0;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MessageDescriptor::get_ContainingType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* MessageDescriptor_get_ContainingType_m7DDB31EADA22B44AB033C51635D5B9C3E9C1841E (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0 = __this->___U3CContainingTypeU3Ek__BackingField_11;
		return L_0;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor/FieldCollection Google.Protobuf.Reflection.MessageDescriptor::get_Fields()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3* MessageDescriptor_get_Fields_mA5EE82B81DE42BB3DAC85301639AD91C9AB94503 (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	{
		FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3* L_0 = __this->___U3CFieldsU3Ek__BackingField_12;
		return L_0;
	}
}
// Google.Protobuf.Reflection.ExtensionCollection Google.Protobuf.Reflection.MessageDescriptor::get_Extensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExtensionCollection_tB99C14F49DA3F67113593C9FD990613B6072E7A0* MessageDescriptor_get_Extensions_m512F337245F65FA7AA8CC4507D7C5B2FF0963DAA (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	{
		ExtensionCollection_tB99C14F49DA3F67113593C9FD990613B6072E7A0* L_0 = __this->___U3CExtensionsU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.MessageDescriptor::get_NestedTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_NestedTypes_m843BBF2AD3939A0AD39AE080A7E9AE6942FBF1A8 (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CNestedTypesU3Ek__BackingField_14;
		return L_0;
	}
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor> Google.Protobuf.Reflection.MessageDescriptor::get_EnumTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_EnumTypes_mCAC627C3D64CB7E3A1092FCDC6406C6DC52B70D8 (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CEnumTypesU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.OneofDescriptor> Google.Protobuf.Reflection.MessageDescriptor::get_Oneofs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_Oneofs_m4B21398E1D746B08DD3874635EB9B8BAF81F4E38 (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3COneofsU3Ek__BackingField_16;
		return L_0;
	}
}
// System.Int32 Google.Protobuf.Reflection.MessageDescriptor::get_RealOneofCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MessageDescriptor_get_RealOneofCount_mF6F9D73F170EEFA316765313E84FF6A1F0C241D6 (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CRealOneofCountU3Ek__BackingField_17;
		return L_0;
	}
}
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.MessageDescriptor::FindFieldByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* MessageDescriptor_FindFieldByName_m5C4B4A4ECD41D310E72889BEF59BD89A1CC98DA9 (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptorPool_FindSymbol_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_m2B4EFCB9D5CE363F133745A3FB23689CEF10E9AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0;
		L_0 = DescriptorBase_get_File_m4ADE18F8259D6F6DEC90FEEDCDCFAD1101AAE7BF_inline(__this, NULL);
		NullCheck(L_0);
		DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* L_1;
		L_1 = FileDescriptor_get_DescriptorPool_m2C9A3FFBC669C3DAFDD5C7DBFE51EF37094021CD_inline(L_0, NULL);
		String_t* L_2;
		L_2 = DescriptorBase_get_FullName_m09E17EE9C9184A528B154958832FDA2977D8B32D_inline(__this, NULL);
		String_t* L_3 = ___name0;
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_2, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_3, NULL);
		NullCheck(L_1);
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_5;
		L_5 = DescriptorPool_FindSymbol_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_m2B4EFCB9D5CE363F133745A3FB23689CEF10E9AF(L_1, L_4, DescriptorPool_FindSymbol_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_m2B4EFCB9D5CE363F133745A3FB23689CEF10E9AF_RuntimeMethod_var);
		return L_5;
	}
}
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.MessageDescriptor::FindFieldByNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* MessageDescriptor_FindFieldByNumber_m1D65624DECB12DDDD354206EB1B0BBE4944651DC (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, int32_t ___number0, const RuntimeMethod* method) 
{
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0;
		L_0 = DescriptorBase_get_File_m4ADE18F8259D6F6DEC90FEEDCDCFAD1101AAE7BF_inline(__this, NULL);
		NullCheck(L_0);
		DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* L_1;
		L_1 = FileDescriptor_get_DescriptorPool_m2C9A3FFBC669C3DAFDD5C7DBFE51EF37094021CD_inline(L_0, NULL);
		int32_t L_2 = ___number0;
		NullCheck(L_1);
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_3;
		L_3 = DescriptorPool_FindFieldByNumber_m3306450EAB967767481F0E183ACF0914C749906E(L_1, __this, L_2, NULL);
		return L_3;
	}
}
// Google.Protobuf.Reflection.CustomOptions Google.Protobuf.Reflection.MessageDescriptor::get_CustomOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* MessageDescriptor_get_CustomOptions_m20D1440E9E082CFC752D6A4160EF307AF41A3D4C (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionSet_1_get_ValuesByNumber_m4CA89D90A6702AC7AD00EA5B169C136774EB0484_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageOptions_t21D90698973F4D57E228B9E596F8E3E8CC429B7A* G_B2_0 = NULL;
	MessageOptions_t21D90698973F4D57E228B9E596F8E3E8CC429B7A* G_B1_0 = NULL;
	Dictionary_2_t7D99B8C24B0BFFDE97F3C514C8E7AA5FA84C046D* G_B5_0 = NULL;
	ExtensionSet_1_tF304BC81EFCE3C2142ACECC1A1E2B5FD4BD89D09* G_B4_0 = NULL;
	ExtensionSet_1_tF304BC81EFCE3C2142ACECC1A1E2B5FD4BD89D09* G_B3_0 = NULL;
	{
		DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* L_0;
		L_0 = MessageDescriptor_get_Proto_mE5640E03D5D2191198B0B47401F194D9A1AFD59B_inline(__this, NULL);
		NullCheck(L_0);
		MessageOptions_t21D90698973F4D57E228B9E596F8E3E8CC429B7A* L_1;
		L_1 = DescriptorProto_get_Options_mFEB4E68AE42F39354016ECEA1350E11A25E7314C_inline(L_0, NULL);
		MessageOptions_t21D90698973F4D57E228B9E596F8E3E8CC429B7A* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		G_B5_0 = ((Dictionary_2_t7D99B8C24B0BFFDE97F3C514C8E7AA5FA84C046D*)(NULL));
		goto IL_0023;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		ExtensionSet_1_tF304BC81EFCE3C2142ACECC1A1E2B5FD4BD89D09* L_3 = G_B2_0->____extensions_2;
		ExtensionSet_1_tF304BC81EFCE3C2142ACECC1A1E2B5FD4BD89D09* L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_001e;
		}
	}
	{
		G_B5_0 = ((Dictionary_2_t7D99B8C24B0BFFDE97F3C514C8E7AA5FA84C046D*)(NULL));
		goto IL_0023;
	}

IL_001e:
	{
		NullCheck(G_B4_0);
		Dictionary_2_t7D99B8C24B0BFFDE97F3C514C8E7AA5FA84C046D* L_5;
		L_5 = ExtensionSet_1_get_ValuesByNumber_m4CA89D90A6702AC7AD00EA5B169C136774EB0484_inline(G_B4_0, ExtensionSet_1_get_ValuesByNumber_m4CA89D90A6702AC7AD00EA5B169C136774EB0484_RuntimeMethod_var);
		G_B5_0 = L_5;
	}

IL_0023:
	{
		CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* L_6 = (CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C*)il2cpp_codegen_object_new(CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		CustomOptions__ctor_m1210A6A5726546C7862286CD9BADFF187FF53B11(L_6, G_B5_0, NULL);
		return L_6;
	}
}
// Google.Protobuf.Reflection.MessageOptions Google.Protobuf.Reflection.MessageDescriptor::GetOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageOptions_t21D90698973F4D57E228B9E596F8E3E8CC429B7A* MessageDescriptor_GetOptions_m7D7A8647275968B15250E53C039E1FCE7D0D038E (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	MessageOptions_t21D90698973F4D57E228B9E596F8E3E8CC429B7A* G_B2_0 = NULL;
	MessageOptions_t21D90698973F4D57E228B9E596F8E3E8CC429B7A* G_B1_0 = NULL;
	{
		DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* L_0;
		L_0 = MessageDescriptor_get_Proto_mE5640E03D5D2191198B0B47401F194D9A1AFD59B_inline(__this, NULL);
		NullCheck(L_0);
		MessageOptions_t21D90698973F4D57E228B9E596F8E3E8CC429B7A* L_1;
		L_1 = DescriptorProto_get_Options_mFEB4E68AE42F39354016ECEA1350E11A25E7314C_inline(L_0, NULL);
		MessageOptions_t21D90698973F4D57E228B9E596F8E3E8CC429B7A* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
	}
	{
		return (MessageOptions_t21D90698973F4D57E228B9E596F8E3E8CC429B7A*)NULL;
	}

IL_0011:
	{
		NullCheck(G_B2_0);
		MessageOptions_t21D90698973F4D57E228B9E596F8E3E8CC429B7A* L_3;
		L_3 = MessageOptions_Clone_m163082FBB0F9406985C3C62BF385DF59161D5346(G_B2_0, NULL);
		return L_3;
	}
}
// System.Void Google.Protobuf.Reflection.MessageDescriptor::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDescriptor_CrossLink_mCEDFF8C6BDA2083BA94CB583CEE6AD31E6294C20 (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t4CD5EF9BE7925478517917504140E652CD2D743B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t68F5A27EE65409E27999177803534A3D9708E03B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tDDBABD38601B0B3CB8FE8BC3C7192A21443B0D06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t3B98BB7867D2E52A76815600B0C3D9EB17791D09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t6644B6D12698554DCC2B0033A9F63423A9DCCE04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tC89C2FE0B79746F860EB87A17DDBB036B9B5CA30_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = MessageDescriptor_get_NestedTypes_m843BBF2AD3939A0AD39AE080A7E9AE6942FBF1A8_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MessageDescriptor>::GetEnumerator() */, IEnumerable_1_t4CD5EF9BE7925478517917504140E652CD2D743B_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_002c;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_002c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0019_1;
			}

IL_000e_1:
			{
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_5;
				L_5 = InterfaceFuncInvoker0< MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Current() */, IEnumerator_1_t3B98BB7867D2E52A76815600B0C3D9EB17791D09_il2cpp_TypeInfo_var, L_4);
				NullCheck(L_5);
				MessageDescriptor_CrossLink_mCEDFF8C6BDA2083BA94CB583CEE6AD31E6294C20(L_5, NULL);
			}

IL_0019_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				bool L_7;
				L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_6);
				if (L_7)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_002d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002d:
	{
		RuntimeObject* L_8 = __this->___fieldsInDeclarationOrder_4;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FieldDescriptor>::GetEnumerator() */, IEnumerable_1_tDDBABD38601B0B3CB8FE8BC3C7192A21443B0D06_il2cpp_TypeInfo_var, L_8);
		V_1 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0050:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_10 = V_1;
					if (!L_10)
					{
						goto IL_0059;
					}
				}
				{
					RuntimeObject* L_11 = V_1;
					NullCheck(L_11);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
				}

IL_0059:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0046_1;
			}

IL_003b_1:
			{
				RuntimeObject* L_12 = V_1;
				NullCheck(L_12);
				FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_13;
				L_13 = InterfaceFuncInvoker0< FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.FieldDescriptor>::get_Current() */, IEnumerator_1_tC89C2FE0B79746F860EB87A17DDBB036B9B5CA30_il2cpp_TypeInfo_var, L_12);
				NullCheck(L_13);
				FieldDescriptor_CrossLink_m8EDBF05BB7268AE1CBE65F796C5242058DBD8C1D(L_13, NULL);
			}

IL_0046_1:
			{
				RuntimeObject* L_14 = V_1;
				NullCheck(L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_003b_1;
				}
			}
			{
				goto IL_005a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005a:
	{
		RuntimeObject* L_16;
		L_16 = MessageDescriptor_get_Oneofs_m4B21398E1D746B08DD3874635EB9B8BAF81F4E38_inline(__this, NULL);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.OneofDescriptor>::GetEnumerator() */, IEnumerable_1_t68F5A27EE65409E27999177803534A3D9708E03B_il2cpp_TypeInfo_var, L_16);
		V_2 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007d:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_18 = V_2;
					if (!L_18)
					{
						goto IL_0086;
					}
				}
				{
					RuntimeObject* L_19 = V_2;
					NullCheck(L_19);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_19);
				}

IL_0086:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0073_1;
			}

IL_0068_1:
			{
				RuntimeObject* L_20 = V_2;
				NullCheck(L_20);
				OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* L_21;
				L_21 = InterfaceFuncInvoker0< OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.OneofDescriptor>::get_Current() */, IEnumerator_1_t6644B6D12698554DCC2B0033A9F63423A9DCCE04_il2cpp_TypeInfo_var, L_20);
				NullCheck(L_21);
				OneofDescriptor_CrossLink_mA8C38E8741F9A1DF651EB74C3B05FFC67B9CE196(L_21, NULL);
			}

IL_0073_1:
			{
				RuntimeObject* L_22 = V_2;
				NullCheck(L_22);
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_0068_1;
				}
			}
			{
				goto IL_0087;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0087:
	{
		ExtensionCollection_tB99C14F49DA3F67113593C9FD990613B6072E7A0* L_24;
		L_24 = MessageDescriptor_get_Extensions_m512F337245F65FA7AA8CC4507D7C5B2FF0963DAA_inline(__this, NULL);
		NullCheck(L_24);
		ExtensionCollection_CrossLink_m285AC1F36A71D36A45C57456A248607AE50B2B1C(L_24, NULL);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.MessageDescriptor::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDescriptor__cctor_mE24D77F0E8F0301413A8F2899C3C3CA2360AB8E9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2417EEAF8227FB98545F6C2ACA9B3FBC2C4EEF90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F55E7E43CB2A70586349A2527BA34E5C72A498B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E88D3145087F1B0073380D7BAB6F4766F01F3A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64EB2ACDA107A2EAFDE67F4CC2CC898B789613F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FB20A0F1B1FDAAAA1A739E2CAFF14897DF6C793);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82183A23D174E9AEB50156CB7C2C0FF0773376F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86B2D324A1CE45FD4C4F29A23FADDD09479C4A78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F5ABC7336FC408C1B2A29784C0E0AD17174CBB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA74B955A01CCCA134BC24725EF08A248AA7C69AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF89EBB3FB7B1E50D0240AC71C6748BC7640D332C);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_0 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)il2cpp_codegen_object_new(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03(L_0, HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_1 = L_0;
		NullCheck(L_1);
		bool L_2;
		L_2 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_1, _stringLiteral9F5ABC7336FC408C1B2A29784C0E0AD17174CBB3, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_3 = L_1;
		NullCheck(L_3);
		bool L_4;
		L_4 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_3, _stringLiteral6FB20A0F1B1FDAAAA1A739E2CAFF14897DF6C793, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_5 = L_3;
		NullCheck(L_5);
		bool L_6;
		L_6 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_5, _stringLiteral3F55E7E43CB2A70586349A2527BA34E5C72A498B, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_7 = L_5;
		NullCheck(L_7);
		bool L_8;
		L_8 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_7, _stringLiteral2417EEAF8227FB98545F6C2ACA9B3FBC2C4EEF90, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_9 = L_7;
		NullCheck(L_9);
		bool L_10;
		L_10 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_9, _stringLiteralA74B955A01CCCA134BC24725EF08A248AA7C69AC, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_11 = L_9;
		NullCheck(L_11);
		bool L_12;
		L_12 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_11, _stringLiteral4E88D3145087F1B0073380D7BAB6F4766F01F3A3, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_13 = L_11;
		NullCheck(L_13);
		bool L_14;
		L_14 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_13, _stringLiteralF89EBB3FB7B1E50D0240AC71C6748BC7640D332C, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_15 = L_13;
		NullCheck(L_15);
		bool L_16;
		L_16 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_15, _stringLiteral64EB2ACDA107A2EAFDE67F4CC2CC898B789613F4, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_17 = L_15;
		NullCheck(L_17);
		bool L_18;
		L_18 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_17, _stringLiteral82183A23D174E9AEB50156CB7C2C0FF0773376F3, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_19 = L_17;
		NullCheck(L_19);
		bool L_20;
		L_20 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_19, _stringLiteral86B2D324A1CE45FD4C4F29A23FADDD09479C4A78, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		((MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_StaticFields*)il2cpp_codegen_static_fields_for(MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var))->___WellKnownTypeNames_3 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_StaticFields*)il2cpp_codegen_static_fields_for(MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var))->___WellKnownTypeNames_3), (void*)L_19);
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
// System.Void Google.Protobuf.Reflection.MessageDescriptor/FieldCollection::.ctor(Google.Protobuf.Reflection.MessageDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldCollection__ctor_m43EAACB34F71AEE419BD80BE4D81514F9A3FB35F (FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3* __this, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___messageDescriptor0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0 = ___messageDescriptor0;
		__this->___messageDescriptor_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___messageDescriptor_0), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor/FieldCollection::InDeclarationOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FieldCollection_InDeclarationOrder_m51C3D79E9FE57BCD482DFF7ADE94555A2AA23FD7 (FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3* __this, const RuntimeMethod* method) 
{
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0 = __this->___messageDescriptor_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___fieldsInDeclarationOrder_4;
		return L_1;
	}
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor/FieldCollection::InFieldNumberOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FieldCollection_InFieldNumberOrder_m709086C71CAAB69D3C4E19F1CD2D746040E2FEE4 (FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3* __this, const RuntimeMethod* method) 
{
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0 = __this->___messageDescriptor_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___fieldsInNumberOrder_5;
		return L_1;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor/FieldCollection::ByJsonName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FieldCollection_ByJsonName_mD724E6F366BA1F6935086CE75B98F0CA5FA39C68 (FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3* __this, const RuntimeMethod* method) 
{
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0 = __this->___messageDescriptor_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___jsonFieldMap_6;
		return L_1;
	}
}
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.MessageDescriptor/FieldCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* FieldCollection_get_Item_m052B310D1DD599FD9B73016EA71F407461C87799 (FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3* __this, int32_t ___number0, const RuntimeMethod* method) 
{
	FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* G_B2_0 = NULL;
	FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* G_B1_0 = NULL;
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0 = __this->___messageDescriptor_0;
		int32_t L_1 = ___number0;
		NullCheck(L_0);
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_2;
		L_2 = MessageDescriptor_FindFieldByNumber_m1D65624DECB12DDDD354206EB1B0BBE4944651DC(L_0, L_1, NULL);
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_001a;
		}
	}
	{
		KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* L_4 = (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB7012EBD7A52FFE2177DD7A499A4226405016ACB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FieldCollection_get_Item_m052B310D1DD599FD9B73016EA71F407461C87799_RuntimeMethod_var)));
	}

IL_001a:
	{
		return G_B2_0;
	}
}
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.MessageDescriptor/FieldCollection::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* FieldCollection_get_Item_mAB58D7A6EBCB6CC402484347DEA6DAB1EAD2D9BE (FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* G_B2_0 = NULL;
	FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* G_B1_0 = NULL;
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0 = __this->___messageDescriptor_0;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_2;
		L_2 = MessageDescriptor_FindFieldByName_m5C4B4A4ECD41D310E72889BEF59BD89A1CC98DA9(L_0, L_1, NULL);
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_001a;
		}
	}
	{
		KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* L_4 = (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA9233D8C418C04829410724511B59AEC0EF627BA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FieldCollection_get_Item_mAB58D7A6EBCB6CC402484347DEA6DAB1EAD2D9BE_RuntimeMethod_var)));
	}

IL_001a:
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
// System.Void Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mBBAA127F0B03E643A302434611A6690923816474 (U3CU3Ec__DisplayClass5_0_t2A570232FA374102D5B636100BB04C68654B5CD8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Google.Protobuf.Reflection.OneofDescriptor Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass5_0::<.ctor>b__0(Google.Protobuf.Reflection.OneofDescriptorProto,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__0_m1E5B298E03F36F4A60568E7F7E9D433315EF4563 (U3CU3Ec__DisplayClass5_0_t2A570232FA374102D5B636100BB04C68654B5CD8* __this, OneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A* ___oneof0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* G_B2_2 = NULL;
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* G_B2_3 = NULL;
	OneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A* G_B2_4 = NULL;
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* G_B1_2 = NULL;
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* G_B1_3 = NULL;
	OneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A* G_B1_4 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* G_B3_2 = NULL;
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* G_B3_3 = NULL;
	OneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A* G_B3_4 = NULL;
	{
		OneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A* L_0 = ___oneof0;
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_1 = __this->___file_0;
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_2 = __this->___U3CU3E4__this_1;
		int32_t L_3 = ___index1;
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_4 = __this->___generatedCodeInfo_2;
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_5 = L_4;
		G_B1_0 = L_5;
		G_B1_1 = L_3;
		G_B1_2 = L_2;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = L_3;
			G_B2_2 = L_2;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_001b;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		G_B3_4 = G_B1_4;
		goto IL_0022;
	}

IL_001b:
	{
		NullCheck(G_B2_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6;
		L_6 = GeneratedClrTypeInfo_get_OneofNames_mEB47A698EDAC7237464F2AD15643BA0E43A5B0D6_inline(G_B2_0, NULL);
		int32_t L_7 = ___index1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B3_0 = L_9;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
		G_B3_4 = G_B2_4;
	}

IL_0022:
	{
		OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* L_10 = (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC*)il2cpp_codegen_object_new(OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		OneofDescriptor__ctor_m1DF6BC68AE05031163B8774780CA2B5856545429(L_10, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		return L_10;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass5_0::<.ctor>b__1(Google.Protobuf.Reflection.DescriptorProto,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__1_m9E7873AE7FB909F605535561F3B432C18006596B (U3CU3Ec__DisplayClass5_0_t2A570232FA374102D5B636100BB04C68654B5CD8* __this, DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* ___type0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* G_B2_2 = NULL;
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* G_B2_3 = NULL;
	DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* G_B2_4 = NULL;
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* G_B1_2 = NULL;
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* G_B1_3 = NULL;
	DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* G_B1_4 = NULL;
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* G_B3_2 = NULL;
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* G_B3_3 = NULL;
	DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* G_B3_4 = NULL;
	{
		DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* L_0 = ___type0;
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_1 = __this->___file_0;
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_2 = __this->___U3CU3E4__this_1;
		int32_t L_3 = ___index1;
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_4 = __this->___generatedCodeInfo_2;
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_5 = L_4;
		G_B1_0 = L_5;
		G_B1_1 = L_3;
		G_B1_2 = L_2;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = L_3;
			G_B2_2 = L_2;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_001b;
		}
	}
	{
		G_B3_0 = ((GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		G_B3_4 = G_B1_4;
		goto IL_0022;
	}

IL_001b:
	{
		NullCheck(G_B2_0);
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_6;
		L_6 = GeneratedClrTypeInfo_get_NestedTypes_m8AED7D6560730E69176023048554B849007EAAA0_inline(G_B2_0, NULL);
		int32_t L_7 = ___index1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B3_0 = L_9;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
		G_B3_4 = G_B2_4;
	}

IL_0022:
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_10 = (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*)il2cpp_codegen_object_new(MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		MessageDescriptor__ctor_m70A471C5C93507DB23E607F2D0413B66C784DC78(L_10, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		return L_10;
	}
}
// Google.Protobuf.Reflection.EnumDescriptor Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass5_0::<.ctor>b__2(Google.Protobuf.Reflection.EnumDescriptorProto,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__2_mED870A3FBC82BCB62913B5DEC7C7DA87406A592B (U3CU3Ec__DisplayClass5_0_t2A570232FA374102D5B636100BB04C68654B5CD8* __this, EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344* ___type0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* G_B2_2 = NULL;
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* G_B2_3 = NULL;
	EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344* G_B2_4 = NULL;
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* G_B1_2 = NULL;
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* G_B1_3 = NULL;
	EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344* G_B1_4 = NULL;
	Type_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* G_B3_2 = NULL;
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* G_B3_3 = NULL;
	EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344* G_B3_4 = NULL;
	{
		EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344* L_0 = ___type0;
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_1 = __this->___file_0;
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_2 = __this->___U3CU3E4__this_1;
		int32_t L_3 = ___index1;
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_4 = __this->___generatedCodeInfo_2;
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_5 = L_4;
		G_B1_0 = L_5;
		G_B1_1 = L_3;
		G_B1_2 = L_2;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = L_3;
			G_B2_2 = L_2;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_001b;
		}
	}
	{
		G_B3_0 = ((Type_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		G_B3_4 = G_B1_4;
		goto IL_0022;
	}

IL_001b:
	{
		NullCheck(G_B2_0);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6;
		L_6 = GeneratedClrTypeInfo_get_NestedEnums_mD3FF2C77CA209172AA17731B31FA24968522A1CC_inline(G_B2_0, NULL);
		int32_t L_7 = ___index1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Type_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B3_0 = L_9;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
		G_B3_4 = G_B2_4;
	}

IL_0022:
	{
		EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* L_10 = (EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E*)il2cpp_codegen_object_new(EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		EnumDescriptor__ctor_m5DF396F94AFB86FE46AC0D53FDCBAE16DC910FBE(L_10, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		return L_10;
	}
}
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass5_0::<.ctor>b__3(Google.Protobuf.Reflection.FieldDescriptorProto,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* U3CU3Ec__DisplayClass5_0_U3C_ctorU3Eb__3_m95565C95A93EC9A54DCB78F1E5C1412696CA49D2 (U3CU3Ec__DisplayClass5_0_t2A570232FA374102D5B636100BB04C68654B5CD8* __this, FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* ___field0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* G_B2_2 = NULL;
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* G_B2_3 = NULL;
	FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* G_B2_4 = NULL;
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* G_B1_2 = NULL;
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* G_B1_3 = NULL;
	FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* G_B1_4 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* G_B3_2 = NULL;
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* G_B3_3 = NULL;
	FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* G_B3_4 = NULL;
	{
		FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* L_0 = ___field0;
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_1 = __this->___file_0;
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_2 = __this->___U3CU3E4__this_1;
		int32_t L_3 = ___index1;
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_4 = __this->___generatedCodeInfo_2;
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_5 = L_4;
		G_B1_0 = L_5;
		G_B1_1 = L_3;
		G_B1_2 = L_2;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = L_3;
			G_B2_2 = L_2;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_001b;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		G_B3_4 = G_B1_4;
		goto IL_0022;
	}

IL_001b:
	{
		NullCheck(G_B2_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6;
		L_6 = GeneratedClrTypeInfo_get_PropertyNames_m90234348C0C94D290A5B78AE50B651C4CDD8E302_inline(G_B2_0, NULL);
		int32_t L_7 = ___index1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B3_0 = L_9;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
		G_B3_4 = G_B2_4;
	}

IL_0022:
	{
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_10 = (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E*)il2cpp_codegen_object_new(FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		FieldDescriptor__ctor_m74092D5AB00D6D4A81C2BA5FE7BEA941E2696A50(L_10, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, (Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A*)NULL, NULL);
		return L_10;
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
// System.Void Google.Protobuf.Reflection.MessageDescriptor/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA984E317AC30BD9C2B5CD82C0AFE9A428EA34C9B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726* L_0 = (U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726*)il2cpp_codegen_object_new(U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mBABF78AE22082EE0CDD0BA1D06892DC8D6CB8B00(L_0, NULL);
		((U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.MessageDescriptor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBABF78AE22082EE0CDD0BA1D06892DC8D6CB8B00 (U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 Google.Protobuf.Reflection.MessageDescriptor/<>c::<.ctor>b__5_4(Google.Protobuf.Reflection.FieldDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_ctorU3Eb__5_4_m44B40D77F7AACC3320EA12BE11DB754CA9D0B5D7 (U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726* __this, FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* ___field0, const RuntimeMethod* method) 
{
	{
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_0 = ___field0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = FieldDescriptor_get_FieldNumber_m92E0DC0243FE36CA28859096A93B82BAE6927452(L_0, NULL);
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
// Google.Protobuf.Reflection.ServiceDescriptor Google.Protobuf.Reflection.MethodDescriptor::get_Service()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* MethodDescriptor_get_Service_m146888F6EED419F95BACDDD683417299D2E44950 (MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* __this, const RuntimeMethod* method) 
{
	{
		ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* L_0 = __this->___service_4;
		return L_0;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MethodDescriptor::get_InputType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* MethodDescriptor_get_InputType_mEE56436A8E88DC95F19763F7D99282143F273E73 (MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* __this, const RuntimeMethod* method) 
{
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0 = __this->___inputType_5;
		return L_0;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MethodDescriptor::get_OutputType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* MethodDescriptor_get_OutputType_mA6A40FD1CD8904986BA9E12311FD113F76B7983A (MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* __this, const RuntimeMethod* method) 
{
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0 = __this->___outputType_6;
		return L_0;
	}
}
// System.Boolean Google.Protobuf.Reflection.MethodDescriptor::get_IsClientStreaming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodDescriptor_get_IsClientStreaming_m6043817C2E60C4DC2A1C3ECE4C802B46F174E190 (MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* __this, const RuntimeMethod* method) 
{
	{
		MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* L_0 = __this->___proto_3;
		NullCheck(L_0);
		bool L_1;
		L_1 = MethodDescriptorProto_get_ClientStreaming_m2C6A7809C34840D7F55088937F25FEE7197409F3(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Google.Protobuf.Reflection.MethodDescriptor::get_IsServerStreaming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodDescriptor_get_IsServerStreaming_mD08E65D80E8E7A1541B8A372F36BA084429D4897 (MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* __this, const RuntimeMethod* method) 
{
	{
		MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* L_0 = __this->___proto_3;
		NullCheck(L_0);
		bool L_1;
		L_1 = MethodDescriptorProto_get_ServerStreaming_mFC81302136E94D4B06942C2FA32532C0731D67C3(L_0, NULL);
		return L_1;
	}
}
// Google.Protobuf.Reflection.CustomOptions Google.Protobuf.Reflection.MethodDescriptor::get_CustomOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* MethodDescriptor_get_CustomOptions_mD2670A669863B4E0045CBD439129F9DA9972270E (MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionSet_1_get_ValuesByNumber_m39A446AA28C0F70EA7A7D2E25E39D1B76EDB896A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodOptions_t231FE38BD5312DB18559F1566A090E97A3AF6DB7* G_B2_0 = NULL;
	MethodOptions_t231FE38BD5312DB18559F1566A090E97A3AF6DB7* G_B1_0 = NULL;
	Dictionary_2_t7D99B8C24B0BFFDE97F3C514C8E7AA5FA84C046D* G_B5_0 = NULL;
	ExtensionSet_1_t7852FD32A1BA06E9EC2E3A0A4FD20D1ECE125227* G_B4_0 = NULL;
	ExtensionSet_1_t7852FD32A1BA06E9EC2E3A0A4FD20D1ECE125227* G_B3_0 = NULL;
	{
		MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* L_0;
		L_0 = MethodDescriptor_get_Proto_m08BA64B9570CED9E3E993E1F8B6997395C3649F6_inline(__this, NULL);
		NullCheck(L_0);
		MethodOptions_t231FE38BD5312DB18559F1566A090E97A3AF6DB7* L_1;
		L_1 = MethodDescriptorProto_get_Options_mEF31E491D76D1C67D9D2FB55C243B9F52E7E9D1A_inline(L_0, NULL);
		MethodOptions_t231FE38BD5312DB18559F1566A090E97A3AF6DB7* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		G_B5_0 = ((Dictionary_2_t7D99B8C24B0BFFDE97F3C514C8E7AA5FA84C046D*)(NULL));
		goto IL_0023;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		ExtensionSet_1_t7852FD32A1BA06E9EC2E3A0A4FD20D1ECE125227* L_3 = G_B2_0->____extensions_2;
		ExtensionSet_1_t7852FD32A1BA06E9EC2E3A0A4FD20D1ECE125227* L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_001e;
		}
	}
	{
		G_B5_0 = ((Dictionary_2_t7D99B8C24B0BFFDE97F3C514C8E7AA5FA84C046D*)(NULL));
		goto IL_0023;
	}

IL_001e:
	{
		NullCheck(G_B4_0);
		Dictionary_2_t7D99B8C24B0BFFDE97F3C514C8E7AA5FA84C046D* L_5;
		L_5 = ExtensionSet_1_get_ValuesByNumber_m39A446AA28C0F70EA7A7D2E25E39D1B76EDB896A_inline(G_B4_0, ExtensionSet_1_get_ValuesByNumber_m39A446AA28C0F70EA7A7D2E25E39D1B76EDB896A_RuntimeMethod_var);
		G_B5_0 = L_5;
	}

IL_0023:
	{
		CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* L_6 = (CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C*)il2cpp_codegen_object_new(CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		CustomOptions__ctor_m1210A6A5726546C7862286CD9BADFF187FF53B11(L_6, G_B5_0, NULL);
		return L_6;
	}
}
// Google.Protobuf.Reflection.MethodOptions Google.Protobuf.Reflection.MethodDescriptor::GetOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodOptions_t231FE38BD5312DB18559F1566A090E97A3AF6DB7* MethodDescriptor_GetOptions_m0D9E876481A749F652BAF4D773E26F8A430D8A30 (MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* __this, const RuntimeMethod* method) 
{
	MethodOptions_t231FE38BD5312DB18559F1566A090E97A3AF6DB7* G_B2_0 = NULL;
	MethodOptions_t231FE38BD5312DB18559F1566A090E97A3AF6DB7* G_B1_0 = NULL;
	{
		MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* L_0;
		L_0 = MethodDescriptor_get_Proto_m08BA64B9570CED9E3E993E1F8B6997395C3649F6_inline(__this, NULL);
		NullCheck(L_0);
		MethodOptions_t231FE38BD5312DB18559F1566A090E97A3AF6DB7* L_1;
		L_1 = MethodDescriptorProto_get_Options_mEF31E491D76D1C67D9D2FB55C243B9F52E7E9D1A_inline(L_0, NULL);
		MethodOptions_t231FE38BD5312DB18559F1566A090E97A3AF6DB7* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
	}
	{
		return (MethodOptions_t231FE38BD5312DB18559F1566A090E97A3AF6DB7*)NULL;
	}

IL_0011:
	{
		NullCheck(G_B2_0);
		MethodOptions_t231FE38BD5312DB18559F1566A090E97A3AF6DB7* L_3;
		L_3 = MethodOptions_Clone_mBE76D3E12FA1DBA8E94923946A7A61B8CD898C1F(G_B2_0, NULL);
		return L_3;
	}
}
// System.Void Google.Protobuf.Reflection.MethodDescriptor::.ctor(Google.Protobuf.Reflection.MethodDescriptorProto,Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.ServiceDescriptor,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodDescriptor__ctor_m14EC122B2999003C0BA7C543F9ED0F728AA90FF2 (MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* __this, MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* ___proto0, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file1, ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* ___parent2, int32_t ___index3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0 = ___file1;
		ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* L_1 = ___parent2;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = DescriptorBase_get_FullName_m09E17EE9C9184A528B154958832FDA2977D8B32D_inline(L_1, NULL);
		MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* L_3 = ___proto0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = MethodDescriptorProto_get_Name_m0E0A77A1B97748A6331C972C766376AAC481BE9D(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_2, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_4, NULL);
		int32_t L_6 = ___index3;
		DescriptorBase__ctor_m002B5D6404EE5F2190E0DC0162F153B9AC6F454A(__this, L_0, L_5, L_6, NULL);
		MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* L_7 = ___proto0;
		__this->___proto_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___proto_3), (void*)L_7);
		ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* L_8 = ___parent2;
		__this->___service_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___service_4), (void*)L_8);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_9 = ___file1;
		NullCheck(L_9);
		DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* L_10;
		L_10 = FileDescriptor_get_DescriptorPool_m2C9A3FFBC669C3DAFDD5C7DBFE51EF37094021CD_inline(L_9, NULL);
		NullCheck(L_10);
		DescriptorPool_AddSymbol_m9F1D72975649FB85CEE9B12FA92EFC6C30B49614(L_10, __this, NULL);
		return;
	}
}
// Google.Protobuf.Reflection.MethodDescriptorProto Google.Protobuf.Reflection.MethodDescriptor::get_Proto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* MethodDescriptor_get_Proto_m08BA64B9570CED9E3E993E1F8B6997395C3649F6 (MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* __this, const RuntimeMethod* method) 
{
	{
		MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* L_0 = __this->___proto_3;
		return L_0;
	}
}
// System.String Google.Protobuf.Reflection.MethodDescriptor::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MethodDescriptor_get_Name_m9797521EE1CB19B18D5695B5839770CDABD1A37F (MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* __this, const RuntimeMethod* method) 
{
	{
		MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* L_0 = __this->___proto_3;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = MethodDescriptorProto_get_Name_m0E0A77A1B97748A6331C972C766376AAC481BE9D(L_0, NULL);
		return L_1;
	}
}
// System.Void Google.Protobuf.Reflection.MethodDescriptor::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodDescriptor_CrossLink_mDA009B32AEA452674E144983DE399890DC1340D7 (MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0;
		L_0 = DescriptorBase_get_File_m4ADE18F8259D6F6DEC90FEEDCDCFAD1101AAE7BF_inline(__this, NULL);
		NullCheck(L_0);
		DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* L_1;
		L_1 = FileDescriptor_get_DescriptorPool_m2C9A3FFBC669C3DAFDD5C7DBFE51EF37094021CD_inline(L_0, NULL);
		MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* L_2;
		L_2 = MethodDescriptor_get_Proto_m08BA64B9570CED9E3E993E1F8B6997395C3649F6_inline(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = MethodDescriptorProto_get_InputType_m3E2EDDE6CB60B9C52CD82AD5216634820EF90FD3(L_2, NULL);
		NullCheck(L_1);
		RuntimeObject* L_4;
		L_4 = DescriptorPool_LookupSymbol_mF3E2C7A93E8BC401E2AC316FD81FF62CB72A866A(L_1, L_3, __this, NULL);
		V_0 = L_4;
		RuntimeObject* L_5 = V_0;
		if (((MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*)IsInstSealed((RuntimeObject*)L_5, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var)))
		{
			goto IL_0046;
		}
	}
	{
		MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* L_6;
		L_6 = MethodDescriptor_get_Proto_m08BA64B9570CED9E3E993E1F8B6997395C3649F6_inline(__this, NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = MethodDescriptorProto_get_InputType_m3E2EDDE6CB60B9C52CD82AD5216634820EF90FD3(L_6, NULL);
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677)), L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD344A405546B27CFAE8780105ACCE0B68620063A)), NULL);
		DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D* L_9 = (DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		DescriptorValidationException__ctor_mC2C1B536F9F3C49A6187D671B499BA003DB9F366(L_9, __this, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MethodDescriptor_CrossLink_mDA009B32AEA452674E144983DE399890DC1340D7_RuntimeMethod_var)));
	}

IL_0046:
	{
		RuntimeObject* L_10 = V_0;
		__this->___inputType_5 = ((MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*)CastclassSealed((RuntimeObject*)L_10, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputType_5), (void*)((MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*)CastclassSealed((RuntimeObject*)L_10, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var)));
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_11;
		L_11 = DescriptorBase_get_File_m4ADE18F8259D6F6DEC90FEEDCDCFAD1101AAE7BF_inline(__this, NULL);
		NullCheck(L_11);
		DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* L_12;
		L_12 = FileDescriptor_get_DescriptorPool_m2C9A3FFBC669C3DAFDD5C7DBFE51EF37094021CD_inline(L_11, NULL);
		MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* L_13;
		L_13 = MethodDescriptor_get_Proto_m08BA64B9570CED9E3E993E1F8B6997395C3649F6_inline(__this, NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = MethodDescriptorProto_get_OutputType_m535ED7F4F70B9FAD544EB237C5697414A5C37C9F(L_13, NULL);
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = DescriptorPool_LookupSymbol_mF3E2C7A93E8BC401E2AC316FD81FF62CB72A866A(L_12, L_14, __this, NULL);
		V_0 = L_15;
		RuntimeObject* L_16 = V_0;
		if (((MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*)IsInstSealed((RuntimeObject*)L_16, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var)))
		{
			goto IL_0098;
		}
	}
	{
		MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* L_17;
		L_17 = MethodDescriptor_get_Proto_m08BA64B9570CED9E3E993E1F8B6997395C3649F6_inline(__this, NULL);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = MethodDescriptorProto_get_OutputType_m535ED7F4F70B9FAD544EB237C5697414A5C37C9F(L_17, NULL);
		String_t* L_19;
		L_19 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677)), L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD344A405546B27CFAE8780105ACCE0B68620063A)), NULL);
		DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D* L_20 = (DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		DescriptorValidationException__ctor_mC2C1B536F9F3C49A6187D671B499BA003DB9F366(L_20, __this, L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MethodDescriptor_CrossLink_mDA009B32AEA452674E144983DE399890DC1340D7_RuntimeMethod_var)));
	}

IL_0098:
	{
		RuntimeObject* L_21 = V_0;
		__this->___outputType_6 = ((MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*)CastclassSealed((RuntimeObject*)L_21, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outputType_6), (void*)((MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*)CastclassSealed((RuntimeObject*)L_21, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var)));
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
// System.Void Google.Protobuf.Reflection.OneofAccessor::.ctor(Google.Protobuf.Reflection.OneofDescriptor,System.Func`2<Google.Protobuf.IMessage,System.Int32>,System.Action`1<Google.Protobuf.IMessage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneofAccessor__ctor_mEA73C65F6B5D91E6B6C9BEF165122D361A66D6B0 (OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* __this, OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* ___descriptor0, Func_2_tAA7621BADE44DD8FE95297120257F58E03B4D5D3* ___caseDelegate1, Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997* ___clearDelegate2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* L_0 = ___descriptor0;
		__this->___U3CDescriptorU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDescriptorU3Ek__BackingField_2), (void*)L_0);
		Func_2_tAA7621BADE44DD8FE95297120257F58E03B4D5D3* L_1 = ___caseDelegate1;
		__this->___caseDelegate_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___caseDelegate_0), (void*)L_1);
		Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997* L_2 = ___clearDelegate2;
		__this->___clearDelegate_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clearDelegate_1), (void*)L_2);
		return;
	}
}
// Google.Protobuf.Reflection.OneofAccessor Google.Protobuf.Reflection.OneofAccessor::ForRegularOneof(Google.Protobuf.Reflection.OneofDescriptor,System.Reflection.PropertyInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* OneofAccessor_ForRegularOneof_m6640C861E01F3B6C3B76E36FD212CBB745022B07 (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* ___descriptor0, PropertyInfo_t* ___caseProperty1, MethodInfo_t* ___clearMethod2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* L_0 = ___descriptor0;
		PropertyInfo_t* L_1 = ___caseProperty1;
		NullCheck(L_1);
		MethodInfo_t* L_2;
		L_2 = PropertyInfo_GetGetMethod_mE0D6C0811D404DD977B53E68C0D36BA8CB889F74(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		Func_2_tAA7621BADE44DD8FE95297120257F58E03B4D5D3* L_3;
		L_3 = ReflectionUtil_CreateFuncIMessageInt32_m6FEFA788CA033B010A45B47A69D187749E6D2421(L_2, NULL);
		MethodInfo_t* L_4 = ___clearMethod2;
		Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997* L_5;
		L_5 = ReflectionUtil_CreateActionIMessage_mFC1E67BD3A4046F7AD553B883230B44D49B57893(L_4, NULL);
		OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* L_6 = (OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073*)il2cpp_codegen_object_new(OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		OneofAccessor__ctor_mEA73C65F6B5D91E6B6C9BEF165122D361A66D6B0(L_6, L_0, L_3, L_5, NULL);
		return L_6;
	}
}
// Google.Protobuf.Reflection.OneofAccessor Google.Protobuf.Reflection.OneofAccessor::ForSyntheticOneof(Google.Protobuf.Reflection.OneofDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* OneofAccessor_ForSyntheticOneof_mCC58CA3A9FBB40541883155A8E7A20DF4D439FD8 (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* ___descriptor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tAA7621BADE44DD8FE95297120257F58E03B4D5D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CForSyntheticOneofU3Eb__0_mC0779BEAC3F9A0BD19B83C7EA7FE4E50A864F41D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CForSyntheticOneofU3Eb__1_mB186EC920120CD12DCBCEFC8EB0DED674AF21326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t784C4EBE7C1FD299653F7D2D5E783389AAE74B70_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t784C4EBE7C1FD299653F7D2D5E783389AAE74B70* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_t784C4EBE7C1FD299653F7D2D5E783389AAE74B70* L_0 = (U3CU3Ec__DisplayClass4_0_t784C4EBE7C1FD299653F7D2D5E783389AAE74B70*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t784C4EBE7C1FD299653F7D2D5E783389AAE74B70_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_m681A160D69317E55220EC7477D759838FB218A25(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_t784C4EBE7C1FD299653F7D2D5E783389AAE74B70* L_1 = V_0;
		OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* L_2 = ___descriptor0;
		NullCheck(L_1);
		L_1->___descriptor_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___descriptor_0), (void*)L_2);
		U3CU3Ec__DisplayClass4_0_t784C4EBE7C1FD299653F7D2D5E783389AAE74B70* L_3 = V_0;
		NullCheck(L_3);
		OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* L_4 = L_3->___descriptor_0;
		U3CU3Ec__DisplayClass4_0_t784C4EBE7C1FD299653F7D2D5E783389AAE74B70* L_5 = V_0;
		Func_2_tAA7621BADE44DD8FE95297120257F58E03B4D5D3* L_6 = (Func_2_tAA7621BADE44DD8FE95297120257F58E03B4D5D3*)il2cpp_codegen_object_new(Func_2_tAA7621BADE44DD8FE95297120257F58E03B4D5D3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_mA4B3B80493DFB6ED8D0BD17138811BF7E5839E08(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CForSyntheticOneofU3Eb__0_mC0779BEAC3F9A0BD19B83C7EA7FE4E50A864F41D_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass4_0_t784C4EBE7C1FD299653F7D2D5E783389AAE74B70* L_7 = V_0;
		Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997* L_8 = (Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997*)il2cpp_codegen_object_new(Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action_1__ctor_m489692DDBF6D8FDD191397E1A803CDC0D2D74DF2(L_8, L_7, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CForSyntheticOneofU3Eb__1_mB186EC920120CD12DCBCEFC8EB0DED674AF21326_RuntimeMethod_var), NULL);
		OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* L_9 = (OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073*)il2cpp_codegen_object_new(OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		OneofAccessor__ctor_mEA73C65F6B5D91E6B6C9BEF165122D361A66D6B0(L_9, L_4, L_6, L_8, NULL);
		return L_9;
	}
}
// Google.Protobuf.Reflection.OneofDescriptor Google.Protobuf.Reflection.OneofAccessor::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* OneofAccessor_get_Descriptor_mE5762B7FAFA1F5089C8C00201824FC263D5DD9CE (OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* __this, const RuntimeMethod* method) 
{
	{
		OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* L_0 = __this->___U3CDescriptorU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Google.Protobuf.Reflection.OneofAccessor::Clear(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneofAccessor_Clear_m29989D87DCDC7AA04E7083B47DD8AB511B058E7D (OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	{
		Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997* L_0 = __this->___clearDelegate_1;
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		Action_1_Invoke_mB741A5209F94DEA28AF75D2736CCB6CA8C50C133_inline(L_0, L_1, NULL);
		return;
	}
}
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.OneofAccessor::GetCaseFieldDescriptor(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* OneofAccessor_GetCaseFieldDescriptor_m4915CF5321E80B0C750409F84E109D13FF47FBFC (OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Func_2_tAA7621BADE44DD8FE95297120257F58E03B4D5D3* L_0 = __this->___caseDelegate_0;
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = Func_2_Invoke_m33AD4763C10512F5603E6826A3C2EAC13E41D2B2_inline(L_0, L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		return (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E*)NULL;
	}

IL_0013:
	{
		OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* L_4;
		L_4 = OneofAccessor_get_Descriptor_mE5762B7FAFA1F5089C8C00201824FC263D5DD9CE_inline(__this, NULL);
		NullCheck(L_4);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_5;
		L_5 = OneofDescriptor_get_ContainingType_m1AE060E44800C9D8135AEE395CD1A522AFE8020D_inline(L_4, NULL);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_7;
		L_7 = MessageDescriptor_FindFieldByNumber_m1D65624DECB12DDDD354206EB1B0BBE4944651DC(L_5, L_6, NULL);
		return L_7;
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
// System.Void Google.Protobuf.Reflection.OneofAccessor/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m681A160D69317E55220EC7477D759838FB218A25 (U3CU3Ec__DisplayClass4_0_t784C4EBE7C1FD299653F7D2D5E783389AAE74B70* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 Google.Protobuf.Reflection.OneofAccessor/<>c__DisplayClass4_0::<ForSyntheticOneof>b__0(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec__DisplayClass4_0_U3CForSyntheticOneofU3Eb__0_mC0779BEAC3F9A0BD19B83C7EA7FE4E50A864F41D (U3CU3Ec__DisplayClass4_0_t784C4EBE7C1FD299653F7D2D5E783389AAE74B70* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFieldAccessor_t0F629A4029D7E802E3194891AA705EE4D7E2EA22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tBECF6C25D47C20B0CA9B3100FD02FED4BA91145E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* L_0 = __this->___descriptor_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = OneofDescriptor_get_Fields_mA95D85FFC1D1E6A526DDCD8F14A2DB16F27140C0_inline(L_0, NULL);
		NullCheck(L_1);
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_2;
		L_2 = InterfaceFuncInvoker1< FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor>::get_Item(System.Int32) */, IList_1_tBECF6C25D47C20B0CA9B3100FD02FED4BA91145E_il2cpp_TypeInfo_var, L_1, 0);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = FieldDescriptor_get_Accessor_mBFA4302AF3C75C52CACD857427ABB300A482CA19_inline(L_2, NULL);
		RuntimeObject* L_4 = ___message0;
		NullCheck(L_3);
		bool L_5;
		L_5 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(3 /* System.Boolean Google.Protobuf.Reflection.IFieldAccessor::HasValue(Google.Protobuf.IMessage) */, IFieldAccessor_t0F629A4029D7E802E3194891AA705EE4D7E2EA22_il2cpp_TypeInfo_var, L_3, L_4);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		return 0;
	}

IL_0020:
	{
		OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* L_6 = __this->___descriptor_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = OneofDescriptor_get_Fields_mA95D85FFC1D1E6A526DDCD8F14A2DB16F27140C0_inline(L_6, NULL);
		NullCheck(L_7);
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_8;
		L_8 = InterfaceFuncInvoker1< FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor>::get_Item(System.Int32) */, IList_1_tBECF6C25D47C20B0CA9B3100FD02FED4BA91145E_il2cpp_TypeInfo_var, L_7, 0);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = FieldDescriptor_get_FieldNumber_m92E0DC0243FE36CA28859096A93B82BAE6927452(L_8, NULL);
		return L_9;
	}
}
// System.Void Google.Protobuf.Reflection.OneofAccessor/<>c__DisplayClass4_0::<ForSyntheticOneof>b__1(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CForSyntheticOneofU3Eb__1_mB186EC920120CD12DCBCEFC8EB0DED674AF21326 (U3CU3Ec__DisplayClass4_0_t784C4EBE7C1FD299653F7D2D5E783389AAE74B70* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFieldAccessor_t0F629A4029D7E802E3194891AA705EE4D7E2EA22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tBECF6C25D47C20B0CA9B3100FD02FED4BA91145E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* L_0 = __this->___descriptor_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = OneofDescriptor_get_Fields_mA95D85FFC1D1E6A526DDCD8F14A2DB16F27140C0_inline(L_0, NULL);
		NullCheck(L_1);
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_2;
		L_2 = InterfaceFuncInvoker1< FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor>::get_Item(System.Int32) */, IList_1_tBECF6C25D47C20B0CA9B3100FD02FED4BA91145E_il2cpp_TypeInfo_var, L_1, 0);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = FieldDescriptor_get_Accessor_mBFA4302AF3C75C52CACD857427ABB300A482CA19_inline(L_2, NULL);
		RuntimeObject* L_4 = ___message0;
		NullCheck(L_3);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void Google.Protobuf.Reflection.IFieldAccessor::Clear(Google.Protobuf.IMessage) */, IFieldAccessor_t0F629A4029D7E802E3194891AA705EE4D7E2EA22_il2cpp_TypeInfo_var, L_3, L_4);
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
// System.Void Google.Protobuf.Reflection.OneofDescriptor::.ctor(Google.Protobuf.Reflection.OneofDescriptorProto,Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.MessageDescriptor,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneofDescriptor__ctor_m1DF6BC68AE05031163B8774780CA2B5856545429 (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* __this, OneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A* ___proto0, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file1, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___parent2, int32_t ___index3, String_t* ___clrName4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisFieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99_m0D6BE36B71567E861086A478FAB5EA18C0AD7FCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tA328F6AF21E84812B76E5CDC390E8EA589CEB76F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__0_m8E319F48983C06B89AECC1B66295B2CE516D8C5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t0886EC03EEC8581246EAE187D9CF8F5F3A355619_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t0886EC03EEC8581246EAE187D9CF8F5F3A355619* V_0 = NULL;
	FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* V_1 = NULL;
	OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* G_B2_0 = NULL;
	OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* G_B3_1 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_t0886EC03EEC8581246EAE187D9CF8F5F3A355619* L_0 = (U3CU3Ec__DisplayClass4_0_t0886EC03EEC8581246EAE187D9CF8F5F3A355619*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t0886EC03EEC8581246EAE187D9CF8F5F3A355619_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_m4637F2000EF105AD580F433A1E197CF44F3CF55B(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_t0886EC03EEC8581246EAE187D9CF8F5F3A355619* L_1 = V_0;
		int32_t L_2 = ___index3;
		NullCheck(L_1);
		L_1->___index_0 = L_2;
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_3 = ___file1;
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_4 = ___file1;
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_5 = ___parent2;
		OneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A* L_6 = ___proto0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = OneofDescriptorProto_get_Name_m6987249315B54F5D46E0B07B2876370CAFEC826C(L_6, NULL);
		NullCheck(L_4);
		String_t* L_8;
		L_8 = FileDescriptor_ComputeFullName_mCBDE9B2BB4FAD55885BE530C106C278E27E4D11F(L_4, L_5, L_7, NULL);
		U3CU3Ec__DisplayClass4_0_t0886EC03EEC8581246EAE187D9CF8F5F3A355619* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = L_9->___index_0;
		DescriptorBase__ctor_m002B5D6404EE5F2190E0DC0162F153B9AC6F454A(__this, L_3, L_8, L_10, NULL);
		OneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A* L_11 = ___proto0;
		__this->___proto_3 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___proto_3), (void*)L_11);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_12 = ___parent2;
		__this->___containingType_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___containingType_4), (void*)L_12);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_13 = ___file1;
		NullCheck(L_13);
		DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* L_14;
		L_14 = FileDescriptor_get_DescriptorPool_m2C9A3FFBC669C3DAFDD5C7DBFE51EF37094021CD_inline(L_13, NULL);
		NullCheck(L_14);
		DescriptorPool_AddSymbol_m9F1D72975649FB85CEE9B12FA92EFC6C30B49614(L_14, __this, NULL);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_15 = ___parent2;
		NullCheck(L_15);
		DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* L_16;
		L_16 = MessageDescriptor_get_Proto_mE5640E03D5D2191198B0B47401F194D9A1AFD59B_inline(L_15, NULL);
		NullCheck(L_16);
		RepeatedField_1_t7E4B2149855E87DEBE33830CBE70920C8A6E52E1* L_17;
		L_17 = DescriptorProto_get_Field_m5C69AC6B1B0D580AC85EA12068D434A482DA18BA_inline(L_16, NULL);
		U3CU3Ec__DisplayClass4_0_t0886EC03EEC8581246EAE187D9CF8F5F3A355619* L_18 = V_0;
		Func_2_tA328F6AF21E84812B76E5CDC390E8EA589CEB76F* L_19 = (Func_2_tA328F6AF21E84812B76E5CDC390E8EA589CEB76F*)il2cpp_codegen_object_new(Func_2_tA328F6AF21E84812B76E5CDC390E8EA589CEB76F_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Func_2__ctor_m3C874E1F7B587D3F8768FB82CE09F8C341BC2357(L_19, L_18, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__0_m8E319F48983C06B89AECC1B66295B2CE516D8C5A_RuntimeMethod_var), NULL);
		FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* L_20;
		L_20 = Enumerable_FirstOrDefault_TisFieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99_m0D6BE36B71567E861086A478FAB5EA18C0AD7FCD(L_17, L_19, Enumerable_FirstOrDefault_TisFieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99_m0D6BE36B71567E861086A478FAB5EA18C0AD7FCD_RuntimeMethod_var);
		V_1 = L_20;
		FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* L_21 = V_1;
		G_B1_0 = __this;
		if (L_21)
		{
			G_B2_0 = __this;
			goto IL_0066;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_006c;
	}

IL_0066:
	{
		FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* L_22 = V_1;
		NullCheck(L_22);
		bool L_23;
		L_23 = FieldDescriptorProto_get_Proto3Optional_mC87D925C9EA4886AB63A882C52B2CC146947868A(L_22, NULL);
		G_B3_0 = ((int32_t)(L_23));
		G_B3_1 = G_B2_0;
	}

IL_006c:
	{
		NullCheck(G_B3_1);
		G_B3_1->___U3CIsSyntheticU3Ek__BackingField_7 = (bool)G_B3_0;
		String_t* L_24 = ___clrName4;
		OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* L_25;
		L_25 = OneofDescriptor_CreateAccessor_m43F29BA6164F0BE8A54267EB293DBD4244D1999C(__this, L_24, NULL);
		__this->___accessor_6 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___accessor_6), (void*)L_25);
		return;
	}
}
// System.String Google.Protobuf.Reflection.OneofDescriptor::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OneofDescriptor_get_Name_m1C703B665485C229A1BD1810B24F0DA251EC093E (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* __this, const RuntimeMethod* method) 
{
	{
		OneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A* L_0 = __this->___proto_3;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = OneofDescriptorProto_get_Name_m6987249315B54F5D46E0B07B2876370CAFEC826C(L_0, NULL);
		return L_1;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.OneofDescriptor::get_ContainingType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* OneofDescriptor_get_ContainingType_m1AE060E44800C9D8135AEE395CD1A522AFE8020D (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* __this, const RuntimeMethod* method) 
{
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0 = __this->___containingType_4;
		return L_0;
	}
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.OneofDescriptor::get_Fields()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OneofDescriptor_get_Fields_mA95D85FFC1D1E6A526DDCD8F14A2DB16F27140C0 (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___fields_5;
		return L_0;
	}
}
// System.Boolean Google.Protobuf.Reflection.OneofDescriptor::get_IsSynthetic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OneofDescriptor_get_IsSynthetic_mB83EEA3B6B69356688ED25B0B93E37317AD96C60 (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsSyntheticU3Ek__BackingField_7;
		return L_0;
	}
}
// Google.Protobuf.Reflection.OneofAccessor Google.Protobuf.Reflection.OneofDescriptor::get_Accessor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* OneofDescriptor_get_Accessor_m6EBDA81DDBD7EF8ACCA4FBF4F52175C73726A0E1 (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* __this, const RuntimeMethod* method) 
{
	{
		OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* L_0 = __this->___accessor_6;
		return L_0;
	}
}
// Google.Protobuf.Reflection.CustomOptions Google.Protobuf.Reflection.OneofDescriptor::get_CustomOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* OneofDescriptor_get_CustomOptions_m9289E9ABA67AD2BDD4912F703BF9D122BA56584D (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionSet_1_get_ValuesByNumber_m8B6D8D5916152A49A8D16792A5A8720693522473_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	OneofOptions_t499A07FB7EEF49A12136BABBD159BC8B7B6107EF* G_B2_0 = NULL;
	OneofOptions_t499A07FB7EEF49A12136BABBD159BC8B7B6107EF* G_B1_0 = NULL;
	Dictionary_2_t7D99B8C24B0BFFDE97F3C514C8E7AA5FA84C046D* G_B5_0 = NULL;
	ExtensionSet_1_t2F914810BA451806E5E9BDEBFF2EB33451DBC097* G_B4_0 = NULL;
	ExtensionSet_1_t2F914810BA451806E5E9BDEBFF2EB33451DBC097* G_B3_0 = NULL;
	{
		OneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A* L_0 = __this->___proto_3;
		NullCheck(L_0);
		OneofOptions_t499A07FB7EEF49A12136BABBD159BC8B7B6107EF* L_1;
		L_1 = OneofDescriptorProto_get_Options_m86DDF956444086BD981F9BA68D91DA3A8B9360B6_inline(L_0, NULL);
		OneofOptions_t499A07FB7EEF49A12136BABBD159BC8B7B6107EF* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		G_B5_0 = ((Dictionary_2_t7D99B8C24B0BFFDE97F3C514C8E7AA5FA84C046D*)(NULL));
		goto IL_0023;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		ExtensionSet_1_t2F914810BA451806E5E9BDEBFF2EB33451DBC097* L_3 = G_B2_0->____extensions_2;
		ExtensionSet_1_t2F914810BA451806E5E9BDEBFF2EB33451DBC097* L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_001e;
		}
	}
	{
		G_B5_0 = ((Dictionary_2_t7D99B8C24B0BFFDE97F3C514C8E7AA5FA84C046D*)(NULL));
		goto IL_0023;
	}

IL_001e:
	{
		NullCheck(G_B4_0);
		Dictionary_2_t7D99B8C24B0BFFDE97F3C514C8E7AA5FA84C046D* L_5;
		L_5 = ExtensionSet_1_get_ValuesByNumber_m8B6D8D5916152A49A8D16792A5A8720693522473_inline(G_B4_0, ExtensionSet_1_get_ValuesByNumber_m8B6D8D5916152A49A8D16792A5A8720693522473_RuntimeMethod_var);
		G_B5_0 = L_5;
	}

IL_0023:
	{
		CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* L_6 = (CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C*)il2cpp_codegen_object_new(CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		CustomOptions__ctor_m1210A6A5726546C7862286CD9BADFF187FF53B11(L_6, G_B5_0, NULL);
		return L_6;
	}
}
// Google.Protobuf.Reflection.OneofOptions Google.Protobuf.Reflection.OneofDescriptor::GetOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofOptions_t499A07FB7EEF49A12136BABBD159BC8B7B6107EF* OneofDescriptor_GetOptions_m76D44BD7397B65D8E3038C275D4E3705267DC7C7 (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* __this, const RuntimeMethod* method) 
{
	OneofOptions_t499A07FB7EEF49A12136BABBD159BC8B7B6107EF* G_B2_0 = NULL;
	OneofOptions_t499A07FB7EEF49A12136BABBD159BC8B7B6107EF* G_B1_0 = NULL;
	{
		OneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A* L_0 = __this->___proto_3;
		NullCheck(L_0);
		OneofOptions_t499A07FB7EEF49A12136BABBD159BC8B7B6107EF* L_1;
		L_1 = OneofDescriptorProto_get_Options_m86DDF956444086BD981F9BA68D91DA3A8B9360B6_inline(L_0, NULL);
		OneofOptions_t499A07FB7EEF49A12136BABBD159BC8B7B6107EF* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
	}
	{
		return (OneofOptions_t499A07FB7EEF49A12136BABBD159BC8B7B6107EF*)NULL;
	}

IL_0011:
	{
		NullCheck(G_B2_0);
		OneofOptions_t499A07FB7EEF49A12136BABBD159BC8B7B6107EF* L_3;
		L_3 = OneofOptions_Clone_m329E567213B269340BFC68AA2E980866A896C171(G_B2_0, NULL);
		return L_3;
	}
}
// System.Void Google.Protobuf.Reflection.OneofDescriptor::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneofDescriptor_CrossLink_mA8C38E8741F9A1DF651EB74C3B05FFC67B9CE196 (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tDDBABD38601B0B3CB8FE8BC3C7192A21443B0D06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tC89C2FE0B79746F860EB87A17DDBB036B9B5CA30_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1DD998A0CDC162DF71974532CB819315DD20BF80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4905449B1DA3EBC3C62384AF048391EBE47AC1A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t64981EE12A2A370C5000034039B00D57761431A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1__ctor_m9CFD56BDC2BB0527D5B794B37FC216610DECBBF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_t576A96EB67EFDB504EC4066151F3F1B55149AE2B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t64981EE12A2A370C5000034039B00D57761431A3* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* V_2 = NULL;
	{
		List_1_t64981EE12A2A370C5000034039B00D57761431A3* L_0 = (List_1_t64981EE12A2A370C5000034039B00D57761431A3*)il2cpp_codegen_object_new(List_1_t64981EE12A2A370C5000034039B00D57761431A3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m4905449B1DA3EBC3C62384AF048391EBE47AC1A6(L_0, List_1__ctor_m4905449B1DA3EBC3C62384AF048391EBE47AC1A6_RuntimeMethod_var);
		V_0 = L_0;
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_1;
		L_1 = OneofDescriptor_get_ContainingType_m1AE060E44800C9D8135AEE395CD1A522AFE8020D_inline(__this, NULL);
		NullCheck(L_1);
		FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3* L_2;
		L_2 = MessageDescriptor_get_Fields_mA5EE82B81DE42BB3DAC85301639AD91C9AB94503_inline(L_1, NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = FieldCollection_InDeclarationOrder_m51C3D79E9FE57BCD482DFF7ADE94555A2AA23FD7(L_2, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FieldDescriptor>::GetEnumerator() */, IEnumerable_1_tDDBABD38601B0B3CB8FE8BC3C7192A21443B0D06_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003f:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_0048;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0048:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0035_1;
			}

IL_001e_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_8;
				L_8 = InterfaceFuncInvoker0< FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.FieldDescriptor>::get_Current() */, IEnumerator_1_tC89C2FE0B79746F860EB87A17DDBB036B9B5CA30_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_9 = V_2;
				NullCheck(L_9);
				OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* L_10;
				L_10 = FieldDescriptor_get_ContainingOneof_m910021BB2A5C1B3EF595F5C557EF032691282E13_inline(L_9, NULL);
				if ((!(((RuntimeObject*)(OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC*)L_10) == ((RuntimeObject*)(OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC*)__this))))
				{
					goto IL_0035_1;
				}
			}
			{
				List_1_t64981EE12A2A370C5000034039B00D57761431A3* L_11 = V_0;
				FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_12 = V_2;
				NullCheck(L_11);
				List_1_Add_m1DD998A0CDC162DF71974532CB819315DD20BF80_inline(L_11, L_12, List_1_Add_m1DD998A0CDC162DF71974532CB819315DD20BF80_RuntimeMethod_var);
			}

IL_0035_1:
			{
				RuntimeObject* L_13 = V_1;
				NullCheck(L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_13);
				if (L_14)
				{
					goto IL_001e_1;
				}
			}
			{
				goto IL_0049;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		List_1_t64981EE12A2A370C5000034039B00D57761431A3* L_15 = V_0;
		ReadOnlyCollection_1_t576A96EB67EFDB504EC4066151F3F1B55149AE2B* L_16 = (ReadOnlyCollection_1_t576A96EB67EFDB504EC4066151F3F1B55149AE2B*)il2cpp_codegen_object_new(ReadOnlyCollection_1_t576A96EB67EFDB504EC4066151F3F1B55149AE2B_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		ReadOnlyCollection_1__ctor_m9CFD56BDC2BB0527D5B794B37FC216610DECBBF3(L_16, L_15, ReadOnlyCollection_1__ctor_m9CFD56BDC2BB0527D5B794B37FC216610DECBBF3_RuntimeMethod_var);
		__this->___fields_5 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fields_5), (void*)L_16);
		return;
	}
}
// Google.Protobuf.Reflection.OneofAccessor Google.Protobuf.Reflection.OneofDescriptor::CreateAccessor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* OneofDescriptor_CreateAccessor_m43F29BA6164F0BE8A54267EB293DBD4244D1999C (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* __this, String_t* ___clrName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE58DB664A03767A219FB187BBE2B769431C47F8);
		s_Il2CppMethodInitialized = true;
	}
	PropertyInfo_t* V_0 = NULL;
	MethodInfo_t* V_1 = NULL;
	{
		String_t* L_0 = ___clrName0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073*)NULL;
	}

IL_0005:
	{
		bool L_1;
		L_1 = OneofDescriptor_get_IsSynthetic_mB83EEA3B6B69356688ED25B0B93E37317AD96C60_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* L_2;
		L_2 = OneofAccessor_ForSyntheticOneof_mCC58CA3A9FBB40541883155A8E7A20DF4D439FD8(__this, NULL);
		return L_2;
	}

IL_0014:
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_3 = __this->___containingType_4;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = MessageDescriptor_get_ClrType_mE5BB83F9A779B01E975658DFE4F51873F6745656_inline(L_3, NULL);
		String_t* L_5 = ___clrName0;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_5, _stringLiteralCE58DB664A03767A219FB187BBE2B769431C47F8, NULL);
		NullCheck(L_4);
		PropertyInfo_t* L_7;
		L_7 = Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D(L_4, L_6, NULL);
		V_0 = L_7;
		PropertyInfo_t* L_8 = V_0;
		bool L_9;
		L_9 = PropertyInfo_op_Equality_m3BFC2276AECF2A16B66F171D65516817B4578B4F(L_8, (PropertyInfo_t*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_10 = ___clrName0;
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_11 = __this->___containingType_4;
		NullCheck(L_11);
		Type_t* L_12;
		L_12 = MessageDescriptor_get_ClrType_mE5BB83F9A779B01E975658DFE4F51873F6745656_inline(L_11, NULL);
		String_t* L_13;
		L_13 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC735ABBBA0A4054E66CE20DF45D76FB73FAFF691)), L_10, L_12, NULL);
		DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D* L_14 = (DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		DescriptorValidationException__ctor_mC2C1B536F9F3C49A6187D671B499BA003DB9F366(L_14, __this, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OneofDescriptor_CreateAccessor_m43F29BA6164F0BE8A54267EB293DBD4244D1999C_RuntimeMethod_var)));
	}

IL_0056:
	{
		PropertyInfo_t* L_15 = V_0;
		NullCheck(L_15);
		bool L_16;
		L_16 = VirtualFuncInvoker0< bool >::Invoke(17 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_15);
		if (L_16)
		{
			goto IL_007a;
		}
	}
	{
		String_t* L_17 = ___clrName0;
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_18 = __this->___containingType_4;
		NullCheck(L_18);
		Type_t* L_19;
		L_19 = MessageDescriptor_get_ClrType_mE5BB83F9A779B01E975658DFE4F51873F6745656_inline(L_18, NULL);
		String_t* L_20;
		L_20 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD47CF5D6FE76B6693D0F4ADFBC7B1D127FBC8366)), L_17, L_19, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_21 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_21);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_21, L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OneofDescriptor_CreateAccessor_m43F29BA6164F0BE8A54267EB293DBD4244D1999C_RuntimeMethod_var)));
	}

IL_007a:
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_22 = __this->___containingType_4;
		NullCheck(L_22);
		Type_t* L_23;
		L_23 = MessageDescriptor_get_ClrType_mE5BB83F9A779B01E975658DFE4F51873F6745656_inline(L_22, NULL);
		String_t* L_24 = ___clrName0;
		String_t* L_25;
		L_25 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54, L_24, NULL);
		NullCheck(L_23);
		MethodInfo_t* L_26;
		L_26 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_23, L_25, NULL);
		V_1 = L_26;
		MethodInfo_t* L_27 = V_1;
		bool L_28;
		L_28 = MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1(L_27, (MethodInfo_t*)NULL, NULL);
		if (!L_28)
		{
			goto IL_00bc;
		}
	}
	{
		String_t* L_29 = ___clrName0;
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_30 = __this->___containingType_4;
		NullCheck(L_30);
		Type_t* L_31;
		L_31 = MessageDescriptor_get_ClrType_mE5BB83F9A779B01E975658DFE4F51873F6745656_inline(L_30, NULL);
		String_t* L_32;
		L_32 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F6EBD2865CE2FCCB1136CB39B9E6777A5F4777C)), L_29, L_31, NULL);
		DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D* L_33 = (DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D_il2cpp_TypeInfo_var)));
		NullCheck(L_33);
		DescriptorValidationException__ctor_mC2C1B536F9F3C49A6187D671B499BA003DB9F366(L_33, __this, L_32, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OneofDescriptor_CreateAccessor_m43F29BA6164F0BE8A54267EB293DBD4244D1999C_RuntimeMethod_var)));
	}

IL_00bc:
	{
		PropertyInfo_t* L_34 = V_0;
		MethodInfo_t* L_35 = V_1;
		OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* L_36;
		L_36 = OneofAccessor_ForRegularOneof_m6640C861E01F3B6C3B76E36FD212CBB745022B07(__this, L_34, L_35, NULL);
		return L_36;
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
// System.Void Google.Protobuf.Reflection.OneofDescriptor/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m4637F2000EF105AD580F433A1E197CF44F3CF55B (U3CU3Ec__DisplayClass4_0_t0886EC03EEC8581246EAE187D9CF8F5F3A355619* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Google.Protobuf.Reflection.OneofDescriptor/<>c__DisplayClass4_0::<.ctor>b__0(Google.Protobuf.Reflection.FieldDescriptorProto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__0_m8E319F48983C06B89AECC1B66295B2CE516D8C5A (U3CU3Ec__DisplayClass4_0_t0886EC03EEC8581246EAE187D9CF8F5F3A355619* __this, FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* ___fieldProto0, const RuntimeMethod* method) 
{
	{
		FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* L_0 = ___fieldProto0;
		NullCheck(L_0);
		bool L_1;
		L_1 = FieldDescriptorProto_get_HasOneofIndex_m5E3FCAD3794E6AA64AC117B5F30B12B30CA6617D(L_0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* L_2 = ___fieldProto0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = FieldDescriptorProto_get_OneofIndex_mC02FB09DEAD6B0AEE7AE4697A155844B761F25C2(L_2, NULL);
		int32_t L_4 = __this->___index_0;
		return (bool)((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
	}

IL_0017:
	{
		return (bool)0;
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
// System.String Google.Protobuf.Reflection.OriginalNameAttribute::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OriginalNameAttribute_get_Name_mDA610CA3439C19AA24427BD656E6C88EF7CE5C89 (OriginalNameAttribute_t9E75B76C2743609B99104B17C9DED79F2F802EEC* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Google.Protobuf.Reflection.OriginalNameAttribute::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OriginalNameAttribute_set_Name_m59F2568A14369771D8A5471123A4409E6EF85B56 (OriginalNameAttribute_t9E75B76C2743609B99104B17C9DED79F2F802EEC* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Boolean Google.Protobuf.Reflection.OriginalNameAttribute::get_PreferredAlias()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OriginalNameAttribute_get_PreferredAlias_mB938166E10D4DA2452DE0D3E35430BFB85A741EC (OriginalNameAttribute_t9E75B76C2743609B99104B17C9DED79F2F802EEC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CPreferredAliasU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Google.Protobuf.Reflection.OriginalNameAttribute::set_PreferredAlias(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OriginalNameAttribute_set_PreferredAlias_m3D89CC8006C1930E461D3822B4B8EE35788679F3 (OriginalNameAttribute_t9E75B76C2743609B99104B17C9DED79F2F802EEC* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CPreferredAliasU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void Google.Protobuf.Reflection.OriginalNameAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OriginalNameAttribute__ctor_m2A988FDA10CFFF937B1898A33A5C778B318FF9E8 (OriginalNameAttribute_t9E75B76C2743609B99104B17C9DED79F2F802EEC* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtoPreconditions_CheckNotNull_TisString_t_mB87C076C6ED4020555CBA6AAC7A3B4B4265A6414_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___name0;
		String_t* L_1;
		L_1 = ProtoPreconditions_CheckNotNull_TisString_t_mB87C076C6ED4020555CBA6AAC7A3B4B4265A6414(L_0, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, ProtoPreconditions_CheckNotNull_TisString_t_mB87C076C6ED4020555CBA6AAC7A3B4B4265A6414_RuntimeMethod_var);
		OriginalNameAttribute_set_Name_m59F2568A14369771D8A5471123A4409E6EF85B56_inline(__this, L_1, NULL);
		OriginalNameAttribute_set_PreferredAlias_m3D89CC8006C1930E461D3822B4B8EE35788679F3_inline(__this, (bool)1, NULL);
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
// System.Void Google.Protobuf.Reflection.PackageDescriptor::.ctor(System.String,System.String,Google.Protobuf.Reflection.FileDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackageDescriptor__ctor_m0447E4855109193E9FE04A85DBC5BFB72A39B8B0 (PackageDescriptor_t863834B5D80791AF82D2F92CAAF947D71D2F783F* __this, String_t* ___name0, String_t* ___fullName1, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0 = ___file2;
		__this->___file_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___file_2), (void*)L_0);
		String_t* L_1 = ___fullName1;
		__this->___fullName_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fullName_1), (void*)L_1);
		String_t* L_2 = ___name0;
		__this->___name_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)L_2);
		return;
	}
}
// System.String Google.Protobuf.Reflection.PackageDescriptor::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PackageDescriptor_get_Name_m89EFA496431D9C84EF82176138C203CFE5F31D8A (PackageDescriptor_t863834B5D80791AF82D2F92CAAF947D71D2F783F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___name_0;
		return L_0;
	}
}
// System.String Google.Protobuf.Reflection.PackageDescriptor::get_FullName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PackageDescriptor_get_FullName_mDC5B9FDD23A705C183D8A61A20E2A963197222D9 (PackageDescriptor_t863834B5D80791AF82D2F92CAAF947D71D2F783F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___fullName_1;
		return L_0;
	}
}
// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.PackageDescriptor::get_File()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* PackageDescriptor_get_File_mBD886DF2E471771C0AA1D5C083526CCFA0C4573B (PackageDescriptor_t863834B5D80791AF82D2F92CAAF947D71D2F783F* __this, const RuntimeMethod* method) 
{
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0 = __this->___file_2;
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
// System.Void Google.Protobuf.Reflection.ReflectionUtil::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil__cctor_m46832D471BC51FCEF016F0472086A2915771AB60 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6D048FDC3395B232A34CB24024E4650E201F4D99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mFEE0C4253D94732A298A360F4B7ADF953B946F63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m15EB8875357F20B0BB3B9B46F08CE52BB2EFB3E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mEC0C07E3F1240FE22F33436EE73393CADE642D99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisNullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_m6F0A86238A5C1390B6F05CD612655B528D57B724_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisNullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_mF39BF1664E65D8DB86BA395A687DBE2F681649AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisNullable_1_t6E154519A812D040E3016229CD7638843A2CC165_m6A1D86D58315257891B8FD2689F92CA59BBB6C98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisNullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_m7CF2FDF8AADB6992BD4586950F863780F17FC23A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_m8E3895E51B1AFFC80BB073FA62BE0F1F6E8EAE77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisNullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_mD5D21B919BB5DD26A8F9BC32002D581D6C5111CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisNullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_mA9F209671FD1304F632A97626905E045055BD08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisSampleEnum_t2BD35E03D5408696826ED53B77DFC95192F17F37_mF80D395CA5906B387575C3DAECE74C73B3476919_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF84E29587D65D592332379116B8548FB2E1AADAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisString_t_mC1766A2E4F46E90D71FED8AA53DB5F8FA02C8AEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m0C75615AEC88E7F48CFFEA28106F3381F6EAD071_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m341230FF80086341D5AA0AA6CC3D1A15D114AB6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)0);
		((ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var))->___EmptyTypes_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var))->___EmptyTypes_0), (void*)L_0);
		bool L_1;
		L_1 = ReflectionUtil_CheckCanConvertEnumFuncToInt32Func_m85E5421E3FAFF00E9B61CB73D488336B495ECF9A(NULL);
		((ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var))->___U3CCanConvertEnumFuncToInt32FuncU3Ek__BackingField_1 = L_1;
		ReflectionUtil_ForceInitialize_TisString_t_mC1766A2E4F46E90D71FED8AA53DB5F8FA02C8AEC(ReflectionUtil_ForceInitialize_TisString_t_mC1766A2E4F46E90D71FED8AA53DB5F8FA02C8AEC_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m15EB8875357F20B0BB3B9B46F08CE52BB2EFB3E1(ReflectionUtil_ForceInitialize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m15EB8875357F20B0BB3B9B46F08CE52BB2EFB3E1_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mEC0C07E3F1240FE22F33436EE73393CADE642D99(ReflectionUtil_ForceInitialize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mEC0C07E3F1240FE22F33436EE73393CADE642D99_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m0C75615AEC88E7F48CFFEA28106F3381F6EAD071(ReflectionUtil_ForceInitialize_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m0C75615AEC88E7F48CFFEA28106F3381F6EAD071_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m341230FF80086341D5AA0AA6CC3D1A15D114AB6C(ReflectionUtil_ForceInitialize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m341230FF80086341D5AA0AA6CC3D1A15D114AB6C_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF84E29587D65D592332379116B8548FB2E1AADAC(ReflectionUtil_ForceInitialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF84E29587D65D592332379116B8548FB2E1AADAC_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mFEE0C4253D94732A298A360F4B7ADF953B946F63(ReflectionUtil_ForceInitialize_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mFEE0C4253D94732A298A360F4B7ADF953B946F63_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6D048FDC3395B232A34CB24024E4650E201F4D99(ReflectionUtil_ForceInitialize_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6D048FDC3395B232A34CB24024E4650E201F4D99_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_m8E3895E51B1AFFC80BB073FA62BE0F1F6E8EAE77(ReflectionUtil_ForceInitialize_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_m8E3895E51B1AFFC80BB073FA62BE0F1F6E8EAE77_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisNullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_m6F0A86238A5C1390B6F05CD612655B528D57B724(ReflectionUtil_ForceInitialize_TisNullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_m6F0A86238A5C1390B6F05CD612655B528D57B724_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisNullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_mD5D21B919BB5DD26A8F9BC32002D581D6C5111CE(ReflectionUtil_ForceInitialize_TisNullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_mD5D21B919BB5DD26A8F9BC32002D581D6C5111CE_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisNullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_mA9F209671FD1304F632A97626905E045055BD08B(ReflectionUtil_ForceInitialize_TisNullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_mA9F209671FD1304F632A97626905E045055BD08B_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisNullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_mF39BF1664E65D8DB86BA395A687DBE2F681649AD(ReflectionUtil_ForceInitialize_TisNullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_mF39BF1664E65D8DB86BA395A687DBE2F681649AD_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisNullable_1_t6E154519A812D040E3016229CD7638843A2CC165_m6A1D86D58315257891B8FD2689F92CA59BBB6C98(ReflectionUtil_ForceInitialize_TisNullable_1_t6E154519A812D040E3016229CD7638843A2CC165_m6A1D86D58315257891B8FD2689F92CA59BBB6C98_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisNullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_m7CF2FDF8AADB6992BD4586950F863780F17FC23A(ReflectionUtil_ForceInitialize_TisNullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_m7CF2FDF8AADB6992BD4586950F863780F17FC23A_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisSampleEnum_t2BD35E03D5408696826ED53B77DFC95192F17F37_mF80D395CA5906B387575C3DAECE74C73B3476919(ReflectionUtil_ForceInitialize_TisSampleEnum_t2BD35E03D5408696826ED53B77DFC95192F17F37_mF80D395CA5906B387575C3DAECE74C73B3476919_RuntimeMethod_var);
		int32_t L_2;
		L_2 = ReflectionUtil_SampleEnumMethod_mBEEDAAF0BEDCB91A5E3764EDE96AAC4E40EC8F96(NULL);
		return;
	}
}
// System.Func`2<Google.Protobuf.IMessage,System.Object> Google.Protobuf.Reflection.ReflectionUtil::CreateFuncIMessageObject(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_t9F375C79031DDA5B3E25DFCE11100F61C1E8BB2F* ReflectionUtil_CreateFuncIMessageObject_m4F4214DB260A361C64808E13C4B5CC59569BED10 (MethodInfo_t* ___method0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReflectionHelper_t9FE95AD2946D280C723A7A15903BB5A1FC9DD1E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t* L_0 = ___method0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		MethodInfo_t* L_2 = ___method0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = VirtualFuncInvoker0< Type_t* >::Invoke(38 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_2);
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = ReflectionUtil_GetReflectionHelper_mAA55F07F7128099496ADB7309B29A83BF2232C62(L_1, L_3, NULL);
		MethodInfo_t* L_5 = ___method0;
		NullCheck(L_4);
		Func_2_t9F375C79031DDA5B3E25DFCE11100F61C1E8BB2F* L_6;
		L_6 = InterfaceFuncInvoker1< Func_2_t9F375C79031DDA5B3E25DFCE11100F61C1E8BB2F*, MethodInfo_t* >::Invoke(2 /* System.Func`2<Google.Protobuf.IMessage,System.Object> Google.Protobuf.Reflection.ReflectionUtil/IReflectionHelper::CreateFuncIMessageObject(System.Reflection.MethodInfo) */, IReflectionHelper_t9FE95AD2946D280C723A7A15903BB5A1FC9DD1E6_il2cpp_TypeInfo_var, L_4, L_5);
		return L_6;
	}
}
// System.Func`2<Google.Protobuf.IMessage,System.Int32> Google.Protobuf.Reflection.ReflectionUtil::CreateFuncIMessageInt32(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_tAA7621BADE44DD8FE95297120257F58E03B4D5D3* ReflectionUtil_CreateFuncIMessageInt32_m6FEFA788CA033B010A45B47A69D187749E6D2421 (MethodInfo_t* ___method0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReflectionHelper_t9FE95AD2946D280C723A7A15903BB5A1FC9DD1E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t* L_0 = ___method0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		MethodInfo_t* L_2 = ___method0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = VirtualFuncInvoker0< Type_t* >::Invoke(38 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_2);
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = ReflectionUtil_GetReflectionHelper_mAA55F07F7128099496ADB7309B29A83BF2232C62(L_1, L_3, NULL);
		MethodInfo_t* L_5 = ___method0;
		NullCheck(L_4);
		Func_2_tAA7621BADE44DD8FE95297120257F58E03B4D5D3* L_6;
		L_6 = InterfaceFuncInvoker1< Func_2_tAA7621BADE44DD8FE95297120257F58E03B4D5D3*, MethodInfo_t* >::Invoke(0 /* System.Func`2<Google.Protobuf.IMessage,System.Int32> Google.Protobuf.Reflection.ReflectionUtil/IReflectionHelper::CreateFuncIMessageInt32(System.Reflection.MethodInfo) */, IReflectionHelper_t9FE95AD2946D280C723A7A15903BB5A1FC9DD1E6_il2cpp_TypeInfo_var, L_4, L_5);
		return L_6;
	}
}
// System.Action`2<Google.Protobuf.IMessage,System.Object> Google.Protobuf.Reflection.ReflectionUtil::CreateActionIMessageObject(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_t939E2CC3C1A7288E5CDB844113A2D158F3612171* ReflectionUtil_CreateActionIMessageObject_mD611838AE602E5A08BF6445CF397080D2A785774 (MethodInfo_t* ___method0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReflectionHelper_t9FE95AD2946D280C723A7A15903BB5A1FC9DD1E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t* L_0 = ___method0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		MethodInfo_t* L_2 = ___method0;
		NullCheck(L_2);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_3;
		L_3 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_2);
		NullCheck(L_3);
		int32_t L_4 = 0;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		Type_t* L_6;
		L_6 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_5);
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		RuntimeObject* L_7;
		L_7 = ReflectionUtil_GetReflectionHelper_mAA55F07F7128099496ADB7309B29A83BF2232C62(L_1, L_6, NULL);
		MethodInfo_t* L_8 = ___method0;
		NullCheck(L_7);
		Action_2_t939E2CC3C1A7288E5CDB844113A2D158F3612171* L_9;
		L_9 = InterfaceFuncInvoker1< Action_2_t939E2CC3C1A7288E5CDB844113A2D158F3612171*, MethodInfo_t* >::Invoke(3 /* System.Action`2<Google.Protobuf.IMessage,System.Object> Google.Protobuf.Reflection.ReflectionUtil/IReflectionHelper::CreateActionIMessageObject(System.Reflection.MethodInfo) */, IReflectionHelper_t9FE95AD2946D280C723A7A15903BB5A1FC9DD1E6_il2cpp_TypeInfo_var, L_7, L_8);
		return L_9;
	}
}
// System.Action`1<Google.Protobuf.IMessage> Google.Protobuf.Reflection.ReflectionUtil::CreateActionIMessage(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997* ReflectionUtil_CreateActionIMessage_mFC1E67BD3A4046F7AD553B883230B44D49B57893 (MethodInfo_t* ___method0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReflectionHelper_t9FE95AD2946D280C723A7A15903BB5A1FC9DD1E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t* L_0 = ___method0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = ReflectionUtil_GetReflectionHelper_mAA55F07F7128099496ADB7309B29A83BF2232C62(L_1, L_3, NULL);
		MethodInfo_t* L_5 = ___method0;
		NullCheck(L_4);
		Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997* L_6;
		L_6 = InterfaceFuncInvoker1< Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997*, MethodInfo_t* >::Invoke(1 /* System.Action`1<Google.Protobuf.IMessage> Google.Protobuf.Reflection.ReflectionUtil/IReflectionHelper::CreateActionIMessage(System.Reflection.MethodInfo) */, IReflectionHelper_t9FE95AD2946D280C723A7A15903BB5A1FC9DD1E6_il2cpp_TypeInfo_var, L_4, L_5);
		return L_6;
	}
}
// System.Func`2<Google.Protobuf.IMessage,System.Boolean> Google.Protobuf.Reflection.ReflectionUtil::CreateFuncIMessageBool(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB* ReflectionUtil_CreateFuncIMessageBool_m7AA5F2A679725EEF84BF1D404B9B4C1944299AD9 (MethodInfo_t* ___method0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReflectionHelper_t9FE95AD2946D280C723A7A15903BB5A1FC9DD1E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t* L_0 = ___method0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		MethodInfo_t* L_2 = ___method0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = VirtualFuncInvoker0< Type_t* >::Invoke(38 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_2);
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = ReflectionUtil_GetReflectionHelper_mAA55F07F7128099496ADB7309B29A83BF2232C62(L_1, L_3, NULL);
		MethodInfo_t* L_5 = ___method0;
		NullCheck(L_4);
		Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB* L_6;
		L_6 = InterfaceFuncInvoker1< Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB*, MethodInfo_t* >::Invoke(4 /* System.Func`2<Google.Protobuf.IMessage,System.Boolean> Google.Protobuf.Reflection.ReflectionUtil/IReflectionHelper::CreateFuncIMessageBool(System.Reflection.MethodInfo) */, IReflectionHelper_t9FE95AD2946D280C723A7A15903BB5A1FC9DD1E6_il2cpp_TypeInfo_var, L_4, L_5);
		return L_6;
	}
}
// System.Func`2<Google.Protobuf.IMessage,System.Boolean> Google.Protobuf.Reflection.ReflectionUtil::CreateIsInitializedCaller(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB* ReflectionUtil_CreateIsInitializedCaller_m1FE693B57BD570BC79A60981E25D7D462EEEA6AD (Type_t* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionSetReflector_1_tF98F08CD3D21D58013D9FA333E0688910796ABE1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IExtensionSetReflector_tA767EE239C958562505990FACEF80D63E1DD2EFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (ExtensionSetReflector_1_tF98F08CD3D21D58013D9FA333E0688910796ABE1_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		Type_t* L_4 = ___msg0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_4);
		NullCheck(L_1);
		Type_t* L_5;
		L_5 = VirtualFuncInvoker1< Type_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(121 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_1, L_3);
		RuntimeObject* L_6;
		L_6 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_5, NULL);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_6, IExtensionSetReflector_tA767EE239C958562505990FACEF80D63E1DD2EFC_il2cpp_TypeInfo_var)));
		Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB* L_7;
		L_7 = InterfaceFuncInvoker0< Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB* >::Invoke(0 /* System.Func`2<Google.Protobuf.IMessage,System.Boolean> Google.Protobuf.Reflection.ReflectionUtil/IExtensionSetReflector::CreateIsInitializedCaller() */, IExtensionSetReflector_tA767EE239C958562505990FACEF80D63E1DD2EFC_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_6, IExtensionSetReflector_tA767EE239C958562505990FACEF80D63E1DD2EFC_il2cpp_TypeInfo_var)));
		return L_7;
	}
}
// Google.Protobuf.Reflection.ReflectionUtil/IExtensionReflectionHelper Google.Protobuf.Reflection.ReflectionUtil::CreateExtensionHelper(Google.Protobuf.Extension)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtil_CreateExtensionHelper_mE865C94BC3C32E345E538FE83F9E83843DAAFF2A (Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A* ___extension0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionReflectionHelper_2_t139B2DC748F66E0D0655C26F99B7965F6FC9CF40_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IExtensionReflectionHelper_t504BB68BD7DC3D89E0B09CE6F2DCF8A6530BD987_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (ExtensionReflectionHelper_2_t139B2DC748F66E0D0655C26F99B7965F6FC9CF40_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A* L_4 = ___extension0;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = VirtualFuncInvoker0< Type_t* >::Invoke(4 /* System.Type Google.Protobuf.Extension::get_TargetType() */, L_4);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = L_3;
		Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A* L_7 = ___extension0;
		NullCheck(L_7);
		Type_t* L_8;
		L_8 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_7, NULL);
		NullCheck(L_8);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_9;
		L_9 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(48 /* System.Type[] System.Type::get_GenericTypeArguments() */, L_8);
		NullCheck(L_9);
		int32_t L_10 = 1;
		Type_t* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_11);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_11);
		NullCheck(L_1);
		Type_t* L_12;
		L_12 = VirtualFuncInvoker1< Type_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(121 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_1, L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13;
		Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A* L_15 = ___extension0;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_15);
		RuntimeObject* L_16;
		L_16 = Activator_CreateInstance_mDBC65647828F8A3D3E63807B5AEA4A4ECDE397E6(L_12, L_14, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_16, IExtensionReflectionHelper_t504BB68BD7DC3D89E0B09CE6F2DCF8A6530BD987_il2cpp_TypeInfo_var));
	}
}
// Google.Protobuf.Reflection.ReflectionUtil/IReflectionHelper Google.Protobuf.Reflection.ReflectionUtil::GetReflectionHelper(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtil_GetReflectionHelper_mAA55F07F7128099496ADB7309B29A83BF2232C62 (Type_t* ___t10, Type_t* ___t21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReflectionHelper_t9FE95AD2946D280C723A7A15903BB5A1FC9DD1E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionHelper_2_t15D2105C58D73327CC9E1A4BEB87E4A8E941B515_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (ReflectionHelper_2_t15D2105C58D73327CC9E1A4BEB87E4A8E941B515_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		Type_t* L_4 = ___t10;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_4);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_5 = L_3;
		Type_t* L_6 = ___t21;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_6);
		NullCheck(L_1);
		Type_t* L_7;
		L_7 = VirtualFuncInvoker1< Type_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(121 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_1, L_5);
		RuntimeObject* L_8;
		L_8 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_7, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_8, IReflectionHelper_t9FE95AD2946D280C723A7A15903BB5A1FC9DD1E6_il2cpp_TypeInfo_var));
	}
}
// System.Boolean Google.Protobuf.Reflection.ReflectionUtil::get_CanConvertEnumFuncToInt32Func()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtil_get_CanConvertEnumFuncToInt32Func_m771C31A0388921296B773F027DB9BBEA8D21B73B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		bool L_0 = ((ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var))->___U3CCanConvertEnumFuncToInt32FuncU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Boolean Google.Protobuf.Reflection.ReflectionUtil::CheckCanConvertEnumFuncToInt32Func()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtil_CheckCanConvertEnumFuncToInt32Func_m85E5421E3FAFF00E9B61CB73D488336B495ECF9A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE74B7F5EC9921B41AC1645B0E6B82427B4B0F9F5);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		MethodInfo_t* L_2;
		L_2 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_1, _stringLiteralE74B7F5EC9921B41AC1645B0E6B82427B4B0F9F5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		NullCheck(L_2);
		Delegate_t* L_5;
		L_5 = VirtualFuncInvoker1< Delegate_t*, Type_t* >::Invoke(41 /* System.Delegate System.Reflection.MethodInfo::CreateDelegate(System.Type) */, L_2, L_4);
		V_0 = (bool)1;
		goto IL_002d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0028;
		}
		throw e;
	}

CATCH_0028:
	{// begin catch(System.ArgumentException)
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002d;
	}// end catch (depth: 1)

IL_002d:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// Google.Protobuf.Reflection.ReflectionUtil/SampleEnum Google.Protobuf.Reflection.ReflectionUtil::SampleEnumMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReflectionUtil_SampleEnumMethod_mBEEDAAF0BEDCB91A5E3764EDE96AAC4E40EC8F96 (const RuntimeMethod* method) 
{
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
// System.Void Google.Protobuf.Reflection.RepeatedFieldAccessor::.ctor(System.Reflection.PropertyInfo,Google.Protobuf.Reflection.FieldDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatedFieldAccessor__ctor_m2201967E3E6604470A3675957FDC1E65621276D1 (RepeatedFieldAccessor_t0136427FB150CA5D84DB77F24A844471125C2EE0* __this, PropertyInfo_t* ___property0, FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* ___descriptor1, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = ___property0;
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_1 = ___descriptor1;
		FieldAccessorBase__ctor_m756C8E5E365EACEDB10427BA73338222AAE0C279(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.RepeatedFieldAccessor::Clear(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatedFieldAccessor_Clear_m0EF652158B6324862237D62C38F9EA0D7C6A5F7D (RepeatedFieldAccessor_t0136427FB150CA5D84DB77F24A844471125C2EE0* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___message0;
		RuntimeObject* L_1;
		L_1 = FieldAccessorBase_GetValue_mABB52C5E5391C56E34EE9254B629D0E05BD425D6(__this, L_0, NULL);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_1, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker0::Invoke(4 /* System.Void System.Collections.IList::Clear() */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Boolean Google.Protobuf.Reflection.RepeatedFieldAccessor::HasValue(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RepeatedFieldAccessor_HasValue_m24B3E4DE6466790C21312254BA5213C31A186BA7 (RepeatedFieldAccessor_t0136427FB150CA5D84DB77F24A844471125C2EE0* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD25853350172E0B01427BE241CD73C9EA8AD7200)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RepeatedFieldAccessor_HasValue_m24B3E4DE6466790C21312254BA5213C31A186BA7_RuntimeMethod_var)));
	}
}
// System.Void Google.Protobuf.Reflection.RepeatedFieldAccessor::SetValue(Google.Protobuf.IMessage,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatedFieldAccessor_SetValue_m409AC2667F08C82444547F454C86100883D2DF5A (RepeatedFieldAccessor_t0136427FB150CA5D84DB77F24A844471125C2EE0* __this, RuntimeObject* ___message0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral352DC1AD46B06976FE1F09D69AD2AE07BA1C912F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RepeatedFieldAccessor_SetValue_m409AC2667F08C82444547F454C86100883D2DF5A_RuntimeMethod_var)));
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
// System.Void Google.Protobuf.Reflection.ServiceDescriptor::.ctor(Google.Protobuf.Reflection.ServiceDescriptorProto,Google.Protobuf.Reflection.FileDescriptor,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceDescriptor__ctor_m70D586A7D348405DE1CCE844D4E855FB93602CF9 (ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* __this, ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* ___proto0, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file1, int32_t ___index2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptorUtil_ConvertAndMakeReadOnly_TisMethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A_TisMethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96_m03E8C603AF2B4DC1E3C48881C7C22ECCA8CBE6BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedConverter_2_tBFDF7A55E5AD530A48988CD0D6F975525A8A1543_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_mC2FCD36B70CE2EF303083CBB57F0622579EED5FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t0462B10BAFB8EAF0E79D516CCE2FF284B4B1EED2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_t0462B10BAFB8EAF0E79D516CCE2FF284B4B1EED2* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_t0462B10BAFB8EAF0E79D516CCE2FF284B4B1EED2* L_0 = (U3CU3Ec__DisplayClass2_0_t0462B10BAFB8EAF0E79D516CCE2FF284B4B1EED2*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t0462B10BAFB8EAF0E79D516CCE2FF284B4B1EED2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_m883D83E52598F0FD9D1E08791BF725660C24A370(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t0462B10BAFB8EAF0E79D516CCE2FF284B4B1EED2* L_1 = V_0;
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_2 = ___file1;
		NullCheck(L_1);
		L_1->___file_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___file_0), (void*)L_2);
		U3CU3Ec__DisplayClass2_0_t0462B10BAFB8EAF0E79D516CCE2FF284B4B1EED2* L_3 = V_0;
		NullCheck(L_3);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_4 = L_3->___file_0;
		U3CU3Ec__DisplayClass2_0_t0462B10BAFB8EAF0E79D516CCE2FF284B4B1EED2* L_5 = V_0;
		NullCheck(L_5);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_6 = L_5->___file_0;
		ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* L_7 = ___proto0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = ServiceDescriptorProto_get_Name_m335601B56CC8C6E93B045072F27AC8D13C9068DC(L_7, NULL);
		NullCheck(L_6);
		String_t* L_9;
		L_9 = FileDescriptor_ComputeFullName_mCBDE9B2BB4FAD55885BE530C106C278E27E4D11F(L_6, (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*)NULL, L_8, NULL);
		int32_t L_10 = ___index2;
		DescriptorBase__ctor_m002B5D6404EE5F2190E0DC0162F153B9AC6F454A(__this, L_4, L_9, L_10, NULL);
		U3CU3Ec__DisplayClass2_0_t0462B10BAFB8EAF0E79D516CCE2FF284B4B1EED2* L_11 = V_0;
		NullCheck(L_11);
		L_11->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___U3CU3E4__this_1), (void*)__this);
		ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* L_12 = ___proto0;
		__this->___proto_3 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___proto_3), (void*)L_12);
		ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* L_13 = ___proto0;
		NullCheck(L_13);
		RepeatedField_1_tDBB28893EE104846AAAF4D79249AD6254CB6EC7E* L_14;
		L_14 = ServiceDescriptorProto_get_Method_mD603FB2CDAA65A667B86A080996B8FFA01FA3E7C_inline(L_13, NULL);
		U3CU3Ec__DisplayClass2_0_t0462B10BAFB8EAF0E79D516CCE2FF284B4B1EED2* L_15 = V_0;
		IndexedConverter_2_tBFDF7A55E5AD530A48988CD0D6F975525A8A1543* L_16 = (IndexedConverter_2_tBFDF7A55E5AD530A48988CD0D6F975525A8A1543*)il2cpp_codegen_object_new(IndexedConverter_2_tBFDF7A55E5AD530A48988CD0D6F975525A8A1543_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		IndexedConverter_2__ctor_m56898EAD4712836360F3B03E6F5EE4AF24B5FFC7(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_mC2FCD36B70CE2EF303083CBB57F0622579EED5FA_RuntimeMethod_var), NULL);
		RuntimeObject* L_17;
		L_17 = DescriptorUtil_ConvertAndMakeReadOnly_TisMethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A_TisMethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96_m03E8C603AF2B4DC1E3C48881C7C22ECCA8CBE6BC(L_14, L_16, DescriptorUtil_ConvertAndMakeReadOnly_TisMethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A_TisMethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96_m03E8C603AF2B4DC1E3C48881C7C22ECCA8CBE6BC_RuntimeMethod_var);
		__this->___methods_4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___methods_4), (void*)L_17);
		U3CU3Ec__DisplayClass2_0_t0462B10BAFB8EAF0E79D516CCE2FF284B4B1EED2* L_18 = V_0;
		NullCheck(L_18);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_19 = L_18->___file_0;
		NullCheck(L_19);
		DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* L_20;
		L_20 = FileDescriptor_get_DescriptorPool_m2C9A3FFBC669C3DAFDD5C7DBFE51EF37094021CD_inline(L_19, NULL);
		NullCheck(L_20);
		DescriptorPool_AddSymbol_m9F1D72975649FB85CEE9B12FA92EFC6C30B49614(L_20, __this, NULL);
		return;
	}
}
// System.String Google.Protobuf.Reflection.ServiceDescriptor::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServiceDescriptor_get_Name_m58AA0169F702A1D78170286760149C76822EF968 (ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* __this, const RuntimeMethod* method) 
{
	{
		ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* L_0 = __this->___proto_3;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = ServiceDescriptorProto_get_Name_m335601B56CC8C6E93B045072F27AC8D13C9068DC(L_0, NULL);
		return L_1;
	}
}
// System.Collections.Generic.IReadOnlyList`1<Google.Protobuf.Reflection.DescriptorBase> Google.Protobuf.Reflection.ServiceDescriptor::GetNestedDescriptorListForField(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceDescriptor_GetNestedDescriptorListForField_mB949A7F32A364F678B872EECC2F570AA43922A79 (ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* __this, int32_t ___fieldNumber0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_tE8529F2628C6B785ECC52D9CB4B1136C1013AE13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___fieldNumber0;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0010;
		}
	}
	{
		RuntimeObject* L_1 = __this->___methods_4;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IReadOnlyList_1_tE8529F2628C6B785ECC52D9CB4B1136C1013AE13_il2cpp_TypeInfo_var));
	}

IL_0010:
	{
		return (RuntimeObject*)NULL;
	}
}
// Google.Protobuf.Reflection.ServiceDescriptorProto Google.Protobuf.Reflection.ServiceDescriptor::get_Proto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* ServiceDescriptor_get_Proto_m6E7C4568043ACAAFE2D6CFEA8AD5B97CB3350170 (ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* __this, const RuntimeMethod* method) 
{
	{
		ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* L_0 = __this->___proto_3;
		return L_0;
	}
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MethodDescriptor> Google.Protobuf.Reflection.ServiceDescriptor::get_Methods()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceDescriptor_get_Methods_m4A4C612FE1BAFCAF8F64AEFB6E10B55233778226 (ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___methods_4;
		return L_0;
	}
}
// Google.Protobuf.Reflection.MethodDescriptor Google.Protobuf.Reflection.ServiceDescriptor::FindMethodByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* ServiceDescriptor_FindMethodByName_m17C11394D8051DEA2AD68A88145FF5DAD822835C (ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptorPool_FindSymbol_TisMethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96_mB3A2914B4CA53359B39647DA083161550B2B00E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0;
		L_0 = DescriptorBase_get_File_m4ADE18F8259D6F6DEC90FEEDCDCFAD1101AAE7BF_inline(__this, NULL);
		NullCheck(L_0);
		DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* L_1;
		L_1 = FileDescriptor_get_DescriptorPool_m2C9A3FFBC669C3DAFDD5C7DBFE51EF37094021CD_inline(L_0, NULL);
		String_t* L_2;
		L_2 = DescriptorBase_get_FullName_m09E17EE9C9184A528B154958832FDA2977D8B32D_inline(__this, NULL);
		String_t* L_3 = ___name0;
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_2, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_3, NULL);
		NullCheck(L_1);
		MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* L_5;
		L_5 = DescriptorPool_FindSymbol_TisMethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96_mB3A2914B4CA53359B39647DA083161550B2B00E6(L_1, L_4, DescriptorPool_FindSymbol_TisMethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96_mB3A2914B4CA53359B39647DA083161550B2B00E6_RuntimeMethod_var);
		return L_5;
	}
}
// Google.Protobuf.Reflection.CustomOptions Google.Protobuf.Reflection.ServiceDescriptor::get_CustomOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* ServiceDescriptor_get_CustomOptions_m4678F3C647C753BFC109C8DCD0464D88D36ABB50 (ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionSet_1_get_ValuesByNumber_m2259912E80B0172D23AD9DF3A20D485B61EF2F43_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ServiceOptions_t7A8BC19A9254D2E797A516E26929EE2B1B12D334* G_B2_0 = NULL;
	ServiceOptions_t7A8BC19A9254D2E797A516E26929EE2B1B12D334* G_B1_0 = NULL;
	Dictionary_2_t7D99B8C24B0BFFDE97F3C514C8E7AA5FA84C046D* G_B5_0 = NULL;
	ExtensionSet_1_t89FDE7093BD8C1D18C53FBFAC7040214AE9BD25D* G_B4_0 = NULL;
	ExtensionSet_1_t89FDE7093BD8C1D18C53FBFAC7040214AE9BD25D* G_B3_0 = NULL;
	{
		ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* L_0;
		L_0 = ServiceDescriptor_get_Proto_m6E7C4568043ACAAFE2D6CFEA8AD5B97CB3350170_inline(__this, NULL);
		NullCheck(L_0);
		ServiceOptions_t7A8BC19A9254D2E797A516E26929EE2B1B12D334* L_1;
		L_1 = ServiceDescriptorProto_get_Options_mC879FAA80CB6FF261B987734BF999D71E2013E03_inline(L_0, NULL);
		ServiceOptions_t7A8BC19A9254D2E797A516E26929EE2B1B12D334* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		G_B5_0 = ((Dictionary_2_t7D99B8C24B0BFFDE97F3C514C8E7AA5FA84C046D*)(NULL));
		goto IL_0023;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		ExtensionSet_1_t89FDE7093BD8C1D18C53FBFAC7040214AE9BD25D* L_3 = G_B2_0->____extensions_2;
		ExtensionSet_1_t89FDE7093BD8C1D18C53FBFAC7040214AE9BD25D* L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_001e;
		}
	}
	{
		G_B5_0 = ((Dictionary_2_t7D99B8C24B0BFFDE97F3C514C8E7AA5FA84C046D*)(NULL));
		goto IL_0023;
	}

IL_001e:
	{
		NullCheck(G_B4_0);
		Dictionary_2_t7D99B8C24B0BFFDE97F3C514C8E7AA5FA84C046D* L_5;
		L_5 = ExtensionSet_1_get_ValuesByNumber_m2259912E80B0172D23AD9DF3A20D485B61EF2F43_inline(G_B4_0, ExtensionSet_1_get_ValuesByNumber_m2259912E80B0172D23AD9DF3A20D485B61EF2F43_RuntimeMethod_var);
		G_B5_0 = L_5;
	}

IL_0023:
	{
		CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* L_6 = (CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C*)il2cpp_codegen_object_new(CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		CustomOptions__ctor_m1210A6A5726546C7862286CD9BADFF187FF53B11(L_6, G_B5_0, NULL);
		return L_6;
	}
}
// Google.Protobuf.Reflection.ServiceOptions Google.Protobuf.Reflection.ServiceDescriptor::GetOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceOptions_t7A8BC19A9254D2E797A516E26929EE2B1B12D334* ServiceDescriptor_GetOptions_m272F7E90E2AADF1B15E84642188D222F54B12436 (ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* __this, const RuntimeMethod* method) 
{
	ServiceOptions_t7A8BC19A9254D2E797A516E26929EE2B1B12D334* G_B2_0 = NULL;
	ServiceOptions_t7A8BC19A9254D2E797A516E26929EE2B1B12D334* G_B1_0 = NULL;
	{
		ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* L_0;
		L_0 = ServiceDescriptor_get_Proto_m6E7C4568043ACAAFE2D6CFEA8AD5B97CB3350170_inline(__this, NULL);
		NullCheck(L_0);
		ServiceOptions_t7A8BC19A9254D2E797A516E26929EE2B1B12D334* L_1;
		L_1 = ServiceDescriptorProto_get_Options_mC879FAA80CB6FF261B987734BF999D71E2013E03_inline(L_0, NULL);
		ServiceOptions_t7A8BC19A9254D2E797A516E26929EE2B1B12D334* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
	}
	{
		return (ServiceOptions_t7A8BC19A9254D2E797A516E26929EE2B1B12D334*)NULL;
	}

IL_0011:
	{
		NullCheck(G_B2_0);
		ServiceOptions_t7A8BC19A9254D2E797A516E26929EE2B1B12D334* L_3;
		L_3 = ServiceOptions_Clone_m2C15B06C366456C5604C711169007950E99C18C0(G_B2_0, NULL);
		return L_3;
	}
}
// System.Void Google.Protobuf.Reflection.ServiceDescriptor::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceDescriptor_CrossLink_mF0C898B5054B4C42EAD3B06FD4089772D3D9B0E8 (ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t898B7976CAE5D33C1622374D2775A0163540BD49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tC133879EE4DE28AA1E795779EEAB7FFB6DFB65C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___methods_4;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MethodDescriptor>::GetEnumerator() */, IEnumerable_1_t898B7976CAE5D33C1622374D2775A0163540BD49_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_002c;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_002c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0019_1;
			}

IL_000e_1:
			{
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* L_5;
				L_5 = InterfaceFuncInvoker0< MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.MethodDescriptor>::get_Current() */, IEnumerator_1_tC133879EE4DE28AA1E795779EEAB7FFB6DFB65C6_il2cpp_TypeInfo_var, L_4);
				NullCheck(L_5);
				MethodDescriptor_CrossLink_mDA009B32AEA452674E144983DE399890DC1340D7(L_5, NULL);
			}

IL_0019_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				bool L_7;
				L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_6);
				if (L_7)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_002d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002d:
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
// System.Void Google.Protobuf.Reflection.ServiceDescriptor/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m883D83E52598F0FD9D1E08791BF725660C24A370 (U3CU3Ec__DisplayClass2_0_t0462B10BAFB8EAF0E79D516CCE2FF284B4B1EED2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Google.Protobuf.Reflection.MethodDescriptor Google.Protobuf.Reflection.ServiceDescriptor/<>c__DisplayClass2_0::<.ctor>b__0(Google.Protobuf.Reflection.MethodDescriptorProto,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_mC2FCD36B70CE2EF303083CBB57F0622579EED5FA (U3CU3Ec__DisplayClass2_0_t0462B10BAFB8EAF0E79D516CCE2FF284B4B1EED2* __this, MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* ___method0, int32_t ___i1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* L_0 = ___method0;
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_1 = __this->___file_0;
		ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* L_2 = __this->___U3CU3E4__this_1;
		int32_t L_3 = ___i1;
		MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* L_4 = (MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96*)il2cpp_codegen_object_new(MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		MethodDescriptor__ctor_m14EC122B2999003C0BA7C543F9ED0F728AA90FF2(L_4, L_0, L_1, L_2, L_3, NULL);
		return L_4;
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
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor::.ctor(System.Reflection.PropertyInfo,Google.Protobuf.Reflection.FieldDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleFieldAccessor__ctor_m667E244B7DF3B7F22AF99FA08D0FC4FEED4A74D3 (SingleFieldAccessor_tDC6937B124A5282A5302B6991E6D2A315BD49077* __this, PropertyInfo_t* ___property0, FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* ___descriptor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__3_4_mF44BF9FB9C08A8BB6AAF0F09E7581DDF7018FEAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__0_mAF3D5411FE35AD0EFBD5E12470674FC634E93B5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__1_m16719DC248EB25E7A58FB17C7CB19F03FB12A330_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_t7699988D597E698E40B86C773DD10233174D77FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_1_U3C_ctorU3Eb__2_mEE542954687E17AC707AF7EBFEB4784F93B6BCF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_1_U3C_ctorU3Eb__3_m14097EA7E88688301DA4510228374B969D7C6653_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_1_tA67F0AC390C7692ED34D30C8FF196E46D3C848DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_2_U3C_ctorU3Eb__5_m88B7DF89D7EBBEB5CB26825C08A40681EF2560DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_2_t4163C2A623E2EFB73A5AF767786C921A0D088750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE711B535F3AE500B935BE1C9A071DB25F2437DFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral795419E0019C339EB191F029F9E7E9EBD13BCFAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_t7699988D597E698E40B86C773DD10233174D77FE* V_0 = NULL;
	U3CU3Ec__DisplayClass3_1_tA67F0AC390C7692ED34D30C8FF196E46D3C848DC* V_1 = NULL;
	MethodInfo_t* V_2 = NULL;
	MethodInfo_t* V_3 = NULL;
	U3CU3Ec__DisplayClass3_2_t4163C2A623E2EFB73A5AF767786C921A0D088750* V_4 = NULL;
	Type_t* V_5 = NULL;
	Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB* G_B15_0 = NULL;
	SingleFieldAccessor_tDC6937B124A5282A5302B6991E6D2A315BD49077* G_B15_1 = NULL;
	Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB* G_B14_0 = NULL;
	SingleFieldAccessor_tDC6937B124A5282A5302B6991E6D2A315BD49077* G_B14_1 = NULL;
	U3CU3Ec__DisplayClass3_2_t4163C2A623E2EFB73A5AF767786C921A0D088750* G_B19_0 = NULL;
	U3CU3Ec__DisplayClass3_2_t4163C2A623E2EFB73A5AF767786C921A0D088750* G_B16_0 = NULL;
	U3CU3Ec__DisplayClass3_2_t4163C2A623E2EFB73A5AF767786C921A0D088750* G_B18_0 = NULL;
	U3CU3Ec__DisplayClass3_2_t4163C2A623E2EFB73A5AF767786C921A0D088750* G_B17_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	U3CU3Ec__DisplayClass3_2_t4163C2A623E2EFB73A5AF767786C921A0D088750* G_B20_1 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_t7699988D597E698E40B86C773DD10233174D77FE* L_0 = (U3CU3Ec__DisplayClass3_0_t7699988D597E698E40B86C773DD10233174D77FE*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t7699988D597E698E40B86C773DD10233174D77FE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass3_0__ctor_m5A24E4916BF14BB9949EF1395C053CDAD064B128(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_t7699988D597E698E40B86C773DD10233174D77FE* L_1 = V_0;
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_2 = ___descriptor1;
		NullCheck(L_1);
		L_1->___descriptor_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___descriptor_1), (void*)L_2);
		PropertyInfo_t* L_3 = ___property0;
		U3CU3Ec__DisplayClass3_0_t7699988D597E698E40B86C773DD10233174D77FE* L_4 = V_0;
		NullCheck(L_4);
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_5 = L_4->___descriptor_1;
		FieldAccessorBase__ctor_m756C8E5E365EACEDB10427BA73338222AAE0C279(__this, L_3, L_5, NULL);
		U3CU3Ec__DisplayClass3_0_t7699988D597E698E40B86C773DD10233174D77FE* L_6 = V_0;
		NullCheck(L_6);
		L_6->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___U3CU3E4__this_0), (void*)__this);
		PropertyInfo_t* L_7 = ___property0;
		NullCheck(L_7);
		bool L_8;
		L_8 = VirtualFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_7);
		if (L_8)
		{
			goto IL_0034;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral12FC0BF60BCE54234CA58CFD037BD8E5ADE3F2FB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SingleFieldAccessor__ctor_m667E244B7DF3B7F22AF99FA08D0FC4FEED4A74D3_RuntimeMethod_var)));
	}

IL_0034:
	{
		PropertyInfo_t* L_10 = ___property0;
		NullCheck(L_10);
		MethodInfo_t* L_11;
		L_11 = PropertyInfo_GetSetMethod_mA16842ADAD11B6F70F4EDCA2805C999E378C4C8B(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		Action_2_t939E2CC3C1A7288E5CDB844113A2D158F3612171* L_12;
		L_12 = ReflectionUtil_CreateActionIMessageObject_mD611838AE602E5A08BF6445CF397080D2A785774(L_11, NULL);
		__this->___setValueDelegate_2 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___setValueDelegate_2), (void*)L_12);
		U3CU3Ec__DisplayClass3_0_t7699988D597E698E40B86C773DD10233174D77FE* L_13 = V_0;
		NullCheck(L_13);
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_14 = L_13->___descriptor_1;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = FieldDescriptor_get_FieldType_mD7E8085F4F0B7FCED231CB145D24118346428FB5_inline(L_14, NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0079;
		}
	}
	{
		U3CU3Ec__DisplayClass3_0_t7699988D597E698E40B86C773DD10233174D77FE* L_16 = V_0;
		Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB* L_17 = (Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB*)il2cpp_codegen_object_new(Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Func_2__ctor_m4AB35F331AB4E88428875BD2C6E7EBAC698F4F43(L_17, L_16, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__0_mAF3D5411FE35AD0EFBD5E12470674FC634E93B5F_RuntimeMethod_var), NULL);
		__this->___hasDelegate_4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hasDelegate_4), (void*)L_17);
		U3CU3Ec__DisplayClass3_0_t7699988D597E698E40B86C773DD10233174D77FE* L_18 = V_0;
		Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997* L_19 = (Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997*)il2cpp_codegen_object_new(Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Action_1__ctor_m489692DDBF6D8FDD191397E1A803CDC0D2D74DF2(L_19, L_18, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__1_m16719DC248EB25E7A58FB17C7CB19F03FB12A330_RuntimeMethod_var), NULL);
		__this->___clearDelegate_3 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clearDelegate_3), (void*)L_19);
		return;
	}

IL_0079:
	{
		U3CU3Ec__DisplayClass3_0_t7699988D597E698E40B86C773DD10233174D77FE* L_20 = V_0;
		NullCheck(L_20);
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_21 = L_20->___descriptor_1;
		NullCheck(L_21);
		OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* L_22;
		L_22 = FieldDescriptor_get_RealContainingOneof_mEB09ABE451B1AEFF7D89E0D2FD1FEF9BA6054515(L_21, NULL);
		if (!L_22)
		{
			goto IL_00d3;
		}
	}
	{
		U3CU3Ec__DisplayClass3_1_tA67F0AC390C7692ED34D30C8FF196E46D3C848DC* L_23 = (U3CU3Ec__DisplayClass3_1_tA67F0AC390C7692ED34D30C8FF196E46D3C848DC*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_1_tA67F0AC390C7692ED34D30C8FF196E46D3C848DC_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		U3CU3Ec__DisplayClass3_1__ctor_m8B0684FEF305ABB523FA987280A461802696EEED(L_23, NULL);
		V_1 = L_23;
		U3CU3Ec__DisplayClass3_1_tA67F0AC390C7692ED34D30C8FF196E46D3C848DC* L_24 = V_1;
		U3CU3Ec__DisplayClass3_0_t7699988D597E698E40B86C773DD10233174D77FE* L_25 = V_0;
		NullCheck(L_24);
		L_24->___CSU24U3CU3E8__locals1_1 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->___CSU24U3CU3E8__locals1_1), (void*)L_25);
		U3CU3Ec__DisplayClass3_1_tA67F0AC390C7692ED34D30C8FF196E46D3C848DC* L_26 = V_1;
		U3CU3Ec__DisplayClass3_1_tA67F0AC390C7692ED34D30C8FF196E46D3C848DC* L_27 = V_1;
		NullCheck(L_27);
		U3CU3Ec__DisplayClass3_0_t7699988D597E698E40B86C773DD10233174D77FE* L_28 = L_27->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_28);
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_29 = L_28->___descriptor_1;
		NullCheck(L_29);
		OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* L_30;
		L_30 = FieldDescriptor_get_RealContainingOneof_mEB09ABE451B1AEFF7D89E0D2FD1FEF9BA6054515(L_29, NULL);
		NullCheck(L_30);
		OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* L_31;
		L_31 = OneofDescriptor_get_Accessor_m6EBDA81DDBD7EF8ACCA4FBF4F52175C73726A0E1_inline(L_30, NULL);
		NullCheck(L_26);
		L_26->___oneofAccessor_0 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&L_26->___oneofAccessor_0), (void*)L_31);
		U3CU3Ec__DisplayClass3_1_tA67F0AC390C7692ED34D30C8FF196E46D3C848DC* L_32 = V_1;
		Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB* L_33 = (Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB*)il2cpp_codegen_object_new(Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Func_2__ctor_m4AB35F331AB4E88428875BD2C6E7EBAC698F4F43(L_33, L_32, (intptr_t)((void*)U3CU3Ec__DisplayClass3_1_U3C_ctorU3Eb__2_mEE542954687E17AC707AF7EBFEB4784F93B6BCF6_RuntimeMethod_var), NULL);
		__this->___hasDelegate_4 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hasDelegate_4), (void*)L_33);
		U3CU3Ec__DisplayClass3_1_tA67F0AC390C7692ED34D30C8FF196E46D3C848DC* L_34 = V_1;
		Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997* L_35 = (Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997*)il2cpp_codegen_object_new(Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		Action_1__ctor_m489692DDBF6D8FDD191397E1A803CDC0D2D74DF2(L_35, L_34, (intptr_t)((void*)U3CU3Ec__DisplayClass3_1_U3C_ctorU3Eb__3_m14097EA7E88688301DA4510228374B969D7C6653_RuntimeMethod_var), NULL);
		__this->___clearDelegate_3 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clearDelegate_3), (void*)L_35);
		return;
	}

IL_00d3:
	{
		U3CU3Ec__DisplayClass3_0_t7699988D597E698E40B86C773DD10233174D77FE* L_36 = V_0;
		NullCheck(L_36);
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_37 = L_36->___descriptor_1;
		NullCheck(L_37);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_38;
		L_38 = DescriptorBase_get_File_m4ADE18F8259D6F6DEC90FEEDCDCFAD1101AAE7BF_inline(L_37, NULL);
		NullCheck(L_38);
		int32_t L_39;
		L_39 = FileDescriptor_get_Syntax_mB5C6EF1E70A665E41B1627C0FE2A87F8B416C033_inline(L_38, NULL);
		if (!L_39)
		{
			goto IL_00fa;
		}
	}
	{
		U3CU3Ec__DisplayClass3_0_t7699988D597E698E40B86C773DD10233174D77FE* L_40 = V_0;
		NullCheck(L_40);
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_41 = L_40->___descriptor_1;
		NullCheck(L_41);
		FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* L_42;
		L_42 = FieldDescriptor_get_Proto_m3FDA5E399D03D9BE3D346D654E0F1CC1DD4F2D19_inline(L_41, NULL);
		NullCheck(L_42);
		bool L_43;
		L_43 = FieldDescriptorProto_get_Proto3Optional_mC87D925C9EA4886AB63A882C52B2CC146947868A(L_42, NULL);
		if (!L_43)
		{
			goto IL_017d;
		}
	}

IL_00fa:
	{
		PropertyInfo_t* L_44 = ___property0;
		NullCheck(L_44);
		Type_t* L_45;
		L_45 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_44);
		PropertyInfo_t* L_46 = ___property0;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_46);
		String_t* L_48;
		L_48 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral795419E0019C339EB191F029F9E7E9EBD13BCFAD, L_47, NULL);
		PropertyInfo_t* L_49;
		L_49 = RuntimeReflectionExtensions_GetRuntimeProperty_mA07658BCB3B542E31B687781107DE2ED7B07AEFB(L_45, L_48, NULL);
		NullCheck(L_49);
		MethodInfo_t* L_50;
		L_50 = VirtualFuncInvoker0< MethodInfo_t* >::Invoke(19 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::get_GetMethod() */, L_49);
		V_2 = L_50;
		MethodInfo_t* L_51 = V_2;
		bool L_52;
		L_52 = MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1(L_51, (MethodInfo_t*)NULL, NULL);
		if (!L_52)
		{
			goto IL_012f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_53 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_53);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_53, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral09353E39448C302F003639F3B4C81D6B132357DE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_53, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SingleFieldAccessor__ctor_m667E244B7DF3B7F22AF99FA08D0FC4FEED4A74D3_RuntimeMethod_var)));
	}

IL_012f:
	{
		MethodInfo_t* L_54 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB* L_55;
		L_55 = ReflectionUtil_CreateFuncIMessageBool_m7AA5F2A679725EEF84BF1D404B9B4C1944299AD9(L_54, NULL);
		__this->___hasDelegate_4 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hasDelegate_4), (void*)L_55);
		PropertyInfo_t* L_56 = ___property0;
		NullCheck(L_56);
		Type_t* L_57;
		L_57 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_56);
		PropertyInfo_t* L_58 = ___property0;
		NullCheck(L_58);
		String_t* L_59;
		L_59 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_58);
		String_t* L_60;
		L_60 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54, L_59, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_61 = ((ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var))->___EmptyTypes_0;
		MethodInfo_t* L_62;
		L_62 = RuntimeReflectionExtensions_GetRuntimeMethod_m4759237A7FCCC75A536DB354345AFB0E44687B3D(L_57, L_60, L_61, NULL);
		V_3 = L_62;
		MethodInfo_t* L_63 = V_3;
		bool L_64;
		L_64 = MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1(L_63, (MethodInfo_t*)NULL, NULL);
		if (!L_64)
		{
			goto IL_0170;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_65 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_65);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_65, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral09353E39448C302F003639F3B4C81D6B132357DE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_65, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SingleFieldAccessor__ctor_m667E244B7DF3B7F22AF99FA08D0FC4FEED4A74D3_RuntimeMethod_var)));
	}

IL_0170:
	{
		MethodInfo_t* L_66 = V_3;
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997* L_67;
		L_67 = ReflectionUtil_CreateActionIMessage_mFC1E67BD3A4046F7AD553B883230B44D49B57893(L_66, NULL);
		__this->___clearDelegate_3 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clearDelegate_3), (void*)L_67);
		return;
	}

IL_017d:
	{
		U3CU3Ec__DisplayClass3_2_t4163C2A623E2EFB73A5AF767786C921A0D088750* L_68 = (U3CU3Ec__DisplayClass3_2_t4163C2A623E2EFB73A5AF767786C921A0D088750*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_2_t4163C2A623E2EFB73A5AF767786C921A0D088750_il2cpp_TypeInfo_var);
		NullCheck(L_68);
		U3CU3Ec__DisplayClass3_2__ctor_m0F8436BA813562271351FE848AD63FD5749CFDD7(L_68, NULL);
		V_4 = L_68;
		U3CU3Ec__DisplayClass3_2_t4163C2A623E2EFB73A5AF767786C921A0D088750* L_69 = V_4;
		U3CU3Ec__DisplayClass3_0_t7699988D597E698E40B86C773DD10233174D77FE* L_70 = V_0;
		NullCheck(L_69);
		L_69->___CSU24U3CU3E8__locals2_1 = L_70;
		Il2CppCodeGenWriteBarrier((void**)(&L_69->___CSU24U3CU3E8__locals2_1), (void*)L_70);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tE711B535F3AE500B935BE1C9A071DB25F2437DFF_il2cpp_TypeInfo_var);
		Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB* L_71 = ((U3CU3Ec_tE711B535F3AE500B935BE1C9A071DB25F2437DFF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE711B535F3AE500B935BE1C9A071DB25F2437DFF_il2cpp_TypeInfo_var))->___U3CU3E9__3_4_1;
		Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB* L_72 = L_71;
		G_B14_0 = L_72;
		G_B14_1 = __this;
		if (L_72)
		{
			G_B15_0 = L_72;
			G_B15_1 = __this;
			goto IL_01ac;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tE711B535F3AE500B935BE1C9A071DB25F2437DFF_il2cpp_TypeInfo_var);
		U3CU3Ec_tE711B535F3AE500B935BE1C9A071DB25F2437DFF* L_73 = ((U3CU3Ec_tE711B535F3AE500B935BE1C9A071DB25F2437DFF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE711B535F3AE500B935BE1C9A071DB25F2437DFF_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB* L_74 = (Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB*)il2cpp_codegen_object_new(Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB_il2cpp_TypeInfo_var);
		NullCheck(L_74);
		Func_2__ctor_m4AB35F331AB4E88428875BD2C6E7EBAC698F4F43(L_74, L_73, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__3_4_mF44BF9FB9C08A8BB6AAF0F09E7581DDF7018FEAB_RuntimeMethod_var), NULL);
		Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB* L_75 = L_74;
		((U3CU3Ec_tE711B535F3AE500B935BE1C9A071DB25F2437DFF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE711B535F3AE500B935BE1C9A071DB25F2437DFF_il2cpp_TypeInfo_var))->___U3CU3E9__3_4_1 = L_75;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tE711B535F3AE500B935BE1C9A071DB25F2437DFF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE711B535F3AE500B935BE1C9A071DB25F2437DFF_il2cpp_TypeInfo_var))->___U3CU3E9__3_4_1), (void*)L_75);
		G_B15_0 = L_75;
		G_B15_1 = G_B14_1;
	}

IL_01ac:
	{
		NullCheck(G_B15_1);
		G_B15_1->___hasDelegate_4 = G_B15_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B15_1->___hasDelegate_4), (void*)G_B15_0);
		PropertyInfo_t* L_76 = ___property0;
		NullCheck(L_76);
		Type_t* L_77;
		L_77 = VirtualFuncInvoker0< Type_t* >::Invoke(15 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_76);
		V_5 = L_77;
		U3CU3Ec__DisplayClass3_2_t4163C2A623E2EFB73A5AF767786C921A0D088750* L_78 = V_4;
		Type_t* L_79 = V_5;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_80 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_81;
		L_81 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_80, NULL);
		bool L_82;
		L_82 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_79, L_81, NULL);
		G_B16_0 = L_78;
		if (L_82)
		{
			G_B19_0 = L_78;
			goto IL_01f1;
		}
	}
	{
		Type_t* L_83 = V_5;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_84 = { reinterpret_cast<intptr_t> (ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_85;
		L_85 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_84, NULL);
		bool L_86;
		L_86 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_83, L_85, NULL);
		G_B17_0 = G_B16_0;
		if (L_86)
		{
			G_B18_0 = G_B16_0;
			goto IL_01ea;
		}
	}
	{
		Type_t* L_87 = V_5;
		RuntimeObject* L_88;
		L_88 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_87, NULL);
		G_B20_0 = L_88;
		G_B20_1 = G_B17_0;
		goto IL_01f6;
	}

IL_01ea:
	{
		il2cpp_codegen_runtime_class_init_inline(ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592_il2cpp_TypeInfo_var);
		ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* L_89;
		L_89 = ByteString_get_Empty_m2251FAD9C8D09FA127E81F228DF5A60D4EE3F414_inline(NULL);
		G_B20_0 = ((RuntimeObject*)(L_89));
		G_B20_1 = G_B18_0;
		goto IL_01f6;
	}

IL_01f1:
	{
		G_B20_0 = ((RuntimeObject*)(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709));
		G_B20_1 = G_B19_0;
	}

IL_01f6:
	{
		NullCheck(G_B20_1);
		G_B20_1->___defaultValue_0 = G_B20_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B20_1->___defaultValue_0), (void*)G_B20_0);
		U3CU3Ec__DisplayClass3_2_t4163C2A623E2EFB73A5AF767786C921A0D088750* L_90 = V_4;
		Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997* L_91 = (Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997*)il2cpp_codegen_object_new(Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997_il2cpp_TypeInfo_var);
		NullCheck(L_91);
		Action_1__ctor_m489692DDBF6D8FDD191397E1A803CDC0D2D74DF2(L_91, L_90, (intptr_t)((void*)U3CU3Ec__DisplayClass3_2_U3C_ctorU3Eb__5_m88B7DF89D7EBBEB5CB26825C08A40681EF2560DA_RuntimeMethod_var), NULL);
		__this->___clearDelegate_3 = L_91;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clearDelegate_3), (void*)L_91);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor::Clear(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleFieldAccessor_Clear_m566A232704D21EE0842CDE268B0118B11140C874 (SingleFieldAccessor_tDC6937B124A5282A5302B6991E6D2A315BD49077* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	{
		Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997* L_0 = __this->___clearDelegate_3;
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		Action_1_Invoke_mB741A5209F94DEA28AF75D2736CCB6CA8C50C133_inline(L_0, L_1, NULL);
		return;
	}
}
// System.Boolean Google.Protobuf.Reflection.SingleFieldAccessor::HasValue(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SingleFieldAccessor_HasValue_mD6AC8BA2E3BF277ADA88927EDF683E1C00E6055C (SingleFieldAccessor_tDC6937B124A5282A5302B6991E6D2A315BD49077* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	{
		Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB* L_0 = __this->___hasDelegate_4;
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Func_2_Invoke_m5C27E0BEEBC98CF7C0CD49A54934D4751F6FB718_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor::SetValue(Google.Protobuf.IMessage,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleFieldAccessor_SetValue_m19D2D0CE097277611660CD0D0AB29A6234ECA907 (SingleFieldAccessor_tDC6937B124A5282A5302B6991E6D2A315BD49077* __this, RuntimeObject* ___message0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		Action_2_t939E2CC3C1A7288E5CDB844113A2D158F3612171* L_0 = __this->___setValueDelegate_2;
		RuntimeObject* L_1 = ___message0;
		RuntimeObject* L_2 = ___value1;
		NullCheck(L_0);
		Action_2_Invoke_m0CF559CD5A31F07C66DF2E464260B44A5A1FA422_inline(L_0, L_1, L_2, NULL);
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
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m5A24E4916BF14BB9949EF1395C053CDAD064B128 (U3CU3Ec__DisplayClass3_0_t7699988D597E698E40B86C773DD10233174D77FE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_0::<.ctor>b__0(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__0_mAF3D5411FE35AD0EFBD5E12470674FC634E93B5F (U3CU3Ec__DisplayClass3_0_t7699988D597E698E40B86C773DD10233174D77FE* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	{
		SingleFieldAccessor_tDC6937B124A5282A5302B6991E6D2A315BD49077* L_0 = __this->___U3CU3E4__this_0;
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = FieldAccessorBase_GetValue_mABB52C5E5391C56E34EE9254B629D0E05BD425D6(L_0, L_1, NULL);
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_0::<.ctor>b__1(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__1_m16719DC248EB25E7A58FB17C7CB19F03FB12A330 (U3CU3Ec__DisplayClass3_0_t7699988D597E698E40B86C773DD10233174D77FE* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	{
		SingleFieldAccessor_tDC6937B124A5282A5302B6991E6D2A315BD49077* L_0 = __this->___U3CU3E4__this_0;
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(11 /* System.Void Google.Protobuf.Reflection.FieldAccessorBase::SetValue(Google.Protobuf.IMessage,System.Object) */, L_0, L_1, NULL);
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
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_1__ctor_m8B0684FEF305ABB523FA987280A461802696EEED (U3CU3Ec__DisplayClass3_1_tA67F0AC390C7692ED34D30C8FF196E46D3C848DC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_1::<.ctor>b__2(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass3_1_U3C_ctorU3Eb__2_mEE542954687E17AC707AF7EBFEB4784F93B6BCF6 (U3CU3Ec__DisplayClass3_1_tA67F0AC390C7692ED34D30C8FF196E46D3C848DC* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	{
		OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* L_0 = __this->___oneofAccessor_0;
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_2;
		L_2 = OneofAccessor_GetCaseFieldDescriptor_m4915CF5321E80B0C750409F84E109D13FF47FBFC(L_0, L_1, NULL);
		U3CU3Ec__DisplayClass3_0_t7699988D597E698E40B86C773DD10233174D77FE* L_3 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_3);
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_4 = L_3->___descriptor_1;
		return (bool)((((RuntimeObject*)(FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E*)L_2) == ((RuntimeObject*)(FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E*)L_4))? 1 : 0);
	}
}
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_1::<.ctor>b__3(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_1_U3C_ctorU3Eb__3_m14097EA7E88688301DA4510228374B969D7C6653 (U3CU3Ec__DisplayClass3_1_tA67F0AC390C7692ED34D30C8FF196E46D3C848DC* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	{
		OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* L_0 = __this->___oneofAccessor_0;
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_2;
		L_2 = OneofAccessor_GetCaseFieldDescriptor_m4915CF5321E80B0C750409F84E109D13FF47FBFC(L_0, L_1, NULL);
		U3CU3Ec__DisplayClass3_0_t7699988D597E698E40B86C773DD10233174D77FE* L_3 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_3);
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_4 = L_3->___descriptor_1;
		if ((!(((RuntimeObject*)(FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E*)L_2) == ((RuntimeObject*)(FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E*)L_4))))
		{
			goto IL_0025;
		}
	}
	{
		OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* L_5 = __this->___oneofAccessor_0;
		RuntimeObject* L_6 = ___message0;
		NullCheck(L_5);
		OneofAccessor_Clear_m29989D87DCDC7AA04E7083B47DD8AB511B058E7D(L_5, L_6, NULL);
	}

IL_0025:
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
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_2__ctor_m0F8436BA813562271351FE848AD63FD5749CFDD7 (U3CU3Ec__DisplayClass3_2_t4163C2A623E2EFB73A5AF767786C921A0D088750* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass3_2::<.ctor>b__5(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_2_U3C_ctorU3Eb__5_m88B7DF89D7EBBEB5CB26825C08A40681EF2560DA (U3CU3Ec__DisplayClass3_2_t4163C2A623E2EFB73A5AF767786C921A0D088750* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	{
		U3CU3Ec__DisplayClass3_0_t7699988D597E698E40B86C773DD10233174D77FE* L_0 = __this->___CSU24U3CU3E8__locals2_1;
		NullCheck(L_0);
		SingleFieldAccessor_tDC6937B124A5282A5302B6991E6D2A315BD49077* L_1 = L_0->___U3CU3E4__this_0;
		RuntimeObject* L_2 = ___message0;
		RuntimeObject* L_3 = __this->___defaultValue_0;
		NullCheck(L_1);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(11 /* System.Void Google.Protobuf.Reflection.FieldAccessorBase::SetValue(Google.Protobuf.IMessage,System.Object) */, L_1, L_2, L_3);
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
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7E51AD707E0BA89BDAC68EB3470597FBD7076DD5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE711B535F3AE500B935BE1C9A071DB25F2437DFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE711B535F3AE500B935BE1C9A071DB25F2437DFF* L_0 = (U3CU3Ec_tE711B535F3AE500B935BE1C9A071DB25F2437DFF*)il2cpp_codegen_object_new(U3CU3Ec_tE711B535F3AE500B935BE1C9A071DB25F2437DFF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m3D0E23855280035CE9E607FFA04738F0721FBDF7(L_0, NULL);
		((U3CU3Ec_tE711B535F3AE500B935BE1C9A071DB25F2437DFF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE711B535F3AE500B935BE1C9A071DB25F2437DFF_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tE711B535F3AE500B935BE1C9A071DB25F2437DFF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE711B535F3AE500B935BE1C9A071DB25F2437DFF_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3D0E23855280035CE9E607FFA04738F0721FBDF7 (U3CU3Ec_tE711B535F3AE500B935BE1C9A071DB25F2437DFF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Google.Protobuf.Reflection.SingleFieldAccessor/<>c::<.ctor>b__3_4(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__3_4_mF44BF9FB9C08A8BB6AAF0F09E7581DDF7018FEAB (U3CU3Ec_tE711B535F3AE500B935BE1C9A071DB25F2437DFF* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD7A7B98FBAE659C1B887B207BDC5507066DBC057)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__3_4_mF44BF9FB9C08A8BB6AAF0F09E7581DDF7018FEAB_RuntimeMethod_var)));
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
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* TypeRegistry_get_Empty_mF877975791E3EFBD10CE130D438688BB6D7E2CBE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_il2cpp_TypeInfo_var);
		TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* L_0 = ((TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_StaticFields*)il2cpp_codegen_static_fields_for(TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_il2cpp_TypeInfo_var))->___U3CEmptyU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Google.Protobuf.Reflection.TypeRegistry::.ctor(System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeRegistry__ctor_mD8356BAAE81ED3D6C0DA14C145962505CE180FA3 (TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* __this, Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384* ___fullNameToMessageMap0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384* L_0 = ___fullNameToMessageMap0;
		__this->___fullNameToMessageMap_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fullNameToMessageMap_1), (void*)L_0);
		return;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.TypeRegistry::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* TypeRegistry_Find_mAFEE66F8D78A4E25D14BC3FA9EA8C3F9C632599A (TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* __this, String_t* ___fullName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m252FB3D32AFC19DE1B40589C914D14FDEC7B5933_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* V_0 = NULL;
	{
		Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384* L_0 = __this->___fullNameToMessageMap_1;
		String_t* L_1 = ___fullName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m252FB3D32AFC19DE1B40589C914D14FDEC7B5933(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m252FB3D32AFC19DE1B40589C914D14FDEC7B5933_RuntimeMethod_var);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_3 = V_0;
		return L_3;
	}
}
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::FromFiles(Google.Protobuf.Reflection.FileDescriptor[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* TypeRegistry_FromFiles_m82737D264B5677817EAACF8BF601735FEEA59BE2 (FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* ___fileDescriptors0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* L_0 = ___fileDescriptors0;
		il2cpp_codegen_runtime_class_init_inline(TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_il2cpp_TypeInfo_var);
		TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* L_1;
		L_1 = TypeRegistry_FromFiles_mDA10E0EF429B1F70DA52F548652BF78C96F121CB((RuntimeObject*)L_0, NULL);
		return L_1;
	}
}
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::FromFiles(System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FileDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* TypeRegistry_FromFiles_mDA10E0EF429B1F70DA52F548652BF78C96F121CB (RuntimeObject* ___fileDescriptors0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t5E7B8A6814011F60023CBE0C67083A74E8479389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t122AEB8E657DD14AE7AC316E37A4B28082F53174_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tAA6D759350859194E8F06C8B8A6467A3B07EFF18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtoPreconditions_CheckNotNull_TisIEnumerable_1_t122AEB8E657DD14AE7AC316E37A4B28082F53174_m16F77535CC68F84081450B50084376576827FBCE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0CB010C646A9359AB17403B716C4C913EA48565);
		s_Il2CppMethodInitialized = true;
	}
	Builder_t5E7B8A6814011F60023CBE0C67083A74E8479389* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___fileDescriptors0;
		RuntimeObject* L_1;
		L_1 = ProtoPreconditions_CheckNotNull_TisIEnumerable_1_t122AEB8E657DD14AE7AC316E37A4B28082F53174_m16F77535CC68F84081450B50084376576827FBCE(L_0, _stringLiteralA0CB010C646A9359AB17403B716C4C913EA48565, ProtoPreconditions_CheckNotNull_TisIEnumerable_1_t122AEB8E657DD14AE7AC316E37A4B28082F53174_m16F77535CC68F84081450B50084376576827FBCE_RuntimeMethod_var);
		Builder_t5E7B8A6814011F60023CBE0C67083A74E8479389* L_2 = (Builder_t5E7B8A6814011F60023CBE0C67083A74E8479389*)il2cpp_codegen_object_new(Builder_t5E7B8A6814011F60023CBE0C67083A74E8479389_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Builder__ctor_mB03F12F2C4E360F832D9ACC5F5184B0321A3CF47(L_2, NULL);
		V_0 = L_2;
		RuntimeObject* L_3 = ___fileDescriptors0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FileDescriptor>::GetEnumerator() */, IEnumerable_1_t122AEB8E657DD14AE7AC316E37A4B28082F53174_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_003c;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_003c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0029_1;
			}

IL_001b_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_8;
				L_8 = InterfaceFuncInvoker0< FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.FileDescriptor>::get_Current() */, IEnumerator_1_tAA6D759350859194E8F06C8B8A6467A3B07EFF18_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				Builder_t5E7B8A6814011F60023CBE0C67083A74E8479389* L_9 = V_0;
				FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_10 = V_2;
				NullCheck(L_9);
				Builder_AddFile_m08923155AF4823AA25B738CC9AC14C787C0AA69C(L_9, L_10, NULL);
			}

IL_0029_1:
			{
				RuntimeObject* L_11 = V_1;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_001b_1;
				}
			}
			{
				goto IL_003d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		Builder_t5E7B8A6814011F60023CBE0C67083A74E8479389* L_13 = V_0;
		NullCheck(L_13);
		TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* L_14;
		L_14 = Builder_Build_m9DE0B00C503E91F9B88293341A99AA9B7816B581(L_13, NULL);
		return L_14;
	}
}
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::FromMessages(Google.Protobuf.Reflection.MessageDescriptor[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* TypeRegistry_FromMessages_m1F0726C5A5ECD1AF3250DD72AA2B5E82F9290B31 (MessageDescriptorU5BU5D_t4F021BD7B685CDD76886DDA2D154EE93234B3818* ___messageDescriptors0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MessageDescriptorU5BU5D_t4F021BD7B685CDD76886DDA2D154EE93234B3818* L_0 = ___messageDescriptors0;
		il2cpp_codegen_runtime_class_init_inline(TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_il2cpp_TypeInfo_var);
		TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* L_1;
		L_1 = TypeRegistry_FromMessages_mA972124D47E7363DF37404443653F25EEC6A69C9((RuntimeObject*)L_0, NULL);
		return L_1;
	}
}
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::FromMessages(System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MessageDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* TypeRegistry_FromMessages_mA972124D47E7363DF37404443653F25EEC6A69C9 (RuntimeObject* ___messageDescriptors0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisMessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_TisFileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE_m438D9BFB50E5B069643FA8EF55777BC95F0C962D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tAA9A15EB8AD5D30A7F469C695166D5A8779DD5F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtoPreconditions_CheckNotNull_TisIEnumerable_1_t4CD5EF9BE7925478517917504140E652CD2D743B_m212260B9F5E35AEB125A4FAE0F6F950455DE549A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CFromMessagesU3Eb__9_0_m503DDED16CF919240A19D29A2A8B17E2E4F55644_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E8550591CF778669ECDEAD573757A12AE56ADBA);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tAA9A15EB8AD5D30A7F469C695166D5A8779DD5F0* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_tAA9A15EB8AD5D30A7F469C695166D5A8779DD5F0* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		RuntimeObject* L_0 = ___messageDescriptors0;
		RuntimeObject* L_1;
		L_1 = ProtoPreconditions_CheckNotNull_TisIEnumerable_1_t4CD5EF9BE7925478517917504140E652CD2D743B_m212260B9F5E35AEB125A4FAE0F6F950455DE549A(L_0, _stringLiteral2E8550591CF778669ECDEAD573757A12AE56ADBA, ProtoPreconditions_CheckNotNull_TisIEnumerable_1_t4CD5EF9BE7925478517917504140E652CD2D743B_m212260B9F5E35AEB125A4FAE0F6F950455DE549A_RuntimeMethod_var);
		RuntimeObject* L_2 = ___messageDescriptors0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_il2cpp_TypeInfo_var);
		Func_2_tAA9A15EB8AD5D30A7F469C695166D5A8779DD5F0* L_3 = ((U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1;
		Func_2_tAA9A15EB8AD5D30A7F469C695166D5A8779DD5F0* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_il2cpp_TypeInfo_var);
		U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB* L_5 = ((U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tAA9A15EB8AD5D30A7F469C695166D5A8779DD5F0* L_6 = (Func_2_tAA9A15EB8AD5D30A7F469C695166D5A8779DD5F0*)il2cpp_codegen_object_new(Func_2_tAA9A15EB8AD5D30A7F469C695166D5A8779DD5F0_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_mF8C596E8574CB6944694007939CA8F3692F27663(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3CFromMessagesU3Eb__9_0_m503DDED16CF919240A19D29A2A8B17E2E4F55644_RuntimeMethod_var), NULL);
		Func_2_tAA9A15EB8AD5D30A7F469C695166D5A8779DD5F0* L_7 = L_6;
		((U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1), (void*)L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_002c:
	{
		RuntimeObject* L_8;
		L_8 = Enumerable_Select_TisMessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_TisFileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE_m438D9BFB50E5B069643FA8EF55777BC95F0C962D(G_B2_1, G_B2_0, Enumerable_Select_TisMessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_TisFileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE_m438D9BFB50E5B069643FA8EF55777BC95F0C962D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_il2cpp_TypeInfo_var);
		TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* L_9;
		L_9 = TypeRegistry_FromFiles_mDA10E0EF429B1F70DA52F548652BF78C96F121CB(L_8, NULL);
		return L_9;
	}
}
// System.Void Google.Protobuf.Reflection.TypeRegistry::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeRegistry__cctor_mCEBDF633448AE7FC9EEF5BA20F5EAB680C5A944F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m13E0AE1CE03825DBDF6EA7B22110FA2D3BD37B6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384* L_0 = (Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384*)il2cpp_codegen_object_new(Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m13E0AE1CE03825DBDF6EA7B22110FA2D3BD37B6F(L_0, Dictionary_2__ctor_m13E0AE1CE03825DBDF6EA7B22110FA2D3BD37B6F_RuntimeMethod_var);
		TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* L_1 = (TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976*)il2cpp_codegen_object_new(TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TypeRegistry__ctor_mD8356BAAE81ED3D6C0DA14C145962505CE180FA3(L_1, L_0, NULL);
		((TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_StaticFields*)il2cpp_codegen_static_fields_for(TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_il2cpp_TypeInfo_var))->___U3CEmptyU3Ek__BackingField_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_StaticFields*)il2cpp_codegen_static_fields_for(TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_il2cpp_TypeInfo_var))->___U3CEmptyU3Ek__BackingField_0), (void*)L_1);
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
// System.Void Google.Protobuf.Reflection.TypeRegistry/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_mB03F12F2C4E360F832D9ACC5F5184B0321A3CF47 (Builder_t5E7B8A6814011F60023CBE0C67083A74E8479389* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m13E0AE1CE03825DBDF6EA7B22110FA2D3BD37B6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384* L_0 = (Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384*)il2cpp_codegen_object_new(Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m13E0AE1CE03825DBDF6EA7B22110FA2D3BD37B6F(L_0, Dictionary_2__ctor_m13E0AE1CE03825DBDF6EA7B22110FA2D3BD37B6F_RuntimeMethod_var);
		__this->___types_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___types_0), (void*)L_0);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_1 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)il2cpp_codegen_object_new(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03(L_1, HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		__this->___fileDescriptorNames_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fileDescriptorNames_1), (void*)L_1);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.TypeRegistry/Builder::AddFile(Google.Protobuf.Reflection.FileDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_AddFile_m08923155AF4823AA25B738CC9AC14C787C0AA69C (Builder_t5E7B8A6814011F60023CBE0C67083A74E8479389* __this, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___fileDescriptor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t122AEB8E657DD14AE7AC316E37A4B28082F53174_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t4CD5EF9BE7925478517917504140E652CD2D743B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t3B98BB7867D2E52A76815600B0C3D9EB17791D09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tAA6D759350859194E8F06C8B8A6467A3B07EFF18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* V_3 = NULL;
	{
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_0 = __this->___fileDescriptorNames_1;
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_1 = ___fileDescriptor0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = FileDescriptor_get_Name_m81861DDFBC6C17CD275F3374FC02268C0F376DF1(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_0, L_2, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		return;
	}

IL_0014:
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_4 = ___fileDescriptor0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = FileDescriptor_get_Dependencies_mAC7C5AB2751A6B9A4A2F6AE3A4E0DB2216793F7C_inline(L_4, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FileDescriptor>::GetEnumerator() */, IEnumerable_1_t122AEB8E657DD14AE7AC316E37A4B28082F53174_il2cpp_TypeInfo_var, L_5);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_7 = V_0;
					if (!L_7)
					{
						goto IL_0043;
					}
				}
				{
					RuntimeObject* L_8 = V_0;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_0043:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0030_1;
			}

IL_0022_1:
			{
				RuntimeObject* L_9 = V_0;
				NullCheck(L_9);
				FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_10;
				L_10 = InterfaceFuncInvoker0< FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.FileDescriptor>::get_Current() */, IEnumerator_1_tAA6D759350859194E8F06C8B8A6467A3B07EFF18_il2cpp_TypeInfo_var, L_9);
				V_1 = L_10;
				FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_11 = V_1;
				Builder_AddFile_m08923155AF4823AA25B738CC9AC14C787C0AA69C(__this, L_11, NULL);
			}

IL_0030_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck(L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
				if (L_13)
				{
					goto IL_0022_1;
				}
			}
			{
				goto IL_0044;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_14 = ___fileDescriptor0;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = FileDescriptor_get_MessageTypes_m0FB1C458BB323A507214648AC7944A9FBE4D3E78_inline(L_14, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MessageDescriptor>::GetEnumerator() */, IEnumerable_1_t4CD5EF9BE7925478517917504140E652CD2D743B_il2cpp_TypeInfo_var, L_15);
		V_2 = L_16;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_17 = V_2;
					if (!L_17)
					{
						goto IL_0073;
					}
				}
				{
					RuntimeObject* L_18 = V_2;
					NullCheck(L_18);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_18);
				}

IL_0073:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0060_1;
			}

IL_0052_1:
			{
				RuntimeObject* L_19 = V_2;
				NullCheck(L_19);
				MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_20;
				L_20 = InterfaceFuncInvoker0< MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Current() */, IEnumerator_1_t3B98BB7867D2E52A76815600B0C3D9EB17791D09_il2cpp_TypeInfo_var, L_19);
				V_3 = L_20;
				MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_21 = V_3;
				Builder_AddMessage_mB2D0FC7251A0DB7E18E70A90CA2BBA21EA38A070(__this, L_21, NULL);
			}

IL_0060_1:
			{
				RuntimeObject* L_22 = V_2;
				NullCheck(L_22);
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_0052_1;
				}
			}
			{
				goto IL_0074;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0074:
	{
		return;
	}
}
// System.Void Google.Protobuf.Reflection.TypeRegistry/Builder::AddMessage(Google.Protobuf.Reflection.MessageDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_AddMessage_mB2D0FC7251A0DB7E18E70A90CA2BBA21EA38A070 (Builder_t5E7B8A6814011F60023CBE0C67083A74E8479389* __this, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___messageDescriptor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m051A3A61EE67B219C4941AECCFD47540866807D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t4CD5EF9BE7925478517917504140E652CD2D743B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t3B98BB7867D2E52A76815600B0C3D9EB17791D09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* V_1 = NULL;
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0 = ___messageDescriptor0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = MessageDescriptor_get_NestedTypes_m843BBF2AD3939A0AD39AE080A7E9AE6942FBF1A8_inline(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MessageDescriptor>::GetEnumerator() */, IEnumerable_1_t4CD5EF9BE7925478517917504140E652CD2D743B_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0026:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_002f;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_002f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001c_1;
			}

IL_000e_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_6;
				L_6 = InterfaceFuncInvoker0< MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Current() */, IEnumerator_1_t3B98BB7867D2E52A76815600B0C3D9EB17791D09_il2cpp_TypeInfo_var, L_5);
				V_1 = L_6;
				MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_7 = V_1;
				Builder_AddMessage_mB2D0FC7251A0DB7E18E70A90CA2BBA21EA38A070(__this, L_7, NULL);
			}

IL_001c_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				if (L_9)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0030;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0030:
	{
		Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384* L_10 = __this->___types_0;
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_11 = ___messageDescriptor0;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = DescriptorBase_get_FullName_m09E17EE9C9184A528B154958832FDA2977D8B32D_inline(L_11, NULL);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_13 = ___messageDescriptor0;
		NullCheck(L_10);
		Dictionary_2_set_Item_m051A3A61EE67B219C4941AECCFD47540866807D9(L_10, L_12, L_13, Dictionary_2_set_Item_m051A3A61EE67B219C4941AECCFD47540866807D9_RuntimeMethod_var);
		return;
	}
}
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* Builder_Build_m9DE0B00C503E91F9B88293341A99AA9B7816B581 (Builder_t5E7B8A6814011F60023CBE0C67083A74E8479389* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384* L_0 = __this->___types_0;
		TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* L_1 = (TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976*)il2cpp_codegen_object_new(TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TypeRegistry__ctor_mD8356BAAE81ED3D6C0DA14C145962505CE180FA3(L_1, L_0, NULL);
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
// System.Void Google.Protobuf.Reflection.TypeRegistry/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6F611FB70B04034F5235D6DA03034431DA6C09F9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB* L_0 = (U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB*)il2cpp_codegen_object_new(U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m852E2A500025865494CCD1B737DB532D867677C1(L_0, NULL);
		((U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.TypeRegistry/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m852E2A500025865494CCD1B737DB532D867677C1 (U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.TypeRegistry/<>c::<FromMessages>b__9_0(Google.Protobuf.Reflection.MessageDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* U3CU3Ec_U3CFromMessagesU3Eb__9_0_m503DDED16CF919240A19D29A2A8B17E2E4F55644 (U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB* __this, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___md0, const RuntimeMethod* method) 
{
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0 = ___md0;
		NullCheck(L_0);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_1;
		L_1 = DescriptorBase_get_File_m4ADE18F8259D6F6DEC90FEEDCDCFAD1101AAE7BF_inline(L_0, NULL);
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
// System.Reflection.MethodInfo Google.Protobuf.Compatibility.PropertyInfoExtensions::GetGetMethod(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* PropertyInfoExtensions_GetGetMethod_m868CD3DB985386A751A821A92CA887E130D93C9B (PropertyInfo_t* ___target0, const RuntimeMethod* method) 
{
	MethodInfo_t* V_0 = NULL;
	{
		PropertyInfo_t* L_0 = ___target0;
		NullCheck(L_0);
		MethodInfo_t* L_1;
		L_1 = VirtualFuncInvoker0< MethodInfo_t* >::Invoke(19 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::get_GetMethod() */, L_0);
		V_0 = L_1;
		MethodInfo_t* L_2 = V_0;
		bool L_3;
		L_3 = MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8(L_2, (MethodInfo_t*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		MethodInfo_t* L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = MethodBase_get_IsPublic_m471B6CEE0FF2B45843C1F314B624FC7968199AB4(L_4, NULL);
		if (L_5)
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (MethodInfo_t*)NULL;
	}

IL_001a:
	{
		MethodInfo_t* L_6 = V_0;
		return L_6;
	}
}
// System.Reflection.MethodInfo Google.Protobuf.Compatibility.PropertyInfoExtensions::GetSetMethod(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* PropertyInfoExtensions_GetSetMethod_mF9650151739DEC79E3E60919B854DC0E6568D95D (PropertyInfo_t* ___target0, const RuntimeMethod* method) 
{
	MethodInfo_t* V_0 = NULL;
	{
		PropertyInfo_t* L_0 = ___target0;
		NullCheck(L_0);
		MethodInfo_t* L_1;
		L_1 = VirtualFuncInvoker0< MethodInfo_t* >::Invoke(22 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::get_SetMethod() */, L_0);
		V_0 = L_1;
		MethodInfo_t* L_2 = V_0;
		bool L_3;
		L_3 = MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8(L_2, (MethodInfo_t*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		MethodInfo_t* L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = MethodBase_get_IsPublic_m471B6CEE0FF2B45843C1F314B624FC7968199AB4(L_4, NULL);
		if (L_5)
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (MethodInfo_t*)NULL;
	}

IL_001a:
	{
		MethodInfo_t* L_6 = V_0;
		return L_6;
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
// System.Boolean Google.Protobuf.Compatibility.TypeExtensions::IsAssignableFrom(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_IsAssignableFrom_mDE12BA6432FFDBE8B961B467AB3BDFFC58BDDB1D (Type_t* ___target0, Type_t* ___c1, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___target0;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_1;
		L_1 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_0, NULL);
		Type_t* L_2 = ___c1;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_3;
		L_3 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* >::Invoke(133 /* System.Boolean System.Reflection.TypeInfo::IsAssignableFrom(System.Reflection.TypeInfo) */, L_1, L_3);
		return L_4;
	}
}
// System.Reflection.PropertyInfo Google.Protobuf.Compatibility.TypeExtensions::GetProperty(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* TypeExtensions_GetProperty_mFDF3EA97E47B06913D74B45DF72F4571C996A414 (Type_t* ___target0, String_t* ___name1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* V_0 = NULL;
	PropertyInfo_t* V_1 = NULL;
	{
		goto IL_004e;
	}

IL_0002:
	{
		Type_t* L_0 = ___target0;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_1;
		L_1 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_0, NULL);
		V_0 = L_1;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_2 = V_0;
		String_t* L_3 = ___name1;
		NullCheck(L_2);
		PropertyInfo_t* L_4;
		L_4 = VirtualFuncInvoker1< PropertyInfo_t*, String_t* >::Invoke(131 /* System.Reflection.PropertyInfo System.Reflection.TypeInfo::GetDeclaredProperty(System.String) */, L_2, L_3);
		V_1 = L_4;
		PropertyInfo_t* L_5 = V_1;
		bool L_6;
		L_6 = PropertyInfo_op_Inequality_mE75A4F14CC678D8A670730FBD4338C718CACB51B(L_5, (PropertyInfo_t*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		PropertyInfo_t* L_7 = V_1;
		NullCheck(L_7);
		bool L_8;
		L_8 = VirtualFuncInvoker0< bool >::Invoke(17 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_7);
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		PropertyInfo_t* L_9 = V_1;
		NullCheck(L_9);
		MethodInfo_t* L_10;
		L_10 = VirtualFuncInvoker0< MethodInfo_t* >::Invoke(19 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::get_GetMethod() */, L_9);
		NullCheck(L_10);
		bool L_11;
		L_11 = MethodBase_get_IsPublic_m471B6CEE0FF2B45843C1F314B624FC7968199AB4(L_10, NULL);
		if (L_11)
		{
			goto IL_0044;
		}
	}

IL_002f:
	{
		PropertyInfo_t* L_12 = V_1;
		NullCheck(L_12);
		bool L_13;
		L_13 = VirtualFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_12);
		if (!L_13)
		{
			goto IL_0046;
		}
	}
	{
		PropertyInfo_t* L_14 = V_1;
		NullCheck(L_14);
		MethodInfo_t* L_15;
		L_15 = VirtualFuncInvoker0< MethodInfo_t* >::Invoke(22 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::get_SetMethod() */, L_14);
		NullCheck(L_15);
		bool L_16;
		L_16 = MethodBase_get_IsPublic_m471B6CEE0FF2B45843C1F314B624FC7968199AB4(L_15, NULL);
		if (!L_16)
		{
			goto IL_0046;
		}
	}

IL_0044:
	{
		PropertyInfo_t* L_17 = V_1;
		return L_17;
	}

IL_0046:
	{
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_18 = V_0;
		NullCheck(L_18);
		Type_t* L_19;
		L_19 = VirtualFuncInvoker0< Type_t* >::Invoke(109 /* System.Type System.Type::get_BaseType() */, L_18);
		___target0 = L_19;
	}

IL_004e:
	{
		Type_t* L_20 = ___target0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_20, (Type_t*)NULL, NULL);
		if (L_21)
		{
			goto IL_0002;
		}
	}
	{
		return (PropertyInfo_t*)NULL;
	}
}
// System.Reflection.MethodInfo Google.Protobuf.Compatibility.TypeExtensions::GetMethod(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* TypeExtensions_GetMethod_mD0F0A9D22B96DA79DF93096023AC6AC3B77626A9 (Type_t* ___target0, String_t* ___name1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* V_0 = NULL;
	MethodInfo_t* V_1 = NULL;
	{
		goto IL_002c;
	}

IL_0002:
	{
		Type_t* L_0 = ___target0;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_1;
		L_1 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_0, NULL);
		V_0 = L_1;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_2 = V_0;
		String_t* L_3 = ___name1;
		NullCheck(L_2);
		MethodInfo_t* L_4;
		L_4 = VirtualFuncInvoker1< MethodInfo_t*, String_t* >::Invoke(130 /* System.Reflection.MethodInfo System.Reflection.TypeInfo::GetDeclaredMethod(System.String) */, L_2, L_3);
		V_1 = L_4;
		MethodInfo_t* L_5 = V_1;
		bool L_6;
		L_6 = MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8(L_5, (MethodInfo_t*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		MethodInfo_t* L_7 = V_1;
		NullCheck(L_7);
		bool L_8;
		L_8 = MethodBase_get_IsPublic_m471B6CEE0FF2B45843C1F314B624FC7968199AB4(L_7, NULL);
		if (!L_8)
		{
			goto IL_0024;
		}
	}
	{
		MethodInfo_t* L_9 = V_1;
		return L_9;
	}

IL_0024:
	{
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_10 = V_0;
		NullCheck(L_10);
		Type_t* L_11;
		L_11 = VirtualFuncInvoker0< Type_t* >::Invoke(109 /* System.Type System.Type::get_BaseType() */, L_10);
		___target0 = L_11;
	}

IL_002c:
	{
		Type_t* L_12 = ___target0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_12, (Type_t*)NULL, NULL);
		if (L_13)
		{
			goto IL_0002;
		}
	}
	{
		return (MethodInfo_t*)NULL;
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
// System.Collections.Generic.EqualityComparer`1<System.Double> Google.Protobuf.Collections.ProtobufEqualityComparers::get_BitwiseDoubleEqualityComparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* ProtobufEqualityComparers_get_BitwiseDoubleEqualityComparer_mE0E0358747BA998C14B09B00EF0EEC35FAD67189 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_0 = ((ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var))->___U3CBitwiseDoubleEqualityComparerU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Collections.Generic.EqualityComparer`1<System.Single> Google.Protobuf.Collections.ProtobufEqualityComparers::get_BitwiseSingleEqualityComparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* ProtobufEqualityComparers_get_BitwiseSingleEqualityComparer_mB00254F465D7EAA2754FA111AF8F561BF50455A8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_0 = ((ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var))->___U3CBitwiseSingleEqualityComparerU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Double>> Google.Protobuf.Collections.ProtobufEqualityComparers::get_BitwiseNullableDoubleEqualityComparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* ProtobufEqualityComparers_get_BitwiseNullableDoubleEqualityComparer_mA253ECFFA11A6147DDD4948FB51D22CF65BB96A8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* L_0 = ((ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var))->___U3CBitwiseNullableDoubleEqualityComparerU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Single>> Google.Protobuf.Collections.ProtobufEqualityComparers::get_BitwiseNullableSingleEqualityComparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* ProtobufEqualityComparers_get_BitwiseNullableSingleEqualityComparer_mD9A520EF3BDACC8B5EAC57ED3EE0D9A773782D10 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* L_0 = ((ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var))->___U3CBitwiseNullableSingleEqualityComparerU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Google.Protobuf.Collections.ProtobufEqualityComparers::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProtobufEqualityComparers__cctor_m1CF009D88696AE5FDDDE81C9BE68871D2CBC06BF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitwiseDoubleEqualityComparerImpl_tF935A78EF392CD4354688989133EACA26C8640B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitwiseNullableDoubleEqualityComparerImpl_t17328B6D301E7839E81FEE9324CF4ABB7623836C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitwiseNullableSingleEqualityComparerImpl_tAC371318D4964393815DC27A1EAA2A0045F06EBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitwiseSingleEqualityComparerImpl_t54A7C3CD2D3330DC90E7BF4E41E19A32A4630CB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BitwiseDoubleEqualityComparerImpl_tF935A78EF392CD4354688989133EACA26C8640B8* L_0 = (BitwiseDoubleEqualityComparerImpl_tF935A78EF392CD4354688989133EACA26C8640B8*)il2cpp_codegen_object_new(BitwiseDoubleEqualityComparerImpl_tF935A78EF392CD4354688989133EACA26C8640B8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BitwiseDoubleEqualityComparerImpl__ctor_mAD6B0428075BBF43DE51F583D37BA0ABF38664D2(L_0, NULL);
		((ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var))->___U3CBitwiseDoubleEqualityComparerU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var))->___U3CBitwiseDoubleEqualityComparerU3Ek__BackingField_0), (void*)L_0);
		BitwiseSingleEqualityComparerImpl_t54A7C3CD2D3330DC90E7BF4E41E19A32A4630CB2* L_1 = (BitwiseSingleEqualityComparerImpl_t54A7C3CD2D3330DC90E7BF4E41E19A32A4630CB2*)il2cpp_codegen_object_new(BitwiseSingleEqualityComparerImpl_t54A7C3CD2D3330DC90E7BF4E41E19A32A4630CB2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BitwiseSingleEqualityComparerImpl__ctor_m1B0BE327275B9873E6334D1BF5F168CB7550485A(L_1, NULL);
		((ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var))->___U3CBitwiseSingleEqualityComparerU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var))->___U3CBitwiseSingleEqualityComparerU3Ek__BackingField_1), (void*)L_1);
		BitwiseNullableDoubleEqualityComparerImpl_t17328B6D301E7839E81FEE9324CF4ABB7623836C* L_2 = (BitwiseNullableDoubleEqualityComparerImpl_t17328B6D301E7839E81FEE9324CF4ABB7623836C*)il2cpp_codegen_object_new(BitwiseNullableDoubleEqualityComparerImpl_t17328B6D301E7839E81FEE9324CF4ABB7623836C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BitwiseNullableDoubleEqualityComparerImpl__ctor_mFB917A2DA5F18FCF1412412980B25B39169C056E(L_2, NULL);
		((ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var))->___U3CBitwiseNullableDoubleEqualityComparerU3Ek__BackingField_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var))->___U3CBitwiseNullableDoubleEqualityComparerU3Ek__BackingField_2), (void*)L_2);
		BitwiseNullableSingleEqualityComparerImpl_tAC371318D4964393815DC27A1EAA2A0045F06EBA* L_3 = (BitwiseNullableSingleEqualityComparerImpl_tAC371318D4964393815DC27A1EAA2A0045F06EBA*)il2cpp_codegen_object_new(BitwiseNullableSingleEqualityComparerImpl_tAC371318D4964393815DC27A1EAA2A0045F06EBA_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BitwiseNullableSingleEqualityComparerImpl__ctor_mE92B7379D88906CF7BE75DAEB5A478DE32E3AB8F(L_3, NULL);
		((ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var))->___U3CBitwiseNullableSingleEqualityComparerU3Ek__BackingField_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var))->___U3CBitwiseNullableSingleEqualityComparerU3Ek__BackingField_3), (void*)L_3);
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
// System.Boolean Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseDoubleEqualityComparerImpl::Equals(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitwiseDoubleEqualityComparerImpl_Equals_m4AB730E36E402B55A29683B474AAE3E4BE81E07B (BitwiseDoubleEqualityComparerImpl_tF935A78EF392CD4354688989133EACA26C8640B8* __this, double ___x0, double ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline(L_0, NULL);
		double L_2 = ___y1;
		int64_t L_3;
		L_3 = BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline(L_2, NULL);
		return (bool)((((int64_t)L_1) == ((int64_t)L_3))? 1 : 0);
	}
}
// System.Int32 Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseDoubleEqualityComparerImpl::GetHashCode(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitwiseDoubleEqualityComparerImpl_GetHashCode_m56B58C7253636BDEB978E3E162A8AFC2348FAC1B (BitwiseDoubleEqualityComparerImpl_tF935A78EF392CD4354688989133EACA26C8640B8* __this, double ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		double L_0 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline(L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496((&V_0), NULL);
		return L_2;
	}
}
// System.Void Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseDoubleEqualityComparerImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitwiseDoubleEqualityComparerImpl__ctor_mAD6B0428075BBF43DE51F583D37BA0ABF38664D2 (BitwiseDoubleEqualityComparerImpl_tF935A78EF392CD4354688989133EACA26C8640B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1__ctor_m58F9725A39988634937D9D8E456BFBC9C8816DB6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EqualityComparer_1__ctor_m58F9725A39988634937D9D8E456BFBC9C8816DB6(__this, EqualityComparer_1__ctor_m58F9725A39988634937D9D8E456BFBC9C8816DB6_RuntimeMethod_var);
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
// System.Boolean Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseSingleEqualityComparerImpl::Equals(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitwiseSingleEqualityComparerImpl_Equals_mC91C8C4BC0E15E48E1F1D9D2A15325BFFF90BFD6 (BitwiseSingleEqualityComparerImpl_t54A7C3CD2D3330DC90E7BF4E41E19A32A4630CB2* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline(((double)L_0), NULL);
		float L_2 = ___y1;
		int64_t L_3;
		L_3 = BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline(((double)L_2), NULL);
		return (bool)((((int64_t)L_1) == ((int64_t)L_3))? 1 : 0);
	}
}
// System.Int32 Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseSingleEqualityComparerImpl::GetHashCode(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitwiseSingleEqualityComparerImpl_GetHashCode_m2421F9F900FCD1394C3A347FDBE4DB4089885B20 (BitwiseSingleEqualityComparerImpl_t54A7C3CD2D3330DC90E7BF4E41E19A32A4630CB2* __this, float ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		float L_0 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline(((double)L_0), NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496((&V_0), NULL);
		return L_2;
	}
}
// System.Void Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseSingleEqualityComparerImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitwiseSingleEqualityComparerImpl__ctor_m1B0BE327275B9873E6334D1BF5F168CB7550485A (BitwiseSingleEqualityComparerImpl_t54A7C3CD2D3330DC90E7BF4E41E19A32A4630CB2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1__ctor_mABD86A3C9CCEC7A2EEBFCD0D468A96CC3D0E12E3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EqualityComparer_1__ctor_mABD86A3C9CCEC7A2EEBFCD0D468A96CC3D0E12E3(__this, EqualityComparer_1__ctor_mABD86A3C9CCEC7A2EEBFCD0D468A96CC3D0E12E3_RuntimeMethod_var);
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
// System.Boolean Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableDoubleEqualityComparerImpl::Equals(System.Nullable`1<System.Double>,System.Nullable`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitwiseNullableDoubleEqualityComparerImpl_Equals_m65836828DDACC3E899B6BD64BA69951B28564313 (BitwiseNullableDoubleEqualityComparerImpl_t17328B6D301E7839E81FEE9324CF4ABB7623836C* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___x0, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&___x0), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&___y1), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_003f;
		}
	}

IL_0012:
	{
		bool L_2;
		L_2 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&___x0), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		bool L_3;
		L_3 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&___y1), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_4;
		L_4 = ProtobufEqualityComparers_get_BitwiseDoubleEqualityComparer_mE0E0358747BA998C14B09B00EF0EEC35FAD67189_inline(NULL);
		double L_5;
		L_5 = Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1((&___x0), Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		double L_6;
		L_6 = Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1((&___y1), Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		NullCheck(L_4);
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, double, double >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Double>::Equals(T,T) */, L_4, L_5, L_6);
		return L_7;
	}

IL_003d:
	{
		return (bool)0;
	}

IL_003f:
	{
		return (bool)1;
	}
}
// System.Int32 Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableDoubleEqualityComparerImpl::GetHashCode(System.Nullable`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitwiseNullableDoubleEqualityComparerImpl_GetHashCode_mCB886DFDA862B5D97ABC89696D12A37EFD7BC32F (BitwiseNullableDoubleEqualityComparerImpl_t17328B6D301E7839E81FEE9324CF4ABB7623836C* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&___obj0), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_1;
		L_1 = ProtobufEqualityComparers_get_BitwiseDoubleEqualityComparer_mE0E0358747BA998C14B09B00EF0EEC35FAD67189_inline(NULL);
		double L_2;
		L_2 = Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1((&___obj0), Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_3;
		L_3 = VirtualFuncInvoker1< int32_t, double >::Invoke(9 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Double>::GetHashCode(T) */, L_1, L_2);
		return L_3;
	}

IL_001b:
	{
		return ((int32_t)293864);
	}
}
// System.Void Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableDoubleEqualityComparerImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitwiseNullableDoubleEqualityComparerImpl__ctor_mFB917A2DA5F18FCF1412412980B25B39169C056E (BitwiseNullableDoubleEqualityComparerImpl_t17328B6D301E7839E81FEE9324CF4ABB7623836C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1__ctor_mA454F90E707038D38215CD8C3E5E8DFD55D0E1FB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EqualityComparer_1__ctor_mA454F90E707038D38215CD8C3E5E8DFD55D0E1FB(__this, EqualityComparer_1__ctor_mA454F90E707038D38215CD8C3E5E8DFD55D0E1FB_RuntimeMethod_var);
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
// System.Boolean Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableSingleEqualityComparerImpl::Equals(System.Nullable`1<System.Single>,System.Nullable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitwiseNullableSingleEqualityComparerImpl_Equals_m6CF225853FE4766634E3C8D6AD798A6C12297FFB (BitwiseNullableSingleEqualityComparerImpl_tAC371318D4964393815DC27A1EAA2A0045F06EBA* __this, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___x0, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&___x0), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&___y1), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_003f;
		}
	}

IL_0012:
	{
		bool L_2;
		L_2 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&___x0), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		bool L_3;
		L_3 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&___y1), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_4;
		L_4 = ProtobufEqualityComparers_get_BitwiseSingleEqualityComparer_mB00254F465D7EAA2754FA111AF8F561BF50455A8_inline(NULL);
		float L_5;
		L_5 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&___x0), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		float L_6;
		L_6 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&___y1), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		NullCheck(L_4);
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, float, float >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Single>::Equals(T,T) */, L_4, L_5, L_6);
		return L_7;
	}

IL_003d:
	{
		return (bool)0;
	}

IL_003f:
	{
		return (bool)1;
	}
}
// System.Int32 Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableSingleEqualityComparerImpl::GetHashCode(System.Nullable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitwiseNullableSingleEqualityComparerImpl_GetHashCode_mFEB14C4FC30B469B5FF2E48B4FC8A2573596EBFB (BitwiseNullableSingleEqualityComparerImpl_tAC371318D4964393815DC27A1EAA2A0045F06EBA* __this, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&___obj0), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_1;
		L_1 = ProtobufEqualityComparers_get_BitwiseSingleEqualityComparer_mB00254F465D7EAA2754FA111AF8F561BF50455A8_inline(NULL);
		float L_2;
		L_2 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&___obj0), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_3;
		L_3 = VirtualFuncInvoker1< int32_t, float >::Invoke(9 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Single>::GetHashCode(T) */, L_1, L_2);
		return L_3;
	}

IL_001b:
	{
		return ((int32_t)293864);
	}
}
// System.Void Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableSingleEqualityComparerImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitwiseNullableSingleEqualityComparerImpl__ctor_mE92B7379D88906CF7BE75DAEB5A478DE32E3AB8F (BitwiseNullableSingleEqualityComparerImpl_tAC371318D4964393815DC27A1EAA2A0045F06EBA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1__ctor_mC48678D94B2CF1801B7AE07518AC52EF47C1900E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EqualityComparer_1__ctor_mC48678D94B2CF1801B7AE07518AC52EF47C1900E(__this, EqualityComparer_1__ctor_mC48678D94B2CF1801B7AE07518AC52EF47C1900E_RuntimeMethod_var);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* GeneratedClrTypeInfo_get_NestedTypes_m8AED7D6560730E69176023048554B849007EAAA0_inline (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) 
{
	{
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_0 = __this->___U3CNestedTypesU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* GeneratedClrTypeInfo_get_NestedEnums_mD3FF2C77CA209172AA17731B31FA24968522A1CC_inline (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) 
{
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = __this->___U3CNestedEnumsU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A* FieldDescriptor_get_Extension_m2F4D257EF197FDF6F164B17A22728CA1052EB235_inline (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) 
{
	{
		Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A* L_0 = __this->___U3CExtensionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo_set_ClrType_m744F6287D106FBDF0B7E00832E5800CCA326AA08_inline (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___value0;
		__this->___U3CClrTypeU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClrTypeU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* GeneratedClrTypeInfo_get_Parser_m4C53F2D6CB863279546D11DE7B3D53ED351B48A8_inline (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) 
{
	{
		MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* L_0 = __this->___U3CParserU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* GeneratedClrTypeInfo_get_ClrType_m5B443B2BB0A3783E56682580703FF212AF9AEDC2_inline (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CClrTypeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_t9F109E2AE6C6DAA3EA0EE23E4CD97052F9301FC4* DescriptorProto_get_OneofDecl_m88B6455AEF8DA27F82D763680A03D0B9E1565BDD_inline (DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* __this, const RuntimeMethod* method) 
{
	{
		RepeatedField_1_t9F109E2AE6C6DAA3EA0EE23E4CD97052F9301FC4* L_0 = __this->___oneofDecl__22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_Oneofs_m4B21398E1D746B08DD3874635EB9B8BAF81F4E38_inline (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3COneofsU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OneofDescriptor_get_IsSynthetic_mB83EEA3B6B69356688ED25B0B93E37317AD96C60_inline (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsSyntheticU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_t1647174A532CD385C86A4013E9A94E3ED25C783B* DescriptorProto_get_NestedType_mFB07AE39857C24A91E7C49707962CFB6D43038F1_inline (DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* __this, const RuntimeMethod* method) 
{
	{
		RepeatedField_1_t1647174A532CD385C86A4013E9A94E3ED25C783B* L_0 = __this->___nestedType__13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_tD86397FCB230839D8CDFAD16012311B08C27B0D3* DescriptorProto_get_EnumType_mB638C54384C16C50C1ECD0D5895A4E829F1BEF34_inline (DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* __this, const RuntimeMethod* method) 
{
	{
		RepeatedField_1_tD86397FCB230839D8CDFAD16012311B08C27B0D3* L_0 = __this->___enumType__16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66* GeneratedClrTypeInfo_get_Extensions_m99A0DD9B3A9BC39C66A9545C5C70847C1090138D_inline (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) 
{
	{
		ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66* L_0 = __this->___U3CExtensionsU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_t7E4B2149855E87DEBE33830CBE70920C8A6E52E1* DescriptorProto_get_Field_m5C69AC6B1B0D580AC85EA12068D434A482DA18BA_inline (DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* __this, const RuntimeMethod* method) 
{
	{
		RepeatedField_1_t7E4B2149855E87DEBE33830CBE70920C8A6E52E1* L_0 = __this->___field__7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* FileDescriptor_get_DescriptorPool_m2C9A3FFBC669C3DAFDD5C7DBFE51EF37094021CD_inline (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) 
{
	{
		DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* L_0 = __this->___U3CDescriptorPoolU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* FieldDescriptor_get_JsonName_m1E7529AB79BEB8C99A1318FFDA81F6F4C9E81216_inline (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CJsonNameU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* MessageDescriptor_get_Proto_mE5640E03D5D2191198B0B47401F194D9A1AFD59B_inline (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	{
		DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* L_0 = __this->___U3CProtoU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_NestedTypes_m843BBF2AD3939A0AD39AE080A7E9AE6942FBF1A8_inline (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CNestedTypesU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_EnumTypes_mCAC627C3D64CB7E3A1092FCDC6406C6DC52B70D8_inline (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CEnumTypesU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_t0E899A6F37E8797AEF754CE965684FD651FC2788* DescriptorProto_get_ExtensionRange_mFB6530B27992B6529AC1899E670EC90D8B42B6B8_inline (DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* __this, const RuntimeMethod* method) 
{
	{
		RepeatedField_1_t0E899A6F37E8797AEF754CE965684FD651FC2788* L_0 = __this->___extensionRange__19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* MessageDescriptor_get_ClrType_mE5BB83F9A779B01E975658DFE4F51873F6745656_inline (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CClrTypeU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* DescriptorBase_get_File_m4ADE18F8259D6F6DEC90FEEDCDCFAD1101AAE7BF_inline (DescriptorBase_t5C5FA7C866B517618C4032DDBEF36522D92A18FA* __this, const RuntimeMethod* method) 
{
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0 = __this->___U3CFileU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DescriptorBase_get_FullName_m09E17EE9C9184A528B154958832FDA2977D8B32D_inline (DescriptorBase_t5C5FA7C866B517618C4032DDBEF36522D92A18FA* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CFullNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageOptions_t21D90698973F4D57E228B9E596F8E3E8CC429B7A* DescriptorProto_get_Options_mFEB4E68AE42F39354016ECEA1350E11A25E7314C_inline (DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* __this, const RuntimeMethod* method) 
{
	{
		MessageOptions_t21D90698973F4D57E228B9E596F8E3E8CC429B7A* L_0 = __this->___options__24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExtensionCollection_tB99C14F49DA3F67113593C9FD990613B6072E7A0* MessageDescriptor_get_Extensions_m512F337245F65FA7AA8CC4507D7C5B2FF0963DAA_inline (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	{
		ExtensionCollection_tB99C14F49DA3F67113593C9FD990613B6072E7A0* L_0 = __this->___U3CExtensionsU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* GeneratedClrTypeInfo_get_OneofNames_mEB47A698EDAC7237464F2AD15643BA0E43A5B0D6_inline (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___U3COneofNamesU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* GeneratedClrTypeInfo_get_PropertyNames_m90234348C0C94D290A5B78AE50B651C4CDD8E302_inline (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___U3CPropertyNamesU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* MethodDescriptor_get_Proto_m08BA64B9570CED9E3E993E1F8B6997395C3649F6_inline (MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* __this, const RuntimeMethod* method) 
{
	{
		MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* L_0 = __this->___proto_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodOptions_t231FE38BD5312DB18559F1566A090E97A3AF6DB7* MethodDescriptorProto_get_Options_mEF31E491D76D1C67D9D2FB55C243B9F52E7E9D1A_inline (MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* __this, const RuntimeMethod* method) 
{
	{
		MethodOptions_t231FE38BD5312DB18559F1566A090E97A3AF6DB7* L_0 = __this->___options__13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* OneofAccessor_get_Descriptor_mE5762B7FAFA1F5089C8C00201824FC263D5DD9CE_inline (OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* __this, const RuntimeMethod* method) 
{
	{
		OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* L_0 = __this->___U3CDescriptorU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* OneofDescriptor_get_ContainingType_m1AE060E44800C9D8135AEE395CD1A522AFE8020D_inline (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* __this, const RuntimeMethod* method) 
{
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0 = __this->___containingType_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* OneofDescriptor_get_Fields_mA95D85FFC1D1E6A526DDCD8F14A2DB16F27140C0_inline (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___fields_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FieldDescriptor_get_Accessor_mBFA4302AF3C75C52CACD857427ABB300A482CA19_inline (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___accessor_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OneofOptions_t499A07FB7EEF49A12136BABBD159BC8B7B6107EF* OneofDescriptorProto_get_Options_m86DDF956444086BD981F9BA68D91DA3A8B9360B6_inline (OneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A* __this, const RuntimeMethod* method) 
{
	{
		OneofOptions_t499A07FB7EEF49A12136BABBD159BC8B7B6107EF* L_0 = __this->___options__6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3* MessageDescriptor_get_Fields_mA5EE82B81DE42BB3DAC85301639AD91C9AB94503_inline (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	{
		FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3* L_0 = __this->___U3CFieldsU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* FieldDescriptor_get_ContainingOneof_m910021BB2A5C1B3EF595F5C557EF032691282E13_inline (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) 
{
	{
		OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* L_0 = __this->___U3CContainingOneofU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OriginalNameAttribute_set_Name_m59F2568A14369771D8A5471123A4409E6EF85B56_inline (OriginalNameAttribute_t9E75B76C2743609B99104B17C9DED79F2F802EEC* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OriginalNameAttribute_set_PreferredAlias_m3D89CC8006C1930E461D3822B4B8EE35788679F3_inline (OriginalNameAttribute_t9E75B76C2743609B99104B17C9DED79F2F802EEC* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CPreferredAliasU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_tDBB28893EE104846AAAF4D79249AD6254CB6EC7E* ServiceDescriptorProto_get_Method_mD603FB2CDAA65A667B86A080996B8FFA01FA3E7C_inline (ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* __this, const RuntimeMethod* method) 
{
	{
		RepeatedField_1_tDBB28893EE104846AAAF4D79249AD6254CB6EC7E* L_0 = __this->___method__7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* ServiceDescriptor_get_Proto_m6E7C4568043ACAAFE2D6CFEA8AD5B97CB3350170_inline (ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* __this, const RuntimeMethod* method) 
{
	{
		ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* L_0 = __this->___proto_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ServiceOptions_t7A8BC19A9254D2E797A516E26929EE2B1B12D334* ServiceDescriptorProto_get_Options_mC879FAA80CB6FF261B987734BF999D71E2013E03_inline (ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* __this, const RuntimeMethod* method) 
{
	{
		ServiceOptions_t7A8BC19A9254D2E797A516E26929EE2B1B12D334* L_0 = __this->___options__9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FieldDescriptor_get_FieldType_mD7E8085F4F0B7FCED231CB145D24118346428FB5_inline (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___fieldType_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* OneofDescriptor_get_Accessor_m6EBDA81DDBD7EF8ACCA4FBF4F52175C73726A0E1_inline (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* __this, const RuntimeMethod* method) 
{
	{
		OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* L_0 = __this->___accessor_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FileDescriptor_get_Syntax_mB5C6EF1E70A665E41B1627C0FE2A87F8B416C033_inline (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSyntaxU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* FieldDescriptor_get_Proto_m3FDA5E399D03D9BE3D346D654E0F1CC1DD4F2D19_inline (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) 
{
	{
		FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* L_0 = __this->___U3CProtoU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* ByteString_get_Empty_m2251FAD9C8D09FA127E81F228DF5A60D4EE3F414_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592_il2cpp_TypeInfo_var);
		ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* L_0 = ((ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592_StaticFields*)il2cpp_codegen_static_fields_for(ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592_il2cpp_TypeInfo_var))->___empty_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_Dependencies_mAC7C5AB2751A6B9A4A2F6AE3A4E0DB2216793F7C_inline (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CDependenciesU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_MessageTypes_m0FB1C458BB323A507214648AC7944A9FBE4D3E78_inline (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMessageTypesU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = *((int64_t*)((uintptr_t)(&___value0)));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* ProtobufEqualityComparers_get_BitwiseDoubleEqualityComparer_mE0E0358747BA998C14B09B00EF0EEC35FAD67189_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_0 = ((ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var))->___U3CBitwiseDoubleEqualityComparerU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* ProtobufEqualityComparers_get_BitwiseSingleEqualityComparer_mB00254F465D7EAA2754FA111AF8F561BF50455A8_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_0 = ((ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var))->___U3CBitwiseSingleEqualityComparerU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RepeatedField_1_get_Count_m27D2CA123A5BB11C5CB1AB34412C327A00FAB882_gshared_inline (RepeatedField_1_t9D56278C8E96FE81D8E75B66681CE2EAC61C01C9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___count_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t7D99B8C24B0BFFDE97F3C514C8E7AA5FA84C046D* ExtensionSet_1_get_ValuesByNumber_mF09E6EB60864810B11A9C69168CD1519187A8564_gshared_inline (ExtensionSet_1_tA306FF3953ADABAEE3DC44E13016F5BA6BAB5399* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t7D99B8C24B0BFFDE97F3C514C8E7AA5FA84C046D* L_0 = (Dictionary_2_t7D99B8C24B0BFFDE97F3C514C8E7AA5FA84C046D*)__this->___U3CValuesByNumberU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_gshared_inline (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
