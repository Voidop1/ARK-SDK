// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TriCeiling_Metal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TriCeiling_Metal.PrimalItemStructure_TriCeiling_Metal_C.ExecuteUbergraph_PrimalItemStructure_TriCeiling_Metal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TriCeiling_Metal_C::ExecuteUbergraph_PrimalItemStructure_TriCeiling_Metal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TriCeiling_Metal.PrimalItemStructure_TriCeiling_Metal_C.ExecuteUbergraph_PrimalItemStructure_TriCeiling_Metal");

	UPrimalItemStructure_TriCeiling_Metal_C_ExecuteUbergraph_PrimalItemStructure_TriCeiling_Metal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
