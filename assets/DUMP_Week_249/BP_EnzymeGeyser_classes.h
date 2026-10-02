// BlueprintGeneratedClass BP_EnzymeGeyser.BP_EnzymeGeyser_C
struct ABP_EnzymeGeyser_C : AEnzymeGeyser {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* Niagara_EruptionBase; 
	struct UNiagaraComponent* Niagara_EruptionTop; 
	struct UStaticMeshComponent* SM_Geyser_01; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UOverlapAudioComponent* Audio_Eruption; 
	struct UOverlapAudioComponent* Audio_Geyser; 
	struct UHighlightableComponent* Highlightable; 
	struct UNiagaraComponent* Niagara_Mist; 
	struct USceneComponent* Scene; 
	struct UStaticMeshComponent* StaticMesh; 
	struct USceneComponent* DefaultSceneRoot; 
	float Timeline_1_Float_358402384E5111894982969E0920B36F; 
	enum class ETimelineDirection Timeline_1__Direction_358402384E5111894982969E0920B36F; 
	struct UTimelineComponent* Timeline_2; 
	float Timeline_0_Float_26493B2345BBE52BA6691B8E5C2FBBC0; 
	enum class ETimelineDirection Timeline_0__Direction_26493B2345BBE52BA6691B8E5C2FBBC0; 
	struct UTimelineComponent* Timeline_1; 
	bool HasAttachedAnalyzer; 
	struct UStaticMeshComponent* LocatorMesh; 

	void DebugMaxCompletions(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DeactivateEruptionFX(); // (Public|BlueprintCallable|BlueprintEvent)
	void ActivateEruptionFX(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateBiome(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void HideEditorLocator(); // (Public|BlueprintCallable|BlueprintEvent)
	void ShowEditorLocator(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateAudioState(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_HasAttachedAnalyzer(); // (BlueprintCallable|BlueprintEvent)
	void Timeline_0__FinishedFunc(); // (BlueprintEvent)
	void Timeline_0__UpdateFunc(); // (BlueprintEvent)
	void Timeline_1__FinishedFunc(); // (BlueprintEvent)
	void Timeline_1__UpdateFunc(); // (BlueprintEvent)
	void AddAttachedDeployable(struct ADeployable* Deployable); // (Event|Public|BlueprintEvent)
	void RemoveAttachedDeployable(struct ADeployable* Deployable); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ActivateEruption(); // (BlueprintCallable|BlueprintEvent)
	void DeactivateEruption(); // (BlueprintCallable|BlueprintEvent)
	void ResetCompletions(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_EnzymeGeyser(int32_t EntryPoint); // (Final|UbergraphFunction)
};

