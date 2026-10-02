// BlueprintGeneratedClass BP_CaveInstance.BP_CaveInstance_C
struct ABP_CaveInstance_C : ACave {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_CaveComponent_C* BP_CaveComponent; 
	struct USceneComponent* DefaultSceneRoot; 
	bool Debug; 
	struct TArray<struct UBP_CaveEntranceComponent_C*> Entrances; 
	struct TArray<struct UBoxComponent*> Volumes; 
	struct TArray<struct FPrefabTransform> VolumeData; 
	struct TArray<struct FPrefabTransform> EntranceData; 
	struct UStaticMeshComponent* DebugMeshRef; 

	float GetCurrentSpelunkingDepth(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	float GetSpelunkingDepthFromLocation(struct FVector Location); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void ToggleDebugDraw(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_CaveInstance(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

