// WidgetBlueprintGeneratedClass UMG_NotificationPopup.UMG_NotificationPopup_C
struct UUMG_NotificationPopup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FNotification Notification; 
	struct FMulticastInlineDelegate Close; 
	struct FProspectCompleteInformation Prospect Information; 
	bool ShowCloseButton; 

	void UpdateAttachments(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetLoadingWidget(struct UWidget*& Loading); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateProspect(); // (Public|BlueprintCallable|BlueprintEvent)
	void Update(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnFail_5E3F90A94463A9573E2CEFBB8066B33B(struct FResGetProspectSummary& Response); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnSuccess_5E3F90A94463A9573E2CEFBB8066B33B(struct FResGetProspectSummary& Response); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void Show(struct FNotification Notification); // (BlueprintCallable|BlueprintEvent)
	void Claim Mail Items(); // (BlueprintCallable|BlueprintEvent)
	void Delete Mail(); // (BlueprintCallable|BlueprintEvent)
	void PlayShowEffects(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_NotificationPopup(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void Close__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

