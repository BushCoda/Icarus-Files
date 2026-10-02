// WidgetBlueprintGeneratedClass UMG_RepairItemResource.UMG_RepairItemResource_C
struct UUMG_RepairItemResource_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* Border_Numbers; 
	struct UImage* ItemImage; 
	struct UTextBlock* Percent; 
	struct UBorder* Selectable; 
	struct FItemsStaticRowHandle Item; 
	int32_t Count; 
	bool IsMissing; 
	bool IsPower; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_RepairItemResource(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

