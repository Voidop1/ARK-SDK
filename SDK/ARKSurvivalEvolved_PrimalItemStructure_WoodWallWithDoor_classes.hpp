#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_WoodWallWithDoor_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_WoodWallWithDoor.PrimalItemStructure_WoodWallWithDoor_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemStructure_WoodWallWithDoor_C : public UPrimalItemStructure_BaseWallWithDoor_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_WoodWallWithDoor.PrimalItemStructure_WoodWallWithDoor_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_WoodWallWithDoor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
