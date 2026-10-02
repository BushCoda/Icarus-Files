// BlueprintGeneratedClass BP_NPC_Scorpion_Character.BP_NPC_Scorpion_Character_C
struct ABP_NPC_Scorpion_Character_C : ABP_IcarusNPCGOAPCharacter_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* Alert; 
	struct UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner; 
	enum class EGOAPProperty FastestActiveState; 
	struct FName LastAttackSection; 
	bool HasEmerged; 
	struct FTimerHandle EmergeTimer; 

	void OnRep_HasEmerged(); // (BlueprintCallable|BlueprintEvent)
	void CanUseStingAttack(bool& WantsToSting); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FVector GetDamageSourceLocation(struct UAnimMontage* Montage, struct FName SectionName); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FName GetNextAttackMontageSection(struct AActor* AttackTarget); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetAlertWidgetLocation(struct FVector& Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void FindFloorAngle(float& Angle); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void CompleteEmerge(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_NPC_Scorpion_Character(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

