#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_ElevatorPlatfromMedium_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_ElevatorPlatfromMedium.PrimalItemStructure_ElevatorPlatfromMedium_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemStructure_ElevatorPlatfromMedium_C : public UPrimalItemStructure_ElevatorPlatformBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_ElevatorPlatfromMedium.PrimalItemStructure_ElevatorPlatfromMedium_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_ElevatorPlatfromMedium(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
