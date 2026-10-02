// WidgetBlueprintGeneratedClass Umg_GeneticValuesOutline.Umg_GeneticValuesOutline_C
struct UUmg_GeneticValuesOutline_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UCanvasPanel* DrawSpace; 
	struct TArray<struct FVector2D> Points; 
	struct FVector2D Center; 
	float Size; 
	struct TArray<struct FColor> Colours; 

	void TranslateExe(struct FVector2D In, struct FVector2D& Out); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnPaint(struct FPaintContext& Context); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void Setup(struct TArray<struct FVector2D>& Points, struct FVector2D Center, float Size); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_Umg_GeneticValuesOutline(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

