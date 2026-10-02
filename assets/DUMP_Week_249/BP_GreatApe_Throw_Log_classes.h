// BlueprintGeneratedClass BP_GreatApe_Throw_Log.BP_GreatApe_Throw_Log_C
struct ABP_GreatApe_Throw_Log_C : ASkeletalProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* Scene; 
	struct UStaticMeshComponent* StaticMesh; 
	struct UCapsuleComponent* Capsule; 
	bool HitGround; 
	struct FRotator RotatorSpeed; 

	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void BndEvt__BP_GreatApe_Throw_Log_Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (HasOutParms|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_GreatApe_Throw_Log(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

