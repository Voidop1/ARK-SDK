// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnlockHair_Facial_Moustache_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_UnlockHair_Facial_Moustache.PrimalItemConsumable_UnlockHair_Facial_Moustache_C.ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Facial_Moustache
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_UnlockHair_Facial_Moustache_C::ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Facial_Moustache(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_UnlockHair_Facial_Moustache.PrimalItemConsumable_UnlockHair_Facial_Moustache_C.ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Facial_Moustache");

	UPrimalItemConsumable_UnlockHair_Facial_Moustache_C_ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Facial_Moustache_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
