// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Diplodocus_Character_BP_Aberrant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Diplodocus_Character_BP_Aberrant.Diplodocus_Character_BP_Aberrant_C.UserConstructionScript
// ()

void ADiplodocus_Character_BP_Aberrant_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Diplodocus_Character_BP_Aberrant.Diplodocus_Character_BP_Aberrant_C.UserConstructionScript");

	ADiplodocus_Character_BP_Aberrant_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Diplodocus_Character_BP_Aberrant.Diplodocus_Character_BP_Aberrant_C.ExecuteUbergraph_Diplodocus_Character_BP_Aberrant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADiplodocus_Character_BP_Aberrant_C::ExecuteUbergraph_Diplodocus_Character_BP_Aberrant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Diplodocus_Character_BP_Aberrant.Diplodocus_Character_BP_Aberrant_C.ExecuteUbergraph_Diplodocus_Character_BP_Aberrant");

	ADiplodocus_Character_BP_Aberrant_C_ExecuteUbergraph_Diplodocus_Character_BP_Aberrant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
