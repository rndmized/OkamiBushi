#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t846150980;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.String
struct String_t;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.Type
struct Type_t;
// System.Reflection.RuntimeFieldInfo
struct RuntimeFieldInfo_t4270975280;
// System.RuntimeType
struct RuntimeType_t3636489352;
// System.MissingMemberException
struct MissingMemberException_t1385081665;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.NotImplementedException
struct NotImplementedException_t3489357830;
// System.TypeIdentifier
struct TypeIdentifier_t2999352009;
// System.TypeIdentifiers/Display
struct Display_t2029414921;
// System.TypeIdentifiers/NoEscape
struct NoEscape_t3415473081;
// System.TypeNames/ATypeName
struct ATypeName_t2426384130;
// System.TypeInitializationException
struct TypeInitializationException_t2973684290;
// System.SystemException
struct SystemException_t176217640;
// System.Exception
struct Exception_t;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.TypeLoadException
struct TypeLoadException_t3707937253;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// System.Func`2<System.Reflection.AssemblyName,System.Reflection.Assembly>
struct Func_2_t464525003;
// System.Func`4<System.Reflection.Assembly,System.String,System.Boolean,System.Type>
struct Func_4_t1497230017;
// System.TypeSpec
struct TypeSpec_t1651486824;
// System.TypeName
struct TypeName_t433286169;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Collections.Generic.List`1<System.TypeIdentifier>
struct List_1_t176459455;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<System.TypeSpec>
struct List_1_t3123561566;
// System.Collections.Generic.List`1<System.ModifierSpec>
struct List_1_t1546471780;
// System.ModifierSpec
struct ModifierSpec_t74397038;
// System.Reflection.AssemblyName
struct AssemblyName_t270931938;
// System.Reflection.Assembly
struct Assembly_t;
// System.Func`2<System.Object,System.Object>
struct Func_2_t2447130374;
// System.IO.FileNotFoundException
struct FileNotFoundException_t225391025;
// System.Func`4<System.Object,System.Object,System.Boolean,System.Object>
struct Func_4_t1471758999;
// System.PointerSpec
struct PointerSpec_t334147946;
// System.ArraySpec
struct ArraySpec_t3456100556;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.OverflowException
struct OverflowException_t2020128637;
// System.InvalidCastException
struct InvalidCastException_t3927145244;
// System.IConvertible
struct IConvertible_t2977365677;
// System.UnauthorizedAccessException
struct UnauthorizedAccessException_t490705335;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t2886101344;
// System.EventArgs
struct EventArgs_t3591816995;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t3101989324;
// System.Delegate
struct Delegate_t1188392813;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Reflection.Missing
struct Missing_t508514592;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.UnitySerializationHolder
struct UnitySerializationHolder_t431912834;
// System.Reflection.RuntimeAssembly
struct RuntimeAssembly_t1451753063;
// System.Runtime.Serialization.SerializationException
struct SerializationException_t3941511869;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.Module
struct Module_t2987026101;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t1578797820;
// System.ValueType
struct ValueType_t3640485471;
// System.Version
struct Version_t3456873960;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.FormatException
struct FormatException_t154580423;
// System.WeakReference
struct WeakReference_t1334886716;
// System.WindowsConsoleDriver
struct WindowsConsoleDriver_t3991887195;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.InputRecord
struct InputRecord_t2660212290;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2171992254;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2405853701;
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Globalization.Calendar
struct Calendar_t1661121569;
// System.Globalization.CultureData
struct CultureData_t1899656083;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t3046556399;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t3943099367;
// System.Void
struct Void_t1185182177;
// System.TypeIdentifier[]
struct TypeIdentifierU5BU5D_t1841839092;
// System.TypeSpec[]
struct TypeSpecU5BU5D_t2294135033;
// System.ModifierSpec[]
struct ModifierSpecU5BU5D_t1616793883;
// System.Char
struct Char_t3634460470;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t2120639521;
// System.Security.Policy.Evidence
struct Evidence_t2008144148;
// System.Security.PermissionSet
struct PermissionSet_t223948603;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t3411219591;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.Binder
struct Binder_t2999457153;
// System.Reflection.TypeFilter
struct TypeFilter_t2356120900;
// System.MonoTypeInfo
struct MonoTypeInfo_t3366989025;
// System.Reflection.RuntimeConstructorInfo
struct RuntimeConstructorInfo_t1806616898;
// System.Collections.Generic.Dictionary`2<System.Guid,System.Type>
struct Dictionary_2_t1532962293;
// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t359885250;

extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtrU5BU5D_t4013366056_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeType_t3636489352_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeFieldInfo_t4270975280_il2cpp_TypeInfo_var;
extern RuntimeClass* MissingMemberException_t1385081665_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2833503317;
extern String_t* _stringLiteral1131433136;
extern String_t* _stringLiteral1539698275;
extern String_t* _stringLiteral1093200707;
extern String_t* _stringLiteral811425263;
extern String_t* _stringLiteral2448392024;
extern String_t* _stringLiteral2994513570;
extern String_t* _stringLiteral904502574;
extern const uint32_t TypedReference_MakeTypedReference_m4218624797_MetadataUsageId;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern const uint32_t TypedReference_GetHashCode_m2046447331_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral294131998;
extern const uint32_t TypedReference_Equals_m2034077850_MetadataUsageId;
extern RuntimeClass* NotImplementedException_t3489357830_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1712623819;
extern const uint32_t TypedReference_SetTypedReference_m3942604670_MetadataUsageId;
extern RuntimeClass* Display_t2029414921_il2cpp_TypeInfo_var;
extern const uint32_t TypeIdentifiers_FromDisplay_m702141453_MetadataUsageId;
extern RuntimeClass* NoEscape_t3415473081_il2cpp_TypeInfo_var;
extern const uint32_t TypeIdentifiers_WithoutEscape_m3903155460_MetadataUsageId;
extern String_t* _stringLiteral1549451187;
extern const uint32_t TypeInitializationException__ctor_m3284204115_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4108792180;
extern const uint32_t TypeInitializationException__ctor_m2019704949_MetadataUsageId;
extern String_t* _stringLiteral472199111;
extern const uint32_t TypeInitializationException__ctor_m3546444694_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t TypeInitializationException_get_TypeName_m1310207019_MetadataUsageId;
extern const RuntimeType* String_t_0_0_0_var;
extern const uint32_t TypeInitializationException_GetObjectData_m583196803_MetadataUsageId;
extern String_t* _stringLiteral3421862211;
extern const uint32_t TypeLoadException__ctor_m1802671078_MetadataUsageId;
extern RuntimeClass* CultureInfo_t4157843068_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral639039807;
extern String_t* _stringLiteral3913841465;
extern const uint32_t TypeLoadException_SetMessageField_m1068811921_MetadataUsageId;
extern String_t* _stringLiteral79347;
extern String_t* _stringLiteral1447332123;
extern String_t* _stringLiteral1596726042;
extern String_t* _stringLiteral2099428946;
extern String_t* _stringLiteral2742360254;
extern const uint32_t TypeLoadException__ctor_m3040414142_MetadataUsageId;
extern const uint32_t TypeLoadException_GetObjectData_m2127700107_MetadataUsageId;
extern RuntimeClass* TypeName_t433286169_il2cpp_TypeInfo_var;
extern const uint32_t ATypeName_Equals_m231522946_MetadataUsageId;
extern const uint32_t ATypeName_Equals_m2362229487_MetadataUsageId;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_GetEnumerator_m912078294_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m719689252_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m664374857_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2167990708_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m2892042586_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m4271156924_RuntimeMethod_var;
extern String_t* _stringLiteral3450517380;
extern const uint32_t TypeSpec_GetDisplayFullName_m468926262_MetadataUsageId;
extern RuntimeClass* ModifierSpec_t74397038_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_GetEnumerator_m3070018697_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m4128062465_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m3779760751_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2103495514_RuntimeMethod_var;
extern const uint32_t TypeSpec_GetModifierString_m1917884674_MetadataUsageId;
extern String_t* _stringLiteral472198183;
extern String_t* _stringLiteral2960085349;
extern const uint32_t TypeSpec_Parse_m2141981279_MetadataUsageId;
extern const uint32_t TypeSpec_UnescapeInternalName_m3192984231_MetadataUsageId;
extern RuntimeClass* AssemblyName_t270931938_il2cpp_TypeInfo_var;
extern RuntimeClass* FileNotFoundException_t225391025_il2cpp_TypeInfo_var;
extern RuntimeClass* TypeLoadException_t3707937253_il2cpp_TypeInfo_var;
extern RuntimeClass* TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Func_2_Invoke_m567693240_RuntimeMethod_var;
extern const RuntimeMethod* Func_4_Invoke_m3884166673_RuntimeMethod_var;
extern String_t* _stringLiteral206095476;
extern String_t* _stringLiteral3452614521;
extern String_t* _stringLiteral3983059074;
extern const uint32_t TypeSpec_Resolve_m4214758032_MetadataUsageId;
extern RuntimeClass* List_1_t176459455_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2197792278_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1829376775_RuntimeMethod_var;
extern const uint32_t TypeSpec_AddName_m2260684595_MetadataUsageId;
extern RuntimeClass* List_1_t1546471780_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1369486050_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3002018067_RuntimeMethod_var;
extern const uint32_t TypeSpec_AddModifier_m4214585389_MetadataUsageId;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern const uint32_t TypeSpec_SkipSpace_m814955084_MetadataUsageId;
extern String_t* _stringLiteral3050366658;
extern const uint32_t TypeSpec_BoundCheck_m765121887_MetadataUsageId;
extern RuntimeClass* TypeSpec_t1651486824_il2cpp_TypeInfo_var;
extern RuntimeClass* PointerSpec_t334147946_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3123561566_il2cpp_TypeInfo_var;
extern RuntimeClass* ArraySpec_t3456100556_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1318629066_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1314727163_RuntimeMethod_var;
extern String_t* _stringLiteral1539731671;
extern String_t* _stringLiteral1704964031;
extern String_t* _stringLiteral1906112489;
extern String_t* _stringLiteral2020129663;
extern String_t* _stringLiteral1531991302;
extern String_t* _stringLiteral3306332718;
extern String_t* _stringLiteral2586657123;
extern String_t* _stringLiteral4034930068;
extern String_t* _stringLiteral3326185772;
extern String_t* _stringLiteral2188758489;
extern String_t* _stringLiteral44963236;
extern String_t* _stringLiteral763880081;
extern String_t* _stringLiteral142097342;
extern String_t* _stringLiteral2081618272;
extern String_t* _stringLiteral3851281273;
extern String_t* _stringLiteral2897310011;
extern String_t* _stringLiteral2160565876;
extern const uint32_t TypeSpec_Parse_m520729350_MetadataUsageId;
extern RuntimeClass* UInt16_t2177724958_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2004762616;
extern const uint32_t UInt16_CompareTo_m2664746316_MetadataUsageId;
extern const uint32_t UInt16_Equals_m642257745_MetadataUsageId;
extern RuntimeClass* OverflowException_t2020128637_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2348539160;
extern const uint32_t UInt16_Parse_m583993245_MetadataUsageId;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern const uint32_t UInt16_System_IConvertible_ToBoolean_m3911119012_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToChar_m2096055221_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToSByte_m2219828332_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToByte_m3185614807_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToInt16_m2337134904_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToInt32_m1950778303_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToUInt32_m1074326139_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToInt64_m3635199533_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToUInt64_m424720762_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToSingle_m2654722405_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToDouble_m333121300_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToDecimal_m1320731319_MetadataUsageId;
extern RuntimeClass* InvalidCastException_t3927145244_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4287968739;
extern String_t* _stringLiteral2789625702;
extern String_t* _stringLiteral3798051137;
extern const uint32_t UInt16_System_IConvertible_ToDateTime_m2594768090_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToType_m1028622578_MetadataUsageId;
extern RuntimeClass* UInt32_t2560061978_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1622425596;
extern const uint32_t UInt32_CompareTo_m362578384_MetadataUsageId;
extern const uint32_t UInt32_Equals_m351935437_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToBoolean_m1763673183_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToChar_m1873050533_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToSByte_m1061556466_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToByte_m4072781199_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToInt16_m1659441601_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToUInt16_m3125657960_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToInt32_m220754611_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToInt64_m2261037378_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToUInt64_m1094958903_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToSingle_m1272823424_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToDouble_m940039456_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToDecimal_m675004071_MetadataUsageId;
extern String_t* _stringLiteral2789887848;
extern const uint32_t UInt32_System_IConvertible_ToDateTime_m2767723441_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToType_m922356584_MetadataUsageId;
extern RuntimeClass* UInt64_t4134040092_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2814066682;
extern const uint32_t UInt64_CompareTo_m3619843473_MetadataUsageId;
extern const uint32_t UInt64_Equals_m1879425698_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToBoolean_m3071416000_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToChar_m2074245892_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToSByte_m30962591_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToByte_m1501504925_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToInt16_m3895479143_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToUInt16_m4165747038_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToInt32_m949522652_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToUInt32_m2784653358_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToInt64_m4241475606_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToSingle_m925613075_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToDouble_m602078108_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToDecimal_m806594027_MetadataUsageId;
extern String_t* _stringLiteral2789494635;
extern const uint32_t UInt64_System_IConvertible_ToDateTime_m3434604642_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToType_m4049257834_MetadataUsageId;
extern RuntimeClass* UIntPtr_t_il2cpp_TypeInfo_var;
extern const uint32_t UIntPtr_Equals_m1316671746_MetadataUsageId;
extern const uint32_t UIntPtr_ToString_m984583492_MetadataUsageId;
extern String_t* _stringLiteral1363226343;
extern const uint32_t UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m1767630151_MetadataUsageId;
extern RuntimeClass* VoidU2A_t3811567795_il2cpp_TypeInfo_var;
extern const uint32_t UIntPtr_get_Size_m703595701_MetadataUsageId;
extern const uint32_t UIntPtr__cctor_m3513964473_MetadataUsageId;
extern String_t* _stringLiteral2994918982;
extern const uint32_t UnauthorizedAccessException__ctor_m246605039_MetadataUsageId;
extern RuntimeClass* EventArgs_t3591816995_il2cpp_TypeInfo_var;
extern const uint32_t UnhandledExceptionEventArgs__ctor_m224348470_MetadataUsageId;
extern const RuntimeType* UnitySerializationHolder_t431912834_0_0_0_var;
extern String_t* _stringLiteral3283586028;
extern const uint32_t UnitySerializationHolder_GetUnitySerializationInfo_m927411785_MetadataUsageId;
extern const RuntimeType* Int32U5BU5D_t385246372_0_0_0_var;
extern RuntimeClass* List_1_t128053199_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1204004817_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2080863212_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m1469074435_RuntimeMethod_var;
extern String_t* _stringLiteral3927933503;
extern const uint32_t UnitySerializationHolder_AddElementTypes_m2711578409_MetadataUsageId;
extern const RuntimeType* MethodBase_t_0_0_0_var;
extern const RuntimeType* Type_t_0_0_0_var;
extern const RuntimeType* TypeU5BU5D_t3940880105_0_0_0_var;
extern String_t* _stringLiteral3378664767;
extern String_t* _stringLiteral98117656;
extern String_t* _stringLiteral2725392681;
extern String_t* _stringLiteral1245918466;
extern const uint32_t UnitySerializationHolder_GetUnitySerializationInfo_m3060468266_MetadataUsageId;
extern String_t* _stringLiteral2037252898;
extern String_t* _stringLiteral209558951;
extern const uint32_t UnitySerializationHolder_GetUnitySerializationInfo_m3966690610_MetadataUsageId;
extern RuntimeClass* MethodBase_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern const uint32_t UnitySerializationHolder__ctor_m3869442095_MetadataUsageId;
extern RuntimeClass* SerializationException_t3941511869_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3245515088;
extern const uint32_t UnitySerializationHolder_ThrowInsufficientInformation_m1747464776_MetadataUsageId;
extern String_t* _stringLiteral532335187;
extern const uint32_t UnitySerializationHolder_GetObjectData_m3377455907_MetadataUsageId;
extern RuntimeClass* Empty_t4129602447_il2cpp_TypeInfo_var;
extern RuntimeClass* DBNull_t3725197148_il2cpp_TypeInfo_var;
extern RuntimeClass* Missing_t508514592_il2cpp_TypeInfo_var;
extern RuntimeClass* Module_t2987026101_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1313207612;
extern String_t* _stringLiteral1498318814;
extern String_t* _stringLiteral3407159193;
extern const uint32_t UnitySerializationHolder_GetRealObject_m1624354633_MetadataUsageId;
extern RuntimeClass* IndexOutOfRangeException_t1578797820_il2cpp_TypeInfo_var;
extern const uint32_t UnSafeCharBuffer_AppendString_m2223303597_MetadataUsageId;
extern const uint32_t ValueType_DefaultEquals_m2927252100_MetadataUsageId;
extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral419133523;
extern String_t* _stringLiteral2448690427;
extern String_t* _stringLiteral2762033855;
extern String_t* _stringLiteral437191301;
extern String_t* _stringLiteral3187820736;
extern const uint32_t Version__ctor_m417728625_MetadataUsageId;
extern const uint32_t Version__ctor_m1550720073_MetadataUsageId;
extern const uint32_t Version__ctor_m3537335798_MetadataUsageId;
extern RuntimeClass* Version_t3456873960_il2cpp_TypeInfo_var;
extern const uint32_t Version__ctor_m1394137037_MetadataUsageId;
extern const uint32_t Version_Clone_m1749041863_MetadataUsageId;
extern String_t* _stringLiteral1182144617;
extern const uint32_t Version_CompareTo_m1662919407_MetadataUsageId;
extern const uint32_t Version_CompareTo_m3146217210_MetadataUsageId;
extern const uint32_t Version_Equals_m3073813696_MetadataUsageId;
extern const uint32_t Version_Equals_m1564427710_MetadataUsageId;
extern String_t* _stringLiteral3104458722;
extern String_t* _stringLiteral3452614544;
extern String_t* _stringLiteral3452614542;
extern String_t* _stringLiteral3976682977;
extern String_t* _stringLiteral3452614541;
extern String_t* _stringLiteral3452614540;
extern const uint32_t Version_ToString_m3654989516_MetadataUsageId;
extern String_t* _stringLiteral818277059;
extern const uint32_t Version_Parse_m1775477436_MetadataUsageId;
extern String_t* _stringLiteral1902401671;
extern const uint32_t Version_TryParseVersion_m1428065303_MetadataUsageId;
extern const uint32_t Version_TryParseComponent_m3061913945_MetadataUsageId;
extern const uint32_t Version_op_Inequality_m1696193441_MetadataUsageId;
extern String_t* _stringLiteral3451500490;
extern const uint32_t Version_op_LessThan_m3745610070_MetadataUsageId;
extern const uint32_t Version_op_LessThanOrEqual_m666140174_MetadataUsageId;
extern const uint32_t Version_op_GreaterThanOrEqual_m474945801_MetadataUsageId;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern const uint32_t Version__cctor_m3568671087_MetadataUsageId;
extern const uint32_t VersionResult_SetFailure_m3577471770_MetadataUsageId;
extern RuntimeClass* FormatException_t154580423_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3611462241;
extern String_t* _stringLiteral1986456553;
extern const uint32_t VersionResult_GetVersionParseException_m2052602218_MetadataUsageId;
extern const RuntimeType* RuntimeObject_0_0_0_var;
extern String_t* _stringLiteral3234942771;
extern String_t* _stringLiteral2922588279;
extern const uint32_t WeakReference__ctor_m1244067698_MetadataUsageId;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern const uint32_t WeakReference_GetObjectData_m2192383095_MetadataUsageId;
extern RuntimeClass* Marshal_t1757017490_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1071424308;
extern const uint32_t WindowsConsoleDriver_ReadKey_m209631140_MetadataUsageId;
struct InputRecord_t2660212290_marshaled_pinvoke;
struct InputRecord_t2660212290;;
struct InputRecord_t2660212290_marshaled_pinvoke;;
extern const uint32_t CFHelpers_FetchString_m1875874129_MetadataUsageId;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern const uint32_t CFHelpers_FetchDataBuffer_m2260522698_MetadataUsageId;
extern const uint32_t CFHelpers_CreateCertificateFromData_m702581168_MetadataUsageId;
struct Exception_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct CultureInfo_t4157843068_marshaled_pinvoke;
struct CultureData_t1899656083_marshaled_pinvoke;
struct CultureInfo_t4157843068_marshaled_com;
struct CultureData_t1899656083_marshaled_com;
struct Assembly_t_marshaled_pinvoke;
struct Assembly_t_marshaled_com;

struct FieldInfoU5BU5D_t846150980;
struct IntPtrU5BU5D_t4013366056;
struct ObjectU5BU5D_t2843939325;
struct TypeU5BU5D_t3940880105;
struct DelegateU5BU5D_t1703627840;
struct Int32U5BU5D_t385246372;
struct StringU5BU5D_t1281789340;
struct CharU5BU5D_t3528271667;
struct ByteU5BU5D_t4116647657;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4013366056* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
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
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
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
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t2481557153 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t2481557153 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t2481557153 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t1169129676* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t1169129676** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t1169129676* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4013366056* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4013366056* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
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
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
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
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef SERIALIZATIONINFO_T950877179_H
#define SERIALIZATIONINFO_T950877179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t950877179  : public RuntimeObject
{
public:
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t1281789340* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t2843939325* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t3940880105* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t2736202052 * ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t * ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;

public:
	inline static int32_t get_offset_of_m_members_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_members_3)); }
	inline StringU5BU5D_t1281789340* get_m_members_3() const { return ___m_members_3; }
	inline StringU5BU5D_t1281789340** get_address_of_m_members_3() { return &___m_members_3; }
	inline void set_m_members_3(StringU5BU5D_t1281789340* value)
	{
		___m_members_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_members_3), value);
	}

	inline static int32_t get_offset_of_m_data_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_data_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_data_4() const { return ___m_data_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_data_4() { return &___m_data_4; }
	inline void set_m_data_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_data_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_data_4), value);
	}

	inline static int32_t get_offset_of_m_types_5() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_types_5)); }
	inline TypeU5BU5D_t3940880105* get_m_types_5() const { return ___m_types_5; }
	inline TypeU5BU5D_t3940880105** get_address_of_m_types_5() { return &___m_types_5; }
	inline void set_m_types_5(TypeU5BU5D_t3940880105* value)
	{
		___m_types_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_types_5), value);
	}

	inline static int32_t get_offset_of_m_nameToIndex_6() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_nameToIndex_6)); }
	inline Dictionary_2_t2736202052 * get_m_nameToIndex_6() const { return ___m_nameToIndex_6; }
	inline Dictionary_2_t2736202052 ** get_address_of_m_nameToIndex_6() { return &___m_nameToIndex_6; }
	inline void set_m_nameToIndex_6(Dictionary_2_t2736202052 * value)
	{
		___m_nameToIndex_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_nameToIndex_6), value);
	}

	inline static int32_t get_offset_of_m_currMember_7() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_currMember_7)); }
	inline int32_t get_m_currMember_7() const { return ___m_currMember_7; }
	inline int32_t* get_address_of_m_currMember_7() { return &___m_currMember_7; }
	inline void set_m_currMember_7(int32_t value)
	{
		___m_currMember_7 = value;
	}

	inline static int32_t get_offset_of_m_converter_8() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_converter_8)); }
	inline RuntimeObject* get_m_converter_8() const { return ___m_converter_8; }
	inline RuntimeObject** get_address_of_m_converter_8() { return &___m_converter_8; }
	inline void set_m_converter_8(RuntimeObject* value)
	{
		___m_converter_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_converter_8), value);
	}

	inline static int32_t get_offset_of_m_fullTypeName_9() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_fullTypeName_9)); }
	inline String_t* get_m_fullTypeName_9() const { return ___m_fullTypeName_9; }
	inline String_t** get_address_of_m_fullTypeName_9() { return &___m_fullTypeName_9; }
	inline void set_m_fullTypeName_9(String_t* value)
	{
		___m_fullTypeName_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_fullTypeName_9), value);
	}

	inline static int32_t get_offset_of_m_assemName_10() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_assemName_10)); }
	inline String_t* get_m_assemName_10() const { return ___m_assemName_10; }
	inline String_t** get_address_of_m_assemName_10() { return &___m_assemName_10; }
	inline void set_m_assemName_10(String_t* value)
	{
		___m_assemName_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_assemName_10), value);
	}

	inline static int32_t get_offset_of_objectType_11() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___objectType_11)); }
	inline Type_t * get_objectType_11() const { return ___objectType_11; }
	inline Type_t ** get_address_of_objectType_11() { return &___objectType_11; }
	inline void set_objectType_11(Type_t * value)
	{
		___objectType_11 = value;
		Il2CppCodeGenWriteBarrier((&___objectType_11), value);
	}

	inline static int32_t get_offset_of_isFullTypeNameSetExplicit_12() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___isFullTypeNameSetExplicit_12)); }
	inline bool get_isFullTypeNameSetExplicit_12() const { return ___isFullTypeNameSetExplicit_12; }
	inline bool* get_address_of_isFullTypeNameSetExplicit_12() { return &___isFullTypeNameSetExplicit_12; }
	inline void set_isFullTypeNameSetExplicit_12(bool value)
	{
		___isFullTypeNameSetExplicit_12 = value;
	}

	inline static int32_t get_offset_of_isAssemblyNameSetExplicit_13() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___isAssemblyNameSetExplicit_13)); }
	inline bool get_isAssemblyNameSetExplicit_13() const { return ___isAssemblyNameSetExplicit_13; }
	inline bool* get_address_of_isAssemblyNameSetExplicit_13() { return &___isAssemblyNameSetExplicit_13; }
	inline void set_isAssemblyNameSetExplicit_13(bool value)
	{
		___isAssemblyNameSetExplicit_13 = value;
	}

	inline static int32_t get_offset_of_requireSameTokenInPartialTrust_14() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___requireSameTokenInPartialTrust_14)); }
	inline bool get_requireSameTokenInPartialTrust_14() const { return ___requireSameTokenInPartialTrust_14; }
	inline bool* get_address_of_requireSameTokenInPartialTrust_14() { return &___requireSameTokenInPartialTrust_14; }
	inline void set_requireSameTokenInPartialTrust_14(bool value)
	{
		___requireSameTokenInPartialTrust_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFO_T950877179_H
#ifndef TYPENAMEPARSER_T3310353628_H
#define TYPENAMEPARSER_T3310353628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeNameParser
struct  TypeNameParser_t3310353628  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPENAMEPARSER_T3310353628_H
#ifndef CULTUREINFO_T4157843068_H
#define CULTUREINFO_T4157843068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t4157843068  : public RuntimeObject
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
	NumberFormatInfo_t435877138 * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t3810425522 * ___textInfo_12;
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
	StringU5BU5D_t1281789340* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1092934962 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t1661121569 * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t4157843068 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t4116647657* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t1899656083 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___numInfo_10)); }
	inline NumberFormatInfo_t435877138 * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t435877138 ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t435877138 * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_10), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t2405853701 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t2405853701 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_11), value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textInfo_12)); }
	inline TextInfo_t3810425522 * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_t3810425522 ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_t3810425522 * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_12), value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_13), value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_14), value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_15), value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_16), value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_17), value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_18), value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((&___territory_19), value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___native_calendar_names_20)); }
	inline StringU5BU5D_t1281789340* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_t1281789340** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_t1281789340* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((&___native_calendar_names_20), value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___compareInfo_21)); }
	inline CompareInfo_t1092934962 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t1092934962 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t1092934962 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_21), value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_24)); }
	inline Calendar_t1661121569 * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t1661121569 ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t1661121569 * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_24), value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_culture_25)); }
	inline CultureInfo_t4157843068 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t4157843068 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t4157843068 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_25), value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_t4116647657* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_t4116647657** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_t4116647657* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_27), value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_cultureData_28)); }
	inline CultureData_t1899656083 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t1899656083 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t1899656083 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_cultureData_28), value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t4157843068_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t4157843068 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t4157843068 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t4157843068 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t4157843068 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t3046556399 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t3943099367 * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t4157843068 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t4157843068 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t4157843068 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_0), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_1), value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t4157843068 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t4157843068 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t4157843068 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((&___default_current_culture_2), value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t4157843068 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t4157843068 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t4157843068 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultThreadCurrentUICulture_33), value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t4157843068 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t4157843068 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t4157843068 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultThreadCurrentCulture_34), value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t3046556399 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t3046556399 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t3046556399 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_35), value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t3943099367 * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t3943099367 ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t3943099367 * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_36), value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t4157843068_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t435877138 * ___numInfo_10;
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_11;
	TextInfo_t3810425522 * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1092934962 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t1661121569 * ___calendar_24;
	CultureInfo_t4157843068_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	uint8_t* ___cached_serialized_form_27;
	CultureData_t1899656083_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t4157843068_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t435877138 * ___numInfo_10;
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_11;
	TextInfo_t3810425522 * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1092934962 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t1661121569 * ___calendar_24;
	CultureInfo_t4157843068_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	uint8_t* ___cached_serialized_form_27;
	CultureData_t1899656083_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
#endif // CULTUREINFO_T4157843068_H
#ifndef EVENTARGS_T3591816995_H
#define EVENTARGS_T3591816995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3591816995  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3591816995_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3591816995 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3591816995_StaticFields, ___Empty_0)); }
	inline EventArgs_t3591816995 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3591816995 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3591816995 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3591816995_H
#ifndef UNITYSERIALIZATIONHOLDER_T431912834_H
#define UNITYSERIALIZATIONHOLDER_T431912834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder
struct  UnitySerializationHolder_t431912834  : public RuntimeObject
{
public:
	// System.Type[] System.UnitySerializationHolder::m_instantiation
	TypeU5BU5D_t3940880105* ___m_instantiation_0;
	// System.Int32[] System.UnitySerializationHolder::m_elementTypes
	Int32U5BU5D_t385246372* ___m_elementTypes_1;
	// System.Int32 System.UnitySerializationHolder::m_genericParameterPosition
	int32_t ___m_genericParameterPosition_2;
	// System.Type System.UnitySerializationHolder::m_declaringType
	Type_t * ___m_declaringType_3;
	// System.Reflection.MethodBase System.UnitySerializationHolder::m_declaringMethod
	MethodBase_t * ___m_declaringMethod_4;
	// System.String System.UnitySerializationHolder::m_data
	String_t* ___m_data_5;
	// System.String System.UnitySerializationHolder::m_assemblyName
	String_t* ___m_assemblyName_6;
	// System.Int32 System.UnitySerializationHolder::m_unityType
	int32_t ___m_unityType_7;

public:
	inline static int32_t get_offset_of_m_instantiation_0() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t431912834, ___m_instantiation_0)); }
	inline TypeU5BU5D_t3940880105* get_m_instantiation_0() const { return ___m_instantiation_0; }
	inline TypeU5BU5D_t3940880105** get_address_of_m_instantiation_0() { return &___m_instantiation_0; }
	inline void set_m_instantiation_0(TypeU5BU5D_t3940880105* value)
	{
		___m_instantiation_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_instantiation_0), value);
	}

	inline static int32_t get_offset_of_m_elementTypes_1() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t431912834, ___m_elementTypes_1)); }
	inline Int32U5BU5D_t385246372* get_m_elementTypes_1() const { return ___m_elementTypes_1; }
	inline Int32U5BU5D_t385246372** get_address_of_m_elementTypes_1() { return &___m_elementTypes_1; }
	inline void set_m_elementTypes_1(Int32U5BU5D_t385246372* value)
	{
		___m_elementTypes_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_elementTypes_1), value);
	}

	inline static int32_t get_offset_of_m_genericParameterPosition_2() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t431912834, ___m_genericParameterPosition_2)); }
	inline int32_t get_m_genericParameterPosition_2() const { return ___m_genericParameterPosition_2; }
	inline int32_t* get_address_of_m_genericParameterPosition_2() { return &___m_genericParameterPosition_2; }
	inline void set_m_genericParameterPosition_2(int32_t value)
	{
		___m_genericParameterPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_declaringType_3() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t431912834, ___m_declaringType_3)); }
	inline Type_t * get_m_declaringType_3() const { return ___m_declaringType_3; }
	inline Type_t ** get_address_of_m_declaringType_3() { return &___m_declaringType_3; }
	inline void set_m_declaringType_3(Type_t * value)
	{
		___m_declaringType_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_declaringType_3), value);
	}

	inline static int32_t get_offset_of_m_declaringMethod_4() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t431912834, ___m_declaringMethod_4)); }
	inline MethodBase_t * get_m_declaringMethod_4() const { return ___m_declaringMethod_4; }
	inline MethodBase_t ** get_address_of_m_declaringMethod_4() { return &___m_declaringMethod_4; }
	inline void set_m_declaringMethod_4(MethodBase_t * value)
	{
		___m_declaringMethod_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_declaringMethod_4), value);
	}

	inline static int32_t get_offset_of_m_data_5() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t431912834, ___m_data_5)); }
	inline String_t* get_m_data_5() const { return ___m_data_5; }
	inline String_t** get_address_of_m_data_5() { return &___m_data_5; }
	inline void set_m_data_5(String_t* value)
	{
		___m_data_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_data_5), value);
	}

	inline static int32_t get_offset_of_m_assemblyName_6() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t431912834, ___m_assemblyName_6)); }
	inline String_t* get_m_assemblyName_6() const { return ___m_assemblyName_6; }
	inline String_t** get_address_of_m_assemblyName_6() { return &___m_assemblyName_6; }
	inline void set_m_assemblyName_6(String_t* value)
	{
		___m_assemblyName_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_assemblyName_6), value);
	}

	inline static int32_t get_offset_of_m_unityType_7() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t431912834, ___m_unityType_7)); }
	inline int32_t get_m_unityType_7() const { return ___m_unityType_7; }
	inline int32_t* get_address_of_m_unityType_7() { return &___m_unityType_7; }
	inline void set_m_unityType_7(int32_t value)
	{
		___m_unityType_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSERIALIZATIONHOLDER_T431912834_H
#ifndef ATYPENAME_T2426384130_H
#define ATYPENAME_T2426384130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeNames/ATypeName
struct  ATypeName_t2426384130  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATYPENAME_T2426384130_H
#ifndef TYPEIDENTIFIERS_T3002432201_H
#define TYPEIDENTIFIERS_T3002432201_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeIdentifiers
struct  TypeIdentifiers_t3002432201  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEIDENTIFIERS_T3002432201_H
#ifndef LIST_1_T176459455_H
#define LIST_1_T176459455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.TypeIdentifier>
struct  List_1_t176459455  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TypeIdentifierU5BU5D_t1841839092* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t176459455, ____items_1)); }
	inline TypeIdentifierU5BU5D_t1841839092* get__items_1() const { return ____items_1; }
	inline TypeIdentifierU5BU5D_t1841839092** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TypeIdentifierU5BU5D_t1841839092* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t176459455, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t176459455, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t176459455, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t176459455_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TypeIdentifierU5BU5D_t1841839092* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t176459455_StaticFields, ____emptyArray_5)); }
	inline TypeIdentifierU5BU5D_t1841839092* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TypeIdentifierU5BU5D_t1841839092** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TypeIdentifierU5BU5D_t1841839092* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T176459455_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t3528271667* ___m_ChunkChars_0;
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
	inline CharU5BU5D_t3528271667* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t3528271667** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t3528271667* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkChars_0), value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkPrevious_1), value);
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef LIST_1_T3123561566_H
#define LIST_1_T3123561566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.TypeSpec>
struct  List_1_t3123561566  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TypeSpecU5BU5D_t2294135033* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3123561566, ____items_1)); }
	inline TypeSpecU5BU5D_t2294135033* get__items_1() const { return ____items_1; }
	inline TypeSpecU5BU5D_t2294135033** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TypeSpecU5BU5D_t2294135033* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3123561566, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3123561566, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3123561566, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t3123561566_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TypeSpecU5BU5D_t2294135033* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3123561566_StaticFields, ____emptyArray_5)); }
	inline TypeSpecU5BU5D_t2294135033* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TypeSpecU5BU5D_t2294135033** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TypeSpecU5BU5D_t2294135033* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3123561566_H
#ifndef POINTERSPEC_T334147946_H
#define POINTERSPEC_T334147946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.PointerSpec
struct  PointerSpec_t334147946  : public RuntimeObject
{
public:
	// System.Int32 System.PointerSpec::pointer_level
	int32_t ___pointer_level_0;

public:
	inline static int32_t get_offset_of_pointer_level_0() { return static_cast<int32_t>(offsetof(PointerSpec_t334147946, ___pointer_level_0)); }
	inline int32_t get_pointer_level_0() const { return ___pointer_level_0; }
	inline int32_t* get_address_of_pointer_level_0() { return &___pointer_level_0; }
	inline void set_pointer_level_0(int32_t value)
	{
		___pointer_level_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTERSPEC_T334147946_H
#ifndef TYPENAMES_T2453564441_H
#define TYPENAMES_T2453564441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeNames
struct  TypeNames_t2453564441  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPENAMES_T2453564441_H
#ifndef TYPESPEC_T1651486824_H
#define TYPESPEC_T1651486824_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeSpec
struct  TypeSpec_t1651486824  : public RuntimeObject
{
public:
	// System.TypeIdentifier System.TypeSpec::name
	RuntimeObject* ___name_0;
	// System.String System.TypeSpec::assembly_name
	String_t* ___assembly_name_1;
	// System.Collections.Generic.List`1<System.TypeIdentifier> System.TypeSpec::nested
	List_1_t176459455 * ___nested_2;
	// System.Collections.Generic.List`1<System.TypeSpec> System.TypeSpec::generic_params
	List_1_t3123561566 * ___generic_params_3;
	// System.Collections.Generic.List`1<System.ModifierSpec> System.TypeSpec::modifier_spec
	List_1_t1546471780 * ___modifier_spec_4;
	// System.Boolean System.TypeSpec::is_byref
	bool ___is_byref_5;
	// System.String System.TypeSpec::display_fullname
	String_t* ___display_fullname_6;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(TypeSpec_t1651486824, ___name_0)); }
	inline RuntimeObject* get_name_0() const { return ___name_0; }
	inline RuntimeObject** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(RuntimeObject* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_assembly_name_1() { return static_cast<int32_t>(offsetof(TypeSpec_t1651486824, ___assembly_name_1)); }
	inline String_t* get_assembly_name_1() const { return ___assembly_name_1; }
	inline String_t** get_address_of_assembly_name_1() { return &___assembly_name_1; }
	inline void set_assembly_name_1(String_t* value)
	{
		___assembly_name_1 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_name_1), value);
	}

	inline static int32_t get_offset_of_nested_2() { return static_cast<int32_t>(offsetof(TypeSpec_t1651486824, ___nested_2)); }
	inline List_1_t176459455 * get_nested_2() const { return ___nested_2; }
	inline List_1_t176459455 ** get_address_of_nested_2() { return &___nested_2; }
	inline void set_nested_2(List_1_t176459455 * value)
	{
		___nested_2 = value;
		Il2CppCodeGenWriteBarrier((&___nested_2), value);
	}

	inline static int32_t get_offset_of_generic_params_3() { return static_cast<int32_t>(offsetof(TypeSpec_t1651486824, ___generic_params_3)); }
	inline List_1_t3123561566 * get_generic_params_3() const { return ___generic_params_3; }
	inline List_1_t3123561566 ** get_address_of_generic_params_3() { return &___generic_params_3; }
	inline void set_generic_params_3(List_1_t3123561566 * value)
	{
		___generic_params_3 = value;
		Il2CppCodeGenWriteBarrier((&___generic_params_3), value);
	}

	inline static int32_t get_offset_of_modifier_spec_4() { return static_cast<int32_t>(offsetof(TypeSpec_t1651486824, ___modifier_spec_4)); }
	inline List_1_t1546471780 * get_modifier_spec_4() const { return ___modifier_spec_4; }
	inline List_1_t1546471780 ** get_address_of_modifier_spec_4() { return &___modifier_spec_4; }
	inline void set_modifier_spec_4(List_1_t1546471780 * value)
	{
		___modifier_spec_4 = value;
		Il2CppCodeGenWriteBarrier((&___modifier_spec_4), value);
	}

	inline static int32_t get_offset_of_is_byref_5() { return static_cast<int32_t>(offsetof(TypeSpec_t1651486824, ___is_byref_5)); }
	inline bool get_is_byref_5() const { return ___is_byref_5; }
	inline bool* get_address_of_is_byref_5() { return &___is_byref_5; }
	inline void set_is_byref_5(bool value)
	{
		___is_byref_5 = value;
	}

	inline static int32_t get_offset_of_display_fullname_6() { return static_cast<int32_t>(offsetof(TypeSpec_t1651486824, ___display_fullname_6)); }
	inline String_t* get_display_fullname_6() const { return ___display_fullname_6; }
	inline String_t** get_address_of_display_fullname_6() { return &___display_fullname_6; }
	inline void set_display_fullname_6(String_t* value)
	{
		___display_fullname_6 = value;
		Il2CppCodeGenWriteBarrier((&___display_fullname_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPESPEC_T1651486824_H
#ifndef ARRAYSPEC_T3456100556_H
#define ARRAYSPEC_T3456100556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArraySpec
struct  ArraySpec_t3456100556  : public RuntimeObject
{
public:
	// System.Int32 System.ArraySpec::dimensions
	int32_t ___dimensions_0;
	// System.Boolean System.ArraySpec::bound
	bool ___bound_1;

public:
	inline static int32_t get_offset_of_dimensions_0() { return static_cast<int32_t>(offsetof(ArraySpec_t3456100556, ___dimensions_0)); }
	inline int32_t get_dimensions_0() const { return ___dimensions_0; }
	inline int32_t* get_address_of_dimensions_0() { return &___dimensions_0; }
	inline void set_dimensions_0(int32_t value)
	{
		___dimensions_0 = value;
	}

	inline static int32_t get_offset_of_bound_1() { return static_cast<int32_t>(offsetof(ArraySpec_t3456100556, ___bound_1)); }
	inline bool get_bound_1() const { return ___bound_1; }
	inline bool* get_address_of_bound_1() { return &___bound_1; }
	inline void set_bound_1(bool value)
	{
		___bound_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYSPEC_T3456100556_H
#ifndef LIST_1_T1546471780_H
#define LIST_1_T1546471780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.ModifierSpec>
struct  List_1_t1546471780  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ModifierSpecU5BU5D_t1616793883* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1546471780, ____items_1)); }
	inline ModifierSpecU5BU5D_t1616793883* get__items_1() const { return ____items_1; }
	inline ModifierSpecU5BU5D_t1616793883** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ModifierSpecU5BU5D_t1616793883* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1546471780, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1546471780, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1546471780, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t1546471780_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ModifierSpecU5BU5D_t1616793883* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1546471780_StaticFields, ____emptyArray_5)); }
	inline ModifierSpecU5BU5D_t1616793883* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ModifierSpecU5BU5D_t1616793883** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ModifierSpecU5BU5D_t1616793883* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1546471780_H
#ifndef MISSING_T508514592_H
#define MISSING_T508514592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Missing
struct  Missing_t508514592  : public RuntimeObject
{
public:

public:
};

struct Missing_t508514592_StaticFields
{
public:
	// System.Reflection.Missing System.Reflection.Missing::Value
	Missing_t508514592 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Missing_t508514592_StaticFields, ___Value_0)); }
	inline Missing_t508514592 * get_Value_0() const { return ___Value_0; }
	inline Missing_t508514592 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(Missing_t508514592 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSING_T508514592_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef DBNULL_T3725197148_H
#define DBNULL_T3725197148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DBNull
struct  DBNull_t3725197148  : public RuntimeObject
{
public:

public:
};

struct DBNull_t3725197148_StaticFields
{
public:
	// System.DBNull System.DBNull::Value
	DBNull_t3725197148 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(DBNull_t3725197148_StaticFields, ___Value_0)); }
	inline DBNull_t3725197148 * get_Value_0() const { return ___Value_0; }
	inline DBNull_t3725197148 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(DBNull_t3725197148 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBNULL_T3725197148_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef CFHELPERS_T2851749608_H
#define CFHELPERS_T2851749608_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XamMac.CoreFoundation.CFHelpers
struct  CFHelpers_t2851749608  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CFHELPERS_T2851749608_H
#ifndef VERSION_T3456873960_H
#define VERSION_T3456873960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Version
struct  Version_t3456873960  : public RuntimeObject
{
public:
	// System.Int32 System.Version::_Major
	int32_t ____Major_0;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_1;
	// System.Int32 System.Version::_Build
	int32_t ____Build_2;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_3;

public:
	inline static int32_t get_offset_of__Major_0() { return static_cast<int32_t>(offsetof(Version_t3456873960, ____Major_0)); }
	inline int32_t get__Major_0() const { return ____Major_0; }
	inline int32_t* get_address_of__Major_0() { return &____Major_0; }
	inline void set__Major_0(int32_t value)
	{
		____Major_0 = value;
	}

	inline static int32_t get_offset_of__Minor_1() { return static_cast<int32_t>(offsetof(Version_t3456873960, ____Minor_1)); }
	inline int32_t get__Minor_1() const { return ____Minor_1; }
	inline int32_t* get_address_of__Minor_1() { return &____Minor_1; }
	inline void set__Minor_1(int32_t value)
	{
		____Minor_1 = value;
	}

	inline static int32_t get_offset_of__Build_2() { return static_cast<int32_t>(offsetof(Version_t3456873960, ____Build_2)); }
	inline int32_t get__Build_2() const { return ____Build_2; }
	inline int32_t* get_address_of__Build_2() { return &____Build_2; }
	inline void set__Build_2(int32_t value)
	{
		____Build_2 = value;
	}

	inline static int32_t get_offset_of__Revision_3() { return static_cast<int32_t>(offsetof(Version_t3456873960, ____Revision_3)); }
	inline int32_t get__Revision_3() const { return ____Revision_3; }
	inline int32_t* get_address_of__Revision_3() { return &____Revision_3; }
	inline void set__Revision_3(int32_t value)
	{
		____Revision_3 = value;
	}
};

struct Version_t3456873960_StaticFields
{
public:
	// System.Char[] System.Version::SeparatorsArray
	CharU5BU5D_t3528271667* ___SeparatorsArray_4;

public:
	inline static int32_t get_offset_of_SeparatorsArray_4() { return static_cast<int32_t>(offsetof(Version_t3456873960_StaticFields, ___SeparatorsArray_4)); }
	inline CharU5BU5D_t3528271667* get_SeparatorsArray_4() const { return ___SeparatorsArray_4; }
	inline CharU5BU5D_t3528271667** get_address_of_SeparatorsArray_4() { return &___SeparatorsArray_4; }
	inline void set_SeparatorsArray_4(CharU5BU5D_t3528271667* value)
	{
		___SeparatorsArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___SeparatorsArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERSION_T3456873960_H
#ifndef EMPTY_T4129602447_H
#define EMPTY_T4129602447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Empty
struct  Empty_t4129602447  : public RuntimeObject
{
public:

public:
};

struct Empty_t4129602447_StaticFields
{
public:
	// System.Empty System.Empty::Value
	Empty_t4129602447 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Empty_t4129602447_StaticFields, ___Value_0)); }
	inline Empty_t4129602447 * get_Value_0() const { return ___Value_0; }
	inline Empty_t4129602447 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(Empty_t4129602447 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMPTY_T4129602447_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef LIST_1_T128053199_H
#define LIST_1_T128053199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t128053199  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t385246372* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____items_1)); }
	inline Int32U5BU5D_t385246372* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t385246372** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t385246372* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t128053199_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t385246372* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t128053199_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t385246372* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t385246372** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t385246372* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T128053199_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T_H
#ifndef GCHANDLE_T3351438187_H
#define GCHANDLE_T3351438187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3351438187 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3351438187, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T3351438187_H
#ifndef INPUTRECORD_T2660212290_H
#define INPUTRECORD_T2660212290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InputRecord
struct  InputRecord_t2660212290 
{
public:
	// System.Int16 System.InputRecord::EventType
	int16_t ___EventType_0;
	// System.Boolean System.InputRecord::KeyDown
	bool ___KeyDown_1;
	// System.Int16 System.InputRecord::RepeatCount
	int16_t ___RepeatCount_2;
	// System.Int16 System.InputRecord::VirtualKeyCode
	int16_t ___VirtualKeyCode_3;
	// System.Int16 System.InputRecord::VirtualScanCode
	int16_t ___VirtualScanCode_4;
	// System.Char System.InputRecord::Character
	Il2CppChar ___Character_5;
	// System.Int32 System.InputRecord::ControlKeyState
	int32_t ___ControlKeyState_6;
	// System.Int32 System.InputRecord::pad1
	int32_t ___pad1_7;
	// System.Boolean System.InputRecord::pad2
	bool ___pad2_8;

public:
	inline static int32_t get_offset_of_EventType_0() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___EventType_0)); }
	inline int16_t get_EventType_0() const { return ___EventType_0; }
	inline int16_t* get_address_of_EventType_0() { return &___EventType_0; }
	inline void set_EventType_0(int16_t value)
	{
		___EventType_0 = value;
	}

	inline static int32_t get_offset_of_KeyDown_1() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___KeyDown_1)); }
	inline bool get_KeyDown_1() const { return ___KeyDown_1; }
	inline bool* get_address_of_KeyDown_1() { return &___KeyDown_1; }
	inline void set_KeyDown_1(bool value)
	{
		___KeyDown_1 = value;
	}

	inline static int32_t get_offset_of_RepeatCount_2() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___RepeatCount_2)); }
	inline int16_t get_RepeatCount_2() const { return ___RepeatCount_2; }
	inline int16_t* get_address_of_RepeatCount_2() { return &___RepeatCount_2; }
	inline void set_RepeatCount_2(int16_t value)
	{
		___RepeatCount_2 = value;
	}

	inline static int32_t get_offset_of_VirtualKeyCode_3() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___VirtualKeyCode_3)); }
	inline int16_t get_VirtualKeyCode_3() const { return ___VirtualKeyCode_3; }
	inline int16_t* get_address_of_VirtualKeyCode_3() { return &___VirtualKeyCode_3; }
	inline void set_VirtualKeyCode_3(int16_t value)
	{
		___VirtualKeyCode_3 = value;
	}

	inline static int32_t get_offset_of_VirtualScanCode_4() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___VirtualScanCode_4)); }
	inline int16_t get_VirtualScanCode_4() const { return ___VirtualScanCode_4; }
	inline int16_t* get_address_of_VirtualScanCode_4() { return &___VirtualScanCode_4; }
	inline void set_VirtualScanCode_4(int16_t value)
	{
		___VirtualScanCode_4 = value;
	}

	inline static int32_t get_offset_of_Character_5() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___Character_5)); }
	inline Il2CppChar get_Character_5() const { return ___Character_5; }
	inline Il2CppChar* get_address_of_Character_5() { return &___Character_5; }
	inline void set_Character_5(Il2CppChar value)
	{
		___Character_5 = value;
	}

	inline static int32_t get_offset_of_ControlKeyState_6() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___ControlKeyState_6)); }
	inline int32_t get_ControlKeyState_6() const { return ___ControlKeyState_6; }
	inline int32_t* get_address_of_ControlKeyState_6() { return &___ControlKeyState_6; }
	inline void set_ControlKeyState_6(int32_t value)
	{
		___ControlKeyState_6 = value;
	}

	inline static int32_t get_offset_of_pad1_7() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___pad1_7)); }
	inline int32_t get_pad1_7() const { return ___pad1_7; }
	inline int32_t* get_address_of_pad1_7() { return &___pad1_7; }
	inline void set_pad1_7(int32_t value)
	{
		___pad1_7 = value;
	}

	inline static int32_t get_offset_of_pad2_8() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___pad2_8)); }
	inline bool get_pad2_8() const { return ___pad2_8; }
	inline bool* get_address_of_pad2_8() { return &___pad2_8; }
	inline void set_pad2_8(bool value)
	{
		___pad2_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.InputRecord
struct InputRecord_t2660212290_marshaled_pinvoke
{
	int16_t ___EventType_0;
	int32_t ___KeyDown_1;
	int16_t ___RepeatCount_2;
	int16_t ___VirtualKeyCode_3;
	int16_t ___VirtualScanCode_4;
	uint8_t ___Character_5;
	int32_t ___ControlKeyState_6;
	int32_t ___pad1_7;
	int32_t ___pad2_8;
};
// Native definition for COM marshalling of System.InputRecord
struct InputRecord_t2660212290_marshaled_com
{
	int16_t ___EventType_0;
	int32_t ___KeyDown_1;
	int16_t ___RepeatCount_2;
	int16_t ___VirtualKeyCode_3;
	int16_t ___VirtualScanCode_4;
	uint8_t ___Character_5;
	int32_t ___ControlKeyState_6;
	int32_t ___pad1_7;
	int32_t ___pad2_8;
};
#endif // INPUTRECORD_T2660212290_H
#ifndef COORD_T397375283_H
#define COORD_T397375283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Coord
struct  Coord_t397375283 
{
public:
	// System.Int16 System.Coord::X
	int16_t ___X_0;
	// System.Int16 System.Coord::Y
	int16_t ___Y_1;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Coord_t397375283, ___X_0)); }
	inline int16_t get_X_0() const { return ___X_0; }
	inline int16_t* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(int16_t value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Coord_t397375283, ___Y_1)); }
	inline int16_t get_Y_1() const { return ___Y_1; }
	inline int16_t* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(int16_t value)
	{
		___Y_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COORD_T397375283_H
#ifndef SMALLRECT_T2930836963_H
#define SMALLRECT_T2930836963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SmallRect
struct  SmallRect_t2930836963 
{
public:
	// System.Int16 System.SmallRect::Left
	int16_t ___Left_0;
	// System.Int16 System.SmallRect::Top
	int16_t ___Top_1;
	// System.Int16 System.SmallRect::Right
	int16_t ___Right_2;
	// System.Int16 System.SmallRect::Bottom
	int16_t ___Bottom_3;

public:
	inline static int32_t get_offset_of_Left_0() { return static_cast<int32_t>(offsetof(SmallRect_t2930836963, ___Left_0)); }
	inline int16_t get_Left_0() const { return ___Left_0; }
	inline int16_t* get_address_of_Left_0() { return &___Left_0; }
	inline void set_Left_0(int16_t value)
	{
		___Left_0 = value;
	}

	inline static int32_t get_offset_of_Top_1() { return static_cast<int32_t>(offsetof(SmallRect_t2930836963, ___Top_1)); }
	inline int16_t get_Top_1() const { return ___Top_1; }
	inline int16_t* get_address_of_Top_1() { return &___Top_1; }
	inline void set_Top_1(int16_t value)
	{
		___Top_1 = value;
	}

	inline static int32_t get_offset_of_Right_2() { return static_cast<int32_t>(offsetof(SmallRect_t2930836963, ___Right_2)); }
	inline int16_t get_Right_2() const { return ___Right_2; }
	inline int16_t* get_address_of_Right_2() { return &___Right_2; }
	inline void set_Right_2(int16_t value)
	{
		___Right_2 = value;
	}

	inline static int32_t get_offset_of_Bottom_3() { return static_cast<int32_t>(offsetof(SmallRect_t2930836963, ___Bottom_3)); }
	inline int16_t get_Bottom_3() const { return ___Bottom_3; }
	inline int16_t* get_address_of_Bottom_3() { return &___Bottom_3; }
	inline void set_Bottom_3(int16_t value)
	{
		___Bottom_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SMALLRECT_T2930836963_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3528271667* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3528271667* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3528271667* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef UINT16_T2177724958_H
#define UINT16_T2177724958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2177724958 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t2177724958, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T2177724958_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef SBYTE_T1669577662_H
#define SBYTE_T1669577662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SByte
struct  SByte_t1669577662 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t1669577662, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTE_T1669577662_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t594665363_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_1;

public:
	inline static int32_t get_offset_of_NegativeZero_1() { return static_cast<int32_t>(offsetof(Double_t594665363_StaticFields, ___NegativeZero_1)); }
	inline double get_NegativeZero_1() const { return ___NegativeZero_1; }
	inline double* get_address_of_NegativeZero_1() { return &___NegativeZero_1; }
	inline void set_NegativeZero_1(double value)
	{
		___NegativeZero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef UNSAFECHARBUFFER_T2176740272_H
#define UNSAFECHARBUFFER_T2176740272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnSafeCharBuffer
struct  UnSafeCharBuffer_t2176740272 
{
public:
	// System.Char* System.UnSafeCharBuffer::m_buffer
	Il2CppChar* ___m_buffer_0;
	// System.Int32 System.UnSafeCharBuffer::m_totalSize
	int32_t ___m_totalSize_1;
	// System.Int32 System.UnSafeCharBuffer::m_length
	int32_t ___m_length_2;

public:
	inline static int32_t get_offset_of_m_buffer_0() { return static_cast<int32_t>(offsetof(UnSafeCharBuffer_t2176740272, ___m_buffer_0)); }
	inline Il2CppChar* get_m_buffer_0() const { return ___m_buffer_0; }
	inline Il2CppChar** get_address_of_m_buffer_0() { return &___m_buffer_0; }
	inline void set_m_buffer_0(Il2CppChar* value)
	{
		___m_buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_totalSize_1() { return static_cast<int32_t>(offsetof(UnSafeCharBuffer_t2176740272, ___m_totalSize_1)); }
	inline int32_t get_m_totalSize_1() const { return ___m_totalSize_1; }
	inline int32_t* get_address_of_m_totalSize_1() { return &___m_totalSize_1; }
	inline void set_m_totalSize_1(int32_t value)
	{
		___m_totalSize_1 = value;
	}

	inline static int32_t get_offset_of_m_length_2() { return static_cast<int32_t>(offsetof(UnSafeCharBuffer_t2176740272, ___m_length_2)); }
	inline int32_t get_m_length_2() const { return ___m_length_2; }
	inline int32_t* get_address_of_m_length_2() { return &___m_length_2; }
	inline void set_m_length_2(int32_t value)
	{
		___m_length_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.UnSafeCharBuffer
struct UnSafeCharBuffer_t2176740272_marshaled_pinvoke
{
	Il2CppChar* ___m_buffer_0;
	int32_t ___m_totalSize_1;
	int32_t ___m_length_2;
};
// Native definition for COM marshalling of System.UnSafeCharBuffer
struct UnSafeCharBuffer_t2176740272_marshaled_com
{
	Il2CppChar* ___m_buffer_0;
	int32_t ___m_totalSize_1;
	int32_t ___m_length_2;
};
#endif // UNSAFECHARBUFFER_T2176740272_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_4;

public:
	inline static int32_t get_offset_of_dateData_4() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___dateData_4)); }
	inline uint64_t get_dateData_4() const { return ___dateData_4; }
	inline uint64_t* get_address_of_dateData_4() { return &___dateData_4; }
	inline void set_dateData_4(uint64_t value)
	{
		___dateData_4 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t385246372* ___DaysToMonth365_0;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t385246372* ___DaysToMonth366_1;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_2;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_3;

public:
	inline static int32_t get_offset_of_DaysToMonth365_0() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth365_0)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth365_0() const { return ___DaysToMonth365_0; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth365_0() { return &___DaysToMonth365_0; }
	inline void set_DaysToMonth365_0(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth365_0 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_0), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_1() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth366_1)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth366_1() const { return ___DaysToMonth366_1; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth366_1() { return &___DaysToMonth366_1; }
	inline void set_DaysToMonth366_1(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth366_1 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_1), value);
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_2)); }
	inline DateTime_t3738529785  get_MinValue_2() const { return ___MinValue_2; }
	inline DateTime_t3738529785 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(DateTime_t3738529785  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of_MaxValue_3() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_3)); }
	inline DateTime_t3738529785  get_MaxValue_3() const { return ___MaxValue_3; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_3() { return &___MaxValue_3; }
	inline void set_MaxValue_3(DateTime_t3738529785  value)
	{
		___MaxValue_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef DECIMAL_T2948259380_H
#define DECIMAL_T2948259380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2948259380 
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
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2948259380_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t2770800703* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2948259380  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2948259380  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2948259380  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2948259380  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2948259380  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2948259380  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2948259380  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t2770800703* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t2770800703** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t2770800703* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((&___Powers10_6), value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___Zero_7)); }
	inline Decimal_t2948259380  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2948259380 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2948259380  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___One_8)); }
	inline Decimal_t2948259380  get_One_8() const { return ___One_8; }
	inline Decimal_t2948259380 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2948259380  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2948259380  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2948259380 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2948259380  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2948259380  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2948259380 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2948259380  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinValue_11)); }
	inline Decimal_t2948259380  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2948259380 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2948259380  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2948259380  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2948259380 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2948259380  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2948259380  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2948259380 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2948259380  value)
	{
		___NearPositiveZero_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2948259380_H
#ifndef INT16_T2552820387_H
#define INT16_T2552820387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2552820387 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t2552820387, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T2552820387_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef UNHANDLEDEXCEPTIONEVENTARGS_T2886101344_H
#define UNHANDLEDEXCEPTIONEVENTARGS_T2886101344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventArgs
struct  UnhandledExceptionEventArgs_t2886101344  : public EventArgs_t3591816995
{
public:
	// System.Object System.UnhandledExceptionEventArgs::_Exception
	RuntimeObject * ____Exception_1;
	// System.Boolean System.UnhandledExceptionEventArgs::_IsTerminating
	bool ____IsTerminating_2;

public:
	inline static int32_t get_offset_of__Exception_1() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t2886101344, ____Exception_1)); }
	inline RuntimeObject * get__Exception_1() const { return ____Exception_1; }
	inline RuntimeObject ** get_address_of__Exception_1() { return &____Exception_1; }
	inline void set__Exception_1(RuntimeObject * value)
	{
		____Exception_1 = value;
		Il2CppCodeGenWriteBarrier((&____Exception_1), value);
	}

	inline static int32_t get_offset_of__IsTerminating_2() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t2886101344, ____IsTerminating_2)); }
	inline bool get__IsTerminating_2() const { return ____IsTerminating_2; }
	inline bool* get_address_of__IsTerminating_2() { return &____IsTerminating_2; }
	inline void set__IsTerminating_2(bool value)
	{
		____IsTerminating_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTARGS_T2886101344_H
#ifndef UINTPTR_T_H
#define UINTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTPTR_T_H
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
#ifndef ENUMERATOR_T3435715657_H
#define ENUMERATOR_T3435715657_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.ModifierSpec>
struct  Enumerator_t3435715657 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t1546471780 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t3435715657, ___list_0)); }
	inline List_1_t1546471780 * get_list_0() const { return ___list_0; }
	inline List_1_t1546471780 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t1546471780 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t3435715657, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t3435715657, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3435715657, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3435715657_H
#ifndef NOESCAPE_T3415473081_H
#define NOESCAPE_T3415473081_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeIdentifiers/NoEscape
struct  NoEscape_t3415473081  : public ATypeName_t2426384130
{
public:
	// System.String System.TypeIdentifiers/NoEscape::simpleName
	String_t* ___simpleName_0;

public:
	inline static int32_t get_offset_of_simpleName_0() { return static_cast<int32_t>(offsetof(NoEscape_t3415473081, ___simpleName_0)); }
	inline String_t* get_simpleName_0() const { return ___simpleName_0; }
	inline String_t** get_address_of_simpleName_0() { return &___simpleName_0; }
	inline void set_simpleName_0(String_t* value)
	{
		___simpleName_0 = value;
		Il2CppCodeGenWriteBarrier((&___simpleName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOESCAPE_T3415473081_H
#ifndef FIELDINFO_T_H
#define FIELDINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDINFO_T_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef DISPLAY_T2029414921_H
#define DISPLAY_T2029414921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeIdentifiers/Display
struct  Display_t2029414921  : public ATypeName_t2426384130
{
public:
	// System.String System.TypeIdentifiers/Display::displayName
	String_t* ___displayName_0;
	// System.String System.TypeIdentifiers/Display::internal_name
	String_t* ___internal_name_1;

public:
	inline static int32_t get_offset_of_displayName_0() { return static_cast<int32_t>(offsetof(Display_t2029414921, ___displayName_0)); }
	inline String_t* get_displayName_0() const { return ___displayName_0; }
	inline String_t** get_address_of_displayName_0() { return &___displayName_0; }
	inline void set_displayName_0(String_t* value)
	{
		___displayName_0 = value;
		Il2CppCodeGenWriteBarrier((&___displayName_0), value);
	}

	inline static int32_t get_offset_of_internal_name_1() { return static_cast<int32_t>(offsetof(Display_t2029414921, ___internal_name_1)); }
	inline String_t* get_internal_name_1() const { return ___internal_name_1; }
	inline String_t** get_address_of_internal_name_1() { return &___internal_name_1; }
	inline void set_internal_name_1(String_t* value)
	{
		___internal_name_1 = value;
		Il2CppCodeGenWriteBarrier((&___internal_name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAY_T2029414921_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t257213610 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___list_0)); }
	inline List_1_t257213610 * get_list_0() const { return ___list_0; }
	inline List_1_t257213610 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t257213610 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t1185182177__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef ENUMERATOR_T2065703332_H
#define ENUMERATOR_T2065703332_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.TypeIdentifier>
struct  Enumerator_t2065703332 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t176459455 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t2065703332, ___list_0)); }
	inline List_1_t176459455 * get_list_0() const { return ___list_0; }
	inline List_1_t176459455 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t176459455 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t2065703332, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t2065703332, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2065703332, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2065703332_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_t4116647657* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_t4116647657* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_t4116647657* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((&___categoryForLatin1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef HANDLES_T3280152003_H
#define HANDLES_T3280152003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Handles
struct  Handles_t3280152003 
{
public:
	// System.Int32 System.Handles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handles_t3280152003, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDLES_T3280152003_H
#ifndef WINDOWSCONSOLEDRIVER_T3991887195_H
#define WINDOWSCONSOLEDRIVER_T3991887195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WindowsConsoleDriver
struct  WindowsConsoleDriver_t3991887195  : public RuntimeObject
{
public:
	// System.IntPtr System.WindowsConsoleDriver::inputHandle
	intptr_t ___inputHandle_0;
	// System.IntPtr System.WindowsConsoleDriver::outputHandle
	intptr_t ___outputHandle_1;
	// System.Int16 System.WindowsConsoleDriver::defaultAttribute
	int16_t ___defaultAttribute_2;

public:
	inline static int32_t get_offset_of_inputHandle_0() { return static_cast<int32_t>(offsetof(WindowsConsoleDriver_t3991887195, ___inputHandle_0)); }
	inline intptr_t get_inputHandle_0() const { return ___inputHandle_0; }
	inline intptr_t* get_address_of_inputHandle_0() { return &___inputHandle_0; }
	inline void set_inputHandle_0(intptr_t value)
	{
		___inputHandle_0 = value;
	}

	inline static int32_t get_offset_of_outputHandle_1() { return static_cast<int32_t>(offsetof(WindowsConsoleDriver_t3991887195, ___outputHandle_1)); }
	inline intptr_t get_outputHandle_1() const { return ___outputHandle_1; }
	inline intptr_t* get_address_of_outputHandle_1() { return &___outputHandle_1; }
	inline void set_outputHandle_1(intptr_t value)
	{
		___outputHandle_1 = value;
	}

	inline static int32_t get_offset_of_defaultAttribute_2() { return static_cast<int32_t>(offsetof(WindowsConsoleDriver_t3991887195, ___defaultAttribute_2)); }
	inline int16_t get_defaultAttribute_2() const { return ___defaultAttribute_2; }
	inline int16_t* get_address_of_defaultAttribute_2() { return &___defaultAttribute_2; }
	inline void set_defaultAttribute_2(int16_t value)
	{
		___defaultAttribute_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSCONSOLEDRIVER_T3991887195_H
#ifndef GCHANDLETYPE_T3432586689_H
#define GCHANDLETYPE_T3432586689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_t3432586689 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GCHandleType_t3432586689, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLETYPE_T3432586689_H
#ifndef RUNTIMEFIELDINFO_T4270975280_H
#define RUNTIMEFIELDINFO_T4270975280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.RuntimeFieldInfo
struct  RuntimeFieldInfo_t4270975280  : public FieldInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDINFO_T4270975280_H
#ifndef INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#define INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_t1578797820  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#ifndef CONSOLEMODIFIERS_T1471011467_H
#define CONSOLEMODIFIERS_T1471011467_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleModifiers
struct  ConsoleModifiers_t1471011467 
{
public:
	// System.Int32 System.ConsoleModifiers::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConsoleModifiers_t1471011467, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSOLEMODIFIERS_T1471011467_H
#ifndef WEAKREFERENCE_T1334886716_H
#define WEAKREFERENCE_T1334886716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WeakReference
struct  WeakReference_t1334886716  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t3351438187  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_t1334886716, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_t1334886716, ___gcHandle_1)); }
	inline GCHandle_t3351438187  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t3351438187 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t3351438187  value)
	{
		___gcHandle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKREFERENCE_T1334886716_H
#ifndef FORMATEXCEPTION_T154580423_H
#define FORMATEXCEPTION_T154580423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FormatException
struct  FormatException_t154580423  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATEXCEPTION_T154580423_H
#ifndef PARSEFAILUREKIND_T727462984_H
#define PARSEFAILUREKIND_T727462984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Version/ParseFailureKind
struct  ParseFailureKind_t727462984 
{
public:
	// System.Int32 System.Version/ParseFailureKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParseFailureKind_t727462984, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSEFAILUREKIND_T727462984_H
#ifndef PROCESSORARCHITECTURE_T305929193_H
#define PROCESSORARCHITECTURE_T305929193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ProcessorArchitecture
struct  ProcessorArchitecture_t305929193 
{
public:
	// System.Int32 System.Reflection.ProcessorArchitecture::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProcessorArchitecture_t305929193, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROCESSORARCHITECTURE_T305929193_H
#ifndef ASSEMBLYVERSIONCOMPATIBILITY_T766556580_H
#define ASSEMBLYVERSIONCOMPATIBILITY_T766556580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyVersionCompatibility
struct  AssemblyVersionCompatibility_t766556580 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyVersionCompatibility::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyVersionCompatibility_t766556580, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYVERSIONCOMPATIBILITY_T766556580_H
#ifndef ASSEMBLYHASHALGORITHM_T1216504064_H
#define ASSEMBLYHASHALGORITHM_T1216504064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyHashAlgorithm
struct  AssemblyHashAlgorithm_t1216504064 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyHashAlgorithm::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyHashAlgorithm_t1216504064, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYHASHALGORITHM_T1216504064_H
#ifndef ASSEMBLYCONTENTTYPE_T1652800354_H
#define ASSEMBLYCONTENTTYPE_T1652800354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyContentType
struct  AssemblyContentType_t1652800354 
{
public:
	// System.Int32 System.Reflection.AssemblyContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyContentType_t1652800354, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYCONTENTTYPE_T1652800354_H
#ifndef TYPECODE_T2987224087_H
#define TYPECODE_T2987224087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeCode
struct  TypeCode_t2987224087 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeCode_t2987224087, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECODE_T2987224087_H
#ifndef ARITHMETICEXCEPTION_T4283546778_H
#define ARITHMETICEXCEPTION_T4283546778_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArithmeticException
struct  ArithmeticException_t4283546778  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARITHMETICEXCEPTION_T4283546778_H
#ifndef IOEXCEPTION_T4088381929_H
#define IOEXCEPTION_T4088381929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.IOException
struct  IOException_t4088381929  : public SystemException_t176217640
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_16;

public:
	inline static int32_t get_offset_of__maybeFullPath_16() { return static_cast<int32_t>(offsetof(IOException_t4088381929, ____maybeFullPath_16)); }
	inline String_t* get__maybeFullPath_16() const { return ____maybeFullPath_16; }
	inline String_t** get_address_of__maybeFullPath_16() { return &____maybeFullPath_16; }
	inline void set__maybeFullPath_16(String_t* value)
	{
		____maybeFullPath_16 = value;
		Il2CppCodeGenWriteBarrier((&____maybeFullPath_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IOEXCEPTION_T4088381929_H
#ifndef ASSEMBLYNAMEFLAGS_T3675421470_H
#define ASSEMBLYNAMEFLAGS_T3675421470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyNameFlags
struct  AssemblyNameFlags_t3675421470 
{
public:
	// System.Int32 System.Reflection.AssemblyNameFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyNameFlags_t3675421470, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYNAMEFLAGS_T3675421470_H
#ifndef CONSOLEKEY_T4097401472_H
#define CONSOLEKEY_T4097401472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleKey
struct  ConsoleKey_t4097401472 
{
public:
	// System.Int32 System.ConsoleKey::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConsoleKey_t4097401472, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSOLEKEY_T4097401472_H
#ifndef RUNTIMEFIELDHANDLE_T1871169219_H
#define RUNTIMEFIELDHANDLE_T1871169219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t1871169219 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t1871169219, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T1871169219_H
#ifndef CONSOLESCREENBUFFERINFO_T3095351730_H
#define CONSOLESCREENBUFFERINFO_T3095351730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleScreenBufferInfo
struct  ConsoleScreenBufferInfo_t3095351730 
{
public:
	// System.Coord System.ConsoleScreenBufferInfo::Size
	Coord_t397375283  ___Size_0;
	// System.Coord System.ConsoleScreenBufferInfo::CursorPosition
	Coord_t397375283  ___CursorPosition_1;
	// System.Int16 System.ConsoleScreenBufferInfo::Attribute
	int16_t ___Attribute_2;
	// System.SmallRect System.ConsoleScreenBufferInfo::Window
	SmallRect_t2930836963  ___Window_3;
	// System.Coord System.ConsoleScreenBufferInfo::MaxWindowSize
	Coord_t397375283  ___MaxWindowSize_4;

public:
	inline static int32_t get_offset_of_Size_0() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t3095351730, ___Size_0)); }
	inline Coord_t397375283  get_Size_0() const { return ___Size_0; }
	inline Coord_t397375283 * get_address_of_Size_0() { return &___Size_0; }
	inline void set_Size_0(Coord_t397375283  value)
	{
		___Size_0 = value;
	}

	inline static int32_t get_offset_of_CursorPosition_1() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t3095351730, ___CursorPosition_1)); }
	inline Coord_t397375283  get_CursorPosition_1() const { return ___CursorPosition_1; }
	inline Coord_t397375283 * get_address_of_CursorPosition_1() { return &___CursorPosition_1; }
	inline void set_CursorPosition_1(Coord_t397375283  value)
	{
		___CursorPosition_1 = value;
	}

	inline static int32_t get_offset_of_Attribute_2() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t3095351730, ___Attribute_2)); }
	inline int16_t get_Attribute_2() const { return ___Attribute_2; }
	inline int16_t* get_address_of_Attribute_2() { return &___Attribute_2; }
	inline void set_Attribute_2(int16_t value)
	{
		___Attribute_2 = value;
	}

	inline static int32_t get_offset_of_Window_3() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t3095351730, ___Window_3)); }
	inline SmallRect_t2930836963  get_Window_3() const { return ___Window_3; }
	inline SmallRect_t2930836963 * get_address_of_Window_3() { return &___Window_3; }
	inline void set_Window_3(SmallRect_t2930836963  value)
	{
		___Window_3 = value;
	}

	inline static int32_t get_offset_of_MaxWindowSize_4() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t3095351730, ___MaxWindowSize_4)); }
	inline Coord_t397375283  get_MaxWindowSize_4() const { return ___MaxWindowSize_4; }
	inline Coord_t397375283 * get_address_of_MaxWindowSize_4() { return &___MaxWindowSize_4; }
	inline void set_MaxWindowSize_4(Coord_t397375283  value)
	{
		___MaxWindowSize_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSOLESCREENBUFFERINFO_T3095351730_H
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
#ifndef STREAMINGCONTEXTSTATES_T3580100459_H
#define STREAMINGCONTEXTSTATES_T3580100459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t3580100459 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_t3580100459, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMINGCONTEXTSTATES_T3580100459_H
#ifndef MEMBERACCESSEXCEPTION_T1734467078_H
#define MEMBERACCESSEXCEPTION_T1734467078_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MemberAccessException
struct  MemberAccessException_t1734467078  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERACCESSEXCEPTION_T1734467078_H
#ifndef CFRANGE_T1233619878_H
#define CFRANGE_T1233619878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XamMac.CoreFoundation.CFHelpers/CFRange
struct  CFRange_t1233619878 
{
public:
	// System.IntPtr XamMac.CoreFoundation.CFHelpers/CFRange::loc
	intptr_t ___loc_0;
	// System.IntPtr XamMac.CoreFoundation.CFHelpers/CFRange::len
	intptr_t ___len_1;

public:
	inline static int32_t get_offset_of_loc_0() { return static_cast<int32_t>(offsetof(CFRange_t1233619878, ___loc_0)); }
	inline intptr_t get_loc_0() const { return ___loc_0; }
	inline intptr_t* get_address_of_loc_0() { return &___loc_0; }
	inline void set_loc_0(intptr_t value)
	{
		___loc_0 = value;
	}

	inline static int32_t get_offset_of_len_1() { return static_cast<int32_t>(offsetof(CFRange_t1233619878, ___len_1)); }
	inline intptr_t get_len_1() const { return ___len_1; }
	inline intptr_t* get_address_of_len_1() { return &___len_1; }
	inline void set_len_1(intptr_t value)
	{
		___len_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CFRANGE_T1233619878_H
#ifndef NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#define NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotImplementedException
struct  NotImplementedException_t3489357830  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifndef UNAUTHORIZEDACCESSEXCEPTION_T490705335_H
#define UNAUTHORIZEDACCESSEXCEPTION_T490705335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnauthorizedAccessException
struct  UnauthorizedAccessException_t490705335  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNAUTHORIZEDACCESSEXCEPTION_T490705335_H
#ifndef NUMBERSTYLES_T617258130_H
#define NUMBERSTYLES_T617258130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberStyles
struct  NumberStyles_t617258130 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_t617258130, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBERSTYLES_T617258130_H
#ifndef DISPLAYNAMEFORMAT_T2724649181_H
#define DISPLAYNAMEFORMAT_T2724649181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeSpec/DisplayNameFormat
struct  DisplayNameFormat_t2724649181 
{
public:
	// System.Int32 System.TypeSpec/DisplayNameFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisplayNameFormat_t2724649181, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAYNAMEFORMAT_T2724649181_H
#ifndef TYPENAMEKIND_T4058497967_H
#define TYPENAMEKIND_T4058497967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeNameKind
struct  TypeNameKind_t4058497967 
{
public:
	// System.Int32 System.TypeNameKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeNameKind_t4058497967, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPENAMEKIND_T4058497967_H
#ifndef TYPENAMEFORMATFLAGS_T1563831851_H
#define TYPENAMEFORMATFLAGS_T1563831851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeNameFormatFlags
struct  TypeNameFormatFlags_t1563831851 
{
public:
	// System.Int32 System.TypeNameFormatFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeNameFormatFlags_t1563831851, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPENAMEFORMATFLAGS_T1563831851_H
#ifndef STACKCRAWLMARK_T3282756964_H
#define STACKCRAWLMARK_T3282756964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.StackCrawlMark
struct  StackCrawlMark_t3282756964 
{
public:
	// System.Int32 System.Threading.StackCrawlMark::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StackCrawlMark_t3282756964, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKCRAWLMARK_T3282756964_H
#ifndef TYPELOADEXCEPTION_T3707937253_H
#define TYPELOADEXCEPTION_T3707937253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeLoadException
struct  TypeLoadException_t3707937253  : public SystemException_t176217640
{
public:
	// System.String System.TypeLoadException::ClassName
	String_t* ___ClassName_16;
	// System.String System.TypeLoadException::AssemblyName
	String_t* ___AssemblyName_17;
	// System.String System.TypeLoadException::MessageArg
	String_t* ___MessageArg_18;
	// System.Int32 System.TypeLoadException::ResourceId
	int32_t ___ResourceId_19;

public:
	inline static int32_t get_offset_of_ClassName_16() { return static_cast<int32_t>(offsetof(TypeLoadException_t3707937253, ___ClassName_16)); }
	inline String_t* get_ClassName_16() const { return ___ClassName_16; }
	inline String_t** get_address_of_ClassName_16() { return &___ClassName_16; }
	inline void set_ClassName_16(String_t* value)
	{
		___ClassName_16 = value;
		Il2CppCodeGenWriteBarrier((&___ClassName_16), value);
	}

	inline static int32_t get_offset_of_AssemblyName_17() { return static_cast<int32_t>(offsetof(TypeLoadException_t3707937253, ___AssemblyName_17)); }
	inline String_t* get_AssemblyName_17() const { return ___AssemblyName_17; }
	inline String_t** get_address_of_AssemblyName_17() { return &___AssemblyName_17; }
	inline void set_AssemblyName_17(String_t* value)
	{
		___AssemblyName_17 = value;
		Il2CppCodeGenWriteBarrier((&___AssemblyName_17), value);
	}

	inline static int32_t get_offset_of_MessageArg_18() { return static_cast<int32_t>(offsetof(TypeLoadException_t3707937253, ___MessageArg_18)); }
	inline String_t* get_MessageArg_18() const { return ___MessageArg_18; }
	inline String_t** get_address_of_MessageArg_18() { return &___MessageArg_18; }
	inline void set_MessageArg_18(String_t* value)
	{
		___MessageArg_18 = value;
		Il2CppCodeGenWriteBarrier((&___MessageArg_18), value);
	}

	inline static int32_t get_offset_of_ResourceId_19() { return static_cast<int32_t>(offsetof(TypeLoadException_t3707937253, ___ResourceId_19)); }
	inline int32_t get_ResourceId_19() const { return ___ResourceId_19; }
	inline int32_t* get_address_of_ResourceId_19() { return &___ResourceId_19; }
	inline void set_ResourceId_19(int32_t value)
	{
		___ResourceId_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELOADEXCEPTION_T3707937253_H
#ifndef INVALIDCASTEXCEPTION_T3927145244_H
#define INVALIDCASTEXCEPTION_T3927145244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidCastException
struct  InvalidCastException_t3927145244  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDCASTEXCEPTION_T3927145244_H
#ifndef TYPEINITIALIZATIONEXCEPTION_T2973684290_H
#define TYPEINITIALIZATIONEXCEPTION_T2973684290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeInitializationException
struct  TypeInitializationException_t2973684290  : public SystemException_t176217640
{
public:
	// System.String System.TypeInitializationException::_typeName
	String_t* ____typeName_16;

public:
	inline static int32_t get_offset_of__typeName_16() { return static_cast<int32_t>(offsetof(TypeInitializationException_t2973684290, ____typeName_16)); }
	inline String_t* get__typeName_16() const { return ____typeName_16; }
	inline String_t** get_address_of__typeName_16() { return &____typeName_16; }
	inline void set__typeName_16(String_t* value)
	{
		____typeName_16 = value;
		Il2CppCodeGenWriteBarrier((&____typeName_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINITIALIZATIONEXCEPTION_T2973684290_H
#ifndef ASSEMBLY_T_H
#define ASSEMBLY_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly
struct  Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_t2120639521 * ___resolve_event_holder_1;
	// System.Security.Policy.Evidence System.Reflection.Assembly::_evidence
	Evidence_t2008144148 * ____evidence_2;
	// System.Security.PermissionSet System.Reflection.Assembly::_minimum
	PermissionSet_t223948603 * ____minimum_3;
	// System.Security.PermissionSet System.Reflection.Assembly::_optional
	PermissionSet_t223948603 * ____optional_4;
	// System.Security.PermissionSet System.Reflection.Assembly::_refuse
	PermissionSet_t223948603 * ____refuse_5;
	// System.Security.PermissionSet System.Reflection.Assembly::_granted
	PermissionSet_t223948603 * ____granted_6;
	// System.Security.PermissionSet System.Reflection.Assembly::_denied
	PermissionSet_t223948603 * ____denied_7;
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
	inline ResolveEventHolder_t2120639521 * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_t2120639521 ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_t2120639521 * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((&___resolve_event_holder_1), value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline Evidence_t2008144148 * get__evidence_2() const { return ____evidence_2; }
	inline Evidence_t2008144148 ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(Evidence_t2008144148 * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_2), value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline PermissionSet_t223948603 * get__minimum_3() const { return ____minimum_3; }
	inline PermissionSet_t223948603 ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(PermissionSet_t223948603 * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((&____minimum_3), value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline PermissionSet_t223948603 * get__optional_4() const { return ____optional_4; }
	inline PermissionSet_t223948603 ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(PermissionSet_t223948603 * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((&____optional_4), value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline PermissionSet_t223948603 * get__refuse_5() const { return ____refuse_5; }
	inline PermissionSet_t223948603 ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(PermissionSet_t223948603 * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((&____refuse_5), value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline PermissionSet_t223948603 * get__granted_6() const { return ____granted_6; }
	inline PermissionSet_t223948603 ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(PermissionSet_t223948603 * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((&____granted_6), value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline PermissionSet_t223948603 * get__denied_7() const { return ____denied_7; }
	inline PermissionSet_t223948603 ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(PermissionSet_t223948603 * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((&____denied_7), value);
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
		Il2CppCodeGenWriteBarrier((&___assemblyName_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_t2120639521 * ___resolve_event_holder_1;
	Evidence_t2008144148 * ____evidence_2;
	PermissionSet_t223948603 * ____minimum_3;
	PermissionSet_t223948603 * ____optional_4;
	PermissionSet_t223948603 * ____refuse_5;
	PermissionSet_t223948603 * ____granted_6;
	PermissionSet_t223948603 * ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_t2120639521 * ___resolve_event_holder_1;
	Evidence_t2008144148 * ____evidence_2;
	PermissionSet_t223948603 * ____minimum_3;
	PermissionSet_t223948603 * ____optional_4;
	PermissionSet_t223948603 * ____refuse_5;
	PermissionSet_t223948603 * ____granted_6;
	PermissionSet_t223948603 * ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
};
#endif // ASSEMBLY_T_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
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
	DelegateData_t1677132599 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_9)); }
	inline DelegateData_t1677132599 * get_data_9() const { return ___data_9; }
	inline DelegateData_t1677132599 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1677132599 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_pinvoke
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
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_com
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
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T1188392813_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_16;

public:
	inline static int32_t get_offset_of_m_paramName_16() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___m_paramName_16)); }
	inline String_t* get_m_paramName_16() const { return ___m_paramName_16; }
	inline String_t** get_address_of_m_paramName_16() { return &___m_paramName_16; }
	inline void set_m_paramName_16(String_t* value)
	{
		___m_paramName_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_paramName_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef SERIALIZATIONEXCEPTION_T3941511869_H
#define SERIALIZATIONEXCEPTION_T3941511869_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationException
struct  SerializationException_t3941511869  : public SystemException_t176217640
{
public:

public:
};

struct SerializationException_t3941511869_StaticFields
{
public:
	// System.String System.Runtime.Serialization.SerializationException::_nullMessage
	String_t* ____nullMessage_16;

public:
	inline static int32_t get_offset_of__nullMessage_16() { return static_cast<int32_t>(offsetof(SerializationException_t3941511869_StaticFields, ____nullMessage_16)); }
	inline String_t* get__nullMessage_16() const { return ____nullMessage_16; }
	inline String_t** get_address_of__nullMessage_16() { return &____nullMessage_16; }
	inline void set__nullMessage_16(String_t* value)
	{
		____nullMessage_16 = value;
		Il2CppCodeGenWriteBarrier((&____nullMessage_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONEXCEPTION_T3941511869_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef ASSEMBLYNAME_T270931938_H
#define ASSEMBLYNAME_T270931938_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyName
struct  AssemblyName_t270931938  : public RuntimeObject
{
public:
	// System.String System.Reflection.AssemblyName::name
	String_t* ___name_0;
	// System.String System.Reflection.AssemblyName::codebase
	String_t* ___codebase_1;
	// System.Int32 System.Reflection.AssemblyName::major
	int32_t ___major_2;
	// System.Int32 System.Reflection.AssemblyName::minor
	int32_t ___minor_3;
	// System.Int32 System.Reflection.AssemblyName::build
	int32_t ___build_4;
	// System.Int32 System.Reflection.AssemblyName::revision
	int32_t ___revision_5;
	// System.Globalization.CultureInfo System.Reflection.AssemblyName::cultureinfo
	CultureInfo_t4157843068 * ___cultureinfo_6;
	// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::flags
	int32_t ___flags_7;
	// System.Configuration.Assemblies.AssemblyHashAlgorithm System.Reflection.AssemblyName::hashalg
	int32_t ___hashalg_8;
	// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::keypair
	StrongNameKeyPair_t3411219591 * ___keypair_9;
	// System.Byte[] System.Reflection.AssemblyName::publicKey
	ByteU5BU5D_t4116647657* ___publicKey_10;
	// System.Byte[] System.Reflection.AssemblyName::keyToken
	ByteU5BU5D_t4116647657* ___keyToken_11;
	// System.Configuration.Assemblies.AssemblyVersionCompatibility System.Reflection.AssemblyName::versioncompat
	int32_t ___versioncompat_12;
	// System.Version System.Reflection.AssemblyName::version
	Version_t3456873960 * ___version_13;
	// System.Reflection.ProcessorArchitecture System.Reflection.AssemblyName::processor_architecture
	int32_t ___processor_architecture_14;
	// System.Reflection.AssemblyContentType System.Reflection.AssemblyName::contentType
	int32_t ___contentType_15;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_codebase_1() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___codebase_1)); }
	inline String_t* get_codebase_1() const { return ___codebase_1; }
	inline String_t** get_address_of_codebase_1() { return &___codebase_1; }
	inline void set_codebase_1(String_t* value)
	{
		___codebase_1 = value;
		Il2CppCodeGenWriteBarrier((&___codebase_1), value);
	}

	inline static int32_t get_offset_of_major_2() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___major_2)); }
	inline int32_t get_major_2() const { return ___major_2; }
	inline int32_t* get_address_of_major_2() { return &___major_2; }
	inline void set_major_2(int32_t value)
	{
		___major_2 = value;
	}

	inline static int32_t get_offset_of_minor_3() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___minor_3)); }
	inline int32_t get_minor_3() const { return ___minor_3; }
	inline int32_t* get_address_of_minor_3() { return &___minor_3; }
	inline void set_minor_3(int32_t value)
	{
		___minor_3 = value;
	}

	inline static int32_t get_offset_of_build_4() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___build_4)); }
	inline int32_t get_build_4() const { return ___build_4; }
	inline int32_t* get_address_of_build_4() { return &___build_4; }
	inline void set_build_4(int32_t value)
	{
		___build_4 = value;
	}

	inline static int32_t get_offset_of_revision_5() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___revision_5)); }
	inline int32_t get_revision_5() const { return ___revision_5; }
	inline int32_t* get_address_of_revision_5() { return &___revision_5; }
	inline void set_revision_5(int32_t value)
	{
		___revision_5 = value;
	}

	inline static int32_t get_offset_of_cultureinfo_6() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___cultureinfo_6)); }
	inline CultureInfo_t4157843068 * get_cultureinfo_6() const { return ___cultureinfo_6; }
	inline CultureInfo_t4157843068 ** get_address_of_cultureinfo_6() { return &___cultureinfo_6; }
	inline void set_cultureinfo_6(CultureInfo_t4157843068 * value)
	{
		___cultureinfo_6 = value;
		Il2CppCodeGenWriteBarrier((&___cultureinfo_6), value);
	}

	inline static int32_t get_offset_of_flags_7() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___flags_7)); }
	inline int32_t get_flags_7() const { return ___flags_7; }
	inline int32_t* get_address_of_flags_7() { return &___flags_7; }
	inline void set_flags_7(int32_t value)
	{
		___flags_7 = value;
	}

	inline static int32_t get_offset_of_hashalg_8() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___hashalg_8)); }
	inline int32_t get_hashalg_8() const { return ___hashalg_8; }
	inline int32_t* get_address_of_hashalg_8() { return &___hashalg_8; }
	inline void set_hashalg_8(int32_t value)
	{
		___hashalg_8 = value;
	}

	inline static int32_t get_offset_of_keypair_9() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___keypair_9)); }
	inline StrongNameKeyPair_t3411219591 * get_keypair_9() const { return ___keypair_9; }
	inline StrongNameKeyPair_t3411219591 ** get_address_of_keypair_9() { return &___keypair_9; }
	inline void set_keypair_9(StrongNameKeyPair_t3411219591 * value)
	{
		___keypair_9 = value;
		Il2CppCodeGenWriteBarrier((&___keypair_9), value);
	}

	inline static int32_t get_offset_of_publicKey_10() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___publicKey_10)); }
	inline ByteU5BU5D_t4116647657* get_publicKey_10() const { return ___publicKey_10; }
	inline ByteU5BU5D_t4116647657** get_address_of_publicKey_10() { return &___publicKey_10; }
	inline void set_publicKey_10(ByteU5BU5D_t4116647657* value)
	{
		___publicKey_10 = value;
		Il2CppCodeGenWriteBarrier((&___publicKey_10), value);
	}

	inline static int32_t get_offset_of_keyToken_11() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___keyToken_11)); }
	inline ByteU5BU5D_t4116647657* get_keyToken_11() const { return ___keyToken_11; }
	inline ByteU5BU5D_t4116647657** get_address_of_keyToken_11() { return &___keyToken_11; }
	inline void set_keyToken_11(ByteU5BU5D_t4116647657* value)
	{
		___keyToken_11 = value;
		Il2CppCodeGenWriteBarrier((&___keyToken_11), value);
	}

	inline static int32_t get_offset_of_versioncompat_12() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___versioncompat_12)); }
	inline int32_t get_versioncompat_12() const { return ___versioncompat_12; }
	inline int32_t* get_address_of_versioncompat_12() { return &___versioncompat_12; }
	inline void set_versioncompat_12(int32_t value)
	{
		___versioncompat_12 = value;
	}

	inline static int32_t get_offset_of_version_13() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___version_13)); }
	inline Version_t3456873960 * get_version_13() const { return ___version_13; }
	inline Version_t3456873960 ** get_address_of_version_13() { return &___version_13; }
	inline void set_version_13(Version_t3456873960 * value)
	{
		___version_13 = value;
		Il2CppCodeGenWriteBarrier((&___version_13), value);
	}

	inline static int32_t get_offset_of_processor_architecture_14() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___processor_architecture_14)); }
	inline int32_t get_processor_architecture_14() const { return ___processor_architecture_14; }
	inline int32_t* get_address_of_processor_architecture_14() { return &___processor_architecture_14; }
	inline void set_processor_architecture_14(int32_t value)
	{
		___processor_architecture_14 = value;
	}

	inline static int32_t get_offset_of_contentType_15() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___contentType_15)); }
	inline int32_t get_contentType_15() const { return ___contentType_15; }
	inline int32_t* get_address_of_contentType_15() { return &___contentType_15; }
	inline void set_contentType_15(int32_t value)
	{
		___contentType_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.AssemblyName
struct AssemblyName_t270931938_marshaled_pinvoke
{
	char* ___name_0;
	char* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t4157843068_marshaled_pinvoke* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_t3411219591 * ___keypair_9;
	uint8_t* ___publicKey_10;
	uint8_t* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_t3456873960 * ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};
// Native definition for COM marshalling of System.Reflection.AssemblyName
struct AssemblyName_t270931938_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t4157843068_marshaled_com* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_t3411219591 * ___keypair_9;
	uint8_t* ___publicKey_10;
	uint8_t* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_t3456873960 * ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};
#endif // ASSEMBLYNAME_T270931938_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1703627840* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t1703627840* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1703627840** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1703627840* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t1188392813_marshaled_pinvoke
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t1188392813_marshaled_com
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef FILENOTFOUNDEXCEPTION_T225391025_H
#define FILENOTFOUNDEXCEPTION_T225391025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileNotFoundException
struct  FileNotFoundException_t225391025  : public IOException_t4088381929
{
public:
	// System.String System.IO.FileNotFoundException::_fileName
	String_t* ____fileName_17;
	// System.String System.IO.FileNotFoundException::_fusionLog
	String_t* ____fusionLog_18;

public:
	inline static int32_t get_offset_of__fileName_17() { return static_cast<int32_t>(offsetof(FileNotFoundException_t225391025, ____fileName_17)); }
	inline String_t* get__fileName_17() const { return ____fileName_17; }
	inline String_t** get_address_of__fileName_17() { return &____fileName_17; }
	inline void set__fileName_17(String_t* value)
	{
		____fileName_17 = value;
		Il2CppCodeGenWriteBarrier((&____fileName_17), value);
	}

	inline static int32_t get_offset_of__fusionLog_18() { return static_cast<int32_t>(offsetof(FileNotFoundException_t225391025, ____fusionLog_18)); }
	inline String_t* get__fusionLog_18() const { return ____fusionLog_18; }
	inline String_t** get_address_of__fusionLog_18() { return &____fusionLog_18; }
	inline void set__fusionLog_18(String_t* value)
	{
		____fusionLog_18 = value;
		Il2CppCodeGenWriteBarrier((&____fusionLog_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILENOTFOUNDEXCEPTION_T225391025_H
#ifndef NUMBERFORMATINFO_T435877138_H
#define NUMBERFORMATINFO_T435877138_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberFormatInfo
struct  NumberFormatInfo_t435877138  : public RuntimeObject
{
public:
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t385246372* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t385246372* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t385246372* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t1281789340* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;

public:
	inline static int32_t get_offset_of_numberGroupSizes_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberGroupSizes_1)); }
	inline Int32U5BU5D_t385246372* get_numberGroupSizes_1() const { return ___numberGroupSizes_1; }
	inline Int32U5BU5D_t385246372** get_address_of_numberGroupSizes_1() { return &___numberGroupSizes_1; }
	inline void set_numberGroupSizes_1(Int32U5BU5D_t385246372* value)
	{
		___numberGroupSizes_1 = value;
		Il2CppCodeGenWriteBarrier((&___numberGroupSizes_1), value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyGroupSizes_2)); }
	inline Int32U5BU5D_t385246372* get_currencyGroupSizes_2() const { return ___currencyGroupSizes_2; }
	inline Int32U5BU5D_t385246372** get_address_of_currencyGroupSizes_2() { return &___currencyGroupSizes_2; }
	inline void set_currencyGroupSizes_2(Int32U5BU5D_t385246372* value)
	{
		___currencyGroupSizes_2 = value;
		Il2CppCodeGenWriteBarrier((&___currencyGroupSizes_2), value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentGroupSizes_3)); }
	inline Int32U5BU5D_t385246372* get_percentGroupSizes_3() const { return ___percentGroupSizes_3; }
	inline Int32U5BU5D_t385246372** get_address_of_percentGroupSizes_3() { return &___percentGroupSizes_3; }
	inline void set_percentGroupSizes_3(Int32U5BU5D_t385246372* value)
	{
		___percentGroupSizes_3 = value;
		Il2CppCodeGenWriteBarrier((&___percentGroupSizes_3), value);
	}

	inline static int32_t get_offset_of_positiveSign_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___positiveSign_4)); }
	inline String_t* get_positiveSign_4() const { return ___positiveSign_4; }
	inline String_t** get_address_of_positiveSign_4() { return &___positiveSign_4; }
	inline void set_positiveSign_4(String_t* value)
	{
		___positiveSign_4 = value;
		Il2CppCodeGenWriteBarrier((&___positiveSign_4), value);
	}

	inline static int32_t get_offset_of_negativeSign_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___negativeSign_5)); }
	inline String_t* get_negativeSign_5() const { return ___negativeSign_5; }
	inline String_t** get_address_of_negativeSign_5() { return &___negativeSign_5; }
	inline void set_negativeSign_5(String_t* value)
	{
		___negativeSign_5 = value;
		Il2CppCodeGenWriteBarrier((&___negativeSign_5), value);
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberDecimalSeparator_6)); }
	inline String_t* get_numberDecimalSeparator_6() const { return ___numberDecimalSeparator_6; }
	inline String_t** get_address_of_numberDecimalSeparator_6() { return &___numberDecimalSeparator_6; }
	inline void set_numberDecimalSeparator_6(String_t* value)
	{
		___numberDecimalSeparator_6 = value;
		Il2CppCodeGenWriteBarrier((&___numberDecimalSeparator_6), value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberGroupSeparator_7)); }
	inline String_t* get_numberGroupSeparator_7() const { return ___numberGroupSeparator_7; }
	inline String_t** get_address_of_numberGroupSeparator_7() { return &___numberGroupSeparator_7; }
	inline void set_numberGroupSeparator_7(String_t* value)
	{
		___numberGroupSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((&___numberGroupSeparator_7), value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((&___currencyGroupSeparator_8), value);
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyDecimalSeparator_9)); }
	inline String_t* get_currencyDecimalSeparator_9() const { return ___currencyDecimalSeparator_9; }
	inline String_t** get_address_of_currencyDecimalSeparator_9() { return &___currencyDecimalSeparator_9; }
	inline void set_currencyDecimalSeparator_9(String_t* value)
	{
		___currencyDecimalSeparator_9 = value;
		Il2CppCodeGenWriteBarrier((&___currencyDecimalSeparator_9), value);
	}

	inline static int32_t get_offset_of_currencySymbol_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencySymbol_10)); }
	inline String_t* get_currencySymbol_10() const { return ___currencySymbol_10; }
	inline String_t** get_address_of_currencySymbol_10() { return &___currencySymbol_10; }
	inline void set_currencySymbol_10(String_t* value)
	{
		___currencySymbol_10 = value;
		Il2CppCodeGenWriteBarrier((&___currencySymbol_10), value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___ansiCurrencySymbol_11)); }
	inline String_t* get_ansiCurrencySymbol_11() const { return ___ansiCurrencySymbol_11; }
	inline String_t** get_address_of_ansiCurrencySymbol_11() { return &___ansiCurrencySymbol_11; }
	inline void set_ansiCurrencySymbol_11(String_t* value)
	{
		___ansiCurrencySymbol_11 = value;
		Il2CppCodeGenWriteBarrier((&___ansiCurrencySymbol_11), value);
	}

	inline static int32_t get_offset_of_nanSymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___nanSymbol_12)); }
	inline String_t* get_nanSymbol_12() const { return ___nanSymbol_12; }
	inline String_t** get_address_of_nanSymbol_12() { return &___nanSymbol_12; }
	inline void set_nanSymbol_12(String_t* value)
	{
		___nanSymbol_12 = value;
		Il2CppCodeGenWriteBarrier((&___nanSymbol_12), value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___positiveInfinitySymbol_13)); }
	inline String_t* get_positiveInfinitySymbol_13() const { return ___positiveInfinitySymbol_13; }
	inline String_t** get_address_of_positiveInfinitySymbol_13() { return &___positiveInfinitySymbol_13; }
	inline void set_positiveInfinitySymbol_13(String_t* value)
	{
		___positiveInfinitySymbol_13 = value;
		Il2CppCodeGenWriteBarrier((&___positiveInfinitySymbol_13), value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((&___negativeInfinitySymbol_14), value);
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentDecimalSeparator_15)); }
	inline String_t* get_percentDecimalSeparator_15() const { return ___percentDecimalSeparator_15; }
	inline String_t** get_address_of_percentDecimalSeparator_15() { return &___percentDecimalSeparator_15; }
	inline void set_percentDecimalSeparator_15(String_t* value)
	{
		___percentDecimalSeparator_15 = value;
		Il2CppCodeGenWriteBarrier((&___percentDecimalSeparator_15), value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentGroupSeparator_16)); }
	inline String_t* get_percentGroupSeparator_16() const { return ___percentGroupSeparator_16; }
	inline String_t** get_address_of_percentGroupSeparator_16() { return &___percentGroupSeparator_16; }
	inline void set_percentGroupSeparator_16(String_t* value)
	{
		___percentGroupSeparator_16 = value;
		Il2CppCodeGenWriteBarrier((&___percentGroupSeparator_16), value);
	}

	inline static int32_t get_offset_of_percentSymbol_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentSymbol_17)); }
	inline String_t* get_percentSymbol_17() const { return ___percentSymbol_17; }
	inline String_t** get_address_of_percentSymbol_17() { return &___percentSymbol_17; }
	inline void set_percentSymbol_17(String_t* value)
	{
		___percentSymbol_17 = value;
		Il2CppCodeGenWriteBarrier((&___percentSymbol_17), value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___perMilleSymbol_18)); }
	inline String_t* get_perMilleSymbol_18() const { return ___perMilleSymbol_18; }
	inline String_t** get_address_of_perMilleSymbol_18() { return &___perMilleSymbol_18; }
	inline void set_perMilleSymbol_18(String_t* value)
	{
		___perMilleSymbol_18 = value;
		Il2CppCodeGenWriteBarrier((&___perMilleSymbol_18), value);
	}

	inline static int32_t get_offset_of_nativeDigits_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___nativeDigits_19)); }
	inline StringU5BU5D_t1281789340* get_nativeDigits_19() const { return ___nativeDigits_19; }
	inline StringU5BU5D_t1281789340** get_address_of_nativeDigits_19() { return &___nativeDigits_19; }
	inline void set_nativeDigits_19(StringU5BU5D_t1281789340* value)
	{
		___nativeDigits_19 = value;
		Il2CppCodeGenWriteBarrier((&___nativeDigits_19), value);
	}

	inline static int32_t get_offset_of_m_dataItem_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___m_dataItem_20)); }
	inline int32_t get_m_dataItem_20() const { return ___m_dataItem_20; }
	inline int32_t* get_address_of_m_dataItem_20() { return &___m_dataItem_20; }
	inline void set_m_dataItem_20(int32_t value)
	{
		___m_dataItem_20 = value;
	}

	inline static int32_t get_offset_of_numberDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberDecimalDigits_21)); }
	inline int32_t get_numberDecimalDigits_21() const { return ___numberDecimalDigits_21; }
	inline int32_t* get_address_of_numberDecimalDigits_21() { return &___numberDecimalDigits_21; }
	inline void set_numberDecimalDigits_21(int32_t value)
	{
		___numberDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyDecimalDigits_22)); }
	inline int32_t get_currencyDecimalDigits_22() const { return ___currencyDecimalDigits_22; }
	inline int32_t* get_address_of_currencyDecimalDigits_22() { return &___currencyDecimalDigits_22; }
	inline void set_currencyDecimalDigits_22(int32_t value)
	{
		___currencyDecimalDigits_22 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyPositivePattern_23)); }
	inline int32_t get_currencyPositivePattern_23() const { return ___currencyPositivePattern_23; }
	inline int32_t* get_address_of_currencyPositivePattern_23() { return &___currencyPositivePattern_23; }
	inline void set_currencyPositivePattern_23(int32_t value)
	{
		___currencyPositivePattern_23 = value;
	}

	inline static int32_t get_offset_of_currencyNegativePattern_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyNegativePattern_24)); }
	inline int32_t get_currencyNegativePattern_24() const { return ___currencyNegativePattern_24; }
	inline int32_t* get_address_of_currencyNegativePattern_24() { return &___currencyNegativePattern_24; }
	inline void set_currencyNegativePattern_24(int32_t value)
	{
		___currencyNegativePattern_24 = value;
	}

	inline static int32_t get_offset_of_numberNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberNegativePattern_25)); }
	inline int32_t get_numberNegativePattern_25() const { return ___numberNegativePattern_25; }
	inline int32_t* get_address_of_numberNegativePattern_25() { return &___numberNegativePattern_25; }
	inline void set_numberNegativePattern_25(int32_t value)
	{
		___numberNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentNegativePattern_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentNegativePattern_27)); }
	inline int32_t get_percentNegativePattern_27() const { return ___percentNegativePattern_27; }
	inline int32_t* get_address_of_percentNegativePattern_27() { return &___percentNegativePattern_27; }
	inline void set_percentNegativePattern_27(int32_t value)
	{
		___percentNegativePattern_27 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentDecimalDigits_28)); }
	inline int32_t get_percentDecimalDigits_28() const { return ___percentDecimalDigits_28; }
	inline int32_t* get_address_of_percentDecimalDigits_28() { return &___percentDecimalDigits_28; }
	inline void set_percentDecimalDigits_28(int32_t value)
	{
		___percentDecimalDigits_28 = value;
	}

	inline static int32_t get_offset_of_digitSubstitution_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___digitSubstitution_29)); }
	inline int32_t get_digitSubstitution_29() const { return ___digitSubstitution_29; }
	inline int32_t* get_address_of_digitSubstitution_29() { return &___digitSubstitution_29; }
	inline void set_digitSubstitution_29(int32_t value)
	{
		___digitSubstitution_29 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___isReadOnly_30)); }
	inline bool get_isReadOnly_30() const { return ___isReadOnly_30; }
	inline bool* get_address_of_isReadOnly_30() { return &___isReadOnly_30; }
	inline void set_isReadOnly_30(bool value)
	{
		___isReadOnly_30 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___m_useUserOverride_31)); }
	inline bool get_m_useUserOverride_31() const { return ___m_useUserOverride_31; }
	inline bool* get_address_of_m_useUserOverride_31() { return &___m_useUserOverride_31; }
	inline void set_m_useUserOverride_31(bool value)
	{
		___m_useUserOverride_31 = value;
	}

	inline static int32_t get_offset_of_m_isInvariant_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___m_isInvariant_32)); }
	inline bool get_m_isInvariant_32() const { return ___m_isInvariant_32; }
	inline bool* get_address_of_m_isInvariant_32() { return &___m_isInvariant_32; }
	inline void set_m_isInvariant_32(bool value)
	{
		___m_isInvariant_32 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___validForParseAsNumber_33)); }
	inline bool get_validForParseAsNumber_33() const { return ___validForParseAsNumber_33; }
	inline bool* get_address_of_validForParseAsNumber_33() { return &___validForParseAsNumber_33; }
	inline void set_validForParseAsNumber_33(bool value)
	{
		___validForParseAsNumber_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___validForParseAsCurrency_34)); }
	inline bool get_validForParseAsCurrency_34() const { return ___validForParseAsCurrency_34; }
	inline bool* get_address_of_validForParseAsCurrency_34() { return &___validForParseAsCurrency_34; }
	inline void set_validForParseAsCurrency_34(bool value)
	{
		___validForParseAsCurrency_34 = value;
	}
};

struct NumberFormatInfo_t435877138_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t435877138 * ___invariantInfo_0;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138_StaticFields, ___invariantInfo_0)); }
	inline NumberFormatInfo_t435877138 * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline NumberFormatInfo_t435877138 ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(NumberFormatInfo_t435877138 * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariantInfo_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBERFORMATINFO_T435877138_H
#ifndef OVERFLOWEXCEPTION_T2020128637_H
#define OVERFLOWEXCEPTION_T2020128637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OverflowException
struct  OverflowException_t2020128637  : public ArithmeticException_t4283546778
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OVERFLOWEXCEPTION_T2020128637_H
#ifndef TYPEDREFERENCE_T1491108119_H
#define TYPEDREFERENCE_T1491108119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypedReference
struct  TypedReference_t1491108119 
{
public:
	// System.RuntimeTypeHandle System.TypedReference::type
	RuntimeTypeHandle_t3027515415  ___type_0;
	// System.IntPtr System.TypedReference::Value
	intptr_t ___Value_1;
	// System.IntPtr System.TypedReference::Type
	intptr_t ___Type_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(TypedReference_t1491108119, ___type_0)); }
	inline RuntimeTypeHandle_t3027515415  get_type_0() const { return ___type_0; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(RuntimeTypeHandle_t3027515415  value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(TypedReference_t1491108119, ___Value_1)); }
	inline intptr_t get_Value_1() const { return ___Value_1; }
	inline intptr_t* get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(intptr_t value)
	{
		___Value_1 = value;
	}

	inline static int32_t get_offset_of_Type_2() { return static_cast<int32_t>(offsetof(TypedReference_t1491108119, ___Type_2)); }
	inline intptr_t get_Type_2() const { return ___Type_2; }
	inline intptr_t* get_address_of_Type_2() { return &___Type_2; }
	inline void set_Type_2(intptr_t value)
	{
		___Type_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDREFERENCE_T1491108119_H
#ifndef MISSINGMEMBEREXCEPTION_T1385081665_H
#define MISSINGMEMBEREXCEPTION_T1385081665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MissingMemberException
struct  MissingMemberException_t1385081665  : public MemberAccessException_t1734467078
{
public:
	// System.String System.MissingMemberException::ClassName
	String_t* ___ClassName_16;
	// System.String System.MissingMemberException::MemberName
	String_t* ___MemberName_17;
	// System.Byte[] System.MissingMemberException::Signature
	ByteU5BU5D_t4116647657* ___Signature_18;

public:
	inline static int32_t get_offset_of_ClassName_16() { return static_cast<int32_t>(offsetof(MissingMemberException_t1385081665, ___ClassName_16)); }
	inline String_t* get_ClassName_16() const { return ___ClassName_16; }
	inline String_t** get_address_of_ClassName_16() { return &___ClassName_16; }
	inline void set_ClassName_16(String_t* value)
	{
		___ClassName_16 = value;
		Il2CppCodeGenWriteBarrier((&___ClassName_16), value);
	}

	inline static int32_t get_offset_of_MemberName_17() { return static_cast<int32_t>(offsetof(MissingMemberException_t1385081665, ___MemberName_17)); }
	inline String_t* get_MemberName_17() const { return ___MemberName_17; }
	inline String_t** get_address_of_MemberName_17() { return &___MemberName_17; }
	inline void set_MemberName_17(String_t* value)
	{
		___MemberName_17 = value;
		Il2CppCodeGenWriteBarrier((&___MemberName_17), value);
	}

	inline static int32_t get_offset_of_Signature_18() { return static_cast<int32_t>(offsetof(MissingMemberException_t1385081665, ___Signature_18)); }
	inline ByteU5BU5D_t4116647657* get_Signature_18() const { return ___Signature_18; }
	inline ByteU5BU5D_t4116647657** get_address_of_Signature_18() { return &___Signature_18; }
	inline void set_Signature_18(ByteU5BU5D_t4116647657* value)
	{
		___Signature_18 = value;
		Il2CppCodeGenWriteBarrier((&___Signature_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGMEMBEREXCEPTION_T1385081665_H
#ifndef CONSOLEKEYINFO_T1802691652_H
#define CONSOLEKEYINFO_T1802691652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleKeyInfo
struct  ConsoleKeyInfo_t1802691652 
{
public:
	// System.Char System.ConsoleKeyInfo::_keyChar
	Il2CppChar ____keyChar_0;
	// System.ConsoleKey System.ConsoleKeyInfo::_key
	int32_t ____key_1;
	// System.ConsoleModifiers System.ConsoleKeyInfo::_mods
	int32_t ____mods_2;

public:
	inline static int32_t get_offset_of__keyChar_0() { return static_cast<int32_t>(offsetof(ConsoleKeyInfo_t1802691652, ____keyChar_0)); }
	inline Il2CppChar get__keyChar_0() const { return ____keyChar_0; }
	inline Il2CppChar* get_address_of__keyChar_0() { return &____keyChar_0; }
	inline void set__keyChar_0(Il2CppChar value)
	{
		____keyChar_0 = value;
	}

	inline static int32_t get_offset_of__key_1() { return static_cast<int32_t>(offsetof(ConsoleKeyInfo_t1802691652, ____key_1)); }
	inline int32_t get__key_1() const { return ____key_1; }
	inline int32_t* get_address_of__key_1() { return &____key_1; }
	inline void set__key_1(int32_t value)
	{
		____key_1 = value;
	}

	inline static int32_t get_offset_of__mods_2() { return static_cast<int32_t>(offsetof(ConsoleKeyInfo_t1802691652, ____mods_2)); }
	inline int32_t get__mods_2() const { return ____mods_2; }
	inline int32_t* get_address_of__mods_2() { return &____mods_2; }
	inline void set__mods_2(int32_t value)
	{
		____mods_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ConsoleKeyInfo
struct ConsoleKeyInfo_t1802691652_marshaled_pinvoke
{
	uint8_t ____keyChar_0;
	int32_t ____key_1;
	int32_t ____mods_2;
};
// Native definition for COM marshalling of System.ConsoleKeyInfo
struct ConsoleKeyInfo_t1802691652_marshaled_com
{
	uint8_t ____keyChar_0;
	int32_t ____key_1;
	int32_t ____mods_2;
};
#endif // CONSOLEKEYINFO_T1802691652_H
#ifndef VERSIONRESULT_T4090266424_H
#define VERSIONRESULT_T4090266424_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Version/VersionResult
struct  VersionResult_t4090266424 
{
public:
	// System.Version System.Version/VersionResult::m_parsedVersion
	Version_t3456873960 * ___m_parsedVersion_0;
	// System.Version/ParseFailureKind System.Version/VersionResult::m_failure
	int32_t ___m_failure_1;
	// System.String System.Version/VersionResult::m_exceptionArgument
	String_t* ___m_exceptionArgument_2;
	// System.String System.Version/VersionResult::m_argumentName
	String_t* ___m_argumentName_3;
	// System.Boolean System.Version/VersionResult::m_canThrow
	bool ___m_canThrow_4;

public:
	inline static int32_t get_offset_of_m_parsedVersion_0() { return static_cast<int32_t>(offsetof(VersionResult_t4090266424, ___m_parsedVersion_0)); }
	inline Version_t3456873960 * get_m_parsedVersion_0() const { return ___m_parsedVersion_0; }
	inline Version_t3456873960 ** get_address_of_m_parsedVersion_0() { return &___m_parsedVersion_0; }
	inline void set_m_parsedVersion_0(Version_t3456873960 * value)
	{
		___m_parsedVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_parsedVersion_0), value);
	}

	inline static int32_t get_offset_of_m_failure_1() { return static_cast<int32_t>(offsetof(VersionResult_t4090266424, ___m_failure_1)); }
	inline int32_t get_m_failure_1() const { return ___m_failure_1; }
	inline int32_t* get_address_of_m_failure_1() { return &___m_failure_1; }
	inline void set_m_failure_1(int32_t value)
	{
		___m_failure_1 = value;
	}

	inline static int32_t get_offset_of_m_exceptionArgument_2() { return static_cast<int32_t>(offsetof(VersionResult_t4090266424, ___m_exceptionArgument_2)); }
	inline String_t* get_m_exceptionArgument_2() const { return ___m_exceptionArgument_2; }
	inline String_t** get_address_of_m_exceptionArgument_2() { return &___m_exceptionArgument_2; }
	inline void set_m_exceptionArgument_2(String_t* value)
	{
		___m_exceptionArgument_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_exceptionArgument_2), value);
	}

	inline static int32_t get_offset_of_m_argumentName_3() { return static_cast<int32_t>(offsetof(VersionResult_t4090266424, ___m_argumentName_3)); }
	inline String_t* get_m_argumentName_3() const { return ___m_argumentName_3; }
	inline String_t** get_address_of_m_argumentName_3() { return &___m_argumentName_3; }
	inline void set_m_argumentName_3(String_t* value)
	{
		___m_argumentName_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_argumentName_3), value);
	}

	inline static int32_t get_offset_of_m_canThrow_4() { return static_cast<int32_t>(offsetof(VersionResult_t4090266424, ___m_canThrow_4)); }
	inline bool get_m_canThrow_4() const { return ___m_canThrow_4; }
	inline bool* get_address_of_m_canThrow_4() { return &___m_canThrow_4; }
	inline void set_m_canThrow_4(bool value)
	{
		___m_canThrow_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Version/VersionResult
struct VersionResult_t4090266424_marshaled_pinvoke
{
	Version_t3456873960 * ___m_parsedVersion_0;
	int32_t ___m_failure_1;
	char* ___m_exceptionArgument_2;
	char* ___m_argumentName_3;
	int32_t ___m_canThrow_4;
};
// Native definition for COM marshalling of System.Version/VersionResult
struct VersionResult_t4090266424_marshaled_com
{
	Version_t3456873960 * ___m_parsedVersion_0;
	int32_t ___m_failure_1;
	Il2CppChar* ___m_exceptionArgument_2;
	Il2CppChar* ___m_argumentName_3;
	int32_t ___m_canThrow_4;
};
#endif // VERSIONRESULT_T4090266424_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t777629997  : public ArgumentException_t132251570
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_18;

public:
	inline static int32_t get_offset_of_m_actualValue_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997, ___m_actualValue_18)); }
	inline RuntimeObject * get_m_actualValue_18() const { return ___m_actualValue_18; }
	inline RuntimeObject ** get_address_of_m_actualValue_18() { return &___m_actualValue_18; }
	inline void set_m_actualValue_18(RuntimeObject * value)
	{
		___m_actualValue_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_actualValue_18), value);
	}
};

struct ArgumentOutOfRangeException_t777629997_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_17;

public:
	inline static int32_t get_offset_of__rangeMessage_17() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997_StaticFields, ____rangeMessage_17)); }
	inline String_t* get__rangeMessage_17() const { return ____rangeMessage_17; }
	inline String_t** get_address_of__rangeMessage_17() { return &____rangeMessage_17; }
	inline void set__rangeMessage_17(String_t* value)
	{
		____rangeMessage_17 = value;
		Il2CppCodeGenWriteBarrier((&____rangeMessage_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifndef STREAMINGCONTEXT_T3711869237_H
#define STREAMINGCONTEXT_T3711869237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t3711869237 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_additionalContext_0), value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3711869237_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3711869237_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
#endif // STREAMINGCONTEXT_T3711869237_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_0;

public:
	inline static int32_t get_offset_of__impl_0() { return static_cast<int32_t>(offsetof(Type_t, ____impl_0)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_0() const { return ____impl_0; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_0() { return &____impl_0; }
	inline void set__impl_0(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_0 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_1;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_2;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_3;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_4;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_5;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_6;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2999457153 * ___defaultBinder_7;

public:
	inline static int32_t get_offset_of_FilterAttribute_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_1)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_1() const { return ___FilterAttribute_1; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_1() { return &___FilterAttribute_1; }
	inline void set_FilterAttribute_1(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_1), value);
	}

	inline static int32_t get_offset_of_FilterName_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_2)); }
	inline MemberFilter_t426314064 * get_FilterName_2() const { return ___FilterName_2; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_2() { return &___FilterName_2; }
	inline void set_FilterName_2(MemberFilter_t426314064 * value)
	{
		___FilterName_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_2), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_3)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_3() const { return ___FilterNameIgnoreCase_3; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_3() { return &___FilterNameIgnoreCase_3; }
	inline void set_FilterNameIgnoreCase_3(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_3 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_3), value);
	}

	inline static int32_t get_offset_of_Missing_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_4)); }
	inline RuntimeObject * get_Missing_4() const { return ___Missing_4; }
	inline RuntimeObject ** get_address_of_Missing_4() { return &___Missing_4; }
	inline void set_Missing_4(RuntimeObject * value)
	{
		___Missing_4 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_4), value);
	}

	inline static int32_t get_offset_of_Delimiter_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_5)); }
	inline Il2CppChar get_Delimiter_5() const { return ___Delimiter_5; }
	inline Il2CppChar* get_address_of_Delimiter_5() { return &___Delimiter_5; }
	inline void set_Delimiter_5(Il2CppChar value)
	{
		___Delimiter_5 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_6)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_6() const { return ___EmptyTypes_6; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_6() { return &___EmptyTypes_6; }
	inline void set_EmptyTypes_6(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_6 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_6), value);
	}

	inline static int32_t get_offset_of_defaultBinder_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_7)); }
	inline Binder_t2999457153 * get_defaultBinder_7() const { return ___defaultBinder_7; }
	inline Binder_t2999457153 ** get_address_of_defaultBinder_7() { return &___defaultBinder_7; }
	inline void set_defaultBinder_7(Binder_t2999457153 * value)
	{
		___defaultBinder_7 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef MODULE_T2987026101_H
#define MODULE_T2987026101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Module
struct  Module_t2987026101  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Module::_impl
	intptr_t ____impl_2;
	// System.Reflection.Assembly System.Reflection.Module::assembly
	Assembly_t * ___assembly_3;
	// System.String System.Reflection.Module::fqname
	String_t* ___fqname_4;
	// System.String System.Reflection.Module::name
	String_t* ___name_5;
	// System.String System.Reflection.Module::scopename
	String_t* ___scopename_6;
	// System.Boolean System.Reflection.Module::is_resource
	bool ___is_resource_7;
	// System.Int32 System.Reflection.Module::token
	int32_t ___token_8;

public:
	inline static int32_t get_offset_of__impl_2() { return static_cast<int32_t>(offsetof(Module_t2987026101, ____impl_2)); }
	inline intptr_t get__impl_2() const { return ____impl_2; }
	inline intptr_t* get_address_of__impl_2() { return &____impl_2; }
	inline void set__impl_2(intptr_t value)
	{
		____impl_2 = value;
	}

	inline static int32_t get_offset_of_assembly_3() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___assembly_3)); }
	inline Assembly_t * get_assembly_3() const { return ___assembly_3; }
	inline Assembly_t ** get_address_of_assembly_3() { return &___assembly_3; }
	inline void set_assembly_3(Assembly_t * value)
	{
		___assembly_3 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_3), value);
	}

	inline static int32_t get_offset_of_fqname_4() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___fqname_4)); }
	inline String_t* get_fqname_4() const { return ___fqname_4; }
	inline String_t** get_address_of_fqname_4() { return &___fqname_4; }
	inline void set_fqname_4(String_t* value)
	{
		___fqname_4 = value;
		Il2CppCodeGenWriteBarrier((&___fqname_4), value);
	}

	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___name_5)); }
	inline String_t* get_name_5() const { return ___name_5; }
	inline String_t** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(String_t* value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier((&___name_5), value);
	}

	inline static int32_t get_offset_of_scopename_6() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___scopename_6)); }
	inline String_t* get_scopename_6() const { return ___scopename_6; }
	inline String_t** get_address_of_scopename_6() { return &___scopename_6; }
	inline void set_scopename_6(String_t* value)
	{
		___scopename_6 = value;
		Il2CppCodeGenWriteBarrier((&___scopename_6), value);
	}

	inline static int32_t get_offset_of_is_resource_7() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___is_resource_7)); }
	inline bool get_is_resource_7() const { return ___is_resource_7; }
	inline bool* get_address_of_is_resource_7() { return &___is_resource_7; }
	inline void set_is_resource_7(bool value)
	{
		___is_resource_7 = value;
	}

	inline static int32_t get_offset_of_token_8() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___token_8)); }
	inline int32_t get_token_8() const { return ___token_8; }
	inline int32_t* get_address_of_token_8() { return &___token_8; }
	inline void set_token_8(int32_t value)
	{
		___token_8 = value;
	}
};

struct Module_t2987026101_StaticFields
{
public:
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeName
	TypeFilter_t2356120900 * ___FilterTypeName_0;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeNameIgnoreCase
	TypeFilter_t2356120900 * ___FilterTypeNameIgnoreCase_1;

public:
	inline static int32_t get_offset_of_FilterTypeName_0() { return static_cast<int32_t>(offsetof(Module_t2987026101_StaticFields, ___FilterTypeName_0)); }
	inline TypeFilter_t2356120900 * get_FilterTypeName_0() const { return ___FilterTypeName_0; }
	inline TypeFilter_t2356120900 ** get_address_of_FilterTypeName_0() { return &___FilterTypeName_0; }
	inline void set_FilterTypeName_0(TypeFilter_t2356120900 * value)
	{
		___FilterTypeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeName_0), value);
	}

	inline static int32_t get_offset_of_FilterTypeNameIgnoreCase_1() { return static_cast<int32_t>(offsetof(Module_t2987026101_StaticFields, ___FilterTypeNameIgnoreCase_1)); }
	inline TypeFilter_t2356120900 * get_FilterTypeNameIgnoreCase_1() const { return ___FilterTypeNameIgnoreCase_1; }
	inline TypeFilter_t2356120900 ** get_address_of_FilterTypeNameIgnoreCase_1() { return &___FilterTypeNameIgnoreCase_1; }
	inline void set_FilterTypeNameIgnoreCase_1(TypeFilter_t2356120900 * value)
	{
		___FilterTypeNameIgnoreCase_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeNameIgnoreCase_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Module
struct Module_t2987026101_marshaled_pinvoke
{
	intptr_t ____impl_2;
	Assembly_t_marshaled_pinvoke* ___assembly_3;
	char* ___fqname_4;
	char* ___name_5;
	char* ___scopename_6;
	int32_t ___is_resource_7;
	int32_t ___token_8;
};
// Native definition for COM marshalling of System.Reflection.Module
struct Module_t2987026101_marshaled_com
{
	intptr_t ____impl_2;
	Assembly_t_marshaled_com* ___assembly_3;
	Il2CppChar* ___fqname_4;
	Il2CppChar* ___name_5;
	Il2CppChar* ___scopename_6;
	int32_t ___is_resource_7;
	int32_t ___token_8;
};
#endif // MODULE_T2987026101_H
#ifndef RUNTIMEASSEMBLY_T1451753063_H
#define RUNTIMEASSEMBLY_T1451753063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.RuntimeAssembly
struct  RuntimeAssembly_t1451753063  : public Assembly_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEASSEMBLY_T1451753063_H
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
#ifndef FUNC_2_T464525003_H
#define FUNC_2_T464525003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Reflection.AssemblyName,System.Reflection.Assembly>
struct  Func_2_t464525003  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T464525003_H
#ifndef TYPEINFO_T1690786683_H
#define TYPEINFO_T1690786683_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeInfo
struct  TypeInfo_t1690786683  : public Type_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFO_T1690786683_H
#ifndef FUNC_4_T1497230017_H
#define FUNC_4_T1497230017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`4<System.Reflection.Assembly,System.String,System.Boolean,System.Type>
struct  Func_4_t1497230017  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_4_T1497230017_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef UNHANDLEDEXCEPTIONEVENTHANDLER_T3101989324_H
#define UNHANDLEDEXCEPTIONEVENTHANDLER_T3101989324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventHandler
struct  UnhandledExceptionEventHandler_t3101989324  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTHANDLER_T3101989324_H
#ifndef RUNTIMETYPE_T3636489352_H
#define RUNTIMETYPE_T3636489352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeType
struct  RuntimeType_t3636489352  : public TypeInfo_t1690786683
{
public:
	// System.MonoTypeInfo System.RuntimeType::type_info
	MonoTypeInfo_t3366989025 * ___type_info_10;
	// System.Object System.RuntimeType::GenericCache
	RuntimeObject * ___GenericCache_11;
	// System.Reflection.RuntimeConstructorInfo System.RuntimeType::m_serializationCtor
	RuntimeConstructorInfo_t1806616898 * ___m_serializationCtor_12;

public:
	inline static int32_t get_offset_of_type_info_10() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352, ___type_info_10)); }
	inline MonoTypeInfo_t3366989025 * get_type_info_10() const { return ___type_info_10; }
	inline MonoTypeInfo_t3366989025 ** get_address_of_type_info_10() { return &___type_info_10; }
	inline void set_type_info_10(MonoTypeInfo_t3366989025 * value)
	{
		___type_info_10 = value;
		Il2CppCodeGenWriteBarrier((&___type_info_10), value);
	}

	inline static int32_t get_offset_of_GenericCache_11() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352, ___GenericCache_11)); }
	inline RuntimeObject * get_GenericCache_11() const { return ___GenericCache_11; }
	inline RuntimeObject ** get_address_of_GenericCache_11() { return &___GenericCache_11; }
	inline void set_GenericCache_11(RuntimeObject * value)
	{
		___GenericCache_11 = value;
		Il2CppCodeGenWriteBarrier((&___GenericCache_11), value);
	}

	inline static int32_t get_offset_of_m_serializationCtor_12() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352, ___m_serializationCtor_12)); }
	inline RuntimeConstructorInfo_t1806616898 * get_m_serializationCtor_12() const { return ___m_serializationCtor_12; }
	inline RuntimeConstructorInfo_t1806616898 ** get_address_of_m_serializationCtor_12() { return &___m_serializationCtor_12; }
	inline void set_m_serializationCtor_12(RuntimeConstructorInfo_t1806616898 * value)
	{
		___m_serializationCtor_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_serializationCtor_12), value);
	}
};

struct RuntimeType_t3636489352_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Guid,System.Type> System.RuntimeType::clsid_types
	Dictionary_2_t1532962293 * ___clsid_types_13;
	// System.Reflection.Emit.AssemblyBuilder System.RuntimeType::clsid_assemblybuilder
	AssemblyBuilder_t359885250 * ___clsid_assemblybuilder_14;
	// System.RuntimeType System.RuntimeType::ValueType
	RuntimeType_t3636489352 * ___ValueType_15;
	// System.RuntimeType System.RuntimeType::EnumType
	RuntimeType_t3636489352 * ___EnumType_16;
	// System.RuntimeType System.RuntimeType::ObjectType
	RuntimeType_t3636489352 * ___ObjectType_17;
	// System.RuntimeType System.RuntimeType::StringType
	RuntimeType_t3636489352 * ___StringType_18;
	// System.RuntimeType System.RuntimeType::DelegateType
	RuntimeType_t3636489352 * ___DelegateType_19;
	// System.Type[] System.RuntimeType::s_SICtorParamTypes
	TypeU5BU5D_t3940880105* ___s_SICtorParamTypes_20;
	// System.RuntimeType System.RuntimeType::s_typedRef
	RuntimeType_t3636489352 * ___s_typedRef_30;

public:
	inline static int32_t get_offset_of_clsid_types_13() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___clsid_types_13)); }
	inline Dictionary_2_t1532962293 * get_clsid_types_13() const { return ___clsid_types_13; }
	inline Dictionary_2_t1532962293 ** get_address_of_clsid_types_13() { return &___clsid_types_13; }
	inline void set_clsid_types_13(Dictionary_2_t1532962293 * value)
	{
		___clsid_types_13 = value;
		Il2CppCodeGenWriteBarrier((&___clsid_types_13), value);
	}

	inline static int32_t get_offset_of_clsid_assemblybuilder_14() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___clsid_assemblybuilder_14)); }
	inline AssemblyBuilder_t359885250 * get_clsid_assemblybuilder_14() const { return ___clsid_assemblybuilder_14; }
	inline AssemblyBuilder_t359885250 ** get_address_of_clsid_assemblybuilder_14() { return &___clsid_assemblybuilder_14; }
	inline void set_clsid_assemblybuilder_14(AssemblyBuilder_t359885250 * value)
	{
		___clsid_assemblybuilder_14 = value;
		Il2CppCodeGenWriteBarrier((&___clsid_assemblybuilder_14), value);
	}

	inline static int32_t get_offset_of_ValueType_15() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___ValueType_15)); }
	inline RuntimeType_t3636489352 * get_ValueType_15() const { return ___ValueType_15; }
	inline RuntimeType_t3636489352 ** get_address_of_ValueType_15() { return &___ValueType_15; }
	inline void set_ValueType_15(RuntimeType_t3636489352 * value)
	{
		___ValueType_15 = value;
		Il2CppCodeGenWriteBarrier((&___ValueType_15), value);
	}

	inline static int32_t get_offset_of_EnumType_16() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___EnumType_16)); }
	inline RuntimeType_t3636489352 * get_EnumType_16() const { return ___EnumType_16; }
	inline RuntimeType_t3636489352 ** get_address_of_EnumType_16() { return &___EnumType_16; }
	inline void set_EnumType_16(RuntimeType_t3636489352 * value)
	{
		___EnumType_16 = value;
		Il2CppCodeGenWriteBarrier((&___EnumType_16), value);
	}

	inline static int32_t get_offset_of_ObjectType_17() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___ObjectType_17)); }
	inline RuntimeType_t3636489352 * get_ObjectType_17() const { return ___ObjectType_17; }
	inline RuntimeType_t3636489352 ** get_address_of_ObjectType_17() { return &___ObjectType_17; }
	inline void set_ObjectType_17(RuntimeType_t3636489352 * value)
	{
		___ObjectType_17 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectType_17), value);
	}

	inline static int32_t get_offset_of_StringType_18() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___StringType_18)); }
	inline RuntimeType_t3636489352 * get_StringType_18() const { return ___StringType_18; }
	inline RuntimeType_t3636489352 ** get_address_of_StringType_18() { return &___StringType_18; }
	inline void set_StringType_18(RuntimeType_t3636489352 * value)
	{
		___StringType_18 = value;
		Il2CppCodeGenWriteBarrier((&___StringType_18), value);
	}

	inline static int32_t get_offset_of_DelegateType_19() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___DelegateType_19)); }
	inline RuntimeType_t3636489352 * get_DelegateType_19() const { return ___DelegateType_19; }
	inline RuntimeType_t3636489352 ** get_address_of_DelegateType_19() { return &___DelegateType_19; }
	inline void set_DelegateType_19(RuntimeType_t3636489352 * value)
	{
		___DelegateType_19 = value;
		Il2CppCodeGenWriteBarrier((&___DelegateType_19), value);
	}

	inline static int32_t get_offset_of_s_SICtorParamTypes_20() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___s_SICtorParamTypes_20)); }
	inline TypeU5BU5D_t3940880105* get_s_SICtorParamTypes_20() const { return ___s_SICtorParamTypes_20; }
	inline TypeU5BU5D_t3940880105** get_address_of_s_SICtorParamTypes_20() { return &___s_SICtorParamTypes_20; }
	inline void set_s_SICtorParamTypes_20(TypeU5BU5D_t3940880105* value)
	{
		___s_SICtorParamTypes_20 = value;
		Il2CppCodeGenWriteBarrier((&___s_SICtorParamTypes_20), value);
	}

	inline static int32_t get_offset_of_s_typedRef_30() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___s_typedRef_30)); }
	inline RuntimeType_t3636489352 * get_s_typedRef_30() const { return ___s_typedRef_30; }
	inline RuntimeType_t3636489352 ** get_address_of_s_typedRef_30() { return &___s_typedRef_30; }
	inline void set_s_typedRef_30(RuntimeType_t3636489352 * value)
	{
		___s_typedRef_30 = value;
		Il2CppCodeGenWriteBarrier((&___s_typedRef_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPE_T3636489352_H
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t846150980  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) intptr_t m_Items[1];

public:
	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Type[]
struct TypeU5BU5D_t3940880105  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t1703627840  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t1188392813 * m_Items[1];

public:
	inline Delegate_t1188392813 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t1188392813 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t1188392813 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t1188392813 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t1188392813 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t1188392813 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
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
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
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

extern "C" void InputRecord_t2660212290_marshal_pinvoke(const InputRecord_t2660212290& unmarshaled, InputRecord_t2660212290_marshaled_pinvoke& marshaled);
extern "C" void InputRecord_t2660212290_marshal_pinvoke_back(const InputRecord_t2660212290_marshaled_pinvoke& marshaled, InputRecord_t2660212290& unmarshaled);
extern "C" void InputRecord_t2660212290_marshal_pinvoke_cleanup(InputRecord_t2660212290_marshaled_pinvoke& marshaled);

// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m816315209_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m337713592_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m1328026504_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
extern "C"  RuntimeObject * Func_2_Invoke_m3562087266_gshared (Func_2_t2447130374 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// TResult System.Func`4<System.Object,System.Object,System.Boolean,System.Object>::Invoke(T1,T2,T3)
extern "C"  RuntimeObject * Func_4_Invoke_m1837189164_gshared (Func_4_t1471758999 * __this, RuntimeObject * p0, RuntimeObject * p1, bool p2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C"  void List_1__ctor_m1204004817_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C"  void List_1_Add_m2080863212_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C"  Int32U5BU5D_t385246372* List_1_ToArray_m1469074435_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);

// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C"  void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* ___paramName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetResourceString(System.String)
extern "C"  String_t* Environment_GetResourceString_m2063689938 (RuntimeObject * __this /* static, unused */, String_t* ___key0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C"  void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Object::GetType()
extern "C"  Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.FieldInfo::op_Equality(System.Reflection.FieldInfo,System.Reflection.FieldInfo)
extern "C"  bool FieldInfo_op_Equality_m1841775853 (RuntimeObject * __this /* static, unused */, FieldInfo_t * ___left0, FieldInfo_t * ___right1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.FieldInfo::get_IsInitOnly()
extern "C"  bool FieldInfo_get_IsInitOnly_m930369112 (FieldInfo_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.FieldInfo::get_IsStatic()
extern "C"  bool FieldInfo_get_IsStatic_m3482711189 (FieldInfo_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.RuntimeType System.Reflection.RuntimeFieldInfo::GetDeclaringTypeInternal()
extern "C"  RuntimeType_t3636489352 * RuntimeFieldInfo_GetDeclaringTypeInternal_m4085033406 (RuntimeFieldInfo_t4270975280 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.RuntimeType::op_Inequality(System.RuntimeType,System.RuntimeType)
extern "C"  bool RuntimeType_op_Inequality_m287584116 (RuntimeObject * __this /* static, unused */, RuntimeType_t3636489352 * ___left0, RuntimeType_t3636489352 * ___right1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMemberException::.ctor(System.String)
extern "C"  void MissingMemberException__ctor_m2571045846 (MissingMemberException_t1385081665 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsPrimitive()
extern "C"  bool Type_get_IsPrimitive_m1114712797 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsValueType()
extern "C"  bool Type_get_IsValueType_m3108065642 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.RuntimeFieldHandle::get_Value()
extern "C"  intptr_t RuntimeFieldHandle_get_Value_m4138444424 (RuntimeFieldHandle_t1871169219 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TypedReference System.TypedReference::MakeTypedReferenceInternal(System.Object,System.Reflection.FieldInfo[])
extern "C"  TypedReference_t1491108119  TypedReference_MakeTypedReferenceInternal_m3020709588 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___target0, FieldInfoU5BU5D_t846150980* ___fields1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
extern "C"  bool IntPtr_op_Equality_m408849716 (RuntimeObject * __this /* static, unused */, intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  ___handle0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TypedReference::GetHashCode()
extern "C"  int32_t TypedReference_GetHashCode_m2046447331 (TypedReference_t1491108119 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor(System.String)
extern "C"  void NotSupportedException__ctor_m2494070935 (NotSupportedException_t1314879016 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TypedReference::Equals(System.Object)
extern "C"  bool TypedReference_Equals_m2034077850 (TypedReference_t1491108119 * __this, RuntimeObject * ___o0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IntPtr::IsNull()
extern "C"  bool IntPtr_IsNull_m765582262 (intptr_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TypedReference::get_IsNull()
extern "C"  bool TypedReference_get_IsNull_m152722487 (TypedReference_t1491108119 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotImplementedException::.ctor(System.String)
extern "C"  void NotImplementedException__ctor_m3095902440 (NotImplementedException_t3489357830 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.TypeIdentifiers/Display::.ctor(System.String)
extern "C"  void Display__ctor_m3114182611 (Display_t2029414921 * __this, String_t* ___displayName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.TypeIdentifiers/NoEscape::.ctor(System.String)
extern "C"  void NoEscape__ctor_m3634412810 (NoEscape_t3415473081 * __this, String_t* ___simpleName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.TypeNames/ATypeName::.ctor()
extern "C"  void ATypeName__ctor_m24968755 (ATypeName_t2426384130 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.TypeIdentifiers/Display::GetInternalName()
extern "C"  String_t* Display_GetInternalName_m1675807520 (Display_t2029414921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.TypeSpec::UnescapeInternalName(System.String)
extern "C"  String_t* TypeSpec_UnescapeInternalName_m3192984231 (RuntimeObject * __this /* static, unused */, String_t* ___displayName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.SystemException::.ctor(System.String)
extern "C"  void SystemException__ctor_m3298527747 (SystemException_t176217640 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::SetErrorCode(System.Int32)
extern "C"  void Exception_SetErrorCode_m4269507377 (Exception_t * __this, int32_t ___hr0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetResourceString(System.String,System.Object[])
extern "C"  String_t* Environment_GetResourceString_m479507158 (RuntimeObject * __this /* static, unused */, String_t* ___key0, ObjectU5BU5D_t2843939325* ___values1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.SystemException::.ctor(System.String,System.Exception)
extern "C"  void SystemException__ctor_m4132668650 (SystemException_t176217640 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.SystemException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void SystemException__ctor_m1515048899 (SystemException_t176217640 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Serialization.SerializationInfo::GetString(System.String)
extern "C"  String_t* SerializationInfo_GetString_m3155282843 (SerializationInfo_t950877179 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Exception_GetObjectData_m1103241326 (Exception_t * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.TypeInitializationException::get_TypeName()
extern "C"  String_t* TypeInitializationException_get_TypeName_m1310207019 (TypeInitializationException_t2973684290 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object,System.Type)
extern "C"  void SerializationInfo_AddValue_m3906743584 (SerializationInfo_t950877179 * __this, String_t* ___name0, RuntimeObject * ___value1, Type_t * ___type2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.TypeLoadException::SetMessageField()
extern "C"  void TypeLoadException_SetMessageField_m1068811921 (TypeLoadException_t3707937253 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
extern "C"  CultureInfo_t4157843068 * CultureInfo_get_CurrentCulture_m1632690660 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object,System.Object)
extern "C"  String_t* String_Format_m3551144749 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject * ___arg02, RuntimeObject * ___arg13, RuntimeObject * ___arg24, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.TypeLoadException::.ctor(System.String,System.String,System.String,System.Int32)
extern "C"  void TypeLoadException__ctor_m3671847517 (TypeLoadException_t3707937253 * __this, String_t* ___className0, String_t* ___assemblyName1, String_t* ___messageArg2, int32_t ___resourceId3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.SerializationInfo::GetInt32(System.String)
extern "C"  int32_t SerializationInfo_GetInt32_m2640574809 (SerializationInfo_t950877179 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int32)
extern "C"  void SerializationInfo_AddValue_m412754688 (SerializationInfo_t950877179 * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TypeSpec System.TypeSpec::Parse(System.String)
extern "C"  TypeSpec_t1651486824 * TypeSpec_Parse_m2141981279 (RuntimeObject * __this /* static, unused */, String_t* ___typeName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.TypeSpec::Resolve(System.Func`2<System.Reflection.AssemblyName,System.Reflection.Assembly>,System.Func`4<System.Reflection.Assembly,System.String,System.Boolean,System.Type>,System.Boolean,System.Boolean)
extern "C"  Type_t * TypeSpec_Resolve_m4214758032 (TypeSpec_t1651486824 * __this, Func_2_t464525003 * ___assemblyResolver0, Func_4_t1497230017 * ___typeResolver1, bool ___throwOnError2, bool ___ignoreCase3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TypeNames/ATypeName::Equals(System.TypeName)
extern "C"  bool ATypeName_Equals_m231522946 (ATypeName_t2426384130 * __this, RuntimeObject* ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.String)
extern "C"  void StringBuilder__ctor_m2989139009 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.TypeIdentifier>::GetEnumerator()
#define List_1_GetEnumerator_m912078294(__this, method) ((  Enumerator_t2065703332  (*) (List_1_t176459455 *, const RuntimeMethod*))List_1_GetEnumerator_m816315209_gshared)(__this, method)
// T System.Collections.Generic.List`1/Enumerator<System.TypeIdentifier>::get_Current()
#define Enumerator_get_Current_m719689252(__this, method) ((  RuntimeObject* (*) (Enumerator_t2065703332 *, const RuntimeMethod*))Enumerator_get_Current_m337713592_gshared)(__this, method)
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C"  StringBuilder_t * StringBuilder_Append_m2383614642 (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C"  StringBuilder_t * StringBuilder_Append_m1965104174 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.TypeIdentifier>::MoveNext()
#define Enumerator_MoveNext_m664374857(__this, method) ((  bool (*) (Enumerator_t2065703332 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<System.TypeIdentifier>::Dispose()
#define Enumerator_Dispose_m2167990708(__this, method) ((  void (*) (Enumerator_t2065703332 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.TypeSpec>::get_Item(System.Int32)
#define List_1_get_Item_m2892042586(__this, p0, method) ((  TypeSpec_t1651486824 * (*) (List_1_t3123561566 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method)
// System.String System.TypeSpec::get_DisplayFullName()
extern "C"  String_t* TypeSpec_get_DisplayFullName_m1782066599 (TypeSpec_t1651486824 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.TypeSpec>::get_Count()
#define List_1_get_Count_m4271156924(__this, method) ((  int32_t (*) (List_1_t3123561566 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Text.StringBuilder System.TypeSpec::GetModifierString(System.Text.StringBuilder)
extern "C"  StringBuilder_t * TypeSpec_GetModifierString_m1917884674 (TypeSpec_t1651486824 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.ModifierSpec>::GetEnumerator()
#define List_1_GetEnumerator_m3070018697(__this, method) ((  Enumerator_t3435715657  (*) (List_1_t1546471780 *, const RuntimeMethod*))List_1_GetEnumerator_m816315209_gshared)(__this, method)
// T System.Collections.Generic.List`1/Enumerator<System.ModifierSpec>::get_Current()
#define Enumerator_get_Current_m4128062465(__this, method) ((  RuntimeObject* (*) (Enumerator_t3435715657 *, const RuntimeMethod*))Enumerator_get_Current_m337713592_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.ModifierSpec>::MoveNext()
#define Enumerator_MoveNext_m3779760751(__this, method) ((  bool (*) (Enumerator_t3435715657 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<System.ModifierSpec>::Dispose()
#define Enumerator_Dispose_m2103495514(__this, method) ((  void (*) (Enumerator_t3435715657 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.String System.TypeSpec::GetDisplayFullName(System.TypeSpec/DisplayNameFormat)
extern "C"  String_t* TypeSpec_GetDisplayFullName_m468926262 (TypeSpec_t1651486824 * __this, int32_t ___flags0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TypeSpec System.TypeSpec::Parse(System.String,System.Int32&,System.Boolean,System.Boolean)
extern "C"  TypeSpec_t1651486824 * TypeSpec_Parse_m520729350 (RuntimeObject * __this /* static, unused */, String_t* ___name0, int32_t* ___p1, bool ___is_recurse2, bool ___allow_aqn3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
extern "C"  void ArgumentException__ctor_m1216717135 (ArgumentException_t132251570 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
extern "C"  void StringBuilder__ctor_m2367297767 (StringBuilder_t * __this, int32_t ___capacity0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::get_Chars(System.Int32)
extern "C"  Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetType(System.String,System.Boolean,System.Boolean)
extern "C"  Type_t * Type_GetType_m3971160356 (RuntimeObject * __this /* static, unused */, String_t* ___typeName0, bool ___throwOnError1, bool ___ignoreCase2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::.ctor(System.String)
extern "C"  void AssemblyName__ctor_m1866830415 (AssemblyName_t270931938 * __this, String_t* ___assemblyName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Reflection.AssemblyName,System.Reflection.Assembly>::Invoke(T)
#define Func_2_Invoke_m567693240(__this, p0, method) ((  Assembly_t * (*) (Func_2_t464525003 *, AssemblyName_t270931938 *, const RuntimeMethod*))Func_2_Invoke_m3562087266_gshared)(__this, p0, method)
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.String)
extern "C"  Assembly_t * Assembly_Load_m3487507613 (RuntimeObject * __this /* static, unused */, String_t* ___assemblyString0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::op_Equality(System.Reflection.Assembly,System.Reflection.Assembly)
extern "C"  bool Assembly_op_Equality_m3828289814 (RuntimeObject * __this /* static, unused */, Assembly_t * ___left0, Assembly_t * ___right1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileNotFoundException::.ctor(System.String)
extern "C"  void FileNotFoundException__ctor_m3252664930 (FileNotFoundException_t225391025 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`4<System.Reflection.Assembly,System.String,System.Boolean,System.Type>::Invoke(T1,T2,T3)
#define Func_4_Invoke_m3884166673(__this, p0, p1, p2, method) ((  Type_t * (*) (Func_4_t1497230017 *, Assembly_t *, String_t*, bool, const RuntimeMethod*))Func_4_Invoke_m1837189164_gshared)(__this, p0, p1, p2, method)
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
extern "C"  bool Type_op_Equality_m2683486427 (RuntimeObject * __this /* static, unused */, Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C"  String_t* String_Concat_m1715369213 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.TypeLoadException::.ctor(System.String)
extern "C"  void TypeLoadException__ctor_m2362330792 (TypeLoadException_t3707937253 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TypeIdentifier System.TypeSpec::ParsedTypeIdentifier(System.String)
extern "C"  RuntimeObject* TypeSpec_ParsedTypeIdentifier_m1301895364 (RuntimeObject * __this /* static, unused */, String_t* ___displayName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.TypeIdentifier>::.ctor()
#define List_1__ctor_m2197792278(__this, method) ((  void (*) (List_1_t176459455 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.TypeIdentifier>::Add(T)
#define List_1_Add_m1829376775(__this, p0, method) ((  void (*) (List_1_t176459455 *, RuntimeObject*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<System.ModifierSpec>::.ctor()
#define List_1__ctor_m1369486050(__this, method) ((  void (*) (List_1_t1546471780 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.ModifierSpec>::Add(T)
#define List_1_Add_m3002018067(__this, p0, method) ((  void (*) (List_1_t1546471780 *, RuntimeObject*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Boolean System.Char::IsWhiteSpace(System.Char)
extern "C"  bool Char_IsWhiteSpace_m2148390798 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TypeIdentifier System.TypeIdentifiers::FromDisplay(System.String)
extern "C"  RuntimeObject* TypeIdentifiers_FromDisplay_m702141453 (RuntimeObject * __this /* static, unused */, String_t* ___displayName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.TypeSpec::.ctor()
extern "C"  void TypeSpec__ctor_m1488198768 (TypeSpec_t1651486824 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.TypeSpec::SkipSpace(System.String,System.Int32&)
extern "C"  void TypeSpec_SkipSpace_m814955084 (RuntimeObject * __this /* static, unused */, String_t* ___name0, int32_t* ___pos1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C"  String_t* String_Substring_m1610150815 (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.TypeSpec::AddName(System.String)
extern "C"  void TypeSpec_AddName_m2260684595 (TypeSpec_t1651486824 * __this, String_t* ___type_name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.PointerSpec::.ctor(System.Int32)
extern "C"  void PointerSpec__ctor_m1621035005 (PointerSpec_t334147946 * __this, int32_t ___pointer_level0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.TypeSpec::AddModifier(System.ModifierSpec)
extern "C"  void TypeSpec_AddModifier_m4214585389 (TypeSpec_t1651486824 * __this, RuntimeObject* ___md0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Trim()
extern "C"  String_t* String_Trim_m923598732 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32)
extern "C"  String_t* String_Substring_m2848979100 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.TypeSpec>::.ctor()
#define List_1__ctor_m1318629066(__this, method) ((  void (*) (List_1_t3123561566 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Boolean System.TypeSpec::get_HasModifiers()
extern "C"  bool TypeSpec_get_HasModifiers_m1981244987 (TypeSpec_t1651486824 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.TypeSpec>::Add(T)
#define List_1_Add_m1314727163(__this, p0, method) ((  void (*) (List_1_t3123561566 *, TypeSpec_t1651486824 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void System.TypeSpec::BoundCheck(System.Int32,System.String)
extern "C"  void TypeSpec_BoundCheck_m765121887 (RuntimeObject * __this /* static, unused */, int32_t ___idx0, String_t* ___s1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Char::ToString()
extern "C"  String_t* Char_ToString_m3588025615 (Il2CppChar* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArraySpec::.ctor(System.Int32,System.Boolean)
extern "C"  void ArraySpec__ctor_m2106938459 (ArraySpec_t3456100556 * __this, int32_t ___dimensions0, bool ___bound1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
extern "C"  String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt16::CompareTo(System.Object)
extern "C"  int32_t UInt16_CompareTo_m2664746316 (uint16_t* __this, RuntimeObject * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt16::CompareTo(System.UInt16)
extern "C"  int32_t UInt16_CompareTo_m243264328 (uint16_t* __this, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt16::Equals(System.Object)
extern "C"  bool UInt16_Equals_m642257745 (uint16_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt16::Equals(System.UInt16)
extern "C"  bool UInt16_Equals_m3755275785 (uint16_t* __this, uint16_t ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt16::GetHashCode()
extern "C"  int32_t UInt16_GetHashCode_m329858256 (uint16_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_CurrentInfo()
extern "C"  NumberFormatInfo_t435877138 * NumberFormatInfo_get_CurrentInfo_m2605582008 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Number::FormatUInt32(System.UInt32,System.String,System.Globalization.NumberFormatInfo)
extern "C"  String_t* Number_FormatUInt32_m2486347252 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, String_t* ___format1, NumberFormatInfo_t435877138 * ___info2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt16::ToString()
extern "C"  String_t* UInt16_ToString_m355311020 (uint16_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::GetInstance(System.IFormatProvider)
extern "C"  NumberFormatInfo_t435877138 * NumberFormatInfo_GetInstance_m2833078205 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___formatProvider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt16::ToString(System.IFormatProvider)
extern "C"  String_t* UInt16_ToString_m3020002356 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt16::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* UInt16_ToString_m760649087 (uint16_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.UInt16::Parse(System.String,System.Globalization.NumberStyles,System.Globalization.NumberFormatInfo)
extern "C"  uint16_t UInt16_Parse_m583993245 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___style1, NumberFormatInfo_t435877138 * ___info2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::ValidateParseStyleInteger(System.Globalization.NumberStyles)
extern "C"  void NumberFormatInfo_ValidateParseStyleInteger_m957858295 (RuntimeObject * __this /* static, unused */, int32_t ___style0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Number::ParseUInt32(System.String,System.Globalization.NumberStyles,System.Globalization.NumberFormatInfo)
extern "C"  uint32_t Number_ParseUInt32_m4237573864 (RuntimeObject * __this /* static, unused */, String_t* ___value0, int32_t ___options1, NumberFormatInfo_t435877138 * ___numfmt2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.OverflowException::.ctor(System.String,System.Exception)
extern "C"  void OverflowException__ctor_m2524654454 (OverflowException_t2020128637 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.OverflowException::.ctor(System.String)
extern "C"  void OverflowException__ctor_m694321376 (OverflowException_t2020128637 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt16::TryParse(System.String,System.Globalization.NumberStyles,System.Globalization.NumberFormatInfo,System.UInt16&)
extern "C"  bool UInt16_TryParse_m861109300 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___style1, NumberFormatInfo_t435877138 * ___info2, uint16_t* ___result3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Number::TryParseUInt32(System.String,System.Globalization.NumberStyles,System.Globalization.NumberFormatInfo,System.UInt32&)
extern "C"  bool Number_TryParseUInt32_m2802499845 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___style1, NumberFormatInfo_t435877138 * ___info2, uint32_t* ___result3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.UInt16::GetTypeCode()
extern "C"  int32_t UInt16_GetTypeCode_m2741181841 (uint16_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.UInt16)
extern "C"  bool Convert_ToBoolean_m481380807 (RuntimeObject * __this /* static, unused */, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt16::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C"  bool UInt16_System_IConvertible_ToBoolean_m3911119012 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.UInt16)
extern "C"  Il2CppChar Convert_ToChar_m3178343373 (RuntimeObject * __this /* static, unused */, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.UInt16::System.IConvertible.ToChar(System.IFormatProvider)
extern "C"  Il2CppChar UInt16_System_IConvertible_ToChar_m2096055221 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.UInt16)
extern "C"  int8_t Convert_ToSByte_m516918950 (RuntimeObject * __this /* static, unused */, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.SByte System.UInt16::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C"  int8_t UInt16_System_IConvertible_ToSByte_m2219828332 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.UInt16)
extern "C"  uint8_t Convert_ToByte_m2375887898 (RuntimeObject * __this /* static, unused */, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte System.UInt16::System.IConvertible.ToByte(System.IFormatProvider)
extern "C"  uint8_t UInt16_System_IConvertible_ToByte_m3185614807 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.UInt16)
extern "C"  int16_t Convert_ToInt16_m2896657713 (RuntimeObject * __this /* static, unused */, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.UInt16::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C"  int16_t UInt16_System_IConvertible_ToInt16_m2337134904 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.UInt16::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C"  uint16_t UInt16_System_IConvertible_ToUInt16_m2455419819 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.UInt16)
extern "C"  int32_t Convert_ToInt32_m1987758323 (RuntimeObject * __this /* static, unused */, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt16::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C"  int32_t UInt16_System_IConvertible_ToInt32_m1950778303 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.UInt16)
extern "C"  uint32_t Convert_ToUInt32_m193615797 (RuntimeObject * __this /* static, unused */, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.UInt16::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C"  uint32_t UInt16_System_IConvertible_ToUInt32_m1074326139 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.UInt16)
extern "C"  int64_t Convert_ToInt64_m1422776160 (RuntimeObject * __this /* static, unused */, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.UInt16::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C"  int64_t UInt16_System_IConvertible_ToInt64_m3635199533 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.UInt16)
extern "C"  uint64_t Convert_ToUInt64_m1362719450 (RuntimeObject * __this /* static, unused */, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.UInt16::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C"  uint64_t UInt16_System_IConvertible_ToUInt64_m424720762 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.UInt16)
extern "C"  float Convert_ToSingle_m3600812843 (RuntimeObject * __this /* static, unused */, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single System.UInt16::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C"  float UInt16_System_IConvertible_ToSingle_m2654722405 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.UInt16)
extern "C"  double Convert_ToDouble_m1840199900 (RuntimeObject * __this /* static, unused */, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.UInt16::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C"  double UInt16_System_IConvertible_ToDouble_m333121300 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.UInt16)
extern "C"  Decimal_t2948259380  Convert_ToDecimal_m2858622624 (RuntimeObject * __this /* static, unused */, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.UInt16::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C"  Decimal_t2948259380  UInt16_System_IConvertible_ToDecimal_m1320731319 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidCastException::.ctor(System.String)
extern "C"  void InvalidCastException__ctor_m318645277 (InvalidCastException_t3927145244 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.UInt16::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C"  DateTime_t3738529785  UInt16_System_IConvertible_ToDateTime_m2594768090 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Convert::DefaultToType(System.IConvertible,System.Type,System.IFormatProvider)
extern "C"  RuntimeObject * Convert_DefaultToType_m1860037989 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___value0, Type_t * ___targetType1, RuntimeObject* ___provider2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.UInt16::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C"  RuntimeObject * UInt16_System_IConvertible_ToType_m1028622578 (uint16_t* __this, Type_t * ___type0, RuntimeObject* ___provider1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt32::CompareTo(System.Object)
extern "C"  int32_t UInt32_CompareTo_m362578384 (uint32_t* __this, RuntimeObject * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt32::CompareTo(System.UInt32)
extern "C"  int32_t UInt32_CompareTo_m2218823230 (uint32_t* __this, uint32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt32::Equals(System.Object)
extern "C"  bool UInt32_Equals_m351935437 (uint32_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt32::Equals(System.UInt32)
extern "C"  bool UInt32_Equals_m4250336581 (uint32_t* __this, uint32_t ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt32::GetHashCode()
extern "C"  int32_t UInt32_GetHashCode_m3722548385 (uint32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt32::ToString()
extern "C"  String_t* UInt32_ToString_m2574561716 (uint32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt32::ToString(System.IFormatProvider)
extern "C"  String_t* UInt32_ToString_m4293943134 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt32::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* UInt32_ToString_m2420423038 (uint32_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.UInt32::GetTypeCode()
extern "C"  int32_t UInt32_GetTypeCode_m88917904 (uint32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.UInt32)
extern "C"  bool Convert_ToBoolean_m2807110707 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt32::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C"  bool UInt32_System_IConvertible_ToBoolean_m1763673183 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.UInt32)
extern "C"  Il2CppChar Convert_ToChar_m2796006345 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.UInt32::System.IConvertible.ToChar(System.IFormatProvider)
extern "C"  Il2CppChar UInt32_System_IConvertible_ToChar_m1873050533 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.UInt32)
extern "C"  int8_t Convert_ToSByte_m2486156346 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.SByte System.UInt32::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C"  int8_t UInt32_System_IConvertible_ToSByte_m1061556466 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.UInt32)
extern "C"  uint8_t Convert_ToByte_m1993550870 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte System.UInt32::System.IConvertible.ToByte(System.IFormatProvider)
extern "C"  uint8_t UInt32_System_IConvertible_ToByte_m4072781199 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.UInt32)
extern "C"  int16_t Convert_ToInt16_m571189957 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.UInt32::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C"  int16_t UInt32_System_IConvertible_ToInt16_m1659441601 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.UInt32)
extern "C"  uint16_t Convert_ToUInt16_m1480956416 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.UInt32::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C"  uint16_t UInt32_System_IConvertible_ToUInt16_m3125657960 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.UInt32)
extern "C"  int32_t Convert_ToInt32_m3956995719 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt32::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C"  int32_t UInt32_System_IConvertible_ToInt32_m220754611 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.UInt32::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C"  uint32_t UInt32_System_IConvertible_ToUInt32_m1744564280 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.UInt32)
extern "C"  int64_t Convert_ToInt64_m3392013556 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.UInt32::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C"  int64_t UInt32_System_IConvertible_ToInt64_m2261037378 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.UInt32)
extern "C"  uint64_t Convert_ToUInt64_m1745056470 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.UInt32::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C"  uint64_t UInt32_System_IConvertible_ToUInt64_m1094958903 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.UInt32)
extern "C"  float Convert_ToSingle_m3983149863 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single System.UInt32::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C"  float UInt32_System_IConvertible_ToSingle_m1272823424 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.UInt32)
extern "C"  double Convert_ToDouble_m2222536920 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.UInt32::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C"  double UInt32_System_IConvertible_ToDouble_m940039456 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.UInt32)
extern "C"  Decimal_t2948259380  Convert_ToDecimal_m889385228 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.UInt32::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C"  Decimal_t2948259380  UInt32_System_IConvertible_ToDecimal_m675004071 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.UInt32::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C"  DateTime_t3738529785  UInt32_System_IConvertible_ToDateTime_m2767723441 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.UInt32::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C"  RuntimeObject * UInt32_System_IConvertible_ToType_m922356584 (uint32_t* __this, Type_t * ___type0, RuntimeObject* ___provider1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt64::CompareTo(System.Object)
extern "C"  int32_t UInt64_CompareTo_m3619843473 (uint64_t* __this, RuntimeObject * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt64::CompareTo(System.UInt64)
extern "C"  int32_t UInt64_CompareTo_m1614517204 (uint64_t* __this, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt64::Equals(System.Object)
extern "C"  bool UInt64_Equals_m1879425698 (uint64_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt64::Equals(System.UInt64)
extern "C"  bool UInt64_Equals_m367573732 (uint64_t* __this, uint64_t ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt64::GetHashCode()
extern "C"  int32_t UInt64_GetHashCode_m4209760355 (uint64_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Number::FormatUInt64(System.UInt64,System.String,System.Globalization.NumberFormatInfo)
extern "C"  String_t* Number_FormatUInt64_m792080283 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, String_t* ___format1, NumberFormatInfo_t435877138 * ___info2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt64::ToString()
extern "C"  String_t* UInt64_ToString_m1529093114 (uint64_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt64::ToString(System.IFormatProvider)
extern "C"  String_t* UInt64_ToString_m2623377370 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt64::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* UInt64_ToString_m1695188334 (uint64_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Number::ParseUInt64(System.String,System.Globalization.NumberStyles,System.Globalization.NumberFormatInfo)
extern "C"  uint64_t Number_ParseUInt64_m2694014565 (RuntimeObject * __this /* static, unused */, String_t* ___value0, int32_t ___options1, NumberFormatInfo_t435877138 * ___numfmt2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Number::TryParseUInt64(System.String,System.Globalization.NumberStyles,System.Globalization.NumberFormatInfo,System.UInt64&)
extern "C"  bool Number_TryParseUInt64_m782753458 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___style1, NumberFormatInfo_t435877138 * ___info2, uint64_t* ___result3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.UInt64::GetTypeCode()
extern "C"  int32_t UInt64_GetTypeCode_m844217172 (uint64_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.UInt64)
extern "C"  bool Convert_ToBoolean_m3613483153 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt64::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C"  bool UInt64_System_IConvertible_ToBoolean_m3071416000 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.UInt64)
extern "C"  Il2CppChar Convert_ToChar_m1604365259 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.UInt64::System.IConvertible.ToChar(System.IFormatProvider)
extern "C"  Il2CppChar UInt64_System_IConvertible_ToChar_m2074245892 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.UInt64)
extern "C"  int8_t Convert_ToSByte_m1679390684 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.SByte System.UInt64::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C"  int8_t UInt64_System_IConvertible_ToSByte_m30962591 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.UInt64)
extern "C"  uint8_t Convert_ToByte_m3567528984 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte System.UInt64::System.IConvertible.ToByte(System.IFormatProvider)
extern "C"  uint8_t UInt64_System_IConvertible_ToByte_m1501504925 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.UInt64)
extern "C"  int16_t Convert_ToInt16_m1733792763 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.UInt64::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C"  int16_t UInt64_System_IConvertible_ToInt16_m3895479143 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.UInt64)
extern "C"  uint16_t Convert_ToUInt16_m2672597498 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.UInt64::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C"  uint16_t UInt64_System_IConvertible_ToUInt16_m4165747038 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.UInt64)
extern "C"  int32_t Convert_ToInt32_m825155517 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt64::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C"  int32_t UInt64_System_IConvertible_ToInt32_m949522652 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.UInt64)
extern "C"  uint32_t Convert_ToUInt32_m1767593911 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.UInt64::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C"  uint32_t UInt64_System_IConvertible_ToUInt32_m2784653358 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.UInt64)
extern "C"  int64_t Convert_ToInt64_m260173354 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.UInt64::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C"  int64_t UInt64_System_IConvertible_ToInt64_m4241475606 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.UInt64::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C"  uint64_t UInt64_System_IConvertible_ToUInt64_m2135047981 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.UInt64)
extern "C"  float Convert_ToSingle_m2791508777 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single System.UInt64::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C"  float UInt64_System_IConvertible_ToSingle_m925613075 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.UInt64)
extern "C"  double Convert_ToDouble_m1030895834 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.UInt64::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C"  double UInt64_System_IConvertible_ToDouble_m602078108 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.UInt64)
extern "C"  Decimal_t2948259380  Convert_ToDecimal_m1695757674 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.UInt64::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C"  Decimal_t2948259380  UInt64_System_IConvertible_ToDecimal_m806594027 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.UInt64::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C"  DateTime_t3738529785  UInt64_System_IConvertible_ToDateTime_m3434604642 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.UInt64::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C"  RuntimeObject * UInt64_System_IConvertible_ToType_m4049257834 (uint64_t* __this, Type_t * ___type0, RuntimeObject* ___provider1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.UIntPtr::.ctor(System.UInt32)
extern "C"  void UIntPtr__ctor_m4250165422 (uintptr_t* __this, uint32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UIntPtr::Equals(System.Object)
extern "C"  bool UIntPtr_Equals_m1316671746 (uintptr_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UIntPtr::GetHashCode()
extern "C"  int32_t UIntPtr_GetHashCode_m3482152298 (uintptr_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UIntPtr::get_Size()
extern "C"  int32_t UIntPtr_get_Size_m703595701 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.UIntPtr::ToString()
extern "C"  String_t* UIntPtr_ToString_m984583492 (uintptr_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.UInt64)
extern "C"  void SerializationInfo_AddValue_m2020653395 (SerializationInfo_t950877179 * __this, String_t* ___name0, uint64_t ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.UIntPtr::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m1767630151 (uintptr_t* __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventArgs::.ctor()
extern "C"  void EventArgs__ctor_m32674013 (EventArgs_t3591816995 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::SetType(System.Type)
extern "C"  void SerializationInfo_SetType_m3923964808 (SerializationInfo_t950877179 * __this, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
#define List_1__ctor_m1204004817(__this, method) ((  void (*) (List_1_t128053199 *, const RuntimeMethod*))List_1__ctor_m1204004817_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
#define List_1_Add_m2080863212(__this, p0, method) ((  void (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_Add_m2080863212_gshared)(__this, p0, method)
// System.Boolean System.Type::get_IsArray()
extern "C"  bool Type_get_IsArray_m2591212821 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsPointer()
extern "C"  bool Type_get_IsPointer_m4067542339 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsByRef()
extern "C"  bool Type_get_IsByRef_m1262524108 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_HasElementType()
extern "C"  bool Type_get_HasElementType_m710151977 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
#define List_1_ToArray_m1469074435(__this, method) ((  Int32U5BU5D_t385246372* (*) (List_1_t128053199 *, const RuntimeMethod*))List_1_ToArray_m1469074435_gshared)(__this, method)
// System.Type System.Type::GetRootElementType()
extern "C"  Type_t * Type_GetRootElementType_m2028550026 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.RuntimeType System.UnitySerializationHolder::AddElementTypes(System.Runtime.Serialization.SerializationInfo,System.RuntimeType)
extern "C"  RuntimeType_t3636489352 * UnitySerializationHolder_AddElementTypes_m2711578409 (RuntimeObject * __this /* static, unused */, SerializationInfo_t950877179 * ___info0, RuntimeType_t3636489352 * ___type1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.RuntimeAssembly System.RuntimeType::GetRuntimeAssembly()
extern "C"  RuntimeAssembly_t1451753063 * RuntimeType_GetRuntimeAssembly_m2955606119 (RuntimeType_t3636489352 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetUnitySerializationInfo(System.Runtime.Serialization.SerializationInfo,System.Int32,System.String,System.Reflection.RuntimeAssembly)
extern "C"  void UnitySerializationHolder_GetUnitySerializationInfo_m3966690610 (RuntimeObject * __this /* static, unused */, SerializationInfo_t950877179 * ___info0, int32_t ___unityType1, String_t* ___data2, RuntimeAssembly_t1451753063 * ___assembly3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
extern "C"  void SerializationInfo_AddValue_m2872281893 (SerializationInfo_t950877179 * __this, String_t* ___name0, RuntimeObject * ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
extern "C"  RuntimeObject * SerializationInfo_GetValue_m42271953 (SerializationInfo_t950877179 * __this, String_t* ___name0, Type_t * ___type1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationException::.ctor(System.String)
extern "C"  void SerializationException__ctor_m3862484944 (SerializationException_t3941511869 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.UnitySerializationHolder::MakeElementTypes(System.Type)
extern "C"  Type_t * UnitySerializationHolder_MakeElementTypes_m672301684 (UnitySerializationHolder_t431912834 * __this, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::op_Equality(System.Reflection.MethodBase,System.Reflection.MethodBase)
extern "C"  bool MethodBase_op_Equality_m2405991987 (RuntimeObject * __this /* static, unused */, MethodBase_t * ___left0, MethodBase_t * ___right1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::ThrowInsufficientInformation(System.String)
extern "C"  void UnitySerializationHolder_ThrowInsufficientInformation_m1747464776 (UnitySerializationHolder_t431912834 * __this, String_t* ___field0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::op_Inequality(System.Reflection.MethodBase,System.Reflection.MethodBase)
extern "C"  bool MethodBase_op_Inequality_m736913402 (RuntimeObject * __this /* static, unused */, MethodBase_t * ___left0, MethodBase_t * ___right1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Module::op_Equality(System.Reflection.Module,System.Reflection.Module)
extern "C"  bool Module_op_Equality_m1102431980 (RuntimeObject * __this /* static, unused */, Module_t2987026101 * ___left0, Module_t2987026101 * ___right1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnSafeCharBuffer::.ctor(System.Char*,System.Int32)
extern "C"  void UnSafeCharBuffer__ctor_m1145239641 (UnSafeCharBuffer_t2176740272 * __this, Il2CppChar* ___buffer0, int32_t ___bufferSize1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C"  bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IndexOutOfRangeException::.ctor()
extern "C"  void IndexOutOfRangeException__ctor_m2441337274 (IndexOutOfRangeException_t1578797820 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::get_OffsetToStringData()
extern "C"  int32_t RuntimeHelpers_get_OffsetToStringData_m2192601476 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Buffer::Memcpy(System.Byte*,System.Byte*,System.Int32)
extern "C"  void Buffer_Memcpy_m2035854300 (RuntimeObject * __this /* static, unused */, uint8_t* ___dest0, uint8_t* ___src1, int32_t ___size2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnSafeCharBuffer::AppendString(System.String)
extern "C"  void UnSafeCharBuffer_AppendString_m2223303597 (UnSafeCharBuffer_t2176740272 * __this, String_t* ___stringToAppend0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ValueType::InternalEquals(System.Object,System.Object,System.Object[]&)
extern "C"  bool ValueType_InternalEquals_m1384040357 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o10, RuntimeObject * ___o21, ObjectU5BU5D_t2843939325** ___fields2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ValueType::DefaultEquals(System.Object,System.Object)
extern "C"  bool ValueType_DefaultEquals_m2927252100 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o10, RuntimeObject * ___o21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ValueType::InternalGetHashCode(System.Object,System.Object[]&)
extern "C"  int32_t ValueType_InternalGetHashCode_m58786863 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o0, ObjectU5BU5D_t2843939325** ___fields1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
extern "C"  void ArgumentOutOfRangeException__ctor_m282481429 (ArgumentOutOfRangeException_t777629997 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Version System.Version::Parse(System.String)
extern "C"  Version_t3456873960 * Version_Parse_m1775477436 (RuntimeObject * __this /* static, unused */, String_t* ___input0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Major()
extern "C"  int32_t Version_get_Major_m2457928275 (Version_t3456873960 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Minor()
extern "C"  int32_t Version_get_Minor_m150536655 (Version_t3456873960 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Build()
extern "C"  int32_t Version_get_Build_m3667751407 (Version_t3456873960 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Revision()
extern "C"  int32_t Version_get_Revision_m3982234017 (Version_t3456873960 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor()
extern "C"  void Version__ctor_m872301635 (Version_t3456873960 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_Equality(System.Version,System.Version)
extern "C"  bool Version_op_Equality_m3804852517 (RuntimeObject * __this /* static, unused */, Version_t3456873960 * ___v10, Version_t3456873960 * ___v21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Version::ToString(System.Int32)
extern "C"  String_t* Version_ToString_m3654989516 (Version_t3456873960 * __this, int32_t ___fieldCount0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilderCache::Acquire(System.Int32)
extern "C"  StringBuilder_t * StringBuilderCache_Acquire_m4169564332 (RuntimeObject * __this /* static, unused */, int32_t ___capacity0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::AppendPositiveNumber(System.Int32,System.Text.StringBuilder)
extern "C"  void Version_AppendPositiveNumber_m308762805 (RuntimeObject * __this /* static, unused */, int32_t ___num0, StringBuilder_t * ___sb1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.StringBuilderCache::GetStringAndRelease(System.Text.StringBuilder)
extern "C"  String_t* StringBuilderCache_GetStringAndRelease_m1110745745 (RuntimeObject * __this /* static, unused */, StringBuilder_t * ___sb0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.StringBuilder::get_Length()
extern "C"  int32_t StringBuilder_get_Length_m3238060835 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.Char)
extern "C"  StringBuilder_t * StringBuilder_Insert_m1076119876 (StringBuilder_t * __this, int32_t ___index0, Il2CppChar ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version/VersionResult::Init(System.String,System.Boolean)
extern "C"  void VersionResult_Init_m1480155778 (VersionResult_t4090266424 * __this, String_t* ___argumentName0, bool ___canThrow1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::TryParseVersion(System.String,System.Version/VersionResult&)
extern "C"  bool Version_TryParseVersion_m1428065303 (RuntimeObject * __this /* static, unused */, String_t* ___version0, VersionResult_t4090266424 * ___result1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Version/VersionResult::GetVersionParseException()
extern "C"  Exception_t * VersionResult_GetVersionParseException_m2052602218 (VersionResult_t4090266424 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version/VersionResult::SetFailure(System.Version/ParseFailureKind)
extern "C"  void VersionResult_SetFailure_m3577471770 (VersionResult_t4090266424 * __this, int32_t ___failure0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[])
extern "C"  StringU5BU5D_t1281789340* String_Split_m3646115398 (String_t* __this, CharU5BU5D_t3528271667* ___separator0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::TryParseComponent(System.String,System.String,System.Version/VersionResult&,System.Int32&)
extern "C"  bool Version_TryParseComponent_m3061913945 (RuntimeObject * __this /* static, unused */, String_t* ___component0, String_t* ___componentName1, VersionResult_t4090266424 * ___result2, int32_t* ___parsedComponent3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Version__ctor_m417728625 (Version_t3456873960 * __this, int32_t ___major0, int32_t ___minor1, int32_t ___build2, int32_t ___revision3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32)
extern "C"  void Version__ctor_m1550720073 (Version_t3456873960 * __this, int32_t ___major0, int32_t ___minor1, int32_t ___build2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32)
extern "C"  void Version__ctor_m3537335798 (Version_t3456873960 * __this, int32_t ___major0, int32_t ___minor1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C"  CultureInfo_t4157843068 * CultureInfo_get_InvariantCulture_m3532445182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int32&)
extern "C"  bool Int32_TryParse_m135955795 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, int32_t* ___result3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version/VersionResult::SetFailure(System.Version/ParseFailureKind,System.String)
extern "C"  void VersionResult_SetFailure_m1038741463 (VersionResult_t4090266424 * __this, int32_t ___failure0, String_t* ___argument1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::Equals(System.Version)
extern "C"  bool Version_Equals_m1564427710 (Version_t3456873960 * __this, Version_t3456873960 * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::CompareTo(System.Version)
extern "C"  int32_t Version_CompareTo_m3146217210 (Version_t3456873960 * __this, Version_t3456873960 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_LessThanOrEqual(System.Version,System.Version)
extern "C"  bool Version_op_LessThanOrEqual_m666140174 (RuntimeObject * __this /* static, unused */, Version_t3456873960 * ___v10, Version_t3456873960 * ___v21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::Parse(System.String,System.IFormatProvider)
extern "C"  int32_t Int32_Parse_m2087562008 (RuntimeObject * __this /* static, unused */, String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.FormatException::.ctor(System.String)
extern "C"  void FormatException__ctor_m4049685996 (FormatException_t154580423 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
extern "C"  GCHandle_t3351438187  GCHandle_Alloc_m3823409740 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, int32_t ___type1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::.ctor(System.Object,System.Boolean)
extern "C"  void WeakReference__ctor_m1054065938 (WeakReference_t1334886716 * __this, RuntimeObject * ___target0, bool ___trackResurrection1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::AllocateHandle(System.Object)
extern "C"  void WeakReference_AllocateHandle_m1478975559 (WeakReference_t1334886716 * __this, RuntimeObject * ___target0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.SerializationInfo::GetBoolean(System.String)
extern "C"  bool SerializationInfo_GetBoolean_m1756153320 (SerializationInfo_t950877179 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
extern "C"  bool GCHandle_get_IsAllocated_m1058226959 (GCHandle_t3351438187 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
extern "C"  RuntimeObject * GCHandle_get_Target_m1824973883 (GCHandle_t3351438187 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
extern "C"  void GCHandle_Free_m1457699368 (GCHandle_t3351438187 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::Finalize()
extern "C"  void Object_Finalize_m3076187857 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Boolean)
extern "C"  void SerializationInfo_AddValue_m3427199315 (SerializationInfo_t950877179 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.WindowsConsoleDriver::GetStdHandle(System.Handles)
extern "C"  intptr_t WindowsConsoleDriver_GetStdHandle_m23119533 (RuntimeObject * __this /* static, unused */, int32_t ___handle0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.WindowsConsoleDriver::GetConsoleScreenBufferInfo(System.IntPtr,System.ConsoleScreenBufferInfo&)
extern "C"  bool WindowsConsoleDriver_GetConsoleScreenBufferInfo_m3609341087 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, ConsoleScreenBufferInfo_t3095351730 * ___info1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.WindowsConsoleDriver::ReadConsoleInput(System.IntPtr,System.InputRecord&,System.Int32,System.Int32&)
extern "C"  bool WindowsConsoleDriver_ReadConsoleInput_m1790694890 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, InputRecord_t2660212290 * ___record1, int32_t ___length2, int32_t* ___nread3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.Marshal::GetLastWin32Error()
extern "C"  int32_t Marshal_GetLastWin32Error_m1272610344 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C"  void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.WindowsConsoleDriver::IsModifierKey(System.Int16)
extern "C"  bool WindowsConsoleDriver_IsModifierKey_m1974886538 (RuntimeObject * __this /* static, unused */, int16_t ___virtualKeyCode0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ConsoleKeyInfo::.ctor(System.Char,System.ConsoleKey,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void ConsoleKeyInfo__ctor_m535940175 (ConsoleKeyInfo_t1802691652 * __this, Il2CppChar ___keyChar0, int32_t ___key1, bool ___shift2, bool ___alt3, bool ___control4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr XamMac.CoreFoundation.CFHelpers::CFStringGetLength(System.IntPtr)
extern "C"  intptr_t CFHelpers_CFStringGetLength_m1003035781 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IntPtr::op_Explicit(System.IntPtr)
extern "C"  int32_t IntPtr_op_Explicit_m4220076518 (RuntimeObject * __this /* static, unused */, intptr_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr XamMac.CoreFoundation.CFHelpers::CFStringGetCharactersPtr(System.IntPtr)
extern "C"  intptr_t CFHelpers_CFStringGetCharactersPtr_m1790634856 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void XamMac.CoreFoundation.CFHelpers/CFRange::.ctor(System.Int32,System.Int32)
extern "C"  void CFRange__ctor_m1242434219 (CFRange_t1233619878 * __this, int32_t ___loc0, int32_t ___len1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocCoTaskMem(System.Int32)
extern "C"  intptr_t Marshal_AllocCoTaskMem_m1327939722 (RuntimeObject * __this /* static, unused */, int32_t ___cb0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr XamMac.CoreFoundation.CFHelpers::CFStringGetCharacters(System.IntPtr,XamMac.CoreFoundation.CFHelpers/CFRange,System.IntPtr)
extern "C"  intptr_t CFHelpers_CFStringGetCharacters_m1195295518 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, CFRange_t1233619878  ___range1, intptr_t ___buffer2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
extern "C"  void* IntPtr_op_Explicit_m2520637223 (RuntimeObject * __this /* static, unused */, intptr_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char*,System.Int32,System.Int32)
extern "C"  String_t* String_CreateString_m3400201881 (String_t* __this, Il2CppChar* ___value0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
extern "C"  bool IntPtr_op_Inequality_m3063970704 (RuntimeObject * __this /* static, unused */, intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::FreeCoTaskMem(System.IntPtr)
extern "C"  void Marshal_FreeCoTaskMem_m3753155979 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr XamMac.CoreFoundation.CFHelpers::CFDataGetLength(System.IntPtr)
extern "C"  intptr_t CFHelpers_CFDataGetLength_m3730685275 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr XamMac.CoreFoundation.CFHelpers::CFDataGetBytePtr(System.IntPtr)
extern "C"  intptr_t CFHelpers_CFDataGetBytePtr_m1648767664 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
extern "C"  void Marshal_Copy_m1222846562 (RuntimeObject * __this /* static, unused */, intptr_t ___source0, ByteU5BU5D_t4116647657* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
extern "C"  intptr_t IntPtr_op_Explicit_m536245531 (RuntimeObject * __this /* static, unused */, void* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IntPtr::.ctor(System.Int32)
extern "C"  void IntPtr__ctor_m987082960 (intptr_t* __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr XamMac.CoreFoundation.CFHelpers::CFDataCreate(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  intptr_t CFHelpers_CFDataCreate_m3875740957 (RuntimeObject * __this /* static, unused */, intptr_t ___allocator0, intptr_t ___bytes1, intptr_t ___length2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr XamMac.CoreFoundation.CFHelpers::SecCertificateCreateWithData(System.IntPtr,System.IntPtr)
extern "C"  intptr_t CFHelpers_SecCertificateCreateWithData_m1682200427 (RuntimeObject * __this /* static, unused */, intptr_t ___allocator0, intptr_t ___cfData1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void XamMac.CoreFoundation.CFHelpers::CFRelease(System.IntPtr)
extern "C"  void CFHelpers_CFRelease_m3206817372 (RuntimeObject * __this /* static, unused */, intptr_t ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void XamMac.CoreFoundation.CFHelpers/CFRange::.ctor(System.Int64,System.Int64)
extern "C"  void CFRange__ctor_m3401693388 (CFRange_t1233619878 * __this, int64_t ___l0, int64_t ___len1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IntPtr::op_Explicit(System.Int64)
extern "C"  intptr_t IntPtr_op_Explicit_m1593085246 (RuntimeObject * __this /* static, unused */, int64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.TypedReference System.TypedReference::MakeTypedReference(System.Object,System.Reflection.FieldInfo[])
extern "C"  TypedReference_t1491108119  TypedReference_MakeTypedReference_m4218624797 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___target0, FieldInfoU5BU5D_t846150980* ___flds1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypedReference_MakeTypedReference_m4218624797_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IntPtrU5BU5D_t4013366056* V_0 = NULL;
	RuntimeType_t3636489352 * V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeFieldInfo_t4270975280 * V_3 = NULL;
	RuntimeType_t3636489352 * V_4 = NULL;
	RuntimeFieldHandle_t1871169219  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		RuntimeObject * L_0 = ___target0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2833503317, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_000e:
	{
		FieldInfoU5BU5D_t846150980* L_2 = ___flds1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral1131433136, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_001c:
	{
		FieldInfoU5BU5D_t846150980* L_4 = ___flds1;
		NullCheck(L_4);
		if ((((RuntimeArray *)L_4)->max_length))
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_5 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral1539698275, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_6 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6);
	}

IL_0030:
	{
		FieldInfoU5BU5D_t846150980* L_7 = ___flds1;
		NullCheck(L_7);
		V_0 = ((IntPtrU5BU5D_t4013366056*)SZArrayNew(IntPtrU5BU5D_t4013366056_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length))))));
		RuntimeObject * L_8 = ___target0;
		NullCheck(L_8);
		Type_t * L_9 = Object_GetType_m88164663(L_8, /*hidden argument*/NULL);
		V_1 = ((RuntimeType_t3636489352 *)CastclassClass((RuntimeObject*)L_9, RuntimeType_t3636489352_il2cpp_TypeInfo_var));
		V_2 = 0;
		goto IL_011a;
	}

IL_004c:
	{
		FieldInfoU5BU5D_t846150980* L_10 = ___flds1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		FieldInfo_t * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((RuntimeFieldInfo_t4270975280 *)IsInstClass((RuntimeObject*)L_13, RuntimeFieldInfo_t4270975280_il2cpp_TypeInfo_var));
		RuntimeFieldInfo_t4270975280 * L_14 = V_3;
		bool L_15 = FieldInfo_op_Equality_m1841775853(NULL /*static, unused*/, L_14, (FieldInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_006e;
		}
	}
	{
		String_t* L_16 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral1093200707, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_17 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_17, L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17);
	}

IL_006e:
	{
		RuntimeFieldInfo_t4270975280 * L_18 = V_3;
		NullCheck(L_18);
		bool L_19 = FieldInfo_get_IsInitOnly_m930369112(L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_007e;
		}
	}
	{
		RuntimeFieldInfo_t4270975280 * L_20 = V_3;
		NullCheck(L_20);
		bool L_21 = FieldInfo_get_IsStatic_m3482711189(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_008e;
		}
	}

IL_007e:
	{
		String_t* L_22 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral811425263, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_23 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_23, L_22, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23);
	}

IL_008e:
	{
		RuntimeType_t3636489352 * L_24 = V_1;
		RuntimeFieldInfo_t4270975280 * L_25 = V_3;
		NullCheck(L_25);
		RuntimeType_t3636489352 * L_26 = RuntimeFieldInfo_GetDeclaringTypeInternal_m4085033406(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeType_t3636489352_il2cpp_TypeInfo_var);
		bool L_27 = RuntimeType_op_Inequality_m287584116(NULL /*static, unused*/, L_24, L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00ba;
		}
	}
	{
		RuntimeType_t3636489352 * L_28 = V_1;
		RuntimeFieldInfo_t4270975280 * L_29 = V_3;
		NullCheck(L_29);
		RuntimeType_t3636489352 * L_30 = RuntimeFieldInfo_GetDeclaringTypeInternal_m4085033406(L_29, /*hidden argument*/NULL);
		NullCheck(L_28);
		bool L_31 = VirtFuncInvoker1< bool, Type_t * >::Invoke(111 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_28, L_30);
		if (L_31)
		{
			goto IL_00ba;
		}
	}
	{
		String_t* L_32 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral2448392024, /*hidden argument*/NULL);
		MissingMemberException_t1385081665 * L_33 = (MissingMemberException_t1385081665 *)il2cpp_codegen_object_new(MissingMemberException_t1385081665_il2cpp_TypeInfo_var);
		MissingMemberException__ctor_m2571045846(L_33, L_32, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33);
	}

IL_00ba:
	{
		RuntimeFieldInfo_t4270975280 * L_34 = V_3;
		NullCheck(L_34);
		Type_t * L_35 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_34);
		V_4 = ((RuntimeType_t3636489352 *)CastclassClass((RuntimeObject*)L_35, RuntimeType_t3636489352_il2cpp_TypeInfo_var));
		RuntimeType_t3636489352 * L_36 = V_4;
		NullCheck(L_36);
		bool L_37 = Type_get_IsPrimitive_m1114712797(L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_00e0;
		}
	}
	{
		String_t* L_38 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral2994513570, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_39 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_39, L_38, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39);
	}

IL_00e0:
	{
		int32_t L_40 = V_2;
		FieldInfoU5BU5D_t846150980* L_41 = ___flds1;
		NullCheck(L_41);
		if ((((int32_t)L_40) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_41)->max_length)))), (int32_t)1)))))
		{
			goto IL_0101;
		}
	}
	{
		RuntimeType_t3636489352 * L_42 = V_4;
		NullCheck(L_42);
		bool L_43 = Type_get_IsValueType_m3108065642(L_42, /*hidden argument*/NULL);
		if (L_43)
		{
			goto IL_0101;
		}
	}
	{
		String_t* L_44 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral904502574, /*hidden argument*/NULL);
		MissingMemberException_t1385081665 * L_45 = (MissingMemberException_t1385081665 *)il2cpp_codegen_object_new(MissingMemberException_t1385081665_il2cpp_TypeInfo_var);
		MissingMemberException__ctor_m2571045846(L_45, L_44, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_45);
	}

IL_0101:
	{
		IntPtrU5BU5D_t4013366056* L_46 = V_0;
		int32_t L_47 = V_2;
		RuntimeFieldInfo_t4270975280 * L_48 = V_3;
		NullCheck(L_48);
		RuntimeFieldHandle_t1871169219  L_49 = VirtFuncInvoker0< RuntimeFieldHandle_t1871169219  >::Invoke(17 /* System.RuntimeFieldHandle System.Reflection.FieldInfo::get_FieldHandle() */, L_48);
		V_5 = L_49;
		intptr_t L_50 = RuntimeFieldHandle_get_Value_m4138444424((&V_5), /*hidden argument*/NULL);
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_47), (intptr_t)L_50);
		RuntimeType_t3636489352 * L_51 = V_4;
		V_1 = L_51;
		int32_t L_52 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
	}

IL_011a:
	{
		int32_t L_53 = V_2;
		FieldInfoU5BU5D_t846150980* L_54 = ___flds1;
		NullCheck(L_54);
		if ((((int32_t)L_53) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_54)->max_length)))))))
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject * L_55 = ___target0;
		FieldInfoU5BU5D_t846150980* L_56 = ___flds1;
		TypedReference_t1491108119  L_57 = TypedReference_MakeTypedReferenceInternal_m3020709588(NULL /*static, unused*/, L_55, L_56, /*hidden argument*/NULL);
		return L_57;
	}
}
// System.TypedReference System.TypedReference::MakeTypedReferenceInternal(System.Object,System.Reflection.FieldInfo[])
extern "C"  TypedReference_t1491108119  TypedReference_MakeTypedReferenceInternal_m3020709588 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___target0, FieldInfoU5BU5D_t846150980* ___fields1, const RuntimeMethod* method)
{
	typedef TypedReference_t1491108119  (*TypedReference_MakeTypedReferenceInternal_m3020709588_ftn) (RuntimeObject *, FieldInfoU5BU5D_t846150980*);
	using namespace il2cpp::icalls;
	return  ((TypedReference_MakeTypedReferenceInternal_m3020709588_ftn)mscorlib::System::TypedReference::MakeTypedReferenceInternal) (___target0, ___fields1);
}
// System.Int32 System.TypedReference::GetHashCode()
extern "C"  int32_t TypedReference_GetHashCode_m2046447331 (TypedReference_t1491108119 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypedReference_GetHashCode_m2046447331_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_Type_2();
		bool L_1 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (*(TypedReference_t1491108119 *)__this).get_type_0(), /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		return L_3;
	}
}
extern "C"  int32_t TypedReference_GetHashCode_m2046447331_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TypedReference_t1491108119 * _thisAdjusted = reinterpret_cast<TypedReference_t1491108119 *>(__this + 1);
	return TypedReference_GetHashCode_m2046447331(_thisAdjusted, method);
}
// System.Boolean System.TypedReference::Equals(System.Object)
extern "C"  bool TypedReference_Equals_m2034077850 (TypedReference_t1491108119 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypedReference_Equals_m2034077850_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral294131998, /*hidden argument*/NULL);
		NotSupportedException_t1314879016 * L_1 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}
}
extern "C"  bool TypedReference_Equals_m2034077850_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	TypedReference_t1491108119 * _thisAdjusted = reinterpret_cast<TypedReference_t1491108119 *>(__this + 1);
	return TypedReference_Equals_m2034077850(_thisAdjusted, ___o0, method);
}
// System.Boolean System.TypedReference::get_IsNull()
extern "C"  bool TypedReference_get_IsNull_m152722487 (TypedReference_t1491108119 * __this, const RuntimeMethod* method)
{
	{
		intptr_t* L_0 = __this->get_address_of_Value_1();
		bool L_1 = IntPtr_IsNull_m765582262(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		intptr_t* L_2 = __this->get_address_of_Type_2();
		bool L_3 = IntPtr_IsNull_m765582262(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0019:
	{
		return (bool)0;
	}
}
extern "C"  bool TypedReference_get_IsNull_m152722487_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TypedReference_t1491108119 * _thisAdjusted = reinterpret_cast<TypedReference_t1491108119 *>(__this + 1);
	return TypedReference_get_IsNull_m152722487(_thisAdjusted, method);
}
// System.Void System.TypedReference::SetTypedReference(System.TypedReference,System.Object)
extern "C"  void TypedReference_SetTypedReference_m3942604670 (RuntimeObject * __this /* static, unused */, TypedReference_t1491108119  ___target0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypedReference_SetTypedReference_m3942604670_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3095902440(L_0, _stringLiteral1712623819, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.TypeIdentifier System.TypeIdentifiers::FromDisplay(System.String)
extern "C"  RuntimeObject* TypeIdentifiers_FromDisplay_m702141453 (RuntimeObject * __this /* static, unused */, String_t* ___displayName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeIdentifiers_FromDisplay_m702141453_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___displayName0;
		Display_t2029414921 * L_1 = (Display_t2029414921 *)il2cpp_codegen_object_new(Display_t2029414921_il2cpp_TypeInfo_var);
		Display__ctor_m3114182611(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.TypeIdentifier System.TypeIdentifiers::WithoutEscape(System.String)
extern "C"  RuntimeObject* TypeIdentifiers_WithoutEscape_m3903155460 (RuntimeObject * __this /* static, unused */, String_t* ___simpleName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeIdentifiers_WithoutEscape_m3903155460_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___simpleName0;
		NoEscape_t3415473081 * L_1 = (NoEscape_t3415473081 *)il2cpp_codegen_object_new(NoEscape_t3415473081_il2cpp_TypeInfo_var);
		NoEscape__ctor_m3634412810(L_1, L_0, /*hidden argument*/NULL);
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
// System.Void System.TypeIdentifiers/Display::.ctor(System.String)
extern "C"  void Display__ctor_m3114182611 (Display_t2029414921 * __this, String_t* ___displayName0, const RuntimeMethod* method)
{
	{
		ATypeName__ctor_m24968755(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___displayName0;
		__this->set_displayName_0(L_0);
		__this->set_internal_name_1((String_t*)NULL);
		return;
	}
}
// System.String System.TypeIdentifiers/Display::get_DisplayName()
extern "C"  String_t* Display_get_DisplayName_m4289096325 (Display_t2029414921 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_displayName_0();
		return L_0;
	}
}
// System.String System.TypeIdentifiers/Display::get_InternalName()
extern "C"  String_t* Display_get_InternalName_m3566879973 (Display_t2029414921 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_internal_name_1();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_1 = Display_GetInternalName_m1675807520(__this, /*hidden argument*/NULL);
		__this->set_internal_name_1(L_1);
	}

IL_0014:
	{
		String_t* L_2 = __this->get_internal_name_1();
		return L_2;
	}
}
// System.String System.TypeIdentifiers/Display::GetInternalName()
extern "C"  String_t* Display_GetInternalName_m1675807520 (Display_t2029414921 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_displayName_0();
		String_t* L_1 = TypeSpec_UnescapeInternalName_m3192984231(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
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
// System.Void System.TypeIdentifiers/NoEscape::.ctor(System.String)
extern "C"  void NoEscape__ctor_m3634412810 (NoEscape_t3415473081 * __this, String_t* ___simpleName0, const RuntimeMethod* method)
{
	{
		ATypeName__ctor_m24968755(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___simpleName0;
		__this->set_simpleName_0(L_0);
		return;
	}
}
// System.String System.TypeIdentifiers/NoEscape::get_DisplayName()
extern "C"  String_t* NoEscape_get_DisplayName_m3402780039 (NoEscape_t3415473081 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_simpleName_0();
		return L_0;
	}
}
// System.String System.TypeIdentifiers/NoEscape::get_InternalName()
extern "C"  String_t* NoEscape_get_InternalName_m2772763910 (NoEscape_t3415473081 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_simpleName_0();
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
// System.Void System.TypeInitializationException::.ctor()
extern "C"  void TypeInitializationException__ctor_m3284204115 (TypeInitializationException_t2973684290 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeInitializationException__ctor_m3284204115_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral1549451187, /*hidden argument*/NULL);
		SystemException__ctor_m3298527747(__this, L_0, /*hidden argument*/NULL);
		Exception_SetErrorCode_m4269507377(__this, ((int32_t)-2146233036), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.TypeInitializationException::.ctor(System.String,System.Exception)
extern "C"  void TypeInitializationException__ctor_m2019704949 (TypeInitializationException_t2973684290 * __this, String_t* ___fullTypeName0, Exception_t * ___innerException1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeInitializationException__ctor_m2019704949_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		String_t* L_1 = ___fullTypeName0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_1);
		String_t* L_2 = Environment_GetResourceString_m479507158(NULL /*static, unused*/, _stringLiteral4108792180, L_0, /*hidden argument*/NULL);
		Exception_t * L_3 = ___innerException1;
		SystemException__ctor_m4132668650(__this, L_2, L_3, /*hidden argument*/NULL);
		String_t* L_4 = ___fullTypeName0;
		__this->set__typeName_16(L_4);
		Exception_SetErrorCode_m4269507377(__this, ((int32_t)-2146233036), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.TypeInitializationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void TypeInitializationException__ctor_m3546444694 (TypeInitializationException_t2973684290 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeInitializationException__ctor_m3546444694_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		StreamingContext_t3711869237  L_1 = ___context1;
		SystemException__ctor_m1515048899(__this, L_0, L_1, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_2 = ___info0;
		NullCheck(L_2);
		String_t* L_3 = SerializationInfo_GetString_m3155282843(L_2, _stringLiteral472199111, /*hidden argument*/NULL);
		__this->set__typeName_16(L_3);
		return;
	}
}
// System.String System.TypeInitializationException::get_TypeName()
extern "C"  String_t* TypeInitializationException_get_TypeName_m1310207019 (TypeInitializationException_t2973684290 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeInitializationException_get_TypeName_m1310207019_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get__typeName_16();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_1;
	}

IL_000e:
	{
		String_t* L_2 = __this->get__typeName_16();
		return L_2;
	}
}
// System.Void System.TypeInitializationException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void TypeInitializationException_GetObjectData_m583196803 (TypeInitializationException_t2973684290 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeInitializationException_GetObjectData_m583196803_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		StreamingContext_t3711869237  L_1 = ___context1;
		Exception_GetObjectData_m1103241326(__this, L_0, L_1, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_2 = ___info0;
		String_t* L_3 = TypeInitializationException_get_TypeName_m1310207019(__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_4 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		SerializationInfo_AddValue_m3906743584(L_2, _stringLiteral472199111, L_3, L_5, /*hidden argument*/NULL);
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
// System.Void System.TypeLoadException::.ctor()
extern "C"  void TypeLoadException__ctor_m1802671078 (TypeLoadException_t3707937253 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeLoadException__ctor_m1802671078_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral3421862211, /*hidden argument*/NULL);
		SystemException__ctor_m3298527747(__this, L_0, /*hidden argument*/NULL);
		Exception_SetErrorCode_m4269507377(__this, ((int32_t)-2146233054), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.TypeLoadException::.ctor(System.String)
extern "C"  void TypeLoadException__ctor_m2362330792 (TypeLoadException_t3707937253 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		SystemException__ctor_m3298527747(__this, L_0, /*hidden argument*/NULL);
		Exception_SetErrorCode_m4269507377(__this, ((int32_t)-2146233054), /*hidden argument*/NULL);
		return;
	}
}
// System.String System.TypeLoadException::get_Message()
extern "C"  String_t* TypeLoadException_get_Message_m2440738252 (TypeLoadException_t3707937253 * __this, const RuntimeMethod* method)
{
	{
		TypeLoadException_SetMessageField_m1068811921(__this, /*hidden argument*/NULL);
		String_t* L_0 = ((Exception_t *)__this)->get__message_2();
		return L_0;
	}
}
// System.Void System.TypeLoadException::SetMessageField()
extern "C"  void TypeLoadException_SetMessageField_m1068811921 (TypeLoadException_t3707937253 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeLoadException_SetMessageField_m1068811921_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ((Exception_t *)__this)->get__message_2();
		if (L_0)
		{
			goto IL_0084;
		}
	}
	{
		String_t* L_1 = __this->get_ClassName_16();
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_2 = __this->get_ResourceId_19();
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_3 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral3421862211, /*hidden argument*/NULL);
		((Exception_t *)__this)->set__message_2(L_3);
		return;
	}

IL_0029:
	{
		String_t* L_4 = __this->get_AssemblyName_17();
		if (L_4)
		{
			goto IL_0041;
		}
	}
	{
		String_t* L_5 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral639039807, /*hidden argument*/NULL);
		__this->set_AssemblyName_17(L_5);
	}

IL_0041:
	{
		String_t* L_6 = __this->get_ClassName_16();
		if (L_6)
		{
			goto IL_0059;
		}
	}
	{
		String_t* L_7 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral639039807, /*hidden argument*/NULL);
		__this->set_ClassName_16(L_7);
	}

IL_0059:
	{
		V_0 = (String_t*)NULL;
		V_0 = _stringLiteral3913841465;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_8 = CultureInfo_get_CurrentCulture_m1632690660(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_9 = V_0;
		String_t* L_10 = __this->get_ClassName_16();
		String_t* L_11 = __this->get_AssemblyName_17();
		String_t* L_12 = __this->get_MessageArg_18();
		String_t* L_13 = String_Format_m3551144749(NULL /*static, unused*/, L_8, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		((Exception_t *)__this)->set__message_2(L_13);
	}

IL_0084:
	{
		return;
	}
}
// System.Void System.TypeLoadException::.ctor(System.String,System.String)
extern "C"  void TypeLoadException__ctor_m1154572625 (TypeLoadException_t3707937253 * __this, String_t* ___className0, String_t* ___assemblyName1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___className0;
		String_t* L_1 = ___assemblyName1;
		TypeLoadException__ctor_m3671847517(__this, L_0, L_1, (String_t*)NULL, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.TypeLoadException::.ctor(System.String,System.String,System.String,System.Int32)
extern "C"  void TypeLoadException__ctor_m3671847517 (TypeLoadException_t3707937253 * __this, String_t* ___className0, String_t* ___assemblyName1, String_t* ___messageArg2, int32_t ___resourceId3, const RuntimeMethod* method)
{
	{
		SystemException__ctor_m3298527747(__this, (String_t*)NULL, /*hidden argument*/NULL);
		Exception_SetErrorCode_m4269507377(__this, ((int32_t)-2146233054), /*hidden argument*/NULL);
		String_t* L_0 = ___className0;
		__this->set_ClassName_16(L_0);
		String_t* L_1 = ___assemblyName1;
		__this->set_AssemblyName_17(L_1);
		String_t* L_2 = ___messageArg2;
		__this->set_MessageArg_18(L_2);
		int32_t L_3 = ___resourceId3;
		__this->set_ResourceId_19(L_3);
		TypeLoadException_SetMessageField_m1068811921(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.TypeLoadException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void TypeLoadException__ctor_m3040414142 (TypeLoadException_t3707937253 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeLoadException__ctor_m3040414142_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		StreamingContext_t3711869237  L_1 = ___context1;
		SystemException__ctor_m1515048899(__this, L_0, L_1, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_2 = ___info0;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral79347, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_0016:
	{
		SerializationInfo_t950877179 * L_4 = ___info0;
		NullCheck(L_4);
		String_t* L_5 = SerializationInfo_GetString_m3155282843(L_4, _stringLiteral1447332123, /*hidden argument*/NULL);
		__this->set_ClassName_16(L_5);
		SerializationInfo_t950877179 * L_6 = ___info0;
		NullCheck(L_6);
		String_t* L_7 = SerializationInfo_GetString_m3155282843(L_6, _stringLiteral1596726042, /*hidden argument*/NULL);
		__this->set_AssemblyName_17(L_7);
		SerializationInfo_t950877179 * L_8 = ___info0;
		NullCheck(L_8);
		String_t* L_9 = SerializationInfo_GetString_m3155282843(L_8, _stringLiteral2099428946, /*hidden argument*/NULL);
		__this->set_MessageArg_18(L_9);
		SerializationInfo_t950877179 * L_10 = ___info0;
		NullCheck(L_10);
		int32_t L_11 = SerializationInfo_GetInt32_m2640574809(L_10, _stringLiteral2742360254, /*hidden argument*/NULL);
		__this->set_ResourceId_19(L_11);
		return;
	}
}
// System.Void System.TypeLoadException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void TypeLoadException_GetObjectData_m2127700107 (TypeLoadException_t3707937253 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeLoadException_GetObjectData_m2127700107_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral79347, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_000e:
	{
		SerializationInfo_t950877179 * L_2 = ___info0;
		StreamingContext_t3711869237  L_3 = ___context1;
		Exception_GetObjectData_m1103241326(__this, L_2, L_3, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_4 = ___info0;
		String_t* L_5 = __this->get_ClassName_16();
		RuntimeTypeHandle_t3027515415  L_6 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m3906743584(L_4, _stringLiteral1447332123, L_5, L_7, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_8 = ___info0;
		String_t* L_9 = __this->get_AssemblyName_17();
		RuntimeTypeHandle_t3027515415  L_10 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_11 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		SerializationInfo_AddValue_m3906743584(L_8, _stringLiteral1596726042, L_9, L_11, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_12 = ___info0;
		String_t* L_13 = __this->get_MessageArg_18();
		RuntimeTypeHandle_t3027515415  L_14 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_15 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		SerializationInfo_AddValue_m3906743584(L_12, _stringLiteral2099428946, L_13, L_15, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_16 = ___info0;
		int32_t L_17 = __this->get_ResourceId_19();
		NullCheck(L_16);
		SerializationInfo_AddValue_m412754688(L_16, _stringLiteral2742360254, L_17, /*hidden argument*/NULL);
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
// System.Type System.TypeNameParser::GetType(System.String,System.Func`2<System.Reflection.AssemblyName,System.Reflection.Assembly>,System.Func`4<System.Reflection.Assembly,System.String,System.Boolean,System.Type>,System.Boolean,System.Boolean,System.Threading.StackCrawlMark&)
extern "C"  Type_t * TypeNameParser_GetType_m2381193241 (RuntimeObject * __this /* static, unused */, String_t* ___typeName0, Func_2_t464525003 * ___assemblyResolver1, Func_4_t1497230017 * ___typeResolver2, bool ___throwOnError3, bool ___ignoreCase4, int32_t* ___stackMark5, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___typeName0;
		TypeSpec_t1651486824 * L_1 = TypeSpec_Parse_m2141981279(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Func_2_t464525003 * L_2 = ___assemblyResolver1;
		Func_4_t1497230017 * L_3 = ___typeResolver2;
		bool L_4 = ___throwOnError3;
		bool L_5 = ___ignoreCase4;
		NullCheck(L_1);
		Type_t * L_6 = TypeSpec_Resolve_m4214758032(L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.TypeNames/ATypeName::Equals(System.TypeName)
extern "C"  bool ATypeName_Equals_m231522946 (ATypeName_t2426384130 * __this, RuntimeObject* ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ATypeName_Equals_m231522946_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___other0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.TypeNames/ATypeName::get_DisplayName() */, __this);
		RuntimeObject* L_2 = ___other0;
		NullCheck(L_2);
		String_t* L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.TypeName::get_DisplayName() */, TypeName_t433286169_il2cpp_TypeInfo_var, L_2);
		bool L_4 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Int32 System.TypeNames/ATypeName::GetHashCode()
extern "C"  int32_t ATypeName_GetHashCode_m1416933129 (ATypeName_t2426384130 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.TypeNames/ATypeName::get_DisplayName() */, __this);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Boolean System.TypeNames/ATypeName::Equals(System.Object)
extern "C"  bool ATypeName_Equals_m2362229487 (ATypeName_t2426384130 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ATypeName_Equals_m2362229487_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___other0;
		bool L_1 = ATypeName_Equals_m231522946(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_0, TypeName_t433286169_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.TypeNames/ATypeName::.ctor()
extern "C"  void ATypeName__ctor_m24968755 (ATypeName_t2426384130 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Boolean System.TypeSpec::get_HasModifiers()
extern "C"  bool TypeSpec_get_HasModifiers_m1981244987 (TypeSpec_t1651486824 * __this, const RuntimeMethod* method)
{
	{
		List_1_t1546471780 * L_0 = __this->get_modifier_spec_4();
		return (bool)((!(((RuntimeObject*)(List_1_t1546471780 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.String System.TypeSpec::GetDisplayFullName(System.TypeSpec/DisplayNameFormat)
extern "C"  String_t* TypeSpec_GetDisplayFullName_m468926262 (TypeSpec_t1651486824 * __this, int32_t ___flags0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeSpec_GetDisplayFullName_m468926262_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	StringBuilder_t * V_2 = NULL;
	Enumerator_t2065703332  V_3;
	memset(&V_3, 0, sizeof(V_3));
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___flags0;
		V_0 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)1))) <= ((uint32_t)0)))? 1 : 0);
		int32_t L_1 = ___flags0;
		V_1 = (bool)((((int32_t)((int32_t)((int32_t)L_1&(int32_t)2))) == ((int32_t)0))? 1 : 0);
		RuntimeObject* L_2 = __this->get_name_0();
		NullCheck(L_2);
		String_t* L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.TypeName::get_DisplayName() */, TypeName_t433286169_il2cpp_TypeInfo_var, L_2);
		StringBuilder_t * L_4 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2989139009(L_4, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		List_1_t176459455 * L_5 = __this->get_nested_2();
		if (!L_5)
		{
			goto IL_006c;
		}
	}
	{
		List_1_t176459455 * L_6 = __this->get_nested_2();
		NullCheck(L_6);
		Enumerator_t2065703332  L_7 = List_1_GetEnumerator_m912078294(L_6, /*hidden argument*/List_1_GetEnumerator_m912078294_RuntimeMethod_var);
		V_3 = L_7;
	}

IL_0033:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0053;
		}

IL_0035:
		{
			RuntimeObject* L_8 = Enumerator_get_Current_m719689252((&V_3), /*hidden argument*/Enumerator_get_Current_m719689252_RuntimeMethod_var);
			V_4 = L_8;
			StringBuilder_t * L_9 = V_2;
			NullCheck(L_9);
			StringBuilder_t * L_10 = StringBuilder_Append_m2383614642(L_9, ((int32_t)43), /*hidden argument*/NULL);
			RuntimeObject* L_11 = V_4;
			NullCheck(L_11);
			String_t* L_12 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.TypeName::get_DisplayName() */, TypeName_t433286169_il2cpp_TypeInfo_var, L_11);
			NullCheck(L_10);
			StringBuilder_Append_m1965104174(L_10, L_12, /*hidden argument*/NULL);
		}

IL_0053:
		{
			bool L_13 = Enumerator_MoveNext_m664374857((&V_3), /*hidden argument*/Enumerator_MoveNext_m664374857_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0035;
			}
		}

IL_005c:
		{
			IL2CPP_LEAVE(0x6C, FINALLY_005e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005e;
	}

FINALLY_005e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2167990708((&V_3), /*hidden argument*/Enumerator_Dispose_m2167990708_RuntimeMethod_var);
		IL2CPP_END_FINALLY(94)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(94)
	{
		IL2CPP_JUMP_TBL(0x6C, IL_006c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006c:
	{
		List_1_t3123561566 * L_14 = __this->get_generic_params_3();
		if (!L_14)
		{
			goto IL_010a;
		}
	}
	{
		StringBuilder_t * L_15 = V_2;
		NullCheck(L_15);
		StringBuilder_Append_m2383614642(L_15, ((int32_t)91), /*hidden argument*/NULL);
		V_5 = 0;
		goto IL_00f2;
	}

IL_0085:
	{
		int32_t L_16 = V_5;
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_0096;
		}
	}
	{
		StringBuilder_t * L_17 = V_2;
		NullCheck(L_17);
		StringBuilder_Append_m1965104174(L_17, _stringLiteral3450517380, /*hidden argument*/NULL);
	}

IL_0096:
	{
		List_1_t3123561566 * L_18 = __this->get_generic_params_3();
		int32_t L_19 = V_5;
		NullCheck(L_18);
		TypeSpec_t1651486824 * L_20 = List_1_get_Item_m2892042586(L_18, L_19, /*hidden argument*/List_1_get_Item_m2892042586_RuntimeMethod_var);
		NullCheck(L_20);
		String_t* L_21 = L_20->get_assembly_name_1();
		if (!L_21)
		{
			goto IL_00d3;
		}
	}
	{
		StringBuilder_t * L_22 = V_2;
		NullCheck(L_22);
		StringBuilder_t * L_23 = StringBuilder_Append_m2383614642(L_22, ((int32_t)91), /*hidden argument*/NULL);
		List_1_t3123561566 * L_24 = __this->get_generic_params_3();
		int32_t L_25 = V_5;
		NullCheck(L_24);
		TypeSpec_t1651486824 * L_26 = List_1_get_Item_m2892042586(L_24, L_25, /*hidden argument*/List_1_get_Item_m2892042586_RuntimeMethod_var);
		NullCheck(L_26);
		String_t* L_27 = TypeSpec_get_DisplayFullName_m1782066599(L_26, /*hidden argument*/NULL);
		NullCheck(L_23);
		StringBuilder_t * L_28 = StringBuilder_Append_m1965104174(L_23, L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		StringBuilder_Append_m2383614642(L_28, ((int32_t)93), /*hidden argument*/NULL);
		goto IL_00ec;
	}

IL_00d3:
	{
		StringBuilder_t * L_29 = V_2;
		List_1_t3123561566 * L_30 = __this->get_generic_params_3();
		int32_t L_31 = V_5;
		NullCheck(L_30);
		TypeSpec_t1651486824 * L_32 = List_1_get_Item_m2892042586(L_30, L_31, /*hidden argument*/List_1_get_Item_m2892042586_RuntimeMethod_var);
		NullCheck(L_32);
		String_t* L_33 = TypeSpec_get_DisplayFullName_m1782066599(L_32, /*hidden argument*/NULL);
		NullCheck(L_29);
		StringBuilder_Append_m1965104174(L_29, L_33, /*hidden argument*/NULL);
	}

IL_00ec:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00f2:
	{
		int32_t L_35 = V_5;
		List_1_t3123561566 * L_36 = __this->get_generic_params_3();
		NullCheck(L_36);
		int32_t L_37 = List_1_get_Count_m4271156924(L_36, /*hidden argument*/List_1_get_Count_m4271156924_RuntimeMethod_var);
		if ((((int32_t)L_35) < ((int32_t)L_37)))
		{
			goto IL_0085;
		}
	}
	{
		StringBuilder_t * L_38 = V_2;
		NullCheck(L_38);
		StringBuilder_Append_m2383614642(L_38, ((int32_t)93), /*hidden argument*/NULL);
	}

IL_010a:
	{
		bool L_39 = V_1;
		if (!L_39)
		{
			goto IL_0115;
		}
	}
	{
		StringBuilder_t * L_40 = V_2;
		TypeSpec_GetModifierString_m1917884674(__this, L_40, /*hidden argument*/NULL);
	}

IL_0115:
	{
		String_t* L_41 = __this->get_assembly_name_1();
		bool L_42 = V_0;
		if (!((int32_t)((int32_t)((!(((RuntimeObject*)(String_t*)L_41) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)&(int32_t)L_42)))
		{
			goto IL_0139;
		}
	}
	{
		StringBuilder_t * L_43 = V_2;
		NullCheck(L_43);
		StringBuilder_t * L_44 = StringBuilder_Append_m1965104174(L_43, _stringLiteral3450517380, /*hidden argument*/NULL);
		String_t* L_45 = __this->get_assembly_name_1();
		NullCheck(L_44);
		StringBuilder_Append_m1965104174(L_44, L_45, /*hidden argument*/NULL);
	}

IL_0139:
	{
		StringBuilder_t * L_46 = V_2;
		NullCheck(L_46);
		String_t* L_47 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_46);
		return L_47;
	}
}
// System.Text.StringBuilder System.TypeSpec::GetModifierString(System.Text.StringBuilder)
extern "C"  StringBuilder_t * TypeSpec_GetModifierString_m1917884674 (TypeSpec_t1651486824 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeSpec_GetModifierString_m1917884674_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t3435715657  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t1546471780 * L_0 = __this->get_modifier_spec_4();
		if (!L_0)
		{
			goto IL_003d;
		}
	}
	{
		List_1_t1546471780 * L_1 = __this->get_modifier_spec_4();
		NullCheck(L_1);
		Enumerator_t3435715657  L_2 = List_1_GetEnumerator_m3070018697(L_1, /*hidden argument*/List_1_GetEnumerator_m3070018697_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0024;
		}

IL_0016:
		{
			RuntimeObject* L_3 = Enumerator_get_Current_m4128062465((&V_0), /*hidden argument*/Enumerator_get_Current_m4128062465_RuntimeMethod_var);
			StringBuilder_t * L_4 = ___sb0;
			NullCheck(L_3);
			InterfaceFuncInvoker1< StringBuilder_t *, StringBuilder_t * >::Invoke(1 /* System.Text.StringBuilder System.ModifierSpec::Append(System.Text.StringBuilder) */, ModifierSpec_t74397038_il2cpp_TypeInfo_var, L_3, L_4);
		}

IL_0024:
		{
			bool L_5 = Enumerator_MoveNext_m3779760751((&V_0), /*hidden argument*/Enumerator_MoveNext_m3779760751_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0016;
			}
		}

IL_002d:
		{
			IL2CPP_LEAVE(0x3D, FINALLY_002f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002f;
	}

FINALLY_002f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2103495514((&V_0), /*hidden argument*/Enumerator_Dispose_m2103495514_RuntimeMethod_var);
		IL2CPP_END_FINALLY(47)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(47)
	{
		IL2CPP_JUMP_TBL(0x3D, IL_003d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003d:
	{
		bool L_6 = __this->get_is_byref_5();
		if (!L_6)
		{
			goto IL_004e;
		}
	}
	{
		StringBuilder_t * L_7 = ___sb0;
		NullCheck(L_7);
		StringBuilder_Append_m2383614642(L_7, ((int32_t)38), /*hidden argument*/NULL);
	}

IL_004e:
	{
		StringBuilder_t * L_8 = ___sb0;
		return L_8;
	}
}
// System.String System.TypeSpec::get_DisplayFullName()
extern "C"  String_t* TypeSpec_get_DisplayFullName_m1782066599 (TypeSpec_t1651486824 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_display_fullname_6();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_1 = TypeSpec_GetDisplayFullName_m468926262(__this, 0, /*hidden argument*/NULL);
		__this->set_display_fullname_6(L_1);
	}

IL_0015:
	{
		String_t* L_2 = __this->get_display_fullname_6();
		return L_2;
	}
}
// System.TypeSpec System.TypeSpec::Parse(System.String)
extern "C"  TypeSpec_t1651486824 * TypeSpec_Parse_m2141981279 (RuntimeObject * __this /* static, unused */, String_t* ___typeName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeSpec_Parse_m2141981279_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TypeSpec_t1651486824 * G_B4_0 = NULL;
	TypeSpec_t1651486824 * G_B3_0 = NULL;
	{
		V_0 = 0;
		String_t* L_0 = ___typeName0;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral472198183, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0010:
	{
		String_t* L_2 = ___typeName0;
		TypeSpec_t1651486824 * L_3 = TypeSpec_Parse_m520729350(NULL /*static, unused*/, L_2, (&V_0), (bool)0, (bool)1, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		String_t* L_5 = ___typeName0;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m3847582255(L_5, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		if ((((int32_t)L_4) >= ((int32_t)L_6)))
		{
			G_B4_0 = L_3;
			goto IL_0033;
		}
	}
	{
		ArgumentException_t132251570 * L_7 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_7, _stringLiteral2960085349, _stringLiteral472198183, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7);
	}

IL_0033:
	{
		return G_B4_0;
	}
}
// System.String System.TypeSpec::UnescapeInternalName(System.String)
extern "C"  String_t* TypeSpec_UnescapeInternalName_m3192984231 (RuntimeObject * __this /* static, unused */, String_t* ___displayName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeSpec_UnescapeInternalName_m3192984231_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		String_t* L_0 = ___displayName0;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m3847582255(L_0, /*hidden argument*/NULL);
		StringBuilder_t * L_2 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2367297767(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_003e;
	}

IL_0010:
	{
		String_t* L_3 = ___displayName0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		Il2CppChar L_5 = String_get_Chars_m2986988803(L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		Il2CppChar L_6 = V_2;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_7 = V_1;
		int32_t L_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		V_1 = L_8;
		String_t* L_9 = ___displayName0;
		NullCheck(L_9);
		int32_t L_10 = String_get_Length_m3847582255(L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_8) >= ((int32_t)L_10)))
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_11 = ___displayName0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		Il2CppChar L_13 = String_get_Chars_m2986988803(L_11, L_12, /*hidden argument*/NULL);
		V_2 = L_13;
	}

IL_0032:
	{
		StringBuilder_t * L_14 = V_0;
		Il2CppChar L_15 = V_2;
		NullCheck(L_14);
		StringBuilder_Append_m2383614642(L_14, L_15, /*hidden argument*/NULL);
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_003e:
	{
		int32_t L_17 = V_1;
		String_t* L_18 = ___displayName0;
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_m3847582255(L_18, /*hidden argument*/NULL);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0010;
		}
	}
	{
		StringBuilder_t * L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		return L_21;
	}
}
// System.Type System.TypeSpec::Resolve(System.Func`2<System.Reflection.AssemblyName,System.Reflection.Assembly>,System.Func`4<System.Reflection.Assembly,System.String,System.Boolean,System.Type>,System.Boolean,System.Boolean)
extern "C"  Type_t * TypeSpec_Resolve_m4214758032 (TypeSpec_t1651486824 * __this, Func_2_t464525003 * ___assemblyResolver0, Func_4_t1497230017 * ___typeResolver1, bool ___throwOnError2, bool ___ignoreCase3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeSpec_Resolve_m4214758032_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Assembly_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	Enumerator_t2065703332  V_2;
	memset(&V_2, 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	Type_t * V_4 = NULL;
	Type_t * V_5 = NULL;
	TypeU5BU5D_t3940880105* V_6 = NULL;
	int32_t V_7 = 0;
	Type_t * V_8 = NULL;
	Enumerator_t3435715657  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (Assembly_t *)NULL;
		Func_2_t464525003 * L_0 = ___assemblyResolver0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Func_4_t1497230017 * L_1 = ___typeResolver1;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_2 = TypeSpec_get_DisplayFullName_m1782066599(__this, /*hidden argument*/NULL);
		bool L_3 = ___throwOnError2;
		bool L_4 = ___ignoreCase3;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_m3971160356, L_2, L_3, L_4, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089");
		return L_5;
	}

IL_0017:
	{
		String_t* L_6 = __this->get_assembly_name_1();
		if (!L_6)
		{
			goto IL_006b;
		}
	}
	{
		Func_2_t464525003 * L_7 = ___assemblyResolver0;
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		Func_2_t464525003 * L_8 = ___assemblyResolver0;
		String_t* L_9 = __this->get_assembly_name_1();
		AssemblyName_t270931938 * L_10 = (AssemblyName_t270931938 *)il2cpp_codegen_object_new(AssemblyName_t270931938_il2cpp_TypeInfo_var);
		AssemblyName__ctor_m1866830415(L_10, L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Assembly_t * L_11 = Func_2_Invoke_m567693240(L_8, L_10, /*hidden argument*/Func_2_Invoke_m567693240_RuntimeMethod_var);
		V_0 = L_11;
		goto IL_0042;
	}

IL_0036:
	{
		String_t* L_12 = __this->get_assembly_name_1();
		Assembly_t * L_13 = Assembly_Load_m3487507613(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
	}

IL_0042:
	{
		Assembly_t * L_14 = V_0;
		bool L_15 = Assembly_op_Equality_m3828289814(NULL /*static, unused*/, L_14, (Assembly_t *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_006b;
		}
	}
	{
		bool L_16 = ___throwOnError2;
		if (!L_16)
		{
			goto IL_0069;
		}
	}
	{
		String_t* L_17 = __this->get_assembly_name_1();
		String_t* L_18 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral206095476, L_17, _stringLiteral3452614521, /*hidden argument*/NULL);
		FileNotFoundException_t225391025 * L_19 = (FileNotFoundException_t225391025 *)il2cpp_codegen_object_new(FileNotFoundException_t225391025_il2cpp_TypeInfo_var);
		FileNotFoundException__ctor_m3252664930(L_19, L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19);
	}

IL_0069:
	{
		return (Type_t *)NULL;
	}

IL_006b:
	{
		V_1 = (Type_t *)NULL;
		Func_4_t1497230017 * L_20 = ___typeResolver1;
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		Func_4_t1497230017 * L_21 = ___typeResolver1;
		Assembly_t * L_22 = V_0;
		RuntimeObject* L_23 = __this->get_name_0();
		NullCheck(L_23);
		String_t* L_24 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.TypeName::get_DisplayName() */, TypeName_t433286169_il2cpp_TypeInfo_var, L_23);
		bool L_25 = ___ignoreCase3;
		NullCheck(L_21);
		Type_t * L_26 = Func_4_Invoke_m3884166673(L_21, L_22, L_24, L_25, /*hidden argument*/Func_4_Invoke_m3884166673_RuntimeMethod_var);
		V_1 = L_26;
		goto IL_009c;
	}

IL_0087:
	{
		Assembly_t * L_27 = V_0;
		RuntimeObject* L_28 = __this->get_name_0();
		NullCheck(L_28);
		String_t* L_29 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.TypeName::get_DisplayName() */, TypeName_t433286169_il2cpp_TypeInfo_var, L_28);
		bool L_30 = ___ignoreCase3;
		NullCheck(L_27);
		Type_t * L_31 = VirtFuncInvoker3< Type_t *, String_t*, bool, bool >::Invoke(26 /* System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean,System.Boolean) */, L_27, L_29, (bool)0, L_30);
		V_1 = L_31;
	}

IL_009c:
	{
		Type_t * L_32 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_33 = Type_op_Equality_m2683486427(NULL /*static, unused*/, L_32, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00c5;
		}
	}
	{
		bool L_34 = ___throwOnError2;
		if (!L_34)
		{
			goto IL_00c3;
		}
	}
	{
		RuntimeObject* L_35 = __this->get_name_0();
		String_t* L_36 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral3983059074, L_35, _stringLiteral3452614521, /*hidden argument*/NULL);
		TypeLoadException_t3707937253 * L_37 = (TypeLoadException_t3707937253 *)il2cpp_codegen_object_new(TypeLoadException_t3707937253_il2cpp_TypeInfo_var);
		TypeLoadException__ctor_m2362330792(L_37, L_36, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37);
	}

IL_00c3:
	{
		return (Type_t *)NULL;
	}

IL_00c5:
	{
		List_1_t176459455 * L_38 = __this->get_nested_2();
		if (!L_38)
		{
			goto IL_013a;
		}
	}
	{
		List_1_t176459455 * L_39 = __this->get_nested_2();
		NullCheck(L_39);
		Enumerator_t2065703332  L_40 = List_1_GetEnumerator_m912078294(L_39, /*hidden argument*/List_1_GetEnumerator_m912078294_RuntimeMethod_var);
		V_2 = L_40;
	}

IL_00d9:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0121;
		}

IL_00db:
		{
			RuntimeObject* L_41 = Enumerator_get_Current_m719689252((&V_2), /*hidden argument*/Enumerator_get_Current_m719689252_RuntimeMethod_var);
			V_3 = L_41;
			Type_t * L_42 = V_1;
			RuntimeObject* L_43 = V_3;
			NullCheck(L_43);
			String_t* L_44 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.TypeName::get_DisplayName() */, TypeName_t433286169_il2cpp_TypeInfo_var, L_43);
			NullCheck(L_42);
			Type_t * L_45 = VirtFuncInvoker2< Type_t *, String_t*, int32_t >::Invoke(57 /* System.Type System.Type::GetNestedType(System.String,System.Reflection.BindingFlags) */, L_42, L_44, ((int32_t)48));
			V_4 = L_45;
			Type_t * L_46 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			bool L_47 = Type_op_Equality_m2683486427(NULL /*static, unused*/, L_46, (Type_t *)NULL, /*hidden argument*/NULL);
			if (!L_47)
			{
				goto IL_011e;
			}
		}

IL_00fd:
		{
			bool L_48 = ___throwOnError2;
			if (!L_48)
			{
				goto IL_0116;
			}
		}

IL_0100:
		{
			RuntimeObject* L_49 = V_3;
			String_t* L_50 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral3983059074, L_49, _stringLiteral3452614521, /*hidden argument*/NULL);
			TypeLoadException_t3707937253 * L_51 = (TypeLoadException_t3707937253 *)il2cpp_codegen_object_new(TypeLoadException_t3707937253_il2cpp_TypeInfo_var);
			TypeLoadException__ctor_m2362330792(L_51, L_50, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_51);
		}

IL_0116:
		{
			V_5 = (Type_t *)NULL;
			IL2CPP_LEAVE(0x218, FINALLY_012c);
		}

IL_011e:
		{
			Type_t * L_52 = V_4;
			V_1 = L_52;
		}

IL_0121:
		{
			bool L_53 = Enumerator_MoveNext_m664374857((&V_2), /*hidden argument*/Enumerator_MoveNext_m664374857_RuntimeMethod_var);
			if (L_53)
			{
				goto IL_00db;
			}
		}

IL_012a:
		{
			IL2CPP_LEAVE(0x13A, FINALLY_012c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_012c;
	}

FINALLY_012c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2167990708((&V_2), /*hidden argument*/Enumerator_Dispose_m2167990708_RuntimeMethod_var);
		IL2CPP_END_FINALLY(300)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(300)
	{
		IL2CPP_JUMP_TBL(0x218, IL_0218)
		IL2CPP_JUMP_TBL(0x13A, IL_013a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_013a:
	{
		List_1_t3123561566 * L_54 = __this->get_generic_params_3();
		if (!L_54)
		{
			goto IL_01c9;
		}
	}
	{
		List_1_t3123561566 * L_55 = __this->get_generic_params_3();
		NullCheck(L_55);
		int32_t L_56 = List_1_get_Count_m4271156924(L_55, /*hidden argument*/List_1_get_Count_m4271156924_RuntimeMethod_var);
		V_6 = ((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)L_56));
		V_7 = 0;
		goto IL_01b8;
	}

IL_015c:
	{
		List_1_t3123561566 * L_57 = __this->get_generic_params_3();
		int32_t L_58 = V_7;
		NullCheck(L_57);
		TypeSpec_t1651486824 * L_59 = List_1_get_Item_m2892042586(L_57, L_58, /*hidden argument*/List_1_get_Item_m2892042586_RuntimeMethod_var);
		Func_2_t464525003 * L_60 = ___assemblyResolver0;
		Func_4_t1497230017 * L_61 = ___typeResolver1;
		bool L_62 = ___throwOnError2;
		bool L_63 = ___ignoreCase3;
		NullCheck(L_59);
		Type_t * L_64 = TypeSpec_Resolve_m4214758032(L_59, L_60, L_61, L_62, L_63, /*hidden argument*/NULL);
		V_8 = L_64;
		Type_t * L_65 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_66 = Type_op_Equality_m2683486427(NULL /*static, unused*/, L_65, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_66)
		{
			goto IL_01ab;
		}
	}
	{
		bool L_67 = ___throwOnError2;
		if (!L_67)
		{
			goto IL_01a9;
		}
	}
	{
		List_1_t3123561566 * L_68 = __this->get_generic_params_3();
		int32_t L_69 = V_7;
		NullCheck(L_68);
		TypeSpec_t1651486824 * L_70 = List_1_get_Item_m2892042586(L_68, L_69, /*hidden argument*/List_1_get_Item_m2892042586_RuntimeMethod_var);
		NullCheck(L_70);
		RuntimeObject* L_71 = L_70->get_name_0();
		String_t* L_72 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral3983059074, L_71, _stringLiteral3452614521, /*hidden argument*/NULL);
		TypeLoadException_t3707937253 * L_73 = (TypeLoadException_t3707937253 *)il2cpp_codegen_object_new(TypeLoadException_t3707937253_il2cpp_TypeInfo_var);
		TypeLoadException__ctor_m2362330792(L_73, L_72, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_73);
	}

IL_01a9:
	{
		return (Type_t *)NULL;
	}

IL_01ab:
	{
		TypeU5BU5D_t3940880105* L_74 = V_6;
		int32_t L_75 = V_7;
		Type_t * L_76 = V_8;
		NullCheck(L_74);
		ArrayElementTypeCheck (L_74, L_76);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(L_75), (Type_t *)L_76);
		int32_t L_77 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)1));
	}

IL_01b8:
	{
		int32_t L_78 = V_7;
		TypeU5BU5D_t3940880105* L_79 = V_6;
		NullCheck(L_79);
		if ((((int32_t)L_78) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_79)->max_length)))))))
		{
			goto IL_015c;
		}
	}
	{
		Type_t * L_80 = V_1;
		TypeU5BU5D_t3940880105* L_81 = V_6;
		NullCheck(L_80);
		Type_t * L_82 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t3940880105* >::Invoke(98 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_80, L_81);
		V_1 = L_82;
	}

IL_01c9:
	{
		List_1_t1546471780 * L_83 = __this->get_modifier_spec_4();
		if (!L_83)
		{
			goto IL_0207;
		}
	}
	{
		List_1_t1546471780 * L_84 = __this->get_modifier_spec_4();
		NullCheck(L_84);
		Enumerator_t3435715657  L_85 = List_1_GetEnumerator_m3070018697(L_84, /*hidden argument*/List_1_GetEnumerator_m3070018697_RuntimeMethod_var);
		V_9 = L_85;
	}

IL_01de:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01ee;
		}

IL_01e0:
		{
			RuntimeObject* L_86 = Enumerator_get_Current_m4128062465((&V_9), /*hidden argument*/Enumerator_get_Current_m4128062465_RuntimeMethod_var);
			Type_t * L_87 = V_1;
			NullCheck(L_86);
			Type_t * L_88 = InterfaceFuncInvoker1< Type_t *, Type_t * >::Invoke(0 /* System.Type System.ModifierSpec::Resolve(System.Type) */, ModifierSpec_t74397038_il2cpp_TypeInfo_var, L_86, L_87);
			V_1 = L_88;
		}

IL_01ee:
		{
			bool L_89 = Enumerator_MoveNext_m3779760751((&V_9), /*hidden argument*/Enumerator_MoveNext_m3779760751_RuntimeMethod_var);
			if (L_89)
			{
				goto IL_01e0;
			}
		}

IL_01f7:
		{
			IL2CPP_LEAVE(0x207, FINALLY_01f9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01f9;
	}

FINALLY_01f9:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2103495514((&V_9), /*hidden argument*/Enumerator_Dispose_m2103495514_RuntimeMethod_var);
		IL2CPP_END_FINALLY(505)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(505)
	{
		IL2CPP_JUMP_TBL(0x207, IL_0207)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0207:
	{
		bool L_90 = __this->get_is_byref_5();
		if (!L_90)
		{
			goto IL_0216;
		}
	}
	{
		Type_t * L_91 = V_1;
		NullCheck(L_91);
		Type_t * L_92 = VirtFuncInvoker0< Type_t * >::Invoke(20 /* System.Type System.Type::MakeByRefType() */, L_91);
		V_1 = L_92;
	}

IL_0216:
	{
		Type_t * L_93 = V_1;
		return L_93;
	}

IL_0218:
	{
		Type_t * L_94 = V_5;
		return L_94;
	}
}
// System.Void System.TypeSpec::AddName(System.String)
extern "C"  void TypeSpec_AddName_m2260684595 (TypeSpec_t1651486824 * __this, String_t* ___type_name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeSpec_AddName_m2260684595_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_name_0();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_1 = ___type_name0;
		RuntimeObject* L_2 = TypeSpec_ParsedTypeIdentifier_m1301895364(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->set_name_0(L_2);
		return;
	}

IL_0015:
	{
		List_1_t176459455 * L_3 = __this->get_nested_2();
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		List_1_t176459455 * L_4 = (List_1_t176459455 *)il2cpp_codegen_object_new(List_1_t176459455_il2cpp_TypeInfo_var);
		List_1__ctor_m2197792278(L_4, /*hidden argument*/List_1__ctor_m2197792278_RuntimeMethod_var);
		__this->set_nested_2(L_4);
	}

IL_0028:
	{
		List_1_t176459455 * L_5 = __this->get_nested_2();
		String_t* L_6 = ___type_name0;
		RuntimeObject* L_7 = TypeSpec_ParsedTypeIdentifier_m1301895364(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		List_1_Add_m1829376775(L_5, L_7, /*hidden argument*/List_1_Add_m1829376775_RuntimeMethod_var);
		return;
	}
}
// System.Void System.TypeSpec::AddModifier(System.ModifierSpec)
extern "C"  void TypeSpec_AddModifier_m4214585389 (TypeSpec_t1651486824 * __this, RuntimeObject* ___md0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeSpec_AddModifier_m4214585389_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t1546471780 * L_0 = __this->get_modifier_spec_4();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		List_1_t1546471780 * L_1 = (List_1_t1546471780 *)il2cpp_codegen_object_new(List_1_t1546471780_il2cpp_TypeInfo_var);
		List_1__ctor_m1369486050(L_1, /*hidden argument*/List_1__ctor_m1369486050_RuntimeMethod_var);
		__this->set_modifier_spec_4(L_1);
	}

IL_0013:
	{
		List_1_t1546471780 * L_2 = __this->get_modifier_spec_4();
		RuntimeObject* L_3 = ___md0;
		NullCheck(L_2);
		List_1_Add_m3002018067(L_2, L_3, /*hidden argument*/List_1_Add_m3002018067_RuntimeMethod_var);
		return;
	}
}
// System.Void System.TypeSpec::SkipSpace(System.String,System.Int32&)
extern "C"  void TypeSpec_SkipSpace_m814955084 (RuntimeObject * __this /* static, unused */, String_t* ___name0, int32_t* ___pos1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeSpec_SkipSpace_m814955084_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___pos1;
		V_0 = (*((int32_t*)L_0));
		goto IL_0009;
	}

IL_0005:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
	}

IL_0009:
	{
		int32_t L_2 = V_0;
		String_t* L_3 = ___name0;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m3847582255(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_2) >= ((int32_t)L_4)))
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_5 = ___name0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Il2CppChar L_7 = String_get_Chars_m2986988803(L_5, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_8 = Char_IsWhiteSpace_m2148390798(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0005;
		}
	}

IL_0020:
	{
		int32_t* L_9 = ___pos1;
		int32_t L_10 = V_0;
		*((int32_t*)(L_9)) = (int32_t)L_10;
		return;
	}
}
// System.Void System.TypeSpec::BoundCheck(System.Int32,System.String)
extern "C"  void TypeSpec_BoundCheck_m765121887 (RuntimeObject * __this /* static, unused */, int32_t ___idx0, String_t* ___s1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeSpec_BoundCheck_m765121887_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___idx0;
		String_t* L_1 = ___s1;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m3847582255(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}
	{
		ArgumentException_t132251570 * L_3 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_3, _stringLiteral3050366658, _stringLiteral472198183, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_0019:
	{
		return;
	}
}
// System.TypeIdentifier System.TypeSpec::ParsedTypeIdentifier(System.String)
extern "C"  RuntimeObject* TypeSpec_ParsedTypeIdentifier_m1301895364 (RuntimeObject * __this /* static, unused */, String_t* ___displayName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___displayName0;
		RuntimeObject* L_1 = TypeIdentifiers_FromDisplay_m702141453(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.TypeSpec System.TypeSpec::Parse(System.String,System.Int32&,System.Boolean,System.Boolean)
extern "C"  TypeSpec_t1651486824 * TypeSpec_Parse_m520729350 (RuntimeObject * __this /* static, unused */, String_t* ___name0, int32_t* ___p1, bool ___is_recurse2, bool ___allow_aqn3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeSpec_Parse_m520729350_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	TypeSpec_t1651486824 * V_3 = NULL;
	Il2CppChar V_4 = 0x0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	List_1_t3123561566 * V_7 = NULL;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	{
		int32_t* L_0 = ___p1;
		V_0 = (*((int32_t*)L_0));
		V_2 = (bool)0;
		TypeSpec_t1651486824 * L_1 = (TypeSpec_t1651486824 *)il2cpp_codegen_object_new(TypeSpec_t1651486824_il2cpp_TypeInfo_var);
		TypeSpec__ctor_m1488198768(L_1, /*hidden argument*/NULL);
		V_3 = L_1;
		String_t* L_2 = ___name0;
		TypeSpec_SkipSpace_m814955084(NULL /*static, unused*/, L_2, (&V_0), /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		V_1 = L_3;
		goto IL_00dd;
	}

IL_001a:
	{
		String_t* L_4 = ___name0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppChar L_6 = String_get_Chars_m2986988803(L_4, L_5, /*hidden argument*/NULL);
		V_4 = L_6;
		Il2CppChar L_7 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)38))))
		{
			case 0:
			{
				goto IL_0098;
			}
			case 1:
			{
				goto IL_00d6;
			}
			case 2:
			{
				goto IL_00d6;
			}
			case 3:
			{
				goto IL_00d6;
			}
			case 4:
			{
				goto IL_0098;
			}
			case 5:
			{
				goto IL_0061;
			}
			case 6:
			{
				goto IL_0077;
			}
		}
	}
	{
		Il2CppChar L_8 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)91))))
		{
			case 0:
			{
				goto IL_0098;
			}
			case 1:
			{
				goto IL_00d2;
			}
			case 2:
			{
				goto IL_0077;
			}
		}
	}
	{
		goto IL_00d6;
	}

IL_0061:
	{
		TypeSpec_t1651486824 * L_9 = V_3;
		String_t* L_10 = ___name0;
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck(L_10);
		String_t* L_14 = String_Substring_m1610150815(L_10, L_11, ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)L_13)), /*hidden argument*/NULL);
		NullCheck(L_9);
		TypeSpec_AddName_m2260684595(L_9, L_14, /*hidden argument*/NULL);
		int32_t L_15 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		goto IL_00d6;
	}

IL_0077:
	{
		TypeSpec_t1651486824 * L_16 = V_3;
		String_t* L_17 = ___name0;
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		NullCheck(L_17);
		String_t* L_21 = String_Substring_m1610150815(L_17, L_18, ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)L_20)), /*hidden argument*/NULL);
		NullCheck(L_16);
		TypeSpec_AddName_m2260684595(L_16, L_21, /*hidden argument*/NULL);
		int32_t L_22 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
		V_2 = (bool)1;
		bool L_23 = ___is_recurse2;
		if (!L_23)
		{
			goto IL_00d6;
		}
	}
	{
		bool L_24 = ___allow_aqn3;
		if (L_24)
		{
			goto IL_00d6;
		}
	}
	{
		int32_t* L_25 = ___p1;
		int32_t L_26 = V_0;
		*((int32_t*)(L_25)) = (int32_t)L_26;
		TypeSpec_t1651486824 * L_27 = V_3;
		return L_27;
	}

IL_0098:
	{
		String_t* L_28 = ___name0;
		int32_t L_29 = V_0;
		NullCheck(L_28);
		Il2CppChar L_30 = String_get_Chars_m2986988803(L_28, L_29, /*hidden argument*/NULL);
		bool L_31 = ___is_recurse2;
		if (!((int32_t)((int32_t)((((int32_t)((((int32_t)L_30) == ((int32_t)((int32_t)91)))? 1 : 0)) == ((int32_t)0))? 1 : 0)&(int32_t)L_31)))
		{
			goto IL_00ba;
		}
	}
	{
		ArgumentException_t132251570 * L_32 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_32, _stringLiteral1539731671, _stringLiteral472198183, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32);
	}

IL_00ba:
	{
		TypeSpec_t1651486824 * L_33 = V_3;
		String_t* L_34 = ___name0;
		int32_t L_35 = V_1;
		int32_t L_36 = V_0;
		int32_t L_37 = V_1;
		NullCheck(L_34);
		String_t* L_38 = String_Substring_m1610150815(L_34, L_35, ((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)L_37)), /*hidden argument*/NULL);
		NullCheck(L_33);
		TypeSpec_AddName_m2260684595(L_33, L_38, /*hidden argument*/NULL);
		int32_t L_39 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
		V_2 = (bool)1;
		goto IL_00d6;
	}

IL_00d2:
	{
		int32_t L_40 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_00d6:
	{
		bool L_41 = V_2;
		if (L_41)
		{
			goto IL_00e9;
		}
	}
	{
		int32_t L_42 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
	}

IL_00dd:
	{
		int32_t L_43 = V_0;
		String_t* L_44 = ___name0;
		NullCheck(L_44);
		int32_t L_45 = String_get_Length_m3847582255(L_44, /*hidden argument*/NULL);
		if ((((int32_t)L_43) < ((int32_t)L_45)))
		{
			goto IL_001a;
		}
	}

IL_00e9:
	{
		int32_t L_46 = V_1;
		int32_t L_47 = V_0;
		if ((((int32_t)L_46) >= ((int32_t)L_47)))
		{
			goto IL_00fd;
		}
	}
	{
		TypeSpec_t1651486824 * L_48 = V_3;
		String_t* L_49 = ___name0;
		int32_t L_50 = V_1;
		int32_t L_51 = V_0;
		int32_t L_52 = V_1;
		NullCheck(L_49);
		String_t* L_53 = String_Substring_m1610150815(L_49, L_50, ((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)L_52)), /*hidden argument*/NULL);
		NullCheck(L_48);
		TypeSpec_AddName_m2260684595(L_48, L_53, /*hidden argument*/NULL);
	}

IL_00fd:
	{
		bool L_54 = V_2;
		if (!L_54)
		{
			goto IL_04ff;
		}
	}
	{
		goto IL_04f3;
	}

IL_0108:
	{
		String_t* L_55 = ___name0;
		int32_t L_56 = V_0;
		NullCheck(L_55);
		Il2CppChar L_57 = String_get_Chars_m2986988803(L_55, L_56, /*hidden argument*/NULL);
		V_4 = L_57;
		Il2CppChar L_58 = V_4;
		if ((!(((uint32_t)L_58) <= ((uint32_t)((int32_t)42)))))
		{
			goto IL_0128;
		}
	}
	{
		Il2CppChar L_59 = V_4;
		if ((((int32_t)L_59) == ((int32_t)((int32_t)38))))
		{
			goto IL_0148;
		}
	}
	{
		Il2CppChar L_60 = V_4;
		if ((((int32_t)L_60) == ((int32_t)((int32_t)42))))
		{
			goto IL_016c;
		}
	}
	{
		goto IL_04ad;
	}

IL_0128:
	{
		Il2CppChar L_61 = V_4;
		if ((((int32_t)L_61) == ((int32_t)((int32_t)44))))
		{
			goto IL_01bd;
		}
	}
	{
		Il2CppChar L_62 = V_4;
		if ((((int32_t)L_62) == ((int32_t)((int32_t)91))))
		{
			goto IL_0246;
		}
	}
	{
		Il2CppChar L_63 = V_4;
		if ((((int32_t)L_63) == ((int32_t)((int32_t)93))))
		{
			goto IL_0495;
		}
	}
	{
		goto IL_04ad;
	}

IL_0148:
	{
		TypeSpec_t1651486824 * L_64 = V_3;
		NullCheck(L_64);
		bool L_65 = L_64->get_is_byref_5();
		if (!L_65)
		{
			goto IL_0160;
		}
	}
	{
		ArgumentException_t132251570 * L_66 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_66, _stringLiteral1704964031, _stringLiteral472198183, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_66);
	}

IL_0160:
	{
		TypeSpec_t1651486824 * L_67 = V_3;
		NullCheck(L_67);
		L_67->set_is_byref_5((bool)1);
		goto IL_04ef;
	}

IL_016c:
	{
		TypeSpec_t1651486824 * L_68 = V_3;
		NullCheck(L_68);
		bool L_69 = L_68->get_is_byref_5();
		if (!L_69)
		{
			goto IL_0184;
		}
	}
	{
		ArgumentException_t132251570 * L_70 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_70, _stringLiteral1906112489, _stringLiteral472198183, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_70);
	}

IL_0184:
	{
		V_5 = 1;
		goto IL_0193;
	}

IL_0189:
	{
		int32_t L_71 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)1));
		int32_t L_72 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1));
	}

IL_0193:
	{
		int32_t L_73 = V_0;
		String_t* L_74 = ___name0;
		NullCheck(L_74);
		int32_t L_75 = String_get_Length_m3847582255(L_74, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)1))) >= ((int32_t)L_75)))
		{
			goto IL_01ab;
		}
	}
	{
		String_t* L_76 = ___name0;
		int32_t L_77 = V_0;
		NullCheck(L_76);
		Il2CppChar L_78 = String_get_Chars_m2986988803(L_76, ((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_78) == ((int32_t)((int32_t)42))))
		{
			goto IL_0189;
		}
	}

IL_01ab:
	{
		TypeSpec_t1651486824 * L_79 = V_3;
		int32_t L_80 = V_5;
		PointerSpec_t334147946 * L_81 = (PointerSpec_t334147946 *)il2cpp_codegen_object_new(PointerSpec_t334147946_il2cpp_TypeInfo_var);
		PointerSpec__ctor_m1621035005(L_81, L_80, /*hidden argument*/NULL);
		NullCheck(L_79);
		TypeSpec_AddModifier_m4214585389(L_79, L_81, /*hidden argument*/NULL);
		goto IL_04ef;
	}

IL_01bd:
	{
		bool L_82 = ___is_recurse2;
		bool L_83 = ___allow_aqn3;
		if (!((int32_t)((int32_t)L_82&(int32_t)L_83)))
		{
			goto IL_0218;
		}
	}
	{
		int32_t L_84 = V_0;
		V_6 = L_84;
		goto IL_01cd;
	}

IL_01c7:
	{
		int32_t L_85 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1));
	}

IL_01cd:
	{
		int32_t L_86 = V_6;
		String_t* L_87 = ___name0;
		NullCheck(L_87);
		int32_t L_88 = String_get_Length_m3847582255(L_87, /*hidden argument*/NULL);
		if ((((int32_t)L_86) >= ((int32_t)L_88)))
		{
			goto IL_01e3;
		}
	}
	{
		String_t* L_89 = ___name0;
		int32_t L_90 = V_6;
		NullCheck(L_89);
		Il2CppChar L_91 = String_get_Chars_m2986988803(L_89, L_90, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_91) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_01c7;
		}
	}

IL_01e3:
	{
		int32_t L_92 = V_6;
		String_t* L_93 = ___name0;
		NullCheck(L_93);
		int32_t L_94 = String_get_Length_m3847582255(L_93, /*hidden argument*/NULL);
		if ((((int32_t)L_92) < ((int32_t)L_94)))
		{
			goto IL_01f8;
		}
	}
	{
		ArgumentException_t132251570 * L_95 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_95, _stringLiteral2020129663, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_95);
	}

IL_01f8:
	{
		TypeSpec_t1651486824 * L_96 = V_3;
		String_t* L_97 = ___name0;
		int32_t L_98 = V_0;
		int32_t L_99 = V_6;
		int32_t L_100 = V_0;
		NullCheck(L_97);
		String_t* L_101 = String_Substring_m1610150815(L_97, ((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_99, (int32_t)L_100)), (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_101);
		String_t* L_102 = String_Trim_m923598732(L_101, /*hidden argument*/NULL);
		NullCheck(L_96);
		L_96->set_assembly_name_1(L_102);
		int32_t* L_103 = ___p1;
		int32_t L_104 = V_6;
		*((int32_t*)(L_103)) = (int32_t)L_104;
		TypeSpec_t1651486824 * L_105 = V_3;
		return L_105;
	}

IL_0218:
	{
		bool L_106 = ___is_recurse2;
		if (!L_106)
		{
			goto IL_0220;
		}
	}
	{
		int32_t* L_107 = ___p1;
		int32_t L_108 = V_0;
		*((int32_t*)(L_107)) = (int32_t)L_108;
		TypeSpec_t1651486824 * L_109 = V_3;
		return L_109;
	}

IL_0220:
	{
		bool L_110 = ___allow_aqn3;
		if (!L_110)
		{
			goto IL_04ef;
		}
	}
	{
		TypeSpec_t1651486824 * L_111 = V_3;
		String_t* L_112 = ___name0;
		int32_t L_113 = V_0;
		NullCheck(L_112);
		String_t* L_114 = String_Substring_m2848979100(L_112, ((int32_t)il2cpp_codegen_add((int32_t)L_113, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_114);
		String_t* L_115 = String_Trim_m923598732(L_114, /*hidden argument*/NULL);
		NullCheck(L_111);
		L_111->set_assembly_name_1(L_115);
		String_t* L_116 = ___name0;
		NullCheck(L_116);
		int32_t L_117 = String_get_Length_m3847582255(L_116, /*hidden argument*/NULL);
		V_0 = L_117;
		goto IL_04ef;
	}

IL_0246:
	{
		TypeSpec_t1651486824 * L_118 = V_3;
		NullCheck(L_118);
		bool L_119 = L_118->get_is_byref_5();
		if (!L_119)
		{
			goto IL_025e;
		}
	}
	{
		ArgumentException_t132251570 * L_120 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_120, _stringLiteral1531991302, _stringLiteral472198183, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_120);
	}

IL_025e:
	{
		int32_t L_121 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_121, (int32_t)1));
		int32_t L_122 = V_0;
		String_t* L_123 = ___name0;
		NullCheck(L_123);
		int32_t L_124 = String_get_Length_m3847582255(L_123, /*hidden argument*/NULL);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_027b;
		}
	}
	{
		ArgumentException_t132251570 * L_125 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_125, _stringLiteral3306332718, _stringLiteral472198183, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_125);
	}

IL_027b:
	{
		String_t* L_126 = ___name0;
		TypeSpec_SkipSpace_m814955084(NULL /*static, unused*/, L_126, (&V_0), /*hidden argument*/NULL);
		String_t* L_127 = ___name0;
		int32_t L_128 = V_0;
		NullCheck(L_127);
		Il2CppChar L_129 = String_get_Chars_m2986988803(L_127, L_128, /*hidden argument*/NULL);
		if ((((int32_t)L_129) == ((int32_t)((int32_t)44))))
		{
			goto IL_03c4;
		}
	}
	{
		String_t* L_130 = ___name0;
		int32_t L_131 = V_0;
		NullCheck(L_130);
		Il2CppChar L_132 = String_get_Chars_m2986988803(L_130, L_131, /*hidden argument*/NULL);
		if ((((int32_t)L_132) == ((int32_t)((int32_t)42))))
		{
			goto IL_03c4;
		}
	}
	{
		String_t* L_133 = ___name0;
		int32_t L_134 = V_0;
		NullCheck(L_133);
		Il2CppChar L_135 = String_get_Chars_m2986988803(L_133, L_134, /*hidden argument*/NULL);
		if ((((int32_t)L_135) == ((int32_t)((int32_t)93))))
		{
			goto IL_03c4;
		}
	}
	{
		List_1_t3123561566 * L_136 = (List_1_t3123561566 *)il2cpp_codegen_object_new(List_1_t3123561566_il2cpp_TypeInfo_var);
		List_1__ctor_m1318629066(L_136, /*hidden argument*/List_1__ctor_m1318629066_RuntimeMethod_var);
		V_7 = L_136;
		TypeSpec_t1651486824 * L_137 = V_3;
		NullCheck(L_137);
		bool L_138 = TypeSpec_get_HasModifiers_m1981244987(L_137, /*hidden argument*/NULL);
		if (!L_138)
		{
			goto IL_0387;
		}
	}
	{
		ArgumentException_t132251570 * L_139 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_139, _stringLiteral2586657123, _stringLiteral472198183, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_139);
	}

IL_02cf:
	{
		String_t* L_140 = ___name0;
		TypeSpec_SkipSpace_m814955084(NULL /*static, unused*/, L_140, (&V_0), /*hidden argument*/NULL);
		String_t* L_141 = ___name0;
		int32_t L_142 = V_0;
		NullCheck(L_141);
		Il2CppChar L_143 = String_get_Chars_m2986988803(L_141, L_142, /*hidden argument*/NULL);
		V_8 = (bool)((((int32_t)L_143) == ((int32_t)((int32_t)91)))? 1 : 0);
		bool L_144 = V_8;
		if (!L_144)
		{
			goto IL_02ec;
		}
	}
	{
		int32_t L_145 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_145, (int32_t)1));
	}

IL_02ec:
	{
		List_1_t3123561566 * L_146 = V_7;
		String_t* L_147 = ___name0;
		bool L_148 = V_8;
		TypeSpec_t1651486824 * L_149 = TypeSpec_Parse_m520729350(NULL /*static, unused*/, L_147, (&V_0), (bool)1, L_148, /*hidden argument*/NULL);
		NullCheck(L_146);
		List_1_Add_m1314727163(L_146, L_149, /*hidden argument*/List_1_Add_m1314727163_RuntimeMethod_var);
		int32_t L_150 = V_0;
		String_t* L_151 = ___name0;
		TypeSpec_BoundCheck_m765121887(NULL /*static, unused*/, L_150, L_151, /*hidden argument*/NULL);
		bool L_152 = V_8;
		if (!L_152)
		{
			goto IL_0346;
		}
	}
	{
		String_t* L_153 = ___name0;
		int32_t L_154 = V_0;
		NullCheck(L_153);
		Il2CppChar L_155 = String_get_Chars_m2986988803(L_153, L_154, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_155) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_031a;
		}
	}
	{
		int32_t L_156 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_156, (int32_t)1));
		goto IL_033f;
	}

IL_031a:
	{
		String_t* L_157 = ___name0;
		int32_t L_158 = V_0;
		NullCheck(L_157);
		Il2CppChar L_159 = String_get_Chars_m2986988803(L_157, L_158, /*hidden argument*/NULL);
		V_4 = L_159;
		String_t* L_160 = Char_ToString_m3588025615((&V_4), /*hidden argument*/NULL);
		String_t* L_161 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral4034930068, L_160, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_162 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_162, L_161, _stringLiteral472198183, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_162);
	}

IL_033f:
	{
		int32_t L_163 = V_0;
		String_t* L_164 = ___name0;
		TypeSpec_BoundCheck_m765121887(NULL /*static, unused*/, L_163, L_164, /*hidden argument*/NULL);
	}

IL_0346:
	{
		String_t* L_165 = ___name0;
		int32_t L_166 = V_0;
		NullCheck(L_165);
		Il2CppChar L_167 = String_get_Chars_m2986988803(L_165, L_166, /*hidden argument*/NULL);
		if ((((int32_t)L_167) == ((int32_t)((int32_t)93))))
		{
			goto IL_0393;
		}
	}
	{
		String_t* L_168 = ___name0;
		int32_t L_169 = V_0;
		NullCheck(L_168);
		Il2CppChar L_170 = String_get_Chars_m2986988803(L_168, L_169, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_170) == ((uint32_t)((int32_t)44)))))
		{
			goto IL_0362;
		}
	}
	{
		int32_t L_171 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_171, (int32_t)1));
		goto IL_0387;
	}

IL_0362:
	{
		String_t* L_172 = ___name0;
		int32_t L_173 = V_0;
		NullCheck(L_172);
		Il2CppChar L_174 = String_get_Chars_m2986988803(L_172, L_173, /*hidden argument*/NULL);
		V_4 = L_174;
		String_t* L_175 = Char_ToString_m3588025615((&V_4), /*hidden argument*/NULL);
		String_t* L_176 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3326185772, L_175, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_177 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_177, L_176, _stringLiteral472198183, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_177);
	}

IL_0387:
	{
		int32_t L_178 = V_0;
		String_t* L_179 = ___name0;
		NullCheck(L_179);
		int32_t L_180 = String_get_Length_m3847582255(L_179, /*hidden argument*/NULL);
		if ((((int32_t)L_178) < ((int32_t)L_180)))
		{
			goto IL_02cf;
		}
	}

IL_0393:
	{
		int32_t L_181 = V_0;
		String_t* L_182 = ___name0;
		NullCheck(L_182);
		int32_t L_183 = String_get_Length_m3847582255(L_182, /*hidden argument*/NULL);
		if ((((int32_t)L_181) >= ((int32_t)L_183)))
		{
			goto IL_03a7;
		}
	}
	{
		String_t* L_184 = ___name0;
		int32_t L_185 = V_0;
		NullCheck(L_184);
		Il2CppChar L_186 = String_get_Chars_m2986988803(L_184, L_185, /*hidden argument*/NULL);
		if ((((int32_t)L_186) == ((int32_t)((int32_t)93))))
		{
			goto IL_03b7;
		}
	}

IL_03a7:
	{
		ArgumentException_t132251570 * L_187 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_187, _stringLiteral2188758489, _stringLiteral472198183, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_187);
	}

IL_03b7:
	{
		TypeSpec_t1651486824 * L_188 = V_3;
		List_1_t3123561566 * L_189 = V_7;
		NullCheck(L_188);
		L_188->set_generic_params_3(L_189);
		goto IL_04ef;
	}

IL_03c4:
	{
		V_9 = 1;
		V_10 = (bool)0;
		goto IL_0432;
	}

IL_03cc:
	{
		String_t* L_190 = ___name0;
		int32_t L_191 = V_0;
		NullCheck(L_190);
		Il2CppChar L_192 = String_get_Chars_m2986988803(L_190, L_191, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_192) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_03f0;
		}
	}
	{
		bool L_193 = V_10;
		if (!L_193)
		{
			goto IL_03eb;
		}
	}
	{
		ArgumentException_t132251570 * L_194 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_194, _stringLiteral44963236, _stringLiteral472198183, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_194);
	}

IL_03eb:
	{
		V_10 = (bool)1;
		goto IL_0426;
	}

IL_03f0:
	{
		String_t* L_195 = ___name0;
		int32_t L_196 = V_0;
		NullCheck(L_195);
		Il2CppChar L_197 = String_get_Chars_m2986988803(L_195, L_196, /*hidden argument*/NULL);
		if ((((int32_t)L_197) == ((int32_t)((int32_t)44))))
		{
			goto IL_0420;
		}
	}
	{
		String_t* L_198 = ___name0;
		int32_t L_199 = V_0;
		NullCheck(L_198);
		Il2CppChar L_200 = String_get_Chars_m2986988803(L_198, L_199, /*hidden argument*/NULL);
		V_4 = L_200;
		String_t* L_201 = Char_ToString_m3588025615((&V_4), /*hidden argument*/NULL);
		String_t* L_202 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral763880081, L_201, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_203 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_203, L_202, _stringLiteral472198183, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_203);
	}

IL_0420:
	{
		int32_t L_204 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_204, (int32_t)1));
	}

IL_0426:
	{
		int32_t L_205 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_205, (int32_t)1));
		String_t* L_206 = ___name0;
		TypeSpec_SkipSpace_m814955084(NULL /*static, unused*/, L_206, (&V_0), /*hidden argument*/NULL);
	}

IL_0432:
	{
		int32_t L_207 = V_0;
		String_t* L_208 = ___name0;
		NullCheck(L_208);
		int32_t L_209 = String_get_Length_m3847582255(L_208, /*hidden argument*/NULL);
		if ((((int32_t)L_207) >= ((int32_t)L_209)))
		{
			goto IL_0446;
		}
	}
	{
		String_t* L_210 = ___name0;
		int32_t L_211 = V_0;
		NullCheck(L_210);
		Il2CppChar L_212 = String_get_Chars_m2986988803(L_210, L_211, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_212) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_03cc;
		}
	}

IL_0446:
	{
		int32_t L_213 = V_0;
		String_t* L_214 = ___name0;
		NullCheck(L_214);
		int32_t L_215 = String_get_Length_m3847582255(L_214, /*hidden argument*/NULL);
		if ((((int32_t)L_213) >= ((int32_t)L_215)))
		{
			goto IL_045a;
		}
	}
	{
		String_t* L_216 = ___name0;
		int32_t L_217 = V_0;
		NullCheck(L_216);
		Il2CppChar L_218 = String_get_Chars_m2986988803(L_216, L_217, /*hidden argument*/NULL);
		if ((((int32_t)L_218) == ((int32_t)((int32_t)93))))
		{
			goto IL_046a;
		}
	}

IL_045a:
	{
		ArgumentException_t132251570 * L_219 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_219, _stringLiteral142097342, _stringLiteral472198183, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_219);
	}

IL_046a:
	{
		int32_t L_220 = V_9;
		bool L_221 = V_10;
		if (!((int32_t)((int32_t)((((int32_t)L_220) > ((int32_t)1))? 1 : 0)&(int32_t)L_221)))
		{
			goto IL_0484;
		}
	}
	{
		ArgumentException_t132251570 * L_222 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_222, _stringLiteral2081618272, _stringLiteral472198183, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_222);
	}

IL_0484:
	{
		TypeSpec_t1651486824 * L_223 = V_3;
		int32_t L_224 = V_9;
		bool L_225 = V_10;
		ArraySpec_t3456100556 * L_226 = (ArraySpec_t3456100556 *)il2cpp_codegen_object_new(ArraySpec_t3456100556_il2cpp_TypeInfo_var);
		ArraySpec__ctor_m2106938459(L_226, L_224, L_225, /*hidden argument*/NULL);
		NullCheck(L_223);
		TypeSpec_AddModifier_m4214585389(L_223, L_226, /*hidden argument*/NULL);
		goto IL_04ef;
	}

IL_0495:
	{
		bool L_227 = ___is_recurse2;
		if (!L_227)
		{
			goto IL_049d;
		}
	}
	{
		int32_t* L_228 = ___p1;
		int32_t L_229 = V_0;
		*((int32_t*)(L_228)) = (int32_t)L_229;
		TypeSpec_t1651486824 * L_230 = V_3;
		return L_230;
	}

IL_049d:
	{
		ArgumentException_t132251570 * L_231 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_231, _stringLiteral3851281273, _stringLiteral472198183, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_231);
	}

IL_04ad:
	{
		ObjectU5BU5D_t2843939325* L_232 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		NullCheck(L_232);
		ArrayElementTypeCheck (L_232, _stringLiteral2897310011);
		(L_232)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral2897310011);
		ObjectU5BU5D_t2843939325* L_233 = L_232;
		String_t* L_234 = ___name0;
		int32_t L_235 = V_0;
		NullCheck(L_234);
		Il2CppChar L_236 = String_get_Chars_m2986988803(L_234, L_235, /*hidden argument*/NULL);
		V_4 = L_236;
		String_t* L_237 = Char_ToString_m3588025615((&V_4), /*hidden argument*/NULL);
		NullCheck(L_233);
		ArrayElementTypeCheck (L_233, L_237);
		(L_233)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_237);
		ObjectU5BU5D_t2843939325* L_238 = L_233;
		NullCheck(L_238);
		ArrayElementTypeCheck (L_238, _stringLiteral2160565876);
		(L_238)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral2160565876);
		ObjectU5BU5D_t2843939325* L_239 = L_238;
		int32_t L_240 = V_0;
		int32_t L_241 = L_240;
		RuntimeObject * L_242 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_241);
		NullCheck(L_239);
		ArrayElementTypeCheck (L_239, L_242);
		(L_239)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_242);
		String_t* L_243 = String_Concat_m2971454694(NULL /*static, unused*/, L_239, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_244 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_244, L_243, _stringLiteral472198183, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_244);
	}

IL_04ef:
	{
		int32_t L_245 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_245, (int32_t)1));
	}

IL_04f3:
	{
		int32_t L_246 = V_0;
		String_t* L_247 = ___name0;
		NullCheck(L_247);
		int32_t L_248 = String_get_Length_m3847582255(L_247, /*hidden argument*/NULL);
		if ((((int32_t)L_246) < ((int32_t)L_248)))
		{
			goto IL_0108;
		}
	}

IL_04ff:
	{
		int32_t* L_249 = ___p1;
		int32_t L_250 = V_0;
		*((int32_t*)(L_249)) = (int32_t)L_250;
		TypeSpec_t1651486824 * L_251 = V_3;
		return L_251;
	}
}
// System.Void System.TypeSpec::.ctor()
extern "C"  void TypeSpec__ctor_m1488198768 (TypeSpec_t1651486824 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Int32 System.UInt16::CompareTo(System.Object)
extern "C"  int32_t UInt16_CompareTo_m2664746316 (uint16_t* __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_CompareTo_m2664746316_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, UInt16_t2177724958_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject * L_2 = ___value0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)(*((uint16_t*)__this)), (int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_2, UInt16_t2177724958_il2cpp_TypeInfo_var))))));
	}

IL_0017:
	{
		String_t* L_3 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral2004762616, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_4 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4);
	}
}
extern "C"  int32_t UInt16_CompareTo_m2664746316_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_CompareTo_m2664746316(_thisAdjusted, ___value0, method);
}
// System.Int32 System.UInt16::CompareTo(System.UInt16)
extern "C"  int32_t UInt16_CompareTo_m243264328 (uint16_t* __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)(*((uint16_t*)__this)), (int32_t)L_0));
	}
}
extern "C"  int32_t UInt16_CompareTo_m243264328_AdjustorThunk (RuntimeObject * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_CompareTo_m243264328(_thisAdjusted, ___value0, method);
}
// System.Boolean System.UInt16::Equals(System.Object)
extern "C"  bool UInt16_Equals_m642257745 (uint16_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_Equals_m642257745_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, UInt16_t2177724958_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject * L_1 = ___obj0;
		return (bool)((((int32_t)(*((uint16_t*)__this))) == ((int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_1, UInt16_t2177724958_il2cpp_TypeInfo_var))))))? 1 : 0);
	}
}
extern "C"  bool UInt16_Equals_m642257745_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_Equals_m642257745(_thisAdjusted, ___obj0, method);
}
// System.Boolean System.UInt16::Equals(System.UInt16)
extern "C"  bool UInt16_Equals_m3755275785 (uint16_t* __this, uint16_t ___obj0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___obj0;
		return (bool)((((int32_t)(*((uint16_t*)__this))) == ((int32_t)L_0))? 1 : 0);
	}
}
extern "C"  bool UInt16_Equals_m3755275785_AdjustorThunk (RuntimeObject * __this, uint16_t ___obj0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_Equals_m3755275785(_thisAdjusted, ___obj0, method);
}
// System.Int32 System.UInt16::GetHashCode()
extern "C"  int32_t UInt16_GetHashCode_m329858256 (uint16_t* __this, const RuntimeMethod* method)
{
	{
		return (*((uint16_t*)__this));
	}
}
extern "C"  int32_t UInt16_GetHashCode_m329858256_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_GetHashCode_m329858256(_thisAdjusted, method);
}
// System.String System.UInt16::ToString()
extern "C"  String_t* UInt16_ToString_m355311020 (uint16_t* __this, const RuntimeMethod* method)
{
	{
		NumberFormatInfo_t435877138 * L_0 = NumberFormatInfo_get_CurrentInfo_m2605582008(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = Number_FormatUInt32_m2486347252(NULL /*static, unused*/, (*((uint16_t*)__this)), (String_t*)NULL, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  String_t* UInt16_ToString_m355311020_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_ToString_m355311020(_thisAdjusted, method);
}
// System.String System.UInt16::ToString(System.IFormatProvider)
extern "C"  String_t* UInt16_ToString_m3020002356 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___provider0;
		NumberFormatInfo_t435877138 * L_1 = NumberFormatInfo_GetInstance_m2833078205(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		String_t* L_2 = Number_FormatUInt32_m2486347252(NULL /*static, unused*/, (*((uint16_t*)__this)), (String_t*)NULL, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
extern "C"  String_t* UInt16_ToString_m3020002356_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_ToString_m3020002356(_thisAdjusted, ___provider0, method);
}
// System.String System.UInt16::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* UInt16_ToString_m760649087 (uint16_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___format0;
		RuntimeObject* L_1 = ___provider1;
		NumberFormatInfo_t435877138 * L_2 = NumberFormatInfo_GetInstance_m2833078205(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		String_t* L_3 = Number_FormatUInt32_m2486347252(NULL /*static, unused*/, (*((uint16_t*)__this)), L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
extern "C"  String_t* UInt16_ToString_m760649087_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_ToString_m760649087(_thisAdjusted, ___format0, ___provider1, method);
}
// System.UInt16 System.UInt16::Parse(System.String,System.IFormatProvider)
extern "C"  uint16_t UInt16_Parse_m1613088384 (RuntimeObject * __this /* static, unused */, String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		RuntimeObject* L_1 = ___provider1;
		NumberFormatInfo_t435877138 * L_2 = NumberFormatInfo_GetInstance_m2833078205(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		uint16_t L_3 = UInt16_Parse_m583993245(NULL /*static, unused*/, L_0, 7, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.UInt16 System.UInt16::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C"  uint16_t UInt16_Parse_m3476925403 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___style1;
		NumberFormatInfo_ValidateParseStyleInteger_m957858295(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___s0;
		int32_t L_2 = ___style1;
		RuntimeObject* L_3 = ___provider2;
		NumberFormatInfo_t435877138 * L_4 = NumberFormatInfo_GetInstance_m2833078205(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		uint16_t L_5 = UInt16_Parse_m583993245(NULL /*static, unused*/, L_1, L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.UInt16 System.UInt16::Parse(System.String,System.Globalization.NumberStyles,System.Globalization.NumberFormatInfo)
extern "C"  uint16_t UInt16_Parse_m583993245 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___style1, NumberFormatInfo_t435877138 * ___info2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_Parse_m583993245_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	OverflowException_t2020128637 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = 0;
	}

IL_0002:
	try
	{ // begin try (depth: 1)
		String_t* L_0 = ___s0;
		int32_t L_1 = ___style1;
		NumberFormatInfo_t435877138 * L_2 = ___info2;
		uint32_t L_3 = Number_ParseUInt32_m4237573864(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_001f;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (OverflowException_t2020128637_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_000d;
		throw e;
	}

CATCH_000d:
	{ // begin catch(System.OverflowException)
		V_1 = ((OverflowException_t2020128637 *)__exception_local);
		String_t* L_4 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral2348539160, /*hidden argument*/NULL);
		OverflowException_t2020128637 * L_5 = V_1;
		OverflowException_t2020128637 * L_6 = (OverflowException_t2020128637 *)il2cpp_codegen_object_new(OverflowException_t2020128637_il2cpp_TypeInfo_var);
		OverflowException__ctor_m2524654454(L_6, L_4, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6);
	} // end catch (depth: 1)

IL_001f:
	{
		uint32_t L_7 = V_0;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)65535)))))
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_8 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral2348539160, /*hidden argument*/NULL);
		OverflowException_t2020128637 * L_9 = (OverflowException_t2020128637 *)il2cpp_codegen_object_new(OverflowException_t2020128637_il2cpp_TypeInfo_var);
		OverflowException__ctor_m694321376(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9);
	}

IL_0037:
	{
		uint32_t L_10 = V_0;
		return (uint16_t)(((int32_t)((uint16_t)L_10)));
	}
}
// System.Boolean System.UInt16::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.UInt16&)
extern "C"  bool UInt16_TryParse_m3193697465 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, uint16_t* ___result3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___style1;
		NumberFormatInfo_ValidateParseStyleInteger_m957858295(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___s0;
		int32_t L_2 = ___style1;
		RuntimeObject* L_3 = ___provider2;
		NumberFormatInfo_t435877138 * L_4 = NumberFormatInfo_GetInstance_m2833078205(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		uint16_t* L_5 = ___result3;
		bool L_6 = UInt16_TryParse_m861109300(NULL /*static, unused*/, L_1, L_2, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean System.UInt16::TryParse(System.String,System.Globalization.NumberStyles,System.Globalization.NumberFormatInfo,System.UInt16&)
extern "C"  bool UInt16_TryParse_m861109300 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___style1, NumberFormatInfo_t435877138 * ___info2, uint16_t* ___result3, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint16_t* L_0 = ___result3;
		*((int16_t*)(L_0)) = (int16_t)0;
		String_t* L_1 = ___s0;
		int32_t L_2 = ___style1;
		NumberFormatInfo_t435877138 * L_3 = ___info2;
		bool L_4 = Number_TryParseUInt32_m2802499845(NULL /*static, unused*/, L_1, L_2, L_3, (&V_0), /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		uint32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) > ((uint32_t)((int32_t)65535)))))
		{
			goto IL_001b;
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		uint16_t* L_6 = ___result3;
		uint32_t L_7 = V_0;
		*((int16_t*)(L_6)) = (int16_t)(((int32_t)((uint16_t)L_7)));
		return (bool)1;
	}
}
// System.TypeCode System.UInt16::GetTypeCode()
extern "C"  int32_t UInt16_GetTypeCode_m2741181841 (uint16_t* __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(8);
	}
}
extern "C"  int32_t UInt16_GetTypeCode_m2741181841_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_GetTypeCode_m2741181841(_thisAdjusted, method);
}
// System.Boolean System.UInt16::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C"  bool UInt16_System_IConvertible_ToBoolean_m3911119012 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToBoolean_m3911119012_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		bool L_0 = Convert_ToBoolean_m481380807(NULL /*static, unused*/, (uint16_t)(*((uint16_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  bool UInt16_System_IConvertible_ToBoolean_m3911119012_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToBoolean_m3911119012(_thisAdjusted, ___provider0, method);
}
// System.Char System.UInt16::System.IConvertible.ToChar(System.IFormatProvider)
extern "C"  Il2CppChar UInt16_System_IConvertible_ToChar_m2096055221 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToChar_m2096055221_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		Il2CppChar L_0 = Convert_ToChar_m3178343373(NULL /*static, unused*/, (uint16_t)(*((uint16_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  Il2CppChar UInt16_System_IConvertible_ToChar_m2096055221_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToChar_m2096055221(_thisAdjusted, ___provider0, method);
}
// System.SByte System.UInt16::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C"  int8_t UInt16_System_IConvertible_ToSByte_m2219828332 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToSByte_m2219828332_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int8_t L_0 = Convert_ToSByte_m516918950(NULL /*static, unused*/, (uint16_t)(*((uint16_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  int8_t UInt16_System_IConvertible_ToSByte_m2219828332_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToSByte_m2219828332(_thisAdjusted, ___provider0, method);
}
// System.Byte System.UInt16::System.IConvertible.ToByte(System.IFormatProvider)
extern "C"  uint8_t UInt16_System_IConvertible_ToByte_m3185614807 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToByte_m3185614807_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint8_t L_0 = Convert_ToByte_m2375887898(NULL /*static, unused*/, (uint16_t)(*((uint16_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  uint8_t UInt16_System_IConvertible_ToByte_m3185614807_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToByte_m3185614807(_thisAdjusted, ___provider0, method);
}
// System.Int16 System.UInt16::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C"  int16_t UInt16_System_IConvertible_ToInt16_m2337134904 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToInt16_m2337134904_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int16_t L_0 = Convert_ToInt16_m2896657713(NULL /*static, unused*/, (uint16_t)(*((uint16_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  int16_t UInt16_System_IConvertible_ToInt16_m2337134904_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToInt16_m2337134904(_thisAdjusted, ___provider0, method);
}
// System.UInt16 System.UInt16::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C"  uint16_t UInt16_System_IConvertible_ToUInt16_m2455419819 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	{
		return (uint16_t)(*((uint16_t*)__this));
	}
}
extern "C"  uint16_t UInt16_System_IConvertible_ToUInt16_m2455419819_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToUInt16_m2455419819(_thisAdjusted, ___provider0, method);
}
// System.Int32 System.UInt16::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C"  int32_t UInt16_System_IConvertible_ToInt32_m1950778303 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToInt32_m1950778303_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int32_t L_0 = Convert_ToInt32_m1987758323(NULL /*static, unused*/, (uint16_t)(*((uint16_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  int32_t UInt16_System_IConvertible_ToInt32_m1950778303_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToInt32_m1950778303(_thisAdjusted, ___provider0, method);
}
// System.UInt32 System.UInt16::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C"  uint32_t UInt16_System_IConvertible_ToUInt32_m1074326139 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToUInt32_m1074326139_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint32_t L_0 = Convert_ToUInt32_m193615797(NULL /*static, unused*/, (uint16_t)(*((uint16_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  uint32_t UInt16_System_IConvertible_ToUInt32_m1074326139_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToUInt32_m1074326139(_thisAdjusted, ___provider0, method);
}
// System.Int64 System.UInt16::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C"  int64_t UInt16_System_IConvertible_ToInt64_m3635199533 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToInt64_m3635199533_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int64_t L_0 = Convert_ToInt64_m1422776160(NULL /*static, unused*/, (uint16_t)(*((uint16_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  int64_t UInt16_System_IConvertible_ToInt64_m3635199533_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToInt64_m3635199533(_thisAdjusted, ___provider0, method);
}
// System.UInt64 System.UInt16::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C"  uint64_t UInt16_System_IConvertible_ToUInt64_m424720762 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToUInt64_m424720762_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint64_t L_0 = Convert_ToUInt64_m1362719450(NULL /*static, unused*/, (uint16_t)(*((uint16_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  uint64_t UInt16_System_IConvertible_ToUInt64_m424720762_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToUInt64_m424720762(_thisAdjusted, ___provider0, method);
}
// System.Single System.UInt16::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C"  float UInt16_System_IConvertible_ToSingle_m2654722405 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToSingle_m2654722405_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		float L_0 = Convert_ToSingle_m3600812843(NULL /*static, unused*/, (uint16_t)(*((uint16_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  float UInt16_System_IConvertible_ToSingle_m2654722405_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToSingle_m2654722405(_thisAdjusted, ___provider0, method);
}
// System.Double System.UInt16::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C"  double UInt16_System_IConvertible_ToDouble_m333121300 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToDouble_m333121300_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		double L_0 = Convert_ToDouble_m1840199900(NULL /*static, unused*/, (uint16_t)(*((uint16_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  double UInt16_System_IConvertible_ToDouble_m333121300_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToDouble_m333121300(_thisAdjusted, ___provider0, method);
}
// System.Decimal System.UInt16::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C"  Decimal_t2948259380  UInt16_System_IConvertible_ToDecimal_m1320731319 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToDecimal_m1320731319_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		Decimal_t2948259380  L_0 = Convert_ToDecimal_m2858622624(NULL /*static, unused*/, (uint16_t)(*((uint16_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  Decimal_t2948259380  UInt16_System_IConvertible_ToDecimal_m1320731319_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToDecimal_m1320731319(_thisAdjusted, ___provider0, method);
}
// System.DateTime System.UInt16::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C"  DateTime_t3738529785  UInt16_System_IConvertible_ToDateTime_m2594768090 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToDateTime_m2594768090_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral2789625702);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral2789625702);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral3798051137);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral3798051137);
		String_t* L_2 = Environment_GetResourceString_m479507158(NULL /*static, unused*/, _stringLiteral4287968739, L_1, /*hidden argument*/NULL);
		InvalidCastException_t3927145244 * L_3 = (InvalidCastException_t3927145244 *)il2cpp_codegen_object_new(InvalidCastException_t3927145244_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m318645277(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}
}
extern "C"  DateTime_t3738529785  UInt16_System_IConvertible_ToDateTime_m2594768090_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToDateTime_m2594768090(_thisAdjusted, ___provider0, method);
}
// System.Object System.UInt16::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C"  RuntimeObject * UInt16_System_IConvertible_ToType_m1028622578 (uint16_t* __this, Type_t * ___type0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToType_m1028622578_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint16_t L_0 = ((uint16_t)(*((uint16_t*)__this)));
		RuntimeObject * L_1 = Box(UInt16_t2177724958_il2cpp_TypeInfo_var, &L_0);
		Type_t * L_2 = ___type0;
		RuntimeObject* L_3 = ___provider1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		RuntimeObject * L_4 = Convert_DefaultToType_m1860037989(NULL /*static, unused*/, (RuntimeObject*)L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
extern "C"  RuntimeObject * UInt16_System_IConvertible_ToType_m1028622578_AdjustorThunk (RuntimeObject * __this, Type_t * ___type0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToType_m1028622578(_thisAdjusted, ___type0, ___provider1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 System.UInt32::CompareTo(System.Object)
extern "C"  int32_t UInt32_CompareTo_m362578384 (uint32_t* __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_CompareTo_m362578384_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, UInt32_t2560061978_il2cpp_TypeInfo_var)))
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject * L_2 = ___value0;
		V_0 = ((*(uint32_t*)((uint32_t*)UnBox(L_2, UInt32_t2560061978_il2cpp_TypeInfo_var))));
		uint32_t L_3 = V_0;
		if ((!(((uint32_t)(*((uint32_t*)__this))) < ((uint32_t)L_3))))
		{
			goto IL_001b;
		}
	}
	{
		return (-1);
	}

IL_001b:
	{
		uint32_t L_4 = V_0;
		if ((!(((uint32_t)(*((uint32_t*)__this))) > ((uint32_t)L_4))))
		{
			goto IL_0022;
		}
	}
	{
		return 1;
	}

IL_0022:
	{
		return 0;
	}

IL_0024:
	{
		String_t* L_5 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral1622425596, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_6 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6);
	}
}
extern "C"  int32_t UInt32_CompareTo_m362578384_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_CompareTo_m362578384(_thisAdjusted, ___value0, method);
}
// System.Int32 System.UInt32::CompareTo(System.UInt32)
extern "C"  int32_t UInt32_CompareTo_m2218823230 (uint32_t* __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		if ((!(((uint32_t)(*((uint32_t*)__this))) < ((uint32_t)L_0))))
		{
			goto IL_0007;
		}
	}
	{
		return (-1);
	}

IL_0007:
	{
		uint32_t L_1 = ___value0;
		if ((!(((uint32_t)(*((uint32_t*)__this))) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		return 1;
	}

IL_000e:
	{
		return 0;
	}
}
extern "C"  int32_t UInt32_CompareTo_m2218823230_AdjustorThunk (RuntimeObject * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_CompareTo_m2218823230(_thisAdjusted, ___value0, method);
}
// System.Boolean System.UInt32::Equals(System.Object)
extern "C"  bool UInt32_Equals_m351935437 (uint32_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_Equals_m351935437_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, UInt32_t2560061978_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject * L_1 = ___obj0;
		return (bool)((((int32_t)(*((uint32_t*)__this))) == ((int32_t)((*(uint32_t*)((uint32_t*)UnBox(L_1, UInt32_t2560061978_il2cpp_TypeInfo_var))))))? 1 : 0);
	}
}
extern "C"  bool UInt32_Equals_m351935437_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_Equals_m351935437(_thisAdjusted, ___obj0, method);
}
// System.Boolean System.UInt32::Equals(System.UInt32)
extern "C"  bool UInt32_Equals_m4250336581 (uint32_t* __this, uint32_t ___obj0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___obj0;
		return (bool)((((int32_t)(*((uint32_t*)__this))) == ((int32_t)L_0))? 1 : 0);
	}
}
extern "C"  bool UInt32_Equals_m4250336581_AdjustorThunk (RuntimeObject * __this, uint32_t ___obj0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_Equals_m4250336581(_thisAdjusted, ___obj0, method);
}
// System.Int32 System.UInt32::GetHashCode()
extern "C"  int32_t UInt32_GetHashCode_m3722548385 (uint32_t* __this, const RuntimeMethod* method)
{
	{
		return (*((uint32_t*)__this));
	}
}
extern "C"  int32_t UInt32_GetHashCode_m3722548385_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_GetHashCode_m3722548385(_thisAdjusted, method);
}
// System.String System.UInt32::ToString()
extern "C"  String_t* UInt32_ToString_m2574561716 (uint32_t* __this, const RuntimeMethod* method)
{
	{
		NumberFormatInfo_t435877138 * L_0 = NumberFormatInfo_get_CurrentInfo_m2605582008(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = Number_FormatUInt32_m2486347252(NULL /*static, unused*/, (*((uint32_t*)__this)), (String_t*)NULL, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  String_t* UInt32_ToString_m2574561716_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_ToString_m2574561716(_thisAdjusted, method);
}
// System.String System.UInt32::ToString(System.IFormatProvider)
extern "C"  String_t* UInt32_ToString_m4293943134 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___provider0;
		NumberFormatInfo_t435877138 * L_1 = NumberFormatInfo_GetInstance_m2833078205(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		String_t* L_2 = Number_FormatUInt32_m2486347252(NULL /*static, unused*/, (*((uint32_t*)__this)), (String_t*)NULL, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
extern "C"  String_t* UInt32_ToString_m4293943134_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_ToString_m4293943134(_thisAdjusted, ___provider0, method);
}
// System.String System.UInt32::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* UInt32_ToString_m2420423038 (uint32_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___format0;
		RuntimeObject* L_1 = ___provider1;
		NumberFormatInfo_t435877138 * L_2 = NumberFormatInfo_GetInstance_m2833078205(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		String_t* L_3 = Number_FormatUInt32_m2486347252(NULL /*static, unused*/, (*((uint32_t*)__this)), L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
extern "C"  String_t* UInt32_ToString_m2420423038_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_ToString_m2420423038(_thisAdjusted, ___format0, ___provider1, method);
}
// System.UInt32 System.UInt32::Parse(System.String)
extern "C"  uint32_t UInt32_Parse_m3270868885 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		NumberFormatInfo_t435877138 * L_1 = NumberFormatInfo_get_CurrentInfo_m2605582008(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint32_t L_2 = Number_ParseUInt32_m4237573864(NULL /*static, unused*/, L_0, 7, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.UInt32 System.UInt32::Parse(System.String,System.IFormatProvider)
extern "C"  uint32_t UInt32_Parse_m1373460382 (RuntimeObject * __this /* static, unused */, String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		RuntimeObject* L_1 = ___provider1;
		NumberFormatInfo_t435877138 * L_2 = NumberFormatInfo_GetInstance_m2833078205(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		uint32_t L_3 = Number_ParseUInt32_m4237573864(NULL /*static, unused*/, L_0, 7, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.UInt32 System.UInt32::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C"  uint32_t UInt32_Parse_m3755665066 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___style1;
		NumberFormatInfo_ValidateParseStyleInteger_m957858295(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___s0;
		int32_t L_2 = ___style1;
		RuntimeObject* L_3 = ___provider2;
		NumberFormatInfo_t435877138 * L_4 = NumberFormatInfo_GetInstance_m2833078205(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		uint32_t L_5 = Number_ParseUInt32_m4237573864(NULL /*static, unused*/, L_1, L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean System.UInt32::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.UInt32&)
extern "C"  bool UInt32_TryParse_m535404612 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, uint32_t* ___result3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___style1;
		NumberFormatInfo_ValidateParseStyleInteger_m957858295(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___s0;
		int32_t L_2 = ___style1;
		RuntimeObject* L_3 = ___provider2;
		NumberFormatInfo_t435877138 * L_4 = NumberFormatInfo_GetInstance_m2833078205(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		uint32_t* L_5 = ___result3;
		bool L_6 = Number_TryParseUInt32_m2802499845(NULL /*static, unused*/, L_1, L_2, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.TypeCode System.UInt32::GetTypeCode()
extern "C"  int32_t UInt32_GetTypeCode_m88917904 (uint32_t* __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(((int32_t)10));
	}
}
extern "C"  int32_t UInt32_GetTypeCode_m88917904_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_GetTypeCode_m88917904(_thisAdjusted, method);
}
// System.Boolean System.UInt32::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C"  bool UInt32_System_IConvertible_ToBoolean_m1763673183 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToBoolean_m1763673183_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		bool L_0 = Convert_ToBoolean_m2807110707(NULL /*static, unused*/, (*((uint32_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  bool UInt32_System_IConvertible_ToBoolean_m1763673183_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToBoolean_m1763673183(_thisAdjusted, ___provider0, method);
}
// System.Char System.UInt32::System.IConvertible.ToChar(System.IFormatProvider)
extern "C"  Il2CppChar UInt32_System_IConvertible_ToChar_m1873050533 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToChar_m1873050533_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		Il2CppChar L_0 = Convert_ToChar_m2796006345(NULL /*static, unused*/, (*((uint32_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  Il2CppChar UInt32_System_IConvertible_ToChar_m1873050533_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToChar_m1873050533(_thisAdjusted, ___provider0, method);
}
// System.SByte System.UInt32::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C"  int8_t UInt32_System_IConvertible_ToSByte_m1061556466 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToSByte_m1061556466_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int8_t L_0 = Convert_ToSByte_m2486156346(NULL /*static, unused*/, (*((uint32_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  int8_t UInt32_System_IConvertible_ToSByte_m1061556466_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToSByte_m1061556466(_thisAdjusted, ___provider0, method);
}
// System.Byte System.UInt32::System.IConvertible.ToByte(System.IFormatProvider)
extern "C"  uint8_t UInt32_System_IConvertible_ToByte_m4072781199 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToByte_m4072781199_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint8_t L_0 = Convert_ToByte_m1993550870(NULL /*static, unused*/, (*((uint32_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  uint8_t UInt32_System_IConvertible_ToByte_m4072781199_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToByte_m4072781199(_thisAdjusted, ___provider0, method);
}
// System.Int16 System.UInt32::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C"  int16_t UInt32_System_IConvertible_ToInt16_m1659441601 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToInt16_m1659441601_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int16_t L_0 = Convert_ToInt16_m571189957(NULL /*static, unused*/, (*((uint32_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  int16_t UInt32_System_IConvertible_ToInt16_m1659441601_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToInt16_m1659441601(_thisAdjusted, ___provider0, method);
}
// System.UInt16 System.UInt32::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C"  uint16_t UInt32_System_IConvertible_ToUInt16_m3125657960 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToUInt16_m3125657960_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint16_t L_0 = Convert_ToUInt16_m1480956416(NULL /*static, unused*/, (*((uint32_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  uint16_t UInt32_System_IConvertible_ToUInt16_m3125657960_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToUInt16_m3125657960(_thisAdjusted, ___provider0, method);
}
// System.Int32 System.UInt32::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C"  int32_t UInt32_System_IConvertible_ToInt32_m220754611 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToInt32_m220754611_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int32_t L_0 = Convert_ToInt32_m3956995719(NULL /*static, unused*/, (*((uint32_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  int32_t UInt32_System_IConvertible_ToInt32_m220754611_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToInt32_m220754611(_thisAdjusted, ___provider0, method);
}
// System.UInt32 System.UInt32::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C"  uint32_t UInt32_System_IConvertible_ToUInt32_m1744564280 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	{
		return (*((uint32_t*)__this));
	}
}
extern "C"  uint32_t UInt32_System_IConvertible_ToUInt32_m1744564280_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToUInt32_m1744564280(_thisAdjusted, ___provider0, method);
}
// System.Int64 System.UInt32::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C"  int64_t UInt32_System_IConvertible_ToInt64_m2261037378 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToInt64_m2261037378_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int64_t L_0 = Convert_ToInt64_m3392013556(NULL /*static, unused*/, (*((uint32_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  int64_t UInt32_System_IConvertible_ToInt64_m2261037378_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToInt64_m2261037378(_thisAdjusted, ___provider0, method);
}
// System.UInt64 System.UInt32::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C"  uint64_t UInt32_System_IConvertible_ToUInt64_m1094958903 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToUInt64_m1094958903_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint64_t L_0 = Convert_ToUInt64_m1745056470(NULL /*static, unused*/, (*((uint32_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  uint64_t UInt32_System_IConvertible_ToUInt64_m1094958903_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToUInt64_m1094958903(_thisAdjusted, ___provider0, method);
}
// System.Single System.UInt32::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C"  float UInt32_System_IConvertible_ToSingle_m1272823424 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToSingle_m1272823424_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		float L_0 = Convert_ToSingle_m3983149863(NULL /*static, unused*/, (*((uint32_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  float UInt32_System_IConvertible_ToSingle_m1272823424_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToSingle_m1272823424(_thisAdjusted, ___provider0, method);
}
// System.Double System.UInt32::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C"  double UInt32_System_IConvertible_ToDouble_m940039456 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToDouble_m940039456_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		double L_0 = Convert_ToDouble_m2222536920(NULL /*static, unused*/, (*((uint32_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  double UInt32_System_IConvertible_ToDouble_m940039456_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToDouble_m940039456(_thisAdjusted, ___provider0, method);
}
// System.Decimal System.UInt32::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C"  Decimal_t2948259380  UInt32_System_IConvertible_ToDecimal_m675004071 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToDecimal_m675004071_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		Decimal_t2948259380  L_0 = Convert_ToDecimal_m889385228(NULL /*static, unused*/, (*((uint32_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  Decimal_t2948259380  UInt32_System_IConvertible_ToDecimal_m675004071_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToDecimal_m675004071(_thisAdjusted, ___provider0, method);
}
// System.DateTime System.UInt32::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C"  DateTime_t3738529785  UInt32_System_IConvertible_ToDateTime_m2767723441 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToDateTime_m2767723441_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral2789887848);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral2789887848);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral3798051137);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral3798051137);
		String_t* L_2 = Environment_GetResourceString_m479507158(NULL /*static, unused*/, _stringLiteral4287968739, L_1, /*hidden argument*/NULL);
		InvalidCastException_t3927145244 * L_3 = (InvalidCastException_t3927145244 *)il2cpp_codegen_object_new(InvalidCastException_t3927145244_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m318645277(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}
}
extern "C"  DateTime_t3738529785  UInt32_System_IConvertible_ToDateTime_m2767723441_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToDateTime_m2767723441(_thisAdjusted, ___provider0, method);
}
// System.Object System.UInt32::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C"  RuntimeObject * UInt32_System_IConvertible_ToType_m922356584 (uint32_t* __this, Type_t * ___type0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToType_m922356584_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ((uint32_t)(*((uint32_t*)__this)));
		RuntimeObject * L_1 = Box(UInt32_t2560061978_il2cpp_TypeInfo_var, &L_0);
		Type_t * L_2 = ___type0;
		RuntimeObject* L_3 = ___provider1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		RuntimeObject * L_4 = Convert_DefaultToType_m1860037989(NULL /*static, unused*/, (RuntimeObject*)L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
extern "C"  RuntimeObject * UInt32_System_IConvertible_ToType_m922356584_AdjustorThunk (RuntimeObject * __this, Type_t * ___type0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToType_m922356584(_thisAdjusted, ___type0, ___provider1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 System.UInt64::CompareTo(System.Object)
extern "C"  int32_t UInt64_CompareTo_m3619843473 (uint64_t* __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_CompareTo_m3619843473_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, UInt64_t4134040092_il2cpp_TypeInfo_var)))
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject * L_2 = ___value0;
		V_0 = ((*(uint64_t*)((uint64_t*)UnBox(L_2, UInt64_t4134040092_il2cpp_TypeInfo_var))));
		uint64_t L_3 = V_0;
		if ((!(((uint64_t)(*((int64_t*)__this))) < ((uint64_t)L_3))))
		{
			goto IL_001b;
		}
	}
	{
		return (-1);
	}

IL_001b:
	{
		uint64_t L_4 = V_0;
		if ((!(((uint64_t)(*((int64_t*)__this))) > ((uint64_t)L_4))))
		{
			goto IL_0022;
		}
	}
	{
		return 1;
	}

IL_0022:
	{
		return 0;
	}

IL_0024:
	{
		String_t* L_5 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral2814066682, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_6 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6);
	}
}
extern "C"  int32_t UInt64_CompareTo_m3619843473_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_CompareTo_m3619843473(_thisAdjusted, ___value0, method);
}
// System.Int32 System.UInt64::CompareTo(System.UInt64)
extern "C"  int32_t UInt64_CompareTo_m1614517204 (uint64_t* __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___value0;
		if ((!(((uint64_t)(*((int64_t*)__this))) < ((uint64_t)L_0))))
		{
			goto IL_0007;
		}
	}
	{
		return (-1);
	}

IL_0007:
	{
		uint64_t L_1 = ___value0;
		if ((!(((uint64_t)(*((int64_t*)__this))) > ((uint64_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		return 1;
	}

IL_000e:
	{
		return 0;
	}
}
extern "C"  int32_t UInt64_CompareTo_m1614517204_AdjustorThunk (RuntimeObject * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_CompareTo_m1614517204(_thisAdjusted, ___value0, method);
}
// System.Boolean System.UInt64::Equals(System.Object)
extern "C"  bool UInt64_Equals_m1879425698 (uint64_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_Equals_m1879425698_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, UInt64_t4134040092_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject * L_1 = ___obj0;
		return (bool)((((int64_t)(*((int64_t*)__this))) == ((int64_t)((*(uint64_t*)((uint64_t*)UnBox(L_1, UInt64_t4134040092_il2cpp_TypeInfo_var))))))? 1 : 0);
	}
}
extern "C"  bool UInt64_Equals_m1879425698_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_Equals_m1879425698(_thisAdjusted, ___obj0, method);
}
// System.Boolean System.UInt64::Equals(System.UInt64)
extern "C"  bool UInt64_Equals_m367573732 (uint64_t* __this, uint64_t ___obj0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___obj0;
		return (bool)((((int64_t)(*((int64_t*)__this))) == ((int64_t)L_0))? 1 : 0);
	}
}
extern "C"  bool UInt64_Equals_m367573732_AdjustorThunk (RuntimeObject * __this, uint64_t ___obj0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_Equals_m367573732(_thisAdjusted, ___obj0, method);
}
// System.Int32 System.UInt64::GetHashCode()
extern "C"  int32_t UInt64_GetHashCode_m4209760355 (uint64_t* __this, const RuntimeMethod* method)
{
	{
		return ((int32_t)((int32_t)(((int32_t)((int32_t)(*((int64_t*)__this)))))^(int32_t)(((int32_t)((int32_t)((int64_t)((uint64_t)(*((int64_t*)__this))>>((int32_t)32))))))));
	}
}
extern "C"  int32_t UInt64_GetHashCode_m4209760355_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_GetHashCode_m4209760355(_thisAdjusted, method);
}
// System.String System.UInt64::ToString()
extern "C"  String_t* UInt64_ToString_m1529093114 (uint64_t* __this, const RuntimeMethod* method)
{
	{
		NumberFormatInfo_t435877138 * L_0 = NumberFormatInfo_get_CurrentInfo_m2605582008(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = Number_FormatUInt64_m792080283(NULL /*static, unused*/, (*((int64_t*)__this)), (String_t*)NULL, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  String_t* UInt64_ToString_m1529093114_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_ToString_m1529093114(_thisAdjusted, method);
}
// System.String System.UInt64::ToString(System.IFormatProvider)
extern "C"  String_t* UInt64_ToString_m2623377370 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___provider0;
		NumberFormatInfo_t435877138 * L_1 = NumberFormatInfo_GetInstance_m2833078205(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		String_t* L_2 = Number_FormatUInt64_m792080283(NULL /*static, unused*/, (*((int64_t*)__this)), (String_t*)NULL, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
extern "C"  String_t* UInt64_ToString_m2623377370_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_ToString_m2623377370(_thisAdjusted, ___provider0, method);
}
// System.String System.UInt64::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* UInt64_ToString_m1695188334 (uint64_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___format0;
		RuntimeObject* L_1 = ___provider1;
		NumberFormatInfo_t435877138 * L_2 = NumberFormatInfo_GetInstance_m2833078205(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		String_t* L_3 = Number_FormatUInt64_m792080283(NULL /*static, unused*/, (*((int64_t*)__this)), L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
extern "C"  String_t* UInt64_ToString_m1695188334_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_ToString_m1695188334(_thisAdjusted, ___format0, ___provider1, method);
}
// System.UInt64 System.UInt64::Parse(System.String,System.IFormatProvider)
extern "C"  uint64_t UInt64_Parse_m819899889 (RuntimeObject * __this /* static, unused */, String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		RuntimeObject* L_1 = ___provider1;
		NumberFormatInfo_t435877138 * L_2 = NumberFormatInfo_GetInstance_m2833078205(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		uint64_t L_3 = Number_ParseUInt64_m2694014565(NULL /*static, unused*/, L_0, 7, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.UInt64 System.UInt64::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C"  uint64_t UInt64_Parse_m1485858293 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___style1;
		NumberFormatInfo_ValidateParseStyleInteger_m957858295(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___s0;
		int32_t L_2 = ___style1;
		RuntimeObject* L_3 = ___provider2;
		NumberFormatInfo_t435877138 * L_4 = NumberFormatInfo_GetInstance_m2833078205(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		uint64_t L_5 = Number_ParseUInt64_m2694014565(NULL /*static, unused*/, L_1, L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean System.UInt64::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.UInt64&)
extern "C"  bool UInt64_TryParse_m3060369906 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, uint64_t* ___result3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___style1;
		NumberFormatInfo_ValidateParseStyleInteger_m957858295(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___s0;
		int32_t L_2 = ___style1;
		RuntimeObject* L_3 = ___provider2;
		NumberFormatInfo_t435877138 * L_4 = NumberFormatInfo_GetInstance_m2833078205(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		uint64_t* L_5 = ___result3;
		bool L_6 = Number_TryParseUInt64_m782753458(NULL /*static, unused*/, L_1, L_2, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.TypeCode System.UInt64::GetTypeCode()
extern "C"  int32_t UInt64_GetTypeCode_m844217172 (uint64_t* __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(((int32_t)12));
	}
}
extern "C"  int32_t UInt64_GetTypeCode_m844217172_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_GetTypeCode_m844217172(_thisAdjusted, method);
}
// System.Boolean System.UInt64::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C"  bool UInt64_System_IConvertible_ToBoolean_m3071416000 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToBoolean_m3071416000_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		bool L_0 = Convert_ToBoolean_m3613483153(NULL /*static, unused*/, (*((int64_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  bool UInt64_System_IConvertible_ToBoolean_m3071416000_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToBoolean_m3071416000(_thisAdjusted, ___provider0, method);
}
// System.Char System.UInt64::System.IConvertible.ToChar(System.IFormatProvider)
extern "C"  Il2CppChar UInt64_System_IConvertible_ToChar_m2074245892 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToChar_m2074245892_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		Il2CppChar L_0 = Convert_ToChar_m1604365259(NULL /*static, unused*/, (*((int64_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  Il2CppChar UInt64_System_IConvertible_ToChar_m2074245892_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToChar_m2074245892(_thisAdjusted, ___provider0, method);
}
// System.SByte System.UInt64::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C"  int8_t UInt64_System_IConvertible_ToSByte_m30962591 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToSByte_m30962591_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int8_t L_0 = Convert_ToSByte_m1679390684(NULL /*static, unused*/, (*((int64_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  int8_t UInt64_System_IConvertible_ToSByte_m30962591_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToSByte_m30962591(_thisAdjusted, ___provider0, method);
}
// System.Byte System.UInt64::System.IConvertible.ToByte(System.IFormatProvider)
extern "C"  uint8_t UInt64_System_IConvertible_ToByte_m1501504925 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToByte_m1501504925_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint8_t L_0 = Convert_ToByte_m3567528984(NULL /*static, unused*/, (*((int64_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  uint8_t UInt64_System_IConvertible_ToByte_m1501504925_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToByte_m1501504925(_thisAdjusted, ___provider0, method);
}
// System.Int16 System.UInt64::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C"  int16_t UInt64_System_IConvertible_ToInt16_m3895479143 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToInt16_m3895479143_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int16_t L_0 = Convert_ToInt16_m1733792763(NULL /*static, unused*/, (*((int64_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  int16_t UInt64_System_IConvertible_ToInt16_m3895479143_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToInt16_m3895479143(_thisAdjusted, ___provider0, method);
}
// System.UInt16 System.UInt64::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C"  uint16_t UInt64_System_IConvertible_ToUInt16_m4165747038 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToUInt16_m4165747038_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint16_t L_0 = Convert_ToUInt16_m2672597498(NULL /*static, unused*/, (*((int64_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  uint16_t UInt64_System_IConvertible_ToUInt16_m4165747038_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToUInt16_m4165747038(_thisAdjusted, ___provider0, method);
}
// System.Int32 System.UInt64::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C"  int32_t UInt64_System_IConvertible_ToInt32_m949522652 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToInt32_m949522652_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int32_t L_0 = Convert_ToInt32_m825155517(NULL /*static, unused*/, (*((int64_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  int32_t UInt64_System_IConvertible_ToInt32_m949522652_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToInt32_m949522652(_thisAdjusted, ___provider0, method);
}
// System.UInt32 System.UInt64::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C"  uint32_t UInt64_System_IConvertible_ToUInt32_m2784653358 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToUInt32_m2784653358_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint32_t L_0 = Convert_ToUInt32_m1767593911(NULL /*static, unused*/, (*((int64_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  uint32_t UInt64_System_IConvertible_ToUInt32_m2784653358_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToUInt32_m2784653358(_thisAdjusted, ___provider0, method);
}
// System.Int64 System.UInt64::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C"  int64_t UInt64_System_IConvertible_ToInt64_m4241475606 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToInt64_m4241475606_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int64_t L_0 = Convert_ToInt64_m260173354(NULL /*static, unused*/, (*((int64_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  int64_t UInt64_System_IConvertible_ToInt64_m4241475606_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToInt64_m4241475606(_thisAdjusted, ___provider0, method);
}
// System.UInt64 System.UInt64::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C"  uint64_t UInt64_System_IConvertible_ToUInt64_m2135047981 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	{
		return (*((int64_t*)__this));
	}
}
extern "C"  uint64_t UInt64_System_IConvertible_ToUInt64_m2135047981_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToUInt64_m2135047981(_thisAdjusted, ___provider0, method);
}
// System.Single System.UInt64::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C"  float UInt64_System_IConvertible_ToSingle_m925613075 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToSingle_m925613075_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		float L_0 = Convert_ToSingle_m2791508777(NULL /*static, unused*/, (*((int64_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  float UInt64_System_IConvertible_ToSingle_m925613075_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToSingle_m925613075(_thisAdjusted, ___provider0, method);
}
// System.Double System.UInt64::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C"  double UInt64_System_IConvertible_ToDouble_m602078108 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToDouble_m602078108_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		double L_0 = Convert_ToDouble_m1030895834(NULL /*static, unused*/, (*((int64_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  double UInt64_System_IConvertible_ToDouble_m602078108_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToDouble_m602078108(_thisAdjusted, ___provider0, method);
}
// System.Decimal System.UInt64::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C"  Decimal_t2948259380  UInt64_System_IConvertible_ToDecimal_m806594027 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToDecimal_m806594027_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		Decimal_t2948259380  L_0 = Convert_ToDecimal_m1695757674(NULL /*static, unused*/, (*((int64_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  Decimal_t2948259380  UInt64_System_IConvertible_ToDecimal_m806594027_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToDecimal_m806594027(_thisAdjusted, ___provider0, method);
}
// System.DateTime System.UInt64::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C"  DateTime_t3738529785  UInt64_System_IConvertible_ToDateTime_m3434604642 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToDateTime_m3434604642_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral2789494635);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral2789494635);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral3798051137);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral3798051137);
		String_t* L_2 = Environment_GetResourceString_m479507158(NULL /*static, unused*/, _stringLiteral4287968739, L_1, /*hidden argument*/NULL);
		InvalidCastException_t3927145244 * L_3 = (InvalidCastException_t3927145244 *)il2cpp_codegen_object_new(InvalidCastException_t3927145244_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m318645277(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}
}
extern "C"  DateTime_t3738529785  UInt64_System_IConvertible_ToDateTime_m3434604642_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToDateTime_m3434604642(_thisAdjusted, ___provider0, method);
}
// System.Object System.UInt64::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C"  RuntimeObject * UInt64_System_IConvertible_ToType_m4049257834 (uint64_t* __this, Type_t * ___type0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToType_m4049257834_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0 = ((uint64_t)(*((int64_t*)__this)));
		RuntimeObject * L_1 = Box(UInt64_t4134040092_il2cpp_TypeInfo_var, &L_0);
		Type_t * L_2 = ___type0;
		RuntimeObject* L_3 = ___provider1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		RuntimeObject * L_4 = Convert_DefaultToType_m1860037989(NULL /*static, unused*/, (RuntimeObject*)L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
extern "C"  RuntimeObject * UInt64_System_IConvertible_ToType_m4049257834_AdjustorThunk (RuntimeObject * __this, Type_t * ___type0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToType_m4049257834(_thisAdjusted, ___type0, ___provider1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.UIntPtr::.ctor(System.UInt32)
extern "C"  void UIntPtr__ctor_m4250165422 (uintptr_t* __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		*__this = ((((uintptr_t)L_0)));
		return;
	}
}
extern "C"  void UIntPtr__ctor_m4250165422_AdjustorThunk (RuntimeObject * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	uintptr_t* _thisAdjusted = reinterpret_cast<uintptr_t*>(__this + 1);
	UIntPtr__ctor_m4250165422(_thisAdjusted, ___value0, method);
}
// System.Boolean System.UIntPtr::Equals(System.Object)
extern "C"  bool UIntPtr_Equals_m1316671746 (uintptr_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIntPtr_Equals_m1316671746_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uintptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, UIntPtr_t_il2cpp_TypeInfo_var)))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((*(uintptr_t*)((uintptr_t*)UnBox(L_1, UIntPtr_t_il2cpp_TypeInfo_var))));
		uintptr_t L_2 = *__this;
		uintptr_t L_3 = V_0;
		return (bool)((((intptr_t)L_2) == ((intptr_t)L_3))? 1 : 0);
	}

IL_001f:
	{
		return (bool)0;
	}
}
extern "C"  bool UIntPtr_Equals_m1316671746_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	uintptr_t* _thisAdjusted = reinterpret_cast<uintptr_t*>(__this + 1);
	return UIntPtr_Equals_m1316671746(_thisAdjusted, ___obj0, method);
}
// System.Int32 System.UIntPtr::GetHashCode()
extern "C"  int32_t UIntPtr_GetHashCode_m3482152298 (uintptr_t* __this, const RuntimeMethod* method)
{
	{
		uintptr_t L_0 = *__this;
		return (((int32_t)((int32_t)L_0)));
	}
}
extern "C"  int32_t UIntPtr_GetHashCode_m3482152298_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uintptr_t* _thisAdjusted = reinterpret_cast<uintptr_t*>(__this + 1);
	return UIntPtr_GetHashCode_m3482152298(_thisAdjusted, method);
}
// System.String System.UIntPtr::ToString()
extern "C"  String_t* UIntPtr_ToString_m984583492 (uintptr_t* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIntPtr_ToString_m984583492_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		int32_t L_0 = UIntPtr_get_Size_m703595701(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)8)))
		{
			goto IL_0018;
		}
	}
	{
		uintptr_t L_1 = *__this;
		V_0 = (((int64_t)((uint64_t)L_1)));
		String_t* L_2 = UInt64_ToString_m1529093114((&V_0), /*hidden argument*/NULL);
		return L_2;
	}

IL_0018:
	{
		uintptr_t L_3 = *__this;
		V_1 = (((int32_t)((uint32_t)L_3)));
		String_t* L_4 = UInt32_ToString_m2574561716((&V_1), /*hidden argument*/NULL);
		return L_4;
	}
}
extern "C"  String_t* UIntPtr_ToString_m984583492_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uintptr_t* _thisAdjusted = reinterpret_cast<uintptr_t*>(__this + 1);
	return UIntPtr_ToString_m984583492(_thisAdjusted, method);
}
// System.Void System.UIntPtr::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m1767630151 (uintptr_t* __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m1767630151_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral79347, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_000e:
	{
		SerializationInfo_t950877179 * L_2 = ___info0;
		uintptr_t L_3 = *__this;
		NullCheck(L_2);
		SerializationInfo_AddValue_m2020653395(L_2, _stringLiteral1363226343, (((int64_t)((uint64_t)L_3))), /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m1767630151_AdjustorThunk (RuntimeObject * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	uintptr_t* _thisAdjusted = reinterpret_cast<uintptr_t*>(__this + 1);
	UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m1767630151(_thisAdjusted, ___info0, ___context1, method);
}
// System.Boolean System.UIntPtr::op_Equality(System.UIntPtr,System.UIntPtr)
extern "C"  bool UIntPtr_op_Equality_m2241921281 (RuntimeObject * __this /* static, unused */, uintptr_t ___value10, uintptr_t ___value21, const RuntimeMethod* method)
{
	{
		uintptr_t L_0 = ___value10;
		uintptr_t L_1 = ___value21;
		return (bool)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0);
	}
}
// System.Int32 System.UIntPtr::get_Size()
extern "C"  int32_t UIntPtr_get_Size_m703595701 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIntPtr_get_Size_m703595701_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = il2cpp_codegen_sizeof(VoidU2A_t3811567795_il2cpp_TypeInfo_var);
		return L_0;
	}
}
// System.Void System.UIntPtr::.cctor()
extern "C"  void UIntPtr__cctor_m3513964473 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIntPtr__cctor_m3513964473_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uintptr_t L_0;
		memset(&L_0, 0, sizeof(L_0));
		UIntPtr__ctor_m4250165422((&L_0), 0, /*hidden argument*/NULL);
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
// System.Void System.UnauthorizedAccessException::.ctor()
extern "C"  void UnauthorizedAccessException__ctor_m246605039 (UnauthorizedAccessException_t490705335 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnauthorizedAccessException__ctor_m246605039_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral2994918982, /*hidden argument*/NULL);
		SystemException__ctor_m3298527747(__this, L_0, /*hidden argument*/NULL);
		Exception_SetErrorCode_m4269507377(__this, ((int32_t)-2147024891), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnauthorizedAccessException::.ctor(System.String)
extern "C"  void UnauthorizedAccessException__ctor_m40101894 (UnauthorizedAccessException_t490705335 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		SystemException__ctor_m3298527747(__this, L_0, /*hidden argument*/NULL);
		Exception_SetErrorCode_m4269507377(__this, ((int32_t)-2147024891), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnauthorizedAccessException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnauthorizedAccessException__ctor_m1652256089 (UnauthorizedAccessException_t490705335 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		StreamingContext_t3711869237  L_1 = ___context1;
		SystemException__ctor_m1515048899(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void System.UnhandledExceptionEventArgs::.ctor(System.Object,System.Boolean)
extern "C"  void UnhandledExceptionEventArgs__ctor_m224348470 (UnhandledExceptionEventArgs_t2886101344 * __this, RuntimeObject * ___exception0, bool ___isTerminating1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnhandledExceptionEventArgs__ctor_m224348470_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___exception0;
		__this->set__Exception_1(L_0);
		bool L_1 = ___isTerminating1;
		__this->set__IsTerminating_2(L_1);
		return;
	}
}
// System.Object System.UnhandledExceptionEventArgs::get_ExceptionObject()
extern "C"  RuntimeObject * UnhandledExceptionEventArgs_get_ExceptionObject_m862578480 (UnhandledExceptionEventArgs_t2886101344 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__Exception_1();
		return L_0;
	}
}
// System.Boolean System.UnhandledExceptionEventArgs::get_IsTerminating()
extern "C"  bool UnhandledExceptionEventArgs_get_IsTerminating_m4073714616 (UnhandledExceptionEventArgs_t2886101344 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__IsTerminating_2();
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
// System.Void System.UnhandledExceptionEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void UnhandledExceptionEventHandler__ctor_m626016213 (UnhandledExceptionEventHandler_t3101989324 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void System.UnhandledExceptionEventHandler::Invoke(System.Object,System.UnhandledExceptionEventArgs)
extern "C"  void UnhandledExceptionEventHandler_Invoke_m1545705626 (UnhandledExceptionEventHandler_t3101989324 * __this, RuntimeObject * ___sender0, UnhandledExceptionEventArgs_t2886101344 * ___e1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
				{
					// open
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___e1, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___e1, targetMethod);
				}
			}
			else
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
				{
					// closed
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
				}
				else
				{
					// open
					typedef void (*FunctionPointerType) (RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___e1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
			}
			else
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult System.UnhandledExceptionEventHandler::BeginInvoke(System.Object,System.UnhandledExceptionEventArgs,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* UnhandledExceptionEventHandler_BeginInvoke_m1761611550 (UnhandledExceptionEventHandler_t3101989324 * __this, RuntimeObject * ___sender0, UnhandledExceptionEventArgs_t2886101344 * ___e1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void System.UnhandledExceptionEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void UnhandledExceptionEventHandler_EndInvoke_m2316153791 (UnhandledExceptionEventHandler_t3101989324 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void System.UnitySerializationHolder::GetUnitySerializationInfo(System.Runtime.Serialization.SerializationInfo,System.Reflection.Missing)
extern "C"  void UnitySerializationHolder_GetUnitySerializationInfo_m927411785 (RuntimeObject * __this /* static, unused */, SerializationInfo_t950877179 * ___info0, Missing_t508514592 * ___missing1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_GetUnitySerializationInfo_m927411785_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (UnitySerializationHolder_t431912834_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		SerializationInfo_SetType_m3923964808(L_0, L_2, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_3 = ___info0;
		NullCheck(L_3);
		SerializationInfo_AddValue_m412754688(L_3, _stringLiteral3283586028, 3, /*hidden argument*/NULL);
		return;
	}
}
// System.RuntimeType System.UnitySerializationHolder::AddElementTypes(System.Runtime.Serialization.SerializationInfo,System.RuntimeType)
extern "C"  RuntimeType_t3636489352 * UnitySerializationHolder_AddElementTypes_m2711578409 (RuntimeObject * __this /* static, unused */, SerializationInfo_t950877179 * ___info0, RuntimeType_t3636489352 * ___type1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_AddElementTypes_m2711578409_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t128053199 * V_0 = NULL;
	{
		List_1_t128053199 * L_0 = (List_1_t128053199 *)il2cpp_codegen_object_new(List_1_t128053199_il2cpp_TypeInfo_var);
		List_1__ctor_m1204004817(L_0, /*hidden argument*/List_1__ctor_m1204004817_RuntimeMethod_var);
		V_0 = L_0;
		goto IL_0063;
	}

IL_0008:
	{
		RuntimeType_t3636489352 * L_1 = ___type1;
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(77 /* System.Boolean System.Type::get_IsSzArray() */, L_1);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t128053199 * L_3 = V_0;
		NullCheck(L_3);
		List_1_Add_m2080863212(L_3, 3, /*hidden argument*/List_1_Add_m2080863212_RuntimeMethod_var);
		goto IL_0056;
	}

IL_0019:
	{
		RuntimeType_t3636489352 * L_4 = ___type1;
		NullCheck(L_4);
		bool L_5 = Type_get_IsArray_m2591212821(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		List_1_t128053199 * L_6 = V_0;
		RuntimeType_t3636489352 * L_7 = ___type1;
		NullCheck(L_7);
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(30 /* System.Int32 System.Type::GetArrayRank() */, L_7);
		NullCheck(L_6);
		List_1_Add_m2080863212(L_6, L_8, /*hidden argument*/List_1_Add_m2080863212_RuntimeMethod_var);
		List_1_t128053199 * L_9 = V_0;
		NullCheck(L_9);
		List_1_Add_m2080863212(L_9, 2, /*hidden argument*/List_1_Add_m2080863212_RuntimeMethod_var);
		goto IL_0056;
	}

IL_0036:
	{
		RuntimeType_t3636489352 * L_10 = ___type1;
		NullCheck(L_10);
		bool L_11 = Type_get_IsPointer_m4067542339(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0047;
		}
	}
	{
		List_1_t128053199 * L_12 = V_0;
		NullCheck(L_12);
		List_1_Add_m2080863212(L_12, 1, /*hidden argument*/List_1_Add_m2080863212_RuntimeMethod_var);
		goto IL_0056;
	}

IL_0047:
	{
		RuntimeType_t3636489352 * L_13 = ___type1;
		NullCheck(L_13);
		bool L_14 = Type_get_IsByRef_m1262524108(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0056;
		}
	}
	{
		List_1_t128053199 * L_15 = V_0;
		NullCheck(L_15);
		List_1_Add_m2080863212(L_15, 4, /*hidden argument*/List_1_Add_m2080863212_RuntimeMethod_var);
	}

IL_0056:
	{
		RuntimeType_t3636489352 * L_16 = ___type1;
		NullCheck(L_16);
		Type_t * L_17 = VirtFuncInvoker0< Type_t * >::Invoke(101 /* System.Type System.Type::GetElementType() */, L_16);
		___type1 = ((RuntimeType_t3636489352 *)CastclassClass((RuntimeObject*)L_17, RuntimeType_t3636489352_il2cpp_TypeInfo_var));
	}

IL_0063:
	{
		RuntimeType_t3636489352 * L_18 = ___type1;
		NullCheck(L_18);
		bool L_19 = Type_get_HasElementType_m710151977(L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_0008;
		}
	}
	{
		SerializationInfo_t950877179 * L_20 = ___info0;
		List_1_t128053199 * L_21 = V_0;
		NullCheck(L_21);
		Int32U5BU5D_t385246372* L_22 = List_1_ToArray_m1469074435(L_21, /*hidden argument*/List_1_ToArray_m1469074435_RuntimeMethod_var);
		RuntimeTypeHandle_t3027515415  L_23 = { reinterpret_cast<intptr_t> (Int32U5BU5D_t385246372_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_24 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		NullCheck(L_20);
		SerializationInfo_AddValue_m3906743584(L_20, _stringLiteral3927933503, (RuntimeObject *)(RuntimeObject *)L_22, L_24, /*hidden argument*/NULL);
		RuntimeType_t3636489352 * L_25 = ___type1;
		return L_25;
	}
}
// System.Type System.UnitySerializationHolder::MakeElementTypes(System.Type)
extern "C"  Type_t * UnitySerializationHolder_MakeElementTypes_m672301684 (UnitySerializationHolder_t431912834 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t385246372* L_0 = __this->get_m_elementTypes_1();
		NullCheck(L_0);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))), (int32_t)1));
		goto IL_006f;
	}

IL_000d:
	{
		Int32U5BU5D_t385246372* L_1 = __this->get_m_elementTypes_1();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((!(((uint32_t)L_4) == ((uint32_t)3))))
		{
			goto IL_0022;
		}
	}
	{
		Type_t * L_5 = ___type0;
		NullCheck(L_5);
		Type_t * L_6 = VirtFuncInvoker0< Type_t * >::Invoke(21 /* System.Type System.Type::MakeArrayType() */, L_5);
		___type0 = L_6;
		goto IL_006b;
	}

IL_0022:
	{
		Int32U5BU5D_t385246372* L_7 = __this->get_m_elementTypes_1();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_0043;
		}
	}
	{
		Type_t * L_11 = ___type0;
		Int32U5BU5D_t385246372* L_12 = __this->get_m_elementTypes_1();
		int32_t L_13 = V_0;
		int32_t L_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1));
		V_0 = L_14;
		NullCheck(L_12);
		int32_t L_15 = L_14;
		int32_t L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		Type_t * L_17 = VirtFuncInvoker1< Type_t *, int32_t >::Invoke(22 /* System.Type System.Type::MakeArrayType(System.Int32) */, L_11, L_16);
		___type0 = L_17;
		goto IL_006b;
	}

IL_0043:
	{
		Int32U5BU5D_t385246372* L_18 = __this->get_m_elementTypes_1();
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		int32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		if ((!(((uint32_t)L_21) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		Type_t * L_22 = ___type0;
		NullCheck(L_22);
		Type_t * L_23 = VirtFuncInvoker0< Type_t * >::Invoke(19 /* System.Type System.Type::MakePointerType() */, L_22);
		___type0 = L_23;
		goto IL_006b;
	}

IL_0058:
	{
		Int32U5BU5D_t385246372* L_24 = __this->get_m_elementTypes_1();
		int32_t L_25 = V_0;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		int32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		if ((!(((uint32_t)L_27) == ((uint32_t)4))))
		{
			goto IL_006b;
		}
	}
	{
		Type_t * L_28 = ___type0;
		NullCheck(L_28);
		Type_t * L_29 = VirtFuncInvoker0< Type_t * >::Invoke(20 /* System.Type System.Type::MakeByRefType() */, L_28);
		___type0 = L_29;
	}

IL_006b:
	{
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)1));
	}

IL_006f:
	{
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		Type_t * L_32 = ___type0;
		return L_32;
	}
}
// System.Void System.UnitySerializationHolder::GetUnitySerializationInfo(System.Runtime.Serialization.SerializationInfo,System.RuntimeType)
extern "C"  void UnitySerializationHolder_GetUnitySerializationInfo_m3060468266 (RuntimeObject * __this /* static, unused */, SerializationInfo_t950877179 * ___info0, RuntimeType_t3636489352 * ___type1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_GetUnitySerializationInfo_m3060468266_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeType_t3636489352 * L_0 = ___type1;
		NullCheck(L_0);
		Type_t * L_1 = Type_GetRootElementType_m2028550026(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(80 /* System.Boolean System.Type::get_IsGenericParameter() */, L_1);
		if (!L_2)
		{
			goto IL_007a;
		}
	}
	{
		SerializationInfo_t950877179 * L_3 = ___info0;
		RuntimeType_t3636489352 * L_4 = ___type1;
		RuntimeType_t3636489352 * L_5 = UnitySerializationHolder_AddElementTypes_m2711578409(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		___type1 = L_5;
		SerializationInfo_t950877179 * L_6 = ___info0;
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (UnitySerializationHolder_t431912834_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		SerializationInfo_SetType_m3923964808(L_6, L_8, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_9 = ___info0;
		NullCheck(L_9);
		SerializationInfo_AddValue_m412754688(L_9, _stringLiteral3283586028, 7, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_10 = ___info0;
		RuntimeType_t3636489352 * L_11 = ___type1;
		NullCheck(L_11);
		int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(81 /* System.Int32 System.Type::get_GenericParameterPosition() */, L_11);
		NullCheck(L_10);
		SerializationInfo_AddValue_m412754688(L_10, _stringLiteral3378664767, L_12, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_13 = ___info0;
		RuntimeType_t3636489352 * L_14 = ___type1;
		NullCheck(L_14);
		MethodBase_t * L_15 = VirtFuncInvoker0< MethodBase_t * >::Invoke(18 /* System.Reflection.MethodBase System.Type::get_DeclaringMethod() */, L_14);
		RuntimeTypeHandle_t3027515415  L_16 = { reinterpret_cast<intptr_t> (MethodBase_t_0_0_0_var) };
		Type_t * L_17 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		SerializationInfo_AddValue_m3906743584(L_13, _stringLiteral98117656, L_15, L_17, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_18 = ___info0;
		RuntimeType_t3636489352 * L_19 = ___type1;
		NullCheck(L_19);
		Type_t * L_20 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_19);
		RuntimeTypeHandle_t3027515415  L_21 = { reinterpret_cast<intptr_t> (Type_t_0_0_0_var) };
		Type_t * L_22 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		NullCheck(L_18);
		SerializationInfo_AddValue_m3906743584(L_18, _stringLiteral2725392681, L_20, L_22, /*hidden argument*/NULL);
		return;
	}

IL_007a:
	{
		V_0 = 4;
		RuntimeType_t3636489352 * L_23 = ___type1;
		NullCheck(L_23);
		bool L_24 = VirtFuncInvoker0< bool >::Invoke(79 /* System.Boolean System.Type::get_IsGenericTypeDefinition() */, L_23);
		if (L_24)
		{
			goto IL_00bf;
		}
	}
	{
		RuntimeType_t3636489352 * L_25 = ___type1;
		NullCheck(L_25);
		bool L_26 = VirtFuncInvoker0< bool >::Invoke(82 /* System.Boolean System.Type::get_ContainsGenericParameters() */, L_25);
		if (!L_26)
		{
			goto IL_00bf;
		}
	}
	{
		V_0 = 8;
		SerializationInfo_t950877179 * L_27 = ___info0;
		RuntimeType_t3636489352 * L_28 = ___type1;
		RuntimeType_t3636489352 * L_29 = UnitySerializationHolder_AddElementTypes_m2711578409(NULL /*static, unused*/, L_27, L_28, /*hidden argument*/NULL);
		___type1 = L_29;
		SerializationInfo_t950877179 * L_30 = ___info0;
		RuntimeType_t3636489352 * L_31 = ___type1;
		NullCheck(L_31);
		TypeU5BU5D_t3940880105* L_32 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(102 /* System.Type[] System.Type::GetGenericArguments() */, L_31);
		RuntimeTypeHandle_t3027515415  L_33 = { reinterpret_cast<intptr_t> (TypeU5BU5D_t3940880105_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_34 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		NullCheck(L_30);
		SerializationInfo_AddValue_m3906743584(L_30, _stringLiteral1245918466, (RuntimeObject *)(RuntimeObject *)L_32, L_34, /*hidden argument*/NULL);
		RuntimeType_t3636489352 * L_35 = ___type1;
		NullCheck(L_35);
		Type_t * L_36 = VirtFuncInvoker0< Type_t * >::Invoke(103 /* System.Type System.Type::GetGenericTypeDefinition() */, L_35);
		___type1 = ((RuntimeType_t3636489352 *)CastclassClass((RuntimeObject*)L_36, RuntimeType_t3636489352_il2cpp_TypeInfo_var));
	}

IL_00bf:
	{
		SerializationInfo_t950877179 * L_37 = ___info0;
		int32_t L_38 = V_0;
		RuntimeType_t3636489352 * L_39 = ___type1;
		NullCheck(L_39);
		String_t* L_40 = VirtFuncInvoker0< String_t* >::Invoke(27 /* System.String System.Type::get_FullName() */, L_39);
		RuntimeType_t3636489352 * L_41 = ___type1;
		NullCheck(L_41);
		RuntimeAssembly_t1451753063 * L_42 = RuntimeType_GetRuntimeAssembly_m2955606119(L_41, /*hidden argument*/NULL);
		UnitySerializationHolder_GetUnitySerializationInfo_m3966690610(NULL /*static, unused*/, L_37, L_38, L_40, L_42, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnitySerializationHolder::GetUnitySerializationInfo(System.Runtime.Serialization.SerializationInfo,System.Int32,System.String,System.Reflection.RuntimeAssembly)
extern "C"  void UnitySerializationHolder_GetUnitySerializationInfo_m3966690610 (RuntimeObject * __this /* static, unused */, SerializationInfo_t950877179 * ___info0, int32_t ___unityType1, String_t* ___data2, RuntimeAssembly_t1451753063 * ___assembly3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_GetUnitySerializationInfo_m3966690610_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (UnitySerializationHolder_t431912834_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		SerializationInfo_SetType_m3923964808(L_0, L_2, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_3 = ___info0;
		String_t* L_4 = ___data2;
		RuntimeTypeHandle_t3027515415  L_5 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_6 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		SerializationInfo_AddValue_m3906743584(L_3, _stringLiteral2037252898, L_4, L_6, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_7 = ___info0;
		int32_t L_8 = ___unityType1;
		NullCheck(L_7);
		SerializationInfo_AddValue_m412754688(L_7, _stringLiteral3283586028, L_8, /*hidden argument*/NULL);
		RuntimeAssembly_t1451753063 * L_9 = ___assembly3;
		bool L_10 = Assembly_op_Equality_m3828289814(NULL /*static, unused*/, L_9, (Assembly_t *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0043;
		}
	}
	{
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_0 = L_11;
		goto IL_004a;
	}

IL_0043:
	{
		RuntimeAssembly_t1451753063 * L_12 = ___assembly3;
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.Assembly::get_FullName() */, L_12);
		V_0 = L_13;
	}

IL_004a:
	{
		SerializationInfo_t950877179 * L_14 = ___info0;
		String_t* L_15 = V_0;
		NullCheck(L_14);
		SerializationInfo_AddValue_m2872281893(L_14, _stringLiteral209558951, L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnitySerializationHolder__ctor_m3869442095 (UnitySerializationHolder_t431912834 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder__ctor_m3869442095_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral79347, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0014:
	{
		SerializationInfo_t950877179 * L_2 = ___info0;
		NullCheck(L_2);
		int32_t L_3 = SerializationInfo_GetInt32_m2640574809(L_2, _stringLiteral3283586028, /*hidden argument*/NULL);
		__this->set_m_unityType_7(L_3);
		int32_t L_4 = __this->get_m_unityType_7();
		if ((!(((uint32_t)L_4) == ((uint32_t)3))))
		{
			goto IL_002f;
		}
	}
	{
		return;
	}

IL_002f:
	{
		int32_t L_5 = __this->get_m_unityType_7();
		if ((!(((uint32_t)L_5) == ((uint32_t)7))))
		{
			goto IL_00aa;
		}
	}
	{
		SerializationInfo_t950877179 * L_6 = ___info0;
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (MethodBase_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject * L_9 = SerializationInfo_GetValue_m42271953(L_6, _stringLiteral98117656, L_8, /*hidden argument*/NULL);
		__this->set_m_declaringMethod_4(((MethodBase_t *)IsInstClass((RuntimeObject*)L_9, MethodBase_t_il2cpp_TypeInfo_var)));
		SerializationInfo_t950877179 * L_10 = ___info0;
		RuntimeTypeHandle_t3027515415  L_11 = { reinterpret_cast<intptr_t> (Type_t_0_0_0_var) };
		Type_t * L_12 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject * L_13 = SerializationInfo_GetValue_m42271953(L_10, _stringLiteral2725392681, L_12, /*hidden argument*/NULL);
		__this->set_m_declaringType_3(((Type_t *)IsInstClass((RuntimeObject*)L_13, Type_t_il2cpp_TypeInfo_var)));
		SerializationInfo_t950877179 * L_14 = ___info0;
		NullCheck(L_14);
		int32_t L_15 = SerializationInfo_GetInt32_m2640574809(L_14, _stringLiteral3378664767, /*hidden argument*/NULL);
		__this->set_m_genericParameterPosition_2(L_15);
		SerializationInfo_t950877179 * L_16 = ___info0;
		RuntimeTypeHandle_t3027515415  L_17 = { reinterpret_cast<intptr_t> (Int32U5BU5D_t385246372_0_0_0_var) };
		Type_t * L_18 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		RuntimeObject * L_19 = SerializationInfo_GetValue_m42271953(L_16, _stringLiteral3927933503, L_18, /*hidden argument*/NULL);
		__this->set_m_elementTypes_1(((Int32U5BU5D_t385246372*)IsInst((RuntimeObject*)L_19, Int32U5BU5D_t385246372_il2cpp_TypeInfo_var)));
		return;
	}

IL_00aa:
	{
		int32_t L_20 = __this->get_m_unityType_7();
		if ((!(((uint32_t)L_20) == ((uint32_t)8))))
		{
			goto IL_00f3;
		}
	}
	{
		SerializationInfo_t950877179 * L_21 = ___info0;
		RuntimeTypeHandle_t3027515415  L_22 = { reinterpret_cast<intptr_t> (TypeU5BU5D_t3940880105_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_23 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		RuntimeObject * L_24 = SerializationInfo_GetValue_m42271953(L_21, _stringLiteral1245918466, L_23, /*hidden argument*/NULL);
		__this->set_m_instantiation_0(((TypeU5BU5D_t3940880105*)IsInst((RuntimeObject*)L_24, TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var)));
		SerializationInfo_t950877179 * L_25 = ___info0;
		RuntimeTypeHandle_t3027515415  L_26 = { reinterpret_cast<intptr_t> (Int32U5BU5D_t385246372_0_0_0_var) };
		Type_t * L_27 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		RuntimeObject * L_28 = SerializationInfo_GetValue_m42271953(L_25, _stringLiteral3927933503, L_27, /*hidden argument*/NULL);
		__this->set_m_elementTypes_1(((Int32U5BU5D_t385246372*)IsInst((RuntimeObject*)L_28, Int32U5BU5D_t385246372_il2cpp_TypeInfo_var)));
	}

IL_00f3:
	{
		SerializationInfo_t950877179 * L_29 = ___info0;
		NullCheck(L_29);
		String_t* L_30 = SerializationInfo_GetString_m3155282843(L_29, _stringLiteral2037252898, /*hidden argument*/NULL);
		__this->set_m_data_5(L_30);
		SerializationInfo_t950877179 * L_31 = ___info0;
		NullCheck(L_31);
		String_t* L_32 = SerializationInfo_GetString_m3155282843(L_31, _stringLiteral209558951, /*hidden argument*/NULL);
		__this->set_m_assemblyName_6(L_32);
		return;
	}
}
// System.Void System.UnitySerializationHolder::ThrowInsufficientInformation(System.String)
extern "C"  void UnitySerializationHolder_ThrowInsufficientInformation_m1747464776 (UnitySerializationHolder_t431912834 * __this, String_t* ___field0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_ThrowInsufficientInformation_m1747464776_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		String_t* L_1 = ___field0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_1);
		String_t* L_2 = Environment_GetResourceString_m479507158(NULL /*static, unused*/, _stringLiteral3245515088, L_0, /*hidden argument*/NULL);
		SerializationException_t3941511869 * L_3 = (SerializationException_t3941511869 *)il2cpp_codegen_object_new(SerializationException_t3941511869_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3862484944(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}
}
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnitySerializationHolder_GetObjectData_m3377455907 (UnitySerializationHolder_t431912834 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_GetObjectData_m3377455907_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral532335187, /*hidden argument*/NULL);
		NotSupportedException_t1314879016 * L_1 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}
}
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C"  RuntimeObject * UnitySerializationHolder_GetRealObject_m1624354633 (UnitySerializationHolder_t431912834 * __this, StreamingContext_t3711869237  ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_GetRealObject_m1624354633_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Type_t * V_1 = NULL;
	Module_t2987026101 * V_2 = NULL;
	{
		int32_t L_0 = __this->get_m_unityType_7();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0034;
			}
			case 1:
			{
				goto IL_003a;
			}
			case 2:
			{
				goto IL_0040;
			}
			case 3:
			{
				goto IL_00e7;
			}
			case 4:
			{
				goto IL_014e;
			}
			case 5:
			{
				goto IL_01cb;
			}
			case 6:
			{
				goto IL_0086;
			}
			case 7:
			{
				goto IL_0046;
			}
		}
	}
	{
		goto IL_020a;
	}

IL_0034:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Empty_t4129602447_il2cpp_TypeInfo_var);
		Empty_t4129602447 * L_2 = ((Empty_t4129602447_StaticFields*)il2cpp_codegen_static_fields_for(Empty_t4129602447_il2cpp_TypeInfo_var))->get_Value_0();
		return L_2;
	}

IL_003a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DBNull_t3725197148_il2cpp_TypeInfo_var);
		DBNull_t3725197148 * L_3 = ((DBNull_t3725197148_StaticFields*)il2cpp_codegen_static_fields_for(DBNull_t3725197148_il2cpp_TypeInfo_var))->get_Value_0();
		return L_3;
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Missing_t508514592_il2cpp_TypeInfo_var);
		Missing_t508514592 * L_4 = ((Missing_t508514592_StaticFields*)il2cpp_codegen_static_fields_for(Missing_t508514592_il2cpp_TypeInfo_var))->get_Value_0();
		return L_4;
	}

IL_0046:
	{
		__this->set_m_unityType_7(4);
		StreamingContext_t3711869237  L_5 = ___context0;
		RuntimeObject * L_6 = VirtFuncInvoker1< RuntimeObject *, StreamingContext_t3711869237  >::Invoke(7 /* System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext) */, __this, L_5);
		V_1 = ((Type_t *)IsInstClass((RuntimeObject*)L_6, Type_t_il2cpp_TypeInfo_var));
		__this->set_m_unityType_7(8);
		TypeU5BU5D_t3940880105* L_7 = __this->get_m_instantiation_0();
		NullCheck(L_7);
		int32_t L_8 = 0;
		Type_t * L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_10 = Type_op_Equality_m2683486427(NULL /*static, unused*/, L_9, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0073;
		}
	}
	{
		return NULL;
	}

IL_0073:
	{
		Type_t * L_11 = V_1;
		TypeU5BU5D_t3940880105* L_12 = __this->get_m_instantiation_0();
		NullCheck(L_11);
		Type_t * L_13 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t3940880105* >::Invoke(98 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_11, L_12);
		Type_t * L_14 = UnitySerializationHolder_MakeElementTypes_m672301684(__this, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0086:
	{
		MethodBase_t * L_15 = __this->get_m_declaringMethod_4();
		bool L_16 = MethodBase_op_Equality_m2405991987(NULL /*static, unused*/, L_15, (MethodBase_t *)NULL, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00ad;
		}
	}
	{
		Type_t * L_17 = __this->get_m_declaringType_3();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_18 = Type_op_Equality_m2683486427(NULL /*static, unused*/, L_17, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00ad;
		}
	}
	{
		UnitySerializationHolder_ThrowInsufficientInformation_m1747464776(__this, _stringLiteral1313207612, /*hidden argument*/NULL);
	}

IL_00ad:
	{
		MethodBase_t * L_19 = __this->get_m_declaringMethod_4();
		bool L_20 = MethodBase_op_Inequality_m736913402(NULL /*static, unused*/, L_19, (MethodBase_t *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00ce;
		}
	}
	{
		MethodBase_t * L_21 = __this->get_m_declaringMethod_4();
		NullCheck(L_21);
		TypeU5BU5D_t3940880105* L_22 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(26 /* System.Type[] System.Reflection.MethodBase::GetGenericArguments() */, L_21);
		int32_t L_23 = __this->get_m_genericParameterPosition_2();
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Type_t * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		return L_25;
	}

IL_00ce:
	{
		Type_t * L_26 = __this->get_m_declaringType_3();
		NullCheck(L_26);
		TypeU5BU5D_t3940880105* L_27 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(102 /* System.Type[] System.Type::GetGenericArguments() */, L_26);
		int32_t L_28 = __this->get_m_genericParameterPosition_2();
		NullCheck(L_27);
		int32_t L_29 = L_28;
		Type_t * L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		Type_t * L_31 = UnitySerializationHolder_MakeElementTypes_m672301684(__this, L_30, /*hidden argument*/NULL);
		return L_31;
	}

IL_00e7:
	{
		String_t* L_32 = __this->get_m_data_5();
		if (!L_32)
		{
			goto IL_00fc;
		}
	}
	{
		String_t* L_33 = __this->get_m_data_5();
		NullCheck(L_33);
		int32_t L_34 = String_get_Length_m3847582255(L_33, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_0107;
		}
	}

IL_00fc:
	{
		UnitySerializationHolder_ThrowInsufficientInformation_m1747464776(__this, _stringLiteral2037252898, /*hidden argument*/NULL);
	}

IL_0107:
	{
		String_t* L_35 = __this->get_m_assemblyName_6();
		if (L_35)
		{
			goto IL_011a;
		}
	}
	{
		UnitySerializationHolder_ThrowInsufficientInformation_m1747464776(__this, _stringLiteral209558951, /*hidden argument*/NULL);
	}

IL_011a:
	{
		String_t* L_36 = __this->get_m_assemblyName_6();
		NullCheck(L_36);
		int32_t L_37 = String_get_Length_m3847582255(L_36, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_0135;
		}
	}
	{
		String_t* L_38 = __this->get_m_data_5();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_39 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_m3971160356, L_38, (bool)1, (bool)0, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089");
		return L_39;
	}

IL_0135:
	{
		String_t* L_40 = __this->get_m_assemblyName_6();
		Assembly_t * L_41 = Assembly_Load_m3487507613(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		String_t* L_42 = __this->get_m_data_5();
		NullCheck(L_41);
		Type_t * L_43 = VirtFuncInvoker3< Type_t *, String_t*, bool, bool >::Invoke(26 /* System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean,System.Boolean) */, L_41, L_42, (bool)1, (bool)0);
		return L_43;
	}

IL_014e:
	{
		String_t* L_44 = __this->get_m_data_5();
		if (!L_44)
		{
			goto IL_0163;
		}
	}
	{
		String_t* L_45 = __this->get_m_data_5();
		NullCheck(L_45);
		int32_t L_46 = String_get_Length_m3847582255(L_45, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_016e;
		}
	}

IL_0163:
	{
		UnitySerializationHolder_ThrowInsufficientInformation_m1747464776(__this, _stringLiteral2037252898, /*hidden argument*/NULL);
	}

IL_016e:
	{
		String_t* L_47 = __this->get_m_assemblyName_6();
		if (L_47)
		{
			goto IL_0181;
		}
	}
	{
		UnitySerializationHolder_ThrowInsufficientInformation_m1747464776(__this, _stringLiteral209558951, /*hidden argument*/NULL);
	}

IL_0181:
	{
		String_t* L_48 = __this->get_m_assemblyName_6();
		Assembly_t * L_49 = Assembly_Load_m3487507613(NULL /*static, unused*/, L_48, /*hidden argument*/NULL);
		String_t* L_50 = __this->get_m_data_5();
		NullCheck(L_49);
		Module_t2987026101 * L_51 = VirtFuncInvoker1< Module_t2987026101 *, String_t* >::Invoke(27 /* System.Reflection.Module System.Reflection.Assembly::GetModule(System.String) */, L_49, L_50);
		V_2 = L_51;
		Module_t2987026101 * L_52 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Module_t2987026101_il2cpp_TypeInfo_var);
		bool L_53 = Module_op_Equality_m1102431980(NULL /*static, unused*/, L_52, (Module_t2987026101 *)NULL, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_01c9;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_54 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		String_t* L_55 = __this->get_m_data_5();
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_55);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_55);
		ObjectU5BU5D_t2843939325* L_56 = L_54;
		String_t* L_57 = __this->get_m_assemblyName_6();
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_57);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_57);
		String_t* L_58 = Environment_GetResourceString_m479507158(NULL /*static, unused*/, _stringLiteral1498318814, L_56, /*hidden argument*/NULL);
		SerializationException_t3941511869 * L_59 = (SerializationException_t3941511869 *)il2cpp_codegen_object_new(SerializationException_t3941511869_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3862484944(L_59, L_58, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_59);
	}

IL_01c9:
	{
		Module_t2987026101 * L_60 = V_2;
		return L_60;
	}

IL_01cb:
	{
		String_t* L_61 = __this->get_m_data_5();
		if (!L_61)
		{
			goto IL_01e0;
		}
	}
	{
		String_t* L_62 = __this->get_m_data_5();
		NullCheck(L_62);
		int32_t L_63 = String_get_Length_m3847582255(L_62, /*hidden argument*/NULL);
		if (L_63)
		{
			goto IL_01eb;
		}
	}

IL_01e0:
	{
		UnitySerializationHolder_ThrowInsufficientInformation_m1747464776(__this, _stringLiteral2037252898, /*hidden argument*/NULL);
	}

IL_01eb:
	{
		String_t* L_64 = __this->get_m_assemblyName_6();
		if (L_64)
		{
			goto IL_01fe;
		}
	}
	{
		UnitySerializationHolder_ThrowInsufficientInformation_m1747464776(__this, _stringLiteral209558951, /*hidden argument*/NULL);
	}

IL_01fe:
	{
		String_t* L_65 = __this->get_m_assemblyName_6();
		Assembly_t * L_66 = Assembly_Load_m3487507613(NULL /*static, unused*/, L_65, /*hidden argument*/NULL);
		return L_66;
	}

IL_020a:
	{
		String_t* L_67 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral3407159193, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_68 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_68, L_67, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_68);
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
// Conversion methods for marshalling of: System.UnSafeCharBuffer
extern "C" void UnSafeCharBuffer_t2176740272_marshal_pinvoke(const UnSafeCharBuffer_t2176740272& unmarshaled, UnSafeCharBuffer_t2176740272_marshaled_pinvoke& marshaled)
{
	marshaled.___m_buffer_0 = unmarshaled.get_m_buffer_0();
	marshaled.___m_totalSize_1 = unmarshaled.get_m_totalSize_1();
	marshaled.___m_length_2 = unmarshaled.get_m_length_2();
}
extern "C" void UnSafeCharBuffer_t2176740272_marshal_pinvoke_back(const UnSafeCharBuffer_t2176740272_marshaled_pinvoke& marshaled, UnSafeCharBuffer_t2176740272& unmarshaled)
{
	unmarshaled.set_m_buffer_0(marshaled.___m_buffer_0);
	int32_t unmarshaled_m_totalSize_temp_1 = 0;
	unmarshaled_m_totalSize_temp_1 = marshaled.___m_totalSize_1;
	unmarshaled.set_m_totalSize_1(unmarshaled_m_totalSize_temp_1);
	int32_t unmarshaled_m_length_temp_2 = 0;
	unmarshaled_m_length_temp_2 = marshaled.___m_length_2;
	unmarshaled.set_m_length_2(unmarshaled_m_length_temp_2);
}
// Conversion method for clean up from marshalling of: System.UnSafeCharBuffer
extern "C" void UnSafeCharBuffer_t2176740272_marshal_pinvoke_cleanup(UnSafeCharBuffer_t2176740272_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.UnSafeCharBuffer
extern "C" void UnSafeCharBuffer_t2176740272_marshal_com(const UnSafeCharBuffer_t2176740272& unmarshaled, UnSafeCharBuffer_t2176740272_marshaled_com& marshaled)
{
	marshaled.___m_buffer_0 = unmarshaled.get_m_buffer_0();
	marshaled.___m_totalSize_1 = unmarshaled.get_m_totalSize_1();
	marshaled.___m_length_2 = unmarshaled.get_m_length_2();
}
extern "C" void UnSafeCharBuffer_t2176740272_marshal_com_back(const UnSafeCharBuffer_t2176740272_marshaled_com& marshaled, UnSafeCharBuffer_t2176740272& unmarshaled)
{
	unmarshaled.set_m_buffer_0(marshaled.___m_buffer_0);
	int32_t unmarshaled_m_totalSize_temp_1 = 0;
	unmarshaled_m_totalSize_temp_1 = marshaled.___m_totalSize_1;
	unmarshaled.set_m_totalSize_1(unmarshaled_m_totalSize_temp_1);
	int32_t unmarshaled_m_length_temp_2 = 0;
	unmarshaled_m_length_temp_2 = marshaled.___m_length_2;
	unmarshaled.set_m_length_2(unmarshaled_m_length_temp_2);
}
// Conversion method for clean up from marshalling of: System.UnSafeCharBuffer
extern "C" void UnSafeCharBuffer_t2176740272_marshal_com_cleanup(UnSafeCharBuffer_t2176740272_marshaled_com& marshaled)
{
}
// System.Void System.UnSafeCharBuffer::.ctor(System.Char*,System.Int32)
extern "C"  void UnSafeCharBuffer__ctor_m1145239641 (UnSafeCharBuffer_t2176740272 * __this, Il2CppChar* ___buffer0, int32_t ___bufferSize1, const RuntimeMethod* method)
{
	{
		Il2CppChar* L_0 = ___buffer0;
		__this->set_m_buffer_0((Il2CppChar*)L_0);
		int32_t L_1 = ___bufferSize1;
		__this->set_m_totalSize_1(L_1);
		__this->set_m_length_2(0);
		return;
	}
}
extern "C"  void UnSafeCharBuffer__ctor_m1145239641_AdjustorThunk (RuntimeObject * __this, Il2CppChar* ___buffer0, int32_t ___bufferSize1, const RuntimeMethod* method)
{
	UnSafeCharBuffer_t2176740272 * _thisAdjusted = reinterpret_cast<UnSafeCharBuffer_t2176740272 *>(__this + 1);
	UnSafeCharBuffer__ctor_m1145239641(_thisAdjusted, ___buffer0, ___bufferSize1, method);
}
// System.Void System.UnSafeCharBuffer::AppendString(System.String)
extern "C"  void UnSafeCharBuffer_AppendString_m2223303597 (UnSafeCharBuffer_t2176740272 * __this, String_t* ___stringToAppend0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnSafeCharBuffer_AppendString_m2223303597_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		String_t* L_0 = ___stringToAppend0;
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		int32_t L_2 = __this->get_m_totalSize_1();
		int32_t L_3 = __this->get_m_length_2();
		String_t* L_4 = ___stringToAppend0;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m3847582255(L_4, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3))) >= ((int32_t)L_5)))
		{
			goto IL_0024;
		}
	}
	{
		IndexOutOfRangeException_t1578797820 * L_6 = (IndexOutOfRangeException_t1578797820 *)il2cpp_codegen_object_new(IndexOutOfRangeException_t1578797820_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m2441337274(L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6);
	}

IL_0024:
	{
		String_t* L_7 = ___stringToAppend0;
		V_1 = L_7;
		String_t* L_8 = V_1;
		V_0 = (Il2CppChar*)(((intptr_t)L_8));
		Il2CppChar* L_9 = V_0;
		if (!L_9)
		{
			goto IL_0034;
		}
	}
	{
		Il2CppChar* L_10 = V_0;
		int32_t L_11 = RuntimeHelpers_get_OffsetToStringData_m2192601476(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_10, (int32_t)L_11));
	}

IL_0034:
	{
		Il2CppChar* L_12 = __this->get_m_buffer_0();
		int32_t L_13 = __this->get_m_length_2();
		Il2CppChar* L_14 = V_0;
		String_t* L_15 = ___stringToAppend0;
		NullCheck(L_15);
		int32_t L_16 = String_get_Length_m3847582255(L_15, /*hidden argument*/NULL);
		Buffer_Memcpy_m2035854300(NULL /*static, unused*/, (uint8_t*)(uint8_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_12, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_13)), (int32_t)2)))), (uint8_t*)(uint8_t*)L_14, ((int32_t)il2cpp_codegen_multiply((int32_t)L_16, (int32_t)2)), /*hidden argument*/NULL);
		V_1 = (String_t*)NULL;
		int32_t L_17 = __this->get_m_length_2();
		String_t* L_18 = ___stringToAppend0;
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_m3847582255(L_18, /*hidden argument*/NULL);
		__this->set_m_length_2(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_19)));
		return;
	}
}
extern "C"  void UnSafeCharBuffer_AppendString_m2223303597_AdjustorThunk (RuntimeObject * __this, String_t* ___stringToAppend0, const RuntimeMethod* method)
{
	UnSafeCharBuffer_t2176740272 * _thisAdjusted = reinterpret_cast<UnSafeCharBuffer_t2176740272 *>(__this + 1);
	UnSafeCharBuffer_AppendString_m2223303597(_thisAdjusted, ___stringToAppend0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.ValueType
extern "C" void ValueType_t3640485471_marshal_pinvoke(const ValueType_t3640485471& unmarshaled, ValueType_t3640485471_marshaled_pinvoke& marshaled)
{
}
extern "C" void ValueType_t3640485471_marshal_pinvoke_back(const ValueType_t3640485471_marshaled_pinvoke& marshaled, ValueType_t3640485471& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: System.ValueType
extern "C" void ValueType_t3640485471_marshal_pinvoke_cleanup(ValueType_t3640485471_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.ValueType
extern "C" void ValueType_t3640485471_marshal_com(const ValueType_t3640485471& unmarshaled, ValueType_t3640485471_marshaled_com& marshaled)
{
}
extern "C" void ValueType_t3640485471_marshal_com_back(const ValueType_t3640485471_marshaled_com& marshaled, ValueType_t3640485471& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: System.ValueType
extern "C" void ValueType_t3640485471_marshal_com_cleanup(ValueType_t3640485471_marshaled_com& marshaled)
{
}
// System.Void System.ValueType::.ctor()
extern "C"  void ValueType__ctor_m2036258423 (RuntimeObject * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.ValueType::InternalEquals(System.Object,System.Object,System.Object[]&)
extern "C"  bool ValueType_InternalEquals_m1384040357 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o10, RuntimeObject * ___o21, ObjectU5BU5D_t2843939325** ___fields2, const RuntimeMethod* method)
{
	typedef bool (*ValueType_InternalEquals_m1384040357_ftn) (RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325**);
	using namespace il2cpp::icalls;
	return  ((ValueType_InternalEquals_m1384040357_ftn)mscorlib::System::ValueType::InternalEquals) (___o10, ___o21, ___fields2);
}
// System.Boolean System.ValueType::DefaultEquals(System.Object,System.Object)
extern "C"  bool ValueType_DefaultEquals_m2927252100 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o10, RuntimeObject * ___o21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueType_DefaultEquals_m2927252100_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeType_t3636489352 * V_0 = NULL;
	ObjectU5BU5D_t2843939325* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	RuntimeObject * V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	{
		RuntimeObject * L_0 = ___o10;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		RuntimeObject * L_1 = ___o21;
		if (L_1)
		{
			goto IL_0008;
		}
	}
	{
		return (bool)1;
	}

IL_0008:
	{
		RuntimeObject * L_2 = ___o10;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		RuntimeObject * L_3 = ___o21;
		if (L_3)
		{
			goto IL_0010;
		}
	}

IL_000e:
	{
		return (bool)0;
	}

IL_0010:
	{
		RuntimeObject * L_4 = ___o10;
		NullCheck(L_4);
		Type_t * L_5 = Object_GetType_m88164663(L_4, /*hidden argument*/NULL);
		RuntimeObject * L_6 = ___o21;
		NullCheck(L_6);
		Type_t * L_7 = Object_GetType_m88164663(L_6, /*hidden argument*/NULL);
		V_0 = ((RuntimeType_t3636489352 *)CastclassClass((RuntimeObject*)L_7, RuntimeType_t3636489352_il2cpp_TypeInfo_var));
		RuntimeType_t3636489352 * L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeType_t3636489352_il2cpp_TypeInfo_var);
		bool L_9 = RuntimeType_op_Inequality_m287584116(NULL /*static, unused*/, ((RuntimeType_t3636489352 *)CastclassClass((RuntimeObject*)L_5, RuntimeType_t3636489352_il2cpp_TypeInfo_var)), L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0031:
	{
		RuntimeObject * L_10 = ___o10;
		RuntimeObject * L_11 = ___o21;
		bool L_12 = ValueType_InternalEquals_m1384040357(NULL /*static, unused*/, L_10, L_11, (&V_1), /*hidden argument*/NULL);
		V_2 = L_12;
		ObjectU5BU5D_t2843939325* L_13 = V_1;
		if (L_13)
		{
			goto IL_0040;
		}
	}
	{
		bool L_14 = V_2;
		return L_14;
	}

IL_0040:
	{
		V_3 = 0;
		goto IL_006b;
	}

IL_0044:
	{
		ObjectU5BU5D_t2843939325* L_15 = V_1;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_4 = L_18;
		ObjectU5BU5D_t2843939325* L_19 = V_1;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		RuntimeObject * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_5 = L_22;
		RuntimeObject * L_23 = V_4;
		if (L_23)
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject * L_24 = V_5;
		if (!L_24)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_005a:
	{
		RuntimeObject * L_25 = V_4;
		RuntimeObject * L_26 = V_5;
		NullCheck(L_25);
		bool L_27 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_25, L_26);
		if (L_27)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)2));
	}

IL_006b:
	{
		int32_t L_29 = V_3;
		ObjectU5BU5D_t2843939325* L_30 = V_1;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_30)->max_length)))))))
		{
			goto IL_0044;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean System.ValueType::Equals(System.Object)
extern "C"  bool ValueType_Equals_m1524437845 (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		bool L_1 = ValueType_DefaultEquals_m2927252100(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.ValueType::InternalGetHashCode(System.Object,System.Object[]&)
extern "C"  int32_t ValueType_InternalGetHashCode_m58786863 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o0, ObjectU5BU5D_t2843939325** ___fields1, const RuntimeMethod* method)
{
	typedef int32_t (*ValueType_InternalGetHashCode_m58786863_ftn) (RuntimeObject *, ObjectU5BU5D_t2843939325**);
	using namespace il2cpp::icalls;
	return  ((ValueType_InternalGetHashCode_m58786863_ftn)mscorlib::System::ValueType::InternalGetHashCode) (___o0, ___fields1);
}
// System.Int32 System.ValueType::GetHashCode()
extern "C"  int32_t ValueType_GetHashCode_m715362416 (RuntimeObject * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ValueType_InternalGetHashCode_m58786863(NULL /*static, unused*/, __this, (&V_0), /*hidden argument*/NULL);
		V_1 = L_0;
		ObjectU5BU5D_t2843939325* L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		V_2 = 0;
		goto IL_0024;
	}

IL_0010:
	{
		ObjectU5BU5D_t2843939325* L_2 = V_0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_6 = V_1;
		ObjectU5BU5D_t2843939325* L_7 = V_0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		int32_t L_11 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_10);
		V_1 = ((int32_t)((int32_t)L_6^(int32_t)L_11));
	}

IL_0020:
	{
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0024:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t2843939325* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))))
		{
			goto IL_0010;
		}
	}

IL_002a:
	{
		int32_t L_15 = V_1;
		return L_15;
	}
}
// System.String System.ValueType::ToString()
extern "C"  String_t* ValueType_ToString_m2292123621 (RuntimeObject * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = Object_GetType_m88164663(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(27 /* System.String System.Type::get_FullName() */, L_0);
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
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Version__ctor_m417728625 (Version_t3456873960 * __this, int32_t ___major0, int32_t ___minor1, int32_t ___build2, int32_t ___revision3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version__ctor_m417728625_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__Build_2((-1));
		__this->set__Revision_3((-1));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___major0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_1 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral2448690427, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_2, _stringLiteral419133523, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_002d:
	{
		int32_t L_3 = ___minor1;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_4 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral2448690427, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_5 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_5, _stringLiteral2762033855, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5);
	}

IL_0046:
	{
		int32_t L_6 = ___build2;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_7 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral2448690427, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_8 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_8, _stringLiteral437191301, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8);
	}

IL_005f:
	{
		int32_t L_9 = ___revision3;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		String_t* L_10 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral2448690427, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_11 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_11, _stringLiteral3187820736, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11);
	}

IL_0079:
	{
		int32_t L_12 = ___major0;
		__this->set__Major_0(L_12);
		int32_t L_13 = ___minor1;
		__this->set__Minor_1(L_13);
		int32_t L_14 = ___build2;
		__this->set__Build_2(L_14);
		int32_t L_15 = ___revision3;
		__this->set__Revision_3(L_15);
		return;
	}
}
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32)
extern "C"  void Version__ctor_m1550720073 (Version_t3456873960 * __this, int32_t ___major0, int32_t ___minor1, int32_t ___build2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version__ctor_m1550720073_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__Build_2((-1));
		__this->set__Revision_3((-1));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___major0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_1 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral2448690427, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_2, _stringLiteral419133523, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_002d:
	{
		int32_t L_3 = ___minor1;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_4 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral2448690427, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_5 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_5, _stringLiteral2762033855, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5);
	}

IL_0046:
	{
		int32_t L_6 = ___build2;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_7 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral2448690427, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_8 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_8, _stringLiteral437191301, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8);
	}

IL_005f:
	{
		int32_t L_9 = ___major0;
		__this->set__Major_0(L_9);
		int32_t L_10 = ___minor1;
		__this->set__Minor_1(L_10);
		int32_t L_11 = ___build2;
		__this->set__Build_2(L_11);
		return;
	}
}
// System.Void System.Version::.ctor(System.Int32,System.Int32)
extern "C"  void Version__ctor_m3537335798 (Version_t3456873960 * __this, int32_t ___major0, int32_t ___minor1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version__ctor_m3537335798_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__Build_2((-1));
		__this->set__Revision_3((-1));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___major0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_1 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral2448690427, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_2, _stringLiteral419133523, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_002d:
	{
		int32_t L_3 = ___minor1;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_4 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral2448690427, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_5 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_5, _stringLiteral2762033855, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5);
	}

IL_0046:
	{
		int32_t L_6 = ___major0;
		__this->set__Major_0(L_6);
		int32_t L_7 = ___minor1;
		__this->set__Minor_1(L_7);
		return;
	}
}
// System.Void System.Version::.ctor(System.String)
extern "C"  void Version__ctor_m1394137037 (Version_t3456873960 * __this, String_t* ___version0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version__ctor_m1394137037_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Version_t3456873960 * V_0 = NULL;
	{
		__this->set__Build_2((-1));
		__this->set__Revision_3((-1));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___version0;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t3456873960_il2cpp_TypeInfo_var);
		Version_t3456873960 * L_1 = Version_Parse_m1775477436(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Version_t3456873960 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = Version_get_Major_m2457928275(L_2, /*hidden argument*/NULL);
		__this->set__Major_0(L_3);
		Version_t3456873960 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = Version_get_Minor_m150536655(L_4, /*hidden argument*/NULL);
		__this->set__Minor_1(L_5);
		Version_t3456873960 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = Version_get_Build_m3667751407(L_6, /*hidden argument*/NULL);
		__this->set__Build_2(L_7);
		Version_t3456873960 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = Version_get_Revision_m3982234017(L_8, /*hidden argument*/NULL);
		__this->set__Revision_3(L_9);
		return;
	}
}
// System.Void System.Version::.ctor()
extern "C"  void Version__ctor_m872301635 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	{
		__this->set__Build_2((-1));
		__this->set__Revision_3((-1));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		__this->set__Major_0(0);
		__this->set__Minor_1(0);
		return;
	}
}
// System.Int32 System.Version::get_Major()
extern "C"  int32_t Version_get_Major_m2457928275 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Major_0();
		return L_0;
	}
}
// System.Int32 System.Version::get_Minor()
extern "C"  int32_t Version_get_Minor_m150536655 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Minor_1();
		return L_0;
	}
}
// System.Int32 System.Version::get_Build()
extern "C"  int32_t Version_get_Build_m3667751407 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Build_2();
		return L_0;
	}
}
// System.Int32 System.Version::get_Revision()
extern "C"  int32_t Version_get_Revision_m3982234017 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Revision_3();
		return L_0;
	}
}
// System.Object System.Version::Clone()
extern "C"  RuntimeObject * Version_Clone_m1749041863 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_Clone_m1749041863_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Version_t3456873960 * L_0 = (Version_t3456873960 *)il2cpp_codegen_object_new(Version_t3456873960_il2cpp_TypeInfo_var);
		Version__ctor_m872301635(L_0, /*hidden argument*/NULL);
		Version_t3456873960 * L_1 = L_0;
		int32_t L_2 = __this->get__Major_0();
		NullCheck(L_1);
		L_1->set__Major_0(L_2);
		Version_t3456873960 * L_3 = L_1;
		int32_t L_4 = __this->get__Minor_1();
		NullCheck(L_3);
		L_3->set__Minor_1(L_4);
		Version_t3456873960 * L_5 = L_3;
		int32_t L_6 = __this->get__Build_2();
		NullCheck(L_5);
		L_5->set__Build_2(L_6);
		Version_t3456873960 * L_7 = L_5;
		int32_t L_8 = __this->get__Revision_3();
		NullCheck(L_7);
		L_7->set__Revision_3(L_8);
		return L_7;
	}
}
// System.Int32 System.Version::CompareTo(System.Object)
extern "C"  int32_t Version_CompareTo_m1662919407 (Version_t3456873960 * __this, RuntimeObject * ___version0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_CompareTo_m1662919407_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Version_t3456873960 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___version0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___version0;
		V_0 = ((Version_t3456873960 *)IsInstSealed((RuntimeObject*)L_1, Version_t3456873960_il2cpp_TypeInfo_var));
		Version_t3456873960 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t3456873960_il2cpp_TypeInfo_var);
		bool L_3 = Version_op_Equality_m3804852517(NULL /*static, unused*/, L_2, (Version_t3456873960 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_4 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral1182144617, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_5 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5);
	}

IL_0025:
	{
		int32_t L_6 = __this->get__Major_0();
		Version_t3456873960 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->get__Major_0();
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_9 = __this->get__Major_0();
		Version_t3456873960 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->get__Major_0();
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0043;
		}
	}
	{
		return 1;
	}

IL_0043:
	{
		return (-1);
	}

IL_0045:
	{
		int32_t L_12 = __this->get__Minor_1();
		Version_t3456873960 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = L_13->get__Minor_1();
		if ((((int32_t)L_12) == ((int32_t)L_14)))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_15 = __this->get__Minor_1();
		Version_t3456873960 * L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = L_16->get__Minor_1();
		if ((((int32_t)L_15) <= ((int32_t)L_17)))
		{
			goto IL_0063;
		}
	}
	{
		return 1;
	}

IL_0063:
	{
		return (-1);
	}

IL_0065:
	{
		int32_t L_18 = __this->get__Build_2();
		Version_t3456873960 * L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = L_19->get__Build_2();
		if ((((int32_t)L_18) == ((int32_t)L_20)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_21 = __this->get__Build_2();
		Version_t3456873960 * L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = L_22->get__Build_2();
		if ((((int32_t)L_21) <= ((int32_t)L_23)))
		{
			goto IL_0083;
		}
	}
	{
		return 1;
	}

IL_0083:
	{
		return (-1);
	}

IL_0085:
	{
		int32_t L_24 = __this->get__Revision_3();
		Version_t3456873960 * L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = L_25->get__Revision_3();
		if ((((int32_t)L_24) == ((int32_t)L_26)))
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_27 = __this->get__Revision_3();
		Version_t3456873960 * L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = L_28->get__Revision_3();
		if ((((int32_t)L_27) <= ((int32_t)L_29)))
		{
			goto IL_00a3;
		}
	}
	{
		return 1;
	}

IL_00a3:
	{
		return (-1);
	}

IL_00a5:
	{
		return 0;
	}
}
// System.Int32 System.Version::CompareTo(System.Version)
extern "C"  int32_t Version_CompareTo_m3146217210 (Version_t3456873960 * __this, Version_t3456873960 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_CompareTo_m3146217210_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Version_t3456873960 * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t3456873960_il2cpp_TypeInfo_var);
		bool L_1 = Version_op_Equality_m3804852517(NULL /*static, unused*/, L_0, (Version_t3456873960 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		return 1;
	}

IL_000b:
	{
		int32_t L_2 = __this->get__Major_0();
		Version_t3456873960 * L_3 = ___value0;
		NullCheck(L_3);
		int32_t L_4 = L_3->get__Major_0();
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_5 = __this->get__Major_0();
		Version_t3456873960 * L_6 = ___value0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get__Major_0();
		if ((((int32_t)L_5) <= ((int32_t)L_7)))
		{
			goto IL_0029;
		}
	}
	{
		return 1;
	}

IL_0029:
	{
		return (-1);
	}

IL_002b:
	{
		int32_t L_8 = __this->get__Minor_1();
		Version_t3456873960 * L_9 = ___value0;
		NullCheck(L_9);
		int32_t L_10 = L_9->get__Minor_1();
		if ((((int32_t)L_8) == ((int32_t)L_10)))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_11 = __this->get__Minor_1();
		Version_t3456873960 * L_12 = ___value0;
		NullCheck(L_12);
		int32_t L_13 = L_12->get__Minor_1();
		if ((((int32_t)L_11) <= ((int32_t)L_13)))
		{
			goto IL_0049;
		}
	}
	{
		return 1;
	}

IL_0049:
	{
		return (-1);
	}

IL_004b:
	{
		int32_t L_14 = __this->get__Build_2();
		Version_t3456873960 * L_15 = ___value0;
		NullCheck(L_15);
		int32_t L_16 = L_15->get__Build_2();
		if ((((int32_t)L_14) == ((int32_t)L_16)))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_17 = __this->get__Build_2();
		Version_t3456873960 * L_18 = ___value0;
		NullCheck(L_18);
		int32_t L_19 = L_18->get__Build_2();
		if ((((int32_t)L_17) <= ((int32_t)L_19)))
		{
			goto IL_0069;
		}
	}
	{
		return 1;
	}

IL_0069:
	{
		return (-1);
	}

IL_006b:
	{
		int32_t L_20 = __this->get__Revision_3();
		Version_t3456873960 * L_21 = ___value0;
		NullCheck(L_21);
		int32_t L_22 = L_21->get__Revision_3();
		if ((((int32_t)L_20) == ((int32_t)L_22)))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_23 = __this->get__Revision_3();
		Version_t3456873960 * L_24 = ___value0;
		NullCheck(L_24);
		int32_t L_25 = L_24->get__Revision_3();
		if ((((int32_t)L_23) <= ((int32_t)L_25)))
		{
			goto IL_0089;
		}
	}
	{
		return 1;
	}

IL_0089:
	{
		return (-1);
	}

IL_008b:
	{
		return 0;
	}
}
// System.Boolean System.Version::Equals(System.Object)
extern "C"  bool Version_Equals_m3073813696 (Version_t3456873960 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_Equals_m3073813696_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Version_t3456873960 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = ((Version_t3456873960 *)IsInstSealed((RuntimeObject*)L_0, Version_t3456873960_il2cpp_TypeInfo_var));
		Version_t3456873960 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t3456873960_il2cpp_TypeInfo_var);
		bool L_2 = Version_op_Equality_m3804852517(NULL /*static, unused*/, L_1, (Version_t3456873960 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		int32_t L_3 = __this->get__Major_0();
		Version_t3456873960 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get__Major_0();
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_6 = __this->get__Minor_1();
		Version_t3456873960 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->get__Minor_1();
		if ((!(((uint32_t)L_6) == ((uint32_t)L_8))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_9 = __this->get__Build_2();
		Version_t3456873960 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->get__Build_2();
		if ((!(((uint32_t)L_9) == ((uint32_t)L_11))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_12 = __this->get__Revision_3();
		Version_t3456873960 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = L_13->get__Revision_3();
		if ((((int32_t)L_12) == ((int32_t)L_14)))
		{
			goto IL_004c;
		}
	}

IL_004a:
	{
		return (bool)0;
	}

IL_004c:
	{
		return (bool)1;
	}
}
// System.Boolean System.Version::Equals(System.Version)
extern "C"  bool Version_Equals_m1564427710 (Version_t3456873960 * __this, Version_t3456873960 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_Equals_m1564427710_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Version_t3456873960 * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t3456873960_il2cpp_TypeInfo_var);
		bool L_1 = Version_op_Equality_m3804852517(NULL /*static, unused*/, L_0, (Version_t3456873960 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		int32_t L_2 = __this->get__Major_0();
		Version_t3456873960 * L_3 = ___obj0;
		NullCheck(L_3);
		int32_t L_4 = L_3->get__Major_0();
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_5 = __this->get__Minor_1();
		Version_t3456873960 * L_6 = ___obj0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get__Minor_1();
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_8 = __this->get__Build_2();
		Version_t3456873960 * L_9 = ___obj0;
		NullCheck(L_9);
		int32_t L_10 = L_9->get__Build_2();
		if ((!(((uint32_t)L_8) == ((uint32_t)L_10))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_11 = __this->get__Revision_3();
		Version_t3456873960 * L_12 = ___obj0;
		NullCheck(L_12);
		int32_t L_13 = L_12->get__Revision_3();
		if ((((int32_t)L_11) == ((int32_t)L_13)))
		{
			goto IL_0045;
		}
	}

IL_0043:
	{
		return (bool)0;
	}

IL_0045:
	{
		return (bool)1;
	}
}
// System.Int32 System.Version::GetHashCode()
extern "C"  int32_t Version_GetHashCode_m672974201 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Major_0();
		int32_t L_1 = __this->get__Minor_1();
		int32_t L_2 = __this->get__Build_2();
		int32_t L_3 = __this->get__Revision_3();
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)0|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)15)))<<(int32_t)((int32_t)28)))))|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)20)))))|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)12)))))|(int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)4095)))));
	}
}
// System.String System.Version::ToString()
extern "C"  String_t* Version_ToString_m2279867705 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Build_2();
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = Version_ToString_m3654989516(__this, 2, /*hidden argument*/NULL);
		return L_1;
	}

IL_0011:
	{
		int32_t L_2 = __this->get__Revision_3();
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_3 = Version_ToString_m3654989516(__this, 3, /*hidden argument*/NULL);
		return L_3;
	}

IL_0022:
	{
		String_t* L_4 = Version_ToString_m3654989516(__this, 4, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String System.Version::ToString(System.Int32)
extern "C"  String_t* Version_ToString_m3654989516 (Version_t3456873960 * __this, int32_t ___fieldCount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_ToString_m3654989516_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		int32_t L_0 = ___fieldCount0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0014;
			}
			case 1:
			{
				goto IL_001a;
			}
			case 2:
			{
				goto IL_0026;
			}
		}
	}
	{
		goto IL_0056;
	}

IL_0014:
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_1;
	}

IL_001a:
	{
		int32_t* L_2 = __this->get_address_of__Major_0();
		String_t* L_3 = Int32_ToString_m141394615(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0026:
	{
		StringBuilder_t * L_4 = StringBuilderCache_Acquire_m4169564332(NULL /*static, unused*/, ((int32_t)16), /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = __this->get__Major_0();
		StringBuilder_t * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t3456873960_il2cpp_TypeInfo_var);
		Version_AppendPositiveNumber_m308762805(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		StringBuilder_t * L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_Append_m2383614642(L_7, ((int32_t)46), /*hidden argument*/NULL);
		int32_t L_8 = __this->get__Minor_1();
		StringBuilder_t * L_9 = V_0;
		Version_AppendPositiveNumber_m308762805(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		StringBuilder_t * L_10 = V_0;
		String_t* L_11 = StringBuilderCache_GetStringAndRelease_m1110745745(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0056:
	{
		int32_t L_12 = __this->get__Build_2();
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
		{
			goto IL_008a;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_13 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral3452614544);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3452614544);
		ObjectU5BU5D_t2843939325* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral3452614542);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral3452614542);
		String_t* L_15 = Environment_GetResourceString_m479507158(NULL /*static, unused*/, _stringLiteral3104458722, L_14, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_16 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_16, L_15, _stringLiteral3976682977, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16);
	}

IL_008a:
	{
		int32_t L_17 = ___fieldCount0;
		if ((!(((uint32_t)L_17) == ((uint32_t)3))))
		{
			goto IL_00d3;
		}
	}
	{
		StringBuilder_t * L_18 = StringBuilderCache_Acquire_m4169564332(NULL /*static, unused*/, ((int32_t)16), /*hidden argument*/NULL);
		V_0 = L_18;
		int32_t L_19 = __this->get__Major_0();
		StringBuilder_t * L_20 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t3456873960_il2cpp_TypeInfo_var);
		Version_AppendPositiveNumber_m308762805(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		StringBuilder_t * L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_Append_m2383614642(L_21, ((int32_t)46), /*hidden argument*/NULL);
		int32_t L_22 = __this->get__Minor_1();
		StringBuilder_t * L_23 = V_0;
		Version_AppendPositiveNumber_m308762805(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
		StringBuilder_t * L_24 = V_0;
		NullCheck(L_24);
		StringBuilder_Append_m2383614642(L_24, ((int32_t)46), /*hidden argument*/NULL);
		int32_t L_25 = __this->get__Build_2();
		StringBuilder_t * L_26 = V_0;
		Version_AppendPositiveNumber_m308762805(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		StringBuilder_t * L_27 = V_0;
		String_t* L_28 = StringBuilderCache_GetStringAndRelease_m1110745745(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		return L_28;
	}

IL_00d3:
	{
		int32_t L_29 = __this->get__Revision_3();
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_0107;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_30 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteral3452614544);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3452614544);
		ObjectU5BU5D_t2843939325* L_31 = L_30;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteral3452614541);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral3452614541);
		String_t* L_32 = Environment_GetResourceString_m479507158(NULL /*static, unused*/, _stringLiteral3104458722, L_31, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_33 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_33, L_32, _stringLiteral3976682977, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33);
	}

IL_0107:
	{
		int32_t L_34 = ___fieldCount0;
		if ((!(((uint32_t)L_34) == ((uint32_t)4))))
		{
			goto IL_0165;
		}
	}
	{
		StringBuilder_t * L_35 = StringBuilderCache_Acquire_m4169564332(NULL /*static, unused*/, ((int32_t)16), /*hidden argument*/NULL);
		V_0 = L_35;
		int32_t L_36 = __this->get__Major_0();
		StringBuilder_t * L_37 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t3456873960_il2cpp_TypeInfo_var);
		Version_AppendPositiveNumber_m308762805(NULL /*static, unused*/, L_36, L_37, /*hidden argument*/NULL);
		StringBuilder_t * L_38 = V_0;
		NullCheck(L_38);
		StringBuilder_Append_m2383614642(L_38, ((int32_t)46), /*hidden argument*/NULL);
		int32_t L_39 = __this->get__Minor_1();
		StringBuilder_t * L_40 = V_0;
		Version_AppendPositiveNumber_m308762805(NULL /*static, unused*/, L_39, L_40, /*hidden argument*/NULL);
		StringBuilder_t * L_41 = V_0;
		NullCheck(L_41);
		StringBuilder_Append_m2383614642(L_41, ((int32_t)46), /*hidden argument*/NULL);
		int32_t L_42 = __this->get__Build_2();
		StringBuilder_t * L_43 = V_0;
		Version_AppendPositiveNumber_m308762805(NULL /*static, unused*/, L_42, L_43, /*hidden argument*/NULL);
		StringBuilder_t * L_44 = V_0;
		NullCheck(L_44);
		StringBuilder_Append_m2383614642(L_44, ((int32_t)46), /*hidden argument*/NULL);
		int32_t L_45 = __this->get__Revision_3();
		StringBuilder_t * L_46 = V_0;
		Version_AppendPositiveNumber_m308762805(NULL /*static, unused*/, L_45, L_46, /*hidden argument*/NULL);
		StringBuilder_t * L_47 = V_0;
		String_t* L_48 = StringBuilderCache_GetStringAndRelease_m1110745745(NULL /*static, unused*/, L_47, /*hidden argument*/NULL);
		return L_48;
	}

IL_0165:
	{
		ObjectU5BU5D_t2843939325* L_49 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, _stringLiteral3452614544);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3452614544);
		ObjectU5BU5D_t2843939325* L_50 = L_49;
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, _stringLiteral3452614540);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral3452614540);
		String_t* L_51 = Environment_GetResourceString_m479507158(NULL /*static, unused*/, _stringLiteral3104458722, L_50, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_52 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_52, L_51, _stringLiteral3976682977, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_52);
	}
}
// System.Void System.Version::AppendPositiveNumber(System.Int32,System.Text.StringBuilder)
extern "C"  void Version_AppendPositiveNumber_m308762805 (RuntimeObject * __this /* static, unused */, int32_t ___num0, StringBuilder_t * ___sb1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		StringBuilder_t * L_0 = ___sb1;
		NullCheck(L_0);
		int32_t L_1 = StringBuilder_get_Length_m3238060835(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	{
		int32_t L_2 = ___num0;
		V_1 = ((int32_t)((int32_t)L_2%(int32_t)((int32_t)10)));
		int32_t L_3 = ___num0;
		___num0 = ((int32_t)((int32_t)L_3/(int32_t)((int32_t)10)));
		StringBuilder_t * L_4 = ___sb1;
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_4);
		StringBuilder_Insert_m1076119876(L_4, L_5, (((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)48), (int32_t)L_6))))), /*hidden argument*/NULL);
		int32_t L_7 = ___num0;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Version System.Version::Parse(System.String)
extern "C"  Version_t3456873960 * Version_Parse_m1775477436 (RuntimeObject * __this /* static, unused */, String_t* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_Parse_m1775477436_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VersionResult_t4090266424  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		String_t* L_0 = ___input0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral818277059, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_000e:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(VersionResult_t4090266424 ));
		VersionResult_Init_m1480155778((&V_0), _stringLiteral818277059, (bool)1, /*hidden argument*/NULL);
		String_t* L_2 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t3456873960_il2cpp_TypeInfo_var);
		bool L_3 = Version_TryParseVersion_m1428065303(NULL /*static, unused*/, L_2, (&V_0), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0035;
		}
	}
	{
		Exception_t * L_4 = VersionResult_GetVersionParseException_m2052602218((&V_0), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4);
	}

IL_0035:
	{
		VersionResult_t4090266424  L_5 = V_0;
		Version_t3456873960 * L_6 = L_5.get_m_parsedVersion_0();
		return L_6;
	}
}
// System.Boolean System.Version::TryParseVersion(System.String,System.Version/VersionResult&)
extern "C"  bool Version_TryParseVersion_m1428065303 (RuntimeObject * __this /* static, unused */, String_t* ___version0, VersionResult_t4090266424 * ___result1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_TryParseVersion_m1428065303_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	StringU5BU5D_t1281789340* V_4 = NULL;
	int32_t V_5 = 0;
	{
		String_t* L_0 = ___version0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		VersionResult_t4090266424 * L_1 = ___result1;
		VersionResult_SetFailure_m3577471770(L_1, 0, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_000c:
	{
		String_t* L_2 = ___version0;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t3456873960_il2cpp_TypeInfo_var);
		CharU5BU5D_t3528271667* L_3 = ((Version_t3456873960_StaticFields*)il2cpp_codegen_static_fields_for(Version_t3456873960_il2cpp_TypeInfo_var))->get_SeparatorsArray_4();
		NullCheck(L_2);
		StringU5BU5D_t1281789340* L_4 = String_Split_m3646115398(L_2, L_3, /*hidden argument*/NULL);
		V_4 = L_4;
		StringU5BU5D_t1281789340* L_5 = V_4;
		NullCheck(L_5);
		V_5 = (((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length))));
		int32_t L_6 = V_5;
		if ((((int32_t)L_6) < ((int32_t)2)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_7 = V_5;
		if ((((int32_t)L_7) <= ((int32_t)4)))
		{
			goto IL_0032;
		}
	}

IL_0029:
	{
		VersionResult_t4090266424 * L_8 = ___result1;
		VersionResult_SetFailure_m3577471770(L_8, 1, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0032:
	{
		StringU5BU5D_t1281789340* L_9 = V_4;
		NullCheck(L_9);
		int32_t L_10 = 0;
		String_t* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		VersionResult_t4090266424 * L_12 = ___result1;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t3456873960_il2cpp_TypeInfo_var);
		bool L_13 = Version_TryParseComponent_m3061913945(NULL /*static, unused*/, L_11, _stringLiteral1902401671, L_12, (&V_0), /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0047;
		}
	}
	{
		return (bool)0;
	}

IL_0047:
	{
		StringU5BU5D_t1281789340* L_14 = V_4;
		NullCheck(L_14);
		int32_t L_15 = 1;
		String_t* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		VersionResult_t4090266424 * L_17 = ___result1;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t3456873960_il2cpp_TypeInfo_var);
		bool L_18 = Version_TryParseComponent_m3061913945(NULL /*static, unused*/, L_16, _stringLiteral1902401671, L_17, (&V_1), /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_005c;
		}
	}
	{
		return (bool)0;
	}

IL_005c:
	{
		int32_t L_19 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)2));
		int32_t L_20 = V_5;
		if ((((int32_t)L_20) <= ((int32_t)0)))
		{
			goto IL_00bd;
		}
	}
	{
		StringU5BU5D_t1281789340* L_21 = V_4;
		NullCheck(L_21);
		int32_t L_22 = 2;
		String_t* L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		VersionResult_t4090266424 * L_24 = ___result1;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t3456873960_il2cpp_TypeInfo_var);
		bool L_25 = Version_TryParseComponent_m3061913945(NULL /*static, unused*/, L_23, _stringLiteral437191301, L_24, (&V_2), /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_007c;
		}
	}
	{
		return (bool)0;
	}

IL_007c:
	{
		int32_t L_26 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)1));
		int32_t L_27 = V_5;
		if ((((int32_t)L_27) <= ((int32_t)0)))
		{
			goto IL_00ad;
		}
	}
	{
		StringU5BU5D_t1281789340* L_28 = V_4;
		NullCheck(L_28);
		int32_t L_29 = 3;
		String_t* L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		VersionResult_t4090266424 * L_31 = ___result1;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t3456873960_il2cpp_TypeInfo_var);
		bool L_32 = Version_TryParseComponent_m3061913945(NULL /*static, unused*/, L_30, _stringLiteral3187820736, L_31, (&V_3), /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_009c;
		}
	}
	{
		return (bool)0;
	}

IL_009c:
	{
		VersionResult_t4090266424 * L_33 = ___result1;
		int32_t L_34 = V_0;
		int32_t L_35 = V_1;
		int32_t L_36 = V_2;
		int32_t L_37 = V_3;
		Version_t3456873960 * L_38 = (Version_t3456873960 *)il2cpp_codegen_object_new(Version_t3456873960_il2cpp_TypeInfo_var);
		Version__ctor_m417728625(L_38, L_34, L_35, L_36, L_37, /*hidden argument*/NULL);
		L_33->set_m_parsedVersion_0(L_38);
		goto IL_00ca;
	}

IL_00ad:
	{
		VersionResult_t4090266424 * L_39 = ___result1;
		int32_t L_40 = V_0;
		int32_t L_41 = V_1;
		int32_t L_42 = V_2;
		Version_t3456873960 * L_43 = (Version_t3456873960 *)il2cpp_codegen_object_new(Version_t3456873960_il2cpp_TypeInfo_var);
		Version__ctor_m1550720073(L_43, L_40, L_41, L_42, /*hidden argument*/NULL);
		L_39->set_m_parsedVersion_0(L_43);
		goto IL_00ca;
	}

IL_00bd:
	{
		VersionResult_t4090266424 * L_44 = ___result1;
		int32_t L_45 = V_0;
		int32_t L_46 = V_1;
		Version_t3456873960 * L_47 = (Version_t3456873960 *)il2cpp_codegen_object_new(Version_t3456873960_il2cpp_TypeInfo_var);
		Version__ctor_m3537335798(L_47, L_45, L_46, /*hidden argument*/NULL);
		L_44->set_m_parsedVersion_0(L_47);
	}

IL_00ca:
	{
		return (bool)1;
	}
}
// System.Boolean System.Version::TryParseComponent(System.String,System.String,System.Version/VersionResult&,System.Int32&)
extern "C"  bool Version_TryParseComponent_m3061913945 (RuntimeObject * __this /* static, unused */, String_t* ___component0, String_t* ___componentName1, VersionResult_t4090266424 * ___result2, int32_t* ___parsedComponent3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_TryParseComponent_m3061913945_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___component0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_1 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t* L_2 = ___parsedComponent3;
		bool L_3 = Int32_TryParse_m135955795(NULL /*static, unused*/, L_0, 7, L_1, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0019;
		}
	}
	{
		VersionResult_t4090266424 * L_4 = ___result2;
		String_t* L_5 = ___component0;
		VersionResult_SetFailure_m1038741463(L_4, 3, L_5, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0019:
	{
		int32_t* L_6 = ___parsedComponent3;
		if ((((int32_t)(*((int32_t*)L_6))) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		VersionResult_t4090266424 * L_7 = ___result2;
		String_t* L_8 = ___componentName1;
		VersionResult_SetFailure_m1038741463(L_7, 2, L_8, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0028:
	{
		return (bool)1;
	}
}
// System.Boolean System.Version::op_Equality(System.Version,System.Version)
extern "C"  bool Version_op_Equality_m3804852517 (RuntimeObject * __this /* static, unused */, Version_t3456873960 * ___v10, Version_t3456873960 * ___v21, const RuntimeMethod* method)
{
	{
		Version_t3456873960 * L_0 = ___v10;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		Version_t3456873960 * L_1 = ___v21;
		return (bool)((((RuntimeObject*)(Version_t3456873960 *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}

IL_0008:
	{
		Version_t3456873960 * L_2 = ___v10;
		Version_t3456873960 * L_3 = ___v21;
		NullCheck(L_2);
		bool L_4 = Version_Equals_m1564427710(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean System.Version::op_Inequality(System.Version,System.Version)
extern "C"  bool Version_op_Inequality_m1696193441 (RuntimeObject * __this /* static, unused */, Version_t3456873960 * ___v10, Version_t3456873960 * ___v21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_op_Inequality_m1696193441_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Version_t3456873960 * L_0 = ___v10;
		Version_t3456873960 * L_1 = ___v21;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t3456873960_il2cpp_TypeInfo_var);
		bool L_2 = Version_op_Equality_m3804852517(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Version::op_LessThan(System.Version,System.Version)
extern "C"  bool Version_op_LessThan_m3745610070 (RuntimeObject * __this /* static, unused */, Version_t3456873960 * ___v10, Version_t3456873960 * ___v21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_op_LessThan_m3745610070_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Version_t3456873960 * L_0 = ___v10;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3451500490, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_000e:
	{
		Version_t3456873960 * L_2 = ___v10;
		Version_t3456873960 * L_3 = ___v21;
		NullCheck(L_2);
		int32_t L_4 = Version_CompareTo_m3146217210(L_2, L_3, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_4) < ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Version::op_LessThanOrEqual(System.Version,System.Version)
extern "C"  bool Version_op_LessThanOrEqual_m666140174 (RuntimeObject * __this /* static, unused */, Version_t3456873960 * ___v10, Version_t3456873960 * ___v21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_op_LessThanOrEqual_m666140174_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Version_t3456873960 * L_0 = ___v10;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3451500490, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_000e:
	{
		Version_t3456873960 * L_2 = ___v10;
		Version_t3456873960 * L_3 = ___v21;
		NullCheck(L_2);
		int32_t L_4 = Version_CompareTo_m3146217210(L_2, L_3, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_4) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Version::op_GreaterThanOrEqual(System.Version,System.Version)
extern "C"  bool Version_op_GreaterThanOrEqual_m474945801 (RuntimeObject * __this /* static, unused */, Version_t3456873960 * ___v10, Version_t3456873960 * ___v21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_op_GreaterThanOrEqual_m474945801_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Version_t3456873960 * L_0 = ___v21;
		Version_t3456873960 * L_1 = ___v10;
		IL2CPP_RUNTIME_CLASS_INIT(Version_t3456873960_il2cpp_TypeInfo_var);
		bool L_2 = Version_op_LessThanOrEqual_m666140174(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void System.Version::.cctor()
extern "C"  void Version__cctor_m3568671087 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version__cctor_m3568671087_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t3528271667* L_0 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		((Version_t3456873960_StaticFields*)il2cpp_codegen_static_fields_for(Version_t3456873960_il2cpp_TypeInfo_var))->set_SeparatorsArray_4(L_0);
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
// Conversion methods for marshalling of: System.Version/VersionResult
extern "C" void VersionResult_t4090266424_marshal_pinvoke(const VersionResult_t4090266424& unmarshaled, VersionResult_t4090266424_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_parsedVersion_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_parsedVersion' of type 'VersionResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_parsedVersion_0Exception);
}
extern "C" void VersionResult_t4090266424_marshal_pinvoke_back(const VersionResult_t4090266424_marshaled_pinvoke& marshaled, VersionResult_t4090266424& unmarshaled)
{
	Exception_t* ___m_parsedVersion_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_parsedVersion' of type 'VersionResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_parsedVersion_0Exception);
}
// Conversion method for clean up from marshalling of: System.Version/VersionResult
extern "C" void VersionResult_t4090266424_marshal_pinvoke_cleanup(VersionResult_t4090266424_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Version/VersionResult
extern "C" void VersionResult_t4090266424_marshal_com(const VersionResult_t4090266424& unmarshaled, VersionResult_t4090266424_marshaled_com& marshaled)
{
	Exception_t* ___m_parsedVersion_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_parsedVersion' of type 'VersionResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_parsedVersion_0Exception);
}
extern "C" void VersionResult_t4090266424_marshal_com_back(const VersionResult_t4090266424_marshaled_com& marshaled, VersionResult_t4090266424& unmarshaled)
{
	Exception_t* ___m_parsedVersion_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_parsedVersion' of type 'VersionResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_parsedVersion_0Exception);
}
// Conversion method for clean up from marshalling of: System.Version/VersionResult
extern "C" void VersionResult_t4090266424_marshal_com_cleanup(VersionResult_t4090266424_marshaled_com& marshaled)
{
}
// System.Void System.Version/VersionResult::Init(System.String,System.Boolean)
extern "C"  void VersionResult_Init_m1480155778 (VersionResult_t4090266424 * __this, String_t* ___argumentName0, bool ___canThrow1, const RuntimeMethod* method)
{
	{
		bool L_0 = ___canThrow1;
		__this->set_m_canThrow_4(L_0);
		String_t* L_1 = ___argumentName0;
		__this->set_m_argumentName_3(L_1);
		return;
	}
}
extern "C"  void VersionResult_Init_m1480155778_AdjustorThunk (RuntimeObject * __this, String_t* ___argumentName0, bool ___canThrow1, const RuntimeMethod* method)
{
	VersionResult_t4090266424 * _thisAdjusted = reinterpret_cast<VersionResult_t4090266424 *>(__this + 1);
	VersionResult_Init_m1480155778(_thisAdjusted, ___argumentName0, ___canThrow1, method);
}
// System.Void System.Version/VersionResult::SetFailure(System.Version/ParseFailureKind)
extern "C"  void VersionResult_SetFailure_m3577471770 (VersionResult_t4090266424 * __this, int32_t ___failure0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VersionResult_SetFailure_m3577471770_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___failure0;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		VersionResult_SetFailure_m1038741463(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void VersionResult_SetFailure_m3577471770_AdjustorThunk (RuntimeObject * __this, int32_t ___failure0, const RuntimeMethod* method)
{
	VersionResult_t4090266424 * _thisAdjusted = reinterpret_cast<VersionResult_t4090266424 *>(__this + 1);
	VersionResult_SetFailure_m3577471770(_thisAdjusted, ___failure0, method);
}
// System.Void System.Version/VersionResult::SetFailure(System.Version/ParseFailureKind,System.String)
extern "C"  void VersionResult_SetFailure_m1038741463 (VersionResult_t4090266424 * __this, int32_t ___failure0, String_t* ___argument1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___failure0;
		__this->set_m_failure_1(L_0);
		String_t* L_1 = ___argument1;
		__this->set_m_exceptionArgument_2(L_1);
		bool L_2 = __this->get_m_canThrow_4();
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		Exception_t * L_3 = VersionResult_GetVersionParseException_m2052602218(__this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_001d:
	{
		return;
	}
}
extern "C"  void VersionResult_SetFailure_m1038741463_AdjustorThunk (RuntimeObject * __this, int32_t ___failure0, String_t* ___argument1, const RuntimeMethod* method)
{
	VersionResult_t4090266424 * _thisAdjusted = reinterpret_cast<VersionResult_t4090266424 *>(__this + 1);
	VersionResult_SetFailure_m1038741463(_thisAdjusted, ___failure0, ___argument1, method);
}
// System.Exception System.Version/VersionResult::GetVersionParseException()
extern "C"  Exception_t * VersionResult_GetVersionParseException_m2052602218 (VersionResult_t4090266424 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VersionResult_GetVersionParseException_m2052602218_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_m_failure_1();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_002b;
			}
			case 2:
			{
				goto IL_003b;
			}
			case 3:
			{
				goto IL_0051;
			}
		}
	}
	{
		goto IL_007b;
	}

IL_001f:
	{
		String_t* L_2 = __this->get_m_argumentName_3();
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_002b:
	{
		String_t* L_4 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral3611462241, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_5 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_5, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_003b:
	{
		String_t* L_6 = __this->get_m_exceptionArgument_2();
		String_t* L_7 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral2448690427, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_8 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_8, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0051:
	{
	}

IL_0052:
	try
	{ // begin try (depth: 1)
		String_t* L_9 = __this->get_m_exceptionArgument_2();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_10 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		Int32_Parse_m2087562008(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		goto IL_006b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (FormatException_t154580423_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0065;
		if(il2cpp_codegen_class_is_assignable_from (OverflowException_t2020128637_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0068;
		throw e;
	}

CATCH_0065:
	{ // begin catch(System.FormatException)
		V_1 = ((FormatException_t154580423 *)__exception_local);
		goto IL_008b;
	} // end catch (depth: 1)

CATCH_0068:
	{ // begin catch(System.OverflowException)
		V_1 = ((OverflowException_t2020128637 *)__exception_local);
		goto IL_008b;
	} // end catch (depth: 1)

IL_006b:
	{
		String_t* L_11 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral1986456553, /*hidden argument*/NULL);
		FormatException_t154580423 * L_12 = (FormatException_t154580423 *)il2cpp_codegen_object_new(FormatException_t154580423_il2cpp_TypeInfo_var);
		FormatException__ctor_m4049685996(L_12, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_007b:
	{
		String_t* L_13 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, _stringLiteral3611462241, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_14 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_14, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_008b:
	{
		Exception_t * L_15 = V_1;
		return L_15;
	}
}
extern "C"  Exception_t * VersionResult_GetVersionParseException_m2052602218_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	VersionResult_t4090266424 * _thisAdjusted = reinterpret_cast<VersionResult_t4090266424 *>(__this + 1);
	return VersionResult_GetVersionParseException_m2052602218(_thisAdjusted, method);
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
// System.Void System.WeakReference::AllocateHandle(System.Object)
extern "C"  void WeakReference_AllocateHandle_m1478975559 (WeakReference_t1334886716 * __this, RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isLongReference_0();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject * L_1 = ___target0;
		GCHandle_t3351438187  L_2 = GCHandle_Alloc_m3823409740(NULL /*static, unused*/, L_1, 1, /*hidden argument*/NULL);
		__this->set_gcHandle_1(L_2);
		return;
	}

IL_0016:
	{
		RuntimeObject * L_3 = ___target0;
		GCHandle_t3351438187  L_4 = GCHandle_Alloc_m3823409740(NULL /*static, unused*/, L_3, 0, /*hidden argument*/NULL);
		__this->set_gcHandle_1(L_4);
		return;
	}
}
// System.Void System.WeakReference::.ctor(System.Object)
extern "C"  void WeakReference__ctor_m2401547918 (WeakReference_t1334886716 * __this, RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___target0;
		WeakReference__ctor_m1054065938(__this, L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WeakReference::.ctor(System.Object,System.Boolean)
extern "C"  void WeakReference__ctor_m1054065938 (WeakReference_t1334886716 * __this, RuntimeObject * ___target0, bool ___trackResurrection1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		bool L_0 = ___trackResurrection1;
		__this->set_isLongReference_0(L_0);
		RuntimeObject * L_1 = ___target0;
		WeakReference_AllocateHandle_m1478975559(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WeakReference::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WeakReference__ctor_m1244067698 (WeakReference_t1334886716 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeakReference__ctor_m1244067698_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral79347, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0014:
	{
		SerializationInfo_t950877179 * L_2 = ___info0;
		NullCheck(L_2);
		bool L_3 = SerializationInfo_GetBoolean_m1756153320(L_2, _stringLiteral3234942771, /*hidden argument*/NULL);
		__this->set_isLongReference_0(L_3);
		SerializationInfo_t950877179 * L_4 = ___info0;
		RuntimeTypeHandle_t3027515415  L_5 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject * L_7 = SerializationInfo_GetValue_m42271953(L_4, _stringLiteral2922588279, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		RuntimeObject * L_8 = V_0;
		WeakReference_AllocateHandle_m1478975559(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.WeakReference::get_IsAlive()
extern "C"  bool WeakReference_get_IsAlive_m1867740323 (WeakReference_t1334886716 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, __this);
		return (bool)((!(((RuntimeObject*)(RuntimeObject *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Object System.WeakReference::get_Target()
extern "C"  RuntimeObject * WeakReference_get_Target_m168713953 (WeakReference_t1334886716 * __this, const RuntimeMethod* method)
{
	{
		GCHandle_t3351438187 * L_0 = __this->get_address_of_gcHandle_1();
		bool L_1 = GCHandle_get_IsAllocated_m1058226959(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return NULL;
	}

IL_000f:
	{
		GCHandle_t3351438187 * L_2 = __this->get_address_of_gcHandle_1();
		RuntimeObject * L_3 = GCHandle_get_Target_m1824973883(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean System.WeakReference::get_TrackResurrection()
extern "C"  bool WeakReference_get_TrackResurrection_m942701017 (WeakReference_t1334886716 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isLongReference_0();
		return L_0;
	}
}
// System.Void System.WeakReference::Finalize()
extern "C"  void WeakReference_Finalize_m2841826116 (WeakReference_t1334886716 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		GCHandle_t3351438187 * L_0 = __this->get_address_of_gcHandle_1();
		GCHandle_Free_m1457699368(L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x14, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_JUMP_TBL(0x14, IL_0014)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.WeakReference::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WeakReference_GetObjectData_m2192383095 (WeakReference_t1334886716 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeakReference_GetObjectData_m2192383095_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral79347, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_000e:
	{
		SerializationInfo_t950877179 * L_2 = ___info0;
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.WeakReference::get_TrackResurrection() */, __this);
		NullCheck(L_2);
		SerializationInfo_AddValue_m3427199315(L_2, _stringLiteral3234942771, L_3, /*hidden argument*/NULL);
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		SerializationInfo_t950877179 * L_4 = ___info0;
		RuntimeObject * L_5 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, __this);
		NullCheck(L_4);
		SerializationInfo_AddValue_m2872281893(L_4, _stringLiteral2922588279, L_5, /*hidden argument*/NULL);
		goto IL_0041;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0032;
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Exception)
		SerializationInfo_t950877179 * L_6 = ___info0;
		NullCheck(L_6);
		SerializationInfo_AddValue_m2872281893(L_6, _stringLiteral2922588279, NULL, /*hidden argument*/NULL);
		goto IL_0041;
	} // end catch (depth: 1)

IL_0041:
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
// System.Void System.WindowsConsoleDriver::.ctor()
extern "C"  void WindowsConsoleDriver__ctor_m141100690 (WindowsConsoleDriver_t3991887195 * __this, const RuntimeMethod* method)
{
	ConsoleScreenBufferInfo_t3095351730  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		intptr_t L_0 = WindowsConsoleDriver_GetStdHandle_m23119533(NULL /*static, unused*/, ((int32_t)-11), /*hidden argument*/NULL);
		__this->set_outputHandle_1(L_0);
		intptr_t L_1 = WindowsConsoleDriver_GetStdHandle_m23119533(NULL /*static, unused*/, ((int32_t)-10), /*hidden argument*/NULL);
		__this->set_inputHandle_0(L_1);
		il2cpp_codegen_initobj((&V_0), sizeof(ConsoleScreenBufferInfo_t3095351730 ));
		intptr_t L_2 = __this->get_outputHandle_1();
		WindowsConsoleDriver_GetConsoleScreenBufferInfo_m3609341087(NULL /*static, unused*/, L_2, (&V_0), /*hidden argument*/NULL);
		ConsoleScreenBufferInfo_t3095351730  L_3 = V_0;
		int16_t L_4 = L_3.get_Attribute_2();
		__this->set_defaultAttribute_2(L_4);
		return;
	}
}
// System.ConsoleKeyInfo System.WindowsConsoleDriver::ReadKey(System.Boolean)
extern "C"  ConsoleKeyInfo_t1802691652  WindowsConsoleDriver_ReadKey_m209631140 (WindowsConsoleDriver_t3991887195 * __this, bool ___intercept0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsConsoleDriver_ReadKey_m209631140_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InputRecord_t2660212290  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		il2cpp_codegen_initobj((&V_1), sizeof(InputRecord_t2660212290 ));
	}

IL_0008:
	{
		intptr_t L_0 = __this->get_inputHandle_0();
		bool L_1 = WindowsConsoleDriver_ReadConsoleInput_m1790694890(NULL /*static, unused*/, L_0, (&V_1), 1, (&V_0), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0034;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		int32_t L_2 = Marshal_GetLastWin32Error_m1272610344(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral1071424308, L_4, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_6 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6);
	}

IL_0034:
	{
		InputRecord_t2660212290  L_7 = V_1;
		bool L_8 = L_7.get_KeyDown_1();
		if (!L_8)
		{
			goto IL_0008;
		}
	}
	{
		InputRecord_t2660212290  L_9 = V_1;
		int16_t L_10 = L_9.get_EventType_0();
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_0008;
		}
	}
	{
		InputRecord_t2660212290  L_11 = V_1;
		int16_t L_12 = L_11.get_VirtualKeyCode_3();
		bool L_13 = WindowsConsoleDriver_IsModifierKey_m1974886538(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0008;
		}
	}
	{
		InputRecord_t2660212290  L_14 = V_1;
		int32_t L_15 = L_14.get_ControlKeyState_6();
		V_2 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_15&(int32_t)3))) <= ((uint32_t)0)))? 1 : 0);
		InputRecord_t2660212290  L_16 = V_1;
		int32_t L_17 = L_16.get_ControlKeyState_6();
		V_3 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_17&(int32_t)((int32_t)12)))) <= ((uint32_t)0)))? 1 : 0);
		InputRecord_t2660212290  L_18 = V_1;
		int32_t L_19 = L_18.get_ControlKeyState_6();
		V_4 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_19&(int32_t)((int32_t)16)))) <= ((uint32_t)0)))? 1 : 0);
		InputRecord_t2660212290  L_20 = V_1;
		Il2CppChar L_21 = L_20.get_Character_5();
		InputRecord_t2660212290  L_22 = V_1;
		int16_t L_23 = L_22.get_VirtualKeyCode_3();
		bool L_24 = V_4;
		bool L_25 = V_2;
		bool L_26 = V_3;
		ConsoleKeyInfo_t1802691652  L_27;
		memset(&L_27, 0, sizeof(L_27));
		ConsoleKeyInfo__ctor_m535940175((&L_27), L_21, L_23, L_24, L_25, L_26, /*hidden argument*/NULL);
		return L_27;
	}
}
// System.Boolean System.WindowsConsoleDriver::IsModifierKey(System.Int16)
extern "C"  bool WindowsConsoleDriver_IsModifierKey_m1974886538 (RuntimeObject * __this /* static, unused */, int16_t ___virtualKeyCode0, const RuntimeMethod* method)
{
	{
		int16_t L_0 = ___virtualKeyCode0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)((int32_t)16)))) > ((uint32_t)2))))
		{
			goto IL_0016;
		}
	}
	{
		int16_t L_1 = ___virtualKeyCode0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)20))))
		{
			goto IL_0016;
		}
	}
	{
		int16_t L_2 = ___virtualKeyCode0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)144)))) <= ((uint32_t)1))))
		{
			goto IL_0018;
		}
	}

IL_0016:
	{
		return (bool)1;
	}

IL_0018:
	{
		return (bool)0;
	}
}
// System.IntPtr System.WindowsConsoleDriver::GetStdHandle(System.Handles)
extern "C"  intptr_t WindowsConsoleDriver_GetStdHandle_m23119533 (RuntimeObject * __this /* static, unused */, int32_t ___handle0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "GetStdHandle", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'GetStdHandle'"));
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___handle0);
	il2cpp_codegen_marshal_store_last_error();

	return returnValue;
}
// System.Boolean System.WindowsConsoleDriver::GetConsoleScreenBufferInfo(System.IntPtr,System.ConsoleScreenBufferInfo&)
extern "C"  bool WindowsConsoleDriver_GetConsoleScreenBufferInfo_m3609341087 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, ConsoleScreenBufferInfo_t3095351730 * ___info1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, ConsoleScreenBufferInfo_t3095351730 *);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(ConsoleScreenBufferInfo_t3095351730 *);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "GetConsoleScreenBufferInfo", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'GetConsoleScreenBufferInfo'"));
		}
	}

	// Marshaling of parameter '___info1' to native representation
	ConsoleScreenBufferInfo_t3095351730  ____info1_empty = {};

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___handle0, (&____info1_empty));
	il2cpp_codegen_marshal_store_last_error();

	// Marshaling of parameter '___info1' back from native representation
	*___info1 = ____info1_empty;

	return static_cast<bool>(returnValue);
}
// System.Boolean System.WindowsConsoleDriver::ReadConsoleInput(System.IntPtr,System.InputRecord&,System.Int32,System.Int32&)
extern "C"  bool WindowsConsoleDriver_ReadConsoleInput_m1790694890 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, InputRecord_t2660212290 * ___record1, int32_t ___length2, int32_t* ___nread3, const RuntimeMethod* method)
{


	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, InputRecord_t2660212290_marshaled_pinvoke*, int32_t, int32_t*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(InputRecord_t2660212290_marshaled_pinvoke*) + sizeof(int32_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "ReadConsoleInput", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'ReadConsoleInput'"));
		}
	}

	// Marshaling of parameter '___record1' to native representation
	InputRecord_t2660212290_marshaled_pinvoke ____record1_empty = {};
	InputRecord_t2660212290_marshaled_pinvoke* ____record1_marshaled = &____record1_empty;

	// Marshaling of parameter '___nread3' to native representation
	int32_t ____nread3_empty = 0;

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ____record1_marshaled, ___length2, (&____nread3_empty));
	il2cpp_codegen_marshal_store_last_error();

	// Marshaling of parameter '___record1' back from native representation
	InputRecord_t2660212290  _____record1_marshaled_unmarshaled_dereferenced;
	memset(&_____record1_marshaled_unmarshaled_dereferenced, 0, sizeof(_____record1_marshaled_unmarshaled_dereferenced));
	InputRecord_t2660212290_marshal_pinvoke_back(*____record1_marshaled, _____record1_marshaled_unmarshaled_dereferenced);
	*___record1 = _____record1_marshaled_unmarshaled_dereferenced;

	// Marshaling cleanup of parameter '___record1' native representation
	InputRecord_t2660212290_marshal_pinvoke_cleanup(*____record1_marshaled);

	// Marshaling of parameter '___nread3' back from native representation
	*___nread3 = ____nread3_empty;

	return static_cast<bool>(returnValue);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void XamMac.CoreFoundation.CFHelpers::CFRelease(System.IntPtr)
extern "C"  void CFHelpers_CFRelease_m3206817372 (RuntimeObject * __this /* static, unused */, intptr_t ___obj0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation"), "CFRelease", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'CFRelease'"));
		}
	}

	// Native function invocation
	il2cppPInvokeFunc(___obj0);

}
// System.IntPtr XamMac.CoreFoundation.CFHelpers::CFRetain(System.IntPtr)
extern "C"  intptr_t CFHelpers_CFRetain_m47160182 (RuntimeObject * __this /* static, unused */, intptr_t ___obj0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation"), "CFRetain", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'CFRetain'"));
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___obj0);

	return returnValue;
}
// System.IntPtr XamMac.CoreFoundation.CFHelpers::CFStringGetLength(System.IntPtr)
extern "C"  intptr_t CFHelpers_CFStringGetLength_m1003035781 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation"), "CFStringGetLength", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'CFStringGetLength'"));
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___handle0);

	return returnValue;
}
// System.IntPtr XamMac.CoreFoundation.CFHelpers::CFStringGetCharactersPtr(System.IntPtr)
extern "C"  intptr_t CFHelpers_CFStringGetCharactersPtr_m1790634856 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation"), "CFStringGetCharactersPtr", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'CFStringGetCharactersPtr'"));
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___handle0);

	return returnValue;
}
// System.IntPtr XamMac.CoreFoundation.CFHelpers::CFStringGetCharacters(System.IntPtr,XamMac.CoreFoundation.CFHelpers/CFRange,System.IntPtr)
extern "C"  intptr_t CFHelpers_CFStringGetCharacters_m1195295518 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, CFRange_t1233619878  ___range1, intptr_t ___buffer2, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, CFRange_t1233619878 , intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(CFRange_t1233619878 ) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation"), "CFStringGetCharacters", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'CFStringGetCharacters'"));
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___handle0, ___range1, ___buffer2);

	return returnValue;
}
// System.String XamMac.CoreFoundation.CFHelpers::FetchString(System.IntPtr)
extern "C"  String_t* CFHelpers_FetchString_m1875874129 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CFHelpers_FetchString_m1875874129_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset(&V_1, 0, sizeof(V_1));
	intptr_t V_2;
	memset(&V_2, 0, sizeof(V_2));
	CFRange_t1233619878  V_3;
	memset(&V_3, 0, sizeof(V_3));
	String_t* G_B6_0 = NULL;
	String_t* G_B5_0 = NULL;
	{
		intptr_t L_0 = ___handle0;
		bool L_1 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_000f:
	{
		intptr_t L_2 = ___handle0;
		intptr_t L_3 = CFHelpers_CFStringGetLength_m1003035781(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		int32_t L_4 = IntPtr_op_Explicit_m4220076518(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		intptr_t L_5 = ___handle0;
		intptr_t L_6 = CFHelpers_CFStringGetCharactersPtr_m1790634856(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		V_2 = (intptr_t)(0);
		intptr_t L_7 = V_1;
		bool L_8 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_7, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_9 = V_0;
		CFRange__ctor_m1242434219((&V_3), 0, L_9, /*hidden argument*/NULL);
		int32_t L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		intptr_t L_11 = Marshal_AllocCoTaskMem_m1327939722(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)2)), /*hidden argument*/NULL);
		V_2 = L_11;
		intptr_t L_12 = ___handle0;
		CFRange_t1233619878  L_13 = V_3;
		intptr_t L_14 = V_2;
		CFHelpers_CFStringGetCharacters_m1195295518(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/NULL);
		intptr_t L_15 = V_2;
		V_1 = L_15;
	}

IL_0052:
	{
		intptr_t L_16 = V_1;
		void* L_17 = IntPtr_op_Explicit_m2520637223(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		int32_t L_18 = V_0;
		String_t* L_19 = String_CreateString_m3400201881(NULL, (Il2CppChar*)(Il2CppChar*)L_17, 0, L_18, /*hidden argument*/NULL);
		intptr_t L_20 = V_2;
		bool L_21 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_20, (intptr_t)(0), /*hidden argument*/NULL);
		G_B5_0 = L_19;
		if (!L_21)
		{
			G_B6_0 = L_19;
			goto IL_0072;
		}
	}
	{
		intptr_t L_22 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Marshal_FreeCoTaskMem_m3753155979(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		G_B6_0 = G_B5_0;
	}

IL_0072:
	{
		return G_B6_0;
	}
}
// System.IntPtr XamMac.CoreFoundation.CFHelpers::CFDataGetLength(System.IntPtr)
extern "C"  intptr_t CFHelpers_CFDataGetLength_m3730685275 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation"), "CFDataGetLength", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'CFDataGetLength'"));
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___handle0);

	return returnValue;
}
// System.IntPtr XamMac.CoreFoundation.CFHelpers::CFDataGetBytePtr(System.IntPtr)
extern "C"  intptr_t CFHelpers_CFDataGetBytePtr_m1648767664 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation"), "CFDataGetBytePtr", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'CFDataGetBytePtr'"));
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___handle0);

	return returnValue;
}
// System.Byte[] XamMac.CoreFoundation.CFHelpers::FetchDataBuffer(System.IntPtr)
extern "C"  ByteU5BU5D_t4116647657* CFHelpers_FetchDataBuffer_m2260522698 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CFHelpers_FetchDataBuffer_m2260522698_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		intptr_t L_0 = ___handle0;
		intptr_t L_1 = CFHelpers_CFDataGetLength_m3730685275(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = IntPtr_op_Explicit_m4220076518(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_2));
		intptr_t L_3 = ___handle0;
		intptr_t L_4 = CFHelpers_CFDataGetBytePtr_m1648767664(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_5 = V_0;
		ByteU5BU5D_t4116647657* L_6 = V_0;
		NullCheck(L_6);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Marshal_Copy_m1222846562(NULL /*static, unused*/, L_4, L_5, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))), /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_7 = V_0;
		return L_7;
	}
}
// System.IntPtr XamMac.CoreFoundation.CFHelpers::CFDataCreate(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  intptr_t CFHelpers_CFDataCreate_m3875740957 (RuntimeObject * __this /* static, unused */, intptr_t ___allocator0, intptr_t ___bytes1, intptr_t ___length2, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation"), "CFDataCreate", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'CFDataCreate'"));
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___allocator0, ___bytes1, ___length2);

	return returnValue;
}
// System.IntPtr XamMac.CoreFoundation.CFHelpers::SecCertificateCreateWithData(System.IntPtr,System.IntPtr)
extern "C"  intptr_t CFHelpers_SecCertificateCreateWithData_m1682200427 (RuntimeObject * __this /* static, unused */, intptr_t ___allocator0, intptr_t ___cfData1, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("/System/Library/Frameworks/Security.framework/Security"), "SecCertificateCreateWithData", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'SecCertificateCreateWithData'"));
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___allocator0, ___cfData1);

	return returnValue;
}
// System.IntPtr XamMac.CoreFoundation.CFHelpers::CreateCertificateFromData(System.Byte[])
extern "C"  intptr_t CFHelpers_CreateCertificateFromData_m702581168 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CFHelpers_CreateCertificateFromData_m702581168_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t* V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	intptr_t V_2;
	memset(&V_2, 0, sizeof(V_2));
	intptr_t G_B8_0;
	memset(&G_B8_0, 0, sizeof(G_B8_0));
	intptr_t G_B7_0;
	memset(&G_B7_0, 0, sizeof(G_B7_0));
	{
		ByteU5BU5D_t4116647657* L_0 = ___data0;
		ByteU5BU5D_t4116647657* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_2 = V_1;
		NullCheck(L_2);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (intptr_t*)(((uintptr_t)0));
		goto IL_0017;
	}

IL_000f:
	{
		ByteU5BU5D_t4116647657* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (intptr_t*)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
	}

IL_0017:
	{
		intptr_t* L_4 = V_0;
		intptr_t L_5 = IntPtr_op_Explicit_m536245531(NULL /*static, unused*/, (void*)(void*)(((intptr_t)L_4)), /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_6 = ___data0;
		NullCheck(L_6);
		intptr_t L_7;
		memset(&L_7, 0, sizeof(L_7));
		IntPtr__ctor_m987082960((&L_7), (((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))), /*hidden argument*/NULL);
		intptr_t L_8 = CFHelpers_CFDataCreate_m3875740957(NULL /*static, unused*/, (intptr_t)(0), L_5, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		intptr_t L_9 = V_2;
		bool L_10 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_9, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0044;
		}
	}
	{
		return (intptr_t)(0);
	}

IL_0044:
	{
		intptr_t L_11 = V_2;
		intptr_t L_12 = CFHelpers_SecCertificateCreateWithData_m1682200427(NULL /*static, unused*/, (intptr_t)(0), L_11, /*hidden argument*/NULL);
		intptr_t L_13 = V_2;
		bool L_14 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_13, (intptr_t)(0), /*hidden argument*/NULL);
		G_B7_0 = L_12;
		if (!L_14)
		{
			G_B8_0 = L_12;
			goto IL_0062;
		}
	}
	{
		intptr_t L_15 = V_2;
		CFHelpers_CFRelease_m3206817372(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		G_B8_0 = G_B7_0;
	}

IL_0062:
	{
		return G_B8_0;
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
// System.Void XamMac.CoreFoundation.CFHelpers/CFRange::.ctor(System.Int32,System.Int32)
extern "C"  void CFRange__ctor_m1242434219 (CFRange_t1233619878 * __this, int32_t ___loc0, int32_t ___len1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___loc0;
		int32_t L_1 = ___len1;
		CFRange__ctor_m3401693388(__this, (((int64_t)((int64_t)L_0))), (((int64_t)((int64_t)L_1))), /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void CFRange__ctor_m1242434219_AdjustorThunk (RuntimeObject * __this, int32_t ___loc0, int32_t ___len1, const RuntimeMethod* method)
{
	CFRange_t1233619878 * _thisAdjusted = reinterpret_cast<CFRange_t1233619878 *>(__this + 1);
	CFRange__ctor_m1242434219(_thisAdjusted, ___loc0, ___len1, method);
}
// System.Void XamMac.CoreFoundation.CFHelpers/CFRange::.ctor(System.Int64,System.Int64)
extern "C"  void CFRange__ctor_m3401693388 (CFRange_t1233619878 * __this, int64_t ___l0, int64_t ___len1, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___l0;
		intptr_t L_1 = IntPtr_op_Explicit_m1593085246(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->set_loc_0(L_1);
		int64_t L_2 = ___len1;
		intptr_t L_3 = IntPtr_op_Explicit_m1593085246(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->set_len_1(L_3);
		return;
	}
}
extern "C"  void CFRange__ctor_m3401693388_AdjustorThunk (RuntimeObject * __this, int64_t ___l0, int64_t ___len1, const RuntimeMethod* method)
{
	CFRange_t1233619878 * _thisAdjusted = reinterpret_cast<CFRange_t1233619878 *>(__this + 1);
	CFRange__ctor_m3401693388(_thisAdjusted, ___l0, ___len1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
