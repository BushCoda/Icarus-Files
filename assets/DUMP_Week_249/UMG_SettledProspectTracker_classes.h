// WidgetBlueprintGeneratedClass UMG_SettledProspectTracker.UMG_SettledProspectTracker_C
struct UUMG_SettledProspectTracker_C : UIcarusWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UVerticalBox* CurrentProspects; 
	struct UBorder* Title; 
	bool Initialised; 
	bool Update; 
	bool Found; 

	void UpdateNotifications(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnNotificationsUpdated(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_SettledProspectTracker(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

