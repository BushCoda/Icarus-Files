// BlueprintGeneratedClass BP_Deployable_SpawnBlocker.BP_Deployable_SpawnBlocker_C
struct ABP_Deployable_SpawnBlocker_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBPQC_SearchArea_C* BPQC_SearchArea; 
	int32_t SpawnBlockerRadius; 
	bool SpawnBlockerActive; 
	int32_t DefaultRadiusOverride; 

	int32_t GetSpawnAttractorEffectiveRadius(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	int32_t GetSpawnBlockerEffectiveRadius(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void GetWidgetClass(struct UUserWidget*& Widget); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnRep_SpawnBlockerRadius(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_SpawnBlockerActive(); // (BlueprintCallable|BlueprintEvent)
	void UpdateSpawnBlockerEffects(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateRadius(int32_t SpawnRadius); // (Public|BlueprintCallable|BlueprintEvent)
	void DeployableTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Deployable_SpawnBlocker(int32_t EntryPoint); // (Final|UbergraphFunction)
};

