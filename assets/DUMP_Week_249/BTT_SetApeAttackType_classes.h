// BlueprintGeneratedClass BTT_SetApeAttackType.BTT_SetApeAttackType_C
struct UBTT_SetApeAttackType_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector EnumKey; 
	enum class GreatApeAttackType NewEnumValue; 

	void ReceiveExecute(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_SetApeAttackType(int32_t EntryPoint); // (Final|UbergraphFunction)
};

