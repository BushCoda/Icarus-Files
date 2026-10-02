// WidgetBlueprintGeneratedClass UMG_DropshipSlot.UMG_DropshipSlot_C
struct UUMG_DropshipSlot_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_CloseButton_2_C* ClearButton; 
	struct UBorder* Empty; 
	struct UImage* Image; 
	struct UTextBlock* SlotPosition; 
	struct FItemData CurrentItem; 
	struct FGameplayTagQuery Query; 
	struct UUMG_DropshipEditor_Dropship_C* EditorDropship; 
	enum class EDropshipPartType Part; 

	void Initialise(struct UUMG_DropshipEditor_Dropship_C* Parent); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateState(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Update(struct FItemData Item); // (Public|BlueprintCallable|BlueprintEvent)
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnLoaded_95C42B9A4E4569F2B77ACA92D0F18F50(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void LoadIcon(struct TSoftObjectPtr<UTexture2D> Texture); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_CloseButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_DropshipSlot(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

