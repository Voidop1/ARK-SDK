// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndBossProjRock_Impacts_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EndBossProjRock_Impacts.EndBossProjRock_Impacts_C.UserConstructionScript
// ()

void AEndBossProjRock_Impacts_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossProjRock_Impacts.EndBossProjRock_Impacts_C.UserConstructionScript");

	AEndBossProjRock_Impacts_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBossProjRock_Impacts.EndBossProjRock_Impacts_C.ExecuteUbergraph_EndBossProjRock_Impacts
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEndBossProjRock_Impacts_C::ExecuteUbergraph_EndBossProjRock_Impacts(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossProjRock_Impacts.EndBossProjRock_Impacts_C.ExecuteUbergraph_EndBossProjRock_Impacts");

	AEndBossProjRock_Impacts_C_ExecuteUbergraph_EndBossProjRock_Impacts_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
