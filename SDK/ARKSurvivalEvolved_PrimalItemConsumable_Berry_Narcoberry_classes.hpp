#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Berry_Narcoberry_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Berry_Narcoberry.PrimalItemConsumable_Berry_Narcoberry_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemConsumable_Berry_Narcoberry_C : public UPrimalItemConsumable_Berry_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Berry_Narcoberry.PrimalItemConsumable_Berry_Narcoberry_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Berry_Narcoberry(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
