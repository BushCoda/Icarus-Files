// BlueprintGeneratedClass BTT_TransitionStance.BTT_TransitionStance_C
struct UBTT_TransitionStance_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	enum class EGOAPCharacterStance TargetStance; 
	bool IsScared; 
	enum class EGOAPCharacterStance CurrentStance; 
	struct UAnimMontage* TransitionMontageToPlay; 
	struct ABP_IcarusNPCGOAPCharacter_C* OwningCharRef; 

	void OnNotifyEnd_2F39B60B415EED7B9297DF9280CFD41D(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyBegin_2F39B60B415EED7B9297DF9280CFD41D(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnInterrupted_2F39B60B415EED7B9297DF9280CFD41D(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnBlendOut_2F39B60B415EED7B9297DF9280CFD41D(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnCompleted_2F39B60B415EED7B9297DF9280CFD41D(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_TransitionStance(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

