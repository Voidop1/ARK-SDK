// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalPlayerDataBP_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.BPForceDefeatedBoss
// (NetReliable, NetRequest, Event, NetMulticast, Public, Protected, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// int*                           DifficultyIndex                (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BossName                       (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalPlayerDataBP_Base_C::BPForceDefeatedBoss(int* DifficultyIndex, struct FName* BossName, class AShooterPlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.BPForceDefeatedBoss");

	UPrimalPlayerDataBP_Base_C_BPForceDefeatedBoss_Params params;
	params.DifficultyIndex = DifficultyIndex;
	params.BossName = BossName;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.SetPlayerHexagonCount
// ()
// Parameters:
// int*                           NewHexagonCount                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalPlayerDataBP_Base_C::SetPlayerHexagonCount(int* NewHexagonCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.SetPlayerHexagonCount");

	UPrimalPlayerDataBP_Base_C_SetPlayerHexagonCount_Params params;
	params.NewHexagonCount = NewHexagonCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.GetPlayerHexagonCount
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPrimalPlayerDataBP_Base_C::GetPlayerHexagonCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.GetPlayerHexagonCount");

	UPrimalPlayerDataBP_Base_C_GetPlayerHexagonCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.BPCreatedNewPlayerData
// ()

void UPrimalPlayerDataBP_Base_C::BPCreatedNewPlayerData()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.BPCreatedNewPlayerData");

	UPrimalPlayerDataBP_Base_C_BPCreatedNewPlayerData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.DefeatedBoss
// ()
// Parameters:
// class APrimalDinoCharacter*    BossChar                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            DifficultyIndex                (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TagOverride                    (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController* ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalPlayerDataBP_Base_C::DefeatedBoss(class APrimalDinoCharacter* BossChar, int DifficultyIndex, const struct FName& TagOverride, class AShooterPlayerController* ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.DefeatedBoss");

	UPrimalPlayerDataBP_Base_C_DefeatedBoss_Params params;
	params.BossChar = BossChar;
	params.DifficultyIndex = DifficultyIndex;
	params.TagOverride = TagOverride;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.ExecuteUbergraph_PrimalPlayerDataBP_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalPlayerDataBP_Base_C::ExecuteUbergraph_PrimalPlayerDataBP_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.ExecuteUbergraph_PrimalPlayerDataBP_Base");

	UPrimalPlayerDataBP_Base_C_ExecuteUbergraph_PrimalPlayerDataBP_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
