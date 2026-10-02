// BlueprintGeneratedClass BP_PrototypeFunctionLibrary.BP_PrototypeFunctionLibrary_C
struct UBP_PrototypeFunctionLibrary_C : UBlueprintFunctionLibrary {

	void DebugLineText(struct FVector LineStart, struct FVector LineEnd, struct FLinearColor Color, float Duration, float Thickness, struct FString Text, struct UObject* __WorldContext); // (Static|Public|BlueprintCallable|BlueprintEvent)
	void DebugSphereText(struct FVector Center, float Radius, int32_t Segments, struct FLinearColor Color, float Duration, float Thickness, struct FString Text, struct UObject* __WorldContext); // (Static|Public|BlueprintCallable|BlueprintEvent)
	void GetSplineDistanceAtLocation(struct USplineComponent* Spline, struct FVector Location, struct UObject* __WorldContext, float& Distance); // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
};

