// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DungBeetle_Character_BP_Aberrant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DungBeetle_Character_BP_Aberrant.DungBeetle_Character_BP_Aberrant_C.UserConstructionScript
// ()

void ADungBeetle_Character_BP_Aberrant_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungBeetle_Character_BP_Aberrant.DungBeetle_Character_BP_Aberrant_C.UserConstructionScript");

	ADungBeetle_Character_BP_Aberrant_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DungBeetle_Character_BP_Aberrant.DungBeetle_Character_BP_Aberrant_C.ExecuteUbergraph_DungBeetle_Character_BP_Aberrant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADungBeetle_Character_BP_Aberrant_C::ExecuteUbergraph_DungBeetle_Character_BP_Aberrant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungBeetle_Character_BP_Aberrant.DungBeetle_Character_BP_Aberrant_C.ExecuteUbergraph_DungBeetle_Character_BP_Aberrant");

	ADungBeetle_Character_BP_Aberrant_C_ExecuteUbergraph_DungBeetle_Character_BP_Aberrant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
