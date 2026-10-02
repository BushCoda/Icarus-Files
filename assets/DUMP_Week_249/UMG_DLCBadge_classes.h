// WidgetBlueprintGeneratedClass UMG_DLCBadge.UMG_DLCBadge_C
struct UUMG_DLCBadge_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Hover; 
	struct UImage* Icon; 
	struct UButton* ImageButton; 
	struct FDLCPackageDataRowHandle DLCPackage; 
	struct TMap<struct FDLCPackageDataRowHandle, struct UTexture2D*> DLCPackageAvailable; 
	struct TMap<struct FDLCPackageDataRowHandle, struct UTexture2D*> DLCPackageUnavailable; 
	struct FMulticastInlineDelegate HoverUpdated; 

	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_DLCBadge_ImageButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_DLCBadge_ImageButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_DLCBadge_ImageButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_DLCBadge(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void HoverUpdated__DelegateSignature(bool IsHovered, struct UUMG_DLCBadge_C* Widget); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

