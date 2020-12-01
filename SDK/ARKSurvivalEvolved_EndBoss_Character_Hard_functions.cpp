// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndBoss_Character_Hard_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EndBoss_Character_Hard.EndBoss_Character_Hard_C.UserConstructionScript
// ()

void AEndBoss_Character_Hard_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character_Hard.EndBoss_Character_Hard_C.UserConstructionScript");

	AEndBoss_Character_Hard_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character_Hard.EndBoss_Character_Hard_C.ExecuteUbergraph_EndBoss_Character_Hard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_Hard_C::ExecuteUbergraph_EndBoss_Character_Hard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character_Hard.EndBoss_Character_Hard_C.ExecuteUbergraph_EndBoss_Character_Hard");

	AEndBoss_Character_Hard_C_ExecuteUbergraph_EndBoss_Character_Hard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
