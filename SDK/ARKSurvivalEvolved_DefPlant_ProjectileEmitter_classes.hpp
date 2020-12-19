#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DefPlant_ProjectileEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DefPlant_ProjectileEmitter.DefPlant_ProjectileEmitter_C
// 0x0000 (0x0518 - 0x0518)
class ADefPlant_ProjectileEmitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DefPlant_ProjectileEmitter.DefPlant_ProjectileEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_DefPlant_ProjectileEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
