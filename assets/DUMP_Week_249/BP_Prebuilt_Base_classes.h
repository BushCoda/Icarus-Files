// BlueprintGeneratedClass BP_Prebuilt_Base.BP_Prebuilt_Base_C
struct ABP_Prebuilt_Base_C : APrebuiltStructure {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UIcarusMapIconComponent* IcarusMapIcon; 
	struct USceneComponent* DefaultSceneRoot; 
	struct TSoftClassPtr<UObject> GridBaseClass; 
	struct ABuildingGridBase* CurrentGrid; 
	struct FMulticastInlineDelegate SpawningComplete; 
	struct FSerializedStructure CachedStructure; 
	int32_t CurrentGridIndex; 
	struct FTransform CurrentGridTransform; 
	struct FTransform CurrentActorTransform; 
	bool ShowMapIcon; 
	struct TArray<struct ABP_WorldObject_C*> WorldObjectDecals; 

	void PopulateWithLoot(struct FItemRewardsRowHandle ItemRewards); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void EndRecording(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FindDeployables(struct FItemsStaticRowHandle Row, struct TArray<struct ADeployable*>& FoundDeployables); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void EnableStormClearDecal(); // (Public|BlueprintCallable|BlueprintEvent)
	void OptimizeDecals(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool LoadStructure(struct FSerializedStructure SerializedStructure); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Add Items to Actor(struct AActor* Object, struct FInventoryIDEnum InventoryID, struct TMap<struct FItemsStaticRowHandle, int32_t> Items); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_ShowMapIcon(); // (BlueprintCallable|BlueprintEvent)
	void DamageStructure(int32_t RawValue); // (Public|BlueprintCallable|BlueprintEvent)
	void OnLoaded_71C24261460C53F5162670BAF5917A5B(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_BF3978C54E3865DD2BB7019BB448624D(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void BlueprintLoad(struct FSerializedStructure CachedStructure); // (BlueprintCallable|BlueprintEvent)
	void BP_CleanupStructure(float LifeTime); // (Event|Public|BlueprintEvent)
	void BP_NotifyBuildComplete(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Prebuilt_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void SpawningComplete__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

