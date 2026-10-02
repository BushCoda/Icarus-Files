// BlueprintGeneratedClass BP_Interactable_Cancel_Taming.BP_Interactable_Cancel_Taming_C
struct UBP_Interactable_Cancel_Taming_C : UBP_Interactable_Enter_Seat_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FName ParentCharacterKey; 

	void GetTameDataForOwningNPC(struct TScriptInterface<ISpawnableAI> Target, struct FTamesRowHandle& RowHandle, bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Cancel_Taming(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

