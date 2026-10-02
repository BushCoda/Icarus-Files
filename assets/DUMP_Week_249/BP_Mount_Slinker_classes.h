// BlueprintGeneratedClass BP_Mount_Slinker.BP_Mount_Slinker_C
struct ABP_Mount_Slinker_C : ABP_Mount_Base_C {
	struct USceneComponent* HandsTarget; 

	void OnAttackNotify(struct UAnimMontage* Montage, struct FName NotifyName); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct UAnimMontage* GetMontageForGameplayTag(struct FGameplayTag& Tag, struct FName& Section); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	struct FVector GetDamageSourceLocation(struct UAnimMontage* Montage, struct FName SectionName); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
};

