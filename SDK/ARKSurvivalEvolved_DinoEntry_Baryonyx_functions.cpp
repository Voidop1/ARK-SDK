// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Baryonyx_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Baryonyx.DinoEntry_Baryonyx_C.ExecuteUbergraph_DinoEntry_Baryonyx
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Baryonyx_C::ExecuteUbergraph_DinoEntry_Baryonyx(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Baryonyx.DinoEntry_Baryonyx_C.ExecuteUbergraph_DinoEntry_Baryonyx");

	UDinoEntry_Baryonyx_C_ExecuteUbergraph_DinoEntry_Baryonyx_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
