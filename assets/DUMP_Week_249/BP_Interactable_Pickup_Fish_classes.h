// BlueprintGeneratedClass BP_Interactable_Pickup_Fish.BP_Interactable_Pickup_Fish_C
struct UBP_Interactable_Pickup_Fish_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacterSurvival* Current_Player; 
	struct AIcarusItem* CurrentItem; 
	enum class EHandedness Handedness; 
	struct AActor* LastInstigator; 
	struct FItemTemplateRowHandle Item; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Pickup_Fish(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

