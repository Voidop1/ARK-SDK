// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TriCeiling_Stone_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TriCeiling_Stone.PrimalItemStructure_TriCeiling_Stone_C.ExecuteUbergraph_PrimalItemStructure_TriCeiling_Stone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TriCeiling_Stone_C::ExecuteUbergraph_PrimalItemStructure_TriCeiling_Stone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TriCeiling_Stone.PrimalItemStructure_TriCeiling_Stone_C.ExecuteUbergraph_PrimalItemStructure_TriCeiling_Stone");

	UPrimalItemStructure_TriCeiling_Stone_C_ExecuteUbergraph_PrimalItemStructure_TriCeiling_Stone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
