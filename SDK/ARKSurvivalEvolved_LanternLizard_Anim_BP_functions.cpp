// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LanternLizard_Anim_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LanternLizard_Anim_BP.LanternLizard_Anim_BP_C.ExecuteUbergraph_LanternLizard_Anim_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULanternLizard_Anim_BP_C::ExecuteUbergraph_LanternLizard_Anim_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternLizard_Anim_BP.LanternLizard_Anim_BP_C.ExecuteUbergraph_LanternLizard_Anim_BP");

	ULanternLizard_Anim_BP_C_ExecuteUbergraph_LanternLizard_Anim_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
