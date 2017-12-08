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

// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.Mesh[]
struct MeshU5BU5D_t3972987605;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// UnityStandardAssets.ImageEffects.Triangles
struct Triangles_t2090031681;
// UnityStandardAssets.ImageEffects.Twirl
struct Twirl_t2760508880;
// UnityEngine.RenderTexture
struct RenderTexture_t2108887433;
// UnityStandardAssets.ImageEffects.ImageEffectBase
struct ImageEffectBase_t2026006575;
// UnityEngine.Material
struct Material_t340375123;
// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration
struct VignetteAndChromaticAberration_t3308099924;
// UnityStandardAssets.ImageEffects.PostEffectsBase
struct PostEffectsBase_t2404315739;
// UnityEngine.Shader
struct Shader_t4151988712;
// UnityEngine.Texture
struct Texture_t3661962703;
// System.String
struct String_t;
// UnityStandardAssets.ImageEffects.Vortex
struct Vortex_t3420399868;
// System.Void
struct Void_t1185182177;
// System.Char[]
struct CharU5BU5D_t3528271667;

extern RuntimeClass* Triangles_t2090031681_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const uint32_t Triangles_HasMeshes_m2632248376_MetadataUsageId;
extern const uint32_t Triangles_Cleanup_m2695142149_MetadataUsageId;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* MeshU5BU5D_t3972987605_il2cpp_TypeInfo_var;
extern const uint32_t Triangles_GetMeshes_m4005833784_MetadataUsageId;
extern RuntimeClass* Mesh_t3648964284_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern const uint32_t Triangles_GetMesh_m3094080564_MetadataUsageId;
extern RuntimeClass* Graphics_t783367614_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector4_t3319028937_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1624685711;
extern String_t* _stringLiteral3952415593;
extern String_t* _stringLiteral3560662707;
extern String_t* _stringLiteral3020016099;
extern String_t* _stringLiteral1596491694;
extern String_t* _stringLiteral1767284560;
extern String_t* _stringLiteral1772571274;
extern String_t* _stringLiteral2859884931;
extern const uint32_t VignetteAndChromaticAberration_OnRenderImage_m979090338_MetadataUsageId;

struct MeshU5BU5D_t3972987605;
struct Vector3U5BU5D_t1718750761;
struct Vector2U5BU5D_t1457185986;
struct Int32U5BU5D_t385246372;


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
#ifndef TRIANGLES_T2090031681_H
#define TRIANGLES_T2090031681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Triangles
struct  Triangles_t2090031681  : public RuntimeObject
{
public:

public:
};

struct Triangles_t2090031681_StaticFields
{
public:
	// UnityEngine.Mesh[] UnityStandardAssets.ImageEffects.Triangles::meshes
	MeshU5BU5D_t3972987605* ___meshes_0;
	// System.Int32 UnityStandardAssets.ImageEffects.Triangles::currentTris
	int32_t ___currentTris_1;

public:
	inline static int32_t get_offset_of_meshes_0() { return static_cast<int32_t>(offsetof(Triangles_t2090031681_StaticFields, ___meshes_0)); }
	inline MeshU5BU5D_t3972987605* get_meshes_0() const { return ___meshes_0; }
	inline MeshU5BU5D_t3972987605** get_address_of_meshes_0() { return &___meshes_0; }
	inline void set_meshes_0(MeshU5BU5D_t3972987605* value)
	{
		___meshes_0 = value;
		Il2CppCodeGenWriteBarrier((&___meshes_0), value);
	}

	inline static int32_t get_offset_of_currentTris_1() { return static_cast<int32_t>(offsetof(Triangles_t2090031681_StaticFields, ___currentTris_1)); }
	inline int32_t get_currentTris_1() const { return ___currentTris_1; }
	inline int32_t* get_address_of_currentTris_1() { return &___currentTris_1; }
	inline void set_currentTris_1(int32_t value)
	{
		___currentTris_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIANGLES_T2090031681_H
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
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
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
#ifndef VECTOR4_T3319028937_H
#define VECTOR4_T3319028937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3319028937 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3319028937_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3319028937  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3319028937  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3319028937  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3319028937  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3319028937  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3319028937 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3319028937  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___oneVector_6)); }
	inline Vector4_t3319028937  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3319028937 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3319028937  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3319028937  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3319028937 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3319028937  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3319028937  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3319028937 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3319028937  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3319028937_H
#ifndef MATHF_T3464937446_H
#define MATHF_T3464937446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mathf
struct  Mathf_t3464937446 
{
public:

public:
};

struct Mathf_t3464937446_StaticFields
{
public:
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;

public:
	inline static int32_t get_offset_of_Epsilon_0() { return static_cast<int32_t>(offsetof(Mathf_t3464937446_StaticFields, ___Epsilon_0)); }
	inline float get_Epsilon_0() const { return ___Epsilon_0; }
	inline float* get_address_of_Epsilon_0() { return &___Epsilon_0; }
	inline void set_Epsilon_0(float value)
	{
		___Epsilon_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHF_T3464937446_H
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
#ifndef RENDERTEXTUREFORMAT_T962350765_H
#define RENDERTEXTUREFORMAT_T962350765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTextureFormat
struct  RenderTextureFormat_t962350765 
{
public:
	// System.Int32 UnityEngine.RenderTextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureFormat_t962350765, ___value___2)); }
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
#endif // RENDERTEXTUREFORMAT_T962350765_H
#ifndef TEXTUREWRAPMODE_T584250749_H
#define TEXTUREWRAPMODE_T584250749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureWrapMode
struct  TextureWrapMode_t584250749 
{
public:
	// System.Int32 UnityEngine.TextureWrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureWrapMode_t584250749, ___value___2)); }
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
#endif // TEXTUREWRAPMODE_T584250749_H
#ifndef ADAPTIVETEXSIZE_T1062941056_H
#define ADAPTIVETEXSIZE_T1062941056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Tonemapping/AdaptiveTexSize
struct  AdaptiveTexSize_t1062941056 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.Tonemapping/AdaptiveTexSize::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AdaptiveTexSize_t1062941056, ___value___2)); }
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
#endif // ADAPTIVETEXSIZE_T1062941056_H
#ifndef TONEMAPPERTYPE_T52991894_H
#define TONEMAPPERTYPE_T52991894_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Tonemapping/TonemapperType
struct  TonemapperType_t52991894 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.Tonemapping/TonemapperType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TonemapperType_t52991894, ___value___2)); }
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
#endif // TONEMAPPERTYPE_T52991894_H
#ifndef HIDEFLAGS_T4250555765_H
#define HIDEFLAGS_T4250555765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HideFlags
struct  HideFlags_t4250555765 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_t4250555765, ___value___2)); }
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
#endif // HIDEFLAGS_T4250555765_H
#ifndef TWEAKMODE34_T984135990_H
#define TWEAKMODE34_T984135990_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.TweakMode34
struct  TweakMode34_t984135990 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.TweakMode34::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TweakMode34_t984135990, ___value___2)); }
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
#endif // TWEAKMODE34_T984135990_H
#ifndef ABERRATIONMODE_T218549536_H
#define ABERRATIONMODE_T218549536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration/AberrationMode
struct  AberrationMode_t218549536 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration/AberrationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AberrationMode_t218549536, ___value___2)); }
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
#endif // ABERRATIONMODE_T218549536_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef MESH_T3648964284_H
#define MESH_T3648964284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t3648964284  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T3648964284_H
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef SHADER_T4151988712_H
#define SHADER_T4151988712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Shader
struct  Shader_t4151988712  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADER_T4151988712_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef RENDERTEXTURE_T2108887433_H
#define RENDERTEXTURE_T2108887433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTexture
struct  RenderTexture_t2108887433  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTURE_T2108887433_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef IMAGEEFFECTBASE_T2026006575_H
#define IMAGEEFFECTBASE_T2026006575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.ImageEffectBase
struct  ImageEffectBase_t2026006575  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ImageEffectBase::shader
	Shader_t4151988712 * ___shader_2;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ImageEffectBase::m_Material
	Material_t340375123 * ___m_Material_3;

public:
	inline static int32_t get_offset_of_shader_2() { return static_cast<int32_t>(offsetof(ImageEffectBase_t2026006575, ___shader_2)); }
	inline Shader_t4151988712 * get_shader_2() const { return ___shader_2; }
	inline Shader_t4151988712 ** get_address_of_shader_2() { return &___shader_2; }
	inline void set_shader_2(Shader_t4151988712 * value)
	{
		___shader_2 = value;
		Il2CppCodeGenWriteBarrier((&___shader_2), value);
	}

	inline static int32_t get_offset_of_m_Material_3() { return static_cast<int32_t>(offsetof(ImageEffectBase_t2026006575, ___m_Material_3)); }
	inline Material_t340375123 * get_m_Material_3() const { return ___m_Material_3; }
	inline Material_t340375123 ** get_address_of_m_Material_3() { return &___m_Material_3; }
	inline void set_m_Material_3(Material_t340375123 * value)
	{
		___m_Material_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGEEFFECTBASE_T2026006575_H
#ifndef POSTEFFECTSBASE_T2404315739_H
#define POSTEFFECTSBASE_T2404315739_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.PostEffectsBase
struct  PostEffectsBase_t2404315739  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::supportHDRTextures
	bool ___supportHDRTextures_2;
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::supportDX11
	bool ___supportDX11_3;
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::isSupported
	bool ___isSupported_4;

public:
	inline static int32_t get_offset_of_supportHDRTextures_2() { return static_cast<int32_t>(offsetof(PostEffectsBase_t2404315739, ___supportHDRTextures_2)); }
	inline bool get_supportHDRTextures_2() const { return ___supportHDRTextures_2; }
	inline bool* get_address_of_supportHDRTextures_2() { return &___supportHDRTextures_2; }
	inline void set_supportHDRTextures_2(bool value)
	{
		___supportHDRTextures_2 = value;
	}

	inline static int32_t get_offset_of_supportDX11_3() { return static_cast<int32_t>(offsetof(PostEffectsBase_t2404315739, ___supportDX11_3)); }
	inline bool get_supportDX11_3() const { return ___supportDX11_3; }
	inline bool* get_address_of_supportDX11_3() { return &___supportDX11_3; }
	inline void set_supportDX11_3(bool value)
	{
		___supportDX11_3 = value;
	}

	inline static int32_t get_offset_of_isSupported_4() { return static_cast<int32_t>(offsetof(PostEffectsBase_t2404315739, ___isSupported_4)); }
	inline bool get_isSupported_4() const { return ___isSupported_4; }
	inline bool* get_address_of_isSupported_4() { return &___isSupported_4; }
	inline void set_isSupported_4(bool value)
	{
		___isSupported_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTEFFECTSBASE_T2404315739_H
#ifndef VORTEX_T3420399868_H
#define VORTEX_T3420399868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Vortex
struct  Vortex_t3420399868  : public ImageEffectBase_t2026006575
{
public:
	// UnityEngine.Vector2 UnityStandardAssets.ImageEffects.Vortex::radius
	Vector2_t2156229523  ___radius_4;
	// System.Single UnityStandardAssets.ImageEffects.Vortex::angle
	float ___angle_5;
	// UnityEngine.Vector2 UnityStandardAssets.ImageEffects.Vortex::center
	Vector2_t2156229523  ___center_6;

public:
	inline static int32_t get_offset_of_radius_4() { return static_cast<int32_t>(offsetof(Vortex_t3420399868, ___radius_4)); }
	inline Vector2_t2156229523  get_radius_4() const { return ___radius_4; }
	inline Vector2_t2156229523 * get_address_of_radius_4() { return &___radius_4; }
	inline void set_radius_4(Vector2_t2156229523  value)
	{
		___radius_4 = value;
	}

	inline static int32_t get_offset_of_angle_5() { return static_cast<int32_t>(offsetof(Vortex_t3420399868, ___angle_5)); }
	inline float get_angle_5() const { return ___angle_5; }
	inline float* get_address_of_angle_5() { return &___angle_5; }
	inline void set_angle_5(float value)
	{
		___angle_5 = value;
	}

	inline static int32_t get_offset_of_center_6() { return static_cast<int32_t>(offsetof(Vortex_t3420399868, ___center_6)); }
	inline Vector2_t2156229523  get_center_6() const { return ___center_6; }
	inline Vector2_t2156229523 * get_address_of_center_6() { return &___center_6; }
	inline void set_center_6(Vector2_t2156229523  value)
	{
		___center_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VORTEX_T3420399868_H
#ifndef VIGNETTEANDCHROMATICABERRATION_T3308099924_H
#define VIGNETTEANDCHROMATICABERRATION_T3308099924_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration
struct  VignetteAndChromaticAberration_t3308099924  : public PostEffectsBase_t2404315739
{
public:
	// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration/AberrationMode UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::mode
	int32_t ___mode_5;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::intensity
	float ___intensity_6;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::chromaticAberration
	float ___chromaticAberration_7;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::axialAberration
	float ___axialAberration_8;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::blur
	float ___blur_9;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::blurSpread
	float ___blurSpread_10;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::luminanceDependency
	float ___luminanceDependency_11;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::blurDistance
	float ___blurDistance_12;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::vignetteShader
	Shader_t4151988712 * ___vignetteShader_13;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::separableBlurShader
	Shader_t4151988712 * ___separableBlurShader_14;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::chromAberrationShader
	Shader_t4151988712 * ___chromAberrationShader_15;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::m_VignetteMaterial
	Material_t340375123 * ___m_VignetteMaterial_16;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::m_SeparableBlurMaterial
	Material_t340375123 * ___m_SeparableBlurMaterial_17;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::m_ChromAberrationMaterial
	Material_t340375123 * ___m_ChromAberrationMaterial_18;

public:
	inline static int32_t get_offset_of_mode_5() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___mode_5)); }
	inline int32_t get_mode_5() const { return ___mode_5; }
	inline int32_t* get_address_of_mode_5() { return &___mode_5; }
	inline void set_mode_5(int32_t value)
	{
		___mode_5 = value;
	}

	inline static int32_t get_offset_of_intensity_6() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___intensity_6)); }
	inline float get_intensity_6() const { return ___intensity_6; }
	inline float* get_address_of_intensity_6() { return &___intensity_6; }
	inline void set_intensity_6(float value)
	{
		___intensity_6 = value;
	}

	inline static int32_t get_offset_of_chromaticAberration_7() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___chromaticAberration_7)); }
	inline float get_chromaticAberration_7() const { return ___chromaticAberration_7; }
	inline float* get_address_of_chromaticAberration_7() { return &___chromaticAberration_7; }
	inline void set_chromaticAberration_7(float value)
	{
		___chromaticAberration_7 = value;
	}

	inline static int32_t get_offset_of_axialAberration_8() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___axialAberration_8)); }
	inline float get_axialAberration_8() const { return ___axialAberration_8; }
	inline float* get_address_of_axialAberration_8() { return &___axialAberration_8; }
	inline void set_axialAberration_8(float value)
	{
		___axialAberration_8 = value;
	}

	inline static int32_t get_offset_of_blur_9() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___blur_9)); }
	inline float get_blur_9() const { return ___blur_9; }
	inline float* get_address_of_blur_9() { return &___blur_9; }
	inline void set_blur_9(float value)
	{
		___blur_9 = value;
	}

	inline static int32_t get_offset_of_blurSpread_10() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___blurSpread_10)); }
	inline float get_blurSpread_10() const { return ___blurSpread_10; }
	inline float* get_address_of_blurSpread_10() { return &___blurSpread_10; }
	inline void set_blurSpread_10(float value)
	{
		___blurSpread_10 = value;
	}

	inline static int32_t get_offset_of_luminanceDependency_11() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___luminanceDependency_11)); }
	inline float get_luminanceDependency_11() const { return ___luminanceDependency_11; }
	inline float* get_address_of_luminanceDependency_11() { return &___luminanceDependency_11; }
	inline void set_luminanceDependency_11(float value)
	{
		___luminanceDependency_11 = value;
	}

	inline static int32_t get_offset_of_blurDistance_12() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___blurDistance_12)); }
	inline float get_blurDistance_12() const { return ___blurDistance_12; }
	inline float* get_address_of_blurDistance_12() { return &___blurDistance_12; }
	inline void set_blurDistance_12(float value)
	{
		___blurDistance_12 = value;
	}

	inline static int32_t get_offset_of_vignetteShader_13() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___vignetteShader_13)); }
	inline Shader_t4151988712 * get_vignetteShader_13() const { return ___vignetteShader_13; }
	inline Shader_t4151988712 ** get_address_of_vignetteShader_13() { return &___vignetteShader_13; }
	inline void set_vignetteShader_13(Shader_t4151988712 * value)
	{
		___vignetteShader_13 = value;
		Il2CppCodeGenWriteBarrier((&___vignetteShader_13), value);
	}

	inline static int32_t get_offset_of_separableBlurShader_14() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___separableBlurShader_14)); }
	inline Shader_t4151988712 * get_separableBlurShader_14() const { return ___separableBlurShader_14; }
	inline Shader_t4151988712 ** get_address_of_separableBlurShader_14() { return &___separableBlurShader_14; }
	inline void set_separableBlurShader_14(Shader_t4151988712 * value)
	{
		___separableBlurShader_14 = value;
		Il2CppCodeGenWriteBarrier((&___separableBlurShader_14), value);
	}

	inline static int32_t get_offset_of_chromAberrationShader_15() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___chromAberrationShader_15)); }
	inline Shader_t4151988712 * get_chromAberrationShader_15() const { return ___chromAberrationShader_15; }
	inline Shader_t4151988712 ** get_address_of_chromAberrationShader_15() { return &___chromAberrationShader_15; }
	inline void set_chromAberrationShader_15(Shader_t4151988712 * value)
	{
		___chromAberrationShader_15 = value;
		Il2CppCodeGenWriteBarrier((&___chromAberrationShader_15), value);
	}

	inline static int32_t get_offset_of_m_VignetteMaterial_16() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___m_VignetteMaterial_16)); }
	inline Material_t340375123 * get_m_VignetteMaterial_16() const { return ___m_VignetteMaterial_16; }
	inline Material_t340375123 ** get_address_of_m_VignetteMaterial_16() { return &___m_VignetteMaterial_16; }
	inline void set_m_VignetteMaterial_16(Material_t340375123 * value)
	{
		___m_VignetteMaterial_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_VignetteMaterial_16), value);
	}

	inline static int32_t get_offset_of_m_SeparableBlurMaterial_17() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___m_SeparableBlurMaterial_17)); }
	inline Material_t340375123 * get_m_SeparableBlurMaterial_17() const { return ___m_SeparableBlurMaterial_17; }
	inline Material_t340375123 ** get_address_of_m_SeparableBlurMaterial_17() { return &___m_SeparableBlurMaterial_17; }
	inline void set_m_SeparableBlurMaterial_17(Material_t340375123 * value)
	{
		___m_SeparableBlurMaterial_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_SeparableBlurMaterial_17), value);
	}

	inline static int32_t get_offset_of_m_ChromAberrationMaterial_18() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___m_ChromAberrationMaterial_18)); }
	inline Material_t340375123 * get_m_ChromAberrationMaterial_18() const { return ___m_ChromAberrationMaterial_18; }
	inline Material_t340375123 ** get_address_of_m_ChromAberrationMaterial_18() { return &___m_ChromAberrationMaterial_18; }
	inline void set_m_ChromAberrationMaterial_18(Material_t340375123 * value)
	{
		___m_ChromAberrationMaterial_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChromAberrationMaterial_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIGNETTEANDCHROMATICABERRATION_T3308099924_H
#ifndef TWIRL_T2760508880_H
#define TWIRL_T2760508880_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Twirl
struct  Twirl_t2760508880  : public ImageEffectBase_t2026006575
{
public:
	// UnityEngine.Vector2 UnityStandardAssets.ImageEffects.Twirl::radius
	Vector2_t2156229523  ___radius_4;
	// System.Single UnityStandardAssets.ImageEffects.Twirl::angle
	float ___angle_5;
	// UnityEngine.Vector2 UnityStandardAssets.ImageEffects.Twirl::center
	Vector2_t2156229523  ___center_6;

public:
	inline static int32_t get_offset_of_radius_4() { return static_cast<int32_t>(offsetof(Twirl_t2760508880, ___radius_4)); }
	inline Vector2_t2156229523  get_radius_4() const { return ___radius_4; }
	inline Vector2_t2156229523 * get_address_of_radius_4() { return &___radius_4; }
	inline void set_radius_4(Vector2_t2156229523  value)
	{
		___radius_4 = value;
	}

	inline static int32_t get_offset_of_angle_5() { return static_cast<int32_t>(offsetof(Twirl_t2760508880, ___angle_5)); }
	inline float get_angle_5() const { return ___angle_5; }
	inline float* get_address_of_angle_5() { return &___angle_5; }
	inline void set_angle_5(float value)
	{
		___angle_5 = value;
	}

	inline static int32_t get_offset_of_center_6() { return static_cast<int32_t>(offsetof(Twirl_t2760508880, ___center_6)); }
	inline Vector2_t2156229523  get_center_6() const { return ___center_6; }
	inline Vector2_t2156229523 * get_address_of_center_6() { return &___center_6; }
	inline void set_center_6(Vector2_t2156229523  value)
	{
		___center_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWIRL_T2760508880_H
// UnityEngine.Mesh[]
struct MeshU5BU5D_t3972987605  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Mesh_t3648964284 * m_Items[1];

public:
	inline Mesh_t3648964284 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Mesh_t3648964284 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Mesh_t3648964284 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Mesh_t3648964284 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Mesh_t3648964284 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Mesh_t3648964284 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t3722313464  m_Items[1];

public:
	inline Vector3_t3722313464  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t3722313464  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_t2156229523  m_Items[1];

public:
	inline Vector2_t2156229523  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t2156229523 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t2156229523  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t2156229523  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t2156229523 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t2156229523  value)
	{
		m_Items[index] = value;
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



// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern "C"  void Object_DestroyImmediate_m3193525861 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.Triangles::HasMeshes()
extern "C"  bool Triangles_HasMeshes_m2632248376 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
extern "C"  int32_t Mathf_CeilToInt_m432108984 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t Mathf_Clamp_m2756574208 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
extern "C"  int32_t Mathf_FloorToInt_m1870542928 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh UnityStandardAssets.ImageEffects.Triangles::GetMesh(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  Mesh_t3648964284 * Triangles_GetMesh_m3094080564 (RuntimeObject * __this /* static, unused */, int32_t ___triCount0, int32_t ___triOffset1, int32_t ___totalWidth2, int32_t ___totalHeight3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::.ctor()
extern "C"  void Mesh__ctor_m2533762929 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern "C"  void Object_set_hideFlags_m1648752846 (Object_t631007953 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern "C"  void Mesh_set_vertices_m2084450642 (Mesh_t3648964284 * __this, Vector3U5BU5D_t1718750761* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
extern "C"  void Mesh_set_triangles_m255556250 (Mesh_t3648964284 * __this, Int32U5BU5D_t385246372* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
extern "C"  void Mesh_set_uv_m1258646872 (Mesh_t3648964284 * __this, Vector2U5BU5D_t1457185986* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv2(UnityEngine.Vector2[])
extern "C"  void Mesh_set_uv2_m2840654016 (Mesh_t3648964284 * __this, Vector2U5BU5D_t1457185986* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ImageEffectBase::get_material()
extern "C"  Material_t340375123 * ImageEffectBase_get_material_m2147471925 (ImageEffectBase_t2026006575 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::RenderDistortion(UnityEngine.Material,UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Single,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  void ImageEffects_RenderDistortion_m374489299 (RuntimeObject * __this /* static, unused */, Material_t340375123 * ___material0, RenderTexture_t2108887433 * ___source1, RenderTexture_t2108887433 * ___destination2, float ___angle3, Vector2_t2156229523  ___center4, Vector2_t2156229523  ___radius5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ImageEffectBase::.ctor()
extern "C"  void ImageEffectBase__ctor_m3783134824 (ImageEffectBase_t2026006575 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean)
extern "C"  bool PostEffectsBase_CheckSupport_m3942922708 (PostEffectsBase_t2404315739 * __this, bool ___needDepth0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShaderAndCreateMaterial(UnityEngine.Shader,UnityEngine.Material)
extern "C"  Material_t340375123 * PostEffectsBase_CheckShaderAndCreateMaterial_m3315883224 (PostEffectsBase_t2404315739 * __this, Shader_t4151988712 * ___s0, Material_t340375123 * ___m2Create1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::ReportAutoDisable()
extern "C"  void PostEffectsBase_ReportAutoDisable_m1041276315 (PostEffectsBase_t2404315739 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
extern "C"  void Graphics_Blit_m1336850842 (RuntimeObject * __this /* static, unused */, Texture_t3661962703 * p0, RenderTexture_t2108887433 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTextureFormat UnityEngine.RenderTexture::get_format()
extern "C"  int32_t RenderTexture_get_format_m3846871418 (RenderTexture_t2108887433 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
extern "C"  RenderTexture_t2108887433 * RenderTexture_GetTemporary_m3378328322 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C"  void Graphics_Blit_m4126770912 (RuntimeObject * __this /* static, unused */, Texture_t3661962703 * p0, RenderTexture_t2108887433 * p1, Material_t340375123 * p2, int32_t p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Vector4__ctor_m2498754347 (Vector4_t3319028937 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
extern "C"  void Material_SetVector_m4214217286 (Material_t340375123 * __this, String_t* p0, Vector4_t3319028937  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
extern "C"  void Graphics_Blit_m890955694 (RuntimeObject * __this /* static, unused */, Texture_t3661962703 * p0, RenderTexture_t2108887433 * p1, Material_t340375123 * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
extern "C"  void RenderTexture_ReleaseTemporary_m2400081536 (RuntimeObject * __this /* static, unused */, RenderTexture_t2108887433 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
extern "C"  void Material_SetFloat_m3226510453 (Material_t340375123 * __this, String_t* p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
extern "C"  void Material_SetTexture_m1829349465 (Material_t340375123 * __this, String_t* p0, Texture_t3661962703 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
extern "C"  Vector4_t3319028937  Vector4_op_Implicit_m237151757 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C"  float Mathf_Max_m3146388979 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
extern "C"  void Texture_set_wrapMode_m587872754 (Texture_t3661962703 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::.ctor()
extern "C"  void PostEffectsBase__ctor_m3237562702 (PostEffectsBase_t2404315739 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Boolean UnityStandardAssets.ImageEffects.Triangles::HasMeshes()
extern "C"  bool Triangles_HasMeshes_m2632248376 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Triangles_HasMeshes_m2632248376_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (meshes == null)
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		MeshU5BU5D_t3972987605* L_0 = ((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->get_meshes_0();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0009:
	{
		// for (int i = 0; i < meshes.Length; i++)
		V_0 = 0;
		goto IL_0022;
	}

IL_000d:
	{
		// if (null == meshes[i])
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		MeshU5BU5D_t3972987605* L_1 = ((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->get_meshes_0();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Mesh_t3648964284 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001e:
	{
		// for (int i = 0; i < meshes.Length; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0022:
	{
		// for (int i = 0; i < meshes.Length; i++)
		int32_t L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		MeshU5BU5D_t3972987605* L_8 = ((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->get_meshes_0();
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Triangles::Cleanup()
extern "C"  void Triangles_Cleanup_m2695142149 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Triangles_Cleanup_m2695142149_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (meshes == null)
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		MeshU5BU5D_t3972987605* L_0 = ((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->get_meshes_0();
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// for (int i = 0; i < meshes.Length; i++)
		V_0 = 0;
		goto IL_0033;
	}

IL_000c:
	{
		// if (null != meshes[i])
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		MeshU5BU5D_t3972987605* L_1 = ((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->get_meshes_0();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Mesh_t3648964284 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		// Object.DestroyImmediate(meshes[i]);
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		MeshU5BU5D_t3972987605* L_6 = ((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->get_meshes_0();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Mesh_t3648964284 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m3193525861(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		// meshes[i] = null;
		MeshU5BU5D_t3972987605* L_10 = ((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->get_meshes_0();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, NULL);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (Mesh_t3648964284 *)NULL);
	}

IL_002f:
	{
		// for (int i = 0; i < meshes.Length; i++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0033:
	{
		// for (int i = 0; i < meshes.Length; i++)
		int32_t L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		MeshU5BU5D_t3972987605* L_14 = ((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->get_meshes_0();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))))
		{
			goto IL_000c;
		}
	}
	{
		// meshes = null;
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->set_meshes_0((MeshU5BU5D_t3972987605*)NULL);
		// }
		return;
	}
}
// UnityEngine.Mesh[] UnityStandardAssets.ImageEffects.Triangles::GetMeshes(System.Int32,System.Int32)
extern "C"  MeshU5BU5D_t3972987605* Triangles_GetMeshes_m4005833784 (RuntimeObject * __this /* static, unused */, int32_t ___totalWidth0, int32_t ___totalHeight1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Triangles_GetMeshes_m4005833784_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// if (HasMeshes() && (currentTris == (totalWidth * totalHeight)))
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		bool L_0 = Triangles_HasMeshes_m2632248376(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		int32_t L_1 = ((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->get_currentTris_1();
		int32_t L_2 = ___totalWidth0;
		int32_t L_3 = ___totalHeight1;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)L_3))))))
		{
			goto IL_0017;
		}
	}
	{
		// return meshes;
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		MeshU5BU5D_t3972987605* L_4 = ((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->get_meshes_0();
		return L_4;
	}

IL_0017:
	{
		// int maxTris = 65000 / 3;
		V_0 = ((int32_t)21666);
		// int totalTris = totalWidth * totalHeight;
		int32_t L_5 = ___totalWidth0;
		int32_t L_6 = ___totalHeight1;
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)L_6));
		// currentTris = totalTris;
		int32_t L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->set_currentTris_1(L_7);
		// int meshCount = Mathf.CeilToInt((1.0f * totalTris) / (1.0f * maxTris));
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_10 = Mathf_CeilToInt_m432108984(NULL /*static, unused*/, ((float)((float)((float)il2cpp_codegen_multiply((float)(1.0f), (float)(((float)((float)L_8)))))/(float)((float)il2cpp_codegen_multiply((float)(1.0f), (float)(((float)((float)L_9))))))), /*hidden argument*/NULL);
		// meshes = new Mesh[meshCount];
		((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->set_meshes_0(((MeshU5BU5D_t3972987605*)SZArrayNew(MeshU5BU5D_t3972987605_il2cpp_TypeInfo_var, (uint32_t)L_10)));
		// int i = 0;
		V_2 = 0;
		// int index = 0;
		V_3 = 0;
		// for (i = 0; i < totalTris; i += maxTris)
		V_2 = 0;
		goto IL_007a;
	}

IL_004f:
	{
		// int tris = Mathf.FloorToInt(Mathf.Clamp((totalTris - i), 0, maxTris));
		int32_t L_11 = V_1;
		int32_t L_12 = V_2;
		int32_t L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_14 = Mathf_Clamp_m2756574208(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)L_12)), 0, L_13, /*hidden argument*/NULL);
		int32_t L_15 = Mathf_FloorToInt_m1870542928(NULL /*static, unused*/, (((float)((float)L_14))), /*hidden argument*/NULL);
		V_4 = L_15;
		// meshes[index] = GetMesh(tris, i, totalWidth, totalHeight);
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		MeshU5BU5D_t3972987605* L_16 = ((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->get_meshes_0();
		int32_t L_17 = V_3;
		int32_t L_18 = V_4;
		int32_t L_19 = V_2;
		int32_t L_20 = ___totalWidth0;
		int32_t L_21 = ___totalHeight1;
		Mesh_t3648964284 * L_22 = Triangles_GetMesh_m3094080564(NULL /*static, unused*/, L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_22);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (Mesh_t3648964284 *)L_22);
		// index++;
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		// for (i = 0; i < totalTris; i += maxTris)
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)L_25));
	}

IL_007a:
	{
		// for (i = 0; i < totalTris; i += maxTris)
		int32_t L_26 = V_2;
		int32_t L_27 = V_1;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_004f;
		}
	}
	{
		// return meshes;
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		MeshU5BU5D_t3972987605* L_28 = ((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->get_meshes_0();
		return L_28;
	}
}
// UnityEngine.Mesh UnityStandardAssets.ImageEffects.Triangles::GetMesh(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  Mesh_t3648964284 * Triangles_GetMesh_m3094080564 (RuntimeObject * __this /* static, unused */, int32_t ___triCount0, int32_t ___triOffset1, int32_t ___totalWidth2, int32_t ___totalHeight3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Triangles_GetMesh_m3094080564_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t3648964284 * V_0 = NULL;
	Vector3U5BU5D_t1718750761* V_1 = NULL;
	Vector2U5BU5D_t1457185986* V_2 = NULL;
	Vector2U5BU5D_t1457185986* V_3 = NULL;
	Int32U5BU5D_t385246372* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	Vector3_t3722313464  V_9;
	memset(&V_9, 0, sizeof(V_9));
	{
		// var mesh = new Mesh();
		Mesh_t3648964284 * L_0 = (Mesh_t3648964284 *)il2cpp_codegen_object_new(Mesh_t3648964284_il2cpp_TypeInfo_var);
		Mesh__ctor_m2533762929(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// mesh.hideFlags = HideFlags.DontSave;
		Mesh_t3648964284 * L_1 = V_0;
		NullCheck(L_1);
		Object_set_hideFlags_m1648752846(L_1, ((int32_t)52), /*hidden argument*/NULL);
		// var verts = new Vector3[triCount * 3];
		int32_t L_2 = ___triCount0;
		V_1 = ((Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)3))));
		// var uvs = new Vector2[triCount * 3];
		int32_t L_3 = ___triCount0;
		V_2 = ((Vector2U5BU5D_t1457185986*)SZArrayNew(Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)3))));
		// var uvs2 = new Vector2[triCount * 3];
		int32_t L_4 = ___triCount0;
		V_3 = ((Vector2U5BU5D_t1457185986*)SZArrayNew(Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)3))));
		// var tris = new int[triCount * 3];
		int32_t L_5 = ___triCount0;
		V_4 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)3))));
		// for (int i = 0; i < triCount; i++)
		V_5 = 0;
		goto IL_014d;
	}

IL_003b:
	{
		// int i3 = i * 3;
		int32_t L_6 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)3));
		// int vertexWithOffset = triOffset + i;
		int32_t L_7 = ___triOffset1;
		int32_t L_8 = V_5;
		// float x = Mathf.Floor(vertexWithOffset % totalWidth) / totalWidth;
		int32_t L_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8));
		int32_t L_10 = ___totalWidth2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_11 = floorf((((float)((float)((int32_t)((int32_t)L_9%(int32_t)L_10))))));
		int32_t L_12 = ___totalWidth2;
		V_7 = ((float)((float)L_11/(float)(((float)((float)L_12)))));
		// float y = Mathf.Floor(vertexWithOffset / totalWidth) / totalHeight;
		int32_t L_13 = ___totalWidth2;
		float L_14 = floorf((((float)((float)((int32_t)((int32_t)L_9/(int32_t)L_13))))));
		int32_t L_15 = ___totalHeight3;
		V_8 = ((float)((float)L_14/(float)(((float)((float)L_15)))));
		// Vector3 position = new Vector3(x * 2 - 1, y * 2 - 1, 1.0f);
		float L_16 = V_7;
		float L_17 = V_8;
		Vector3__ctor_m3353183577((&V_9), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_16, (float)(2.0f))), (float)(1.0f))), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_17, (float)(2.0f))), (float)(1.0f))), (1.0f), /*hidden argument*/NULL);
		// verts[i3 + 0] = position;
		Vector3U5BU5D_t1718750761* L_18 = V_1;
		int32_t L_19 = V_6;
		Vector3_t3722313464  L_20 = V_9;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (Vector3_t3722313464 )L_20);
		// verts[i3 + 1] = position;
		Vector3U5BU5D_t1718750761* L_21 = V_1;
		int32_t L_22 = V_6;
		Vector3_t3722313464  L_23 = V_9;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1))), (Vector3_t3722313464 )L_23);
		// verts[i3 + 2] = position;
		Vector3U5BU5D_t1718750761* L_24 = V_1;
		int32_t L_25 = V_6;
		Vector3_t3722313464  L_26 = V_9;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)2))), (Vector3_t3722313464 )L_26);
		// uvs[i3 + 0] = new Vector2(0.0f, 0.0f);
		Vector2U5BU5D_t1457185986* L_27 = V_2;
		int32_t L_28 = V_6;
		Vector2_t2156229523  L_29;
		memset(&L_29, 0, sizeof(L_29));
		Vector2__ctor_m3970636864((&L_29), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (Vector2_t2156229523 )L_29);
		// uvs[i3 + 1] = new Vector2(1.0f, 0.0f);
		Vector2U5BU5D_t1457185986* L_30 = V_2;
		int32_t L_31 = V_6;
		Vector2_t2156229523  L_32;
		memset(&L_32, 0, sizeof(L_32));
		Vector2__ctor_m3970636864((&L_32), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1))), (Vector2_t2156229523 )L_32);
		// uvs[i3 + 2] = new Vector2(0.0f, 1.0f);
		Vector2U5BU5D_t1457185986* L_33 = V_2;
		int32_t L_34 = V_6;
		Vector2_t2156229523  L_35;
		memset(&L_35, 0, sizeof(L_35));
		Vector2__ctor_m3970636864((&L_35), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)2))), (Vector2_t2156229523 )L_35);
		// uvs2[i3 + 0] = new Vector2(x, y);
		Vector2U5BU5D_t1457185986* L_36 = V_3;
		int32_t L_37 = V_6;
		float L_38 = V_7;
		float L_39 = V_8;
		Vector2_t2156229523  L_40;
		memset(&L_40, 0, sizeof(L_40));
		Vector2__ctor_m3970636864((&L_40), L_38, L_39, /*hidden argument*/NULL);
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (Vector2_t2156229523 )L_40);
		// uvs2[i3 + 1] = new Vector2(x, y);
		Vector2U5BU5D_t1457185986* L_41 = V_3;
		int32_t L_42 = V_6;
		float L_43 = V_7;
		float L_44 = V_8;
		Vector2_t2156229523  L_45;
		memset(&L_45, 0, sizeof(L_45));
		Vector2__ctor_m3970636864((&L_45), L_43, L_44, /*hidden argument*/NULL);
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1))), (Vector2_t2156229523 )L_45);
		// uvs2[i3 + 2] = new Vector2(x, y);
		Vector2U5BU5D_t1457185986* L_46 = V_3;
		int32_t L_47 = V_6;
		float L_48 = V_7;
		float L_49 = V_8;
		Vector2_t2156229523  L_50;
		memset(&L_50, 0, sizeof(L_50));
		Vector2__ctor_m3970636864((&L_50), L_48, L_49, /*hidden argument*/NULL);
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)2))), (Vector2_t2156229523 )L_50);
		// tris[i3 + 0] = i3 + 0;
		Int32U5BU5D_t385246372* L_51 = V_4;
		int32_t L_52 = V_6;
		int32_t L_53 = V_6;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (int32_t)L_53);
		// tris[i3 + 1] = i3 + 1;
		Int32U5BU5D_t385246372* L_54 = V_4;
		int32_t L_55 = V_6;
		int32_t L_56 = V_6;
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1)));
		// tris[i3 + 2] = i3 + 2;
		Int32U5BU5D_t385246372* L_57 = V_4;
		int32_t L_58 = V_6;
		int32_t L_59 = V_6;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)2))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)2)));
		// for (int i = 0; i < triCount; i++)
		int32_t L_60 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
	}

IL_014d:
	{
		// for (int i = 0; i < triCount; i++)
		int32_t L_61 = V_5;
		int32_t L_62 = ___triCount0;
		if ((((int32_t)L_61) < ((int32_t)L_62)))
		{
			goto IL_003b;
		}
	}
	{
		// mesh.vertices = verts;
		Mesh_t3648964284 * L_63 = V_0;
		Vector3U5BU5D_t1718750761* L_64 = V_1;
		NullCheck(L_63);
		Mesh_set_vertices_m2084450642(L_63, L_64, /*hidden argument*/NULL);
		// mesh.triangles = tris;
		Mesh_t3648964284 * L_65 = V_0;
		Int32U5BU5D_t385246372* L_66 = V_4;
		NullCheck(L_65);
		Mesh_set_triangles_m255556250(L_65, L_66, /*hidden argument*/NULL);
		// mesh.uv = uvs;
		Mesh_t3648964284 * L_67 = V_0;
		Vector2U5BU5D_t1457185986* L_68 = V_2;
		NullCheck(L_67);
		Mesh_set_uv_m1258646872(L_67, L_68, /*hidden argument*/NULL);
		// mesh.uv2 = uvs2;
		Mesh_t3648964284 * L_69 = V_0;
		Vector2U5BU5D_t1457185986* L_70 = V_3;
		NullCheck(L_69);
		Mesh_set_uv2_m2840654016(L_69, L_70, /*hidden argument*/NULL);
		// return mesh;
		Mesh_t3648964284 * L_71 = V_0;
		return L_71;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Triangles::.ctor()
extern "C"  void Triangles__ctor_m3779717511 (Triangles_t2090031681 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Triangles::.cctor()
extern "C"  void Triangles__cctor_m4156745312 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.ImageEffects.Twirl::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Twirl_OnRenderImage_m86569691 (Twirl_t2760508880 * __this, RenderTexture_t2108887433 * ___source0, RenderTexture_t2108887433 * ___destination1, const RuntimeMethod* method)
{
	{
		// ImageEffects.RenderDistortion (material, source, destination, angle, center, radius);
		Material_t340375123 * L_0 = ImageEffectBase_get_material_m2147471925(__this, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_1 = ___source0;
		RenderTexture_t2108887433 * L_2 = ___destination1;
		float L_3 = __this->get_angle_5();
		Vector2_t2156229523  L_4 = __this->get_center_6();
		Vector2_t2156229523  L_5 = __this->get_radius_4();
		ImageEffects_RenderDistortion_m374489299(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Twirl::.ctor()
extern "C"  void Twirl__ctor_m3083446835 (Twirl_t2760508880 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 radius = new Vector2(0.3F,0.3F);
		Vector2_t2156229523  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector2__ctor_m3970636864((&L_0), (0.3f), (0.3f), /*hidden argument*/NULL);
		__this->set_radius_4(L_0);
		// public float angle = 50;
		__this->set_angle_5((50.0f));
		// public Vector2 center = new Vector2 (0.5F, 0.5F);
		Vector2_t2156229523  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector2__ctor_m3970636864((&L_1), (0.5f), (0.5f), /*hidden argument*/NULL);
		__this->set_center_6(L_1);
		ImageEffectBase__ctor_m3783134824(__this, /*hidden argument*/NULL);
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
// System.Boolean UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::CheckResources()
extern "C"  bool VignetteAndChromaticAberration_CheckResources_m526349759 (VignetteAndChromaticAberration_t3308099924 * __this, const RuntimeMethod* method)
{
	{
		// CheckSupport (false);
		PostEffectsBase_CheckSupport_m3942922708(__this, (bool)0, /*hidden argument*/NULL);
		// m_VignetteMaterial = CheckShaderAndCreateMaterial (vignetteShader, m_VignetteMaterial);
		Shader_t4151988712 * L_0 = __this->get_vignetteShader_13();
		Material_t340375123 * L_1 = __this->get_m_VignetteMaterial_16();
		Material_t340375123 * L_2 = PostEffectsBase_CheckShaderAndCreateMaterial_m3315883224(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->set_m_VignetteMaterial_16(L_2);
		// m_SeparableBlurMaterial = CheckShaderAndCreateMaterial (separableBlurShader, m_SeparableBlurMaterial);
		Shader_t4151988712 * L_3 = __this->get_separableBlurShader_14();
		Material_t340375123 * L_4 = __this->get_m_SeparableBlurMaterial_17();
		Material_t340375123 * L_5 = PostEffectsBase_CheckShaderAndCreateMaterial_m3315883224(__this, L_3, L_4, /*hidden argument*/NULL);
		__this->set_m_SeparableBlurMaterial_17(L_5);
		// m_ChromAberrationMaterial = CheckShaderAndCreateMaterial (chromAberrationShader, m_ChromAberrationMaterial);
		Shader_t4151988712 * L_6 = __this->get_chromAberrationShader_15();
		Material_t340375123 * L_7 = __this->get_m_ChromAberrationMaterial_18();
		Material_t340375123 * L_8 = PostEffectsBase_CheckShaderAndCreateMaterial_m3315883224(__this, L_6, L_7, /*hidden argument*/NULL);
		__this->set_m_ChromAberrationMaterial_18(L_8);
		// if (!isSupported)
		bool L_9 = ((PostEffectsBase_t2404315739 *)__this)->get_isSupported_4();
		if (L_9)
		{
			goto IL_005e;
		}
	}
	{
		// ReportAutoDisable ();
		PostEffectsBase_ReportAutoDisable_m1041276315(__this, /*hidden argument*/NULL);
	}

IL_005e:
	{
		// return isSupported;
		bool L_10 = ((PostEffectsBase_t2404315739 *)__this)->get_isSupported_4();
		return L_10;
	}
}
// System.Void UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void VignetteAndChromaticAberration_OnRenderImage_m979090338 (VignetteAndChromaticAberration_t3308099924 * __this, RenderTexture_t2108887433 * ___source0, RenderTexture_t2108887433 * ___destination1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VignetteAndChromaticAberration_OnRenderImage_m979090338_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	float V_3 = 0.0f;
	RenderTexture_t2108887433 * V_4 = NULL;
	RenderTexture_t2108887433 * V_5 = NULL;
	int32_t V_6 = 0;
	RenderTexture_t2108887433 * V_7 = NULL;
	int32_t G_B5_0 = 0;
	RenderTexture_t2108887433 * G_B17_0 = NULL;
	Material_t340375123 * G_B19_0 = NULL;
	RenderTexture_t2108887433 * G_B19_1 = NULL;
	RenderTexture_t2108887433 * G_B19_2 = NULL;
	Material_t340375123 * G_B18_0 = NULL;
	RenderTexture_t2108887433 * G_B18_1 = NULL;
	RenderTexture_t2108887433 * G_B18_2 = NULL;
	int32_t G_B20_0 = 0;
	Material_t340375123 * G_B20_1 = NULL;
	RenderTexture_t2108887433 * G_B20_2 = NULL;
	RenderTexture_t2108887433 * G_B20_3 = NULL;
	{
		// if ( CheckResources () == false)
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// Graphics.Blit (source, destination);
		RenderTexture_t2108887433 * L_1 = ___source0;
		RenderTexture_t2108887433 * L_2 = ___destination1;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m1336850842(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0010:
	{
		// int rtW = source.width;
		RenderTexture_t2108887433 * L_3 = ___source0;
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_3);
		V_0 = L_4;
		// int rtH = source.height;
		RenderTexture_t2108887433 * L_5 = ___source0;
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_5);
		V_1 = L_6;
		// bool  doPrepass = (Mathf.Abs(blur)>0.0f || Mathf.Abs(intensity)>0.0f);
		float L_7 = __this->get_blur_9();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_8 = fabsf(L_7);
		if ((((float)L_8) > ((float)(0.0f))))
		{
			goto IL_0044;
		}
	}
	{
		float L_9 = __this->get_intensity_6();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_10 = fabsf(L_9);
		G_B5_0 = ((((float)L_10) > ((float)(0.0f)))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B5_0 = 1;
	}

IL_0045:
	{
		V_2 = (bool)G_B5_0;
		// float widthOverHeight = (1.0f * rtW) / (1.0f * rtH);
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		V_3 = ((float)((float)((float)il2cpp_codegen_multiply((float)(1.0f), (float)(((float)((float)L_11)))))/(float)((float)il2cpp_codegen_multiply((float)(1.0f), (float)(((float)((float)L_12)))))));
		// RenderTexture color = null;
		V_4 = (RenderTexture_t2108887433 *)NULL;
		// RenderTexture color2A = null;
		V_5 = (RenderTexture_t2108887433 *)NULL;
		// if (doPrepass)
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_01c5;
		}
	}
	{
		// color = RenderTexture.GetTemporary (rtW, rtH, 0, source.format);
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		RenderTexture_t2108887433 * L_16 = ___source0;
		NullCheck(L_16);
		int32_t L_17 = RenderTexture_get_format_m3846871418(L_16, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_18 = RenderTexture_GetTemporary_m3378328322(NULL /*static, unused*/, L_14, L_15, 0, L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		// if (Mathf.Abs (blur)>0.0f)
		float L_19 = __this->get_blur_9();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_20 = fabsf(L_19);
		if ((!(((float)L_20) > ((float)(0.0f)))))
		{
			goto IL_0178;
		}
	}
	{
		// color2A = RenderTexture.GetTemporary (rtW / 2, rtH / 2, 0, source.format);
		int32_t L_21 = V_0;
		int32_t L_22 = V_1;
		RenderTexture_t2108887433 * L_23 = ___source0;
		NullCheck(L_23);
		int32_t L_24 = RenderTexture_get_format_m3846871418(L_23, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_25 = RenderTexture_GetTemporary_m3378328322(NULL /*static, unused*/, ((int32_t)((int32_t)L_21/(int32_t)2)), ((int32_t)((int32_t)L_22/(int32_t)2)), 0, L_24, /*hidden argument*/NULL);
		V_5 = L_25;
		// Graphics.Blit (source, color2A, m_ChromAberrationMaterial, 0);
		RenderTexture_t2108887433 * L_26 = ___source0;
		RenderTexture_t2108887433 * L_27 = V_5;
		Material_t340375123 * L_28 = __this->get_m_ChromAberrationMaterial_18();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m4126770912(NULL /*static, unused*/, L_26, L_27, L_28, 0, /*hidden argument*/NULL);
		// for(int i = 0; i < 2; i++)
		V_6 = 0;
		goto IL_0170;
	}

IL_00b4:
	{
		// m_SeparableBlurMaterial.SetVector ("offsets",new Vector4 (0.0f, blurSpread * oneOverBaseSize, 0.0f, 0.0f));
		Material_t340375123 * L_29 = __this->get_m_SeparableBlurMaterial_17();
		float L_30 = __this->get_blurSpread_10();
		Vector4_t3319028937  L_31;
		memset(&L_31, 0, sizeof(L_31));
		Vector4__ctor_m2498754347((&L_31), (0.0f), ((float)il2cpp_codegen_multiply((float)L_30, (float)(0.001953125f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_29);
		Material_SetVector_m4214217286(L_29, _stringLiteral1624685711, L_31, /*hidden argument*/NULL);
		// RenderTexture color2B = RenderTexture.GetTemporary (rtW / 2, rtH / 2, 0, source.format);
		int32_t L_32 = V_0;
		int32_t L_33 = V_1;
		RenderTexture_t2108887433 * L_34 = ___source0;
		NullCheck(L_34);
		int32_t L_35 = RenderTexture_get_format_m3846871418(L_34, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_36 = RenderTexture_GetTemporary_m3378328322(NULL /*static, unused*/, ((int32_t)((int32_t)L_32/(int32_t)2)), ((int32_t)((int32_t)L_33/(int32_t)2)), 0, L_35, /*hidden argument*/NULL);
		V_7 = L_36;
		// Graphics.Blit (color2A, color2B, m_SeparableBlurMaterial);
		RenderTexture_t2108887433 * L_37 = V_5;
		RenderTexture_t2108887433 * L_38 = V_7;
		Material_t340375123 * L_39 = __this->get_m_SeparableBlurMaterial_17();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m890955694(NULL /*static, unused*/, L_37, L_38, L_39, /*hidden argument*/NULL);
		// RenderTexture.ReleaseTemporary (color2A);
		RenderTexture_t2108887433 * L_40 = V_5;
		RenderTexture_ReleaseTemporary_m2400081536(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		// m_SeparableBlurMaterial.SetVector ("offsets",new Vector4 (blurSpread * oneOverBaseSize / widthOverHeight, 0.0f, 0.0f, 0.0f));
		Material_t340375123 * L_41 = __this->get_m_SeparableBlurMaterial_17();
		float L_42 = __this->get_blurSpread_10();
		float L_43 = V_3;
		Vector4_t3319028937  L_44;
		memset(&L_44, 0, sizeof(L_44));
		Vector4__ctor_m2498754347((&L_44), ((float)((float)((float)il2cpp_codegen_multiply((float)L_42, (float)(0.001953125f)))/(float)L_43)), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_41);
		Material_SetVector_m4214217286(L_41, _stringLiteral1624685711, L_44, /*hidden argument*/NULL);
		// color2A = RenderTexture.GetTemporary (rtW / 2, rtH / 2, 0, source.format);
		int32_t L_45 = V_0;
		int32_t L_46 = V_1;
		RenderTexture_t2108887433 * L_47 = ___source0;
		NullCheck(L_47);
		int32_t L_48 = RenderTexture_get_format_m3846871418(L_47, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_49 = RenderTexture_GetTemporary_m3378328322(NULL /*static, unused*/, ((int32_t)((int32_t)L_45/(int32_t)2)), ((int32_t)((int32_t)L_46/(int32_t)2)), 0, L_48, /*hidden argument*/NULL);
		V_5 = L_49;
		// Graphics.Blit (color2B, color2A, m_SeparableBlurMaterial);
		RenderTexture_t2108887433 * L_50 = V_7;
		RenderTexture_t2108887433 * L_51 = V_5;
		Material_t340375123 * L_52 = __this->get_m_SeparableBlurMaterial_17();
		Graphics_Blit_m890955694(NULL /*static, unused*/, L_50, L_51, L_52, /*hidden argument*/NULL);
		// RenderTexture.ReleaseTemporary (color2B);
		RenderTexture_t2108887433 * L_53 = V_7;
		RenderTexture_ReleaseTemporary_m2400081536(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		// for(int i = 0; i < 2; i++)
		int32_t L_54 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
	}

IL_0170:
	{
		// for(int i = 0; i < 2; i++)
		int32_t L_55 = V_6;
		if ((((int32_t)L_55) < ((int32_t)2)))
		{
			goto IL_00b4;
		}
	}

IL_0178:
	{
		// m_VignetteMaterial.SetFloat ("_Intensity", intensity);        // intensity for vignette
		Material_t340375123 * L_56 = __this->get_m_VignetteMaterial_16();
		float L_57 = __this->get_intensity_6();
		NullCheck(L_56);
		Material_SetFloat_m3226510453(L_56, _stringLiteral3952415593, L_57, /*hidden argument*/NULL);
		// m_VignetteMaterial.SetFloat ("_Blur", blur);                    // blur intensity
		Material_t340375123 * L_58 = __this->get_m_VignetteMaterial_16();
		float L_59 = __this->get_blur_9();
		NullCheck(L_58);
		Material_SetFloat_m3226510453(L_58, _stringLiteral3560662707, L_59, /*hidden argument*/NULL);
		// m_VignetteMaterial.SetTexture ("_VignetteTex", color2A);    // blurred texture
		Material_t340375123 * L_60 = __this->get_m_VignetteMaterial_16();
		RenderTexture_t2108887433 * L_61 = V_5;
		NullCheck(L_60);
		Material_SetTexture_m1829349465(L_60, _stringLiteral3020016099, L_61, /*hidden argument*/NULL);
		// Graphics.Blit (source, color, m_VignetteMaterial, 0);            // prepass blit: darken & blur corners
		RenderTexture_t2108887433 * L_62 = ___source0;
		RenderTexture_t2108887433 * L_63 = V_4;
		Material_t340375123 * L_64 = __this->get_m_VignetteMaterial_16();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m4126770912(NULL /*static, unused*/, L_62, L_63, L_64, 0, /*hidden argument*/NULL);
	}

IL_01c5:
	{
		// m_ChromAberrationMaterial.SetFloat ("_ChromaticAberration", chromaticAberration);
		Material_t340375123 * L_65 = __this->get_m_ChromAberrationMaterial_18();
		float L_66 = __this->get_chromaticAberration_7();
		NullCheck(L_65);
		Material_SetFloat_m3226510453(L_65, _stringLiteral1596491694, L_66, /*hidden argument*/NULL);
		// m_ChromAberrationMaterial.SetFloat ("_AxialAberration", axialAberration);
		Material_t340375123 * L_67 = __this->get_m_ChromAberrationMaterial_18();
		float L_68 = __this->get_axialAberration_8();
		NullCheck(L_67);
		Material_SetFloat_m3226510453(L_67, _stringLiteral1767284560, L_68, /*hidden argument*/NULL);
		// m_ChromAberrationMaterial.SetVector ("_BlurDistance", new Vector2 (-blurDistance, blurDistance));
		Material_t340375123 * L_69 = __this->get_m_ChromAberrationMaterial_18();
		float L_70 = __this->get_blurDistance_12();
		float L_71 = __this->get_blurDistance_12();
		Vector2_t2156229523  L_72;
		memset(&L_72, 0, sizeof(L_72));
		Vector2__ctor_m3970636864((&L_72), ((-L_70)), L_71, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_73 = Vector4_op_Implicit_m237151757(NULL /*static, unused*/, L_72, /*hidden argument*/NULL);
		NullCheck(L_69);
		Material_SetVector_m4214217286(L_69, _stringLiteral1772571274, L_73, /*hidden argument*/NULL);
		// m_ChromAberrationMaterial.SetFloat ("_Luminance", 1.0f/Mathf.Max(Mathf.Epsilon, luminanceDependency));
		Material_t340375123 * L_74 = __this->get_m_ChromAberrationMaterial_18();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_75 = ((Mathf_t3464937446_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_t3464937446_il2cpp_TypeInfo_var))->get_Epsilon_0();
		float L_76 = __this->get_luminanceDependency_11();
		float L_77 = Mathf_Max_m3146388979(NULL /*static, unused*/, L_75, L_76, /*hidden argument*/NULL);
		NullCheck(L_74);
		Material_SetFloat_m3226510453(L_74, _stringLiteral2859884931, ((float)((float)(1.0f)/(float)L_77)), /*hidden argument*/NULL);
		// if (doPrepass) color.wrapMode = TextureWrapMode.Clamp;
		bool L_78 = V_2;
		if (!L_78)
		{
			goto IL_024b;
		}
	}
	{
		// if (doPrepass) color.wrapMode = TextureWrapMode.Clamp;
		RenderTexture_t2108887433 * L_79 = V_4;
		NullCheck(L_79);
		Texture_set_wrapMode_m587872754(L_79, 1, /*hidden argument*/NULL);
		goto IL_0252;
	}

IL_024b:
	{
		// else source.wrapMode = TextureWrapMode.Clamp;
		RenderTexture_t2108887433 * L_80 = ___source0;
		NullCheck(L_80);
		Texture_set_wrapMode_m587872754(L_80, 1, /*hidden argument*/NULL);
	}

IL_0252:
	{
		// Graphics.Blit (doPrepass ? color : source, destination, m_ChromAberrationMaterial, mode == AberrationMode.Advanced ? 2 : 1);
		bool L_81 = V_2;
		if (L_81)
		{
			goto IL_0258;
		}
	}
	{
		RenderTexture_t2108887433 * L_82 = ___source0;
		G_B17_0 = L_82;
		goto IL_025a;
	}

IL_0258:
	{
		RenderTexture_t2108887433 * L_83 = V_4;
		G_B17_0 = L_83;
	}

IL_025a:
	{
		RenderTexture_t2108887433 * L_84 = ___destination1;
		Material_t340375123 * L_85 = __this->get_m_ChromAberrationMaterial_18();
		int32_t L_86 = __this->get_mode_5();
		G_B18_0 = L_85;
		G_B18_1 = L_84;
		G_B18_2 = G_B17_0;
		if ((((int32_t)L_86) == ((int32_t)1)))
		{
			G_B19_0 = L_85;
			G_B19_1 = L_84;
			G_B19_2 = G_B17_0;
			goto IL_026d;
		}
	}
	{
		G_B20_0 = 1;
		G_B20_1 = G_B18_0;
		G_B20_2 = G_B18_1;
		G_B20_3 = G_B18_2;
		goto IL_026e;
	}

IL_026d:
	{
		G_B20_0 = 2;
		G_B20_1 = G_B19_0;
		G_B20_2 = G_B19_1;
		G_B20_3 = G_B19_2;
	}

IL_026e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m4126770912(NULL /*static, unused*/, G_B20_3, G_B20_2, G_B20_1, G_B20_0, /*hidden argument*/NULL);
		// RenderTexture.ReleaseTemporary (color);
		RenderTexture_t2108887433 * L_87 = V_4;
		RenderTexture_ReleaseTemporary_m2400081536(NULL /*static, unused*/, L_87, /*hidden argument*/NULL);
		// RenderTexture.ReleaseTemporary (color2A);
		RenderTexture_t2108887433 * L_88 = V_5;
		RenderTexture_ReleaseTemporary_m2400081536(NULL /*static, unused*/, L_88, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::.ctor()
extern "C"  void VignetteAndChromaticAberration__ctor_m2410499014 (VignetteAndChromaticAberration_t3308099924 * __this, const RuntimeMethod* method)
{
	{
		// public float intensity = 0.375f;                    // intensity == 0 disables pre pass (optimization)
		__this->set_intensity_6((0.375f));
		// public float chromaticAberration = 0.2f;
		__this->set_chromaticAberration_7((0.2f));
		// public float axialAberration = 0.5f;
		__this->set_axialAberration_8((0.5f));
		// public float blurSpread = 0.75f;
		__this->set_blurSpread_10((0.75f));
		// public float luminanceDependency = 0.25f;
		__this->set_luminanceDependency_11((0.25f));
		// public float blurDistance = 2.5f;
		__this->set_blurDistance_12((2.5f));
		PostEffectsBase__ctor_m3237562702(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.ImageEffects.Vortex::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Vortex_OnRenderImage_m2144754173 (Vortex_t3420399868 * __this, RenderTexture_t2108887433 * ___source0, RenderTexture_t2108887433 * ___destination1, const RuntimeMethod* method)
{
	{
		// ImageEffects.RenderDistortion (material, source, destination, angle, center, radius);
		Material_t340375123 * L_0 = ImageEffectBase_get_material_m2147471925(__this, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_1 = ___source0;
		RenderTexture_t2108887433 * L_2 = ___destination1;
		float L_3 = __this->get_angle_5();
		Vector2_t2156229523  L_4 = __this->get_center_6();
		Vector2_t2156229523  L_5 = __this->get_radius_4();
		ImageEffects_RenderDistortion_m374489299(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Vortex::.ctor()
extern "C"  void Vortex__ctor_m3527696655 (Vortex_t3420399868 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 radius = new Vector2(0.4F,0.4F);
		Vector2_t2156229523  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector2__ctor_m3970636864((&L_0), (0.4f), (0.4f), /*hidden argument*/NULL);
		__this->set_radius_4(L_0);
		// public float angle = 50;
		__this->set_angle_5((50.0f));
		// public Vector2 center = new Vector2(0.5F, 0.5F);
		Vector2_t2156229523  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector2__ctor_m3970636864((&L_1), (0.5f), (0.5f), /*hidden argument*/NULL);
		__this->set_center_6(L_1);
		ImageEffectBase__ctor_m3783134824(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
