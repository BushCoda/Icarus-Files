// BlueprintGeneratedClass BP_OilGeyser.BP_OilGeyser_C
struct ABP_OilGeyser_C : ABP_WorldObject_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UIcarusMapIconComponent* IcarusMapIcon; 
	struct UFMODAudioComponent* AudioOilBubbleLoop; 
	struct UNiagaraComponent* NS_OilGeyser_Bubbling; 
	struct UStaticMeshComponent* Water; 
	struct USceneComponent* Scene; 
	struct UNiagaraComponent* Niagara_EruptionTop; 
	struct UStaticMeshComponent* SM_Geyser_01; 
	struct UOverlapAudioComponent* Audio_Geyser; 
	struct UNiagaraComponent* Niagara_Eruption; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UOverlapAudioComponent* Audio_Eruption; 
	float Timeline_1_NewTrack_0_E50171144B0529D0DD71B6B1A2723F99; 
	enum class ETimelineDirection Timeline_1__Direction_E50171144B0529D0DD71B6B1A2723F99; 
	struct UTimelineComponent* Timeline_2; 
	float Timeline_0_NewTrack_0_B126C8CB4B3D415A71353ABE48D9BCAA; 
	enum class ETimelineDirection Timeline_0__Direction_B126C8CB4B3D415A71353ABE48D9BCAA; 
	struct UTimelineComponent* Timeline_1; 
	struct UStaticMeshComponent* LocatorMesh; 
	bool bHasPumpJack; 
	bool IconActive; 

	void OnRep_bHasPumpJack(); // (BlueprintCallable|BlueprintEvent)
	void DeactivateEruptionFX(); // (Public|BlueprintCallable|BlueprintEvent)
	void ActivateEruptionFX(); // (Public|BlueprintCallable|BlueprintEvent)
	void HideEditorLocator(); // (Public|BlueprintCallable|BlueprintEvent)
	void ShowEditorLocator(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateAudioState(); // (Public|BlueprintCallable|BlueprintEvent)
	void Timeline_0__FinishedFunc(); // (BlueprintEvent)
	void Timeline_0__UpdateFunc(); // (BlueprintEvent)
	void Timeline_1__FinishedFunc(); // (BlueprintEvent)
	void Timeline_1__UpdateFunc(); // (BlueprintEvent)
	void RemoveAttachedDeployable(struct ADeployable* Deployable); // (Event|Public|BlueprintEvent)
	void AddAttachedDeployable(struct ADeployable* Deployable); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ActivateEruption(); // (BlueprintCallable|BlueprintEvent)
	void DeactivateEruption(); // (BlueprintCallable|BlueprintEvent)
	void SetupMapIcon(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_OilGeyser(int32_t EntryPoint); // (Final|UbergraphFunction)
};

