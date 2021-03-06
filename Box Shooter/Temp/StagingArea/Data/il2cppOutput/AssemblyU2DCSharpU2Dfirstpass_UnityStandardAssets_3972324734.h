﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2152133263.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_I962057283.h"

// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.ScreenOverlay
struct  ScreenOverlay_t3972324734  : public PostEffectsBase_t2152133263
{
public:
	// UnityStandardAssets.ImageEffects.ScreenOverlay/OverlayBlendMode UnityStandardAssets.ImageEffects.ScreenOverlay::blendMode
	int32_t ___blendMode_5;
	// System.Single UnityStandardAssets.ImageEffects.ScreenOverlay::intensity
	float ___intensity_6;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.ScreenOverlay::texture
	Texture2D_t3542995729 * ___texture_7;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ScreenOverlay::overlayShader
	Shader_t2430389951 * ___overlayShader_8;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ScreenOverlay::overlayMaterial
	Material_t193706927 * ___overlayMaterial_9;

public:
	inline static int32_t get_offset_of_blendMode_5() { return static_cast<int32_t>(offsetof(ScreenOverlay_t3972324734, ___blendMode_5)); }
	inline int32_t get_blendMode_5() const { return ___blendMode_5; }
	inline int32_t* get_address_of_blendMode_5() { return &___blendMode_5; }
	inline void set_blendMode_5(int32_t value)
	{
		___blendMode_5 = value;
	}

	inline static int32_t get_offset_of_intensity_6() { return static_cast<int32_t>(offsetof(ScreenOverlay_t3972324734, ___intensity_6)); }
	inline float get_intensity_6() const { return ___intensity_6; }
	inline float* get_address_of_intensity_6() { return &___intensity_6; }
	inline void set_intensity_6(float value)
	{
		___intensity_6 = value;
	}

	inline static int32_t get_offset_of_texture_7() { return static_cast<int32_t>(offsetof(ScreenOverlay_t3972324734, ___texture_7)); }
	inline Texture2D_t3542995729 * get_texture_7() const { return ___texture_7; }
	inline Texture2D_t3542995729 ** get_address_of_texture_7() { return &___texture_7; }
	inline void set_texture_7(Texture2D_t3542995729 * value)
	{
		___texture_7 = value;
		Il2CppCodeGenWriteBarrier(&___texture_7, value);
	}

	inline static int32_t get_offset_of_overlayShader_8() { return static_cast<int32_t>(offsetof(ScreenOverlay_t3972324734, ___overlayShader_8)); }
	inline Shader_t2430389951 * get_overlayShader_8() const { return ___overlayShader_8; }
	inline Shader_t2430389951 ** get_address_of_overlayShader_8() { return &___overlayShader_8; }
	inline void set_overlayShader_8(Shader_t2430389951 * value)
	{
		___overlayShader_8 = value;
		Il2CppCodeGenWriteBarrier(&___overlayShader_8, value);
	}

	inline static int32_t get_offset_of_overlayMaterial_9() { return static_cast<int32_t>(offsetof(ScreenOverlay_t3972324734, ___overlayMaterial_9)); }
	inline Material_t193706927 * get_overlayMaterial_9() const { return ___overlayMaterial_9; }
	inline Material_t193706927 ** get_address_of_overlayMaterial_9() { return &___overlayMaterial_9; }
	inline void set_overlayMaterial_9(Material_t193706927 * value)
	{
		___overlayMaterial_9 = value;
		Il2CppCodeGenWriteBarrier(&___overlayMaterial_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
