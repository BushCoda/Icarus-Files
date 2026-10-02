// WidgetBlueprintGeneratedClass UMG_ContextMenu_List_Group.UMG_ContextMenu_List_Group_C
struct UUMG_ContextMenu_List_Group_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UVerticalBox* divider; 
	struct UImage* GroupIcon; 
	struct UVerticalBox* ItemContainer; 

	void SetGroupInfo(struct FContextMenuGroupType GroupType, bool ShowDivider); // (BlueprintCallable|BlueprintEvent)
	void AddItem(struct UUserWidget* ItemWidget); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_ContextMenu_List_Group(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

