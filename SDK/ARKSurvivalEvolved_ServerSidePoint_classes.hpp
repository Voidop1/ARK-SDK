#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ServerSidePoint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ServerSidePoint.ServerSidePoint_C
// 0x0000 (0x0450 - 0x0450)
class AServerSidePoint_C : public ANote
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ServerSidePoint.ServerSidePoint_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ServerSidePoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
