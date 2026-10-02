// BlueprintGeneratedClass BP_ActionableBehaviour_Shear_Wool.BP_ActionableBehaviour_Shear_Wool_C
struct UBP_ActionableBehaviour_Shear_Wool_C : UBP_ActionableBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USurvivalCharacterState* SurvivalStateRef; 
	struct UFMODEvent* FMODEvent_Eat; 
	struct UFMODEvent* FMODEvent_Drink; 
	float TraceDistance; 

	int32_t CalculateDurabilityDamage(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void PlaySwing(struct AIcarusPlayerCharacterSurvival* Target Player); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayConsumeSound(struct AIcarusMountCharacter* Mount, struct UFMODEvent* Sound); // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void PlaySwingAnimation(struct AIcarusPlayerCharacterSurvival* Player); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Shear_Wool(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

