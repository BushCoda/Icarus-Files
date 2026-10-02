// WidgetBlueprintGeneratedClass UMG_TalentTree.UMG_TalentTree_C
struct UUMG_TalentTree_C : UTalentTreeWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Background; 
	struct USpacer* BottomSpacer; 
	struct UCanvasPanel* Canvas; 
	struct UNamedSlot* CanvasSlot; 
	struct UNamedSlot* EditorSlot; 
	struct USpacer* LeftSpacer; 
	struct USpacer* RightSpacer; 
	struct USpacer* TopSpacer; 
	struct UOverlay* TreeOverlay; 
	bool Horizontal; 
	struct FBox2D Boundary; 
	struct UUMG_TalentTreeTitle_C* TitleWidget; 
	bool QueueRefresh; 

	struct FVector2D GetCanvasSize(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const)
	void OnTalentChanged(struct FTalentsRowHandle& Talent); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnTalentRemoved(struct FTalentsRowHandle& Talent); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Refresh Talent State(struct UUMG_Talent_Base_C* Talent); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FVector2D GetCanvasOffset(bool bAbsolute); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const)
	void ClearTalentTree(); // (Event|Public|BlueprintCallable|BlueprintEvent|Const)
	void OnTalentTreeCreated(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnTalentAdded(struct FTalentsRowHandle& Talent); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Refresh Tree(struct UTalentModelInterface_Const* Model); // (BlueprintCallable|BlueprintEvent)
	void Connect To Model(); // (BlueprintCallable|BlueprintEvent)
	void Set Width Override(float Override); // (BlueprintCallable|BlueprintEvent)
	void Set Height Override(float Override); // (BlueprintCallable|BlueprintEvent)
	void SetOrientation(enum class EOrientation Orientation); // (BlueprintEvent)
	void SetEditorCanvas(struct UUserWidget* EditorCanvas); // (Event|Public|BlueprintEvent)
	void Talent Hovered(struct UUMG_Talent_Base_C* Talent); // (BlueprintCallable|BlueprintEvent)
	void Talent Unhovered(); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void SetZoomLevel(int32_t Level, float Scale); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_TalentTree(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

