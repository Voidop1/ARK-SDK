// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_MoleRatSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_MoleRatSaddle.PrimalItemArmor_MoleRatSaddle_C.ExecuteUbergraph_PrimalItemArmor_MoleRatSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_MoleRatSaddle_C::ExecuteUbergraph_PrimalItemArmor_MoleRatSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_MoleRatSaddle.PrimalItemArmor_MoleRatSaddle_C.ExecuteUbergraph_PrimalItemArmor_MoleRatSaddle");

	UPrimalItemArmor_MoleRatSaddle_C_ExecuteUbergraph_PrimalItemArmor_MoleRatSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
