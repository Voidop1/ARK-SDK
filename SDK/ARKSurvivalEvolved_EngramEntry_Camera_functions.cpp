// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Camera_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Camera.EngramEntry_Camera_C.ExecuteUbergraph_EngramEntry_Camera
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Camera_C::ExecuteUbergraph_EngramEntry_Camera(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Camera.EngramEntry_Camera_C.ExecuteUbergraph_EngramEntry_Camera");

	UEngramEntry_Camera_C_ExecuteUbergraph_EngramEntry_Camera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
