#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_Terrorbird_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Egg_Terrorbird.PrimalItemConsumable_Egg_Terrorbird_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemConsumable_Egg_Terrorbird_C : public UPrimalItemConsumable_Egg_Medium_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Egg_Terrorbird.PrimalItemConsumable_Egg_Terrorbird_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Egg_Terrorbird(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
