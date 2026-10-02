// WidgetBlueprintGeneratedClass UMG_Mailbox.UMG_Mailbox_C
struct UUMG_Mailbox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* OpenAnimation; 
	struct UImage* Angle; 
	struct UImage* Gradient; 
	struct UVerticalBox* MailContainer; 
	struct UImage* MailIcon; 
	struct UTextBlock* MailItems; 
	struct USizeBox* MainContentBox; 
	struct USizeBox* OpenMail; 
	struct UUMG_NotificationContent_C* UMG_NotificationContent; 
	struct FMulticastInlineDelegate CloseWindowEvent; 
	bool Update; 
	bool Visible; 
	int32_t StoredMail; 
	int32_t MaxMail; 
	struct FMulticastInlineDelegate DeleteMailEvent; 
	struct UBackendProxyComponent* P; 
	struct UFMODEvent* Event; 

	void Opened(); // (Public|BlueprintCallable|BlueprintEvent)
	void Closed(); // (Public|BlueprintCallable|BlueprintEvent)
	void ShowNotification(struct FNotification Notification, int32_t Index); // (Public|BlueprintCallable|BlueprintEvent)
	void Refresh(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void HideMail(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnNotificationsUpdated(); // (BlueprintCallable|BlueprintEvent)
	void CollectRewards(struct FString ID); // (BlueprintCallable|BlueprintEvent)
	void DeleteNotification(struct FString ID); // (BlueprintCallable|BlueprintEvent)
	void ReadMail(struct FString ID); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_Mailbox(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void DeleteMailEvent__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void CloseWindowEvent__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

