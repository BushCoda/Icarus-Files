// WidgetBlueprintGeneratedClass UMG_WindTurbine.UMG_WindTurbine_C
struct UUMG_WindTurbine_C : UW_ProjectionWidget_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBackgroundBlur* BackgroundBlur_1; 
	struct UTextBlock* bLocked; 
	struct UOverlay* MainOverlay; 
	struct UOverlay* ModifierOverlay; 
	struct UImage* Pointer; 
	struct URetainerBox* RetainerBox_1; 
	struct UTextBlock* Shelter; 
	struct UTextBlock* Status; 
	struct AIcarusActor* Cached Current Item; 
	struct UUMG_DeployableModifiersList_C* ModifierList; 

	void UpdateVisuals(); // (Public|BlueprintCallable|BlueprintEvent)
	void TickWidget(); // (BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_WindTurbine(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

