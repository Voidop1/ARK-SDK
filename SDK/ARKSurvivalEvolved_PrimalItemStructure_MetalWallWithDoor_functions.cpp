// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_MetalWallWithDoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_MetalWallWithDoor.PrimalItemStructure_MetalWallWithDoor_C.ExecuteUbergraph_PrimalItemStructure_MetalWallWithDoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_MetalWallWithDoor_C::ExecuteUbergraph_PrimalItemStructure_MetalWallWithDoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_MetalWallWithDoor.PrimalItemStructure_MetalWallWithDoor_C.ExecuteUbergraph_PrimalItemStructure_MetalWallWithDoor");

	UPrimalItemStructure_MetalWallWithDoor_C_ExecuteUbergraph_PrimalItemStructure_MetalWallWithDoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
