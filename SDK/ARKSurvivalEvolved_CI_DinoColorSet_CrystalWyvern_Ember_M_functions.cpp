// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CI_DinoColorSet_CrystalWyvern_Ember_M_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CI_DinoColorSet_CrystalWyvern_Ember_M.CI_DinoColorSet_CrystalWyvern_Ember_M_C.ExecuteUbergraph_CI_DinoColorSet_CrystalWyvern_Ember_M
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCI_DinoColorSet_CrystalWyvern_Ember_M_C::ExecuteUbergraph_CI_DinoColorSet_CrystalWyvern_Ember_M(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CI_DinoColorSet_CrystalWyvern_Ember_M.CI_DinoColorSet_CrystalWyvern_Ember_M_C.ExecuteUbergraph_CI_DinoColorSet_CrystalWyvern_Ember_M");

	UCI_DinoColorSet_CrystalWyvern_Ember_M_C_ExecuteUbergraph_CI_DinoColorSet_CrystalWyvern_Ember_M_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
