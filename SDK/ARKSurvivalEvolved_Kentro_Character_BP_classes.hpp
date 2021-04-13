#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Kentro_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Kentro_Character_BP.Kentro_Character_BP_C
// 0x0059 (0x21F1 - 0x2198)
class AKentro_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Kentro_C*   DinoCharacterStatus_BP_Kentro_C1;                         // 0x2198(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BasePercentDamageReturned;                                // 0x21A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AdditionalWeightPercentDamageReturned;                    // 0x21A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DinoTooLargeToDamageWeight;                               // 0x21A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x21AC(0x0004) MISSED OFFSET
	class UClass*                                      ReturnedDamageDmgType;                                    // 0x21B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GangCountExtraTargetingRange;                             // 0x21B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x21BC(0x0004) MISSED OFFSET
	class UClass*                                      BleedBuff;                                                // 0x21C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             GrabTime;                                                 // 0x21C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpaleDropAfterDuration;                                  // 0x21D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x21D4(0x0004) MISSED OFFSET
	class APrimalCharacter*                            K2Node_CustomEvent_ImpaledChar;                           // 0x21D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue;                       // 0x21E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x21E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x21F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Kentro_Character_BP.Kentro_Character_BP_C");
		return ptr;
	}


	void BPDidSetCarriedCharacter(class APrimalCharacter** PreviousCarriedCharacter);
	void BPDidClearCarriedCharacter(class APrimalCharacter** PreviousCarriedCharacter);
	void BPDoAttack(int* AttackIndex);
	bool BlueprintCanRiderAttack(int* AttackIndex);
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void BPSetupTamed(bool* bWasJustTamed);
	void BPTimerServer();
	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void UserConstructionScript();
	void Bleed(class APrimalCharacter* ImpaledChar);
	void PrepareToDrop();
	void ExecuteUbergraph_Kentro_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
