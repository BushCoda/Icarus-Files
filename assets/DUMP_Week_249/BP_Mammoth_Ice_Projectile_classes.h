// BlueprintGeneratedClass BP_Mammoth_Ice_Projectile.BP_Mammoth_Ice_Projectile_C
struct ABP_Mammoth_Ice_Projectile_C : ASkeletalItem {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USphereComponent* Sphere; 
	struct UNiagaraComponent* NS_ProjectileTrail; 
	struct UStaticMeshComponent* StaticMesh; 
	struct FVector TargetLocation; 
	bool FinishedMoving; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void BndEvt__BP_Mammoth_Ice_Projectile_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Mammoth_Ice_Projectile(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

