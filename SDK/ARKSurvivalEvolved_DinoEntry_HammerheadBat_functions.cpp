// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_HammerheadBat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_HammerheadBat.DinoEntry_HammerheadBat_C.ExecuteUbergraph_DinoEntry_HammerheadBat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_HammerheadBat_C::ExecuteUbergraph_DinoEntry_HammerheadBat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_HammerheadBat.DinoEntry_HammerheadBat_C.ExecuteUbergraph_DinoEntry_HammerheadBat");

	UDinoEntry_HammerheadBat_C_ExecuteUbergraph_DinoEntry_HammerheadBat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
