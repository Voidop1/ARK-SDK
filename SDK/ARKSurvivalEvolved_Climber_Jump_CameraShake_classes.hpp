#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Climber_Jump_CameraShake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Climber_Jump_CameraShake.Climber_Jump_CameraShake_C
// 0x0000 (0x00B0 - 0x00B0)
class UClimber_Jump_CameraShake_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Climber_Jump_CameraShake.Climber_Jump_CameraShake_C");
		return ptr;
	}


	void ExecuteUbergraph_Climber_Jump_CameraShake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
