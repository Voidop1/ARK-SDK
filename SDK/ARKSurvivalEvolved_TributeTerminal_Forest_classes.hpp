#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TributeTerminal_Forest_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TributeTerminal_Forest.TributeTerminal_Forest_C
// 0x0008 (0x0DC0 - 0x0DB8)
class ATributeTerminal_Forest_C : public ATributeTerminal_Base_C
{
public:
	class UPrimalInventoryBP_TributeTerminal_Forest_C* PrimalInventoryBP_TributeTerminal_Forest_C1;              // 0x0DB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TributeTerminal_Forest.TributeTerminal_Forest_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_TributeTerminal_Forest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
