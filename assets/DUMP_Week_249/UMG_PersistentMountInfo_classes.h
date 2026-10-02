// WidgetBlueprintGeneratedClass UMG_PersistentMountInfo.UMG_PersistentMountInfo_C
struct UUMG_PersistentMountInfo_C : UUserWidget {
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

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Initialise(struct FMountSaveData PersistentMountData); // (BlueprintCallable|BlueprintEvent)
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void BndEvt__UMG_PersistentMountInfo_Button_SelectMount_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void SetMountTexture(struct UTexture* Value); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_PersistentMountInfo(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void SelectedStateUpdated__DelegateSignature(struct UUMG_PersistentMountInfo_C* PersistentMountWidget); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

