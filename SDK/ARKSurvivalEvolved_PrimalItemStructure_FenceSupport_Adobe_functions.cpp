// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_FenceSupport_Adobe_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_FenceSupport_Adobe.PrimalItemStructure_FenceSupport_Adobe_C.ExecuteUbergraph_PrimalItemStructure_FenceSupport_Adobe
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_FenceSupport_Adobe_C::ExecuteUbergraph_PrimalItemStructure_FenceSupport_Adobe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_FenceSupport_Adobe.PrimalItemStructure_FenceSupport_Adobe_C.ExecuteUbergraph_PrimalItemStructure_FenceSupport_Adobe");

	UPrimalItemStructure_FenceSupport_Adobe_C_ExecuteUbergraph_PrimalItemStructure_FenceSupport_Adobe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
