#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntries_RedwoodWater_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSpawnEntries_RedwoodWater.DinoSpawnEntries_RedwoodWater_C
// 0x0000 (0x0050 - 0x0050)
class UDinoSpawnEntries_RedwoodWater_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntries_RedwoodWater.DinoSpawnEntries_RedwoodWater_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSpawnEntries_RedwoodWater(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
