// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TrikeRivalry_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TrikeRivalry.Buff_TrikeRivalry_C.UserConstructionScript
// ()

void ABuff_TrikeRivalry_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TrikeRivalry.Buff_TrikeRivalry_C.UserConstructionScript");

	ABuff_TrikeRivalry_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TrikeRivalry.Buff_TrikeRivalry_C.ExecuteUbergraph_Buff_TrikeRivalry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TrikeRivalry_C::ExecuteUbergraph_Buff_TrikeRivalry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TrikeRivalry.Buff_TrikeRivalry_C.ExecuteUbergraph_Buff_TrikeRivalry");

	ABuff_TrikeRivalry_C_ExecuteUbergraph_Buff_TrikeRivalry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
