// BlueprintGeneratedClass BP_UIProjectionComponent_Tooltip.BP_UIProjectionComponent_Tooltip_C
struct UBP_UIProjectionComponent_Tooltip_C : UBP_UIProjectionComponent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool IsAlive; 
	struct AIcarusPlayerCharacterSurvival* Player; 
	bool SettingsEnable; 
	bool StatAbilityEnable; 
	float DotToSee; 
	float RangeToDotSee; 
	float RangeToCloseCircleSee; 
	bool DotSeeEnable; 
	bool CircleCloseSee; 
	struct AActor* CurrentItem; 
	float RightOffset; 
	float UpOffset; 
	struct FMulticastInlineDelegate OnItemChanged; 
	struct FHitResult CurrentInteractableHit; 

	void TryUpdateWidgetClass(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GatherBounds(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FVector GetProjectionLocation(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateWidget(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateEnabled(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_IsAlive(); // (BlueprintCallable|BlueprintEvent)
	void GetWidgetLocation(struct FVector& Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_UIProjectionComponent_Tooltip(int32_t EntryPoint); // (Final|UbergraphFunction)
	void OnItemChanged__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

