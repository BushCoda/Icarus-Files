// BlueprintGeneratedClass BP_Interactable_Milk.BP_Interactable_Milk_C
struct UBP_Interactable_Milk_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODEvent* InteractSound; 
	bool DelayFinished; 
	float DelayTime; 
	float CurrentTime; 

	enum class EViewTraceResultPriority BP_Interactable_Milk_AutoGenFunc(struct FViewTraceResult& Result); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Milk(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

