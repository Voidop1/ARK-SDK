#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FKaijuWyvernLife_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_FKaijuWyvernLife.Buff_FKaijuWyvernLife_C
// 0x0000 (0x08A0 - 0x08A0)
class ABuff_FKaijuWyvernLife_C : public APrimalBuff
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_FKaijuWyvernLife.Buff_FKaijuWyvernLife_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_FKaijuWyvernLife(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
