#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_RockDrake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Egg_RockDrake.PrimalItemConsumable_Egg_RockDrake_C
// 0x0000 (0x0B00 - 0x0B00)
class UPrimalItemConsumable_Egg_RockDrake_C : public UPrimalItemConsumable_Egg_Special_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Egg_RockDrake.PrimalItemConsumable_Egg_RockDrake_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Egg_RockDrake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
