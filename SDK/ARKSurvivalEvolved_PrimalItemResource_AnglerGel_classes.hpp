#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_AnglerGel_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_AnglerGel.PrimalItemResource_AnglerGel_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemResource_AnglerGel_C : public UPrimalItemResourceGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_AnglerGel.PrimalItemResource_AnglerGel_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResource_AnglerGel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
