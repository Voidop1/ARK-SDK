#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCustomDrinkRecipe_Type1_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemCustomDrinkRecipe_Type1.PrimalItemCustomDrinkRecipe_Type1_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemCustomDrinkRecipe_Type1_C : public UPrimalItemCustomDrinkRecipe_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemCustomDrinkRecipe_Type1.PrimalItemCustomDrinkRecipe_Type1_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemCustomDrinkRecipe_Type1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
