// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_MegalaniaSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_MegalaniaSaddle.PrimalItemArmor_MegalaniaSaddle_C.ExecuteUbergraph_PrimalItemArmor_MegalaniaSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_MegalaniaSaddle_C::ExecuteUbergraph_PrimalItemArmor_MegalaniaSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_MegalaniaSaddle.PrimalItemArmor_MegalaniaSaddle_C.ExecuteUbergraph_PrimalItemArmor_MegalaniaSaddle");

	UPrimalItemArmor_MegalaniaSaddle_C_ExecuteUbergraph_PrimalItemArmor_MegalaniaSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
