// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DungBeetle_Anim_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DungBeetle_Anim_BP.DungBeetle_Anim_BP_C.ExecuteUbergraph_DungBeetle_Anim_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDungBeetle_Anim_BP_C::ExecuteUbergraph_DungBeetle_Anim_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungBeetle_Anim_BP.DungBeetle_Anim_BP_C.ExecuteUbergraph_DungBeetle_Anim_BP");

	UDungBeetle_Anim_BP_C_ExecuteUbergraph_DungBeetle_Anim_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
