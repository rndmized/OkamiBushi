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

// UnityEngine.Analytics.UnityAnalyticsHandler
struct UnityAnalyticsHandler_t3011359618;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t1329213854;
// System.ArgumentException
struct ArgumentException_t132251570;
// UnityEngine.Analytics.CustomEventData
struct CustomEventData_t317522481;
// System.Type
struct Type_t;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.Binder
struct Binder_t2999457153;

extern RuntimeClass* Analytics_t661012366_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityAnalyticsHandler_t3011359618_il2cpp_TypeInfo_var;
extern const uint32_t Analytics_GetUnityAnalyticsHandler_m2772482435_MetadataUsageId;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* CustomEventData_t317522481_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2903831799;
extern const uint32_t Analytics_CustomEvent_m3835919949_MetadataUsageId;
extern RuntimeClass* GC_t959872083_il2cpp_TypeInfo_var;
extern const uint32_t CustomEventData_Dispose_m4023815755_MetadataUsageId;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern RuntimeClass* Decimal_t2948259380_il2cpp_TypeInfo_var;
extern const uint32_t CustomEventData_Add_m1043890744_MetadataUsageId;
extern const uint32_t CustomEventData_Add_m1995831386_MetadataUsageId;
extern const RuntimeType* String_t_0_0_0_var;
extern const RuntimeType* Char_t3634460470_0_0_0_var;
extern const RuntimeType* SByte_t1669577662_0_0_0_var;
extern const RuntimeType* Byte_t1134296376_0_0_0_var;
extern const RuntimeType* Int16_t2552820387_0_0_0_var;
extern const RuntimeType* UInt16_t2177724958_0_0_0_var;
extern const RuntimeType* Int32_t2950945753_0_0_0_var;
extern const RuntimeType* UInt32_t2560061978_0_0_0_var;
extern const RuntimeType* Int64_t3736567304_0_0_0_var;
extern const RuntimeType* UInt64_t4134040092_0_0_0_var;
extern const RuntimeType* Boolean_t97287965_0_0_0_var;
extern const RuntimeType* Single_t1397266774_0_0_0_var;
extern const RuntimeType* Double_t594665363_0_0_0_var;
extern const RuntimeType* Decimal_t2948259380_0_0_0_var;
extern RuntimeClass* IEnumerable_1_t4242887519_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t1400637802_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern RuntimeClass* SByte_t1669577662_il2cpp_TypeInfo_var;
extern RuntimeClass* Byte_t1134296376_il2cpp_TypeInfo_var;
extern RuntimeClass* Int16_t2552820387_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt16_t2177724958_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32_t2560061978_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64_t3736567304_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt64_t4134040092_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t594665363_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m256823211_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m4108279609_RuntimeMethod_var;
extern String_t* _stringLiteral1202628576;
extern String_t* _stringLiteral3959746398;
extern const uint32_t CustomEventData_Add_m2564314129_MetadataUsageId;
extern const uint32_t UnityAnalyticsHandler_Dispose_m300860768_MetadataUsageId;
struct Exception_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;



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
#ifndef U3CMODULEU3E_T692745546_H
#define U3CMODULEU3E_T692745546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745546 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745546_H
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
#ifndef ANALYTICS_T661012366_H
#define ANALYTICS_T661012366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.Analytics
struct  Analytics_t661012366  : public RuntimeObject
{
public:

public:
};

struct Analytics_t661012366_StaticFields
{
public:
	// UnityEngine.Analytics.UnityAnalyticsHandler UnityEngine.Analytics.Analytics::s_UnityAnalyticsHandler
	UnityAnalyticsHandler_t3011359618 * ___s_UnityAnalyticsHandler_0;

public:
	inline static int32_t get_offset_of_s_UnityAnalyticsHandler_0() { return static_cast<int32_t>(offsetof(Analytics_t661012366_StaticFields, ___s_UnityAnalyticsHandler_0)); }
	inline UnityAnalyticsHandler_t3011359618 * get_s_UnityAnalyticsHandler_0() const { return ___s_UnityAnalyticsHandler_0; }
	inline UnityAnalyticsHandler_t3011359618 ** get_address_of_s_UnityAnalyticsHandler_0() { return &___s_UnityAnalyticsHandler_0; }
	inline void set_s_UnityAnalyticsHandler_0(UnityAnalyticsHandler_t3011359618 * value)
	{
		___s_UnityAnalyticsHandler_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_UnityAnalyticsHandler_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANALYTICS_T661012366_H
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
#ifndef KEYVALUEPAIR_2_T968067334_H
#define KEYVALUEPAIR_2_T968067334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct  KeyValuePair_2_t968067334 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t968067334, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t968067334, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T968067334_H
#ifndef KEYVALUEPAIR_2_T2530217319_H
#define KEYVALUEPAIR_2_T2530217319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t2530217319 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2530217319_H
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
#ifndef CUSTOMEVENTDATA_T317522481_H
#define CUSTOMEVENTDATA_T317522481_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.CustomEventData
struct  CustomEventData_t317522481  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Analytics.CustomEventData::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CustomEventData_t317522481, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Analytics.CustomEventData
struct CustomEventData_t317522481_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Analytics.CustomEventData
struct CustomEventData_t317522481_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // CUSTOMEVENTDATA_T317522481_H
#ifndef ANALYTICSRESULT_T2273004240_H
#define ANALYTICSRESULT_T2273004240_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsResult
struct  AnalyticsResult_t2273004240 
{
public:
	// System.Int32 UnityEngine.Analytics.AnalyticsResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnalyticsResult_t2273004240, ___value___2)); }
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
#endif // ANALYTICSRESULT_T2273004240_H
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
#ifndef UNITYANALYTICSHANDLER_T3011359618_H
#define UNITYANALYTICSHANDLER_T3011359618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.UnityAnalyticsHandler
struct  UnityAnalyticsHandler_t3011359618  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Analytics.UnityAnalyticsHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityAnalyticsHandler_t3011359618, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Analytics.UnityAnalyticsHandler
struct UnityAnalyticsHandler_t3011359618_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Analytics.UnityAnalyticsHandler
struct UnityAnalyticsHandler_t3011359618_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // UNITYANALYTICSHANDLER_T3011359618_H
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


// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m4184817181_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m1132502692_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.Analytics.UnityAnalyticsHandler::.ctor()
extern "C"  void UnityAnalyticsHandler__ctor_m2433349566 (UnityAnalyticsHandler_t3011359618 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C"  bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C"  void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.UnityAnalyticsHandler UnityEngine.Analytics.Analytics::GetUnityAnalyticsHandler()
extern "C"  UnityAnalyticsHandler_t3011359618 * Analytics_GetUnityAnalyticsHandler_m2772482435 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.UnityAnalyticsHandler::CustomEvent(System.String)
extern "C"  int32_t UnityAnalyticsHandler_CustomEvent_m1145496376 (UnityAnalyticsHandler_t3011359618 * __this, String_t* ___customEventName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.CustomEventData::.ctor(System.String)
extern "C"  void CustomEventData__ctor_m4146403782 (CustomEventData_t317522481 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.CustomEventData::Add(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  bool CustomEventData_Add_m2564314129 (CustomEventData_t317522481 * __this, RuntimeObject* ___eventData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.UnityAnalyticsHandler::CustomEvent(UnityEngine.Analytics.CustomEventData)
extern "C"  int32_t UnityAnalyticsHandler_CustomEvent_m3710377462 (UnityAnalyticsHandler_t3011359618 * __this, CustomEventData_t317522481 * ___eventData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.CustomEventData::InternalCreate(System.String)
extern "C"  void CustomEventData_InternalCreate_m2668612744 (CustomEventData_t317522481 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.CustomEventData::InternalDestroy()
extern "C"  void CustomEventData_InternalDestroy_m2184675245 (CustomEventData_t317522481 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::Finalize()
extern "C"  void Object_Finalize_m3076187857 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.GC::SuppressFinalize(System.Object)
extern "C"  void GC_SuppressFinalize_m1177400158 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.CustomEventData::AddString(System.String,System.String)
extern "C"  bool CustomEventData_AddString_m1770058667 (CustomEventData_t317522481 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.CustomEventData::AddBool(System.String,System.Boolean)
extern "C"  bool CustomEventData_AddBool_m1904653514 (CustomEventData_t317522481 * __this, String_t* ___key0, bool ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.CustomEventData::AddChar(System.String,System.Char)
extern "C"  bool CustomEventData_AddChar_m2745147926 (CustomEventData_t317522481 * __this, String_t* ___key0, Il2CppChar ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.CustomEventData::AddByte(System.String,System.Byte)
extern "C"  bool CustomEventData_AddByte_m3440715081 (CustomEventData_t317522481 * __this, String_t* ___key0, uint8_t ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.CustomEventData::AddSByte(System.String,System.SByte)
extern "C"  bool CustomEventData_AddSByte_m452066509 (CustomEventData_t317522481 * __this, String_t* ___key0, int8_t ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.CustomEventData::AddInt16(System.String,System.Int16)
extern "C"  bool CustomEventData_AddInt16_m1551640704 (CustomEventData_t317522481 * __this, String_t* ___key0, int16_t ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.CustomEventData::AddUInt16(System.String,System.UInt16)
extern "C"  bool CustomEventData_AddUInt16_m3928706382 (CustomEventData_t317522481 * __this, String_t* ___key0, uint16_t ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.CustomEventData::AddInt32(System.String,System.Int32)
extern "C"  bool CustomEventData_AddInt32_m548429697 (CustomEventData_t317522481 * __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.CustomEventData::AddUInt32(System.String,System.UInt32)
extern "C"  bool CustomEventData_AddUInt32_m4102684736 (CustomEventData_t317522481 * __this, String_t* ___key0, uint32_t ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.CustomEventData::AddInt64(System.String,System.Int64)
extern "C"  bool CustomEventData_AddInt64_m3934322106 (CustomEventData_t317522481 * __this, String_t* ___key0, int64_t ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.CustomEventData::AddUInt64(System.String,System.UInt64)
extern "C"  bool CustomEventData_AddUInt64_m725801310 (CustomEventData_t317522481 * __this, String_t* ___key0, uint64_t ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Single)
extern "C"  Decimal_t2948259380  Convert_ToDecimal_m3508035522 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::op_Explicit(System.Decimal)
extern "C"  double Decimal_op_Explicit_m2816896069 (RuntimeObject * __this /* static, unused */, Decimal_t2948259380  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.CustomEventData::AddDouble(System.String,System.Double)
extern "C"  bool CustomEventData_AddDouble_m631895201 (CustomEventData_t317522481 * __this, String_t* ___key0, double ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Decimal)
extern "C"  Decimal_t2948259380  Convert_ToDecimal_m1783778724 (RuntimeObject * __this /* static, unused */, Decimal_t2948259380  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m256823211(__this, method) ((  String_t* (*) (KeyValuePair_2_t968067334 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m4184817181_gshared)(__this, method)
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m4108279609(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t968067334 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1132502692_gshared)(__this, method)
// System.Boolean UnityEngine.Analytics.CustomEventData::Add(System.String,System.String)
extern "C"  bool CustomEventData_Add_m2889310798 (CustomEventData_t317522481 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Object::GetType()
extern "C"  Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.CustomEventData::Add(System.String,System.Char)
extern "C"  bool CustomEventData_Add_m2090442979 (CustomEventData_t317522481 * __this, String_t* ___key0, Il2CppChar ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.CustomEventData::Add(System.String,System.SByte)
extern "C"  bool CustomEventData_Add_m2213655663 (CustomEventData_t317522481 * __this, String_t* ___key0, int8_t ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.CustomEventData::Add(System.String,System.Byte)
extern "C"  bool CustomEventData_Add_m3993893123 (CustomEventData_t317522481 * __this, String_t* ___key0, uint8_t ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.CustomEventData::Add(System.String,System.Int16)
extern "C"  bool CustomEventData_Add_m3841718291 (CustomEventData_t317522481 * __this, String_t* ___key0, int16_t ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.CustomEventData::Add(System.String,System.UInt16)
extern "C"  bool CustomEventData_Add_m3128590933 (CustomEventData_t317522481 * __this, String_t* ___key0, uint16_t ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.CustomEventData::Add(System.String,System.Int32)
extern "C"  bool CustomEventData_Add_m3459381263 (CustomEventData_t317522481 * __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.CustomEventData::Add(System.String,System.UInt32)
extern "C"  bool CustomEventData_Add_m3128853075 (CustomEventData_t317522481 * __this, String_t* ___key0, uint32_t ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.CustomEventData::Add(System.String,System.Int64)
extern "C"  bool CustomEventData_Add_m1885403157 (CustomEventData_t317522481 * __this, String_t* ___key0, int64_t ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.CustomEventData::Add(System.String,System.UInt64)
extern "C"  bool CustomEventData_Add_m3128722000 (CustomEventData_t317522481 * __this, String_t* ___key0, uint64_t ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.CustomEventData::Add(System.String,System.Boolean)
extern "C"  bool CustomEventData_Add_m1638466298 (CustomEventData_t317522481 * __this, String_t* ___key0, bool ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.CustomEventData::Add(System.String,System.Single)
extern "C"  bool CustomEventData_Add_m1043890744 (CustomEventData_t317522481 * __this, String_t* ___key0, float ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.CustomEventData::Add(System.String,System.Double)
extern "C"  bool CustomEventData_Add_m3692200486 (CustomEventData_t317522481 * __this, String_t* ___key0, double ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.CustomEventData::Add(System.String,System.Decimal)
extern "C"  bool CustomEventData_Add_m1995831386 (CustomEventData_t317522481 * __this, String_t* ___key0, Decimal_t2948259380  ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsValueType()
extern "C"  bool Type_get_IsValueType_m3108065642 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object)
extern "C"  String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.UnityAnalyticsHandler::InternalCreate()
extern "C"  void UnityAnalyticsHandler_InternalCreate_m1367333853 (UnityAnalyticsHandler_t3011359618 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.UnityAnalyticsHandler::InternalDestroy()
extern "C"  void UnityAnalyticsHandler_InternalDestroy_m2110158622 (UnityAnalyticsHandler_t3011359618 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.UnityAnalyticsHandler::SendCustomEventName(System.String)
extern "C"  int32_t UnityAnalyticsHandler_SendCustomEventName_m839221434 (UnityAnalyticsHandler_t3011359618 * __this, String_t* ___customEventName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.UnityAnalyticsHandler::SendCustomEvent(UnityEngine.Analytics.CustomEventData)
extern "C"  int32_t UnityAnalyticsHandler_SendCustomEvent_m1223269116 (UnityAnalyticsHandler_t3011359618 * __this, CustomEventData_t317522481 * ___eventData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// UnityEngine.Analytics.UnityAnalyticsHandler UnityEngine.Analytics.Analytics::GetUnityAnalyticsHandler()
extern "C"  UnityAnalyticsHandler_t3011359618 * Analytics_GetUnityAnalyticsHandler_m2772482435 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Analytics_GetUnityAnalyticsHandler_m2772482435_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityAnalyticsHandler_t3011359618 * V_0 = NULL;
	{
		UnityAnalyticsHandler_t3011359618 * L_0 = ((Analytics_t661012366_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t661012366_il2cpp_TypeInfo_var))->get_s_UnityAnalyticsHandler_0();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		UnityAnalyticsHandler_t3011359618 * L_1 = (UnityAnalyticsHandler_t3011359618 *)il2cpp_codegen_object_new(UnityAnalyticsHandler_t3011359618_il2cpp_TypeInfo_var);
		UnityAnalyticsHandler__ctor_m2433349566(L_1, /*hidden argument*/NULL);
		((Analytics_t661012366_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t661012366_il2cpp_TypeInfo_var))->set_s_UnityAnalyticsHandler_0(L_1);
	}

IL_0015:
	{
		UnityAnalyticsHandler_t3011359618 * L_2 = ((Analytics_t661012366_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t661012366_il2cpp_TypeInfo_var))->get_s_UnityAnalyticsHandler_0();
		V_0 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		UnityAnalyticsHandler_t3011359618 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::CustomEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t Analytics_CustomEvent_m3835919949 (RuntimeObject * __this /* static, unused */, String_t* ___customEventName0, RuntimeObject* ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Analytics_CustomEvent_m3835919949_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityAnalyticsHandler_t3011359618 * V_0 = NULL;
	int32_t V_1 = 0;
	CustomEventData_t317522481 * V_2 = NULL;
	{
		String_t* L_0 = ___customEventName0;
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_2, _stringLiteral2903831799, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		UnityAnalyticsHandler_t3011359618 * L_3 = Analytics_GetUnityAnalyticsHandler_m2772482435(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_3;
		UnityAnalyticsHandler_t3011359618 * L_4 = V_0;
		if (L_4)
		{
			goto IL_002a;
		}
	}
	{
		V_1 = 1;
		goto IL_0059;
	}

IL_002a:
	{
		RuntimeObject* L_5 = ___eventData1;
		if (L_5)
		{
			goto IL_003d;
		}
	}
	{
		UnityAnalyticsHandler_t3011359618 * L_6 = V_0;
		String_t* L_7 = ___customEventName0;
		NullCheck(L_6);
		int32_t L_8 = UnityAnalyticsHandler_CustomEvent_m1145496376(L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		goto IL_0059;
	}

IL_003d:
	{
		String_t* L_9 = ___customEventName0;
		CustomEventData_t317522481 * L_10 = (CustomEventData_t317522481 *)il2cpp_codegen_object_new(CustomEventData_t317522481_il2cpp_TypeInfo_var);
		CustomEventData__ctor_m4146403782(L_10, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		CustomEventData_t317522481 * L_11 = V_2;
		RuntimeObject* L_12 = ___eventData1;
		NullCheck(L_11);
		CustomEventData_Add_m2564314129(L_11, L_12, /*hidden argument*/NULL);
		UnityAnalyticsHandler_t3011359618 * L_13 = V_0;
		CustomEventData_t317522481 * L_14 = V_2;
		NullCheck(L_13);
		int32_t L_15 = UnityAnalyticsHandler_CustomEvent_m3710377462(L_13, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		goto IL_0059;
	}

IL_0059:
	{
		int32_t L_16 = V_1;
		return L_16;
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
// Conversion methods for marshalling of: UnityEngine.Analytics.CustomEventData
extern "C" void CustomEventData_t317522481_marshal_pinvoke(const CustomEventData_t317522481& unmarshaled, CustomEventData_t317522481_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void CustomEventData_t317522481_marshal_pinvoke_back(const CustomEventData_t317522481_marshaled_pinvoke& marshaled, CustomEventData_t317522481& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Analytics.CustomEventData
extern "C" void CustomEventData_t317522481_marshal_pinvoke_cleanup(CustomEventData_t317522481_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Analytics.CustomEventData
extern "C" void CustomEventData_t317522481_marshal_com(const CustomEventData_t317522481& unmarshaled, CustomEventData_t317522481_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void CustomEventData_t317522481_marshal_com_back(const CustomEventData_t317522481_marshaled_com& marshaled, CustomEventData_t317522481& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Analytics.CustomEventData
extern "C" void CustomEventData_t317522481_marshal_com_cleanup(CustomEventData_t317522481_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Analytics.CustomEventData::.ctor(System.String)
extern "C"  void CustomEventData__ctor_m4146403782 (CustomEventData_t317522481 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		CustomEventData_InternalCreate_m2668612744(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Analytics.CustomEventData::InternalCreate(System.String)
extern "C"  void CustomEventData_InternalCreate_m2668612744 (CustomEventData_t317522481 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef void (*CustomEventData_InternalCreate_m2668612744_ftn) (CustomEventData_t317522481 *, String_t*);
	static CustomEventData_InternalCreate_m2668612744_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_InternalCreate_m2668612744_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::InternalCreate(System.String)");
	_il2cpp_icall_func(__this, ___name0);
}
// System.Void UnityEngine.Analytics.CustomEventData::InternalDestroy()
extern "C"  void CustomEventData_InternalDestroy_m2184675245 (CustomEventData_t317522481 * __this, const RuntimeMethod* method)
{
	typedef void (*CustomEventData_InternalDestroy_m2184675245_ftn) (CustomEventData_t317522481 *);
	static CustomEventData_InternalDestroy_m2184675245_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_InternalDestroy_m2184675245_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::InternalDestroy()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddString(System.String,System.String)
extern "C"  bool CustomEventData_AddString_m1770058667 (CustomEventData_t317522481 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	typedef bool (*CustomEventData_AddString_m1770058667_ftn) (CustomEventData_t317522481 *, String_t*, String_t*);
	static CustomEventData_AddString_m1770058667_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_AddString_m1770058667_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::AddString(System.String,System.String)");
	bool retVal = _il2cpp_icall_func(__this, ___key0, ___value1);
	return retVal;
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddBool(System.String,System.Boolean)
extern "C"  bool CustomEventData_AddBool_m1904653514 (CustomEventData_t317522481 * __this, String_t* ___key0, bool ___value1, const RuntimeMethod* method)
{
	typedef bool (*CustomEventData_AddBool_m1904653514_ftn) (CustomEventData_t317522481 *, String_t*, bool);
	static CustomEventData_AddBool_m1904653514_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_AddBool_m1904653514_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::AddBool(System.String,System.Boolean)");
	bool retVal = _il2cpp_icall_func(__this, ___key0, ___value1);
	return retVal;
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddChar(System.String,System.Char)
extern "C"  bool CustomEventData_AddChar_m2745147926 (CustomEventData_t317522481 * __this, String_t* ___key0, Il2CppChar ___value1, const RuntimeMethod* method)
{
	typedef bool (*CustomEventData_AddChar_m2745147926_ftn) (CustomEventData_t317522481 *, String_t*, Il2CppChar);
	static CustomEventData_AddChar_m2745147926_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_AddChar_m2745147926_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::AddChar(System.String,System.Char)");
	bool retVal = _il2cpp_icall_func(__this, ___key0, ___value1);
	return retVal;
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddByte(System.String,System.Byte)
extern "C"  bool CustomEventData_AddByte_m3440715081 (CustomEventData_t317522481 * __this, String_t* ___key0, uint8_t ___value1, const RuntimeMethod* method)
{
	typedef bool (*CustomEventData_AddByte_m3440715081_ftn) (CustomEventData_t317522481 *, String_t*, uint8_t);
	static CustomEventData_AddByte_m3440715081_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_AddByte_m3440715081_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::AddByte(System.String,System.Byte)");
	bool retVal = _il2cpp_icall_func(__this, ___key0, ___value1);
	return retVal;
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddSByte(System.String,System.SByte)
extern "C"  bool CustomEventData_AddSByte_m452066509 (CustomEventData_t317522481 * __this, String_t* ___key0, int8_t ___value1, const RuntimeMethod* method)
{
	typedef bool (*CustomEventData_AddSByte_m452066509_ftn) (CustomEventData_t317522481 *, String_t*, int8_t);
	static CustomEventData_AddSByte_m452066509_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_AddSByte_m452066509_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::AddSByte(System.String,System.SByte)");
	bool retVal = _il2cpp_icall_func(__this, ___key0, ___value1);
	return retVal;
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddInt16(System.String,System.Int16)
extern "C"  bool CustomEventData_AddInt16_m1551640704 (CustomEventData_t317522481 * __this, String_t* ___key0, int16_t ___value1, const RuntimeMethod* method)
{
	typedef bool (*CustomEventData_AddInt16_m1551640704_ftn) (CustomEventData_t317522481 *, String_t*, int16_t);
	static CustomEventData_AddInt16_m1551640704_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_AddInt16_m1551640704_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::AddInt16(System.String,System.Int16)");
	bool retVal = _il2cpp_icall_func(__this, ___key0, ___value1);
	return retVal;
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddUInt16(System.String,System.UInt16)
extern "C"  bool CustomEventData_AddUInt16_m3928706382 (CustomEventData_t317522481 * __this, String_t* ___key0, uint16_t ___value1, const RuntimeMethod* method)
{
	typedef bool (*CustomEventData_AddUInt16_m3928706382_ftn) (CustomEventData_t317522481 *, String_t*, uint16_t);
	static CustomEventData_AddUInt16_m3928706382_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_AddUInt16_m3928706382_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::AddUInt16(System.String,System.UInt16)");
	bool retVal = _il2cpp_icall_func(__this, ___key0, ___value1);
	return retVal;
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddInt32(System.String,System.Int32)
extern "C"  bool CustomEventData_AddInt32_m548429697 (CustomEventData_t317522481 * __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	typedef bool (*CustomEventData_AddInt32_m548429697_ftn) (CustomEventData_t317522481 *, String_t*, int32_t);
	static CustomEventData_AddInt32_m548429697_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_AddInt32_m548429697_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::AddInt32(System.String,System.Int32)");
	bool retVal = _il2cpp_icall_func(__this, ___key0, ___value1);
	return retVal;
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddUInt32(System.String,System.UInt32)
extern "C"  bool CustomEventData_AddUInt32_m4102684736 (CustomEventData_t317522481 * __this, String_t* ___key0, uint32_t ___value1, const RuntimeMethod* method)
{
	typedef bool (*CustomEventData_AddUInt32_m4102684736_ftn) (CustomEventData_t317522481 *, String_t*, uint32_t);
	static CustomEventData_AddUInt32_m4102684736_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_AddUInt32_m4102684736_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::AddUInt32(System.String,System.UInt32)");
	bool retVal = _il2cpp_icall_func(__this, ___key0, ___value1);
	return retVal;
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddInt64(System.String,System.Int64)
extern "C"  bool CustomEventData_AddInt64_m3934322106 (CustomEventData_t317522481 * __this, String_t* ___key0, int64_t ___value1, const RuntimeMethod* method)
{
	typedef bool (*CustomEventData_AddInt64_m3934322106_ftn) (CustomEventData_t317522481 *, String_t*, int64_t);
	static CustomEventData_AddInt64_m3934322106_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_AddInt64_m3934322106_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::AddInt64(System.String,System.Int64)");
	bool retVal = _il2cpp_icall_func(__this, ___key0, ___value1);
	return retVal;
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddUInt64(System.String,System.UInt64)
extern "C"  bool CustomEventData_AddUInt64_m725801310 (CustomEventData_t317522481 * __this, String_t* ___key0, uint64_t ___value1, const RuntimeMethod* method)
{
	typedef bool (*CustomEventData_AddUInt64_m725801310_ftn) (CustomEventData_t317522481 *, String_t*, uint64_t);
	static CustomEventData_AddUInt64_m725801310_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_AddUInt64_m725801310_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::AddUInt64(System.String,System.UInt64)");
	bool retVal = _il2cpp_icall_func(__this, ___key0, ___value1);
	return retVal;
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddDouble(System.String,System.Double)
extern "C"  bool CustomEventData_AddDouble_m631895201 (CustomEventData_t317522481 * __this, String_t* ___key0, double ___value1, const RuntimeMethod* method)
{
	typedef bool (*CustomEventData_AddDouble_m631895201_ftn) (CustomEventData_t317522481 *, String_t*, double);
	static CustomEventData_AddDouble_m631895201_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_AddDouble_m631895201_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::AddDouble(System.String,System.Double)");
	bool retVal = _il2cpp_icall_func(__this, ___key0, ___value1);
	return retVal;
}
// System.Void UnityEngine.Analytics.CustomEventData::Finalize()
extern "C"  void CustomEventData_Finalize_m1724721833 (CustomEventData_t317522481 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		CustomEventData_InternalDestroy_m2184675245(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.CustomEventData::Dispose()
extern "C"  void CustomEventData_Dispose_m4023815755 (CustomEventData_t317522481 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CustomEventData_Dispose_m4023815755_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CustomEventData_InternalDestroy_m2184675245(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GC_t959872083_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Analytics.CustomEventData::Add(System.String,System.String)
extern "C"  bool CustomEventData_Add_m2889310798 (CustomEventData_t317522481 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = ___key0;
		String_t* L_1 = ___value1;
		bool L_2 = CustomEventData_AddString_m1770058667(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Analytics.CustomEventData::Add(System.String,System.Boolean)
extern "C"  bool CustomEventData_Add_m1638466298 (CustomEventData_t317522481 * __this, String_t* ___key0, bool ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = ___key0;
		bool L_1 = ___value1;
		bool L_2 = CustomEventData_AddBool_m1904653514(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Analytics.CustomEventData::Add(System.String,System.Char)
extern "C"  bool CustomEventData_Add_m2090442979 (CustomEventData_t317522481 * __this, String_t* ___key0, Il2CppChar ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = ___key0;
		Il2CppChar L_1 = ___value1;
		bool L_2 = CustomEventData_AddChar_m2745147926(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Analytics.CustomEventData::Add(System.String,System.Byte)
extern "C"  bool CustomEventData_Add_m3993893123 (CustomEventData_t317522481 * __this, String_t* ___key0, uint8_t ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = ___key0;
		uint8_t L_1 = ___value1;
		bool L_2 = CustomEventData_AddByte_m3440715081(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Analytics.CustomEventData::Add(System.String,System.SByte)
extern "C"  bool CustomEventData_Add_m2213655663 (CustomEventData_t317522481 * __this, String_t* ___key0, int8_t ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = ___key0;
		int8_t L_1 = ___value1;
		bool L_2 = CustomEventData_AddSByte_m452066509(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Analytics.CustomEventData::Add(System.String,System.Int16)
extern "C"  bool CustomEventData_Add_m3841718291 (CustomEventData_t317522481 * __this, String_t* ___key0, int16_t ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = ___key0;
		int16_t L_1 = ___value1;
		bool L_2 = CustomEventData_AddInt16_m1551640704(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Analytics.CustomEventData::Add(System.String,System.UInt16)
extern "C"  bool CustomEventData_Add_m3128590933 (CustomEventData_t317522481 * __this, String_t* ___key0, uint16_t ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = ___key0;
		uint16_t L_1 = ___value1;
		bool L_2 = CustomEventData_AddUInt16_m3928706382(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Analytics.CustomEventData::Add(System.String,System.Int32)
extern "C"  bool CustomEventData_Add_m3459381263 (CustomEventData_t317522481 * __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = ___key0;
		int32_t L_1 = ___value1;
		bool L_2 = CustomEventData_AddInt32_m548429697(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Analytics.CustomEventData::Add(System.String,System.UInt32)
extern "C"  bool CustomEventData_Add_m3128853075 (CustomEventData_t317522481 * __this, String_t* ___key0, uint32_t ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = ___key0;
		uint32_t L_1 = ___value1;
		bool L_2 = CustomEventData_AddUInt32_m4102684736(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Analytics.CustomEventData::Add(System.String,System.Int64)
extern "C"  bool CustomEventData_Add_m1885403157 (CustomEventData_t317522481 * __this, String_t* ___key0, int64_t ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = ___key0;
		int64_t L_1 = ___value1;
		bool L_2 = CustomEventData_AddInt64_m3934322106(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Analytics.CustomEventData::Add(System.String,System.UInt64)
extern "C"  bool CustomEventData_Add_m3128722000 (CustomEventData_t317522481 * __this, String_t* ___key0, uint64_t ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = ___key0;
		uint64_t L_1 = ___value1;
		bool L_2 = CustomEventData_AddUInt64_m725801310(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Analytics.CustomEventData::Add(System.String,System.Single)
extern "C"  bool CustomEventData_Add_m1043890744 (CustomEventData_t317522481 * __this, String_t* ___key0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CustomEventData_Add_m1043890744_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		String_t* L_0 = ___key0;
		float L_1 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		Decimal_t2948259380  L_2 = Convert_ToDecimal_m3508035522(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2948259380_il2cpp_TypeInfo_var);
		double L_3 = Decimal_op_Explicit_m2816896069(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		bool L_4 = CustomEventData_AddDouble_m631895201(__this, L_0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean UnityEngine.Analytics.CustomEventData::Add(System.String,System.Double)
extern "C"  bool CustomEventData_Add_m3692200486 (CustomEventData_t317522481 * __this, String_t* ___key0, double ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = ___key0;
		double L_1 = ___value1;
		bool L_2 = CustomEventData_AddDouble_m631895201(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Analytics.CustomEventData::Add(System.String,System.Decimal)
extern "C"  bool CustomEventData_Add_m1995831386 (CustomEventData_t317522481 * __this, String_t* ___key0, Decimal_t2948259380  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CustomEventData_Add_m1995831386_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		String_t* L_0 = ___key0;
		Decimal_t2948259380  L_1 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		Decimal_t2948259380  L_2 = Convert_ToDecimal_m1783778724(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2948259380_il2cpp_TypeInfo_var);
		double L_3 = Decimal_op_Explicit_m2816896069(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		bool L_4 = CustomEventData_AddDouble_m631895201(__this, L_0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean UnityEngine.Analytics.CustomEventData::Add(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  bool CustomEventData_Add_m2564314129 (CustomEventData_t317522481 * __this, RuntimeObject* ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CustomEventData_Add_m2564314129_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t968067334  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	Type_t * V_4 = NULL;
	bool V_5 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___eventData0;
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetEnumerator() */, IEnumerable_1_t4242887519_il2cpp_TypeInfo_var, L_0);
		V_1 = L_1;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0277;
		}

IL_000e:
		{
			RuntimeObject* L_2 = V_1;
			NullCheck(L_2);
			KeyValuePair_2_t968067334  L_3 = InterfaceFuncInvoker0< KeyValuePair_2_t968067334  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current() */, IEnumerator_1_t1400637802_il2cpp_TypeInfo_var, L_2);
			V_0 = L_3;
			String_t* L_4 = KeyValuePair_2_get_Key_m256823211((&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m256823211_RuntimeMethod_var);
			V_2 = L_4;
			RuntimeObject * L_5 = KeyValuePair_2_get_Value_m4108279609((&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m4108279609_RuntimeMethod_var);
			V_3 = L_5;
			RuntimeObject * L_6 = V_3;
			if (L_6)
			{
				goto IL_003f;
			}
		}

IL_002c:
		{
			String_t* L_7 = V_2;
			CustomEventData_Add_m2889310798(__this, L_7, _stringLiteral1202628576, /*hidden argument*/NULL);
			goto IL_0277;
		}

IL_003f:
		{
			RuntimeObject * L_8 = V_3;
			NullCheck(L_8);
			Type_t * L_9 = Object_GetType_m88164663(L_8, /*hidden argument*/NULL);
			V_4 = L_9;
			Type_t * L_10 = V_4;
			RuntimeTypeHandle_t3027515415  L_11 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_12 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
			if ((!(((RuntimeObject*)(Type_t *)L_10) == ((RuntimeObject*)(Type_t *)L_12))))
			{
				goto IL_006b;
			}
		}

IL_0058:
		{
			String_t* L_13 = V_2;
			RuntimeObject * L_14 = V_3;
			CustomEventData_Add_m2889310798(__this, L_13, ((String_t*)CastclassSealed((RuntimeObject*)L_14, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			goto IL_0276;
		}

IL_006b:
		{
			Type_t * L_15 = V_4;
			RuntimeTypeHandle_t3027515415  L_16 = { reinterpret_cast<intptr_t> (Char_t3634460470_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_17 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
			if ((!(((RuntimeObject*)(Type_t *)L_15) == ((RuntimeObject*)(Type_t *)L_17))))
			{
				goto IL_008f;
			}
		}

IL_007c:
		{
			String_t* L_18 = V_2;
			RuntimeObject * L_19 = V_3;
			CustomEventData_Add_m2090442979(__this, L_18, ((*(Il2CppChar*)((Il2CppChar*)UnBox(L_19, Char_t3634460470_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			goto IL_0276;
		}

IL_008f:
		{
			Type_t * L_20 = V_4;
			RuntimeTypeHandle_t3027515415  L_21 = { reinterpret_cast<intptr_t> (SByte_t1669577662_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_22 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
			if ((!(((RuntimeObject*)(Type_t *)L_20) == ((RuntimeObject*)(Type_t *)L_22))))
			{
				goto IL_00b3;
			}
		}

IL_00a0:
		{
			String_t* L_23 = V_2;
			RuntimeObject * L_24 = V_3;
			CustomEventData_Add_m2213655663(__this, L_23, ((*(int8_t*)((int8_t*)UnBox(L_24, SByte_t1669577662_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			goto IL_0276;
		}

IL_00b3:
		{
			Type_t * L_25 = V_4;
			RuntimeTypeHandle_t3027515415  L_26 = { reinterpret_cast<intptr_t> (Byte_t1134296376_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_27 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
			if ((!(((RuntimeObject*)(Type_t *)L_25) == ((RuntimeObject*)(Type_t *)L_27))))
			{
				goto IL_00d7;
			}
		}

IL_00c4:
		{
			String_t* L_28 = V_2;
			RuntimeObject * L_29 = V_3;
			CustomEventData_Add_m3993893123(__this, L_28, ((*(uint8_t*)((uint8_t*)UnBox(L_29, Byte_t1134296376_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			goto IL_0276;
		}

IL_00d7:
		{
			Type_t * L_30 = V_4;
			RuntimeTypeHandle_t3027515415  L_31 = { reinterpret_cast<intptr_t> (Int16_t2552820387_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_32 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
			if ((!(((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_32))))
			{
				goto IL_00fb;
			}
		}

IL_00e8:
		{
			String_t* L_33 = V_2;
			RuntimeObject * L_34 = V_3;
			CustomEventData_Add_m3841718291(__this, L_33, ((*(int16_t*)((int16_t*)UnBox(L_34, Int16_t2552820387_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			goto IL_0276;
		}

IL_00fb:
		{
			Type_t * L_35 = V_4;
			RuntimeTypeHandle_t3027515415  L_36 = { reinterpret_cast<intptr_t> (UInt16_t2177724958_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_37 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
			if ((!(((RuntimeObject*)(Type_t *)L_35) == ((RuntimeObject*)(Type_t *)L_37))))
			{
				goto IL_011f;
			}
		}

IL_010c:
		{
			String_t* L_38 = V_2;
			RuntimeObject * L_39 = V_3;
			CustomEventData_Add_m3128590933(__this, L_38, ((*(uint16_t*)((uint16_t*)UnBox(L_39, UInt16_t2177724958_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			goto IL_0276;
		}

IL_011f:
		{
			Type_t * L_40 = V_4;
			RuntimeTypeHandle_t3027515415  L_41 = { reinterpret_cast<intptr_t> (Int32_t2950945753_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_42 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
			if ((!(((RuntimeObject*)(Type_t *)L_40) == ((RuntimeObject*)(Type_t *)L_42))))
			{
				goto IL_0143;
			}
		}

IL_0130:
		{
			String_t* L_43 = V_2;
			RuntimeObject * L_44 = V_3;
			CustomEventData_Add_m3459381263(__this, L_43, ((*(int32_t*)((int32_t*)UnBox(L_44, Int32_t2950945753_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			goto IL_0276;
		}

IL_0143:
		{
			Type_t * L_45 = V_4;
			RuntimeTypeHandle_t3027515415  L_46 = { reinterpret_cast<intptr_t> (UInt32_t2560061978_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_47 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_46, /*hidden argument*/NULL);
			if ((!(((RuntimeObject*)(Type_t *)L_45) == ((RuntimeObject*)(Type_t *)L_47))))
			{
				goto IL_016d;
			}
		}

IL_0154:
		{
			String_t* L_48 = KeyValuePair_2_get_Key_m256823211((&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m256823211_RuntimeMethod_var);
			RuntimeObject * L_49 = V_3;
			CustomEventData_Add_m3128853075(__this, L_48, ((*(uint32_t*)((uint32_t*)UnBox(L_49, UInt32_t2560061978_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			goto IL_0276;
		}

IL_016d:
		{
			Type_t * L_50 = V_4;
			RuntimeTypeHandle_t3027515415  L_51 = { reinterpret_cast<intptr_t> (Int64_t3736567304_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_52 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_51, /*hidden argument*/NULL);
			if ((!(((RuntimeObject*)(Type_t *)L_50) == ((RuntimeObject*)(Type_t *)L_52))))
			{
				goto IL_0191;
			}
		}

IL_017e:
		{
			String_t* L_53 = V_2;
			RuntimeObject * L_54 = V_3;
			CustomEventData_Add_m1885403157(__this, L_53, ((*(int64_t*)((int64_t*)UnBox(L_54, Int64_t3736567304_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			goto IL_0276;
		}

IL_0191:
		{
			Type_t * L_55 = V_4;
			RuntimeTypeHandle_t3027515415  L_56 = { reinterpret_cast<intptr_t> (UInt64_t4134040092_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_57 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_56, /*hidden argument*/NULL);
			if ((!(((RuntimeObject*)(Type_t *)L_55) == ((RuntimeObject*)(Type_t *)L_57))))
			{
				goto IL_01b5;
			}
		}

IL_01a2:
		{
			String_t* L_58 = V_2;
			RuntimeObject * L_59 = V_3;
			CustomEventData_Add_m3128722000(__this, L_58, ((*(uint64_t*)((uint64_t*)UnBox(L_59, UInt64_t4134040092_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			goto IL_0276;
		}

IL_01b5:
		{
			Type_t * L_60 = V_4;
			RuntimeTypeHandle_t3027515415  L_61 = { reinterpret_cast<intptr_t> (Boolean_t97287965_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_62 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_61, /*hidden argument*/NULL);
			if ((!(((RuntimeObject*)(Type_t *)L_60) == ((RuntimeObject*)(Type_t *)L_62))))
			{
				goto IL_01d9;
			}
		}

IL_01c6:
		{
			String_t* L_63 = V_2;
			RuntimeObject * L_64 = V_3;
			CustomEventData_Add_m1638466298(__this, L_63, ((*(bool*)((bool*)UnBox(L_64, Boolean_t97287965_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			goto IL_0276;
		}

IL_01d9:
		{
			Type_t * L_65 = V_4;
			RuntimeTypeHandle_t3027515415  L_66 = { reinterpret_cast<intptr_t> (Single_t1397266774_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_67 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_66, /*hidden argument*/NULL);
			if ((!(((RuntimeObject*)(Type_t *)L_65) == ((RuntimeObject*)(Type_t *)L_67))))
			{
				goto IL_01fd;
			}
		}

IL_01ea:
		{
			String_t* L_68 = V_2;
			RuntimeObject * L_69 = V_3;
			CustomEventData_Add_m1043890744(__this, L_68, ((*(float*)((float*)UnBox(L_69, Single_t1397266774_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			goto IL_0276;
		}

IL_01fd:
		{
			Type_t * L_70 = V_4;
			RuntimeTypeHandle_t3027515415  L_71 = { reinterpret_cast<intptr_t> (Double_t594665363_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_72 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_71, /*hidden argument*/NULL);
			if ((!(((RuntimeObject*)(Type_t *)L_70) == ((RuntimeObject*)(Type_t *)L_72))))
			{
				goto IL_0221;
			}
		}

IL_020e:
		{
			String_t* L_73 = V_2;
			RuntimeObject * L_74 = V_3;
			CustomEventData_Add_m3692200486(__this, L_73, ((*(double*)((double*)UnBox(L_74, Double_t594665363_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			goto IL_0276;
		}

IL_0221:
		{
			Type_t * L_75 = V_4;
			RuntimeTypeHandle_t3027515415  L_76 = { reinterpret_cast<intptr_t> (Decimal_t2948259380_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_77 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_76, /*hidden argument*/NULL);
			if ((!(((RuntimeObject*)(Type_t *)L_75) == ((RuntimeObject*)(Type_t *)L_77))))
			{
				goto IL_0245;
			}
		}

IL_0232:
		{
			String_t* L_78 = V_2;
			RuntimeObject * L_79 = V_3;
			CustomEventData_Add_m1995831386(__this, L_78, ((*(Decimal_t2948259380 *)((Decimal_t2948259380 *)UnBox(L_79, Decimal_t2948259380_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			goto IL_0276;
		}

IL_0245:
		{
			Type_t * L_80 = V_4;
			NullCheck(L_80);
			bool L_81 = Type_get_IsValueType_m3108065642(L_80, /*hidden argument*/NULL);
			if (!L_81)
			{
				goto IL_0264;
			}
		}

IL_0251:
		{
			String_t* L_82 = V_2;
			RuntimeObject * L_83 = V_3;
			NullCheck(L_83);
			String_t* L_84 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_83);
			CustomEventData_Add_m2889310798(__this, L_82, L_84, /*hidden argument*/NULL);
			goto IL_0276;
		}

IL_0264:
		{
			Type_t * L_85 = V_4;
			String_t* L_86 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3959746398, L_85, /*hidden argument*/NULL);
			ArgumentException_t132251570 * L_87 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m1312628991(L_87, L_86, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_87);
		}

IL_0276:
		{
		}

IL_0277:
		{
			RuntimeObject* L_88 = V_1;
			NullCheck(L_88);
			bool L_89 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_88);
			if (L_89)
			{
				goto IL_000e;
			}
		}

IL_0282:
		{
			IL2CPP_LEAVE(0x294, FINALLY_0287);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0287;
	}

FINALLY_0287:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_90 = V_1;
			if (!L_90)
			{
				goto IL_0293;
			}
		}

IL_028d:
		{
			RuntimeObject* L_91 = V_1;
			NullCheck(L_91);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_91);
		}

IL_0293:
		{
			IL2CPP_END_FINALLY(647)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(647)
	{
		IL2CPP_JUMP_TBL(0x294, IL_0294)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0294:
	{
		V_5 = (bool)1;
		goto IL_029c;
	}

IL_029c:
	{
		bool L_92 = V_5;
		return L_92;
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
// Conversion methods for marshalling of: UnityEngine.Analytics.UnityAnalyticsHandler
extern "C" void UnityAnalyticsHandler_t3011359618_marshal_pinvoke(const UnityAnalyticsHandler_t3011359618& unmarshaled, UnityAnalyticsHandler_t3011359618_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void UnityAnalyticsHandler_t3011359618_marshal_pinvoke_back(const UnityAnalyticsHandler_t3011359618_marshaled_pinvoke& marshaled, UnityAnalyticsHandler_t3011359618& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Analytics.UnityAnalyticsHandler
extern "C" void UnityAnalyticsHandler_t3011359618_marshal_pinvoke_cleanup(UnityAnalyticsHandler_t3011359618_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Analytics.UnityAnalyticsHandler
extern "C" void UnityAnalyticsHandler_t3011359618_marshal_com(const UnityAnalyticsHandler_t3011359618& unmarshaled, UnityAnalyticsHandler_t3011359618_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void UnityAnalyticsHandler_t3011359618_marshal_com_back(const UnityAnalyticsHandler_t3011359618_marshaled_com& marshaled, UnityAnalyticsHandler_t3011359618& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Analytics.UnityAnalyticsHandler
extern "C" void UnityAnalyticsHandler_t3011359618_marshal_com_cleanup(UnityAnalyticsHandler_t3011359618_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Analytics.UnityAnalyticsHandler::.ctor()
extern "C"  void UnityAnalyticsHandler__ctor_m2433349566 (UnityAnalyticsHandler_t3011359618 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		UnityAnalyticsHandler_InternalCreate_m1367333853(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Analytics.UnityAnalyticsHandler::InternalCreate()
extern "C"  void UnityAnalyticsHandler_InternalCreate_m1367333853 (UnityAnalyticsHandler_t3011359618 * __this, const RuntimeMethod* method)
{
	typedef void (*UnityAnalyticsHandler_InternalCreate_m1367333853_ftn) (UnityAnalyticsHandler_t3011359618 *);
	static UnityAnalyticsHandler_InternalCreate_m1367333853_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityAnalyticsHandler_InternalCreate_m1367333853_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.UnityAnalyticsHandler::InternalCreate()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Analytics.UnityAnalyticsHandler::InternalDestroy()
extern "C"  void UnityAnalyticsHandler_InternalDestroy_m2110158622 (UnityAnalyticsHandler_t3011359618 * __this, const RuntimeMethod* method)
{
	typedef void (*UnityAnalyticsHandler_InternalDestroy_m2110158622_ftn) (UnityAnalyticsHandler_t3011359618 *);
	static UnityAnalyticsHandler_InternalDestroy_m2110158622_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityAnalyticsHandler_InternalDestroy_m2110158622_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.UnityAnalyticsHandler::InternalDestroy()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Analytics.UnityAnalyticsHandler::Finalize()
extern "C"  void UnityAnalyticsHandler_Finalize_m1527596444 (UnityAnalyticsHandler_t3011359618 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		UnityAnalyticsHandler_InternalDestroy_m2110158622(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.UnityAnalyticsHandler::Dispose()
extern "C"  void UnityAnalyticsHandler_Dispose_m300860768 (UnityAnalyticsHandler_t3011359618 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAnalyticsHandler_Dispose_m300860768_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityAnalyticsHandler_InternalDestroy_m2110158622(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GC_t959872083_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.UnityAnalyticsHandler::CustomEvent(System.String)
extern "C"  int32_t UnityAnalyticsHandler_CustomEvent_m1145496376 (UnityAnalyticsHandler_t3011359618 * __this, String_t* ___customEventName0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___customEventName0;
		int32_t L_1 = UnityAnalyticsHandler_SendCustomEventName_m839221434(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.UnityAnalyticsHandler::CustomEvent(UnityEngine.Analytics.CustomEventData)
extern "C"  int32_t UnityAnalyticsHandler_CustomEvent_m3710377462 (UnityAnalyticsHandler_t3011359618 * __this, CustomEventData_t317522481 * ___eventData0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		CustomEventData_t317522481 * L_0 = ___eventData0;
		int32_t L_1 = UnityAnalyticsHandler_SendCustomEvent_m1223269116(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.UnityAnalyticsHandler::SendCustomEventName(System.String)
extern "C"  int32_t UnityAnalyticsHandler_SendCustomEventName_m839221434 (UnityAnalyticsHandler_t3011359618 * __this, String_t* ___customEventName0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityAnalyticsHandler_SendCustomEventName_m839221434_ftn) (UnityAnalyticsHandler_t3011359618 *, String_t*);
	static UnityAnalyticsHandler_SendCustomEventName_m839221434_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityAnalyticsHandler_SendCustomEventName_m839221434_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.UnityAnalyticsHandler::SendCustomEventName(System.String)");
	int32_t retVal = _il2cpp_icall_func(__this, ___customEventName0);
	return retVal;
}
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.UnityAnalyticsHandler::SendCustomEvent(UnityEngine.Analytics.CustomEventData)
extern "C"  int32_t UnityAnalyticsHandler_SendCustomEvent_m1223269116 (UnityAnalyticsHandler_t3011359618 * __this, CustomEventData_t317522481 * ___eventData0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityAnalyticsHandler_SendCustomEvent_m1223269116_ftn) (UnityAnalyticsHandler_t3011359618 *, CustomEventData_t317522481 *);
	static UnityAnalyticsHandler_SendCustomEvent_m1223269116_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityAnalyticsHandler_SendCustomEvent_m1223269116_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.UnityAnalyticsHandler::SendCustomEvent(UnityEngine.Analytics.CustomEventData)");
	int32_t retVal = _il2cpp_icall_func(__this, ___eventData0);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
