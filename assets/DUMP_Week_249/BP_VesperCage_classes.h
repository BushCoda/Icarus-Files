// BlueprintGeneratedClass BP_VesperCage.BP_VesperCage_C
struct ABP_VesperCage_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_DEP_Trap_Small_T4; 
	struct USceneComponent* Start; 
	struct USceneComponent* End; 
	struct USkeletalMeshComponent* SkeletalMesh; 
	bool bTriggerRelease; 
	float FlightTime; 
	bool bCanRelease; 

	void OnRep_bTriggerRelease(); // (BlueprintCallable|BlueprintEvent)
	void InfectVesper(); // (BlueprintCallable|BlueprintEvent)
	void ReleaseEvents(); // (BlueprintCallable|BlueprintEvent)
	void ReleaseVesper(); // (BlueprintCallable|BlueprintEvent)
	void DeployableTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_VesperCage(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

