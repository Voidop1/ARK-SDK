#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Arthro_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Arthro_AnimBlueprint.Arthro_AnimBlueprint_C
// 0x0000 (0x1640 - 0x1640)
class UArthro_AnimBlueprint_C : public UDinoBlueprintBase_RootBoneName_GroundConform_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Arthro_AnimBlueprint.Arthro_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Arthro_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
