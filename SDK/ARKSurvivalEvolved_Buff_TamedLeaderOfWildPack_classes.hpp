#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TamedLeaderOfWildPack_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C
// 0x0280 (0x0B20 - 0x08A0)
class ABuff_TamedLeaderOfWildPack_C : public APrimalBuff
{
public:
	TArray<class APrimalDinoCharacter*>                followers;                                                // 0x08A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                maxFollowers;                                             // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              stoppingDistanceForFollowers;                             // 0x08B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      oldStoppingDistances;                                     // 0x08B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class APrimalDinoCharacter*>                enhancedWildCarnos;                                       // 0x08C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class APrimalDinoCharacter*                        K2Node_CustomEvent_follower3;                             // 0x08D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x08E0(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              K2Node_CustomEvent_Damage2;                               // 0x08F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x08F4(0x0004) MISSED OFFSET
	class UDamageType*                                 K2Node_CustomEvent_DamageType2;                           // 0x08F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 K2Node_CustomEvent_InstigatedBy2;                         // 0x0900(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_CustomEvent_DamageCauser2;                         // 0x0908(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x0910(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0918(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x0919(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x091A(0x0002) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate2;                    // 0x091C(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData02[0x4];                                       // 0x092C(0x0004) MISSED OFFSET
	class AGameMode*                                   CallFunc_GetGameMode_ReturnValue;                         // 0x0930(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UClass*                                      CallFunc_GetObjectClass_ReturnValue;                      // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterGameMode*                            K2Node_DynamicCast_AsShooterGameMode;                     // 0x0940(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0948(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0949(0x0007) MISSED OFFSET
	class UClass*                                      K2Node_ClassDynamicCast_AsPrimalBuff;                     // 0x0950(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ClassDynamicCast_CastSuccess;                      // 0x0958(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_AreTribesAllied_ReturnValue;                     // 0x0959(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x095A(0x0006) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_CustomEvent_follower2;                             // 0x0960(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0968(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0969(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x096A(0x0006) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_CustomEvent_follower;                              // 0x0970(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x0978(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0979(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x097A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x097B(0x0001) MISSED OFFSET
	int                                                K2Node_CustomEvent_numParticlesAlreadySpawned;            // 0x097C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x0980(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0xF];                                       // 0x0981(0x000F) MISSED OFFSET
	struct FTransform                                  CallFunc_GetSocketTransform_ReturnValue;                  // 0x0990(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Location;                         // 0x09C0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_BreakTransform_Rotation;                         // 0x09CC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Scale;                            // 0x09D8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x09E4(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue;                // 0x09E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x09F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Subtract_IntInt_ReturnValue;                     // 0x09F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Subtract_IntInt_ReturnValue2;                    // 0x09F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x09FC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x09FD(0x0003) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x0A00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x0A08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0A09(0x0007) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x0A10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x0A18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x0A19(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_DynamicCast_AsPlayerController;                    // 0x0A20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x0A28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0A29(0x0007) MISSED OFFSET
	class AHUD*                                        CallFunc_GetHUD_ReturnValue;                              // 0x0A30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue3;                  // 0x0A38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x0A39(0x0007) MISSED OFFSET
	class AShooterHUD*                                 K2Node_DynamicCast_AsShooterHUD;                          // 0x0A40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x0A48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x0A49(0x0007) MISSED OFFSET
	class APrimalCharacter*                            K2Node_CustomEvent_character;                             // 0x0A50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Damage;                                // 0x0A58(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x0A5C(0x0004) MISSED OFFSET
	class AController*                                 K2Node_CustomEvent_InstigatedBy;                          // 0x0A60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_HitLocation;                           // 0x0A68(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x0A74(0x0004) MISSED OFFSET
	class UPrimitiveComponent*                         K2Node_CustomEvent_FHitComponent;                         // 0x0A78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_CustomEvent_BoneName;                              // 0x0A80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_ShotFromDirection;                     // 0x0A88(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x0A94(0x0004) MISSED OFFSET
	class UDamageType*                                 K2Node_CustomEvent_DamageType;                            // 0x0A98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_CustomEvent_DamageCauser;                          // 0x0AA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter2;                // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast6_CastSuccess;                          // 0x0AB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x7];                                       // 0x0AB1(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwner_ReturnValue;                            // 0x0AB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsFollower_characterIsFollower;                  // 0x0AC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x7];                                       // 0x0AC1(0x0007) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter3;                // 0x0AC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast7_CastSuccess;                          // 0x0AD0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x0AD1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x6];                                       // 0x0AD2(0x0006) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue2;                      // 0x0AD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UClass*                                      CallFunc_GetObjectClass_ReturnValue2;                     // 0x0AE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoAIController*                     K2Node_DynamicCast_AsPrimalDinoAIController;              // 0x0AE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast8_CastSuccess;                          // 0x0AF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsTamed_ReturnValue;                           // 0x0AF1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x6];                                       // 0x0AF2(0x0006) MISSED OFFSET
	class UClass*                                      CallFunc_GetObjectClass_ReturnValue3;                     // 0x0AF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x0B00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ClassClass_ReturnValue;               // 0x0B01(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x2];                                       // 0x0B02(0x0002) MISSED OFFSET
	int                                                Temp_int_Variable;                                        // 0x0B04(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Add_ReturnValue;                           // 0x0B08(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x4];                                       // 0x0B0C(0x0004) MISSED OFFSET
	class APrimalDinoCharacter*                        CallFunc_Array_Get_Item;                                  // 0x0B10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_IntInt_ReturnValue;                    // 0x0B18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                                       // 0x0B19(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x0B1C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C");
		return ptr;
	}


	float BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo);
	bool BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	void IsFollower(class APrimalDinoCharacter* DinoCharacter, bool* characterIsFollower);
	void OrderFollowersAttack_Target(class AActor* characterToAttack, class APrimalCharacter* FromCharacter, bool canOverrideTarget, bool showArrowEffect);
	void ReceiveDestroyed();
	void OnBuffDeactivated();
	void BPDeactivated(class AActor** ForInstigator);
	void OnAddedFollower(class APrimalDinoCharacter* newFollower, int index);
	void InitializeBuff(int maxNumFollowers, TArray<class UClass*>* classesCanFollow);
	void TryAdd_Follower(class APrimalDinoCharacter* newFollower, bool* followerAdded);
	bool PreventActorTargeting(class AActor** ByActor);
	void UserConstructionScript();
	void LinkDamage(class APrimalDinoCharacter* follower);
	void OnTakeAnyDamage_Event(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void SpawnParticlesForFollowers_Multicast(class APrimalDinoCharacter* follower);
	void SpawnParticlesForFollowers(class APrimalDinoCharacter* follower);
	void SpawnInitialParticles(int numParticlesAlreadySpawned);
	void ReceiveBeginPlay();
	void LinkDamageTaken(class APrimalCharacter* Character);
	void TakePointDamageSignature__DelegateSignature_Event(float Damage, class AController* InstigatedBy, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class UDamageType* DamageType, class AActor* DamageCauser);
	void ExecuteUbergraph_Buff_TamedLeaderOfWildPack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
