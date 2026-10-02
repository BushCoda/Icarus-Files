// BlueprintGeneratedClass BP_PartBase.BP_PartBase_C
struct ABP_PartBase_C : AIcarusRocketPart {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UShelteredModifierComponent* ShelteredModifier; 
	struct UNavModifierComponent* NavModifier; 
	struct ABP_DropShip_C* AssociatedDropShip; 
	struct FTransform SyncedTransform; 
	bool ClientSync; 
	bool Collision; 

	void Update Fmod Dropship State(enum class EDropshipDescentStateFMODParam DropshipSequenceState); // (Public|BlueprintCallable|BlueprintEvent)
	void ToggleFlightSFX(enum class ERocketState DropShipState, bool IsLocalPlayer); // (Public|BlueprintCallable|BlueprintEvent)
	void AssembledByDatabase(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_Collision(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_SyncedTransform(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReadyCheck(bool& Success); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void TriggerEvent(struct FDropShipActionsEnum Actions); // (Public|BlueprintCallable|BlueprintEvent)
	void GetMesh(struct UPrimitiveComponent*& Mesh); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void SetEditorHighlight(bool Highlight); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void SetEditorInteractable(bool Interactable); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void Enable Interactable Collision(); // (BlueprintCallable|BlueprintEvent)
	void OnHighlightChanged(struct UHighlightableComponent* Highlightable, struct UPrimitiveComponent* Component, bool bHighlighted); // (BlueprintCallable|BlueprintEvent)
	void Multi_PlayAnimation(struct USkeletalMeshComponent* SkeletalMesh, struct UAnimationAsset* Animation, float StartingPosition, bool Reverse); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void Debug_PrintTransformLocation(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_PartBase(int32_t EntryPoint); // (Final|UbergraphFunction)
};

