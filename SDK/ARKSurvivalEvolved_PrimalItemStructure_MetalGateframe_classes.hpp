#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_MetalGateframe_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_MetalGateframe.PrimalItemStructure_MetalGateframe_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemStructure_MetalGateframe_C : public UPrimalItemStructure_BaseWallWithDoor_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_MetalGateframe.PrimalItemStructure_MetalGateframe_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_MetalGateframe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
