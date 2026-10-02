// BlueprintGeneratedClass BP_SkeletalItem_Golem_Gauntlet.BP_SkeletalItem_Golem_Gauntlet_C
struct ABP_SkeletalItem_Golem_Gauntlet_C : ASkeletalItem {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* BlockingAudio; 
	struct UNiagaraComponent* NS_Gauntlet_Shield; 
	struct UNiagaraComponent* NS_Gauntlet_VoxelCharge; 
	struct USceneComponent* Scene; 
	struct TMap<struct UMaterialInterface*, enum class EVoxelResourceCategory> VoxelMaterials; 
	bool NeedsParticleUpdate; 

	void GetVoxelMaterials(enum class EVoxelResourceCategory ItemToFind, int32_t Dimension 1, struct UMaterialInterface*& Output); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void UpdateAttachment(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void UpdateShieldParticleState(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_Golem_Gauntlet(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

