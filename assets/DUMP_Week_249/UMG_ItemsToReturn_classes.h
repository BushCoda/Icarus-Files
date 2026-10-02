// WidgetBlueprintGeneratedClass UMG_ItemsToReturn.UMG_ItemsToReturn_C
struct UUMG_ItemsToReturn_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_PlayerReturnedItemsList_C* UMG_PlayerReturnedItemsList; 
	struct UVerticalBox* VerticalBox_PlayerItemLists; 
	struct TArray<struct FLaunchItemReturnInfo> ValidItems; 
	struct TArray<struct FItemData> InvalidItems; 
	struct FString CurrentPlayerID; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ItemsToReturn(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

