// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DinoTekHelmet_Mosa_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_DinoTekHelmet_Mosa.Buff_DinoTekHelmet_Mosa_C.UserConstructionScript
// ()

void ABuff_DinoTekHelmet_Mosa_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_Mosa.Buff_DinoTekHelmet_Mosa_C.UserConstructionScript");

	ABuff_DinoTekHelmet_Mosa_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DinoTekHelmet_Mosa.Buff_DinoTekHelmet_Mosa_C.ExecuteUbergraph_Buff_DinoTekHelmet_Mosa
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DinoTekHelmet_Mosa_C::ExecuteUbergraph_Buff_DinoTekHelmet_Mosa(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_Mosa.Buff_DinoTekHelmet_Mosa_C.ExecuteUbergraph_Buff_DinoTekHelmet_Mosa");

	ABuff_DinoTekHelmet_Mosa_C_ExecuteUbergraph_Buff_DinoTekHelmet_Mosa_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
