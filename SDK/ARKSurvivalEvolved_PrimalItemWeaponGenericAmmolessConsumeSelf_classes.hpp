#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemWeaponGenericAmmolessConsumeSelf_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemWeaponGenericAmmolessConsumeSelf.PrimalItemWeaponGenericAmmolessConsumeSelf_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemWeaponGenericAmmolessConsumeSelf_C : public UPrimalItemWeaponGenericNoStats_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemWeaponGenericAmmolessConsumeSelf.PrimalItemWeaponGenericAmmolessConsumeSelf_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemWeaponGenericAmmolessConsumeSelf(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
