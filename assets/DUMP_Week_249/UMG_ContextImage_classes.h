// WidgetBlueprintGeneratedClass UMG_ContextImage.UMG_ContextImage_C
struct UUMG_ContextImage_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct URetainerBox* ContextImageBox; 
	struct UImage* Image; 
	struct UUMG_Crosshair_C* UMG_Crosshair; 
	struct AIcarusActor* LastObject; 
	struct FSlateColor ValidColour; 
	struct FSlateColor InvalidColour; 
	struct FItemData HeldItem; 
	float CurrentAlpha; 
	struct TArray<struct FFContextImageConditions> ContextImageQueries; 
	bool ForceShowCrosshair; 

	void SetForceShowCrosshair(bool ForceShowCrosshair); // (Public|BlueprintCallable|BlueprintEvent)
	enum class EViewTraceResultPriority GetContextResultPriority(struct FViewTraceResult& Result); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateContext(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateTarget(float Alpha); // (Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ContextImage(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

