#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WaterPipe_Stone_Up_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WaterPipe_Stone_Up.WaterPipe_Stone_Up_C
// 0x0000 (0x0AE0 - 0x0AE0)
class AWaterPipe_Stone_Up_C : public AWaterPipe_Base_Up_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WaterPipe_Stone_Up.WaterPipe_Stone_Up_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WaterPipe_Stone_Up(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
