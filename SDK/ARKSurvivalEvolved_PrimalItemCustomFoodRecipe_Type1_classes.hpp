#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCustomFoodRecipe_Type1_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemCustomFoodRecipe_Type1.PrimalItemCustomFoodRecipe_Type1_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemCustomFoodRecipe_Type1_C : public UPrimalItemCustomFoodRecipe_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemCustomFoodRecipe_Type1.PrimalItemCustomFoodRecipe_Type1_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemCustomFoodRecipe_Type1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
