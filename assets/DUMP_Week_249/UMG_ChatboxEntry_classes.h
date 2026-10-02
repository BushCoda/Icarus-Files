// WidgetBlueprintGeneratedClass UMG_ChatboxEntry.UMG_ChatboxEntry_C
struct UUMG_ChatboxEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Avatar; 
	struct UTextBlock* Message; 
	struct UHorizontalBox* PlayerInfo; 
	struct UInvalidationBox* PlayerInfoInvalidationBox; 
	struct UTextBlock* PlayerName; 
	struct UBP_ChatboxItem_C* ChatboxItem; 
	struct FSlateFontInfo PlayerFont; 
	struct FSlateFontInfo LocalFont; 
	struct FSlateFontInfo ServerFont; 

	void UpdateMessageFont(enum class EChatMessageType MessageType); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateMessageText(struct FString Text); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdatePlayerInfo(enum class EChatMessageType MessageType); // (Public|BlueprintCallable|BlueprintEvent)
	void Initialise(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BP_OnEntryReleased(); // (Event|Protected|BlueprintEvent)
	void BP_OnItemExpansionChanged(bool bIsExpanded); // (Event|Protected|BlueprintEvent)
	void BP_OnItemSelectionChanged(bool bIsSelected); // (Event|Protected|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnListItemObjectSet(struct UObject* ListItemObject); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_UMG_ChatboxEntry(int32_t EntryPoint); // (Final|UbergraphFunction)
};

