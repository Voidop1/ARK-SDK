// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Allosaurus_Chibi_AnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Allosaurus_Chibi_AnimBP.Allosaurus_Chibi_AnimBP_C.ExecuteUbergraph_Allosaurus_Chibi_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAllosaurus_Chibi_AnimBP_C::ExecuteUbergraph_Allosaurus_Chibi_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Allosaurus_Chibi_AnimBP.Allosaurus_Chibi_AnimBP_C.ExecuteUbergraph_Allosaurus_Chibi_AnimBP");

	UAllosaurus_Chibi_AnimBP_C_ExecuteUbergraph_Allosaurus_Chibi_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
