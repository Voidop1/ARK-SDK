// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Giga_Rockwell_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Giga_Rockwell.DinoColorSet_Giga_Rockwell_C.ExecuteUbergraph_DinoColorSet_Giga_Rockwell
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Giga_Rockwell_C::ExecuteUbergraph_DinoColorSet_Giga_Rockwell(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Giga_Rockwell.DinoColorSet_Giga_Rockwell_C.ExecuteUbergraph_DinoColorSet_Giga_Rockwell");

	UDinoColorSet_Giga_Rockwell_C_ExecuteUbergraph_DinoColorSet_Giga_Rockwell_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
