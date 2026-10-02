// BlueprintGeneratedClass BP_HuntingManager.BP_HuntingManager_C
struct UBP_HuntingManager_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FMulticastInlineDelegate FocusUpdated; 
	struct AActor* HuntingFocus; 
	struct UIcarusStatContainer* OwnerStatContainer; 
	bool CanTrackFootprints; 
	bool CanTrackFootprintTooltips; 
	struct FMulticastInlineDelegate PerceptionStateUpdated; 

	void UpdatePerceptionState(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_HuntingFocus(); // (BlueprintCallable|BlueprintEvent)
	void SetHuntingFocus(struct AActor* NewFocus); // (Public|BlueprintCallable|BlueprintEvent)
	void SERVER_RequestSplineLocations(struct AActor* Clue); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void CLIENT_SendSplineLocations(struct AActor* Clue, struct TArray<struct FVector>& Locations); // (Net|NetReliableHasOutParms|NetClient|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_HuntingManager(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void PerceptionStateUpdated__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void FocusUpdated__DelegateSignature(struct AActor* Actor); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

