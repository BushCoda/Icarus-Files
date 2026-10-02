// BlueprintGeneratedClass BP_Interactable_Note_Base.BP_Interactable_Note_Base_C
struct ABP_Interactable_Note_Base_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* NS_Sprites; 
	struct FCollectableNotesRowHandle NoteRow; 

	struct FCollectableNotesRowHandle GetNoteRowHandle(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetNoteRowHandle(struct FCollectableNotesRowHandle& RowHandle); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnRep_NoteRow(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateNote(struct FCollectableNotesRowHandle Note); // (Public|BlueprintCallable|BlueprintEvent)
	void WorldObject_Interact(struct AActor* Instigator); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Note_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

