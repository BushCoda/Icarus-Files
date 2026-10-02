// WidgetBlueprintGeneratedClass UMG_DropshipEntry.UMG_DropshipEntry_C
struct UUMG_DropshipEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_DropshipPartSmall_C* bot; 
	struct UVerticalBox* Content; 
	struct UTextBlock* DropshipName; 
	struct UButton* ImageButton; 
	struct UBorder* InUse; 
	struct UUMG_DropshipPartSmall_C* Mid; 
	struct UBorder* NameBorder; 
	struct UUMG_DropshipPartSmall_C* Top; 
	struct UUMG_ButtonIcon_C* UMG_ButtonIcon; 
	struct FMulticastInlineDelegate DropshipSelected; 
	int32_t Index; 
	struct FDropship Dropship; 
	bool IsSelected; 

	void SetSelected(bool Selected); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetDropship(struct FDropship Dropship, bool Valid); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_ButtonIcon_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_DropshipEntry(int32_t EntryPoint); // (Final|UbergraphFunction)
	void DropshipSelected__DelegateSignature(int32_t Index); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

