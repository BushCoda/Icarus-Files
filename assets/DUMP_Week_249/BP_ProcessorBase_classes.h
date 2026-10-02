// BlueprintGeneratedClass BP_ProcessorBase.BP_ProcessorBase_C
struct ABP_ProcessorBase_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UAudioOcclusionComponent* AudioOcclusionComponent; 
	struct USceneComponent* InputOverflow; 
	struct UCameraComponent* Camera; 
	struct FItemData ProcessingItem; 
	struct UUMG_IcarusLinkedActorPanel_C* WidgetClassToOpen; 
	struct FMulticastInlineDelegate UpdateOutputItem; 
	bool HasEnergyComponent; 
	struct UInventory* Processor Inventory; 
	struct UInventory* FuelInventory; 
	struct UProcessingComponent* Processing; 
	bool DisplayPreviewMesh; 
	bool DisplayRecipeMesh; 
	bool PreviewSkeletal; 
	struct UGeneratorComponent* Generator; 

	int32_t GetNextUID(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void PlayCraftedItemSound(struct FProcessingItem Item); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnProcessingCompleted(struct FProcessingItem Item); // (Public|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ActivateAutoCraft(struct UInventory* Inventory, int32_t Location); // (Public|BlueprintCallable|BlueprintEvent)
	void ProcessingItemChanged(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnProcessingObjectChanged(struct FProcessingItem New Object); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnProcessingStopped(enum class EProcessorStoppedReason Reason); // (Public|BlueprintCallable|BlueprintEvent)
	void OnServer_Interact(struct AActor* Instigator); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_ProcessingItem(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void Multi_OnCraftedItem(struct FProcessingItem Item); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ProcessorBase(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void UpdateOutputItem__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

