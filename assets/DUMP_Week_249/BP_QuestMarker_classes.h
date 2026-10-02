// BlueprintGeneratedClass BP_QuestMarker.BP_QuestMarker_C
struct ABP_QuestMarker_C : AQuestMarker {
	struct UArrowComponent* Arrow; 
	struct UStaticMeshComponent* Sphere1; 
	struct USphereComponent* Sphere; 
	struct UBillboardComponent* Billboard; 
	struct UBillboardComponent* FailedBillboard; 
	struct USceneComponent* DefaultSceneRoot; 
	bool Failed; 
	bool Debug; 
	struct FBiomesEnum Biome; 
	struct AActor* PreviewClass; 

	void RefreshBiome(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool GetFlatAreaSize(float& Size); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool ValidateFlatArea(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Validate(); // (Public|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
};

