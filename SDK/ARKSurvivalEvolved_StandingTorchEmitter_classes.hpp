#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StandingTorchEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StandingTorchEmitter.StandingTorchEmitter_C
// 0x0000 (0x0500 - 0x0500)
class AStandingTorchEmitter_C : public ACampFireEmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StandingTorchEmitter.StandingTorchEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_StandingTorchEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
