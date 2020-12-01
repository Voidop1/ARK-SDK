#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Sheep_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Sheep_Character_BP.Sheep_Character_BP_C
// 0x0080 (0x2108 - 0x2088)
class ASheep_Character_BP_C : public ADino_Character_BP_Haircuttable_C
{
public:
	class UDinoCharacterStatusComponent_BP_Sheep_C*    DinoCharacterStatus_BP_Sheep_C1;                          // 0x2088(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             LastTimeSheared;                                          // 0x2090(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              TimeIntervalForFullWool;                                  // 0x2098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReduceWoolPercentagePerCut;                               // 0x209C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GiveWoolItemsForFullPercent;                              // 0x20A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ARKTransferWoolPercentage;                                // 0x20A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              WoolParticleSpawnOffset;                                  // 0x20A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x20AC(0x0004) MISSED OFFSET
	class UParticleSystem*                             WoolParticle;                                             // 0x20B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WoolInterpSpeed;                                          // 0x20B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WoolInterpCurrentPercentage;                              // 0x20BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              ValidSlaughterWeaponClasses;                              // 0x20C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x20D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x20D1(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_AtLoc;                                 // 0x20D4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x20E0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                CallFunc_GetDinoColor_ReturnValue;                        // 0x20EC(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x20FC(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue;              // 0x2100(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Sheep_Character_BP.Sheep_Character_BP_C");
		return ptr;
	}


	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void Get_Time_Interval_for_Full_Wool(float* OutVal);
	void BPDinoARKDownloadedBegin();
	void BPDinoPrepareForARKUploading();
	void SetWoolPercentage(float NewPercentage);
	void DoHaircut(class AShooterCharacter** FromPlayer);
	void BPDinoPostBeginPlay();
	void BPUnstasis();
	void UpdateWoolMaterial();
	void BPTimerNonDedicated();
	void GetWoolPercentage(float* OutPercent);
	void UserConstructionScript();
	void DoSpawnHairParticles(const struct FVector& AtLoc);
	void ExecuteUbergraph_Sheep_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
