// BlueprintGeneratedClass BP_IcarusNPCGOAPCharacter_Juvenile.BP_IcarusNPCGOAPCharacter_Juvenile_C
struct ABP_IcarusNPCGOAPCharacter_Juvenile_C : ABP_IcarusNPCGOAPCharacter_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UGeneticsComponent* Genetics; 
	struct UBP_UIProjectionComponent_MountTooltip_C* BP_UIProjectionComponent_TamingTooltip; 
	struct UInteractableComponent* Interactable; 
	struct AActor* ViewTargetActor; 

	bool CanKillcam(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	struct AActor* GetCurrentAnimationTarget(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsPointWithinFOV(struct FVector TargetLocation, float DotLimit); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void FindNewViewTarget(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateTalentHighlight(); // (Public|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void OnActorDeath(struct UActorState* ActorStateIn); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void IcarusBeginPlay(); // (Event|Public|BlueprintEvent)
	void ValidateGenetics(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_IcarusNPCGOAPCharacter_Juvenile(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

