// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LionfishMaxDash_CameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LionfishMaxDash_CameraShake.LionfishMaxDash_CameraShake_C.ExecuteUbergraph_LionfishMaxDash_CameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULionfishMaxDash_CameraShake_C::ExecuteUbergraph_LionfishMaxDash_CameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishMaxDash_CameraShake.LionfishMaxDash_CameraShake_C.ExecuteUbergraph_LionfishMaxDash_CameraShake");

	ULionfishMaxDash_CameraShake_C_ExecuteUbergraph_LionfishMaxDash_CameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
