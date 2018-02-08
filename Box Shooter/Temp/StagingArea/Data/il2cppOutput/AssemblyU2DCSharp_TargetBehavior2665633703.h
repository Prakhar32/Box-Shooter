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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TargetBehavior
struct  TargetBehavior_t2665633703  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 TargetBehavior::scoreAmount
	int32_t ___scoreAmount_2;
	// System.Single TargetBehavior::timeAmount
	float ___timeAmount_3;
	// UnityEngine.GameObject TargetBehavior::explosionPrefab
	GameObject_t1756533147 * ___explosionPrefab_4;

public:
	inline static int32_t get_offset_of_scoreAmount_2() { return static_cast<int32_t>(offsetof(TargetBehavior_t2665633703, ___scoreAmount_2)); }
	inline int32_t get_scoreAmount_2() const { return ___scoreAmount_2; }
	inline int32_t* get_address_of_scoreAmount_2() { return &___scoreAmount_2; }
	inline void set_scoreAmount_2(int32_t value)
	{
		___scoreAmount_2 = value;
	}

	inline static int32_t get_offset_of_timeAmount_3() { return static_cast<int32_t>(offsetof(TargetBehavior_t2665633703, ___timeAmount_3)); }
	inline float get_timeAmount_3() const { return ___timeAmount_3; }
	inline float* get_address_of_timeAmount_3() { return &___timeAmount_3; }
	inline void set_timeAmount_3(float value)
	{
		___timeAmount_3 = value;
	}

	inline static int32_t get_offset_of_explosionPrefab_4() { return static_cast<int32_t>(offsetof(TargetBehavior_t2665633703, ___explosionPrefab_4)); }
	inline GameObject_t1756533147 * get_explosionPrefab_4() const { return ___explosionPrefab_4; }
	inline GameObject_t1756533147 ** get_address_of_explosionPrefab_4() { return &___explosionPrefab_4; }
	inline void set_explosionPrefab_4(GameObject_t1756533147 * value)
	{
		___explosionPrefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___explosionPrefab_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
