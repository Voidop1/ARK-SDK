// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Tapejara_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Tapejara.DinoTamedInventoryComponent_Tapejara_C.ExecuteUbergraph_DinoTamedInventoryComponent_Tapejara
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Tapejara_C::ExecuteUbergraph_DinoTamedInventoryComponent_Tapejara(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Tapejara.DinoTamedInventoryComponent_Tapejara_C.ExecuteUbergraph_DinoTamedInventoryComponent_Tapejara");

	UDinoTamedInventoryComponent_Tapejara_C_ExecuteUbergraph_DinoTamedInventoryComponent_Tapejara_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
