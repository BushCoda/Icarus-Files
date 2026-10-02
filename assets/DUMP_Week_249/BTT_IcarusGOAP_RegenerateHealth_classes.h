// BlueprintGeneratedClass BTT_IcarusGOAP_RegenerateHealth.BTT_IcarusGOAP_RegenerateHealth_C
struct UBTT_IcarusGOAP_RegenerateHealth_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	int32_t RegenPercent; 
	struct AIcarusNPCGOAPCharacter* CharacterRef; 
	float TimeToRegenerate; 
	struct AAIController* ControllerRef; 
	bool IsRegenerating; 
	float FractionalRegen; 
	int32_t TargetHealthAmount; 

	void ReceiveAbort(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void RegenerateHealth(float DeltaSeconds); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // (Event|Protected|BlueprintEvent)
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_IcarusGOAP_RegenerateHealth(int32_t EntryPoint); // (Final|UbergraphFunction)
};

