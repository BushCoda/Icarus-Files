// BlueprintGeneratedClass ConstructionFunctionLibrary.ConstructionFunctionLibrary_C
struct UConstructionFunctionLibrary_C : UBlueprintFunctionLibrary {

	void DeconstructBuildingsAndDeployables(struct FVector BoundsOrigin, struct FVector BoundsExtent, struct FVector OverflowBagLocation, struct UObject* __WorldContext); // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RemoveDuplicateBuildings(struct TArray<struct ABP_Building_Base_C*>& Buildings, struct UObject* __WorldContext, struct TArray<struct ABP_Building_Base_C*>& UniqueBuildings); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
};

