#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_SummerBash_Emote_Flex2_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TradeOption_SummerBash_Emote_Flex2.TradeOption_SummerBash_Emote_Flex2_C
// 0x0000 (0x0070 - 0x0070)
class UTradeOption_SummerBash_Emote_Flex2_C : public UHexagonTradableOption
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TradeOption_SummerBash_Emote_Flex2.TradeOption_SummerBash_Emote_Flex2_C");
		return ptr;
	}


	void ExecuteUbergraph_TradeOption_SummerBash_Emote_Flex2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
