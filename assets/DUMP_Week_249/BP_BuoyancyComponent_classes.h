// BlueprintGeneratedClass BP_BuoyancyComponent.BP_BuoyancyComponent_C
struct UBP_BuoyancyComponent_C : UBuoyancyBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool Floating; 
	bool GeneratePoints; 
	int32_t SwimmingModifierUID; 

	void OnRep_Floating(); // (BlueprintCallable|BlueprintEvent)
	void GeneratePointsFromSockets(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GenerateMeshPoints(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ClearTestPoints(); // (Public|BlueprintCallable|BlueprintEvent)
	void GeneratePointsForMesh(struct UStaticMeshComponent* Mesh, bool HalfPoints); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GenerateFloatingPointsFromMesh(struct TArray<struct UStaticMeshComponent*>& Meshes); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateState(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateOverlappedState(); // (Event|Public|BlueprintEvent)
	void GenerateFloatingPoints(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_BuoyancyComponent(int32_t EntryPoint); // (Final|UbergraphFunction)
};

