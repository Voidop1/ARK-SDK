#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Veggie_Longrass_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Veggie_Longrass.PrimalItemConsumable_Veggie_Longrass_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemConsumable_Veggie_Longrass_C : public UPrimalItemConsumable_Veggie_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Veggie_Longrass.PrimalItemConsumable_Veggie_Longrass_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Veggie_Longrass(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
