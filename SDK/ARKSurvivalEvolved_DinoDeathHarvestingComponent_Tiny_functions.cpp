// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_Tiny_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoDeathHarvestingComponent_Tiny.DinoDeathHarvestingComponent_Tiny_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoDeathHarvestingComponent_Tiny_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Tiny.DinoDeathHarvestingComponent_Tiny_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny");

	UDinoDeathHarvestingComponent_Tiny_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
