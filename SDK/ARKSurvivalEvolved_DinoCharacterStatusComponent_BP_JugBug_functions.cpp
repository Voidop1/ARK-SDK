// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_JugBug_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_JugBug.DinoCharacterStatusComponent_BP_JugBug_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_JugBug
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_JugBug_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_JugBug(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_JugBug.DinoCharacterStatusComponent_BP_JugBug_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_JugBug");

	UDinoCharacterStatusComponent_BP_JugBug_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_JugBug_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
