#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MekEmitter_SiegeExplosion_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MekEmitter_SiegeExplosion.MekEmitter_SiegeExplosion_C
// 0x0000 (0x0500 - 0x0500)
class AMekEmitter_SiegeExplosion_C : public AExplosionEmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MekEmitter_SiegeExplosion.MekEmitter_SiegeExplosion_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MekEmitter_SiegeExplosion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
