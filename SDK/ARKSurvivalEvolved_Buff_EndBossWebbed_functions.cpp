// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_EndBossWebbed_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_EndBossWebbed.Buff_EndBossWebbed_C.UserConstructionScript
// ()

void ABuff_EndBossWebbed_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossWebbed.Buff_EndBossWebbed_C.UserConstructionScript");

	ABuff_EndBossWebbed_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossWebbed.Buff_EndBossWebbed_C.ExecuteUbergraph_Buff_EndBossWebbed
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_EndBossWebbed_C::ExecuteUbergraph_Buff_EndBossWebbed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossWebbed.Buff_EndBossWebbed_C.ExecuteUbergraph_Buff_EndBossWebbed");

	ABuff_EndBossWebbed_C_ExecuteUbergraph_Buff_EndBossWebbed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
