// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_KingKaiju_Meteor_Explosion_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KingKaiju_Meteor_Explosion.KingKaiju_Meteor_Explosion_C.UserConstructionScript
// ()

void AKingKaiju_Meteor_Explosion_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Meteor_Explosion.KingKaiju_Meteor_Explosion_C.UserConstructionScript");

	AKingKaiju_Meteor_Explosion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Meteor_Explosion.KingKaiju_Meteor_Explosion_C.ExecuteUbergraph_KingKaiju_Meteor_Explosion
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_Meteor_Explosion_C::ExecuteUbergraph_KingKaiju_Meteor_Explosion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Meteor_Explosion.KingKaiju_Meteor_Explosion_C.ExecuteUbergraph_KingKaiju_Meteor_Explosion");

	AKingKaiju_Meteor_Explosion_C_ExecuteUbergraph_KingKaiju_Meteor_Explosion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
