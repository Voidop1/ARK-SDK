// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_Broodmother_Beta_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemTrophy_Broodmother_Beta.PrimalItemTrophy_Broodmother_Beta_C.ExecuteUbergraph_PrimalItemTrophy_Broodmother_Beta
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemTrophy_Broodmother_Beta_C::ExecuteUbergraph_PrimalItemTrophy_Broodmother_Beta(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemTrophy_Broodmother_Beta.PrimalItemTrophy_Broodmother_Beta_C.ExecuteUbergraph_PrimalItemTrophy_Broodmother_Beta");

	UPrimalItemTrophy_Broodmother_Beta_C_ExecuteUbergraph_PrimalItemTrophy_Broodmother_Beta_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
