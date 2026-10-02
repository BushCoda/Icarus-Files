// BlueprintGeneratedClass BP_ActionableBehaviour_Flying_Hammer.BP_ActionableBehaviour_Flying_Hammer_C
struct UBP_ActionableBehaviour_Flying_Hammer_C : UBP_ActionableBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_IcarusPlayerCharacterSurvival_C* OwningPlayer; 
	float ShootTime; 
	bool Swinging; 
	float SwingPower; 
	float Power; 
	bool Flying; 
	bool FlyingForward; 
	bool Hovering; 
	int32_t FallDamageModifierUID; 

	void AppyModifierToArmour(bool On); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateFlyingForward(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateFlying(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateSwinging(); // (Public|BlueprintCallable|BlueprintEvent)
	void Setup(struct AActor* OwningActor); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Server_UpdateSwinging(bool Swinging); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void Server_UpdateHover(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void Server_StartLightning(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void Server_StopLightning(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Flying_Hammer(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

