// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_AdvancedSniperBullet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemAmmo_AdvancedSniperBullet.PrimalItemAmmo_AdvancedSniperBullet_C.ExecuteUbergraph_PrimalItemAmmo_AdvancedSniperBullet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemAmmo_AdvancedSniperBullet_C::ExecuteUbergraph_PrimalItemAmmo_AdvancedSniperBullet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_AdvancedSniperBullet.PrimalItemAmmo_AdvancedSniperBullet_C.ExecuteUbergraph_PrimalItemAmmo_AdvancedSniperBullet");

	UPrimalItemAmmo_AdvancedSniperBullet_C_ExecuteUbergraph_PrimalItemAmmo_AdvancedSniperBullet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
