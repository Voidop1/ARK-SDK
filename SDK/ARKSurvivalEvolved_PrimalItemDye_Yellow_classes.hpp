#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemDye_Yellow_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemDye_Yellow.PrimalItemDye_Yellow_C
// 0x0000 (0x0A10 - 0x0A10)
class UPrimalItemDye_Yellow_C : public UPrimalItemDyeGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemDye_Yellow.PrimalItemDye_Yellow_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemDye_Yellow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
