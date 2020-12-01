#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dimorph_Character_BP_Aggressive_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dimorph_Character_BP_Aggressive.Dimorph_Character_BP_Aggressive_C
// 0x0008 (0x2098 - 0x2090)
class ADimorph_Character_BP_Aggressive_C : public ADimorph_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Dimorph_Aggressive_C* DinoCharacterStatus_BP_Dimorph_Aggressive_C1;             // 0x2090(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dimorph_Character_BP_Aggressive.Dimorph_Character_BP_Aggressive_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Dimorph_Character_BP_Aggressive(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
