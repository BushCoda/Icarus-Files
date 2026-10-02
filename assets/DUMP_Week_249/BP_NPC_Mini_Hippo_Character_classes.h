// BlueprintGeneratedClass BP_NPC_Mini_Hippo_Character.BP_NPC_Mini_Hippo_Character_C
struct ABP_NPC_Mini_Hippo_Character_C : ABP_IcarusNPCGOAPCharacter_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* Alert; 
	struct UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner; 
	enum class EGOAPProperty FastestActiveState; 
	struct TArray<struct USkeletalMesh*> HippoMeshes; 
	struct TArray<struct UMaterialInstance*> HippoMaterials; 
	int32_t CosmeticSlotIndex; 
	struct TArray<struct ABP_NPC_Mini_Hippo_Character_C*> CachedFamily; 

	void OnRep_CosmeticSlotIndex(); // (BlueprintCallable|BlueprintEvent)
	void UpdateCosmeticMaterials(); // (Public|BlueprintCallable|BlueprintEvent)
	bool ReplaceSelfWithDeadItem(struct AIcarusActor*& ReplacementActor, struct TArray<struct FIcarusStatReplicated>& CustomStats); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool GetMontageForAction(struct TSoftClassPtr<UObject>& Action, struct TSoftObjectPtr<UAnimMontage>& ActionMontage, struct FName& MontageSection, struct FName& MontageNotify); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetAlertWidgetLocation(struct FVector& Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void FindFloorAngle(float& Angle); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void IcarusBeginPlay(); // (Event|Public|BlueprintEvent)
	void AggroFamily(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_NPC_Mini_Hippo_Character(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

