// BlueprintGeneratedClass BP_Misson_Examination_Table.BP_Misson_Examination_Table_C
struct ABP_Misson_Examination_Table_C : ABP_DeployableContainerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* DeployableSM2; 
	struct UStaticMeshComponent* DeployableSM1; 
	struct UGFurComponent* GFur; 
	struct USkeletalMeshComponent* SkeletalMesh; 
	struct FMulticastInlineDelegate SampleCollected; 
	bool bCanExtract; 

	void PlayItemAddedAudio(struct FItemsStaticRowHandle Item); // (Public|BlueprintCallable|BlueprintEvent)
	void ExtractSample(struct AIcarusPlayerCharacter* Character); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Snow(float Intensity); // (Public|BlueprintCallable|BlueprintEvent)
	void Sand(float Intensity); // (Public|BlueprintCallable|BlueprintEvent)
	void Ash(float Intensity); // (Public|BlueprintCallable|BlueprintEvent)
	void OnHighlightChanges(struct UHighlightableComponent* Highlightable, struct UPrimitiveComponent* Component, bool bHighlighted); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void Rain(int32_t Millilitres); // (Public|BlueprintCallable|BlueprintEvent)
	void ItemAdded(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Misson_Examination_Table(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void SampleCollected__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

