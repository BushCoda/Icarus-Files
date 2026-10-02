// WidgetBlueprintGeneratedClass UMG_ProspectTracker.UMG_ProspectTracker_C
struct UUMG_ProspectTracker_C : UIcarusWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UVerticalBox* CurrentProspects; 
	struct UBorder* Title; 
	bool Initialised; 
	bool Update; 
	bool Found; 

	void Update Prospects(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnSessionsUpdated(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_ProspectTracker(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

