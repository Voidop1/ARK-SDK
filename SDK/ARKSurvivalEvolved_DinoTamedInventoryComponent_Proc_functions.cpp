// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Proc_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Proc.DinoTamedInventoryComponent_Proc_C.ExecuteUbergraph_DinoTamedInventoryComponent_Proc
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Proc_C::ExecuteUbergraph_DinoTamedInventoryComponent_Proc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Proc.DinoTamedInventoryComponent_Proc_C.ExecuteUbergraph_DinoTamedInventoryComponent_Proc");

	UDinoTamedInventoryComponent_Proc_C_ExecuteUbergraph_DinoTamedInventoryComponent_Proc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
