// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnlockEmote_SelfHug_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_UnlockEmote_SelfHug.PrimalItemConsumable_UnlockEmote_SelfHug_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_SelfHug
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_UnlockEmote_SelfHug_C::ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_SelfHug(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_UnlockEmote_SelfHug.PrimalItemConsumable_UnlockEmote_SelfHug_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_SelfHug");

	UPrimalItemConsumable_UnlockEmote_SelfHug_C_ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_SelfHug_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
