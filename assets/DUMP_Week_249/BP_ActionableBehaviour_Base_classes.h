// BlueprintGeneratedClass BP_ActionableBehaviour_Base.BP_ActionableBehaviour_Base_C
struct UBP_ActionableBehaviour_Base_C : UActionableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FRandomStream RandomStream; 
	bool DEBUG_ShowGetAnimationErrorMessages; 
	struct AActor* BehaviorOwner; 
	struct AIcarusPlayerCharacterSurvival* BehaviorOwnerPlayer; 
	bool ShowNoDurabilityError; 
	struct FTimerHandle NoDurabilityErrorTimerHandle; 
	bool UseInsufficientStaminaSound; 
	bool UseInsufficientDurabilitySound; 
	int32_t TemporaryStatUID; 

	void RemoveTemporaryActionableStats(int32_t OptionalUID); // (Public|BlueprintCallable|BlueprintEvent)
	void AddTemporaryActionableStats(struct TMap<struct FStatsEnum, int32_t>& InStats, int32_t& StatsUID); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool HasLivingItemUpgrade(struct FLivingItemUpgradesRowHandle Upgrade); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void PlayActionItemBrokenSound(); // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayActionInsufficientStaminaSound(); // (Protected|BlueprintCallable|BlueprintEvent)
	void IsLocallyOwned(bool& LocallyOwned); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void StopActionMontage(struct AIcarusPlayerCharacter* AnimTarget, float BlendOutTime); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ShowErrorMessage(struct FText Message, struct FTimerHandle Timer, float ErrorCooldown, struct FTimerHandle& OutTimerHandle); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitActionable(); // (Public|BlueprintCallable|BlueprintEvent)
	void ProcessDurabilityLoss(int32_t Durability); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TryGetFailAnimations(struct TArray<struct FName>& TP_AnimNames, struct TArray<struct FName>& FP_AnimNames); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TryGetMissAnimations(struct TArray<struct FName>& TP_AnimNames, struct TArray<struct FName>& FP_AnimNames); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TryGetSuccessAnimations(struct FValidHitTypesRowHandle ValidHitType, struct TArray<struct FName>& TP_AnimNames, struct TArray<struct FName>& FP_AnimNames); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Select Random Weighted Montage(struct UAnimMontage* AnimMontage, struct TArray<struct FName>& SectionNames, struct FName& ChosenSection); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void PlayActionMontage(struct AIcarusPlayerCharacter* AnimTarget, bool PlayRandom, float SpeedModifier, struct TArray<struct FName>& TPAnimSections, struct TArray<struct FName>& FPAnimSections); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void PerformActionFromMenu(struct AActor* InvokingActor); // (Event|Public|BlueprintEvent)
	void OnErrorMessageCooldownComplete(); // (BlueprintCallable|BlueprintEvent)
	void OnActionInsufficientStamina(enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void OnActionInsufficientDurability(enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

