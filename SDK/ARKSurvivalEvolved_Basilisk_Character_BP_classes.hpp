#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Basilisk_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Basilisk_Character_BP.Basilisk_Character_BP_C
// 0x06A8 (0x2840 - 0x2198)
class ABasilisk_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UParticleSystemComponent*                    UndergroundMovement_VFX;                                  // 0x2198(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             UndergroundMovement_SFX;                                  // 0x21A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      tail;                                                     // 0x21A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        BuriedMound;                                              // 0x21B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_Basilisk_C* DinoCharacterStatus_BP_Basilisk_C1;                       // 0x21B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MoundTimeline_Alpha_6D87F8494629362AA3ECB889B53B46A5;     // 0x21C0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    MoundTimeline__Direction_6D87F8494629362AA3ECB889B53B46A5;// 0x21C4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x21C5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          MoundTimeline;                                            // 0x21C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_Alpha_F7A1BDD84C98E5ADF618348B90FD3BE0;        // 0x21D0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_F7A1BDD84C98E5ADF618348B90FD3BE0;   // 0x21D4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x21D5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x21D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EggCheckRadius;                                           // 0x21E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EggDinoAffinityInputMin;                                  // 0x21E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EggDinoAffinityInputMax;                                  // 0x21E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EggTamingAffinityReturnedMin;                             // 0x21EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EggTamingAffinityReturnedMax;                             // 0x21F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoodToGetPerEggWhileTaming;                               // 0x21F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             LastTimeRecievedAffinity;                                 // 0x21F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EggCheckAfterAffinityCooldown;                            // 0x2200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x2204(0x0004) MISSED OFFSET
	class ADroppedItemEgg*                             EggReference;                                             // 0x2208(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayedFoundEggAnim;                                       // 0x2210(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x2211(0x0007) MISSED OFFSET
	class UClass*                                      EggFilterClass;                                           // 0x2218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldPlayEggFoundStartle;                                // 0x2220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x2221(0x0007) MISSED OFFSET
	double                                             LastDiveTime;                                             // 0x2228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isUnderground;                                            // 0x2230(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               bShouldAllowAmbushBury;                                   // 0x2231(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x2232(0x0002) MISSED OFFSET
	struct FRotator                                    currentVFXRotation;                                       // 0x2234(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      UndergroundCameraShake;                                   // 0x2240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DiveInParticleOffset;                                     // 0x2248(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DiveOutParticleOffset;                                    // 0x2254(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                DiveInAnimation;                                          // 0x2260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                DiveOutAnimation;                                         // 0x2268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             StartNextAmbushingTime;                                   // 0x2270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                DiveIdleAnimation;                                        // 0x2278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastUndergroundStaminaLossTime;                           // 0x2280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UndergroundStaminaCost;                                   // 0x2288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsAmbushing;                                             // 0x228C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x228D(0x0003) MISSED OFFSET
	float                                              AmbushingDuration;                                        // 0x2290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AmbushingDurationMin;                                     // 0x2294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AmbushingDurationMax;                                     // 0x2298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OutGroundDurationMin;                                     // 0x229C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OutGroundDurationMax;                                     // 0x22A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnburyCheckDistance;                                      // 0x22A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UndergroundStaminaLossInterval;                           // 0x22A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x22AC(0x0004) MISSED OFFSET
	TArray<class UClass*>                              UnburyDamageTypes;                                        // 0x22B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              RidingUndergroundOxygenCost;                              // 0x22C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x22C4(0x0004) MISSED OFFSET
	class UClass*                                      RidersBuriedBuff;                                         // 0x22C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ActAsShieldWhileBuried;                                   // 0x22D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseExtraAbilities;                                       // 0x22D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x22D2(0x0002) MISSED OFFSET
	struct FVector                                     BuriedFloatingHUDOffset;                                  // 0x22D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BuriedTPVCameraOffset;                                    // 0x22E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BuriedTPVCameraOffsetMultiplier;                          // 0x22EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PreventDiveIn;                                            // 0x22F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x22F9(0x0003) MISSED OFFSET
	float                                              EggEatDistance;                                           // 0x22FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DiveCooldown;                                             // 0x2300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EggSeekingAfterUnburyTime;                                // 0x2304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeAfterHadTargetRemainUnburied;                         // 0x2308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TameIneffectivenessSeekingUnburied;                       // 0x230C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TameIneffectivenessBuried;                                // 0x2310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x2314(0x0004) MISSED OFFSET
	double                                             LastTameIneffectivenessTime;                              // 0x2318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TameIneffectivenessCooldown;                              // 0x2320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealthPercentRequiredToEatEgg;                            // 0x2324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastHadTargetTime;                                        // 0x2328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TamingAffinityDecreaseByDamagePercent;                    // 0x2330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EggSeekingTimeAfterDamageTaken;                           // 0x2334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BuriedMoundEndPoint;                                      // 0x2338(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    BuriedMoundRotation;                                      // 0x2344(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BuriedMoundOffsetZ;                                       // 0x2350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BuriedMoundTargetVisibility;                              // 0x2354(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x2355(0x0003) MISSED OFFSET
	float                                              TameIneffectivenessTameAffinityReductionMultiplier;       // 0x2358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x235C(0x0004) MISSED OFFSET
	TArray<class UClass*>                              BuffsPreventDiving;                                       // 0x2360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TamedDiveInCooldown;                                      // 0x2370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x2374(0x0004) MISSED OFFSET
	class AShooterCharacter*                           StoredRiderRef;                                           // 0x2378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x2380(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue2;                // 0x2381(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue3;                // 0x2382(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x1];                                       // 0x2383(0x0001) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x2384(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x2388(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x238C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x238D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable2;                             // 0x238E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable3;                             // 0x238F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable2;                       // 0x2390(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x2391(0x0007) MISSED OFFSET
	TArray<class UAnimMontage*>                        K2Node_MakeArray_Array;                                   // 0x2398(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_IsAnimationPlaying_Result;                       // 0x23A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x23A9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x23AA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x1];                                       // 0x23AB(0x0001) MISSED OFFSET
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x23AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable3;                       // 0x23B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x7];                                       // 0x23B1(0x0007) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x23B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_ReturnValue;                         // 0x23C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x23C1(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x23C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable4;                       // 0x23C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x23C9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable4;                             // 0x23CA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x5];                                       // 0x23CB(0x0005) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x23D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoAIController*                     K2Node_DynamicCast_AsPrimalDinoAIController;              // 0x23D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x23E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x23E1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x23E2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x1];                                       // 0x23E3(0x0001) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x23E4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EPathFollowingRequestResult>           CallFunc_MoveToLocation_ReturnValue;                      // 0x23F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x23F1(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue2;                         // 0x23F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue3;                  // 0x23F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x7];                                       // 0x23F9(0x0007) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue2;                      // 0x2400(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue3;                      // 0x2408(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoAIController*                     K2Node_DynamicCast_AsPrimalDinoAIController2;             // 0x2410(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x2418(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x7];                                       // 0x2419(0x0007) MISSED OFFSET
	class APrimalDinoAIController*                     K2Node_DynamicCast_AsPrimalDinoAIController3;             // 0x2420(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x2428(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x2429(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_IsTimerActive_ReturnValue;                    // 0x242A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x1];                                       // 0x242B(0x0001) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x242C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x2438(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x2439(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue3;                // 0x243C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x2448(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue;                               // 0x2454(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue4;                      // 0x2458(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue;             // 0x2460(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsA_ReturnValue;                               // 0x2461(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x2];                                       // 0x2462(0x0002) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue3;                         // 0x2464(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x2468(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x7];                                       // 0x2469(0x0007) MISSED OFFSET
	class UObject*                                     CallFunc_GetClassDefaultObject_ReturnValue;               // 0x2470(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x2478(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x2480(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x7];                                       // 0x2481(0x0007) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x2488(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x2490(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x2491(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x2];                                       // 0x2492(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue4;                // 0x2494(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue;              // 0x24A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue5;                            // 0x24A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x7];                                       // 0x24A9(0x0007) MISSED OFFSET
	class UMaterialInterface*                          CallFunc_Array_Get_Item;                                  // 0x24B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    K2Node_DynamicCast_AsMaterialInstanceDynamic;             // 0x24B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast6_CastSuccess;                          // 0x24C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue4;                  // 0x24C1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x24C2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable5;                       // 0x24C3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue;               // 0x24C4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue5;                // 0x24D0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable6;                       // 0x24DC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x3];                                       // 0x24DD(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_Conv_VectorToRotator_ReturnValue;                // 0x24E0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_orientToGround;                        // 0x24EC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x3];                                       // 0x24ED(0x0003) MISSED OFFSET
	class UParticleSystem*                             K2Node_CustomEvent_ParticleSystem;                        // 0x24F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_OffsetFromRoot;                        // 0x24F8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable5;                             // 0x2504(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x3];                                       // 0x2505(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_OffSetFromBuriedGroundLocation_ReturnValue;      // 0x2508(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData35[0x4];                                       // 0x2514(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue2;             // 0x2518(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue2;              // 0x2520(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x252C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x2538(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	struct FHitResult                                  CallFunc_LineTraceSingle_NEW_OutHit;                      // 0x2548(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_LineTraceSingle_NEW_ReturnValue;                 // 0x25D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData36[0x3];                                       // 0x25D1(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_BreakHitResult_Location;                         // 0x25D4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_Normal;                           // 0x25E0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactPoint;                      // 0x25EC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactNormal;                     // 0x25F8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData37[0x4];                                       // 0x2604(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           CallFunc_BreakHitResult_PhysMat;                          // 0x2608(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BreakHitResult_HitActor;                         // 0x2610(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         CallFunc_BreakHitResult_HitComponent;                     // 0x2618(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_BreakHitResult_HitBoneName;                      // 0x2620(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BreakHitResult_HitItem;                          // 0x2628(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BreakHitResult_BlockingHit;                      // 0x262C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData38[0x3];                                       // 0x262D(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_MakeRotFromXZ_ReturnValue;                       // 0x2630(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRotFromZ_ReturnValue;                        // 0x263C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x2648(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue2;                   // 0x2654(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_Conv_VectorToRotator_ReturnValue2;               // 0x2660(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_NormalizedDeltaRotator_ReturnValue;              // 0x266C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable6;                             // 0x2678(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_NewHidden;                             // 0x2679(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData39[0x2];                                       // 0x267A(0x0002) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x267C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue2;                        // 0x2680(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData40[0xC];                                       // 0x2684(0x000C) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_GetBuriedMoundTransform_ReturnValue;             // 0x2690(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	struct UObject_FTransform                          CallFunc_GetBuriedMoundTransform_ReturnValue2;            // 0x26C0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable7;                       // 0x26F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x26F1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x26F2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData41[0x1];                                       // 0x26F3(0x0001) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue3;                        // 0x26F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetTimelineLength_ReturnValue;                   // 0x26F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_BuriedState;                           // 0x26FC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData42[0x3];                                       // 0x26FD(0x0003) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue4;                        // 0x2700(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable7;                             // 0x2704(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x2705(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData43[0x2];                                       // 0x2706(0x0002) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x2708(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue2;               // 0x2710(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x2718(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsTamed_ReturnValue;                           // 0x271C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData44[0x3];                                       // 0x271D(0x0003) MISSED OFFSET
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x2720(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData45[0xC];                                       // 0x2724(0x000C) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_GetBuriedMoundTransform_ReturnValue3;            // 0x2730(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x2760(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x2761(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x2762(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData46[0x5];                                       // 0x2763(0x0005) MISSED OFFSET
	TArray<class APrimalCharacter*>                    CallFunc_GetPassengers_ReturnValue;                       // 0x2768(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x2778(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable2;                          // 0x277C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x2780(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData47[0x7];                                       // 0x2781(0x0007) MISSED OFFSET
	class APrimalCharacter*                            CallFunc_Array_Get_Item2;                                 // 0x2788(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue2;                         // 0x2790(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData48[0x4];                                       // 0x2794(0x0004) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue;                       // 0x2798(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_NewVisibility;                         // 0x27A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanDive_ReturnValue;                             // 0x27A1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanDive_ReturnValue2;                            // 0x27A2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData49[0x5];                                       // 0x27A3(0x0005) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue3;               // 0x27A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class APawn*>                               CallFunc_GetTrueBasedPawns_ReturnValue;                   // 0x27B0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x27C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData50[0x4];                                       // 0x27C4(0x0004) MISSED OFFSET
	class APawn*                                       CallFunc_Array_Get_Item3;                                 // 0x27C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue2;                        // 0x27D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData51[0x7];                                       // 0x27D1(0x0007) MISSED OFFSET
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x27D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast7_CastSuccess;                          // 0x27E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsTamed_ReturnValue2;                          // 0x27E1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x27E2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x27E3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x27E4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DoAttack_ReturnValue;                            // 0x27E5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue3;                           // 0x27E6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData52[0x1];                                       // 0x27E7(0x0001) MISSED OFFSET
	struct FVector                                     CallFunc_SelectVector_ReturnValue;                        // 0x27E8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimMontage_ReturnValue;                     // 0x27F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimMontage*                                K2Node_Select_ReturnValue;                                // 0x27F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select_CmpSuccess;                                 // 0x2800(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData53[0x3];                                       // 0x2801(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimMontage_ReturnValue2;                    // 0x2804(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_NewUnderground;                        // 0x2808(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_ImmediateOut;                          // 0x2809(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData54[0x6];                                       // 0x280A(0x0006) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore2_RefProperty; // 0x2810(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore3_RefProperty; // 0x2820(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore4_RefProperty; // 0x2830(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Basilisk_Character_BP.Basilisk_Character_BP_C");
		return ptr;
	}


	bool STATIC_BPPreventAttachments(class UObject** ForItem);
	void RefreshTamedAttachments();
	bool AllowPlayMontage(class UAnimMontage** AnimMontage);
	bool BPIsHidden();
	void BPPostLoadedFromSaveGame();
	bool SetTurretMode(bool* Enabled);
	bool BPPreventFirstPerson();
	void SetSaddleHidden(bool NewHidden);
	void BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem);
	void UpdatedTracedMoundTransform();
	struct UObject_FTransform GetBuriedMoundTransform(float HeightAlpha);
	void Check_Unburied_State_and_Add_Hungry_Ineffectiveness(class FString* State);
	void AddTameIneffectiveness(float IneffectivenessValue);
	void SetTailMoundVisibility(bool bNewVisibility);
	void FindNearbyEggs(bool StartSeeking);
	void BPSetupTamed(bool* bWasJustTamed);
	bool BPHandleControllerInitiatedAttack(int* AttackIndex);
	void BPOnTamedProcessOrder(class APrimalCharacter** FromCharacter, TEnumAsByte<EDinoTamedOrder>* OrderType, bool* bForce, class AActor** enemyTarget, bool* orderNotExecuted);
	void PlayUndergroundEffectPulse();
	void TraceForInvalidGround();
	void BPNotifySetRider(class AShooterCharacter** RiderSetting);
	void MeshVisibility(class USceneComponent* InputComponent, float Value);
	void BPNotifyClearPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex);
	void BPNotifyClearRider(class AShooterCharacter** RiderClearing);
	void Set_Visibility_Of_Riding_and_Dino_Meshes(bool NewVisibility);
	struct FVector OffSetFromBuriedGroundLocation(const struct FVector& InputPin);
	void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode);
	bool SharedCanAttack(int AttackIndex);
	bool BlueprintCanRiderAttack(int* AttackIndex);
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	TArray<struct FMultiUseEntry> STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	float TimeSinceLastAttackForIndex(int index);
	void ShouldUnbury(bool* Result);
	void ShouldBury(bool* Result);
	void BPTimerServer();
	void Update_Bury_Mound(bool ShouldShow);
	void UpdateUndergroundTrail();
	void BPTimerNonDedicated();
	void InitializeDive();
	void IsAnimationPlaying(TArray<class UAnimMontage*>* Montages, bool* Result);
	void DetachChildren();
	void DiveEnd();
	void DiveSetup();
	void DiveIdle();
	bool CanDive(bool DiveInCheck);
	float Get_Scaled_Affinity_Based_on_Dino(float InputAffinity);
	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void TameIfAllowed();
	void ResetEggSeeking();
	void IncreaseTamingAffinity(class AShooterCharacter* TamingPlayer, float ValueForTaming);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void MoundTimeline__FinishedFunc();
	void MoundTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void BPUnstasis();
	void BPDinoPostBeginPlay();
	void AnimNotify_Death();
	void BP_OnJumpPressed();
	void Proxy_RefreshAttachments();
	void MoveToEgg();
	void StartUpdateEggSeekTimer();
	void StartEggMoving();
	void RestartBrain();
	void UpdateSeekEgg();
	void EatEgg();
	void DissolveEggItem();
	void PlayGroundParticleVFX(bool orientToGround, class UParticleSystem* ParticleSystem, const struct FVector& OffsetFromRoot);
	void Multi_SetSaddleHidden(bool NewHidden);
	void ForceUpdateBuriedMound();
	void ResetInterp(bool BuriedState);
	void PlayGatedFXPulse();
	void StartMoundVisual(bool NewVisibility);
	void Multi_ForceDiveEnd();
	void ForceDiveEnd();
	void StartBuried();
	void Multi_DiveIn();
	void Attempt_Dive_In();
	void AttemptDiveOut();
	void Multi_DiveOut();
	void AnimNotify_EndBury();
	void AnimNotify_StartBury();
	void Server_TryDive(bool NewUnderground, bool ImmediateOut);
	void ExecuteUbergraph_Basilisk_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
