#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_RecipeNote_StaminaSoup_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_RecipeNote_StaminaSoup.PrimalItem_RecipeNote_StaminaSoup_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItem_RecipeNote_StaminaSoup_C : public UPrimalItem_RecipeNote_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_RecipeNote_StaminaSoup.PrimalItem_RecipeNote_StaminaSoup_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_RecipeNote_StaminaSoup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
