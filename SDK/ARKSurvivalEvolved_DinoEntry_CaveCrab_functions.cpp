// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_CaveCrab_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_CaveCrab.DinoEntry_CaveCrab_C.ExecuteUbergraph_DinoEntry_CaveCrab
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_CaveCrab_C::ExecuteUbergraph_DinoEntry_CaveCrab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_CaveCrab.DinoEntry_CaveCrab_C.ExecuteUbergraph_DinoEntry_CaveCrab");

	UDinoEntry_CaveCrab_C_ExecuteUbergraph_DinoEntry_CaveCrab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
