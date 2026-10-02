// WidgetBlueprintGeneratedClass UMG_Painting_Display.UMG_Painting_Display_C
struct UUMG_Painting_Display_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Image_Icon; 
	struct FPaintingsRowHandle CurrentPaintingRow; 
	struct FVector2D Painting Size; 

	bool IsSmallPainting(struct AActor* LinkedActor); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdatePaintingDisplay(struct FPaintingsRowHandle PaintingRow, struct AActor* LinkedActor); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_Painting_Display(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

