// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Sauropod_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Sauropod.DinoCharacterStatusComponent_BP_Sauropod_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Sauropod
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Sauropod_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Sauropod(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Sauropod.DinoCharacterStatusComponent_BP_Sauropod_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Sauropod");

	UDinoCharacterStatusComponent_BP_Sauropod_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Sauropod_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
