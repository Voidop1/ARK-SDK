#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_WaterJarRefill_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_WaterJarRefill.PrimalItemConsumable_WaterJarRefill_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemConsumable_WaterJarRefill_C : public UPrimalItemConsumable_WaterJarCraftable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_WaterJarRefill.PrimalItemConsumable_WaterJarRefill_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_WaterJarRefill(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
