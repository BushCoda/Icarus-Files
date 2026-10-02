// BlueprintGeneratedClass BP_ActionableBehaviour_Fertility_Serum.BP_ActionableBehaviour_Fertility_Serum_C
struct UBP_ActionableBehaviour_Fertility_Serum_C : UBP_ActionableBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusPlayerCharacterSurvival* OwningPlayer; 
	struct USurvivalCharacterState* SurvivalStateRef; 
	struct UFMODEvent* FMODEvent_Eat; 
	struct UFMODEvent* FMODEvent_Drink; 

	void PlayConsumeSound(struct ACharacter* Character, struct UFMODEvent* Sound); // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Setup(struct AActor* OwningActor); // (Public|BlueprintCallable|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void Owner_PlayEatSound(struct ACharacter* Character); // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent)
	void Owner_PlayDrinkSound(struct ACharacter* Character); // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Fertility_Serum(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

