#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WoodWall_Sloped_Left_SM_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WoodWall_Sloped_Left_SM.WoodWall_Sloped_Left_SM_C
// 0x0000 (0x0AA0 - 0x0AA0)
class AWoodWall_Sloped_Left_SM_C : public ABaseWall_Sloped_Left_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WoodWall_Sloped_Left_SM.WoodWall_Sloped_Left_SM_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WoodWall_Sloped_Left_SM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
