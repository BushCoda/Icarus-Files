// WidgetBlueprintGeneratedClass UMG_Painting_Window.UMG_Painting_Window_C
struct UUMG_Painting_Window_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_IconTextButton_C* ConfirmButton; 
	struct UImage* divider; 
	struct UListView* ListView_ItemIcons; 
	struct UTextBlock* TextBlock_54; 
	struct ABP_Painting_Base_C* PaintingReference; 
	struct TArray<struct UPaintingListItem*> PaintingListItems; 
	struct TSoftObjectPtr<UObject> PaintingImage; 

	void UpdateIconList(struct TArray<struct UObject*>& Items); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ProxyUpdateIcon(struct FPaintingsRowHandle PaintingRow); // (Public|BlueprintCallable|BlueprintEvent)
	void GenerateItemList(struct TArray<struct FPaintingsRowHandle>& ValidPaintings); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_Sign_Text_Window_ConfirmButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_Painting_Window(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

