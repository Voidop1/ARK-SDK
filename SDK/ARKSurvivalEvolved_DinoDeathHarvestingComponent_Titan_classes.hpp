#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_Titan_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDeathHarvestingComponent_Titan.DinoDeathHarvestingComponent_Titan_C
// 0x0000 (0x0240 - 0x0240)
class UDinoDeathHarvestingComponent_Titan_C : public UDinoDeathHarvestingComponent_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_Titan.DinoDeathHarvestingComponent_Titan_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDeathHarvestingComponent_Titan(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
