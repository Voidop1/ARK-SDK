#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Equus_Character_BP_Unicorn_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Equus_Character_BP_Unicorn.Equus_Character_BP_Unicorn_C
// 0x000D (0x2360 - 0x2353)
class AEquus_Character_BP_Unicorn_C : public AEquus_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x2353(0x0005) MISSED OFFSET
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x2358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Equus_Character_BP_Unicorn.Equus_Character_BP_Unicorn_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Equus_Character_BP_Unicorn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
