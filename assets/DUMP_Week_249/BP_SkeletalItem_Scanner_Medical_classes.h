// BlueprintGeneratedClass BP_SkeletalItem_Scanner_Medical.BP_SkeletalItem_Scanner_Medical_C
struct ABP_SkeletalItem_Scanner_Medical_C : ABP_SkeletalItem_Scanner_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetComponent* ScreenWidget; 
	struct AActor* ScannedActor; 

	void OnRep_ScannedActor(); // (BlueprintCallable|BlueprintEvent)
	struct UWidgetComponent* GetScreenWidget(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnViewModeChanged(bool bIsThirdPerson); // (BlueprintCallable|BlueprintEvent)
	void SetScannedActor(struct AActor* ScannedActor); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_Scanner_Medical(int32_t EntryPoint); // (Final|UbergraphFunction)
};

