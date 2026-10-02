// BlueprintGeneratedClass BTT_SetDynamicAcceptanceRadius.BTT_SetDynamicAcceptanceRadius_C
struct UBTT_SetDynamicAcceptanceRadius_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector AcceptanceRadiusKey; 
	float MinimumAcceptanceRange; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_SetDynamicAcceptanceRadius(int32_t EntryPoint); // (Final|UbergraphFunction)
};

