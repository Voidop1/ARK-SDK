// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Microraptor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Microraptor.DinoTamedInventoryComponent_Microraptor_C.ExecuteUbergraph_DinoTamedInventoryComponent_Microraptor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Microraptor_C::ExecuteUbergraph_DinoTamedInventoryComponent_Microraptor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Microraptor.DinoTamedInventoryComponent_Microraptor_C.ExecuteUbergraph_DinoTamedInventoryComponent_Microraptor");

	UDinoTamedInventoryComponent_Microraptor_C_ExecuteUbergraph_DinoTamedInventoryComponent_Microraptor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
