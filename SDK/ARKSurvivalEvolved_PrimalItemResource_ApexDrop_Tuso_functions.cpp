// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_ApexDrop_Tuso_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_ApexDrop_Tuso.PrimalItemResource_ApexDrop_Tuso_C.ExecuteUbergraph_PrimalItemResource_ApexDrop_Tuso
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_ApexDrop_Tuso_C::ExecuteUbergraph_PrimalItemResource_ApexDrop_Tuso(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ApexDrop_Tuso.PrimalItemResource_ApexDrop_Tuso_C.ExecuteUbergraph_PrimalItemResource_ApexDrop_Tuso");

	UPrimalItemResource_ApexDrop_Tuso_C_ExecuteUbergraph_PrimalItemResource_ApexDrop_Tuso_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
