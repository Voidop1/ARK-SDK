// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LeftClimbing_ImpactEffect_Leaves_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LeftClimbing_ImpactEffect_Leaves.LeftClimbing_ImpactEffect_Leaves_C.UserConstructionScript
// ()

void ALeftClimbing_ImpactEffect_Leaves_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeftClimbing_ImpactEffect_Leaves.LeftClimbing_ImpactEffect_Leaves_C.UserConstructionScript");

	ALeftClimbing_ImpactEffect_Leaves_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeftClimbing_ImpactEffect_Leaves.LeftClimbing_ImpactEffect_Leaves_C.ExecuteUbergraph_LeftClimbing_ImpactEffect_Leaves
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALeftClimbing_ImpactEffect_Leaves_C::ExecuteUbergraph_LeftClimbing_ImpactEffect_Leaves(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeftClimbing_ImpactEffect_Leaves.LeftClimbing_ImpactEffect_Leaves_C.ExecuteUbergraph_LeftClimbing_ImpactEffect_Leaves");

	ALeftClimbing_ImpactEffect_Leaves_C_ExecuteUbergraph_LeftClimbing_ImpactEffect_Leaves_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
