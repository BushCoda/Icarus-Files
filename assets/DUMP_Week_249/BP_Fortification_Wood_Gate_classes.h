// BlueprintGeneratedClass BP_Fortification_Wood_Gate.BP_Fortification_Wood_Gate_C
struct ABP_Fortification_Wood_Gate_C : ABP_Door_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	float MinAudioShelterValue; 
	struct USkeletalMesh* BaseSkeletalMesh; 
	struct USkeletalMesh* DestructionSkeletalMeshState_2; 

	float GetAudioShelterValue(struct AIcarusPlayerCharacter* Player); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void UpdateDamageState(struct UActorState* ActorState, float NewHealth); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Fortification_Wood_Gate(int32_t EntryPoint); // (Final|UbergraphFunction)
};

