// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_IceJumperSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_IceJumperSaddle.PrimalItemArmor_IceJumperSaddle_C.ExecuteUbergraph_PrimalItemArmor_IceJumperSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_IceJumperSaddle_C::ExecuteUbergraph_PrimalItemArmor_IceJumperSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_IceJumperSaddle.PrimalItemArmor_IceJumperSaddle_C.ExecuteUbergraph_PrimalItemArmor_IceJumperSaddle");

	UPrimalItemArmor_IceJumperSaddle_C_ExecuteUbergraph_PrimalItemArmor_IceJumperSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
