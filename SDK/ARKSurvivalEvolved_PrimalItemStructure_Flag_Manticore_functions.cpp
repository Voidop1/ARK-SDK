// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Flag_Manticore_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Flag_Manticore.PrimalItemStructure_Flag_Manticore_C.ExecuteUbergraph_PrimalItemStructure_Flag_Manticore
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Flag_Manticore_C::ExecuteUbergraph_PrimalItemStructure_Flag_Manticore(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Flag_Manticore.PrimalItemStructure_Flag_Manticore_C.ExecuteUbergraph_PrimalItemStructure_Flag_Manticore");

	UPrimalItemStructure_Flag_Manticore_C_ExecuteUbergraph_PrimalItemStructure_Flag_Manticore_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
