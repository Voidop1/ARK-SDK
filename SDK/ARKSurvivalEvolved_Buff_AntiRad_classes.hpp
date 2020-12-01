#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_AntiRad_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_AntiRad.Buff_AntiRad_C
// 0x0010 (0x08B0 - 0x08A0)
class ABuff_AntiRad_C : public ABuff_Base_C
{
public:
	TArray<class UClass*>                              BuffArray;                                                // 0x08A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_AntiRad.Buff_AntiRad_C");
		return ptr;
	}


	bool BPPreventAddingOtherBuff(class UClass** anotherBuffClass);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_AntiRad(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
