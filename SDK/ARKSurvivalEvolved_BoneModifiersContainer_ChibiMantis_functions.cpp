// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiMantis_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BoneModifiersContainer_ChibiMantis.BoneModifiersContainer_ChibiMantis_C.ExecuteUbergraph_BoneModifiersContainer_ChibiMantis
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModifiersContainer_ChibiMantis_C::ExecuteUbergraph_BoneModifiersContainer_ChibiMantis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiMantis.BoneModifiersContainer_ChibiMantis_C.ExecuteUbergraph_BoneModifiersContainer_ChibiMantis");

	UBoneModifiersContainer_ChibiMantis_C_ExecuteUbergraph_BoneModifiersContainer_ChibiMantis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
