// WidgetBlueprintGeneratedClass UMG_CairnInWorld.UMG_CairnInWorld_C
struct UUMG_CairnInWorld_C : UW_ProjectionWidget_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UOverlay* MainOverlay; 
	struct UTextBlock* Name; 
	struct UTextBlock* Status_2; 

	void TickWidget(); // (BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void UpdateText(struct FText Name, struct FText Text); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_CairnInWorld(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

