// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ChibiDino_Therizino_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ChibiDino_Therizino.PrimalItemSkin_ChibiDino_Therizino_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Therizino
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_Therizino_C::ExecuteUbergraph_PrimalItemSkin_ChibiDino_Therizino(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Therizino.PrimalItemSkin_ChibiDino_Therizino_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Therizino");

	UPrimalItemSkin_ChibiDino_Therizino_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_Therizino_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
