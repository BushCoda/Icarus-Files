// BlueprintGeneratedClass BP_Mission_NPC_Base.BP_Mission_NPC_Base_C
struct ABP_Mission_NPC_Base_C : AIcarusNPCMissionCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UInventoryComponent* Inventory; 
	struct UInteractableComponent* Interactable; 
	struct UHighlightableComponent* Highlightable; 
	struct UFMODAudioComponent* DialogueAudio; 
	bool ShouldLookAt; 
	struct UFMODEvent* InteractSound; 
	bool IgnoreLookAtNeckMovement; 
	struct FMulticastInlineDelegate OnInteract; 
	float MaxLookAtAlpha; 
	bool Interact Cooldown; 
	bool bHasRegisteredSpeaker; 
	struct UAnimSequence* OverrideAnimationSequence; 
	struct UAnimSequence* OverrideLookAtAnimationSequence; 
	bool IsSoldier; 
	bool IsADS; 
	bool CustomHighlightableSetup; 

	void UpdateHighlightable(struct UHighlightableComponent* Highlightable, struct UPrimitiveComponent* Component, bool bHighlighted); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Access_Inventory(struct AActor* Object); // (Public|BlueprintCallable|BlueprintEvent)
	void TriggerDialogue(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FAIRelationshipsRowHandle GetRelationshipData(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void Interact(struct AIcarusPlayerCharacter* Player, bool IsHoldInteract); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UnregisterDialogueSpeaker(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RegisterDialogueSpeaker(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void OnNPCDataUpdated(); // (Event|Public|BlueprintEvent)
	void EndInteractCooldown(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (Event|Public|BlueprintEvent)
	void DamageMissionNPC(struct UActorState* ActorState, int32_t DamageTaken, struct FDamageEvent& DamageEvent, struct AController* Instigator, struct AActor* DamageCauser); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Mission_NPC_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OnInteract__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

