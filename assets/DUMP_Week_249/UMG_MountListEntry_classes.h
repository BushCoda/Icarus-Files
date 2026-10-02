// WidgetBlueprintGeneratedClass UMG_MountListEntry.UMG_MountListEntry_C
struct UUMG_MountListEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* OnSelected; 
	struct UImage* Background; 
	struct UBorder* Border_Selected; 
	struct UButton* Button_SelectMount; 
	struct UImage* Gradient; 
	struct UImage* Image_MountPreview; 
	struct UTextBlock* ItemDescription; 
	struct UTextBlock* TextBlock_ExtraInfo; 
	struct UTextBlock* TextBlock_MountLevelAndType; 
	struct UTextBlock* TextBlock_MountName; 
	struct UImage* TopGlow; 
	struct UVerticalBox* VerticalBox_ExtraInfo; 
	struct FMountSaveData PersistentMountData; 
	bool IsSelected; 
	struct FMulticastInlineDelegate SelectedStateUpdated; 
	struct UMaterialInstanceDynamic* DynamicPreviewMaterial; 

	void SetVisuallySelected(bool Selected); // (Public|BlueprintCallable|BlueprintEvent)
	void BP_OnItemExpansionChanged(bool bIsExpanded); // (Event|Protected|BlueprintEvent)
	void Initialise(struct FMountSaveData PersistentMountData); // (BlueprintCallable|BlueprintEvent)
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void SetMountTexture(struct UTexture* Value); // (BlueprintCallable|BlueprintEvent)
	void OnListItemObjectSet(struct UObject* ListItemObject); // (Event|Protected|BlueprintEvent)
	void BP_OnEntryReleased(); // (Event|Protected|BlueprintEvent)
	void BP_OnItemSelectionChanged(bool bIsSelected); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_UMG_MountListEntry(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void SelectedStateUpdated__DelegateSignature(struct UUMG_MountListEntry_C* EntryWidget); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

