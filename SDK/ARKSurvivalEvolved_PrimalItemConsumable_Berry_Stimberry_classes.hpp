#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Berry_Stimberry_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Berry_Stimberry.PrimalItemConsumable_Berry_Stimberry_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemConsumable_Berry_Stimberry_C : public UPrimalItemConsumable_Berry_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Berry_Stimberry.PrimalItemConsumable_Berry_Stimberry_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Berry_Stimberry(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
