// BlueprintGeneratedClass BP_ActionableBehaviour_Throwable_Spear.BP_ActionableBehaviour_Throwable_Spear_C
struct UBP_ActionableBehaviour_Throwable_Spear_C : UBP_ActionableBehaviour_Throwable_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool IsSpearReady; 

	void IsCharging(bool& Charging); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void RequestThrow(); // (Public|BlueprintCallable|BlueprintEvent)
	void CanThrow(bool& CanThrow); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnTraitAnimNotify(struct FAnimNotifyEvent& Notify, struct AActor* AnimInstancePawn); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Throwable_Spear(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

