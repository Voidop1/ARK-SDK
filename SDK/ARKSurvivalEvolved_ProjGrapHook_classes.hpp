#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjGrapHook_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjGrapHook.ProjGrapHook_C
// 0x0000 (0x0688 - 0x0688)
class AProjGrapHook_C : public APrimalProjectileGrapplingHook
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjGrapHook.ProjGrapHook_C");
		return ptr;
	}


	void OnExplode(struct FHitResult* Result);
	void UserConstructionScript();
	void ExecuteUbergraph_ProjGrapHook(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
