// BlueprintGeneratedClass BP_FocusableBehaviour_FocusableArmour_GolemGauntlet.BP_FocusableBehaviour_FocusableArmour_GolemGauntlet_C
struct UBP_FocusableBehaviour_FocusableArmour_GolemGauntlet_C : UBP_FocusableBehaviour_FocusableArmour_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusItem* Item Actor; 
	struct AActor* Invoking Actor; 

	void RetryAttachment(); // (Public|BlueprintCallable|BlueprintEvent)
	void TryAttachToOwner(struct AIcarusItem* ItemActor, struct AActor* Invoking Actor); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_FocusableBehaviour_FocusableArmour_GolemGauntlet(int32_t EntryPoint); // (Final|UbergraphFunction)
};

