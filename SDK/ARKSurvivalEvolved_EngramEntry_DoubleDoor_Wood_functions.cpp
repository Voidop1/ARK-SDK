// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_DoubleDoor_Wood_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_DoubleDoor_Wood.EngramEntry_DoubleDoor_Wood_C.ExecuteUbergraph_EngramEntry_DoubleDoor_Wood
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_DoubleDoor_Wood_C::ExecuteUbergraph_EngramEntry_DoubleDoor_Wood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_DoubleDoor_Wood.EngramEntry_DoubleDoor_Wood_C.ExecuteUbergraph_EngramEntry_DoubleDoor_Wood");

	UEngramEntry_DoubleDoor_Wood_C_ExecuteUbergraph_EngramEntry_DoubleDoor_Wood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
