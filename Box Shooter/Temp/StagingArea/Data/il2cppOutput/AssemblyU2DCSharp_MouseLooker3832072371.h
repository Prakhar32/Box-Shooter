﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MouseLooker
struct  MouseLooker_t3832072371  : public MonoBehaviour_t1158329972
{
public:
	// System.Single MouseLooker::XSensitivity
	float ___XSensitivity_2;
	// System.Single MouseLooker::YSensitivity
	float ___YSensitivity_3;
	// System.Boolean MouseLooker::clampVerticalRotation
	bool ___clampVerticalRotation_4;
	// System.Single MouseLooker::MinimumX
	float ___MinimumX_5;
	// System.Single MouseLooker::MaximumX
	float ___MaximumX_6;
	// System.Boolean MouseLooker::smooth
	bool ___smooth_7;
	// System.Single MouseLooker::smoothTime
	float ___smoothTime_8;
	// UnityEngine.Quaternion MouseLooker::m_CharacterTargetRot
	Quaternion_t4030073918  ___m_CharacterTargetRot_9;
	// UnityEngine.Quaternion MouseLooker::m_CameraTargetRot
	Quaternion_t4030073918  ___m_CameraTargetRot_10;
	// UnityEngine.Transform MouseLooker::character
	Transform_t3275118058 * ___character_11;
	// UnityEngine.Transform MouseLooker::cameraTransform
	Transform_t3275118058 * ___cameraTransform_12;

public:
	inline static int32_t get_offset_of_XSensitivity_2() { return static_cast<int32_t>(offsetof(MouseLooker_t3832072371, ___XSensitivity_2)); }
	inline float get_XSensitivity_2() const { return ___XSensitivity_2; }
	inline float* get_address_of_XSensitivity_2() { return &___XSensitivity_2; }
	inline void set_XSensitivity_2(float value)
	{
		___XSensitivity_2 = value;
	}

	inline static int32_t get_offset_of_YSensitivity_3() { return static_cast<int32_t>(offsetof(MouseLooker_t3832072371, ___YSensitivity_3)); }
	inline float get_YSensitivity_3() const { return ___YSensitivity_3; }
	inline float* get_address_of_YSensitivity_3() { return &___YSensitivity_3; }
	inline void set_YSensitivity_3(float value)
	{
		___YSensitivity_3 = value;
	}

	inline static int32_t get_offset_of_clampVerticalRotation_4() { return static_cast<int32_t>(offsetof(MouseLooker_t3832072371, ___clampVerticalRotation_4)); }
	inline bool get_clampVerticalRotation_4() const { return ___clampVerticalRotation_4; }
	inline bool* get_address_of_clampVerticalRotation_4() { return &___clampVerticalRotation_4; }
	inline void set_clampVerticalRotation_4(bool value)
	{
		___clampVerticalRotation_4 = value;
	}

	inline static int32_t get_offset_of_MinimumX_5() { return static_cast<int32_t>(offsetof(MouseLooker_t3832072371, ___MinimumX_5)); }
	inline float get_MinimumX_5() const { return ___MinimumX_5; }
	inline float* get_address_of_MinimumX_5() { return &___MinimumX_5; }
	inline void set_MinimumX_5(float value)
	{
		___MinimumX_5 = value;
	}

	inline static int32_t get_offset_of_MaximumX_6() { return static_cast<int32_t>(offsetof(MouseLooker_t3832072371, ___MaximumX_6)); }
	inline float get_MaximumX_6() const { return ___MaximumX_6; }
	inline float* get_address_of_MaximumX_6() { return &___MaximumX_6; }
	inline void set_MaximumX_6(float value)
	{
		___MaximumX_6 = value;
	}

	inline static int32_t get_offset_of_smooth_7() { return static_cast<int32_t>(offsetof(MouseLooker_t3832072371, ___smooth_7)); }
	inline bool get_smooth_7() const { return ___smooth_7; }
	inline bool* get_address_of_smooth_7() { return &___smooth_7; }
	inline void set_smooth_7(bool value)
	{
		___smooth_7 = value;
	}

	inline static int32_t get_offset_of_smoothTime_8() { return static_cast<int32_t>(offsetof(MouseLooker_t3832072371, ___smoothTime_8)); }
	inline float get_smoothTime_8() const { return ___smoothTime_8; }
	inline float* get_address_of_smoothTime_8() { return &___smoothTime_8; }
	inline void set_smoothTime_8(float value)
	{
		___smoothTime_8 = value;
	}

	inline static int32_t get_offset_of_m_CharacterTargetRot_9() { return static_cast<int32_t>(offsetof(MouseLooker_t3832072371, ___m_CharacterTargetRot_9)); }
	inline Quaternion_t4030073918  get_m_CharacterTargetRot_9() const { return ___m_CharacterTargetRot_9; }
	inline Quaternion_t4030073918 * get_address_of_m_CharacterTargetRot_9() { return &___m_CharacterTargetRot_9; }
	inline void set_m_CharacterTargetRot_9(Quaternion_t4030073918  value)
	{
		___m_CharacterTargetRot_9 = value;
	}

	inline static int32_t get_offset_of_m_CameraTargetRot_10() { return static_cast<int32_t>(offsetof(MouseLooker_t3832072371, ___m_CameraTargetRot_10)); }
	inline Quaternion_t4030073918  get_m_CameraTargetRot_10() const { return ___m_CameraTargetRot_10; }
	inline Quaternion_t4030073918 * get_address_of_m_CameraTargetRot_10() { return &___m_CameraTargetRot_10; }
	inline void set_m_CameraTargetRot_10(Quaternion_t4030073918  value)
	{
		___m_CameraTargetRot_10 = value;
	}

	inline static int32_t get_offset_of_character_11() { return static_cast<int32_t>(offsetof(MouseLooker_t3832072371, ___character_11)); }
	inline Transform_t3275118058 * get_character_11() const { return ___character_11; }
	inline Transform_t3275118058 ** get_address_of_character_11() { return &___character_11; }
	inline void set_character_11(Transform_t3275118058 * value)
	{
		___character_11 = value;
		Il2CppCodeGenWriteBarrier(&___character_11, value);
	}

	inline static int32_t get_offset_of_cameraTransform_12() { return static_cast<int32_t>(offsetof(MouseLooker_t3832072371, ___cameraTransform_12)); }
	inline Transform_t3275118058 * get_cameraTransform_12() const { return ___cameraTransform_12; }
	inline Transform_t3275118058 ** get_address_of_cameraTransform_12() { return &___cameraTransform_12; }
	inline void set_cameraTransform_12(Transform_t3275118058 * value)
	{
		___cameraTransform_12 = value;
		Il2CppCodeGenWriteBarrier(&___cameraTransform_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
