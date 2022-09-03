#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_EnforcerSpeedEffect_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_EnforcerSpeedEffect.Buff_EnforcerSpeedEffect_C.BPActivated
struct ABuff_EnforcerSpeedEffect_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_EnforcerSpeedEffect.Buff_EnforcerSpeedEffect_C.BuffTickClient
struct ABuff_EnforcerSpeedEffect_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_EnforcerSpeedEffect.Buff_EnforcerSpeedEffect_C.BPCustomAllowAddBuff
struct ABuff_EnforcerSpeedEffect_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_EnforcerSpeedEffect.Buff_EnforcerSpeedEffect_C.UserConstructionScript
struct ABuff_EnforcerSpeedEffect_C_UserConstructionScript_Params
{
};

// Function Buff_EnforcerSpeedEffect.Buff_EnforcerSpeedEffect_C.ExecuteUbergraph_Buff_EnforcerSpeedEffect
struct ABuff_EnforcerSpeedEffect_C_ExecuteUbergraph_Buff_EnforcerSpeedEffect_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
