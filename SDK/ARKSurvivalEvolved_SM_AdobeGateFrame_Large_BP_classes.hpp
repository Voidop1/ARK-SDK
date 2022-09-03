#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SM_AdobeGateFrame_Large_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SM_AdobeGateFrame_Large_BP.SM_AdobeGateFrame_Large_BP_C
// 0x0000 (0x0AF8 - 0x0AF8)
class ASM_AdobeGateFrame_Large_BP_C : public AGateFrame_Large_Metal_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SM_AdobeGateFrame_Large_BP.SM_AdobeGateFrame_Large_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SM_AdobeGateFrame_Large_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
