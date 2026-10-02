// BlueprintGeneratedClass BP_HuntingClue.BP_HuntingClue_C
struct ABP_HuntingClue_C : AHuntingClue {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBoxComponent* InteractionBox; 
	struct UInteractableComponent* Interactable; 
	struct UHighlightableComponent* Highlightable; 
	struct USplineComponent* Spline; 
	struct USceneComponent* DefaultSceneRoot; 
	struct FMulticastInlineDelegate ClueUpdated; 
	float LifeTime; 
	struct ABP_HuntingClue_C* NextHuntingClue; 
	struct TArray<struct FVector> SplineLocations; 
	struct ACharacter* AIReference; 
	bool Focused; 
	enum class EHuntingClueState CurrentState; 
	bool Highlighted; 
	struct FHuntingClueSetupRowHandle HuntingClueRow; 
	struct UBP_HuntingManager_C* HuntingManagerRef; 
	bool UseTrail; 

	void GetHuntingWidgetLocation(struct FVector& Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GatherSplineLocations(bool& Return, struct TArray<struct FVector>& Locations); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdatePerceptionState(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateStateVisuals(); // (Public|BlueprintCallable|BlueprintEvent)
	void InitVisuals(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateState(bool Highlight); // (Public|BlueprintCallable|BlueprintEvent)
	void FocusUpdated(struct AActor* Actor); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_SplineLocations(); // (Public|BlueprintCallable|BlueprintEvent)
	void RequestSplineLocations(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateTrail(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_NextHuntingClue(); // (BlueprintCallable|BlueprintEvent)
	void UpdateVisuals(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetNextClue(struct ABP_HuntingClue_C* Clue); // (Public|BlueprintCallable|BlueprintEvent)
	void RegisterHuntingWidget(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetNextClueDistance(float& Distance); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SendSplineLocations(struct TArray<struct FVector>& Locations); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void BndEvt__Highlightable_K2Node_ComponentBoundEvent_1_HighlightChangedSignature__DelegateSignature(struct UHighlightableComponent* Highlightable, struct UPrimitiveComponent* Component, bool bHighlighted); // (BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_HuntingClue(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void ClueUpdated__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

