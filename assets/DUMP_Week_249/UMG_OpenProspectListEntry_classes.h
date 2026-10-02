// WidgetBlueprintGeneratedClass UMG_OpenProspectListEntry.UMG_OpenProspectListEntry_C
struct UUMG_OpenProspectListEntry_C : UUMG_ToggleButtonBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Image_OnProspectStatus; 
	struct UButton* ImageButton; 
	struct USizeBox* SizeBox; 
	struct UTextBlock* Text_ProspectName; 
	struct UTextBlock* Text_ProspectType; 
	struct FAssociatedProspectInfo ProspectInfo; 
	struct FButtonStyle NormalStyle; 
	struct FText ProspectTypeText; 
	bool IsOnProspect; 

	void FocusUpdated(bool bNewFocus); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetFocusWidget(bool& bValid, struct UWidget*& Widget, bool& bThis); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetImageButton(struct UButton*& ImageButton); // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetButtonText(struct UTextBlock*& ButtonText); // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_OpenProspectListEntry(int32_t EntryPoint); // (Final|UbergraphFunction)
};

