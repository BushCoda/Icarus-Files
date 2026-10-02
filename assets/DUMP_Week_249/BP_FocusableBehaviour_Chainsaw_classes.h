// BlueprintGeneratedClass BP_FocusableBehaviour_Chainsaw.BP_FocusableBehaviour_Chainsaw_C
struct UBP_FocusableBehaviour_Chainsaw_C : UBP_FocusableBehaviour_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFillableComponent* FillableReference; 
	bool HasCachedFuelCheck; 
	bool HasEnoughFuel; 
	struct UAnimSequence* FPIdle; 
	struct UAnimSequence* TPIdleStand; 
	struct UAnimSequence* TPIdleCrouch; 
	struct UAnimMontage* FPFocused; 
	struct UAnimMontage* TPFocused; 

	void GetIdleAnim(struct TSoftObjectPtr<UAnimSequence>& OutFPIdleAnim, struct TSoftObjectPtr<UAnimSequence>& OutTPStandingIdleAnim, struct TSoftObjectPtr<UAnimSequence>& OutTPCrouchedIdleAnim); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetFocusedMontage(struct TSoftObjectPtr<UAnimMontage>& FPFocused Montage, struct TSoftObjectPtr<UAnimMontage>& TPFocused Montage, struct TSoftObjectPtr<UAnimMontage>& Item Focused Montage); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void CheckEnoughFuel(struct FStatsEnum StatFuelUse, struct FStatsEnum StatAttackSpeed, bool& HasEnoughFuel); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_FocusableBehaviour_Chainsaw(int32_t EntryPoint); // (Final|UbergraphFunction)
};

