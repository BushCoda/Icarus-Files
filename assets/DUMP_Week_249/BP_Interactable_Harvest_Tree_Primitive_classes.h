// BlueprintGeneratedClass BP_Interactable_Harvest_Tree_Primitive.BP_Interactable_Harvest_Tree_Primitive_C
struct UBP_Interactable_Harvest_Tree_Primitive_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_IcarusPlayerCharacterSurvival_C* CurrentPlayer; 
	struct ABP_StaticItem_TreePrimitive_C* StaticItemTreePrimitive; 
	enum class EHandedness Handedness; 

	void Interact Harvest(struct FHitResult Hit); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void MULTI_PlayPickupFX(struct AIcarusPlayerCharacter* Target); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Harvest_Tree_Primitive(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

