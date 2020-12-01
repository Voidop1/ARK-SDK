// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgType_Melee_Dino_GasBagsMelee_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DmgType_Melee_Dino_GasBagsMelee.DmgType_Melee_Dino_GasBagsMelee_C.BPAdjustAggro
// ()
// Parameters:
// class APrimalDinoAIController** DamagedCharacterController     (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter**       DamagedCharacter               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DesiredAggroValue              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDmgType_Melee_Dino_GasBagsMelee_C::BPAdjustAggro(class APrimalDinoAIController** DamagedCharacterController, class APrimalCharacter** DamagedCharacter, float* DesiredAggroValue, float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function DmgType_Melee_Dino_GasBagsMelee.DmgType_Melee_Dino_GasBagsMelee_C.BPAdjustAggro");

	UDmgType_Melee_Dino_GasBagsMelee_C_BPAdjustAggro_Params params;
	params.DamagedCharacterController = DamagedCharacterController;
	params.DamagedCharacter = DamagedCharacter;
	params.DesiredAggroValue = DesiredAggroValue;
	params.IncomingDamage = IncomingDamage;
	params.TheDamageEvent = TheDamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
