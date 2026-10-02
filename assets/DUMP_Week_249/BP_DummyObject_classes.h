// BlueprintGeneratedClass BP_DummyObject.BP_DummyObject_C
struct ABP_DummyObject_C : AIcarusActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* StaticMesh; 
	struct USkeletalMeshComponent* SkeletalMesh; 
	struct USceneComponent* Scene; 
	struct FItemData Item; 
	int32_t ItemLocation; 
	struct UInventory* ItemInventory; 
	struct UMaterialInterface* NewMaterial; 
	struct FItemData LocalItem; 
	bool SkeletalSet; 

	void UpdateVisibility(bool Visibility); // (Public|BlueprintCallable|BlueprintEvent)
	void CreateLocal(struct FItemData Item); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Create(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetState(enum class ProcessorPreview Preview); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_Item(); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_F290FD0849F356AD3452B8A99B8E0F60(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void LoadItemMesh(struct TSoftObjectPtr<UObject> MeshToLoad); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void Initilaise(struct FItemData Item, int32_t Location, struct UInventory* Inventory); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_DummyObject(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

