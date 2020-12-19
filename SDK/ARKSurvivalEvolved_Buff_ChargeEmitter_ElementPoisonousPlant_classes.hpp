#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeEmitter_ElementPoisonousPlant_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ChargeEmitter_ElementPoisonousPlant.Buff_ChargeEmitter_ElementPoisonousPlant_C
// 0x0000 (0x0B70 - 0x0B70)
class ABuff_ChargeEmitter_ElementPoisonousPlant_C : public ABuff_ChargeEmitter_Foliage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ChargeEmitter_ElementPoisonousPlant.Buff_ChargeEmitter_ElementPoisonousPlant_C");
		return ptr;
	}


	void GetEmitterActor(class AActor** emitterActor);
	void ShouldEnableTimers(bool* tickServer, bool* TickClient);
	void GetActorsToIgnoreOnRaycast(class AActor** emitterActor, TArray<class AActor*>* ActorsToIgnore);
	void CanEmitCharge(bool* canEmit);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_ChargeEmitter_ElementPoisonousPlant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
