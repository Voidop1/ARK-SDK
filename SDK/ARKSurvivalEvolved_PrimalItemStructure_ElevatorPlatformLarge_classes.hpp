#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_ElevatorPlatformLarge_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_ElevatorPlatformLarge.PrimalItemStructure_ElevatorPlatformLarge_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemStructure_ElevatorPlatformLarge_C : public UPrimalItemStructure_ElevatorPlatformBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_ElevatorPlatformLarge.PrimalItemStructure_ElevatorPlatformLarge_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_ElevatorPlatformLarge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
