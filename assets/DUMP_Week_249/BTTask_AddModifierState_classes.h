// BlueprintGeneratedClass BTTask_AddModifierState.BTTask_AddModifierState_C
struct UBTTask_AddModifierState_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FModifierStatesRowHandle DesiredModifier; 
	float ModifierLifetime; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_AddModifierState(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

