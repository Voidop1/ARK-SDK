// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Allosaurus_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Allosaurus_AnimBlueprint.Allosaurus_AnimBlueprint_C.ExecuteUbergraph_Allosaurus_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAllosaurus_AnimBlueprint_C::ExecuteUbergraph_Allosaurus_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Allosaurus_AnimBlueprint.Allosaurus_AnimBlueprint_C.ExecuteUbergraph_Allosaurus_AnimBlueprint");

	UAllosaurus_AnimBlueprint_C_ExecuteUbergraph_Allosaurus_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
