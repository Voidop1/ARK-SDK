#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Hyaenodon_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoColorSet_Hyaenodon.DinoColorSet_Hyaenodon_C
// 0x0000 (0x0268 - 0x0268)
class UDinoColorSet_Hyaenodon_C : public UPrimalColorSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoColorSet_Hyaenodon.DinoColorSet_Hyaenodon_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoColorSet_Hyaenodon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
