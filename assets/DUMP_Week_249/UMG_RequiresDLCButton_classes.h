// WidgetBlueprintGeneratedClass UMG_RequiresDLCButton.UMG_RequiresDLCButton_C
struct UUMG_RequiresDLCButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UButton* DLCButton; 
	struct URichTextBlock* DLCName; 
	struct UImage* Image_115; 
	struct FDLCPackageDataRowHandle DLC; 

	void RetryDLC(); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void SetDLC(struct FDLCPackageDataRowHandle DLC); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_BioLab_WeaponInfo_DLCButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_RequiresDLCButton(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

