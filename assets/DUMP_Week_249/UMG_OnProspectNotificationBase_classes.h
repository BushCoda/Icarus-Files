// WidgetBlueprintGeneratedClass UMG_OnProspectNotificationBase.UMG_OnProspectNotificationBase_C
struct UUMG_OnProspectNotificationBase_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FTimerHandle LifespanTimerHandle; 

	void SetLifeSpan(float LifeSpan); // (BlueprintCallable|BlueprintEvent)
	void DestroyWidget(); // (BlueprintCallable|BlueprintEvent)
	void PauseNotification(); // (BlueprintCallable|BlueprintEvent)
	void UnpauseNotification(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_OnProspectNotificationBase(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

