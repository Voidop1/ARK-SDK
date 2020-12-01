#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MatineeValueInterpolationContainer_EX_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MatineeValueInterpolationContainer_EX.MatineeValueInterpolationContainer_EX_C
// 0x0010 (0x0470 - 0x0460)
class AMatineeValueInterpolationContainer_EX_C : public AMatineeValueInterpolationContainer_C
{
public:
	float                                              EclipsePOS;                                               // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlowoutProgress;                                          // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ActivateCorruption;                                       // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AscensionTime;                                            // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MatineeValueInterpolationContainer_EX.MatineeValueInterpolationContainer_EX_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MatineeValueInterpolationContainer_EX(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
