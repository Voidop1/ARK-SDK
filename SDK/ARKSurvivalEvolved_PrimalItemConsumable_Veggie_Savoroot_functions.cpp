// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Veggie_Savoroot_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Veggie_Savoroot.PrimalItemConsumable_Veggie_Savoroot_C.ExecuteUbergraph_PrimalItemConsumable_Veggie_Savoroot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Veggie_Savoroot_C::ExecuteUbergraph_PrimalItemConsumable_Veggie_Savoroot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Veggie_Savoroot.PrimalItemConsumable_Veggie_Savoroot_C.ExecuteUbergraph_PrimalItemConsumable_Veggie_Savoroot");

	UPrimalItemConsumable_Veggie_Savoroot_C_ExecuteUbergraph_PrimalItemConsumable_Veggie_Savoroot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
