#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dino_Character_BP_NoBossArena_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dino_Character_BP_NoBossArena.Dino_Character_BP_NoBossArena_C
// 0x0000 (0x2288 - 0x2288)
class ADino_Character_BP_NoBossArena_C : public ADino_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dino_Character_BP_NoBossArena.Dino_Character_BP_NoBossArena_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Dino_Character_BP_NoBossArena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
