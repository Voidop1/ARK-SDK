#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Doed_Character_BP_Aberrant_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Doed_Character_BP_Aberrant.Doed_Character_BP_Aberrant_C
// 0x0000 (0x20A0 - 0x20A0)
class ADoed_Character_BP_Aberrant_C : public ADoed_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Doed_Character_BP_Aberrant.Doed_Character_BP_Aberrant_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Doed_Character_BP_Aberrant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
