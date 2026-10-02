// WidgetBlueprintGeneratedClass UMG_FilterButton.UMG_FilterButton_C
struct UUMG_FilterButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UButton* FilterButton; 
	struct UImage* IconImage; 
	struct UImage* SelectedImage; 
	enum class EPrimaryItemTypes FilterType; 
	struct FMulticastInlineDelegate Clicked; 
	struct FSlateColor SelectedColour; 
	struct FSlateColor DefaultColour; 
	struct FTagQueriesRowHandle TagQuery; 

	void UpdateSelected(bool Selected); // (Public|BlueprintCallable|BlueprintEvent)
	void Initialise(struct FItemClassificationsIconsData ItemClassification); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BndEvt__FilterButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__FilterButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_FilterButton(int32_t EntryPoint); // (Final|UbergraphFunction)
	void Clicked__DelegateSignature(struct FTagQueriesRowHandle Query); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

