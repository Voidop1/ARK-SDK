// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TekFenceFoundation_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TekFenceFoundation.PrimalItemStructure_TekFenceFoundation_C.ExecuteUbergraph_PrimalItemStructure_TekFenceFoundation
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TekFenceFoundation_C::ExecuteUbergraph_PrimalItemStructure_TekFenceFoundation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TekFenceFoundation.PrimalItemStructure_TekFenceFoundation_C.ExecuteUbergraph_PrimalItemStructure_TekFenceFoundation");

	UPrimalItemStructure_TekFenceFoundation_C_ExecuteUbergraph_PrimalItemStructure_TekFenceFoundation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
