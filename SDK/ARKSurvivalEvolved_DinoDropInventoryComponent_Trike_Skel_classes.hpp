#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDropInventoryComponent_Trike_Skel_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDropInventoryComponent_Trike_Skel.DinoDropInventoryComponent_Trike_Skel_C
// 0x0000 (0x0538 - 0x0538)
class UDinoDropInventoryComponent_Trike_Skel_C : public UDinoDropInventoryComponent_Carnivore_Mega_Raptor_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDropInventoryComponent_Trike_Skel.DinoDropInventoryComponent_Trike_Skel_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDropInventoryComponent_Trike_Skel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
