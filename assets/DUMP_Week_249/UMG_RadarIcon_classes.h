// WidgetBlueprintGeneratedClass UMG_RadarIcon.UMG_RadarIcon_C
struct UUMG_RadarIcon_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* HitBox; 
	struct UImage* IconImage; 
	struct UScaleBox* IconScaleBox; 
	struct UCanvasPanel* LabelCanvas; 
	struct UImage* LabelLineImage; 
	struct UScaleBox* LabelScaleBox_1; 
	struct UTextBlock* LabelText; 
	struct URetainerBox* RetainerBox_2; 
	struct USizeBox* SizeBox_1; 
	bool DrawLabel; 
	struct FVector2D DirectionalOffset; 
	struct UUMG_RadarIcon_C* MasterIcon; 
	struct FString LabelString; 
	bool IsPlayer; 
	struct FMapIconsRowHandle MapIconRow; 
	struct FMapIconsData MapIconData; 

	bool ShouldDrawPathToLinkedActor(struct AActor*& LinkedActor); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool ShouldOverrideWidgetLocation(struct FVector& Location); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool ShouldOverrideVisibility(enum class ESlateVisibility& ForcedVisibility); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetHoverTooltipText(struct FText& Hover Name); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void SetShouldDrawLabel(bool DrawLabel); // (Public|BlueprintCallable|BlueprintEvent)
	void ApplyLabelPosition(enum class RotationalDirections RelativePosition); // (Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void InitialiseIconWidget(struct FMapIconsRowHandle MapIconData, struct AActor* OwningActor); // (Event|Public|BlueprintEvent)
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_UMG_RadarIcon(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

