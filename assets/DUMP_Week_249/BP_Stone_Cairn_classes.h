// BlueprintGeneratedClass BP_Stone_Cairn.BP_Stone_Cairn_C
struct ABP_Stone_Cairn_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UCameraComponent* Camera; 
	struct FText Title; 
	struct FText Text; 
	struct FMulticastInlineDelegate TextUpdated; 

	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void OnRep_Title(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_Text(); // (BlueprintCallable|BlueprintEvent)
	void GetWidgetClass(struct UUserWidget*& Widget); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void SetStatus(struct FText Title, struct FText Text); // (BlueprintCallable|BlueprintEvent)
	void ItemAdded(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void AddBodyAudio(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Stone_Cairn(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void TextUpdated__DelegateSignature(struct FString Title, struct FString Text); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

