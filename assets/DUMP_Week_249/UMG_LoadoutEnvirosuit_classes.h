// WidgetBlueprintGeneratedClass UMG_LoadoutEnvirosuit.UMG_LoadoutEnvirosuit_C
struct UUMG_LoadoutEnvirosuit_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UOverlay* AllContent; 
	struct UImage* Corner; 
	struct UImage* Corner_2; 
	struct UImage* Corner_3; 
	struct UImage* Corner_4; 
	struct UTextBlock* DefaultSuitName; 
	struct UVerticalBox* DefaultSuitStats; 
	struct UBorder* Empty; 
	struct UBorder* Empty_2; 
	struct UBorder* Hover; 
	struct UImage* Icon; 
	struct UImage* Icon_2; 
	struct UOverlay* InValidSuit; 
	struct UTextBlock* Name; 
	struct UVerticalBox* Stats; 
	struct UOverlay* ValidSuit; 
	struct FItemData CurrentItem; 
	struct FMulticastInlineDelegate OnEnvirosuitChanged; 

	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ClearSuit(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnCursorCleared(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnCursorUpdated(struct FItemData Item); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateStats(struct FItemData Item); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Initialise(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateState(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Update(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_LoadoutEnvirosuit(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OnEnvirosuitChanged__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

