﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_I517806655.h"

// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.MotionBlur
struct  MotionBlur_t1887427701  : public ImageEffectBase_t517806655
{
public:
	// System.Single UnityStandardAssets.ImageEffects.MotionBlur::blurAmount
	float ___blurAmount_4;
	// System.Boolean UnityStandardAssets.ImageEffects.MotionBlur::extraBlur
	bool ___extraBlur_5;
	// UnityEngine.RenderTexture UnityStandardAssets.ImageEffects.MotionBlur::accumTexture
	RenderTexture_t2666733923 * ___accumTexture_6;

public:
	inline static int32_t get_offset_of_blurAmount_4() { return static_cast<int32_t>(offsetof(MotionBlur_t1887427701, ___blurAmount_4)); }
	inline float get_blurAmount_4() const { return ___blurAmount_4; }
	inline float* get_address_of_blurAmount_4() { return &___blurAmount_4; }
	inline void set_blurAmount_4(float value)
	{
		___blurAmount_4 = value;
	}

	inline static int32_t get_offset_of_extraBlur_5() { return static_cast<int32_t>(offsetof(MotionBlur_t1887427701, ___extraBlur_5)); }
	inline bool get_extraBlur_5() const { return ___extraBlur_5; }
	inline bool* get_address_of_extraBlur_5() { return &___extraBlur_5; }
	inline void set_extraBlur_5(bool value)
	{
		___extraBlur_5 = value;
	}

	inline static int32_t get_offset_of_accumTexture_6() { return static_cast<int32_t>(offsetof(MotionBlur_t1887427701, ___accumTexture_6)); }
	inline RenderTexture_t2666733923 * get_accumTexture_6() const { return ___accumTexture_6; }
	inline RenderTexture_t2666733923 ** get_address_of_accumTexture_6() { return &___accumTexture_6; }
	inline void set_accumTexture_6(RenderTexture_t2666733923 * value)
	{
		___accumTexture_6 = value;
		Il2CppCodeGenWriteBarrier(&___accumTexture_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
