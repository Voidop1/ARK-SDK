#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TreePlatform_Metal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_TreePlatform_Metal.PrimalItemStructure_TreePlatform_Metal_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemStructure_TreePlatform_Metal_C : public UPrimalItemStructure_BaseLadder_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_TreePlatform_Metal.PrimalItemStructure_TreePlatform_Metal_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_TreePlatform_Metal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
