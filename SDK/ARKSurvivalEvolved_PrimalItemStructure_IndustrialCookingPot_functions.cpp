// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_IndustrialCookingPot_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_IndustrialCookingPot.PrimalItemStructure_IndustrialCookingPot_C.ExecuteUbergraph_PrimalItemStructure_IndustrialCookingPot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_IndustrialCookingPot_C::ExecuteUbergraph_PrimalItemStructure_IndustrialCookingPot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_IndustrialCookingPot.PrimalItemStructure_IndustrialCookingPot_C.ExecuteUbergraph_PrimalItemStructure_IndustrialCookingPot");

	UPrimalItemStructure_IndustrialCookingPot_C_ExecuteUbergraph_PrimalItemStructure_IndustrialCookingPot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
