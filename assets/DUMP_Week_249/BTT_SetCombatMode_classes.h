// BlueprintGeneratedClass BTT_SetCombatMode.BTT_SetCombatMode_C
struct UBTT_SetCombatMode_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector CombatModeKey; 
	enum class SoldierCombatMode DesiredCombatMode; 

	void ReceiveExecute(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_SetCombatMode(int32_t EntryPoint); // (Final|UbergraphFunction)
};

