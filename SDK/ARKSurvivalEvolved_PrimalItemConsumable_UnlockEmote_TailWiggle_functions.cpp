// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnlockEmote_TailWiggle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_UnlockEmote_TailWiggle.PrimalItemConsumable_UnlockEmote_TailWiggle_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_TailWiggle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_UnlockEmote_TailWiggle_C::ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_TailWiggle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_UnlockEmote_TailWiggle.PrimalItemConsumable_UnlockEmote_TailWiggle_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_TailWiggle");

	UPrimalItemConsumable_UnlockEmote_TailWiggle_C_ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_TailWiggle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
