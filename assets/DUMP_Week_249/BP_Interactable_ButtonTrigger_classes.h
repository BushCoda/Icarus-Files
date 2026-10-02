// BlueprintGeneratedClass BP_Interactable_ButtonTrigger.BP_Interactable_ButtonTrigger_C
struct UBP_Interactable_ButtonTrigger_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FMulticastInlineDelegate OnButtonInteract; 
	struct FMulticastInlineDelegate OnButtonHold; 
	bool IsButtonInteractable; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_ButtonTrigger(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OnButtonHold__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnButtonInteract__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

