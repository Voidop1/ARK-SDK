// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_WallTorch_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_WallTorch.EngramEntry_WallTorch_C.ExecuteUbergraph_EngramEntry_WallTorch
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_WallTorch_C::ExecuteUbergraph_EngramEntry_WallTorch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_WallTorch.EngramEntry_WallTorch_C.ExecuteUbergraph_EngramEntry_WallTorch");

	UEngramEntry_WallTorch_C_ExecuteUbergraph_EngramEntry_WallTorch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
