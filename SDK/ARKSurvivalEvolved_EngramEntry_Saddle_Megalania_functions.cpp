// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Saddle_Megalania_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Saddle_Megalania.EngramEntry_Saddle_Megalania_C.ExecuteUbergraph_EngramEntry_Saddle_Megalania
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Saddle_Megalania_C::ExecuteUbergraph_EngramEntry_Saddle_Megalania(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Saddle_Megalania.EngramEntry_Saddle_Megalania_C.ExecuteUbergraph_EngramEntry_Saddle_Megalania");

	UEngramEntry_Saddle_Megalania_C_ExecuteUbergraph_EngramEntry_Saddle_Megalania_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
