// WidgetBlueprintGeneratedClass UMG_TameParent.UMG_TameParent_C
struct UUMG_TameParent_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* Father; 
	struct UImage* Image; 
	struct UImage* Image_51; 
	struct UTextBlock* Mother; 
	struct UHorizontalBox* ParentBox; 
	struct UTextBlock* Text_NoParents; 
	bool HideIfNoParents; 

	void Setup(struct FString Mother, struct FString Father); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_TameParent(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

