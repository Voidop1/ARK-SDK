#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Mega_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_Mega.DinoTamedInventoryComponent_Mega_C
// 0x0000 (0x0590 - 0x0590)
class UDinoTamedInventoryComponent_Mega_C : public UDinoTamedInventoryComponent_BP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Mega.DinoTamedInventoryComponent_Mega_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoTamedInventoryComponent_Mega(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
