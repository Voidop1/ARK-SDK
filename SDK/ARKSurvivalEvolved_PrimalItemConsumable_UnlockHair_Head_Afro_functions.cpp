// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnlockHair_Head_Afro_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_UnlockHair_Head_Afro.PrimalItemConsumable_UnlockHair_Head_Afro_C.ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Head_Afro
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_UnlockHair_Head_Afro_C::ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Head_Afro(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_UnlockHair_Head_Afro.PrimalItemConsumable_UnlockHair_Head_Afro_C.ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Head_Afro");

	UPrimalItemConsumable_UnlockHair_Head_Afro_C_ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Head_Afro_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
