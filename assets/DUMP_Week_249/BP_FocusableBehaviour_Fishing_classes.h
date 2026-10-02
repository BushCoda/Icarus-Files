// BlueprintGeneratedClass BP_FocusableBehaviour_Fishing.BP_FocusableBehaviour_Fishing_C
struct UBP_FocusableBehaviour_Fishing_C : UBP_FocusableBehaviour_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusItem* FishingItem; 

	void UpdateProjection(bool NewParam); // (Public|BlueprintCallable|BlueprintEvent)
	void TryAttachToOwner(struct AIcarusItem* ItemActor, struct AActor* Invoking Actor); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdatePanini(struct AIcarusItem* Item); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void FocusChangePanini(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_FocusableBehaviour_Fishing(int32_t EntryPoint); // (Final|UbergraphFunction)
};

