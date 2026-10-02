// WidgetBlueprintGeneratedClass Umg_GeneticValues.Umg_GeneticValues_C
struct UUmg_GeneticValues_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_GeneticTitle_C* Agility; 
	struct UCanvasPanel* DrawSpace; 
	struct UUMG_GeneticTitle_C* Endurance; 
	struct UUMG_GeneticTitle_C* Hardiness; 
	struct UUMG_GeneticTitle_C* Muscle; 
	struct UUMG_GeneticTitle_C* Toughness; 
	struct UUmg_GeneticValuesOutline_C* Umg_GeneticValuesOutline; 
	struct UUMG_ScaleableFrame_C* UMG_ScaleableFrame; 
	struct UUMG_GeneticTitle_C* Utility; 
	struct UUMG_GeneticTitle_C* Vitality; 
	struct FGeneticValuesRowHandle GeneticValue; 
	int32_t Value; 
	struct FText Built Tooltip; 
	struct TArray<struct FVector2D> Points; 
	struct FVector2D Center; 
	float Size; 
	struct TArray<struct FColor> Colours; 
	struct TArray<struct FGeneticValuesRowHandle> ValuesOrder; 
	struct TArray<float> Values; 
	struct TArray<struct UUMG_GeneticTitle_C*> Widgets; 

	void TranslateExe(struct FVector2D In, struct FVector2D& Out); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Translate(struct FVector2D In, struct FVector2D& Out); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Initialise(struct TArray<struct FCreatureGenetics>& Values); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void Redraw(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_Umg_GeneticValues(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

