#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CompostBin_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CompostBin.CompostBin_C
// 0x0018 (0x0DF0 - 0x0DD8)
class ACompostBin_C : public AStructureItemContainerBaseBP_C
{
public:
	class UAudioComponent*                             Audio1;                                                   // 0x0DD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FliesParticles;                                           // 0x0DE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryBP_CompostBin_C*             PrimalInventoryBP_CompostBin_C1;                          // 0x0DE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CompostBin.CompostBin_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_CompostBin(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
