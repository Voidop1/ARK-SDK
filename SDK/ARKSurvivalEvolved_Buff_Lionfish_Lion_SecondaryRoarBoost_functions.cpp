// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Lionfish_Lion_SecondaryRoarBoost_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Lionfish_Lion_SecondaryRoarBoost.Buff_Lionfish_Lion_SecondaryRoarBoost_C.UserConstructionScript
// ()

void ABuff_Lionfish_Lion_SecondaryRoarBoost_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_SecondaryRoarBoost.Buff_Lionfish_Lion_SecondaryRoarBoost_C.UserConstructionScript");

	ABuff_Lionfish_Lion_SecondaryRoarBoost_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lionfish_Lion_SecondaryRoarBoost.Buff_Lionfish_Lion_SecondaryRoarBoost_C.ExecuteUbergraph_Buff_Lionfish_Lion_SecondaryRoarBoost
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Lionfish_Lion_SecondaryRoarBoost_C::ExecuteUbergraph_Buff_Lionfish_Lion_SecondaryRoarBoost(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lionfish_Lion_SecondaryRoarBoost.Buff_Lionfish_Lion_SecondaryRoarBoost_C.ExecuteUbergraph_Buff_Lionfish_Lion_SecondaryRoarBoost");

	ABuff_Lionfish_Lion_SecondaryRoarBoost_C_ExecuteUbergraph_Buff_Lionfish_Lion_SecondaryRoarBoost_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
