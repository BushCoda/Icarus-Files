// BlueprintGeneratedClass BP_Fortification_Base.BP_Fortification_Base_C
struct ABP_Fortification_Base_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float MinAudioShelterValue; 
	struct UStaticMesh* BaseStaticMesh; 
	struct UStaticMesh* DestructionStaticMeshState_2; 
	struct USkeletalMesh* BaseSkeletalMesh; 
	struct USkeletalMesh* DestructionSkeletalMeshState_2; 

	float GetAudioShelterValue(struct AIcarusPlayerCharacter* Player); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	float GetOcclusionValue(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void UpdateDamageState(struct UActorState* ActorState, float NewHealth); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Fortification_Base(int32_t EntryPoint); // (Final|UbergraphFunction)
};

