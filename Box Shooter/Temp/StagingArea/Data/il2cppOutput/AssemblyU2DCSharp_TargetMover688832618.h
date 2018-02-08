#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_TargetMover_motionDirections1066061995.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TargetMover
struct  TargetMover_t688832618  : public MonoBehaviour_t1158329972
{
public:
	// TargetMover/motionDirections TargetMover::motionState
	int32_t ___motionState_2;
	// System.Single TargetMover::spinSpeed
	float ___spinSpeed_3;
	// System.Single TargetMover::motionMagnitude
	float ___motionMagnitude_4;

public:
	inline static int32_t get_offset_of_motionState_2() { return static_cast<int32_t>(offsetof(TargetMover_t688832618, ___motionState_2)); }
	inline int32_t get_motionState_2() const { return ___motionState_2; }
	inline int32_t* get_address_of_motionState_2() { return &___motionState_2; }
	inline void set_motionState_2(int32_t value)
	{
		___motionState_2 = value;
	}

	inline static int32_t get_offset_of_spinSpeed_3() { return static_cast<int32_t>(offsetof(TargetMover_t688832618, ___spinSpeed_3)); }
	inline float get_spinSpeed_3() const { return ___spinSpeed_3; }
	inline float* get_address_of_spinSpeed_3() { return &___spinSpeed_3; }
	inline void set_spinSpeed_3(float value)
	{
		___spinSpeed_3 = value;
	}

	inline static int32_t get_offset_of_motionMagnitude_4() { return static_cast<int32_t>(offsetof(TargetMover_t688832618, ___motionMagnitude_4)); }
	inline float get_motionMagnitude_4() const { return ___motionMagnitude_4; }
	inline float* get_address_of_motionMagnitude_4() { return &___motionMagnitude_4; }
	inline void set_motionMagnitude_4(float value)
	{
		___motionMagnitude_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
