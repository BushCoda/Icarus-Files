// WidgetBlueprintGeneratedClass LivingItemUpgradeRow.LivingItemUpgradeRow_C
struct ULivingItemUpgradeRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Icon; 
	struct UTextBlock* Name; 
	struct UTextBlock* Name_Alteration; 
	struct FLivingItemUpgradesRowHandle Upgrade; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_LivingItemUpgradeRow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

