// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Eel_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Eel.DinoEntry_Eel_C.ExecuteUbergraph_DinoEntry_Eel
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Eel_C::ExecuteUbergraph_DinoEntry_Eel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Eel.DinoEntry_Eel_C.ExecuteUbergraph_DinoEntry_Eel");

	UDinoEntry_Eel_C_ExecuteUbergraph_DinoEntry_Eel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
