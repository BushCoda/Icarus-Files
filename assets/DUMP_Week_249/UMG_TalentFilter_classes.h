// WidgetBlueprintGeneratedClass UMG_TalentFilter.UMG_TalentFilter_C
struct UUMG_TalentFilter_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_SearchBox_C* SearchBar; 
	struct UUMG_ButtonIcon_C* UMG_ButtonIcon; 
	struct UTalentViewInterface* TalentView; 

	void UpdateTextFilter(struct FText TextIn); // (Public|BlueprintCallable|BlueprintEvent)
	void HighlightTalents(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Setup(struct UTalentViewInterface* View, bool ShowClear); // (Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_TalentFilter_SearchBar_K2Node_ComponentBoundEvent_4_OnSearchBoxChangedEvent__DelegateSignature(struct FText& Text); // (HasOutParms|BlueprintEvent)
	void BndEvt__UMG_TalentFilter_SearchBar_K2Node_ComponentBoundEvent_5_OnSearchBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // (HasOutParms|BlueprintEvent)
	void BndEvt__UMG_TalentFilter_UMG_ButtonIcon_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_TalentFilter(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

