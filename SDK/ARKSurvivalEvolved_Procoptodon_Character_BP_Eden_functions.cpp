// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Procoptodon_Character_BP_Eden_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Procoptodon_Character_BP_Eden.Procoptodon_Character_BP_Eden_C.UserConstructionScript
// ()

void AProcoptodon_Character_BP_Eden_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP_Eden.Procoptodon_Character_BP_Eden_C.UserConstructionScript");

	AProcoptodon_Character_BP_Eden_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procoptodon_Character_BP_Eden.Procoptodon_Character_BP_Eden_C.ExecuteUbergraph_Procoptodon_Character_BP_Eden
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProcoptodon_Character_BP_Eden_C::ExecuteUbergraph_Procoptodon_Character_BP_Eden(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP_Eden.Procoptodon_Character_BP_Eden_C.ExecuteUbergraph_Procoptodon_Character_BP_Eden");

	AProcoptodon_Character_BP_Eden_C_ExecuteUbergraph_Procoptodon_Character_BP_Eden_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
