// BlueprintGeneratedClass BP_NPC_RockDog_Character.BP_NPC_RockDog_Character_C
struct ABP_NPC_RockDog_Character_C : ABP_IcarusNPCGOAPCharacter_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UPointLightComponent* PointLight_Enraged_1; 
	struct UCapsuleComponent* CritArea_Right_Leg; 
	struct UCapsuleComponent* CritArea_Left_Leg; 
	struct UCapsuleComponent* CritArea_Jaw_3; 
	struct UCapsuleComponent* CritArea_Jaw_2; 
	struct UCapsuleComponent* CritArea_Back_3; 
	struct UCapsuleComponent* CritArea_Back_2; 
	struct USceneComponent* Alert; 
	struct UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner; 
	float EnrageEndTimeline_EmissiveAlpha_CED2A1C045DCA9A341C04F82AED8CC4B; 
	enum class ETimelineDirection EnrageEndTimeline__Direction_CED2A1C045DCA9A341C04F82AED8CC4B; 
	struct UTimelineComponent* EnrageEndTimeline; 
	float EnrageTimeline_EmissiveAlpha_20034C3245CA7602695210908A058CF9; 
	enum class ETimelineDirection EnrageTimeline__Direction_20034C3245CA7602695210908A058CF9; 
	struct UTimelineComponent* EnrageTimeline; 
	enum class EGOAPProperty FastestActiveState; 
	bool IsEnraged; 

	void OnRep_IsEnraged(); // (BlueprintCallable|BlueprintEvent)
	void ReplicateBlackboardVariables(); // (Public|BlueprintCallable|BlueprintEvent)
	struct TMap<struct UPrimitiveComponent*, struct FCriticalHitAreasEnum> GetCriticalHitAreas(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FVector GetDamageSourceLocation(struct UAnimMontage* Montage, struct FName SectionName); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	bool GetMontageForAction(struct TSoftClassPtr<UObject>& Action, struct TSoftObjectPtr<UAnimMontage>& ActionMontage, struct FName& MontageSection, struct FName& MontageNotify); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetAlertWidgetLocation(struct FVector& Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void FindFloorAngle(float& Angle); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void EnrageTimeline__FinishedFunc(); // (BlueprintEvent)
	void EnrageTimeline__UpdateFunc(); // (BlueprintEvent)
	void EnrageEndTimeline__FinishedFunc(); // (BlueprintEvent)
	void EnrageEndTimeline__UpdateFunc(); // (BlueprintEvent)
	void UpdateEnrageMaterialStrength(float Strength); // (BlueprintCallable|BlueprintEvent)
	void StartEnrageEffects(); // (BlueprintCallable|BlueprintEvent)
	void StopEnrageEffects(); // (BlueprintCallable|BlueprintEvent)
	void OnFootstepAnimNotify(enum class ECreatureFootstepType FootstepType, enum class ECreatureFootstepDirection FootstepDirection); // (Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_NPC_RockDog_Character(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

