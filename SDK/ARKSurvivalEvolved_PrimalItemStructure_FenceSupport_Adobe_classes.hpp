#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_FenceSupport_Adobe_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_FenceSupport_Adobe.PrimalItemStructure_FenceSupport_Adobe_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemStructure_FenceSupport_Adobe_C : public UPrimalItemStructure_BaseFenceFoundation_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_FenceSupport_Adobe.PrimalItemStructure_FenceSupport_Adobe_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_FenceSupport_Adobe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
