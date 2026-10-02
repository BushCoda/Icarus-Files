// BlueprintGeneratedClass BP_WorldObject.BP_WorldObject_C
struct ABP_WorldObject_C : AIcarusActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* InteractAudioLocation; 
	struct UInteractableComponent* Interactable; 
	struct UStaticMeshComponent* SM_ObjectMesh; 
	struct USkeletalMeshComponent* SK_ObjectMesh; 
	struct UHighlightableComponent* Highlightable; 
	struct USceneComponent* DefaultSceneRoot; 
	struct FMulticastInlineDelegate WorldInteract; 
	bool WasInteracted; 
	struct UFMODEvent* InteractSound; 
	bool CanInteractSoundRepeat; 
	bool CustomHighlightableSetup; 

	void UpdateHighlightable(struct UHighlightableComponent* Highlightable, struct UPrimitiveComponent* Component, bool bHighlighted); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Play Interact Sound(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnInteract(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_WasInteracted(); // (BlueprintCallable|BlueprintEvent)
	void WorldObject_Held_Interact(struct AActor* Instigator); // (Public|BlueprintCallable|BlueprintEvent)
	void WorldObject_Interact(struct AActor* Instigator); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_WorldObject(int32_t EntryPoint); // (Final|UbergraphFunction)
	void WorldInteract__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

