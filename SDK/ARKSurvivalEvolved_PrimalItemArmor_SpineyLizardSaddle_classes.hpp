#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_SpineyLizardSaddle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_SpineyLizardSaddle.PrimalItemArmor_SpineyLizardSaddle_C
// 0x0000 (0x0A08 - 0x0A08)
class UPrimalItemArmor_SpineyLizardSaddle_C : public UPrimalItemArmor_SaddleGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_SpineyLizardSaddle.PrimalItemArmor_SpineyLizardSaddle_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_SpineyLizardSaddle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
