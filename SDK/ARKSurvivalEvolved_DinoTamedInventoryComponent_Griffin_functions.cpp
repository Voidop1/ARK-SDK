// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Griffin_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Griffin.DinoTamedInventoryComponent_Griffin_C.ExecuteUbergraph_DinoTamedInventoryComponent_Griffin
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Griffin_C::ExecuteUbergraph_DinoTamedInventoryComponent_Griffin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Griffin.DinoTamedInventoryComponent_Griffin_C.ExecuteUbergraph_DinoTamedInventoryComponent_Griffin");

	UDinoTamedInventoryComponent_Griffin_C_ExecuteUbergraph_DinoTamedInventoryComponent_Griffin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
