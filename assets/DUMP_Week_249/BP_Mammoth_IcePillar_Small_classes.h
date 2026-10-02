// BlueprintGeneratedClass BP_Mammoth_IcePillar_Small.BP_Mammoth_IcePillar_Small_C
struct ABP_Mammoth_IcePillar_Small_C : AIcarusActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* NS_SnowParticles; 
	struct UNiagaraComponent* NS_SnowComing; 
	struct UStaticMeshComponent* StaticMesh; 
	struct USceneComponent* Scene; 
	struct UFMODAudioComponent* IcePillarAudio; 
	struct UCapsuleComponent* Capsule; 
	float Timeline_0_ZHeight_672BF15246BCB4CDD915F5857FEB235B; 
	enum class ETimelineDirection Timeline_0__Direction_672BF15246BCB4CDD915F5857FEB235B; 
	struct UTimelineComponent* Timeline_1; 
	struct FVector TargetLocation; 
	bool FinishedMoving; 
	float InitalZHeight; 
	bool HasD; 
	float ArmorRegainPercent; 

	void Timeline_0__FinishedFunc(); // (BlueprintEvent)
	void Timeline_0__UpdateFunc(); // (BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void BndEvt__BP_Mammoth_IcePillar_Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (HasOutParms|BlueprintEvent)
	void RandomInit(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Mammoth_IcePillar_Small(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

