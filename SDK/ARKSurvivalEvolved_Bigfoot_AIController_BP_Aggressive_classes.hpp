#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Bigfoot_AIController_BP_Aggressive_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Bigfoot_AIController_BP_Aggressive.Bigfoot_AIController_BP_Aggressive_C
// 0x0000 (0x08E9 - 0x08E9)
class ABigfoot_AIController_BP_Aggressive_C : public ABigfoot_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bigfoot_AIController_BP_Aggressive.Bigfoot_AIController_BP_Aggressive_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Bigfoot_AIController_BP_Aggressive(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
