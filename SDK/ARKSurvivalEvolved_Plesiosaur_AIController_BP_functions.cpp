// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Plesiosaur_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Plesiosaur_AIController_BP.Plesiosaur_AIController_BP_C.UserConstructionScript
// ()

void APlesiosaur_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Plesiosaur_AIController_BP.Plesiosaur_AIController_BP_C.UserConstructionScript");

	APlesiosaur_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Plesiosaur_AIController_BP.Plesiosaur_AIController_BP_C.ExecuteUbergraph_Plesiosaur_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APlesiosaur_AIController_BP_C::ExecuteUbergraph_Plesiosaur_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Plesiosaur_AIController_BP.Plesiosaur_AIController_BP_C.ExecuteUbergraph_Plesiosaur_AIController_BP");

	APlesiosaur_AIController_BP_C_ExecuteUbergraph_Plesiosaur_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
