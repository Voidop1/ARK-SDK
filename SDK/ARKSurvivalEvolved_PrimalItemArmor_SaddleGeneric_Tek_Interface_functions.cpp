// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_SaddleGeneric_Tek_Interface_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_SaddleGeneric_Tek_Interface.PrimalItemArmor_SaddleGeneric_Tek_Interface_C.IGet Max Ammo
// ()
// Parameters:
// int                            RetVal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_SaddleGeneric_Tek_Interface_C::IGet_Max_Ammo(int* RetVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_SaddleGeneric_Tek_Interface.PrimalItemArmor_SaddleGeneric_Tek_Interface_C.IGet Max Ammo");

	UPrimalItemArmor_SaddleGeneric_Tek_Interface_C_IGet_Max_Ammo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetVal != nullptr)
		*RetVal = params.RetVal;
}


// Function PrimalItemArmor_SaddleGeneric_Tek_Interface.PrimalItemArmor_SaddleGeneric_Tek_Interface_C.ISetElementToMax
// ()

void UPrimalItemArmor_SaddleGeneric_Tek_Interface_C::ISetElementToMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_SaddleGeneric_Tek_Interface.PrimalItemArmor_SaddleGeneric_Tek_Interface_C.ISetElementToMax");

	UPrimalItemArmor_SaddleGeneric_Tek_Interface_C_ISetElementToMax_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
