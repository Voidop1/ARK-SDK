#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Saddle_Scorpion_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_Saddle_Scorpion.EngramEntry_Saddle_Scorpion_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_Saddle_Scorpion_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_Saddle_Scorpion.EngramEntry_Saddle_Scorpion_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_Saddle_Scorpion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
