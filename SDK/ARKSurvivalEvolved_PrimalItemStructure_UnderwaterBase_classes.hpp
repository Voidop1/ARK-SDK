#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_UnderwaterBase_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_UnderwaterBase.PrimalItemStructure_UnderwaterBase_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemStructure_UnderwaterBase_C : public UPrimalItemStructureGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_UnderwaterBase.PrimalItemStructure_UnderwaterBase_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_UnderwaterBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
