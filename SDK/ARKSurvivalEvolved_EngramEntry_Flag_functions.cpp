// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Flag_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Flag.EngramEntry_Flag_C.ExecuteUbergraph_EngramEntry_Flag
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Flag_C::ExecuteUbergraph_EngramEntry_Flag(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Flag.EngramEntry_Flag_C.ExecuteUbergraph_EngramEntry_Flag");

	UEngramEntry_Flag_C_ExecuteUbergraph_EngramEntry_Flag_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
