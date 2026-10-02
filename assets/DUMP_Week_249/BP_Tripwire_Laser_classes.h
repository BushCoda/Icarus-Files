// BlueprintGeneratedClass BP_Tripwire_Laser.BP_Tripwire_Laser_C
struct ABP_Tripwire_Laser_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* LaserAudioLoop; 
	struct USceneComponent* Effects; 
	struct UStaticMeshComponent* StaticMesh1; 
	struct USceneComponent* PayloadLocator; 
	struct UStaticMeshComponent* StaticMesh; 
	struct UBoxComponent* TriggerShape; 
	int32_t DamageOnOverlap; 
	int32_t DurabilityDamageOnHit; 
	struct ABP_Payload_C* PayloadToSpawn; 
	struct FHitResult SweepResult; 
	float PayloadDamage; 
	bool DestroyOnOverlap; 
	struct UFMODEvent* Event; 
	bool Triggered; 

	void CheckCheat(bool& DoesCheatBlock); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnRep_Triggered(); // (BlueprintCallable|BlueprintEvent)
	void LaunchCharacter(struct ACharacter* IcarusCharacter); // (Public|BlueprintCallable|BlueprintEvent)
	void BndEvt__BoxCombined_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (HasOutParms|BlueprintEvent)
	void TriggerExplosion(struct FVector Location); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void OnTriggered(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Tripwire_Laser(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

