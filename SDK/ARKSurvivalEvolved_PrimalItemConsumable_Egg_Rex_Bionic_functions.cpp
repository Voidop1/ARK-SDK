// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_Rex_Bionic_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Egg_Rex_Bionic.PrimalItemConsumable_Egg_Rex_Bionic_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Rex_Bionic
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Egg_Rex_Bionic_C::ExecuteUbergraph_PrimalItemConsumable_Egg_Rex_Bionic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_Rex_Bionic.PrimalItemConsumable_Egg_Rex_Bionic_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Rex_Bionic");

	UPrimalItemConsumable_Egg_Rex_Bionic_C_ExecuteUbergraph_PrimalItemConsumable_Egg_Rex_Bionic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
