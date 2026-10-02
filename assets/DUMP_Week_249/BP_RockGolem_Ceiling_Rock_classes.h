// BlueprintGeneratedClass BP_RockGolem_Ceiling_Rock.BP_RockGolem_Ceiling_Rock_C
struct ABP_RockGolem_Ceiling_Rock_C : ASkeletalItem {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* Earthquake_Audio; 
	struct UStaticMeshComponent* StaticMesh; 
	struct TSoftObjectPtr<UStaticMesh> SelectedRockMesh; 
	struct TArray<struct TSoftObjectPtr<UStaticMesh>> AvailableRockMeshes; 
	float RotationX; 
	float RotationY; 
	float RotationZ; 

	void OnLoaded_40BCF03848933799DA3ABA94A81941B5(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnRep_SelectedRockMesh(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_RockGolem_Ceiling_Rock(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

