#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophyGenericParent_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemTrophyGenericParent.PrimalItemTrophyGenericParent_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemTrophyGenericParent_C : public UPrimalItem_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophyGenericParent.PrimalItemTrophyGenericParent_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemTrophyGenericParent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
