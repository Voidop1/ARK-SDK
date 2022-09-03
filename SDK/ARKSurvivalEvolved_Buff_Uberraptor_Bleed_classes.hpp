#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Uberraptor_Bleed_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Uberraptor_Bleed.Buff_Uberraptor_Bleed_C
// 0x001A (0x0992 - 0x0978)
class ABuff_Uberraptor_Bleed_C : public ABuff_Gnashed_C
{
public:
	double                                             TimeLastDamageOverTime;                                   // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamagePerSecond;                                          // 0x0980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageMultStatMultiplier;                                 // 0x0984(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDamageMultiplierStat;                                  // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PercentOfMaxHealthAsDamagePerSecond;                      // 0x098C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CachedPreventHurtAnim;                                    // 0x0990(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugModeStacking;                                        // 0x0991(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Uberraptor_Bleed.Buff_Uberraptor_Bleed_C");
		return ptr;
	}


	bool BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser);
	void CalculateDoTDamage(float TimeSinceLastDoT, float* Damage);
	void BuffTickServer(float* DeltaTime);
	void STATIC_Do_Damage_Over_TimeFn(double LastDotTime);
	float STATIC_BPAdjustStatusValueModification(class UPrimalCharacterStatusComponent** ForComponent, TEnumAsByte<EPrimalCharacterStatusValue>* ValueType, float* InAmount, class UClass** DamageTypeClass, bool* bManualModification);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Uberraptor_Bleed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
