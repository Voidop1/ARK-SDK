#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponTaxidermyTool_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponTaxidermyTool.PrimalItem_WeaponTaxidermyTool_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItem_WeaponTaxidermyTool_C : public UPrimalItemWeaponGenericNoStats_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponTaxidermyTool.PrimalItem_WeaponTaxidermyTool_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponTaxidermyTool(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
