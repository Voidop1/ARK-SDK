#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_MegaMek_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_MegaMek.DinoEntry_MegaMek_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_MegaMek_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_MegaMek.DinoEntry_MegaMek_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_MegaMek(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
