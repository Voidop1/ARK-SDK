#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_ElementDustFromShards_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_ElementDustFromShards.PrimalItemResource_ElementDustFromShards_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemResource_ElementDustFromShards_C : public UPrimalItemResourceGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_ElementDustFromShards.PrimalItemResource_ElementDustFromShards_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResource_ElementDustFromShards(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
