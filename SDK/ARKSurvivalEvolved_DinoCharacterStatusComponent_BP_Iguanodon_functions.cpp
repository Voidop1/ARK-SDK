// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Iguanodon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Iguanodon.DinoCharacterStatusComponent_BP_Iguanodon_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Iguanodon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Iguanodon_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Iguanodon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Iguanodon.DinoCharacterStatusComponent_BP_Iguanodon_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Iguanodon");

	UDinoCharacterStatusComponent_BP_Iguanodon_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Iguanodon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
