#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_RecipeNote_Kibble_Troodon_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_RecipeNote_Kibble_Troodon.PrimalItem_RecipeNote_Kibble_Troodon_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItem_RecipeNote_Kibble_Troodon_C : public UPrimalItem_RecipeNote_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_RecipeNote_Kibble_Troodon.PrimalItem_RecipeNote_Kibble_Troodon_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Troodon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
