// WidgetBlueprintGeneratedClass UMG_BinocularsOverlay.UMG_BinocularsOverlay_C
struct UUMG_BinocularsOverlay_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Image_Overlay; 
	struct TSoftObjectPtr<UTexture> LastOverlay; 
	struct UMaterialInstanceDynamic* DynamicMaterial; 

	void OnLoaded_199834114403C52AC88EA695E379BCA9(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void InnerSetScopeOverlay(struct FFirearmScopeDataRowHandle ScopeRow); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_BinocularsOverlay(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

