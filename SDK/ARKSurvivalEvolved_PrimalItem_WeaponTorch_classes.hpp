#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponTorch_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C
// 0x0004 (0x09F4 - 0x09F0)
class UPrimalItem_WeaponTorch_C : public UPrimalItemWeaponGenericAmmoless_C
{
public:
	float                                              DurabilityLossPerSecond;                                  // 0x09F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C");
		return ptr;
	}


	void ApplyingSkinOntoItem(class UPrimalItem** ToOwnerItem, bool* bIsFirstTime);
	void RemovedSkinFromItem(class UPrimalItem** FromOwnerItem, bool* bIsFirstTime);
	void SkinEquippedBlueprintTick(class UPrimalItem** OwnerItem, float* DeltaSeconds);
	bool BPPreventUseOntoItem(class UPrimalItem** DestinationItem);
	void ExecuteUbergraph_PrimalItem_WeaponTorch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
