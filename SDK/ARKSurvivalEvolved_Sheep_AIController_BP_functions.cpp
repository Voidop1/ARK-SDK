// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Sheep_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Sheep_AIController_BP.Sheep_AIController_BP_C.UserConstructionScript
// ()

void ASheep_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sheep_AIController_BP.Sheep_AIController_BP_C.UserConstructionScript");

	ASheep_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sheep_AIController_BP.Sheep_AIController_BP_C.ExecuteUbergraph_Sheep_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASheep_AIController_BP_C::ExecuteUbergraph_Sheep_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sheep_AIController_BP.Sheep_AIController_BP_C.ExecuteUbergraph_Sheep_AIController_BP");

	ASheep_AIController_BP_C_ExecuteUbergraph_Sheep_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
