// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Mek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Mek.DinoEntry_Mek_C.ExecuteUbergraph_DinoEntry_Mek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Mek_C::ExecuteUbergraph_DinoEntry_Mek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Mek.DinoEntry_Mek_C.ExecuteUbergraph_DinoEntry_Mek");

	UDinoEntry_Mek_C_ExecuteUbergraph_DinoEntry_Mek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
