// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_RhinoSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_RhinoSaddle.PrimalItemArmor_RhinoSaddle_C.ExecuteUbergraph_PrimalItemArmor_RhinoSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_RhinoSaddle_C::ExecuteUbergraph_PrimalItemArmor_RhinoSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_RhinoSaddle.PrimalItemArmor_RhinoSaddle_C.ExecuteUbergraph_PrimalItemArmor_RhinoSaddle");

	UPrimalItemArmor_RhinoSaddle_C_ExecuteUbergraph_PrimalItemArmor_RhinoSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
