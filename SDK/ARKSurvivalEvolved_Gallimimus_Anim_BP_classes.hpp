#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gallimimus_Anim_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Gallimimus_Anim_BP.Gallimimus_Anim_BP_C
// 0x0000 (0x1630 - 0x1630)
class UGallimimus_Anim_BP_C : public UDinoBlueprintBase_RootBoneName_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Gallimimus_Anim_BP.Gallimimus_Anim_BP_C");
		return ptr;
	}


	void ExecuteUbergraph_Gallimimus_Anim_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
