// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Pelagornis_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Pelagornis.DinoTamedInventoryComponent_Pelagornis_C.ExecuteUbergraph_DinoTamedInventoryComponent_Pelagornis
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Pelagornis_C::ExecuteUbergraph_DinoTamedInventoryComponent_Pelagornis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Pelagornis.DinoTamedInventoryComponent_Pelagornis_C.ExecuteUbergraph_DinoTamedInventoryComponent_Pelagornis");

	UDinoTamedInventoryComponent_Pelagornis_C_ExecuteUbergraph_DinoTamedInventoryComponent_Pelagornis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
