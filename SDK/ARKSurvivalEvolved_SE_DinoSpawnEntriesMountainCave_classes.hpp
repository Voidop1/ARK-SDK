#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SE_DinoSpawnEntriesMountainCave_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SE_DinoSpawnEntriesMountainCave.SE_DinoSpawnEntriesMountainCave_C
// 0x0000 (0x0050 - 0x0050)
class USE_DinoSpawnEntriesMountainCave_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SE_DinoSpawnEntriesMountainCave.SE_DinoSpawnEntriesMountainCave_C");
		return ptr;
	}


	void ExecuteUbergraph_SE_DinoSpawnEntriesMountainCave(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
