// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_WW_WinterHatC_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_WW_WinterHatC.PrimalItemSkin_WW_WinterHatC_C.ExecuteUbergraph_PrimalItemSkin_WW_WinterHatC
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_WW_WinterHatC_C::ExecuteUbergraph_PrimalItemSkin_WW_WinterHatC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_WW_WinterHatC.PrimalItemSkin_WW_WinterHatC_C.ExecuteUbergraph_PrimalItemSkin_WW_WinterHatC");

	UPrimalItemSkin_WW_WinterHatC_C_ExecuteUbergraph_PrimalItemSkin_WW_WinterHatC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
