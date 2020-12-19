#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gorilla_Character_BP_Easy_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Gorilla_Character_BP_Easy.Gorilla_Character_BP_Easy_C
// 0x000E (0x2228 - 0x221A)
class AGorilla_Character_BP_Easy_C : public AGorilla_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x221A(0x0006) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_Gorilla_Easy_C* DinoCharacterStatus_BP_Gorilla_Easy_C1;                   // 0x2220(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gorilla_Character_BP_Easy.Gorilla_Character_BP_Easy_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Gorilla_Character_BP_Easy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
