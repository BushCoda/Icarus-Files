// BlueprintGeneratedClass BP_Mount_Raptor.BP_Mount_Raptor_C
struct ABP_Mount_Raptor_C : ABP_Mount_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* PetTarget; 
	struct USceneComponent* HandsTarget; 
	int32_t CrouchModifierUID; 

	void PerformAlternateAttack(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FVector GetDamageSourceLocation(struct UAnimMontage* Montage, struct FName SectionName); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct UAnimMontage* GetMontageForGameplayTag(struct FGameplayTag& Tag, struct FName& Section); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const)
	bool GetOverrideMoveSpeedMappingMultiplier(float& OutMultiplier); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	struct FVector GetHandsTargetLocation(struct FVector SeatLocation); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust); // (Event|Public|BlueprintEvent)
	void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust); // (Event|Public|BlueprintEvent)
	void Mounted(struct AIcarusPlayerCharacter* Player); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Mount_Raptor(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

