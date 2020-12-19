#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjXenomorphNeedle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjXenomorphNeedle.ProjXenomorphNeedle_C
// 0x0008 (0x0668 - 0x0660)
class AProjXenomorphNeedle_C : public AShooterProjectile
{
public:
	class UChildActorComponent*                        ChildProjectile;                                          // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjXenomorphNeedle.ProjXenomorphNeedle_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjXenomorphNeedle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
