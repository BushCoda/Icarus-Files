// BlueprintGeneratedClass BTTask_GreatApe_ShowRegenEffect.BTTask_GreatApe_ShowRegenEffect_C
struct UBTTask_GreatApe_ShowRegenEffect_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool enable; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_GreatApe_ShowRegenEffect(int32_t EntryPoint); // (Final|UbergraphFunction)
};

