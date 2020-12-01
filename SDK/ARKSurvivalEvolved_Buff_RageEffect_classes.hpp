#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RageEffect_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_RageEffect.Buff_RageEffect_C
// 0x0034 (0x08D4 - 0x08A0)
class ABuff_RageEffect_C : public ABuff_Base_C
{
public:
	TArray<class UClass*>                              classesToEnrage;                                          // 0x08A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              foodThreshold;                                            // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x08B4(0x0004) MISSED OFFSET
	TArray<class UClass*>                              classesToNotEnrage;                                       // 0x08B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               affectsBigDinos;                                          // 0x08C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               affectTamedDinos;                                         // 0x08C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x08CA(0x0002) MISSED OFFSET
	float                                              aggroAmountToAdd;                                         // 0x08CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ForcedAggroDuration;                                      // 0x08D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_RageEffect.Buff_RageEffect_C");
		return ptr;
	}


	void CanEnrageActor(class AActor* Actor, bool* canEnrage);
	bool BPExcludeAoEActor(class AActor** ActorToConsider);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Buff_RageEffect(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
