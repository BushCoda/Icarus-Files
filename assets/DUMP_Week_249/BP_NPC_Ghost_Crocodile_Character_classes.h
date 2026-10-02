// BlueprintGeneratedClass BP_NPC_Ghost_Crocodile_Character.BP_NPC_Ghost_Crocodile_Character_C
struct ABP_NPC_Ghost_Crocodile_Character_C : ABP_IcarusNPCGOAPCharacter_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UCameraShakeSourceComponent* CameraShakeSource; 
	struct UNiagaraComponent* NS_Sandworm_Moving; 
	struct UStaticMeshComponent* SM_SandMound; 
	struct USceneComponent* MoundFX; 
	struct UCapsuleComponent* CritArea_Head2; 
	struct UCapsuleComponent* CritArea_Head1; 
	struct UCapsuleComponent* CritArea_Tail1; 
	struct UCapsuleComponent* CritArea_Tail3; 
	struct UCapsuleComponent* CritArea_Neck; 
	struct UCapsuleComponent* CritArea_Spine4; 
	struct UCapsuleComponent* CritArea_Pelvis; 
	struct UCapsuleComponent* CritArea_EyeL; 
	struct UCapsuleComponent* CritArea_EyeR; 
	struct USceneComponent* Alert; 
	struct UCapsuleComponent* CritArea_Spine5; 
	struct UCapsuleComponent* CritArea_Tail7; 
	struct UCapsuleComponent* CritArea_Tail5; 
	struct UCapsuleComponent* CritArea_Spine3; 
	bool IsSandSwimming; 
	float SandSwimAlpha; 
	struct FRotator MoundRotation; 
	struct UMatineeCameraShake* ActiveShake; 

	struct FVector GetAverageTerrainNormal(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetAlertWidgetLocation(struct FVector& Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	struct TMap<struct UPrimitiveComponent*, struct FCriticalHitAreasEnum> GetCriticalHitAreas(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FName GetNextAttackMontageSection(struct AActor* AttackTarget); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool GetMontageForAction(struct TSoftClassPtr<UObject>& Action, struct TSoftObjectPtr<UAnimMontage>& ActionMontage, struct FName& MontageSection, struct FName& MontageNotify); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FVector GetDamageSourceLocation(struct UAnimMontage* Montage, struct FName SectionName); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_NPC_Ghost_Crocodile_Character(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

