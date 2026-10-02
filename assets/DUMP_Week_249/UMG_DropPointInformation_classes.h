// WidgetBlueprintGeneratedClass UMG_DropPointInformation.UMG_DropPointInformation_C
struct UUMG_DropPointInformation_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* SlideIn; 
	struct UBorder* Border_Recommended; 
	struct UTextBlock* DescriptionText; 
	struct UHorizontalBox* HorizontalBox_Recommended_2; 
	struct UImage* Image_63; 
	struct UImage* Image_DropBackground; 
	struct UTextBlock* TextBlock_DropName; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_SelectDrop; 
	struct UVerticalBox* VerticalBox_NegativeAttributes; 
	struct UVerticalBox* VerticalBox_PositiveAttributes; 
	struct FMulticastInlineDelegate DropPointSelected; 
	struct FDropGroupsRowHandle DropGroup; 
	bool Left; 

	void ConvertAttributeToInfo(enum class EDropAbundance Enum, struct FText& Text, bool& Negative); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SetAttributes(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AddNextAttribute(struct UWidget* Content); // (Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void AnimatedRemoveFromParent(); // (BlueprintCallable|BlueprintEvent)
	void RemoveWidget(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_DropPointInformation_UMG_BasicButton_SelectDrop_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_DropPointInformation(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void DropPointSelected__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

