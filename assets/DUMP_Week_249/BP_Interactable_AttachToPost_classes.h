// BlueprintGeneratedClass BP_Interactable_AttachToPost.BP_Interactable_AttachToPost_C
struct UBP_Interactable_AttachToPost_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FTagQueriesRowHandle BaitQuery; 
	struct FText CurrentlyHeldBaitName; 
	bool Needs Linked Character; 
	bool Needs Linked Hitching Post; 
	struct ABP_StaticItem_HitchingRope_C* HitchingRopeRef; 
	struct AIcarusPlayerCharacter* PlayerRef; 
	struct AIcarusPlayerCharacter* InstigatingPlayer; 

	void GetTameDataForOwningNPC(struct TScriptInterface<ISpawnableAI> Target, struct FTamesRowHandle& RowHandle, bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void LeadJuvenile(struct AActor* Instigator); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetLinkRequirements(struct AIcarusPlayerCharacter* Player, bool& NeedsLinkedCharacter, bool& NeedsLinkedHitchingPost); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	struct FText GetInteractionText(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_AttachToPost(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

