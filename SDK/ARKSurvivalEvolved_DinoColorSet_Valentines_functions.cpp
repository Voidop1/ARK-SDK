// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Valentines_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Valentines.DinoColorSet_Valentines_C.ExecuteUbergraph_DinoColorSet_Valentines
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Valentines_C::ExecuteUbergraph_DinoColorSet_Valentines(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Valentines.DinoColorSet_Valentines_C.ExecuteUbergraph_DinoColorSet_Valentines");

	UDinoColorSet_Valentines_C_ExecuteUbergraph_DinoColorSet_Valentines_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
