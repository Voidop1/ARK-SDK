#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Sign_Large_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Sign_Large_Base.Sign_Large_Base_C
// 0x0000 (0x0B18 - 0x0B18)
class ASign_Large_Base_C : public ASign_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Sign_Large_Base.Sign_Large_Base_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Sign_Large_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
