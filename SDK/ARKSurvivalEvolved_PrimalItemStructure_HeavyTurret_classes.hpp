#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_HeavyTurret_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_HeavyTurret.PrimalItemStructure_HeavyTurret_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemStructure_HeavyTurret_C : public UPrimalItemStructureGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_HeavyTurret.PrimalItemStructure_HeavyTurret_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_HeavyTurret(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
