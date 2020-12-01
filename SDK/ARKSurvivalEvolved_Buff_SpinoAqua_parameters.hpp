#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_SpinoAqua_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_SpinoAqua.Buff_SpinoAqua_C.ActivateAquaBuff
struct ABuff_SpinoAqua_C_ActivateAquaBuff_Params
{
};

// Function Buff_SpinoAqua.Buff_SpinoAqua_C.DeactivateAquaBuff
struct ABuff_SpinoAqua_C_DeactivateAquaBuff_Params
{
};

// Function Buff_SpinoAqua.Buff_SpinoAqua_C.UserConstructionScript
struct ABuff_SpinoAqua_C_UserConstructionScript_Params
{
};

// Function Buff_SpinoAqua.Buff_SpinoAqua_C.BPDeactivated
struct ABuff_SpinoAqua_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SpinoAqua.Buff_SpinoAqua_C.ReceiveBeginPlay
struct ABuff_SpinoAqua_C_ReceiveBeginPlay_Params
{
};

// Function Buff_SpinoAqua.Buff_SpinoAqua_C.ExecuteUbergraph_Buff_SpinoAqua
struct ABuff_SpinoAqua_C_ExecuteUbergraph_Buff_SpinoAqua_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
