// WidgetBlueprintGeneratedClass UMG_TerrainButton.UMG_TerrainButton_C
struct UUMG_TerrainButton_C : UIcarusWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Button_Animation; 
	struct URichTextBlock* DLCName; 
	struct UImage* Image_115; 
	struct UImage* Image_142; 
	struct UVerticalBox* LockedOverlay; 
	struct UButton* MainButton; 
	struct UOverlay* MainOverlay; 
	struct UTextBlock* MapDescription; 
	struct UTextBlock* MissionsComplete; 
	struct UTextBlock* TerrainName; 
	struct UUMG_AvailableResourceList_C* UMG_AvailableResourceList_2; 
	struct UUMG_DangerLevel_C* UMG_DangerLevel; 
	struct UUMG_ZoomOnHoverImage_C* UMG_ZoomOnHoverImage; 
	struct FMulticastInlineDelegate TerrainSelected; 
	struct FText Name; 
	struct FText Description; 
	struct UTexture2D* ProspectTexture; 
	struct FTalentTreesRowHandle Terrain; 
	bool Disabled; 
	struct FDLCPackageDataRowHandle DLC Data; 
	struct FText Prompt; 
	int32_t Difficulty; 
	struct FAccountFlagsRowHandle LevelBoostAccountFlag; 
	int32_t LevelBoostTo; 
	struct UUMG_TerrainButtonPromptContents_C* PromptContents; 
	struct TArray<struct FResourceAvailabilityData> AvailableResources; 
	struct FMulticastInlineDelegate Hovered; 
	struct UTexture2D* BackgroundTexture; 
	float ImageZoom; 
	int32_t RenBoost; 
	int32_t ExoticBoost; 

	void ShouldShowWarningMessage(bool& Show); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ShouldShowLevelBoostPrompt(bool& Show); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Confirm(); // (BlueprintCallable|BlueprintEvent)
	void Cancel(); // (BlueprintCallable|BlueprintEvent)
	void GrantLevelBoost(); // (BlueprintCallable|BlueprintEvent)
	void BoostButtonClicked(); // (BlueprintCallable|BlueprintEvent)
	void UpdateDLCLockOverlay(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_TerrainButton(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void Hovered__DelegateSignature(struct UTexture2D* Image); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void TerrainSelected__DelegateSignature(struct FTalentArchetypesRowHandle Terrain); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

