#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Shooter
struct  Shooter_t3051933708  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Shooter::projectile
	GameObject_t1756533147 * ___projectile_2;
	// System.Single Shooter::power
	float ___power_3;
	// UnityEngine.AudioClip Shooter::shootSFX
	AudioClip_t1932558630 * ___shootSFX_4;

public:
	inline static int32_t get_offset_of_projectile_2() { return static_cast<int32_t>(offsetof(Shooter_t3051933708, ___projectile_2)); }
	inline GameObject_t1756533147 * get_projectile_2() const { return ___projectile_2; }
	inline GameObject_t1756533147 ** get_address_of_projectile_2() { return &___projectile_2; }
	inline void set_projectile_2(GameObject_t1756533147 * value)
	{
		___projectile_2 = value;
		Il2CppCodeGenWriteBarrier(&___projectile_2, value);
	}

	inline static int32_t get_offset_of_power_3() { return static_cast<int32_t>(offsetof(Shooter_t3051933708, ___power_3)); }
	inline float get_power_3() const { return ___power_3; }
	inline float* get_address_of_power_3() { return &___power_3; }
	inline void set_power_3(float value)
	{
		___power_3 = value;
	}

	inline static int32_t get_offset_of_shootSFX_4() { return static_cast<int32_t>(offsetof(Shooter_t3051933708, ___shootSFX_4)); }
	inline AudioClip_t1932558630 * get_shootSFX_4() const { return ___shootSFX_4; }
	inline AudioClip_t1932558630 ** get_address_of_shootSFX_4() { return &___shootSFX_4; }
	inline void set_shootSFX_4(AudioClip_t1932558630 * value)
	{
		___shootSFX_4 = value;
		Il2CppCodeGenWriteBarrier(&___shootSFX_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
