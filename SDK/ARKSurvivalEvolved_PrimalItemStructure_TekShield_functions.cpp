// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TekShield_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TekShield.PrimalItemStructure_TekShield_C.ExecuteUbergraph_PrimalItemStructure_TekShield
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TekShield_C::ExecuteUbergraph_PrimalItemStructure_TekShield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TekShield.PrimalItemStructure_TekShield_C.ExecuteUbergraph_PrimalItemStructure_TekShield");

	UPrimalItemStructure_TekShield_C_ExecuteUbergraph_PrimalItemStructure_TekShield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
