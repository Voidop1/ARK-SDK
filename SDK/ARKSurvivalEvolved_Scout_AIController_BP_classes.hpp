#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Scout_AIController_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Scout_AIController_BP.Scout_AIController_BP_C
// 0x0237 (0x0B20 - 0x08E9)
class AScout_AIController_BP_C : public ADino_AIController_BP_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x08E9(0x0003) MISSED OFFSET
	float                                              AggressorMinRadius;                                       // 0x08EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FindAggressorsRadius;                                     // 0x08F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AggressorsLastAggressionTimeThreshold;                    // 0x08F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      FoundAggressor;                                           // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              FindAggressorsIntervalSeconds;                            // 0x0900(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SetTargetTimeSeconds;                                     // 0x0904(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetExpireTimeSeconds;                                  // 0x0908(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x090C(0x0004) MISSED OFFSET
	double                                             TargetLastAggressionTimeSeconds;                          // 0x0910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TargetAggressionWeight;                                   // 0x0918(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ShooterCharacterAggressionToleranceWeight;                // 0x091C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyingOffsetVariation;                                    // 0x0920(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistToTargetForLowestRunningSpeed;                        // 0x0924(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxRotationRateWhenAggroed;                               // 0x0928(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TargetIsMoving;                                           // 0x092C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x092D(0x0003) MISSED OFFSET
	float                                              FollowTargetDelayTimeSeconds;                             // 0x0930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InitialTargeting;                                         // 0x0934(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_K2_IsTimerActive_ReturnValue;                    // 0x0935(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0936(0x0002) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x0940(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x094C(0x0004) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x0950(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_ServerOctreeOverlapActors_ReturnValue;           // 0x0958(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	double                                             CallFunc_Subtract_DoubleDouble_ReturnValue;               // 0x0968(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x0970(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_DoubleToFloat_ReturnValue;                  // 0x0974(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue2;               // 0x0978(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x0980(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0981(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x0984(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0990(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0991(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaSeconds;                                // 0x0994(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APawn*                                       CallFunc_GetControllerPawn_ReturnValue;                   // 0x0998(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APawn*                                       CallFunc_GetControllerPawn_ReturnValue2;                  // 0x09A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue3;               // 0x09A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x09B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x09B4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x09B5(0x0003) MISSED OFFSET
	float                                              CallFunc_Get_Last_Aggression_Time_LastAttackTime;         // 0x09B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMax_ReturnValue;                                // 0x09BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_Conv_FloatToDouble_ReturnValue;                  // 0x09C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_Subtract_DoubleFloat_ReturnValue;                // 0x09C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_DoubleToFloat_ReturnValue2;                 // 0x09D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x09D4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDead_ReturnValue;                              // 0x09D5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x09D6(0x0002) MISSED OFFSET
	class AActor*                                      CallFunc_Array_Get_Item;                                  // 0x09D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x09E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue3;                // 0x09E4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x09F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x09F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x09F9(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x09FC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAlliedWithOtherTeam_ReturnValue;               // 0x0A08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0A09(0x0003) MISSED OFFSET
	float                                              CallFunc_VSize_ReturnValue;                               // 0x0A0C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0A10(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue2;                    // 0x0A11(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x0A12(0x0002) MISSED OFFSET
	float                                              CallFunc_Get_Last_Aggression_Time_LastAttackTime2;        // 0x0A14(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_Conv_FloatToDouble_ReturnValue2;                 // 0x0A18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x0A20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0A21(0x0007) MISSED OFFSET
	double                                             CallFunc_Subtract_DoubleDouble_ReturnValue2;              // 0x0A28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0A30(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0A31(0x0003) MISSED OFFSET
	float                                              CallFunc_Conv_DoubleToFloat_ReturnValue3;                 // 0x0A34(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x0A38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0A40(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue3;                    // 0x0A41(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAlliedWithOtherTeam_ReturnValue2;              // 0x0A42(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x0A43(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0A44(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0A45(0x0003) MISSED OFFSET
	float                                              CallFunc_Get_Last_Aggression_Time_LastAttackTime3;        // 0x0A48(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x0A4C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x0A4D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x0A4E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x0A4F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x0A50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x0A51(0x0007) MISSED OFFSET
	class AScout_Character_BP_C*                       CallFunc_GetScout_Scout;                                  // 0x0A58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AScout_Character_BP_C*                       CallFunc_GetScout_Scout2;                                 // 0x0A60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_ServerIs_Tracked_Target_IsTrackedTarget;         // 0x0A68(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue;               // 0x0A69(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_ServerIs_Tracked_Target_IsTrackedTarget2;        // 0x0A6A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x1];                                       // 0x0A6B(0x0001) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue2;                         // 0x0A6C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_DoubleToFloat_ReturnValue4;                 // 0x0A70(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue4;                 // 0x0A74(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x0A75(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x0A78(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x0A84(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue2;               // 0x0A88(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue3;               // 0x0A94(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue4;               // 0x0AA0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x0AAC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue2;                   // 0x0AB8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x0AC4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x0AC5(0x0003) MISSED OFFSET
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x0AC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x0AD0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsMoving_ReturnValue;                            // 0x0AD1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_BoolBool_ReturnValue;                   // 0x0AD2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x5];                                       // 0x0AD3(0x0005) MISSED OFFSET
	class APawn*                                       CallFunc_K2_GetPawn_ReturnValue;                          // 0x0AD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter2;                    // 0x0AE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x0AE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x7];                                       // 0x0AE9(0x0007) MISSED OFFSET
	class APawn*                                       CallFunc_K2_GetPawn_ReturnValue2;                         // 0x0AF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APawn*                                       CallFunc_K2_GetPawn_ReturnValue3;                         // 0x0AF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter3;                    // 0x0B00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x0B08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x7];                                       // 0x0B09(0x0007) MISSED OFFSET
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter4;                    // 0x0B10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast6_CastSuccess;                          // 0x0B18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x0B19(0x0003) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x0B1C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Scout_AIController_BP.Scout_AIController_BP_C");
		return ptr;
	}


	void IsTargetIsAimedAtScout(class AActor* Target, bool* Result);
	void ComputeStatModifierFromTargetDistance(float* Out);
	void GetDistanceToTarget(float* Result);
	void GetCustomModifierRotationRate(float* Out);
	void GetCustomModifierMaxSpeed(float* Out);
	void ScoutDamaged(class AActor* DamageCauser);
	void ScoutSetTarget(class AActor* Target, int InitialAggressionWeight);
	void CanLaunchTrackerAtTarget(bool* Result);
	void DropTarget();
	void GetScout(class AScout_Character_BP_C** Scout);
	void Get_Last_Aggression_Time(class AActor* Actor, float* LastAttackTime);
	void BPSetupFindTarget();
	float BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void FindAggressors();
	void ReceiveBeginPlay();
	void ResumeFollowTarget();
	void ExecuteUbergraph_Scout_AIController_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
