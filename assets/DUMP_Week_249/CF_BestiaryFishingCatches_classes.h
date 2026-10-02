// WidgetBlueprintGeneratedClass CF_BestiaryFishingCatches.CF_BestiaryFishingCatches_C
struct UCF_BestiaryFishingCatches_C : UCF_BaseComboInteger_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void OnConstruction(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Handle Execute(struct UUserWidget* Widget, int32_t Amount); // (BlueprintCallable|BlueprintEvent)
	void Handle On Item Set(struct UUserWidget* Widget); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_CF_BestiaryFishingCatches(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

