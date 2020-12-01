#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SM_AdobeFloor_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SM_AdobeFloor_BP.SM_AdobeFloor_BP_C
// 0x0008 (0x0AB8 - 0x0AB0)
class ASM_AdobeFloor_BP_C : public AFloor_Metal_C
{
public:
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0AB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SM_AdobeFloor_BP.SM_AdobeFloor_BP_C");
		return ptr;
	}


	void BPOnVariantSwitch(int* NewVariantIndex);
	void UserConstructionScript();
	void ExecuteUbergraph_SM_AdobeFloor_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
