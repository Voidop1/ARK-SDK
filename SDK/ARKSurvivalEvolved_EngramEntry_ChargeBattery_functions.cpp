// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_ChargeBattery_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_ChargeBattery.EngramEntry_ChargeBattery_C.ExecuteUbergraph_EngramEntry_ChargeBattery
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_ChargeBattery_C::ExecuteUbergraph_EngramEntry_ChargeBattery(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_ChargeBattery.EngramEntry_ChargeBattery_C.ExecuteUbergraph_EngramEntry_ChargeBattery");

	UEngramEntry_ChargeBattery_C_ExecuteUbergraph_EngramEntry_ChargeBattery_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
