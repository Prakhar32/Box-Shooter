#pragma once

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

// SpawnGameObjects
struct  SpawnGameObjects_t4257146793  : public MonoBehaviour_t1158329972
{
public:
	// System.Single SpawnGameObjects::secondsBetweenSpawning
	float ___secondsBetweenSpawning_2;
	// System.Single SpawnGameObjects::xMinRange
	float ___xMinRange_3;
	// System.Single SpawnGameObjects::xMaxRange
	float ___xMaxRange_4;
	// System.Single SpawnGameObjects::yMinRange
	float ___yMinRange_5;
	// System.Single SpawnGameObjects::yMaxRange
	float ___yMaxRange_6;
	// System.Single SpawnGameObjects::zMinRange
	float ___zMinRange_7;
	// System.Single SpawnGameObjects::zMaxRange
	float ___zMaxRange_8;
	// UnityEngine.GameObject[] SpawnGameObjects::spawnObjects
	GameObjectU5BU5D_t3057952154* ___spawnObjects_9;
	// System.Single SpawnGameObjects::nextSpawnTime
	float ___nextSpawnTime_10;

public:
	inline static int32_t get_offset_of_secondsBetweenSpawning_2() { return static_cast<int32_t>(offsetof(SpawnGameObjects_t4257146793, ___secondsBetweenSpawning_2)); }
	inline float get_secondsBetweenSpawning_2() const { return ___secondsBetweenSpawning_2; }
	inline float* get_address_of_secondsBetweenSpawning_2() { return &___secondsBetweenSpawning_2; }
	inline void set_secondsBetweenSpawning_2(float value)
	{
		___secondsBetweenSpawning_2 = value;
	}

	inline static int32_t get_offset_of_xMinRange_3() { return static_cast<int32_t>(offsetof(SpawnGameObjects_t4257146793, ___xMinRange_3)); }
	inline float get_xMinRange_3() const { return ___xMinRange_3; }
	inline float* get_address_of_xMinRange_3() { return &___xMinRange_3; }
	inline void set_xMinRange_3(float value)
	{
		___xMinRange_3 = value;
	}

	inline static int32_t get_offset_of_xMaxRange_4() { return static_cast<int32_t>(offsetof(SpawnGameObjects_t4257146793, ___xMaxRange_4)); }
	inline float get_xMaxRange_4() const { return ___xMaxRange_4; }
	inline float* get_address_of_xMaxRange_4() { return &___xMaxRange_4; }
	inline void set_xMaxRange_4(float value)
	{
		___xMaxRange_4 = value;
	}

	inline static int32_t get_offset_of_yMinRange_5() { return static_cast<int32_t>(offsetof(SpawnGameObjects_t4257146793, ___yMinRange_5)); }
	inline float get_yMinRange_5() const { return ___yMinRange_5; }
	inline float* get_address_of_yMinRange_5() { return &___yMinRange_5; }
	inline void set_yMinRange_5(float value)
	{
		___yMinRange_5 = value;
	}

	inline static int32_t get_offset_of_yMaxRange_6() { return static_cast<int32_t>(offsetof(SpawnGameObjects_t4257146793, ___yMaxRange_6)); }
	inline float get_yMaxRange_6() const { return ___yMaxRange_6; }
	inline float* get_address_of_yMaxRange_6() { return &___yMaxRange_6; }
	inline void set_yMaxRange_6(float value)
	{
		___yMaxRange_6 = value;
	}

	inline static int32_t get_offset_of_zMinRange_7() { return static_cast<int32_t>(offsetof(SpawnGameObjects_t4257146793, ___zMinRange_7)); }
	inline float get_zMinRange_7() const { return ___zMinRange_7; }
	inline float* get_address_of_zMinRange_7() { return &___zMinRange_7; }
	inline void set_zMinRange_7(float value)
	{
		___zMinRange_7 = value;
	}

	inline static int32_t get_offset_of_zMaxRange_8() { return static_cast<int32_t>(offsetof(SpawnGameObjects_t4257146793, ___zMaxRange_8)); }
	inline float get_zMaxRange_8() const { return ___zMaxRange_8; }
	inline float* get_address_of_zMaxRange_8() { return &___zMaxRange_8; }
	inline void set_zMaxRange_8(float value)
	{
		___zMaxRange_8 = value;
	}

	inline static int32_t get_offset_of_spawnObjects_9() { return static_cast<int32_t>(offsetof(SpawnGameObjects_t4257146793, ___spawnObjects_9)); }
	inline GameObjectU5BU5D_t3057952154* get_spawnObjects_9() const { return ___spawnObjects_9; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_spawnObjects_9() { return &___spawnObjects_9; }
	inline void set_spawnObjects_9(GameObjectU5BU5D_t3057952154* value)
	{
		___spawnObjects_9 = value;
		Il2CppCodeGenWriteBarrier(&___spawnObjects_9, value);
	}

	inline static int32_t get_offset_of_nextSpawnTime_10() { return static_cast<int32_t>(offsetof(SpawnGameObjects_t4257146793, ___nextSpawnTime_10)); }
	inline float get_nextSpawnTime_10() const { return ___nextSpawnTime_10; }
	inline float* get_address_of_nextSpawnTime_10() { return &___nextSpawnTime_10; }
	inline void set_nextSpawnTime_10(float value)
	{
		___nextSpawnTime_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
