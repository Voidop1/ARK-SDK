// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Herbivore_Tiny_Achatina_Sleeping_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Herbivore_Tiny_Achatina_Sleeping.DinoSettings_Herbivore_Tiny_Achatina_Sleeping_C.ExecuteUbergraph_DinoSettings_Herbivore_Tiny_Achatina_Sleeping
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Herbivore_Tiny_Achatina_Sleeping_C::ExecuteUbergraph_DinoSettings_Herbivore_Tiny_Achatina_Sleeping(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Herbivore_Tiny_Achatina_Sleeping.DinoSettings_Herbivore_Tiny_Achatina_Sleeping_C.ExecuteUbergraph_DinoSettings_Herbivore_Tiny_Achatina_Sleeping");

	UDinoSettings_Herbivore_Tiny_Achatina_Sleeping_C_ExecuteUbergraph_DinoSettings_Herbivore_Tiny_Achatina_Sleeping_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
