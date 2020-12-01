#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalStructure_CityTerminal_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalStructure_CityTerminal_BP.PrimalStructure_CityTerminal_BP_C.Get Charge Variable Interface
struct APrimalStructure_CityTerminal_BP_C_Get_Charge_Variable_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ivalue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP.PrimalStructure_CityTerminal_BP_C.GetNumBatteries
struct APrimalStructure_CityTerminal_BP_C_GetNumBatteries_Params
{
	int                                                numBatteries;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP.PrimalStructure_CityTerminal_BP_C.BPNotifyInventoryItemChange
struct APrimalStructure_CityTerminal_BP_C_BPNotifyInventoryItemChange_Params
{
	bool*                                              bIsItemAdd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                theItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEquipItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP.PrimalStructure_CityTerminal_BP_C.Create Charge Manager
struct APrimalStructure_CityTerminal_BP_C_Create_Charge_Manager_Params
{
};

// Function PrimalStructure_CityTerminal_BP.PrimalStructure_CityTerminal_BP_C.DestroyChargeBuff
struct APrimalStructure_CityTerminal_BP_C_DestroyChargeBuff_Params
{
};

// Function PrimalStructure_CityTerminal_BP.PrimalStructure_CityTerminal_BP_C.UserConstructionScript
struct APrimalStructure_CityTerminal_BP_C_UserConstructionScript_Params
{
};

// Function PrimalStructure_CityTerminal_BP.PrimalStructure_CityTerminal_BP_C.Charge Variable Event Interface
struct APrimalStructure_CityTerminal_BP_C_Charge_Variable_Event_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ivalue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP.PrimalStructure_CityTerminal_BP_C.Charge Variable Event Trigger Multicast Interface
struct APrimalStructure_CityTerminal_BP_C_Charge_Variable_Event_Trigger_Multicast_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iVariable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP.PrimalStructure_CityTerminal_BP_C.Set Charge Variable Interface
struct APrimalStructure_CityTerminal_BP_C_Set_Charge_Variable_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               multicast;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               triggerEvent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               multicastEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ivalue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP.PrimalStructure_CityTerminal_BP_C.CheckForBatteriesAndUpdate_Multicast
struct APrimalStructure_CityTerminal_BP_C_CheckForBatteriesAndUpdate_Multicast_Params
{
};

// Function PrimalStructure_CityTerminal_BP.PrimalStructure_CityTerminal_BP_C.Interface Check for Batteries and Update Multicast
struct APrimalStructure_CityTerminal_BP_C_Interface_Check_for_Batteries_and_Update_Multicast_Params
{
};

// Function PrimalStructure_CityTerminal_BP.PrimalStructure_CityTerminal_BP_C.ChargeVariableEvent_Boolean
struct APrimalStructure_CityTerminal_BP_C_ChargeVariableEvent_Boolean_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP.PrimalStructure_CityTerminal_BP_C.ChargeVariableEvent_Float
struct APrimalStructure_CityTerminal_BP_C_ChargeVariableEvent_Float_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP.PrimalStructure_CityTerminal_BP_C.ChargeVariableEvent_Float_Multicast
struct APrimalStructure_CityTerminal_BP_C_ChargeVariableEvent_Float_Multicast_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP.PrimalStructure_CityTerminal_BP_C.Charge Variable Event Boolean Interface
struct APrimalStructure_CityTerminal_BP_C_Charge_Variable_Event_Boolean_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP.PrimalStructure_CityTerminal_BP_C.ChargeVariableEventFloatInterface
struct APrimalStructure_CityTerminal_BP_C_ChargeVariableEventFloatInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP.PrimalStructure_CityTerminal_BP_C.ChargeVariableEvent_Boolean_Multicast
struct APrimalStructure_CityTerminal_BP_C_ChargeVariableEvent_Boolean_Multicast_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP.PrimalStructure_CityTerminal_BP_C.Charge Variable Event Boolean MulticastInterface
struct APrimalStructure_CityTerminal_BP_C_Charge_Variable_Event_Boolean_MulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP.PrimalStructure_CityTerminal_BP_C.Charge Variable Event Float Multicast Interface
struct APrimalStructure_CityTerminal_BP_C_Charge_Variable_Event_Float_Multicast_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP.PrimalStructure_CityTerminal_BP_C.ChargeVariableEvent_Double
struct APrimalStructure_CityTerminal_BP_C_ChargeVariableEvent_Double_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP.PrimalStructure_CityTerminal_BP_C.ChargeVariableEvent_Double_Multicast
struct APrimalStructure_CityTerminal_BP_C_ChargeVariableEvent_Double_Multicast_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP.PrimalStructure_CityTerminal_BP_C.ChargeVariableEventDoubleInterface
struct APrimalStructure_CityTerminal_BP_C_ChargeVariableEventDoubleInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP.PrimalStructure_CityTerminal_BP_C.Charge Variable Event Double MulticastInterface
struct APrimalStructure_CityTerminal_BP_C_Charge_Variable_Event_Double_MulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP.PrimalStructure_CityTerminal_BP_C.ChargeVariableEventIntInterface
struct APrimalStructure_CityTerminal_BP_C_ChargeVariableEventIntInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ivalue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP.PrimalStructure_CityTerminal_BP_C.ChargeVariableEventIntMulticastInterface
struct APrimalStructure_CityTerminal_BP_C_ChargeVariableEventIntMulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ivalue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP.PrimalStructure_CityTerminal_BP_C.ChargeVariableEvent_Int
struct APrimalStructure_CityTerminal_BP_C_ChargeVariableEvent_Int_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ivalue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP.PrimalStructure_CityTerminal_BP_C.ChargeVariableEvent_Int_Multicast
struct APrimalStructure_CityTerminal_BP_C_ChargeVariableEvent_Int_Multicast_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ivalue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP.PrimalStructure_CityTerminal_BP_C.ReceiveBeginPlay
struct APrimalStructure_CityTerminal_BP_C_ReceiveBeginPlay_Params
{
};

// Function PrimalStructure_CityTerminal_BP.PrimalStructure_CityTerminal_BP_C.DestroyChargeBuff_Multicast
struct APrimalStructure_CityTerminal_BP_C_DestroyChargeBuff_Multicast_Params
{
};

// Function PrimalStructure_CityTerminal_BP.PrimalStructure_CityTerminal_BP_C.CreateChargeManager_Multicasr
struct APrimalStructure_CityTerminal_BP_C_CreateChargeManager_Multicasr_Params
{
};

// Function PrimalStructure_CityTerminal_BP.PrimalStructure_CityTerminal_BP_C.BPUnstasis
struct APrimalStructure_CityTerminal_BP_C_BPUnstasis_Params
{
};

// Function PrimalStructure_CityTerminal_BP.PrimalStructure_CityTerminal_BP_C.ExecuteUbergraph_PrimalStructure_CityTerminal_BP
struct APrimalStructure_CityTerminal_BP_C_ExecuteUbergraph_PrimalStructure_CityTerminal_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
