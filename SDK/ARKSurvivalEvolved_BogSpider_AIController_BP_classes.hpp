#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BogSpider_AIController_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BogSpider_AIController_BP.BogSpider_AIController_BP_C
// 0x0000 (0x0919 - 0x0919)
class ABogSpider_AIController_BP_C : public ADino_AIController_BP_Climber_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BogSpider_AIController_BP.BogSpider_AIController_BP_C");
		return ptr;
	}


	void BPNotifyTargetSet();
	void UserConstructionScript();
	void ExecuteUbergraph_BogSpider_AIController_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
