// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_GenericFishing_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_GenericFishing.PrimalInventoryBP_GenericFishing_C.ExecuteUbergraph_PrimalInventoryBP_GenericFishing
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_GenericFishing_C::ExecuteUbergraph_PrimalInventoryBP_GenericFishing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_GenericFishing.PrimalInventoryBP_GenericFishing_C.ExecuteUbergraph_PrimalInventoryBP_GenericFishing");

	UPrimalInventoryBP_GenericFishing_C_ExecuteUbergraph_PrimalInventoryBP_GenericFishing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
