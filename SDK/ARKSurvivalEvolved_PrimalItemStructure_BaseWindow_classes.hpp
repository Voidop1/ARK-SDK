#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_BaseWindow_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_BaseWindow.PrimalItemStructure_BaseWindow_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemStructure_BaseWindow_C : public UPrimalItemStructureGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_BaseWindow.PrimalItemStructure_BaseWindow_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_BaseWindow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
