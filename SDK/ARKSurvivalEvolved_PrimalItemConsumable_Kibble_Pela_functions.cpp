// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Kibble_Pela_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Kibble_Pela.PrimalItemConsumable_Kibble_Pela_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_Pela
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Kibble_Pela_C::ExecuteUbergraph_PrimalItemConsumable_Kibble_Pela(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Kibble_Pela.PrimalItemConsumable_Kibble_Pela_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_Pela");

	UPrimalItemConsumable_Kibble_Pela_C_ExecuteUbergraph_PrimalItemConsumable_Kibble_Pela_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
