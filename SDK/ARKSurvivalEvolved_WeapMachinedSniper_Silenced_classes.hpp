#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapMachinedSniper_Silenced_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapMachinedSniper_Silenced.WeapMachinedSniper_Silenced_C
// 0x0010 (0x0D88 - 0x0D78)
class AWeapMachinedSniper_Silenced_C : public AWeapMachinedSniper_Scope_C
{
public:
	class UStaticMeshComponent*                        _1pAttachmentSilencer;                                    // 0x0D78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        _3pAttachementSilencer;                                   // 0x0D80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapMachinedSniper_Silenced.WeapMachinedSniper_Silenced_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapMachinedSniper_Silenced(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
