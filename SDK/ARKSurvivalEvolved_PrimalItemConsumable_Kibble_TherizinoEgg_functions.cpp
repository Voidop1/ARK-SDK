// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Kibble_TherizinoEgg_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Kibble_TherizinoEgg.PrimalItemConsumable_Kibble_TherizinoEgg_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_TherizinoEgg
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Kibble_TherizinoEgg_C::ExecuteUbergraph_PrimalItemConsumable_Kibble_TherizinoEgg(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Kibble_TherizinoEgg.PrimalItemConsumable_Kibble_TherizinoEgg_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_TherizinoEgg");

	UPrimalItemConsumable_Kibble_TherizinoEgg_C_ExecuteUbergraph_PrimalItemConsumable_Kibble_TherizinoEgg_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
