#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Furniture_WoodBench_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_Furniture_WoodBench.PrimalItemStructure_Furniture_WoodBench_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemStructure_Furniture_WoodBench_C : public UPrimalItemStructure_BaseSign_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_Furniture_WoodBench.PrimalItemStructure_Furniture_WoodBench_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_Furniture_WoodBench(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
