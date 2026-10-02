// WidgetBlueprintGeneratedClass UMG_FieldGuideItemSearch.UMG_FieldGuideItemSearch_C
struct UUMG_FieldGuideItemSearch_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_ButtonIcon_C* ClearSearchButton; 
	struct UUMG_SearchBox_C* SearchBar; 
	struct FMulticastInlineDelegate FilterItems; 
	struct UPanelWidget* ResultsPaneRef; 
	struct UWidgetSwitcher* SwitcherRef; 

	void ShowSearchHideAlt(); // (Public|BlueprintCallable|BlueprintEvent)
	void HideSearchShowAlt(); // (Public|BlueprintCallable|BlueprintEvent)
	void AttachExternalPanels(struct UPanelWidget* Results, struct UWidgetSwitcher* Switcher); // (Public|BlueprintCallable|BlueprintEvent)
	void SelectedItem(struct FFieldGuideCategoriesRowHandle CategoryRow, struct FItemsStaticRowHandle ItemRow); // (Public|BlueprintCallable|BlueprintEvent)
	void PerformSearch(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_FieldGuideItemSearch_ClearSearch_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_FieldGuideItemSearch_SearchBar_K2Node_ComponentBoundEvent_1_OnSearchBoxChangedEvent__DelegateSignature(struct FText& Text); // (HasOutParms|BlueprintEvent)
	void BndEvt__UMG_FieldGuideItemSearch_SearchBar_K2Node_ComponentBoundEvent_2_OnSearchBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // (HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuideItemSearch(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void FilterItems__DelegateSignature(struct FFieldGuideCategoriesRowHandle CategoryRow, struct FItemsStaticRowHandle ItemRow); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

