// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_LightningAoE_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_LightningAoE.Buff_LightningAoE_C.MaybeRotate
// ()

void ABuff_LightningAoE_C::MaybeRotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LightningAoE.Buff_LightningAoE_C.MaybeRotate");

	ABuff_LightningAoE_C_MaybeRotate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_LightningAoE.Buff_LightningAoE_C.UserConstructionScript
// ()

void ABuff_LightningAoE_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LightningAoE.Buff_LightningAoE_C.UserConstructionScript");

	ABuff_LightningAoE_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_LightningAoE.Buff_LightningAoE_C.Timeline_0__FinishedFunc
// ()

void ABuff_LightningAoE_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LightningAoE.Buff_LightningAoE_C.Timeline_0__FinishedFunc");

	ABuff_LightningAoE_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_LightningAoE.Buff_LightningAoE_C.Timeline_0__UpdateFunc
// ()

void ABuff_LightningAoE_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LightningAoE.Buff_LightningAoE_C.Timeline_0__UpdateFunc");

	ABuff_LightningAoE_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_LightningAoE.Buff_LightningAoE_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_LightningAoE_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LightningAoE.Buff_LightningAoE_C.ReceiveTick");

	ABuff_LightningAoE_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_LightningAoE.Buff_LightningAoE_C.SetStructure
// ()
// Parameters:
// class APrimalStructure*        NewParam                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_LightningAoE_C::SetStructure(class APrimalStructure* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LightningAoE.Buff_LightningAoE_C.SetStructure");

	ABuff_LightningAoE_C_SetStructure_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_LightningAoE.Buff_LightningAoE_C.DoFadeOutMesh
// ()

void ABuff_LightningAoE_C::DoFadeOutMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LightningAoE.Buff_LightningAoE_C.DoFadeOutMesh");

	ABuff_LightningAoE_C_DoFadeOutMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_LightningAoE.Buff_LightningAoE_C.CheckForRain
// ()

void ABuff_LightningAoE_C::CheckForRain()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LightningAoE.Buff_LightningAoE_C.CheckForRain");

	ABuff_LightningAoE_C_CheckForRain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_LightningAoE.Buff_LightningAoE_C.ReceiveBeginPlay
// ()

void ABuff_LightningAoE_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LightningAoE.Buff_LightningAoE_C.ReceiveBeginPlay");

	ABuff_LightningAoE_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_LightningAoE.Buff_LightningAoE_C.ExecuteUbergraph_Buff_LightningAoE
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_LightningAoE_C::ExecuteUbergraph_Buff_LightningAoE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LightningAoE.Buff_LightningAoE_C.ExecuteUbergraph_Buff_LightningAoE");

	ABuff_LightningAoE_C_ExecuteUbergraph_Buff_LightningAoE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
