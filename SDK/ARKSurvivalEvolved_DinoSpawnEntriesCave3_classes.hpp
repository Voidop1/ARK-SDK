#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesCave3_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSpawnEntriesCave3.DinoSpawnEntriesCave3_C
// 0x0000 (0x0050 - 0x0050)
class UDinoSpawnEntriesCave3_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesCave3.DinoSpawnEntriesCave3_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSpawnEntriesCave3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
