// BlueprintGeneratedClass BP_LakePointComponent.BP_LakePointComponent_C
struct UBP_LakePointComponent_C : UActorComponent {

	void FixVolumeCollision(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetWaterPlaneScale(struct FVector& Scale); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Generate Points(float DensityOverride, bool MinLakeDepthOverride, struct TArray<struct FWaterPoint>& WaterPoints, struct TMap<struct FIntPoint, struct FVector>& ResultsMap); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
};

