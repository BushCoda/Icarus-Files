// BlueprintGeneratedClass BTT_IcarusGOAP_Retreat.BTT_IcarusGOAP_Retreat_C
struct UBTT_IcarusGOAP_Retreat_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool IsRetreated; 
	struct AIcarusNPCCharacter* NPCRef; 
	bool IsAborting; 
	struct FGameplayTag RetreatedGameplayTag; 
	struct FGOAPPropertiesRowHandle RetreatedProperty; 
	struct FName RetreatTargetActorKey; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_IcarusGOAP_Retreat(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

