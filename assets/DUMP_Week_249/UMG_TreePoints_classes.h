// WidgetBlueprintGeneratedClass UMG_TreePoints.UMG_TreePoints_C
struct UUMG_TreePoints_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* GlowAnimation; 
	struct UImage* Arrow; 
	struct UImage* Arrow1; 
	struct UImage* Arrow3; 
	struct UImage* Arrow4; 
	struct UTextBlock* PointsText; 
	struct UBorder* TextBorder; 
	struct FLinearColor PointsColour; 
	struct FLinearColor TalentsColour; 
	struct FLinearColor OrbitalColour; 
	struct FLinearColor BlueprintColour; 
	struct UTalentViewInterface* View; 
	bool NewVar_1; 

	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void SetView(struct UTalentViewInterface* InView); // (BlueprintCallable|BlueprintEvent)
	void OnModelStateChanged(struct UTalentModelInterface_Const* Model); // (BlueprintCallable|BlueprintEvent)
	void UpdatePoints(struct UTalentModelInterface_Const* Model); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_TreePoints(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

