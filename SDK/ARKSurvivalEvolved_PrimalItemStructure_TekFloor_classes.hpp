#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TekFloor_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_TekFloor.PrimalItemStructure_TekFloor_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemStructure_TekFloor_C : public UPrimalItemStructure_BaseFloor_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_TekFloor.PrimalItemStructure_TekFloor_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_TekFloor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
