// WidgetBlueprintGeneratedClass UMG_NetworkDebugInfo.UMG_NetworkDebugInfo_C
struct UUMG_NetworkDebugInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* BackupHost; 
	struct UTextBlock* BackupHostName; 
	struct UImage* divider; 
	struct UImage* divider_2; 
	struct UTextBlock* FailedUpdateStatus; 
	struct UTextBlock* HeartbeatStatus; 
	struct UTextBlock* HostName; 
	struct UTextBlock* PingNumber; 
	struct UTextBlock* SaveStatus; 
	struct UTextBlock* ServerFps; 
	struct UTextBlock* ServerFPSText; 
	struct FTimerHandle TimerHandle; 

	void UpdateServerFPS(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void StopTracking(); // (Public|BlueprintCallable|BlueprintEvent)
	void StartTracking(); // (Public|BlueprintCallable|BlueprintEvent)
	void NetworkDebugInfo(struct FNetworkingStatus DebugInfo, bool Enabled); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void TimerFired(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_NetworkDebugInfo(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

