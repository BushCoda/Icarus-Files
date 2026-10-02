// BlueprintGeneratedClass BP_MetaDeposit_Uranium.BP_MetaDeposit_Uranium_C
struct ABP_MetaDeposit_Uranium_C : AIcarusActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UHighlightableComponent* Highlightable; 
	struct UFMODAudioComponent* UraniumAudioLoop; 
	struct UNiagaraComponent* Niagara; 
	struct UStaticMeshComponent* SM_Meta_Uranium; 
	struct URectLightComponent* RectLight; 
	struct UStaticMeshComponent* SM_Meta_Uranium_Ground; 
	float Timeline_0_EmissiveIntensity_C1704B9D44FDCD9CFEE96FBC1342D88C; 
	float Timeline_0_MaterialIntensity_C1704B9D44FDCD9CFEE96FBC1342D88C; 
	float Timeline_0_Intensity_C1704B9D44FDCD9CFEE96FBC1342D88C; 
	enum class ETimelineDirection Timeline_0__Direction_C1704B9D44FDCD9CFEE96FBC1342D88C; 
	struct UTimelineComponent* Timeline_1; 
	float Timeline_FadeOut_EmissiveIntensity_56A62B554EAA251B1D80D48436264B4D; 
	float Timeline_FadeOut_MaterialIntensity_56A62B554EAA251B1D80D48436264B4D; 
	float Timeline_FadeOut_Intensity_56A62B554EAA251B1D80D48436264B4D; 
	enum class ETimelineDirection Timeline_FadeOut__Direction_56A62B554EAA251B1D80D48436264B4D; 
	struct UTimelineComponent* Timeline_FadeOut; 
	bool bGlowEnabled; 

	void UpdateGlow(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_bGlowEnabled(); // (BlueprintCallable|BlueprintEvent)
	void Timeline_FadeOut__FinishedFunc(); // (BlueprintEvent)
	void Timeline_FadeOut__UpdateFunc(); // (BlueprintEvent)
	void Timeline_0__FinishedFunc(); // (BlueprintEvent)
	void Timeline_0__UpdateFunc(); // (BlueprintEvent)
	void TriggerFadeOut(); // (BlueprintCallable|BlueprintEvent)
	void TriggerFadeIn(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void SetGlowEnabled(bool bGlowEnabled); // (BlueprintCallable|BlueprintEvent)
	void UpdateHighlightable(bool Active); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_MetaDeposit_Uranium(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

