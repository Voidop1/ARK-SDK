#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_Gigant_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Egg_Gigant.PrimalItemConsumable_Egg_Gigant_C
// 0x0000 (0x0B00 - 0x0B00)
class UPrimalItemConsumable_Egg_Gigant_C : public UPrimalItemConsumable_Egg_XtraLarge_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Egg_Gigant.PrimalItemConsumable_Egg_Gigant_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Egg_Gigant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
