#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_StonePipeIntersection_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_StonePipeIntersection.PrimalItemStructure_StonePipeIntersection_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemStructure_StonePipeIntersection_C : public UPrimalItemStructure_BaseStonePipe_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_StonePipeIntersection.PrimalItemStructure_StonePipeIntersection_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_StonePipeIntersection(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
