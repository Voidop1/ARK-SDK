// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LanternLizard_Chibi_AnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LanternLizard_Chibi_AnimBP.LanternLizard_Chibi_AnimBP_C.ExecuteUbergraph_LanternLizard_Chibi_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULanternLizard_Chibi_AnimBP_C::ExecuteUbergraph_LanternLizard_Chibi_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternLizard_Chibi_AnimBP.LanternLizard_Chibi_AnimBP_C.ExecuteUbergraph_LanternLizard_Chibi_AnimBP");

	ULanternLizard_Chibi_AnimBP_C_ExecuteUbergraph_LanternLizard_Chibi_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
