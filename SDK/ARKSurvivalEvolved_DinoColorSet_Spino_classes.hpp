#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Spino_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoColorSet_Spino.DinoColorSet_Spino_C
// 0x0000 (0x0268 - 0x0268)
class UDinoColorSet_Spino_C : public UPrimalColorSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoColorSet_Spino.DinoColorSet_Spino_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoColorSet_Spino(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
