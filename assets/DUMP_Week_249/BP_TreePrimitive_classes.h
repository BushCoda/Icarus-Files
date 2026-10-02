// BlueprintGeneratedClass BP_TreePrimitive.BP_TreePrimitive_C
struct UBP_TreePrimitive_C : UTreePrimitiveComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_TreeBase_C* TreeOwner; 
	struct FItemRewardsRowHandle ReplacementRewardsRowHandle; 
	bool SubdivideCopyMeshTransform; 
	bool SubdivideImmediately; 
	bool IsSoftBranch; 
	float PrimitiveWidth; 
	float SoftBranchMassThreshold; 
	bool IsNavigationRelevant; 
	struct TArray<struct UDecalComponent*> DecalComponents; 
	struct AIcarusItem* ReplacementItemClass; 
	bool AddFrostedAlteration; 

	void TryGrantFrostedAlteration(struct UIcarusStatContainer* StatContainer); // (Public|BlueprintCallable|BlueprintEvent)
	bool Collect Segment(struct FTreePrimitiveDetachContext& DetachContext); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetSubdivideMeshData(bool& Found, struct FTreePrimitiveSubdivideMeshes& SubdivideMeshes); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool ShouldAutoPickupReplacementItem(struct AIcarusCharacter* ContextActionPlayer); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool ShouldTreePrimivieAffectNavigation(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void UpdateSoftBranchState(bool CanBeSoft); // (Public|BlueprintCallable|BlueprintEvent)
	bool CanSupportTreeHierarchy(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void AddItemToPlayerInventory(struct FTreePrimitiveReplacementDescription& ReplacementDescription, struct AIcarusPlayerCharacter* PlayerCharacter, bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SpawnReplacementItemActor(struct FTreePrimitiveReplacementDescription& ReplacementDescription, struct AIcarusPlayerCharacter* DetachmentContextPlayer, struct AIcarusItem*& SpawnedItemActor, bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetReplacementDescriptionForContext(enum class ETreePrimitiveDetachContext DetachContext, struct FTreePrimitiveReplacementDescription& ReplacementDescription); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AddReplacementDescription(enum class ETreePrimitiveDetachContext DetachContext, enum class ETreePrimitiveItemReplaceMethod Method); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool ReplaceTreePrimitiveWithItem(struct FTreePrimitiveDetachContext& DetachContext, struct AIcarusItem*& OutItemActor); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnComponentOverlap_Branch(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnComponentHit_Branch(struct UPrimitiveComponent* Primitive, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnComponentHit_Trunk(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Construct(struct UStaticMeshComponent* MeshComponent); // (Event|Public|BlueprintEvent)
	void Transfer(struct UTreePrimitiveComponent* Source); // (Event|Public|BlueprintEvent)
	void InitializePostConstruction(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_TreePrimitive(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

