#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TargetExit
struct  TargetExit_t260853819  : public MonoBehaviour_t1158329972
{
public:
	// System.Single TargetExit::exitAfterSeconds
	float ___exitAfterSeconds_2;
	// System.Single TargetExit::exitAnimationSeconds
	float ___exitAnimationSeconds_3;
	// System.Boolean TargetExit::startDestroy
	bool ___startDestroy_4;
	// System.Single TargetExit::targetTime
	float ___targetTime_5;

public:
	inline static int32_t get_offset_of_exitAfterSeconds_2() { return static_cast<int32_t>(offsetof(TargetExit_t260853819, ___exitAfterSeconds_2)); }
	inline float get_exitAfterSeconds_2() const { return ___exitAfterSeconds_2; }
	inline float* get_address_of_exitAfterSeconds_2() { return &___exitAfterSeconds_2; }
	inline void set_exitAfterSeconds_2(float value)
	{
		___exitAfterSeconds_2 = value;
	}

	inline static int32_t get_offset_of_exitAnimationSeconds_3() { return static_cast<int32_t>(offsetof(TargetExit_t260853819, ___exitAnimationSeconds_3)); }
	inline float get_exitAnimationSeconds_3() const { return ___exitAnimationSeconds_3; }
	inline float* get_address_of_exitAnimationSeconds_3() { return &___exitAnimationSeconds_3; }
	inline void set_exitAnimationSeconds_3(float value)
	{
		___exitAnimationSeconds_3 = value;
	}

	inline static int32_t get_offset_of_startDestroy_4() { return static_cast<int32_t>(offsetof(TargetExit_t260853819, ___startDestroy_4)); }
	inline bool get_startDestroy_4() const { return ___startDestroy_4; }
	inline bool* get_address_of_startDestroy_4() { return &___startDestroy_4; }
	inline void set_startDestroy_4(bool value)
	{
		___startDestroy_4 = value;
	}

	inline static int32_t get_offset_of_targetTime_5() { return static_cast<int32_t>(offsetof(TargetExit_t260853819, ___targetTime_5)); }
	inline float get_targetTime_5() const { return ___targetTime_5; }
	inline float* get_address_of_targetTime_5() { return &___targetTime_5; }
	inline void set_targetTime_5(float value)
	{
		___targetTime_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
