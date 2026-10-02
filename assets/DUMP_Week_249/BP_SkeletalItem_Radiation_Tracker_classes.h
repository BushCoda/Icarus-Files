// BlueprintGeneratedClass BP_SkeletalItem_Radiation_Tracker.BP_SkeletalItem_Radiation_Tracker_C
struct ABP_SkeletalItem_Radiation_Tracker_C : ABP_SkeletalItem_Scanner_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* ScanningBeepAudio; 
	struct UWidgetComponent* ScreenWidget; 
	bool NewVar_1; 
	struct FFMODEventInstance Event Instance; 

	struct UWidgetComponent* GetScreenWidget(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ScanAudio(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_Radiation_Tracker(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

