#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_GenericFishing_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_GenericFishing.PrimalInventoryBP_GenericFishing_C
// 0x0000 (0x0538 - 0x0538)
class UPrimalInventoryBP_GenericFishing_C : public UPrimalInventoryComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_GenericFishing.PrimalInventoryBP_GenericFishing_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_GenericFishing(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
