#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_MetalGateframe_Large_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_MetalGateframe_Large.PrimalItemStructure_MetalGateframe_Large_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemStructure_MetalGateframe_Large_C : public UPrimalItemStructure_BaseWallWithDoor_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_MetalGateframe_Large.PrimalItemStructure_MetalGateframe_Large_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_MetalGateframe_Large(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
