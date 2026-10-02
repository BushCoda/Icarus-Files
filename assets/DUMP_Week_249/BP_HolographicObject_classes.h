// BlueprintGeneratedClass BP_HolographicObject.BP_HolographicObject_C
struct ABP_HolographicObject_C : AIcarusActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* StaticMesh; 
	struct USkeletalMeshComponent* SkeletalMesh; 
	struct USceneComponent* Scene; 
	struct FItemData Item; 
	struct UInventoryComponent* ItemInventory; 
	struct UMaterialInterface* NewMaterial; 
	enum class ProcessorPreview State; 
	bool SkeletalSet; 

	void GetItem(struct FItemData& NewParam); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateVisibility(bool Visible); // (Public|BlueprintCallable|BlueprintEvent)
	void Create(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetState(enum class ProcessorPreview Preview); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnLoaded_7DE56D4A41E366966B10B1A45EFDB124(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void LoadItemMesh(struct TSoftObjectPtr<UObject> MeshToLoad); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_HolographicObject(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

