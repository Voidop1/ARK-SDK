// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjArrow_Impacts_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjArrow_Impacts.ProjArrow_Impacts_C.UserConstructionScript
// ()

void AProjArrow_Impacts_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Impacts.ProjArrow_Impacts_C.UserConstructionScript");

	AProjArrow_Impacts_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjArrow_Impacts.ProjArrow_Impacts_C.ExecuteUbergraph_ProjArrow_Impacts
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjArrow_Impacts_C::ExecuteUbergraph_ProjArrow_Impacts(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Impacts.ProjArrow_Impacts_C.ExecuteUbergraph_ProjArrow_Impacts");

	AProjArrow_Impacts_C_ExecuteUbergraph_ProjArrow_Impacts_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
