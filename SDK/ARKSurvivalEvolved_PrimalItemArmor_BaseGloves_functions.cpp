// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_BaseGloves_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_BaseGloves.PrimalItemArmor_BaseGloves_C.ExecuteUbergraph_PrimalItemArmor_BaseGloves
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_BaseGloves_C::ExecuteUbergraph_PrimalItemArmor_BaseGloves(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_BaseGloves.PrimalItemArmor_BaseGloves_C.ExecuteUbergraph_PrimalItemArmor_BaseGloves");

	UPrimalItemArmor_BaseGloves_C_ExecuteUbergraph_PrimalItemArmor_BaseGloves_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
