// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EX_Proj_Meteor_KingKaiju_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EX_Proj_Meteor_KingKaiju.EX_Proj_Meteor_KingKaiju_C.OnExplode
// (Static, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AEX_Proj_Meteor_KingKaiju_C::STATIC_OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_Proj_Meteor_KingKaiju.EX_Proj_Meteor_KingKaiju_C.OnExplode");

	AEX_Proj_Meteor_KingKaiju_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function EX_Proj_Meteor_KingKaiju.EX_Proj_Meteor_KingKaiju_C.UserConstructionScript
// ()

void AEX_Proj_Meteor_KingKaiju_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_Proj_Meteor_KingKaiju.EX_Proj_Meteor_KingKaiju_C.UserConstructionScript");

	AEX_Proj_Meteor_KingKaiju_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_Proj_Meteor_KingKaiju.EX_Proj_Meteor_KingKaiju_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AEX_Proj_Meteor_KingKaiju_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_Proj_Meteor_KingKaiju.EX_Proj_Meteor_KingKaiju_C.ReceiveTick");

	AEX_Proj_Meteor_KingKaiju_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_Proj_Meteor_KingKaiju.EX_Proj_Meteor_KingKaiju_C.ReceiveBeginPlay
// ()

void AEX_Proj_Meteor_KingKaiju_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_Proj_Meteor_KingKaiju.EX_Proj_Meteor_KingKaiju_C.ReceiveBeginPlay");

	AEX_Proj_Meteor_KingKaiju_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_Proj_Meteor_KingKaiju.EX_Proj_Meteor_KingKaiju_C.On_Impact
// ()

void AEX_Proj_Meteor_KingKaiju_C::On_Impact()
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_Proj_Meteor_KingKaiju.EX_Proj_Meteor_KingKaiju_C.On_Impact");

	AEX_Proj_Meteor_KingKaiju_C_On_Impact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_Proj_Meteor_KingKaiju.EX_Proj_Meteor_KingKaiju_C.BndEvt__CollisionComp_K2Node_ComponentBoundEvent_228_ComponentHitSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void AEX_Proj_Meteor_KingKaiju_C::BndEvt__CollisionComp_K2Node_ComponentBoundEvent_228_ComponentHitSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_Proj_Meteor_KingKaiju.EX_Proj_Meteor_KingKaiju_C.BndEvt__CollisionComp_K2Node_ComponentBoundEvent_228_ComponentHitSignature__DelegateSignature");

	AEX_Proj_Meteor_KingKaiju_C_BndEvt__CollisionComp_K2Node_ComponentBoundEvent_228_ComponentHitSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function EX_Proj_Meteor_KingKaiju.EX_Proj_Meteor_KingKaiju_C.BndEvt__CollisionComp_K2Node_ComponentBoundEvent_90_ComponentBeginOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (Parm, OutParm, ReferenceParm)

void AEX_Proj_Meteor_KingKaiju_C::BndEvt__CollisionComp_K2Node_ComponentBoundEvent_90_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_Proj_Meteor_KingKaiju.EX_Proj_Meteor_KingKaiju_C.BndEvt__CollisionComp_K2Node_ComponentBoundEvent_90_ComponentBeginOverlapSignature__DelegateSignature");

	AEX_Proj_Meteor_KingKaiju_C_BndEvt__CollisionComp_K2Node_ComponentBoundEvent_90_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepResult != nullptr)
		*SweepResult = params.SweepResult;
}


// Function EX_Proj_Meteor_KingKaiju.EX_Proj_Meteor_KingKaiju_C.Client_PlayWarningFX
// ()
// Parameters:
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rot                            (Parm, ZeroConstructor, IsPlainOldData)

void AEX_Proj_Meteor_KingKaiju_C::Client_PlayWarningFX(const struct FVector& Loc, const struct FRotator& Rot)
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_Proj_Meteor_KingKaiju.EX_Proj_Meteor_KingKaiju_C.Client_PlayWarningFX");

	AEX_Proj_Meteor_KingKaiju_C_Client_PlayWarningFX_Params params;
	params.Loc = Loc;
	params.Rot = Rot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_Proj_Meteor_KingKaiju.EX_Proj_Meteor_KingKaiju_C.PlayWarningFX
// ()
// Parameters:
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rot                            (Parm, ZeroConstructor, IsPlainOldData)

void AEX_Proj_Meteor_KingKaiju_C::PlayWarningFX(const struct FVector& Loc, const struct FRotator& Rot)
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_Proj_Meteor_KingKaiju.EX_Proj_Meteor_KingKaiju_C.PlayWarningFX");

	AEX_Proj_Meteor_KingKaiju_C_PlayWarningFX_Params params;
	params.Loc = Loc;
	params.Rot = Rot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_Proj_Meteor_KingKaiju.EX_Proj_Meteor_KingKaiju_C.ExecuteUbergraph_EX_Proj_Meteor_KingKaiju
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEX_Proj_Meteor_KingKaiju_C::ExecuteUbergraph_EX_Proj_Meteor_KingKaiju(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_Proj_Meteor_KingKaiju.EX_Proj_Meteor_KingKaiju_C.ExecuteUbergraph_EX_Proj_Meteor_KingKaiju");

	AEX_Proj_Meteor_KingKaiju_C_ExecuteUbergraph_EX_Proj_Meteor_KingKaiju_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
