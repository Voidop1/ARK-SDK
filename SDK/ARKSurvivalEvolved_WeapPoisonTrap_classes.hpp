#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapPoisonTrap_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapPoisonTrap.WeapPoisonTrap_C
// 0x0000 (0x0DA8 - 0x0DA8)
class AWeapPoisonTrap_C : public AShooterWeapon_Placer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapPoisonTrap.WeapPoisonTrap_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapPoisonTrap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
