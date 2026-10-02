// BlueprintGeneratedClass BP_Ranch_Gate_Sign.BP_Ranch_Gate_Sign_C
struct ABP_Ranch_Gate_Sign_C : ABP_Sign_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_DCO_Giant_Ranch_Sign_Gate_Door02; 
	struct UStaticMeshComponent* SM_DCO_Giant_Ranch_Sign_Gate_Door01; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	bool bOpen; 

	void OnRep_bOpen(); // (BlueprintCallable|BlueprintEvent)
	void UpdateSign(struct AActor* Interactor); // (Public|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void UpdateSignWidgetText(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void DisableForcedAnimUpdates(); // (BlueprintCallable|BlueprintEvent)
	void TemporarilyForceAnimUpdates(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Ranch_Gate_Sign(int32_t EntryPoint); // (Final|UbergraphFunction)
};

