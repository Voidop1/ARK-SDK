// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Lystro_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Lystro.DinoEntry_Lystro_C.ExecuteUbergraph_DinoEntry_Lystro
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Lystro_C::ExecuteUbergraph_DinoEntry_Lystro(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Lystro.DinoEntry_Lystro_C.ExecuteUbergraph_DinoEntry_Lystro");

	UDinoEntry_Lystro_C_ExecuteUbergraph_DinoEntry_Lystro_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
