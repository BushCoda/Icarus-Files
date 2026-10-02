// BlueprintGeneratedClass BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload.BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C
struct UBP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C : UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float ReloadCancelBlendOutTime; 

	int32_t GetAmmoCapacity(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void CanAbortReload(bool& CanAbort); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ServerFinishReload(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnAbortReloadRequested(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReloadSingleRound(); // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetReloadMontageNextSections(struct FName SectionNameToChange, struct FName NextSection); // (Public|BlueprintCallable|BlueprintEvent)
	float GetReloadAnimPlayRate(struct UAnimMontage* Montage); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void CalculateNumberOfRoundsToLoad(int32_t& NumRounds); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void HandleReloadAnimNotify(struct FString NotifyName); // (BlueprintCallable|BlueprintEvent)
	void AbortReloadAnimations(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload(int32_t EntryPoint); // (Final|UbergraphFunction)
};

