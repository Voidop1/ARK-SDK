#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ValentinePants_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_ValentinePants.PrimalItemSkin_ValentinePants_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemSkin_ValentinePants_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_ValentinePants.PrimalItemSkin_ValentinePants_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_ValentinePants(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
