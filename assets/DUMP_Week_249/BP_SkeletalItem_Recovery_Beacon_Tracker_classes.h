// BlueprintGeneratedClass BP_SkeletalItem_Recovery_Beacon_Tracker.BP_SkeletalItem_Recovery_Beacon_Tracker_C
struct ABP_SkeletalItem_Recovery_Beacon_Tracker_C : ABP_SkeletalItem_Scanner_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetComponent* ScreenWidget; 

	struct UWidgetComponent* GetScreenWidget(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_Recovery_Beacon_Tracker(int32_t EntryPoint); // (Final|UbergraphFunction)
};

