#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureBP_WoodChair_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StructureBP_WoodChair.StructureBP_WoodChair_C
// 0x0000 (0x0E89 - 0x0E89)
class AStructureBP_WoodChair_C : public AStructureSeatingBaseBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureBP_WoodChair.StructureBP_WoodChair_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_StructureBP_WoodChair(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
