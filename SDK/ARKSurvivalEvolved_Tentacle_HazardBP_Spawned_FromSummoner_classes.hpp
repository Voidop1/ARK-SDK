#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Tentacle_HazardBP_Spawned_FromSummoner_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Tentacle_HazardBP_Spawned_FromSummoner.Tentacle_HazardBP_Spawned_FromSummoner_C
// 0x0008 (0x15E8 - 0x15E0)
class ATentacle_HazardBP_Spawned_FromSummoner_C : public ATentacle_HazardBP_Spawned_C
{
public:
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x15E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tentacle_HazardBP_Spawned_FromSummoner.Tentacle_HazardBP_Spawned_FromSummoner_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Tentacle_HazardBP_Spawned_FromSummoner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
