// BlueprintGeneratedClass BTD_ShouldSandWormRetreatAfterDamage.BTD_ShouldSandWormRetreatAfterDamage_C
struct UBTD_ShouldSandWormRetreatAfterDamage_C : UBTDecorator_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector LastForcedRetreatHealthKey; 

	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveExecutionStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTD_ShouldSandWormRetreatAfterDamage(int32_t EntryPoint); // (Final|UbergraphFunction)
};

