// BlueprintGeneratedClass BP_SkeletalItem_Mission_Radio.BP_SkeletalItem_Mission_Radio_C
struct ABP_SkeletalItem_Mission_Radio_C : ABP_SkeletalItem_Scanner_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	struct UWidgetComponent* GetScreenWidget(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnViewModeChanged(bool bIsThirdPerson); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void SetScannedActor(struct AActor* ScannedActor); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_Mission_Radio(int32_t EntryPoint); // (Final|UbergraphFunction)
};

