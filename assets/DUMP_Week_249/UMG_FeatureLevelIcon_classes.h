// WidgetBlueprintGeneratedClass UMG_FeatureLevelIcon.UMG_FeatureLevelIcon_C
struct UUMG_FeatureLevelIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Icon; 
	float IconSize; 

	void SetFeatureLevel(struct FFeatureLevelsRowHandle FeatureLevel); // (BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_FeatureLevelIcon(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

