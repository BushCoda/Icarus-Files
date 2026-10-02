// BlueprintGeneratedClass BP_GreatApe_Rock.BP_GreatApe_Rock_C
struct ABP_GreatApe_Rock_C : ASkeletalProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* StaticMesh; 
	struct USceneComponent* Scene; 
	struct USphereComponent* Sphere; 
	struct FVector RotationSpeed; 
	bool HitGround; 

	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void BndEvt__BP_GreatApe_Rock_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (HasOutParms|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_GreatApe_Rock(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

