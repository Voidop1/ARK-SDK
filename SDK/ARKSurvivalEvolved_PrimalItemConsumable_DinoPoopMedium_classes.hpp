#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_DinoPoopMedium_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_DinoPoopMedium.PrimalItemConsumable_DinoPoopMedium_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemConsumable_DinoPoopMedium_C : public UPrimalItemConsumablePoop_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_DinoPoopMedium.PrimalItemConsumable_DinoPoopMedium_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_DinoPoopMedium(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
