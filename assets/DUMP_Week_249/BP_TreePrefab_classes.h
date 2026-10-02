// BlueprintGeneratedClass BP_TreePrefab.BP_TreePrefab_C
struct ABP_TreePrefab_C : ATreePrefab {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool DebugRuntimeInstance; 
	bool DebugInstancePhysicsDynamic; 
	struct FName DebugInstanceTreeRootName; 
	struct FTreeSetupProperties SetupProperties; 
	struct TArray<struct UObject*> LoadedSubdivideMeshes; 
	bool SubdivideMeshesLoaded; 
	struct FVector DebugInstanceFallDirection; 

	void CheckLoadedSubdivideMeshes(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetupPrimitiveDynamicMaterials(struct UPrimitiveComponent* Primitive, struct FVector PivotPosition); // (Public|BlueprintCallable|BlueprintEvent)
	void DebugInstanceTreeImp(struct FTreeRuntimeCreateArguments Args); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnLoaded_725FB44141605CD1726AD5A5598E8E8C(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void PreloadSubdivideMeshes(); // (BlueprintCallable|BlueprintEvent)
	void OnCreatedTreeRuntime(struct ATreeBase* TreeBase); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_TreePrefab(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

