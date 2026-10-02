// BlueprintGeneratedClass BP_SMItem_Caltrops.BP_SMItem_Caltrops_C
struct ABP_SMItem_Caltrops_C : AStaticItem {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USphereComponent* Sphere; 
	int32_t OverlapDamage; 
	int32_t InitialHitDamage; 
	float PlayerDamageMultiplier; 
	struct AActor* OverlapClassToDamage; 

	void DoDamage(int32_t DamageAmount, struct AActor* Defender); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void BndEvt__BP_Payload_Rock_Golem_Grenade_Caltrops_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (HasOutParms|BlueprintEvent)
	void OverlapChecks(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SMItem_Caltrops(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

