// BlueprintGeneratedClass BTTask_IceMammoth_SpawnIcePillars.BTTask_IceMammoth_SpawnIcePillars_C
struct UBTTask_IceMammoth_SpawnIcePillars_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UEnvQuery* EQS; 
	enum class EEnvQueryRunMode RunMode; 
	float SpawnRadius; 
	int32_t PillarsPerPerson; 
	struct AActor* CaveEnterance; 
	int32_t MaxPillars; 
	int32_t PillarsToDestroy; 
	struct ABP_NPC_Ice_MammothBoss_Character_C* IMBoss; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void OnQueryFinished(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BTTask_IceMammoth_SpawnIcePillars(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

