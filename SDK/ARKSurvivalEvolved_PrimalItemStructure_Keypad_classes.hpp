#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Keypad_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_Keypad.PrimalItemStructure_Keypad_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemStructure_Keypad_C : public UPrimalItemStructureGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_Keypad.PrimalItemStructure_Keypad_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_Keypad(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
