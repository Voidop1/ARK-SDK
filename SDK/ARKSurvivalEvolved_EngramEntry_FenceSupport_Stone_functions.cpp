// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_FenceSupport_Stone_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_FenceSupport_Stone.EngramEntry_FenceSupport_Stone_C.ExecuteUbergraph_EngramEntry_FenceSupport_Stone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_FenceSupport_Stone_C::ExecuteUbergraph_EngramEntry_FenceSupport_Stone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_FenceSupport_Stone.EngramEntry_FenceSupport_Stone_C.ExecuteUbergraph_EngramEntry_FenceSupport_Stone");

	UEngramEntry_FenceSupport_Stone_C_ExecuteUbergraph_EngramEntry_FenceSupport_Stone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
