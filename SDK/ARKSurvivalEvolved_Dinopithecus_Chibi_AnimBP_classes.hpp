#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dinopithecus_Chibi_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Dinopithecus_Chibi_AnimBP.Dinopithecus_Chibi_AnimBP_C
// 0x0000 (0x06C8 - 0x06C8)
class UDinopithecus_Chibi_AnimBP_C : public URex_New_Chibi_AnimBP_BASE_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Dinopithecus_Chibi_AnimBP.Dinopithecus_Chibi_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Dinopithecus_Chibi_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
