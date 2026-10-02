// BlueprintGeneratedClass BP_NPC_Alpha_Wolf_Character.BP_NPC_Alpha_Wolf_Character_C
struct ABP_NPC_Alpha_Wolf_Character_C : ABP_IcarusNPCGOAPCharacter_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UInteractableComponent* Interactable; 
	struct UInventoryComponent* Inventory; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UMaterialBillboardComponent* EyeGlowR; 
	struct UMaterialBillboardComponent* EyeGlowL; 
	struct UGFurComponent* GFur; 
	struct USceneComponent* Alert; 
	struct UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner; 
	enum class EGOAPProperty FastestActiveState; 
	bool HasEmerged; 
	bool HasGeneratedRewards; 

	void OnRep_HasEmerged(); // (BlueprintCallable|BlueprintEvent)
	void GetAlertWidgetLocation(struct FVector& Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void FindFloorAngle(float& Angle); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Enable Eye Glow(); // (BlueprintCallable|BlueprintEvent)
	void Disable Eye Glow(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void Interact(struct AActor* InstigatingActor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void Multicast_ActorDeath(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_NPC_Alpha_Wolf_Character(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

