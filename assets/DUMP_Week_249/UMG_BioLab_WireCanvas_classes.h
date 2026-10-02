// WidgetBlueprintGeneratedClass UMG_BioLab_WireCanvas.UMG_BioLab_WireCanvas_C
struct UUMG_BioLab_WireCanvas_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UCanvasPanel* ContentCanvas; 
	struct TMap<struct UUMG_BioLab_UpgradeSlotSelector_C*, struct FBP_WireDetails> Wires; 
	struct TMap<struct UUMG_BioLab_UpgradeSlotSelector_C*, struct UUMG_WirePin_C*> SlotsToPins; 
	struct TMap<struct UUMG_BioLab_UpgradeSlotSelector_C*, bool> CurrentBlendingWires; 
	float WireThickness; 
	float WireLerpDuration; 
	struct FLinearColor UnfocusedWireColour; 
	struct FLinearColor FocusedWireColour; 

	void UpdateFades(float DeltaTime); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetEdgePoint(struct FVector2D LineStart, struct FVector2D BoxPosition, struct FVector2D BoxSize, struct FVector2D ExtraInset, struct FVector2D& BoxEdgePoint); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnPaint(struct FPaintContext& Context); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ConnectWire(struct UUMG_BioLab_UpgradeSlotSelector_C* Selector, struct UUMG_WirePin_C* Pin, struct FVector2D Midpoint); // (BlueprintCallable|BlueprintEvent)
	void SetWireBlendTarget(struct UUMG_BioLab_UpgradeSlotSelector_C* Selector, bool BlendToFocused); // (BlueprintCallable|BlueprintEvent)
	void Cleanup(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_BioLab_WireCanvas(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

