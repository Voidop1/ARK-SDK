#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_CarrionEater_Medium_Arthro_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSettings_CarrionEater_Medium_Arthro.DinoSettings_CarrionEater_Medium_Arthro_C
// 0x0000 (0x0090 - 0x0090)
class UDinoSettings_CarrionEater_Medium_Arthro_C : public UDinoSettings_CarrionEater_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_CarrionEater_Medium_Arthro.DinoSettings_CarrionEater_Medium_Arthro_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSettings_CarrionEater_Medium_Arthro(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
