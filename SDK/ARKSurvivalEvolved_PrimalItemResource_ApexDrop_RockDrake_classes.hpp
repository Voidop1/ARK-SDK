#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_ApexDrop_RockDrake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_ApexDrop_RockDrake.PrimalItemResource_ApexDrop_RockDrake_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemResource_ApexDrop_RockDrake_C : public UPrimalItemResourceGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_ApexDrop_RockDrake.PrimalItemResource_ApexDrop_RockDrake_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResource_ApexDrop_RockDrake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
