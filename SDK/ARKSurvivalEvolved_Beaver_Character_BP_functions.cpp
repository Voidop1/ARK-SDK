// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Beaver_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Beaver_Character_BP.Beaver_Character_BP_C.UserConstructionScript
// ()

void ABeaver_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Beaver_Character_BP.Beaver_Character_BP_C.UserConstructionScript");

	ABeaver_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Beaver_Character_BP.Beaver_Character_BP_C.BPUnstasis
// ()

void ABeaver_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Beaver_Character_BP.Beaver_Character_BP_C.BPUnstasis");

	ABeaver_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Beaver_Character_BP.Beaver_Character_BP_C.ExecuteUbergraph_Beaver_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABeaver_Character_BP_C::ExecuteUbergraph_Beaver_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Beaver_Character_BP.Beaver_Character_BP_C.ExecuteUbergraph_Beaver_Character_BP");

	ABeaver_Character_BP_C_ExecuteUbergraph_Beaver_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
