#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_NPCZoneManagerBlueprint_Water_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass NPCZoneManagerBlueprint_Water.NPCZoneManagerBlueprint_Water_C
// 0x0000 (0x05C0 - 0x05C0)
class ANPCZoneManagerBlueprint_Water_C : public ANPCZoneManagerBlueprint_Land_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NPCZoneManagerBlueprint_Water.NPCZoneManagerBlueprint_Water_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_NPCZoneManagerBlueprint_Water(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
