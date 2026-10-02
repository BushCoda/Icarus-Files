// WidgetBlueprintGeneratedClass UMG_ContextMenu_Radial_Item.UMG_ContextMenu_Radial_Item_C
struct UUMG_ContextMenu_Radial_Item_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* ContentBox; 
	struct UCanvasPanel* ContentCanvas; 
	struct UImage* ContentImage; 
	struct UTextBlock* CountText; 
	struct UImage* LockImage; 
	struct UOverlay* Overlay_ContentContainer; 
	struct UImage* RadialSegmentImage; 
	struct UUMG_FeatureLevelIcon_C* UMG_FeatureLevelIcon; 
	struct UMaterialInstanceDynamic* MaterialInstance; 
	float StartPoint; 
	float DegreeValue; 
	float MouseMin; 
	float MouseMax; 
	int32_t Number; 
	struct FMulticastInlineDelegate SegmentSelected; 
	struct FText Selected Text; 
	struct FVector2D PointToRotate; 
	bool Disabled; 
	struct FMulticastInlineDelegate ContextItemSelected; 
	struct FName ContextMenuItemIdentifier; 
	int32_t ContextMenuItemPayload; 
	float MinHighlightDistanceThreshold; 

	void ShouldHighlight(float Angle, float Distance, bool& ShouldHighlight); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetContextMenuItemData(struct FContextMenuItemData ContextMenuItemData); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SegmentClicked(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnLoaded_F90C4F064D1EE4ED4FA90A802A59BE4C(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void CreateStyle(); // (BlueprintCallable|BlueprintEvent)
	void AsyncLoadImage(struct TSoftObjectPtr<UTexture2D> Texture); // (BlueprintCallable|BlueprintEvent)
	void SetHighlighted(bool Highlighted); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_ContextMenu_Radial_Item(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void ContextItemSelected__DelegateSignature(struct FName ItemId, int32_t ItemPayload); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void SegmentSelected__DelegateSignature(struct UUMG_ContextMenu_Radial_Item_C* Selected); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

