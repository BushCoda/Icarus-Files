// WidgetBlueprintGeneratedClass UMG_Spawnblockers.UMG_Spawnblockers_C
struct UUMG_Spawnblockers_C : UW_ProjectionWidget_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBackgroundBlur* BackgroundBlur_1; 
	struct UOverlay* MainOverlay; 
	struct UOverlay* ModifierOverlay; 
	struct UImage* Pointer; 
	struct UTextBlock* Radius; 
	struct URetainerBox* RetainerBox_1; 
	struct UTextBlock* Status; 
	struct AIcarusActor* Cached Current Item; 
	struct UUMG_DeployableModifiersList_C* ModifierList; 

	void UpdateVisuals(); // (Public|BlueprintCallable|BlueprintEvent)
	void TickWidget(); // (BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_Spawnblockers(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

