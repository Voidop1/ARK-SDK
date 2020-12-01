#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MekSelfHeal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_MekSelfHeal.Buff_MekSelfHeal_C
// 0x0014 (0x08B4 - 0x08A0)
class ABuff_MekSelfHeal_C : public ABuff_Base_C
{
public:
	class UClass*                                      ItemTypeToRemoveOnBuffActivation;                         // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PercentOfMaxHealthToRestore;                              // 0x08A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HealthAtBuffStart;                                        // 0x08AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CalculatedHealthPerSecond;                                // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_MekSelfHeal.Buff_MekSelfHeal_C");
		return ptr;
	}


	void GetMekFuelLevel(float* FuelLevel);
	void BPActivated(class AActor** ForInstigator);
	void BuffPostAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo);
	void BuffTickServer(float* DeltaTime);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_MekSelfHeal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
