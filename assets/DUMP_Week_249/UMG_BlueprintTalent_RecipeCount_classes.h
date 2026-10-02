// WidgetBlueprintGeneratedClass UMG_BlueprintTalent_RecipeCount.UMG_BlueprintTalent_RecipeCount_C
struct UUMG_BlueprintTalent_RecipeCount_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* CountImage; 
	struct UOverlay* RecipeCount; 
	struct UTextBlock* RecipeNumber; 
	int32_t CurrentIndex; 
	int32_t Count; 
	struct FTalentsRowHandle Talent; 
	int32_t Increment; 
	bool bIsCounting; 
	struct FTimerHandle Timer; 
	bool Locked; 
	bool NeedsUpdate; 

	void Update(); // (BlueprintCallable|BlueprintEvent)
	void SetTalent(struct FTalentsRowHandle Talent); // (BlueprintCallable|BlueprintEvent)
	void SetLocked(bool bLocked); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_BlueprintTalent_RecipeCount(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

