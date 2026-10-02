// BlueprintGeneratedClass BTD_CheckHealthThreshold.BTD_CheckHealthThreshold_C
struct UBTD_CheckHealthThreshold_C : UBTDecorator_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool FirstThresholdHit; 
	bool SecondThresholdHit; 
	float FirstThreshold; 
	float SecondThreshold; 
	struct FBlackboardKeySelector RegenArmorKey; 

	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTD_CheckHealthThreshold(int32_t EntryPoint); // (Final|UbergraphFunction)
};

