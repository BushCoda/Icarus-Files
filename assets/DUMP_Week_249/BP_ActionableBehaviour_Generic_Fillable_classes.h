// BlueprintGeneratedClass BP_ActionableBehaviour_Generic_Fillable.BP_ActionableBehaviour_Generic_Fillable_C
struct UBP_ActionableBehaviour_Generic_Fillable_C : UBP_ActionableBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UCapsuleComponent* HitCollider; 
	struct ABP_IcarusPlayerCharacterSurvival_C* OwningPlayer; 

	void Setup(struct AActor* OwningActor); // (Public|BlueprintCallable|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Generic_Fillable(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

