// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Kibble_Moth_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Kibble_Moth.PrimalItemConsumable_Kibble_Moth_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_Moth
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Kibble_Moth_C::ExecuteUbergraph_PrimalItemConsumable_Kibble_Moth(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Kibble_Moth.PrimalItemConsumable_Kibble_Moth_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_Moth");

	UPrimalItemConsumable_Kibble_Moth_C_ExecuteUbergraph_PrimalItemConsumable_Kibble_Moth_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
