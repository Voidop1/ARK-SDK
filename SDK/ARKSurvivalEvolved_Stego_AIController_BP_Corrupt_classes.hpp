#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Stego_AIController_BP_Corrupt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Stego_AIController_BP_Corrupt.Stego_AIController_BP_Corrupt_C
// 0x0027 (0x0910 - 0x08E9)
class AStego_AIController_BP_Corrupt_C : public AStego_AIController_BP_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x08E9(0x0007) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x08F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x08F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x08F9(0x0003) MISSED OFFSET
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x08FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsWithinAttackRange_ReturnValue;                 // 0x0900(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0901(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_FindNewTarget_ReturnValue;                       // 0x0908(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Stego_AIController_BP_Corrupt.Stego_AIController_BP_Corrupt_C");
		return ptr;
	}


	float BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue);
	bool BPShouldNotifyNeighbor(class APrimalDinoCharacter** neighbor);
	void BPNotifyTargetSet();
	void UserConstructionScript();
	void CheckIfFlyerIsOutOfRange();
	void ExecuteUbergraph_Stego_AIController_BP_Corrupt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
