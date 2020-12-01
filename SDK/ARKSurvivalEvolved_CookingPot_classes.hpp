#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CookingPot_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CookingPot.CookingPot_C
// 0x0010 (0x0DC8 - 0x0DB8)
class ACookingPot_C : public ABaseFuelBurner_C
{
public:
	class UPrimalInventoryBP_CookingPot_C*             PrimalInventoryBP_CookingPot_C1;                          // 0x0DB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ActivatedEmitter;                                         // 0x0DC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CookingPot.CookingPot_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_CookingPot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
