// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SE_DinoSpawnEntriesSandworm_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SE_DinoSpawnEntriesSandworm.SE_DinoSpawnEntriesSandworm_C.ExecuteUbergraph_SE_DinoSpawnEntriesSandworm
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USE_DinoSpawnEntriesSandworm_C::ExecuteUbergraph_SE_DinoSpawnEntriesSandworm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SE_DinoSpawnEntriesSandworm.SE_DinoSpawnEntriesSandworm_C.ExecuteUbergraph_SE_DinoSpawnEntriesSandworm");

	USE_DinoSpawnEntriesSandworm_C_ExecuteUbergraph_SE_DinoSpawnEntriesSandworm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
