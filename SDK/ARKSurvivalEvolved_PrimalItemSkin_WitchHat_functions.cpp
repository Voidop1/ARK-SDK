// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_WitchHat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_WitchHat.PrimalItemSkin_WitchHat_C.ExecuteUbergraph_PrimalItemSkin_WitchHat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_WitchHat_C::ExecuteUbergraph_PrimalItemSkin_WitchHat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_WitchHat.PrimalItemSkin_WitchHat_C.ExecuteUbergraph_PrimalItemSkin_WitchHat");

	UPrimalItemSkin_WitchHat_C_ExecuteUbergraph_PrimalItemSkin_WitchHat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
