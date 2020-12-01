#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapMachinedSniper_Laser_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapMachinedSniper_Laser.WeapMachinedSniper_Laser_C
// 0x0020 (0x0D98 - 0x0D78)
class AWeapMachinedSniper_Laser_C : public AWeapMachinedSniper_Scope_C
{
public:
	class UShooterLaserBeamComponent*                  FPVLaserBeam;                                             // 0x0D78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        _1pAttachmentLaser;                                       // 0x0D80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShooterLaserBeamComponent*                  TPVLaserBeam;                                             // 0x0D88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        _3pAttachmentLaser;                                       // 0x0D90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapMachinedSniper_Laser.WeapMachinedSniper_Laser_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapMachinedSniper_Laser(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
