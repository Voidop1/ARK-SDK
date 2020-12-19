// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StorageBox_Fabricator_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StorageBox_Fabricator.StorageBox_Fabricator_C.UserConstructionScript
// ()

void AStorageBox_Fabricator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Fabricator.StorageBox_Fabricator_C.UserConstructionScript");

	AStorageBox_Fabricator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_Fabricator.StorageBox_Fabricator_C.ExecuteUbergraph_StorageBox_Fabricator
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_Fabricator_C::ExecuteUbergraph_StorageBox_Fabricator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Fabricator.StorageBox_Fabricator_C.ExecuteUbergraph_StorageBox_Fabricator");

	AStorageBox_Fabricator_C_ExecuteUbergraph_StorageBox_Fabricator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
