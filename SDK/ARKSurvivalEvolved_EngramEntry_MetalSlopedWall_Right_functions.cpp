// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_MetalSlopedWall_Right_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_MetalSlopedWall_Right.EngramEntry_MetalSlopedWall_Right_C.ExecuteUbergraph_EngramEntry_MetalSlopedWall_Right
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_MetalSlopedWall_Right_C::ExecuteUbergraph_EngramEntry_MetalSlopedWall_Right(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_MetalSlopedWall_Right.EngramEntry_MetalSlopedWall_Right_C.ExecuteUbergraph_EngramEntry_MetalSlopedWall_Right");

	UEngramEntry_MetalSlopedWall_Right_C_ExecuteUbergraph_EngramEntry_MetalSlopedWall_Right_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
