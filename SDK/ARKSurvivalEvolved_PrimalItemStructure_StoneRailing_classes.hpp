#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_StoneRailing_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_StoneRailing.PrimalItemStructure_StoneRailing_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemStructure_StoneRailing_C : public UPrimalItemStructure_BaseRailing_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_StoneRailing.PrimalItemStructure_StoneRailing_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_StoneRailing(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
