// BlueprintGeneratedClass BP_MountInterface.BP_MountInterface_C
struct UBP_MountInterface_C : UInterface {

	void GetMountGrazingBehaviour(enum class EMountGrazingBehaviourState& GrazingBehaviour); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetMountConsumptionBehaviour(enum class EMountConsumptionBehaviourState& ConsumptionBehaviour); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetMountCombatBehaviour(enum class EMountCombatBehaviourState& CombatBehaviour); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetMountMovementBehaviour(enum class EMountMovementBehaviourState& MovementBehaviour); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void MountGrazingBehaviourUpdated(enum class EMountGrazingBehaviourState NewGrazingBehaviour); // (Public|BlueprintCallable|BlueprintEvent)
	void MountConsumptionBehaviourUpdated(enum class EMountConsumptionBehaviourState NewConsumptionBehaviour); // (Public|BlueprintCallable|BlueprintEvent)
	void MountCombatBehaviourUpdated(enum class EMountCombatBehaviourState NewCombatBehaviour); // (Public|BlueprintCallable|BlueprintEvent)
	void MountMovementBehaviourUpdated(enum class EMountMovementBehaviourState NewMovementBehaviour); // (Public|BlueprintCallable|BlueprintEvent)
};

