#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CannonExplosion_Emitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CannonExplosion_Emitter.CannonExplosion_Emitter_C
// 0x0000 (0x0500 - 0x0500)
class ACannonExplosion_Emitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CannonExplosion_Emitter.CannonExplosion_Emitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_CannonExplosion_Emitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
