﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpawnToNextLocation
struct  SpawnToNextLocation_t972648924  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] SpawnToNextLocation::game
	GameObjectU5BU5D_t3057952154* ___game_2;

public:
	inline static int32_t get_offset_of_game_2() { return static_cast<int32_t>(offsetof(SpawnToNextLocation_t972648924, ___game_2)); }
	inline GameObjectU5BU5D_t3057952154* get_game_2() const { return ___game_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_game_2() { return &___game_2; }
	inline void set_game_2(GameObjectU5BU5D_t3057952154* value)
	{
		___game_2 = value;
		Il2CppCodeGenWriteBarrier(&___game_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif