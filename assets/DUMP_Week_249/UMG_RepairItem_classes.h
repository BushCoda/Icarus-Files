// WidgetBlueprintGeneratedClass UMG_RepairItem.UMG_RepairItem_C
struct UUMG_RepairItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* ItemImage; 
	struct UTextBlock* Percent; 
	struct UBorder* Selectable; 
	struct FRepairableItem RepairableItem; 
	struct FItemData Item; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_RepairItem(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

