#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnlockEmote_Zombie_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_UnlockEmote_Zombie.PrimalItemConsumable_UnlockEmote_Zombie_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemConsumable_UnlockEmote_Zombie_C : public UPrimalItemConsumableGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_UnlockEmote_Zombie.PrimalItemConsumable_UnlockEmote_Zombie_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Zombie(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
