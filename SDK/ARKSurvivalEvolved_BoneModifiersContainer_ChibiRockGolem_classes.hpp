#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiRockGolem_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BoneModifiersContainer_ChibiRockGolem.BoneModifiersContainer_ChibiRockGolem_C
// 0x0000 (0x0038 - 0x0038)
class UBoneModifiersContainer_ChibiRockGolem_C : public UBoneModifiersContainer_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BoneModifiersContainer_ChibiRockGolem.BoneModifiersContainer_ChibiRockGolem_C");
		return ptr;
	}


	void ExecuteUbergraph_BoneModifiersContainer_ChibiRockGolem(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
