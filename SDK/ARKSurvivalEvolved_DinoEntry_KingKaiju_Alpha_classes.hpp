#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_KingKaiju_Alpha_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_KingKaiju_Alpha.DinoEntry_KingKaiju_Alpha_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_KingKaiju_Alpha_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_KingKaiju_Alpha.DinoEntry_KingKaiju_Alpha_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_KingKaiju_Alpha(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
