// BlueprintGeneratedClass BP_Landmine.BP_Landmine_C
struct ABP_Landmine_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct USphereComponent* InnerRadius; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UNiagaraComponent* Niagara; 
	float Timeline_0_LightFalloffExponent_342C2ECA4D50B3E0191A7FB65B24B30A; 
	float Timeline_0_LightIntensity_342C2ECA4D50B3E0191A7FB65B24B30A; 
	float Timeline_0_EmissiveIntensity_342C2ECA4D50B3E0191A7FB65B24B30A; 
	enum class ETimelineDirection Timeline_0__Direction_342C2ECA4D50B3E0191A7FB65B24B30A; 
	struct UTimelineComponent* Timeline_1; 
	struct TArray<struct AActor*> ExplosionRange; 
	bool Armed; 
	bool ExplosionTriggered; 
	bool HasExploded; 
	int32_t PlayersInRangeCount; 
	struct UMaterialInstanceDynamic* DynamicMaterial 1; 
	struct UMaterialInstanceDynamic* DynamicMaterial 2; 
	struct FTimerHandle LightTimerHandle; 
	float PlacementGracePeriod; 
	int32_t LandmineState; 
	struct FLinearColor LandmineState1Colour; 
	struct FLinearColor LandmineState2Colour; 
	struct FLinearColor LandmineState3Colour; 
	bool DynamicMaterialsCreated; 
	bool IsEnemyLandmine; 

	void CheckForNoExploCheat(bool& DirtyCheater); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void DoDamageToAI(struct AActor* Defender); // (Public|BlueprintCallable|BlueprintEvent)
	void DoDamageToPlayer(struct AActor* Defender); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DoExplosionEffects(bool PlayBaseExplosionFX); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DoDamage(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_SetDynamicMaterials(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_LandmineState(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void CheckForExplosion(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TriggerExplode(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_Explode(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_Armed(); // (BlueprintCallable|BlueprintEvent)
	void Timeline_0__FinishedFunc(); // (BlueprintEvent)
	void Timeline_0__UpdateFunc(); // (BlueprintEvent)
	void Timeline_0__SetProximityColour__EventFunc(); // (BlueprintEvent)
	void Timeline_0__BeepTrigger__EventFunc(); // (BlueprintEvent)
	void Timeline_0__Explode__EventFunc(); // (BlueprintEvent)
	void BndEvt__BP_Landmine_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // (BlueprintEvent)
	void BndEvt__BP_Landmine_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (HasOutParms|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnExplode(); // (BlueprintCallable|BlueprintEvent)
	void OnArm(); // (BlueprintCallable|BlueprintEvent)
	void Flicker(); // (BlueprintCallable|BlueprintEvent)
	void Grace Period End(); // (BlueprintCallable|BlueprintEvent)
	void Event Damaged(struct UActorState* ActorState, int32_t DamageTaken, struct FDamageEvent& DamageEvent, struct AController* Instigator, struct AActor* DamageCauser); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Landmine(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

