#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumablePoop_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumablePoop.PrimalItemConsumablePoop_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemConsumablePoop_C : public UPrimalItemConsumable_Fertilizer_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumablePoop.PrimalItemConsumablePoop_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumablePoop(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
