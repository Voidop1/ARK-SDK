#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Soup_BattleTartare_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Soup_BattleTartare.PrimalItemConsumable_Soup_BattleTartare_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemConsumable_Soup_BattleTartare_C : public UPrimalItemConsumableEatable_BuffingSoup_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Soup_BattleTartare.PrimalItemConsumable_Soup_BattleTartare_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Soup_BattleTartare(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
