#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ladder_Rope_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ladder_Rope.Ladder_Rope_C
// 0x0008 (0x0B08 - 0x0B00)
class ALadder_Rope_C : public ALadderBaseBP_C
{
public:
	class UStaticMeshComponent*                        RetractedMesh;                                            // 0x0B00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ladder_Rope.Ladder_Rope_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Ladder_Rope(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
