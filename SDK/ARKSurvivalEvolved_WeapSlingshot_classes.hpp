#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapSlingshot_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapSlingshot.WeapSlingshot_C
// 0x0000 (0x0E80 - 0x0E80)
class AWeapSlingshot_C : public APrimalWeaponBow
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapSlingshot.WeapSlingshot_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapSlingshot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
