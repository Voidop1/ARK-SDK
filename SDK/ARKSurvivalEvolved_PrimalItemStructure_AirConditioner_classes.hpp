#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_AirConditioner_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_AirConditioner.PrimalItemStructure_AirConditioner_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemStructure_AirConditioner_C : public UPrimalItemStructureGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_AirConditioner.PrimalItemStructure_AirConditioner_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_AirConditioner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
