#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnlockEmote_Flex1_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_UnlockEmote_Flex1.PrimalItemConsumable_UnlockEmote_Flex1_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemConsumable_UnlockEmote_Flex1_C : public UPrimalItemConsumableGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_UnlockEmote_Flex1.PrimalItemConsumable_UnlockEmote_Flex1_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Flex1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
