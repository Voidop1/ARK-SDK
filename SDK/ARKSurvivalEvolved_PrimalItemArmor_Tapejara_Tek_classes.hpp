#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_Tapejara_Tek_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_Tapejara_Tek.PrimalItemArmor_Tapejara_Tek_C
// 0x0000 (0x0A34 - 0x0A34)
class UPrimalItemArmor_Tapejara_Tek_C : public UPrimalItemArmor_SaddleGeneric_Tek_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_Tapejara_Tek.PrimalItemArmor_Tapejara_Tek_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_Tapejara_Tek(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
