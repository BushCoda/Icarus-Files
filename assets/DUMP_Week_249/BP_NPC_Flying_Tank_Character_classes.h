// BlueprintGeneratedClass BP_NPC_Flying_Tank_Character.BP_NPC_Flying_Tank_Character_C
struct ABP_NPC_Flying_Tank_Character_C : ABP_IcarusNPCGOAPCharacter_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* TankFlying; 
	struct UCapsuleComponent* CriticalArea_Plate4; 
	struct UCapsuleComponent* CriticalArea_Plate3; 
	struct UCapsuleComponent* CriticalArea_Plate2; 
	struct UCapsuleComponent* CriticalArea_Plate1; 
	struct UCapsuleComponent* CriticalArea_UnderWing; 
	struct UCapsuleComponent* CriticalArea_Underside; 
	struct USceneComponent* Alert; 
	struct UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner; 
	bool IsFlying; 
	struct FName IsFlyingKey; 
	struct TArray<struct TSoftObjectPtr<UObject>> GroundedMontages; 
	struct TArray<struct FGOAPActionsRowHandle> GroundedActions; 

	struct FVector GetDamageSourceLocation(struct UAnimMontage* Montage, struct FName SectionName); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	bool GetMontageForAction(struct TSoftClassPtr<UObject>& Action, struct TSoftObjectPtr<UAnimMontage>& ActionMontage, struct FName& MontageSection, struct FName& MontageNotify); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool GetOverrideMoveSpeedMappingMultiplier(float& OutMultiplier); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void OnFlyingUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_IsFlying(); // (BlueprintCallable|BlueprintEvent)
	void ReplicateBlackboardVariables(); // (Public|BlueprintCallable|BlueprintEvent)
	struct TMap<struct UPrimitiveComponent*, struct FCriticalHitAreasEnum> GetCriticalHitAreas(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FCriticalHitAreasEnum GetDefaultCriticalArea(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void GetAlertWidgetLocation(struct FVector& Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void FindFloorAngle(float& Angle); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnCharacterDamaged(struct FIcarusDamagePacket DamagePacket); // (Event|Public|BlueprintEvent)
	void MULTI_PlayMontage(struct TSoftObjectPtr<UAnimMontage> Montage, struct FName Section, bool ClientsOnly); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void StopFlying(); // (BlueprintCallable|BlueprintEvent)
	void MULTI_PlayGOAPActionMontage(struct FGOAPActionsRowHandle Action, struct FName Section, bool ClientsOnly); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_NPC_Flying_Tank_Character(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

