#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_Easter_MarshmallowHat_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TradeOption_Easter_MarshmallowHat.TradeOption_Easter_MarshmallowHat_C
// 0x0000 (0x0070 - 0x0070)
class UTradeOption_Easter_MarshmallowHat_C : public UHexagonTradableOption
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TradeOption_Easter_MarshmallowHat.TradeOption_Easter_MarshmallowHat_C");
		return ptr;
	}


	void ExecuteUbergraph_TradeOption_Easter_MarshmallowHat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
