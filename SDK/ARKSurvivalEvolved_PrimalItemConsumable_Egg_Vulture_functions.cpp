// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_Vulture_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Egg_Vulture.PrimalItemConsumable_Egg_Vulture_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Vulture
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Egg_Vulture_C::ExecuteUbergraph_PrimalItemConsumable_Egg_Vulture(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_Vulture.PrimalItemConsumable_Egg_Vulture_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Vulture");

	UPrimalItemConsumable_Egg_Vulture_C_ExecuteUbergraph_PrimalItemConsumable_Egg_Vulture_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
