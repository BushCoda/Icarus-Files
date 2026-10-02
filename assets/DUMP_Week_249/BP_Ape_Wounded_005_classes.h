// BlueprintGeneratedClass BP_Ape_Wounded_005.BP_Ape_Wounded_005_C
struct ABP_Ape_Wounded_005_C : ABP_WorldObject_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UIcarusMapIconComponent* IcarusMapIcon; 
	struct USkeletalMeshComponent* SkeletalMesh; 
	struct FMulticastInlineDelegate Shackled; 
	bool bIsShackled; 
	struct FPoseSnapshot RagdollPose; 
	struct FPoseSnapshot NetworkedPose; 

	void OnRep_bIsShackled(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void WorldObject_Interact(struct AActor* Instigator); // (Public|BlueprintCallable|BlueprintEvent)
	void OnHighlightChanged(struct UHighlightableComponent* Highlightable, struct UPrimitiveComponent* Component, bool bHighlighted); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Ape_Wounded_005(int32_t EntryPoint); // (Final|UbergraphFunction)
	void Shackled__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

