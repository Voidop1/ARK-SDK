#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_AdobeWall_Sloped_Left_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_AdobeWall_Sloped_Left.PrimalItemStructure_AdobeWall_Sloped_Left_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemStructure_AdobeWall_Sloped_Left_C : public UPrimalItemStructure_BaseWall_Sloped_Left_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_AdobeWall_Sloped_Left.PrimalItemStructure_AdobeWall_Sloped_Left_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_AdobeWall_Sloped_Left(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
