#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Troodon_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Troodon_Character_BP.Troodon_Character_BP_C
// 0x01F4 (0x238C - 0x2198)
class ATroodon_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UParticleSystemComponent*                    NightEyes;                                                // 0x2198(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_Troodon_C*  DinoCharacterStatus_BP_Troodon_C1;                        // 0x21A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TamingAffinityMultiplier;                                 // 0x21A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseTamingAffinity;                                       // 0x21AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GiveAlliesXPRange;                                        // 0x21B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RatioOfXPOfKilledToGiveToAllies;                          // 0x21B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DayTimeTargetingRange;                                    // 0x21B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NightTimeTargetingRange;                                  // 0x21BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DayNotifyNeighborRange;                                   // 0x21C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NightNotifyNeighborRange;                                 // 0x21C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FoodToGetPerKillWhileTaming;                              // 0x21C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EyesActivated;                                            // 0x21CC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x21CD(0x0003) MISSED OFFSET
	float                                              CooldownBeforeRecievingAffinity;                          // 0x21D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x21D4(0x0004) MISSED OFFSET
	double                                             LastTimeRecievedAffinity;                                 // 0x21D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TargetHasARider;                                          // 0x21E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TargetHasATarget;                                         // 0x21E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStopMovementOnLanding;                                   // 0x21E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x21E3(0x0001) MISSED OFFSET
	float                                              DayTimeAffinityMultiplier;                                // 0x21E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector>                             SonarPointsType0;                                         // 0x21E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             SonarPointsType1;                                         // 0x21F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             SonarPointsType2;                                         // 0x2208(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<double>                                     SonarDisplayTimes;                                        // 0x2218(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UTexture*>                            SonarIcons;                                               // 0x2228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             SonarPointsType3;                                         // 0x2238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              SonarViewRange;                                           // 0x2248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SonarDisplayTimeLength;                                   // 0x224C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentSonarRangeLevel;                                   // 0x2250(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                CurrentSonarCooldownLevel;                                // 0x2254(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              BaseSonarRange;                                           // 0x2258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SonarRangePerLevel;                                       // 0x225C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseSonarCooldown;                                        // 0x2260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SonarCooldownReductionPerLevel;                           // 0x2264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimeSonarWasUsed;                                     // 0x2268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SonarMode;                                                // 0x2270(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x2274(0x0004) MISSED OFFSET
	TArray<struct FVector>                             SonarPointsType4;                                         // 0x2278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              FireBuffsToFleeFrom;                                      // 0x2288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              CloseToLightSourceDistance;                               // 0x2298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x229C(0x0004) MISSED OFFSET
	TArray<class UClass*>                              LightStructuresToAvoid;                                   // 0x22A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             WanderPoints;                                             // 0x22B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      DistanceToLightSources;                                   // 0x22C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              FlashLightWeapons;                                        // 0x22D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x22E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x22E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ADayCycleManager*                            CallFunc_GetDayCycleManager_ReturnValue;                  // 0x22F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ATroodon_AIController_BP_C*                  K2Node_DynamicCast_AsTroodon_AIController_BP_C;           // 0x22F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x2300(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDaytime_ReturnValue;                           // 0x2301(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x2302(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x2303(0x0001) MISSED OFFSET
	int                                                K2Node_CustomEvent_SonarType;                             // 0x2304(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<struct FVector>                             K2Node_CustomEvent_SonarPoints;                           // 0x2308(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x2318(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x231C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchInteger_CmpSuccess;                          // 0x231D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x231E(0x0002) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x2320(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x2328(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x2329(0x0007) MISSED OFFSET
	class APlayerController*                           CallFunc_GetPlayerController_ReturnValue;                 // 0x2330(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x2338(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetCameraLocation_ReturnValue;                   // 0x2344(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x2350(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x2351(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x2354(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue;                               // 0x2360(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x2364(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x2365(0x0003) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue2;               // 0x2368(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x2370(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x2371(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x2372(0x0002) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x2374(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x2378(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	float                                              CallFunc_Array_Add_NewItem_RefProperty;                   // 0x2388(0x0004) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Troodon_Character_BP.Troodon_Character_BP_C");
		return ptr;
	}


	bool OverrideFinalWanderLocation(struct FVector* outVec);
	void IsLocationInLight(const struct FVector& Location, bool* IsInLight, float* Distance, struct FVector* LocationOfLightSource);
	void OverrideRandomWanderLocation(struct FVector* originalDestination, struct FVector* inVec);
	bool BPShouldForceFlee();
	float BPGetAddForwardVelocityOnJump();
	void LevelUpSonar(int Selector);
	void BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	void DoSonar(int SonarType);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void DrawSonarPoints(int SonarType, class AShooterHUD* TheHUD, TArray<struct FVector>* SonarPoints);
	void BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale);
	void BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode);
	float STATIC_BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse);
	void STATIC_OnJumped();
	void OnRep_EyesActivated();
	void BPTimerServer();
	void BPKilledSomethingEvent(class APrimalCharacter** killedTarget);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void NetDisplaySonar(int SonarType, TArray<struct FVector>* SonarPoints);
	void Net_Update_Last_Time_Sonar_Used();
	void AnimNotify_DoSonar();
	void ExecuteUbergraph_Troodon_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
