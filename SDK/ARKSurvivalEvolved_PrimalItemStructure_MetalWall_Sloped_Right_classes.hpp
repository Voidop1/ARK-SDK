#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_MetalWall_Sloped_Right_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_MetalWall_Sloped_Right.PrimalItemStructure_MetalWall_Sloped_Right_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemStructure_MetalWall_Sloped_Right_C : public UPrimalItemStructure_BaseWall_Sloped_Right_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_MetalWall_Sloped_Right.PrimalItemStructure_MetalWall_Sloped_Right_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_MetalWall_Sloped_Right(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
