// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_Easter_EasterBasket_C4_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_Easter_EasterBasket_C4.TradeOption_Easter_EasterBasket_C4_C.ExecuteUbergraph_TradeOption_Easter_EasterBasket_C4
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_Easter_EasterBasket_C4_C::ExecuteUbergraph_TradeOption_Easter_EasterBasket_C4(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_Easter_EasterBasket_C4.TradeOption_Easter_EasterBasket_C4_C.ExecuteUbergraph_TradeOption_Easter_EasterBasket_C4");

	UTradeOption_Easter_EasterBasket_C4_C_ExecuteUbergraph_TradeOption_Easter_EasterBasket_C4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
