#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_TranqSpearBolt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemAmmo_TranqSpearBolt.PrimalItemAmmo_TranqSpearBolt_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemAmmo_TranqSpearBolt_C : public UPrimalItemAmmo_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemAmmo_TranqSpearBolt.PrimalItemAmmo_TranqSpearBolt_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemAmmo_TranqSpearBolt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
