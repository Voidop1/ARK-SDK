#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapMap_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapMap.WeapMap_C
// 0x0000 (0x1008 - 0x1008)
class AWeapMap_C : public AWeapGPS_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapMap.WeapMap_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapMap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
