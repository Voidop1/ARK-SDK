#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_DoubleDoorframe_Wood_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_DoubleDoorframe_Wood.PrimalItemStructure_DoubleDoorframe_Wood_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemStructure_DoubleDoorframe_Wood_C : public UPrimalItemStructure_BaseWallWithDoor_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_DoubleDoorframe_Wood.PrimalItemStructure_DoubleDoorframe_Wood_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_DoubleDoorframe_Wood(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
