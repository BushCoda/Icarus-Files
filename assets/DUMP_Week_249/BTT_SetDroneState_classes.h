// BlueprintGeneratedClass BTT_SetDroneState.BTT_SetDroneState_C
struct UBTT_SetDroneState_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector DroneStateKey; 
	enum class DroneState NewDroneState; 

	void ReceiveExecute(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_SetDroneState(int32_t EntryPoint); // (Final|UbergraphFunction)
};

