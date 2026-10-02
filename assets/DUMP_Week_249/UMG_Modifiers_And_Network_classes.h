// WidgetBlueprintGeneratedClass UMG_Modifiers_And_Network.UMG_Modifiers_And_Network_C
struct UUMG_Modifiers_And_Network_C : UW_ProjectionWidget_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBackgroundBlur* BackgroundBlur_1; 
	struct UOverlay* MainOverlay; 
	struct UImage* Pointer; 
	struct URetainerBox* RetainerBox_1; 
	struct AIcarusActor* Cached Current Item; 
	struct UUMG_DeployableModifiersList_C* ModifierList; 

	void UpdateVisuals(); // (Public|BlueprintCallable|BlueprintEvent)
	void TickWidget(); // (BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_Modifiers_And_Network(int32_t EntryPoint); // (Final|UbergraphFunction)
};

