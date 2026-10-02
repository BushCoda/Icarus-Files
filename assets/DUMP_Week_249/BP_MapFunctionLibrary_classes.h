// BlueprintGeneratedClass BP_MapFunctionLibrary.BP_MapFunctionLibrary_C
struct UBP_MapFunctionLibrary_C : UBlueprintFunctionLibrary {

	void GetLowestGroundHeightAtLocation(struct FVector GridLocation, bool TraceForLandscapeOnly, struct UObject* __WorldContext, struct FVector& Location, bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IsPointBelowLevel(struct FVector WorldLocation, bool TraceForLandscapeOnly, struct UObject* __WorldContext, bool& BelowLevel); // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void IsPointOutsideOfLevel(struct FVector WorldLocation, struct UObject* __WorldContext, bool& IsOutside); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetSurfaceHeightAtLocation(struct FVector GridLocation, bool IncludeActorSurfaces, struct UObject* __WorldContext, struct FVector& Location, bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetUV(struct FVector2D Fractional, struct UObject* __WorldContext, struct FVector2D& UV); // (Static|Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void FromUV(struct FVector2D UV, struct UObject* __WorldContext, struct FVector2D& Fractional); // (Static|Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void IndexToLocation(struct FIntPoint Index, struct UObject* __WorldContext, struct FVector2D& Location); // (Static|Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void LocationToIndex(struct FVector2D Location, struct UObject* __WorldContext, struct FIntPoint& Index); // (Static|Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetAlphabet(struct UObject* __WorldContext, struct TArray<struct FString>& Alphabet); // (Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void IndexToGrid(struct FIntPoint Index, struct UObject* __WorldContext, struct FString& Grid); // (Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GridToIndex(struct FString Grid, struct UObject* __WorldContext, struct FIntPoint& Index); // (Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetZeroIndex(struct UObject* __WorldContext, int32_t& Index); // (Static|Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetGridSize(struct UObject* __WorldContext, float& GridSize); // (Static|Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void LocationToGrid(struct FVector2D Location, struct UObject* __WorldContext, struct FString& Grid, struct FVector2D& UV); // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GridToLocation(struct FString Grid, struct FVector2D UV, struct UObject* __WorldContext, struct FVector2D& Location); // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
};

