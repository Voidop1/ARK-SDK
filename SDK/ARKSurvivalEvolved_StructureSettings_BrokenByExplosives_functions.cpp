// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureSettings_BrokenByExplosives_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureSettings_BrokenByExplosives.StructureSettings_BrokenByExplosives_C.ExecuteUbergraph_StructureSettings_BrokenByExplosives
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStructureSettings_BrokenByExplosives_C::ExecuteUbergraph_StructureSettings_BrokenByExplosives(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureSettings_BrokenByExplosives.StructureSettings_BrokenByExplosives_C.ExecuteUbergraph_StructureSettings_BrokenByExplosives");

	UStructureSettings_BrokenByExplosives_C_ExecuteUbergraph_StructureSettings_BrokenByExplosives_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
