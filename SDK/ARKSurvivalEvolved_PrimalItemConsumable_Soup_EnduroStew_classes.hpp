#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Soup_EnduroStew_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Soup_EnduroStew.PrimalItemConsumable_Soup_EnduroStew_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemConsumable_Soup_EnduroStew_C : public UPrimalItemConsumableEatable_BuffingSoup_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Soup_EnduroStew.PrimalItemConsumable_Soup_EnduroStew_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Soup_EnduroStew(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
