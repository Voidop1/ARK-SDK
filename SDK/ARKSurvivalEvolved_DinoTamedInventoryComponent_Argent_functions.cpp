// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Argent_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Argent.DinoTamedInventoryComponent_Argent_C.ExecuteUbergraph_DinoTamedInventoryComponent_Argent
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Argent_C::ExecuteUbergraph_DinoTamedInventoryComponent_Argent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Argent.DinoTamedInventoryComponent_Argent_C.ExecuteUbergraph_DinoTamedInventoryComponent_Argent");

	UDinoTamedInventoryComponent_Argent_C_ExecuteUbergraph_DinoTamedInventoryComponent_Argent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
