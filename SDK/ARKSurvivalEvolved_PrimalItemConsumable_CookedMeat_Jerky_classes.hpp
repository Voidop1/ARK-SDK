#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_CookedMeat_Jerky_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_CookedMeat_Jerky.PrimalItemConsumable_CookedMeat_Jerky_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemConsumable_CookedMeat_Jerky_C : public UPrimalItemConsumable_CookedMeat_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_CookedMeat_Jerky.PrimalItemConsumable_CookedMeat_Jerky_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_CookedMeat_Jerky(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
