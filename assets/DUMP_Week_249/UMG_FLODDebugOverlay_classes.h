// WidgetBlueprintGeneratedClass UMG_FLODDebugOverlay.UMG_FLODDebugOverlay_C
struct UUMG_FLODDebugOverlay_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UButton* BTN_SetCollisionRange; 
	struct UButton* BTN_SetOverlapRange; 
	struct UScrollBox* ScrollBox_List; 
	struct UTextBlock* TB_DestroyedBodies; 
	struct UTextBlock* TB_NewBodies; 
	struct UTextBlock* TB_TotalBodies; 
	struct UEditableTextBox* TF_OverlapInfluenceRadius; 
	struct UEditableTextBox* TF_PhysRadius; 
	struct UVerticalBox* VB_LoadedTileList; 

	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void SlowTick(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_FLODDebugOverlay_BTN_SetOverlapRange_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_FLODDebugOverlay_BTN_SetCollisionRange_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_FLODDebugOverlay(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

