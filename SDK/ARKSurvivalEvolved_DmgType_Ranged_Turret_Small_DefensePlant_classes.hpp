#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgType_Ranged_Turret_Small_DefensePlant_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_Ranged_Turret_Small_DefensePlant.DmgType_Ranged_Turret_Small_DefensePlant_C
// 0x0000 (0x0131 - 0x0131)
class UDmgType_Ranged_Turret_Small_DefensePlant_C : public UDmgType_Projectile_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Ranged_Turret_Small_DefensePlant.DmgType_Ranged_Turret_Small_DefensePlant_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
