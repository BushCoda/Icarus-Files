// BlueprintGeneratedClass BTTask_PlayMontage.BTTask_PlayMontage_C
struct UBTTask_PlayMontage_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UAnimMontage* Montage; 
	float MontageStartTime; 
	float PlayRate; 
	struct AIcarusPawn* IcarusPawnRef; 
	struct FName StartingSection; 
	struct AAIController* ControllerRef; 
	struct AIcarusCharacter* IcarusCharacterRef; 
	bool RandomSection; 
	bool FinishOnBlendOut; 
	bool FinishImmediately; 
	struct UAnimMontage* MontageToPlay; 
	struct FName SecondaryMontageSection; 
	float SecondaryDelay; 
	float DelayDeviation; 
	struct FTimerHandle SecondaryTimer; 
	struct FName CurrentSection; 
	struct UAnimNotify* CurrentNotify; 
	struct FScalingRulesEnum SecondaryDelayScaleRule; 
	bool AllowInvalidMontage; 

	void CanSuccessfullyFinishExecute(bool& CanFinish); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	float GetSecondaryDelay(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetMontage(struct UAnimMontage*& Montage); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void OnNotifyEnd_ADF47BDC4F84AE417FDFE595ECA80D65(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyBegin_ADF47BDC4F84AE417FDFE595ECA80D65(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnInterrupted_ADF47BDC4F84AE417FDFE595ECA80D65(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnBlendOut_ADF47BDC4F84AE417FDFE595ECA80D65(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnCompleted_ADF47BDC4F84AE417FDFE595ECA80D65(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void OnMontageComplete(); // (BlueprintCallable|BlueprintEvent)
	void OnMontageInterrupted(); // (BlueprintCallable|BlueprintEvent)
	void OnMontageBlendOut(); // (BlueprintCallable|BlueprintEvent)
	void OnMontageNotifyBegin(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnMontageNotifyEnd(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void PlaySecondaryMontageSection(); // (BlueprintCallable|BlueprintEvent)
	void ManualCompletion(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BTTask_PlayMontage(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

