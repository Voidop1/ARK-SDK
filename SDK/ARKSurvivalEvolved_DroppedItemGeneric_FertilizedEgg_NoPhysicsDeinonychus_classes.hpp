#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DroppedItemGeneric_FertilizedEgg_NoPhysicsDeinonychus_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DroppedItemGeneric_FertilizedEgg_NoPhysicsDeinonychus.DroppedItemGeneric_FertilizedEgg_NoPhysicsDeinonychus_C
// 0x0000 (0x0740 - 0x0740)
class ADroppedItemGeneric_FertilizedEgg_NoPhysicsDeinonychus_C : public ADroppedItemGeneric_FertilizedEgg_NoPhysics_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DroppedItemGeneric_FertilizedEgg_NoPhysicsDeinonychus.DroppedItemGeneric_FertilizedEgg_NoPhysicsDeinonychus_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_NoPhysicsDeinonychus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
