// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_Small_LessKeratin_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoDeathHarvestingComponent_Small_LessKeratin.DinoDeathHarvestingComponent_Small_LessKeratin_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Small_LessKeratin
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoDeathHarvestingComponent_Small_LessKeratin_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Small_LessKeratin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Small_LessKeratin.DinoDeathHarvestingComponent_Small_LessKeratin_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Small_LessKeratin");

	UDinoDeathHarvestingComponent_Small_LessKeratin_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Small_LessKeratin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
