// WidgetBlueprintGeneratedClass UMG_ExpRewardLarge.UMG_ExpRewardLarge_C
struct UUMG_ExpRewardLarge_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* Number; 
	int32_t Amount; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void UpdateValue(int32_t Amount); // (BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ExpRewardLarge(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

