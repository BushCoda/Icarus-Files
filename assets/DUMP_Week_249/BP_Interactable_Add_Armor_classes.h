// BlueprintGeneratedClass BP_Interactable_Add_Armor.BP_Interactable_Add_Armor_C
struct UBP_Interactable_Add_Armor_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacter* Current_Player; 
	struct FItemData FocusedItem; 
	struct TArray<struct FGameplayTag> ValidTags; 
	struct FGameplayTag ItemTag; 
	bool StandAlreadyHasItem; 
	bool IsHoldingSupportedItem; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Add_Armor(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

