#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_DinoBunnyHat_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_DinoBunnyHat.PrimalItemSkin_DinoBunnyHat_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemSkin_DinoBunnyHat_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_DinoBunnyHat.PrimalItemSkin_DinoBunnyHat_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_DinoBunnyHat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
