#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemDye_Slate_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemDye_Slate.PrimalItemDye_Slate_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemDye_Slate_C : public UPrimalItemDyeGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemDye_Slate.PrimalItemDye_Slate_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemDye_Slate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
