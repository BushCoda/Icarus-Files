// BlueprintGeneratedClass BP_Interactable_Lead_Creature.BP_Interactable_Lead_Creature_C
struct UBP_Interactable_Lead_Creature_C : UBP_Interactable_Enter_Seat_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacter* InstigatingPlayer; 

	struct FText GetInteractionText(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetTameDataForOwningNPC(struct TScriptInterface<ISpawnableAI> Target, struct FTamesRowHandle& RowHandle, bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Lead_Creature(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

