#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_MetalSign_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_MetalSign.PrimalItemStructure_MetalSign_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemStructure_MetalSign_C : public UPrimalItemStructure_BaseSign_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_MetalSign.PrimalItemStructure_MetalSign_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_MetalSign(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
