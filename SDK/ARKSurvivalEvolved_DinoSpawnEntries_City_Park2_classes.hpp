#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntries_City_Park2_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSpawnEntries_City_Park2.DinoSpawnEntries_City_Park2_C
// 0x0000 (0x0050 - 0x0050)
class UDinoSpawnEntries_City_Park2_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntries_City_Park2.DinoSpawnEntries_City_Park2_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSpawnEntries_City_Park2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
