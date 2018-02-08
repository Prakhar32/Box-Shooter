#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// GameManager
struct GameManager_t2252321495;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2252321495  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 GameManager::score
	int32_t ___score_3;
	// System.Boolean GameManager::canBeatLevel
	bool ___canBeatLevel_4;
	// System.Int32 GameManager::beatLevelScore
	int32_t ___beatLevelScore_5;
	// System.Single GameManager::startTime
	float ___startTime_6;
	// UnityEngine.UI.Text GameManager::mainScoreDisplay
	Text_t356221433 * ___mainScoreDisplay_7;
	// UnityEngine.UI.Text GameManager::mainTimerDisplay
	Text_t356221433 * ___mainTimerDisplay_8;
	// UnityEngine.GameObject GameManager::gameOverScoreOutline
	GameObject_t1756533147 * ___gameOverScoreOutline_9;
	// UnityEngine.AudioSource GameManager::musicAudioSource
	AudioSource_t1135106623 * ___musicAudioSource_10;
	// System.Boolean GameManager::gameIsOver
	bool ___gameIsOver_11;
	// UnityEngine.GameObject GameManager::playAgainButtons
	GameObject_t1756533147 * ___playAgainButtons_12;
	// System.String GameManager::playAgainLevelToLoad
	String_t* ___playAgainLevelToLoad_13;
	// UnityEngine.GameObject GameManager::nextLevelButtons
	GameObject_t1756533147 * ___nextLevelButtons_14;
	// System.String GameManager::nextLevelToLoad
	String_t* ___nextLevelToLoad_15;
	// System.Single GameManager::currentTime
	float ___currentTime_16;
	// System.String GameManager::previousLevelToLoad
	String_t* ___previousLevelToLoad_17;
	// UnityEngine.GameObject GameManager::previousLevelButtons
	GameObject_t1756533147 * ___previousLevelButtons_18;

public:
	inline static int32_t get_offset_of_score_3() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___score_3)); }
	inline int32_t get_score_3() const { return ___score_3; }
	inline int32_t* get_address_of_score_3() { return &___score_3; }
	inline void set_score_3(int32_t value)
	{
		___score_3 = value;
	}

	inline static int32_t get_offset_of_canBeatLevel_4() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___canBeatLevel_4)); }
	inline bool get_canBeatLevel_4() const { return ___canBeatLevel_4; }
	inline bool* get_address_of_canBeatLevel_4() { return &___canBeatLevel_4; }
	inline void set_canBeatLevel_4(bool value)
	{
		___canBeatLevel_4 = value;
	}

	inline static int32_t get_offset_of_beatLevelScore_5() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___beatLevelScore_5)); }
	inline int32_t get_beatLevelScore_5() const { return ___beatLevelScore_5; }
	inline int32_t* get_address_of_beatLevelScore_5() { return &___beatLevelScore_5; }
	inline void set_beatLevelScore_5(int32_t value)
	{
		___beatLevelScore_5 = value;
	}

	inline static int32_t get_offset_of_startTime_6() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___startTime_6)); }
	inline float get_startTime_6() const { return ___startTime_6; }
	inline float* get_address_of_startTime_6() { return &___startTime_6; }
	inline void set_startTime_6(float value)
	{
		___startTime_6 = value;
	}

	inline static int32_t get_offset_of_mainScoreDisplay_7() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___mainScoreDisplay_7)); }
	inline Text_t356221433 * get_mainScoreDisplay_7() const { return ___mainScoreDisplay_7; }
	inline Text_t356221433 ** get_address_of_mainScoreDisplay_7() { return &___mainScoreDisplay_7; }
	inline void set_mainScoreDisplay_7(Text_t356221433 * value)
	{
		___mainScoreDisplay_7 = value;
		Il2CppCodeGenWriteBarrier(&___mainScoreDisplay_7, value);
	}

	inline static int32_t get_offset_of_mainTimerDisplay_8() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___mainTimerDisplay_8)); }
	inline Text_t356221433 * get_mainTimerDisplay_8() const { return ___mainTimerDisplay_8; }
	inline Text_t356221433 ** get_address_of_mainTimerDisplay_8() { return &___mainTimerDisplay_8; }
	inline void set_mainTimerDisplay_8(Text_t356221433 * value)
	{
		___mainTimerDisplay_8 = value;
		Il2CppCodeGenWriteBarrier(&___mainTimerDisplay_8, value);
	}

	inline static int32_t get_offset_of_gameOverScoreOutline_9() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___gameOverScoreOutline_9)); }
	inline GameObject_t1756533147 * get_gameOverScoreOutline_9() const { return ___gameOverScoreOutline_9; }
	inline GameObject_t1756533147 ** get_address_of_gameOverScoreOutline_9() { return &___gameOverScoreOutline_9; }
	inline void set_gameOverScoreOutline_9(GameObject_t1756533147 * value)
	{
		___gameOverScoreOutline_9 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverScoreOutline_9, value);
	}

	inline static int32_t get_offset_of_musicAudioSource_10() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___musicAudioSource_10)); }
	inline AudioSource_t1135106623 * get_musicAudioSource_10() const { return ___musicAudioSource_10; }
	inline AudioSource_t1135106623 ** get_address_of_musicAudioSource_10() { return &___musicAudioSource_10; }
	inline void set_musicAudioSource_10(AudioSource_t1135106623 * value)
	{
		___musicAudioSource_10 = value;
		Il2CppCodeGenWriteBarrier(&___musicAudioSource_10, value);
	}

	inline static int32_t get_offset_of_gameIsOver_11() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___gameIsOver_11)); }
	inline bool get_gameIsOver_11() const { return ___gameIsOver_11; }
	inline bool* get_address_of_gameIsOver_11() { return &___gameIsOver_11; }
	inline void set_gameIsOver_11(bool value)
	{
		___gameIsOver_11 = value;
	}

	inline static int32_t get_offset_of_playAgainButtons_12() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___playAgainButtons_12)); }
	inline GameObject_t1756533147 * get_playAgainButtons_12() const { return ___playAgainButtons_12; }
	inline GameObject_t1756533147 ** get_address_of_playAgainButtons_12() { return &___playAgainButtons_12; }
	inline void set_playAgainButtons_12(GameObject_t1756533147 * value)
	{
		___playAgainButtons_12 = value;
		Il2CppCodeGenWriteBarrier(&___playAgainButtons_12, value);
	}

	inline static int32_t get_offset_of_playAgainLevelToLoad_13() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___playAgainLevelToLoad_13)); }
	inline String_t* get_playAgainLevelToLoad_13() const { return ___playAgainLevelToLoad_13; }
	inline String_t** get_address_of_playAgainLevelToLoad_13() { return &___playAgainLevelToLoad_13; }
	inline void set_playAgainLevelToLoad_13(String_t* value)
	{
		___playAgainLevelToLoad_13 = value;
		Il2CppCodeGenWriteBarrier(&___playAgainLevelToLoad_13, value);
	}

	inline static int32_t get_offset_of_nextLevelButtons_14() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___nextLevelButtons_14)); }
	inline GameObject_t1756533147 * get_nextLevelButtons_14() const { return ___nextLevelButtons_14; }
	inline GameObject_t1756533147 ** get_address_of_nextLevelButtons_14() { return &___nextLevelButtons_14; }
	inline void set_nextLevelButtons_14(GameObject_t1756533147 * value)
	{
		___nextLevelButtons_14 = value;
		Il2CppCodeGenWriteBarrier(&___nextLevelButtons_14, value);
	}

	inline static int32_t get_offset_of_nextLevelToLoad_15() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___nextLevelToLoad_15)); }
	inline String_t* get_nextLevelToLoad_15() const { return ___nextLevelToLoad_15; }
	inline String_t** get_address_of_nextLevelToLoad_15() { return &___nextLevelToLoad_15; }
	inline void set_nextLevelToLoad_15(String_t* value)
	{
		___nextLevelToLoad_15 = value;
		Il2CppCodeGenWriteBarrier(&___nextLevelToLoad_15, value);
	}

	inline static int32_t get_offset_of_currentTime_16() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___currentTime_16)); }
	inline float get_currentTime_16() const { return ___currentTime_16; }
	inline float* get_address_of_currentTime_16() { return &___currentTime_16; }
	inline void set_currentTime_16(float value)
	{
		___currentTime_16 = value;
	}

	inline static int32_t get_offset_of_previousLevelToLoad_17() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___previousLevelToLoad_17)); }
	inline String_t* get_previousLevelToLoad_17() const { return ___previousLevelToLoad_17; }
	inline String_t** get_address_of_previousLevelToLoad_17() { return &___previousLevelToLoad_17; }
	inline void set_previousLevelToLoad_17(String_t* value)
	{
		___previousLevelToLoad_17 = value;
		Il2CppCodeGenWriteBarrier(&___previousLevelToLoad_17, value);
	}

	inline static int32_t get_offset_of_previousLevelButtons_18() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___previousLevelButtons_18)); }
	inline GameObject_t1756533147 * get_previousLevelButtons_18() const { return ___previousLevelButtons_18; }
	inline GameObject_t1756533147 ** get_address_of_previousLevelButtons_18() { return &___previousLevelButtons_18; }
	inline void set_previousLevelButtons_18(GameObject_t1756533147 * value)
	{
		___previousLevelButtons_18 = value;
		Il2CppCodeGenWriteBarrier(&___previousLevelButtons_18, value);
	}
};

struct GameManager_t2252321495_StaticFields
{
public:
	// GameManager GameManager::gm
	GameManager_t2252321495 * ___gm_2;

public:
	inline static int32_t get_offset_of_gm_2() { return static_cast<int32_t>(offsetof(GameManager_t2252321495_StaticFields, ___gm_2)); }
	inline GameManager_t2252321495 * get_gm_2() const { return ___gm_2; }
	inline GameManager_t2252321495 ** get_address_of_gm_2() { return &___gm_2; }
	inline void set_gm_2(GameManager_t2252321495 * value)
	{
		___gm_2 = value;
		Il2CppCodeGenWriteBarrier(&___gm_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
