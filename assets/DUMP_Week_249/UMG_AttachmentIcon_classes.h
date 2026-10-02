// WidgetBlueprintGeneratedClass UMG_AttachmentIcon.UMG_AttachmentIcon_C
struct UUMG_AttachmentIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Icon; 
	struct TSoftObjectPtr<UTexture2D> Image; 
	int32_t ImageSize; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void AddPopup(struct FText Name); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_AttachmentIcon(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

