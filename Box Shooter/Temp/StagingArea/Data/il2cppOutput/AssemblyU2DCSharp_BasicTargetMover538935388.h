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

// BasicTargetMover
struct  BasicTargetMover_t538935388  : public MonoBehaviour_t1158329972
{
public:
	// System.Single BasicTargetMover::spinSpeed
	float ___spinSpeed_2;
	// System.Single BasicTargetMover::motionMagntude
	float ___motionMagntude_3;
	// System.Boolean BasicTargetMover::doSpin
	bool ___doSpin_4;
	// System.Boolean BasicTargetMover::doMotion
	bool ___doMotion_5;

public:
	inline static int32_t get_offset_of_spinSpeed_2() { return static_cast<int32_t>(offsetof(BasicTargetMover_t538935388, ___spinSpeed_2)); }
	inline float get_spinSpeed_2() const { return ___spinSpeed_2; }
	inline float* get_address_of_spinSpeed_2() { return &___spinSpeed_2; }
	inline void set_spinSpeed_2(float value)
	{
		___spinSpeed_2 = value;
	}

	inline static int32_t get_offset_of_motionMagntude_3() { return static_cast<int32_t>(offsetof(BasicTargetMover_t538935388, ___motionMagntude_3)); }
	inline float get_motionMagntude_3() const { return ___motionMagntude_3; }
	inline float* get_address_of_motionMagntude_3() { return &___motionMagntude_3; }
	inline void set_motionMagntude_3(float value)
	{
		___motionMagntude_3 = value;
	}

	inline static int32_t get_offset_of_doSpin_4() { return static_cast<int32_t>(offsetof(BasicTargetMover_t538935388, ___doSpin_4)); }
	inline bool get_doSpin_4() const { return ___doSpin_4; }
	inline bool* get_address_of_doSpin_4() { return &___doSpin_4; }
	inline void set_doSpin_4(bool value)
	{
		___doSpin_4 = value;
	}

	inline static int32_t get_offset_of_doMotion_5() { return static_cast<int32_t>(offsetof(BasicTargetMover_t538935388, ___doMotion_5)); }
	inline bool get_doMotion_5() const { return ___doMotion_5; }
	inline bool* get_address_of_doMotion_5() { return &___doMotion_5; }
	inline void set_doMotion_5(bool value)
	{
		___doMotion_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
