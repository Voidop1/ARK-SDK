// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_AdobeStaircase_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_AdobeStaircase.PrimalItemStructure_AdobeStaircase_C.ExecuteUbergraph_PrimalItemStructure_AdobeStaircase
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_AdobeStaircase_C::ExecuteUbergraph_PrimalItemStructure_AdobeStaircase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_AdobeStaircase.PrimalItemStructure_AdobeStaircase_C.ExecuteUbergraph_PrimalItemStructure_AdobeStaircase");

	UPrimalItemStructure_AdobeStaircase_C_ExecuteUbergraph_PrimalItemStructure_AdobeStaircase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
