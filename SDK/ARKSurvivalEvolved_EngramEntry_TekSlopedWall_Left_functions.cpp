// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TekSlopedWall_Left_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TekSlopedWall_Left.EngramEntry_TekSlopedWall_Left_C.ExecuteUbergraph_EngramEntry_TekSlopedWall_Left
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TekSlopedWall_Left_C::ExecuteUbergraph_EngramEntry_TekSlopedWall_Left(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TekSlopedWall_Left.EngramEntry_TekSlopedWall_Left_C.ExecuteUbergraph_EngramEntry_TekSlopedWall_Left");

	UEngramEntry_TekSlopedWall_Left_C_ExecuteUbergraph_EngramEntry_TekSlopedWall_Left_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
