// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_MegaRaptor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_MegaRaptor.DinoCharacterStatusComponent_BP_MegaRaptor_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_MegaRaptor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_MegaRaptor_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_MegaRaptor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_MegaRaptor.DinoCharacterStatusComponent_BP_MegaRaptor_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_MegaRaptor");

	UDinoCharacterStatusComponent_BP_MegaRaptor_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_MegaRaptor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
