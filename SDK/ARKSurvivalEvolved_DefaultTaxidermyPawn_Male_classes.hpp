#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DefaultTaxidermyPawn_Male_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DefaultTaxidermyPawn_Male.DefaultTaxidermyPawn_Male_C
// 0x0000 (0x2128 - 0x2128)
class ADefaultTaxidermyPawn_Male_C : public APlayerPawnTest_Male_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DefaultTaxidermyPawn_Male.DefaultTaxidermyPawn_Male_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_DefaultTaxidermyPawn_Male(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
