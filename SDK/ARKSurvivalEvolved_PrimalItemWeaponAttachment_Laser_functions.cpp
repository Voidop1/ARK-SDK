// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemWeaponAttachment_Laser_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemWeaponAttachment_Laser.PrimalItemWeaponAttachment_Laser_C.ExecuteUbergraph_PrimalItemWeaponAttachment_Laser
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemWeaponAttachment_Laser_C::ExecuteUbergraph_PrimalItemWeaponAttachment_Laser(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemWeaponAttachment_Laser.PrimalItemWeaponAttachment_Laser_C.ExecuteUbergraph_PrimalItemWeaponAttachment_Laser");

	UPrimalItemWeaponAttachment_Laser_C_ExecuteUbergraph_PrimalItemWeaponAttachment_Laser_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
