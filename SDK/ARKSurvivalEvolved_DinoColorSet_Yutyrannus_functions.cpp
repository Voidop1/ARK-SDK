// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Yutyrannus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Yutyrannus.DinoColorSet_Yutyrannus_C.ExecuteUbergraph_DinoColorSet_Yutyrannus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Yutyrannus_C::ExecuteUbergraph_DinoColorSet_Yutyrannus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Yutyrannus.DinoColorSet_Yutyrannus_C.ExecuteUbergraph_DinoColorSet_Yutyrannus");

	UDinoColorSet_Yutyrannus_C_ExecuteUbergraph_DinoColorSet_Yutyrannus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
