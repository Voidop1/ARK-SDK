// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_PreservingBin_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_PreservingBin.EngramEntry_PreservingBin_C.ExecuteUbergraph_EngramEntry_PreservingBin
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_PreservingBin_C::ExecuteUbergraph_EngramEntry_PreservingBin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_PreservingBin.EngramEntry_PreservingBin_C.ExecuteUbergraph_EngramEntry_PreservingBin");

	UEngramEntry_PreservingBin_C_ExecuteUbergraph_EngramEntry_PreservingBin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
