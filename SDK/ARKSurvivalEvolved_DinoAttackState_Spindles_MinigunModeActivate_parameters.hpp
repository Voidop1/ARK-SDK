#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_Spindles_MinigunModeActivate_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoAttackState_Spindles_MinigunModeActivate.DinoAttackState_Spindles_MinigunModeActivate_C.OnEndEvent
struct UDinoAttackState_Spindles_MinigunModeActivate_C_OnEndEvent_Params
{
};

// Function DinoAttackState_Spindles_MinigunModeActivate.DinoAttackState_Spindles_MinigunModeActivate_C.BPCanAttack
struct UDinoAttackState_Spindles_MinigunModeActivate_C_BPCanAttack_Params
{
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoAttackState_Spindles_MinigunModeActivate.DinoAttackState_Spindles_MinigunModeActivate_C.OnBeginEvent
struct UDinoAttackState_Spindles_MinigunModeActivate_C_OnBeginEvent_Params
{
	class UPrimalAIState**                             InParentState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_Spindles_MinigunModeActivate.DinoAttackState_Spindles_MinigunModeActivate_C.ExecuteUbergraph_DinoAttackState_Spindles_MinigunModeActivate
struct UDinoAttackState_Spindles_MinigunModeActivate_C_ExecuteUbergraph_DinoAttackState_Spindles_MinigunModeActivate_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
