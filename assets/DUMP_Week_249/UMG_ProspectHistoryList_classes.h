// WidgetBlueprintGeneratedClass UMG_ProspectHistoryList.UMG_ProspectHistoryList_C
struct UUMG_ProspectHistoryList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UListView* MultiplayerList; 
	struct UVerticalBox* MultiplayerVertBox; 
	struct FMulticastInlineDelegate SelectProspect; 
	struct FTimerHandle Handle; 

	void AddProspectToList(struct UProspectHistoryResult* ProspectResult); // (Public|BlueprintCallable|BlueprintEvent)
	void RefreshList(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ProspectHistoryList(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void SelectProspect__DelegateSignature(struct FFProspectServerInfo ProspectInfo, bool Active); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

