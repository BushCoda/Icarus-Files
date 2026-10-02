// BlueprintGeneratedClass BP_Mammoth_IcePillar.BP_Mammoth_IcePillar_C
struct ABP_Mammoth_IcePillar_C : AIcarusActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* PreviewMesh; 
	struct UNiagaraComponent* NS_SnowParticles; 
	struct UNiagaraComponent* NS_IceMammoth_IcePillarExplosion; 
	struct UStaticMeshComponent* StaticMesh; 
	struct USceneComponent* Scene; 
	struct UFMODAudioComponent* IcePillarAudio; 
	struct UCapsuleComponent* Capsule; 
	struct UNiagaraComponent* NS_IceMammoth_IcePillarWarning; 
	float Timeline_1_ZHeight_7890FC6E47F5DDF25A92FD917565223D; 
	enum class ETimelineDirection Timeline_1__Direction_7890FC6E47F5DDF25A92FD917565223D; 
	struct UTimelineComponent* Timeline_2; 
	float Timeline_0_ZHeight_ABC8A0074D64ACCFF47469B46FD88BCE; 
	enum class ETimelineDirection Timeline_0__Direction_ABC8A0074D64ACCFF47469B46FD88BCE; 
	struct UTimelineComponent* Timeline_1; 
	struct FVector TargetLocation; 
	bool FinishedMoving; 
	float InitalZHeight; 
	bool HasD; 
	float ArmorRegainPercent; 

	void Timeline_0__FinishedFunc(); // (BlueprintEvent)
	void Timeline_0__UpdateFunc(); // (BlueprintEvent)
	void Timeline_0__NewTrack_0__EventFunc(); // (BlueprintEvent)
	void Timeline_0__StopAudio__EventFunc(); // (BlueprintEvent)
	void Timeline_1__FinishedFunc(); // (BlueprintEvent)
	void Timeline_1__UpdateFunc(); // (BlueprintEvent)
	void Destroy Pillar(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void BndEvt__BP_Mammoth_IcePillar_Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (HasOutParms|BlueprintEvent)
	void RandomInit(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void PillarTimeout(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void RammedByMammoth(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Mammoth_IcePillar(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

