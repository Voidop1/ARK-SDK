// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_BaseCliffPlatform_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_BaseCliffPlatform.PrimalItemStructure_BaseCliffPlatform_C.ExecuteUbergraph_PrimalItemStructure_BaseCliffPlatform
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_BaseCliffPlatform_C::ExecuteUbergraph_PrimalItemStructure_BaseCliffPlatform(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_BaseCliffPlatform.PrimalItemStructure_BaseCliffPlatform_C.ExecuteUbergraph_PrimalItemStructure_BaseCliffPlatform");

	UPrimalItemStructure_BaseCliffPlatform_C_ExecuteUbergraph_PrimalItemStructure_BaseCliffPlatform_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
