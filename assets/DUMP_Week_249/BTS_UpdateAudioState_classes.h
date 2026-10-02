// BlueprintGeneratedClass BTS_UpdateAudioState.BTS_UpdateAudioState_C
struct UBTS_UpdateAudioState_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	enum class EAIAudioState DesiredEntryState; 
	bool SetStateOnExit; 
	enum class EAIAudioState DesiredExitState; 

	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTS_UpdateAudioState(int32_t EntryPoint); // (Final|UbergraphFunction)
};

