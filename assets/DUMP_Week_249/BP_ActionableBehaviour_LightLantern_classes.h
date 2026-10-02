// BlueprintGeneratedClass BP_ActionableBehaviour_LightLantern.BP_ActionableBehaviour_LightLantern_C
struct UBP_ActionableBehaviour_LightLantern_C : UBP_ActionableBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UCapsuleComponent* HitCollider; 
	struct ABP_IcarusPlayerCharacterSurvival_C* OwningPlayer; 
	struct AActor* OwningActor; 
	struct ABP_SkeletalItem_LightBase_C* LightBase; 

	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void Setup(struct AActor* OwningActor); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_LightLantern(int32_t EntryPoint); // (Final|UbergraphFunction)
};

