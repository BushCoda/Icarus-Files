// WidgetBlueprintGeneratedClass UMG_CenterAlignedHorizontal.UMG_CenterAlignedHorizontal_C
struct UUMG_CenterAlignedHorizontal_C : UUserWidget {
	struct UVerticalBox* Grid; 
	int32_t HorizontalSlots; 
	int32_t TotalCount; 

	struct TArray<struct UWidget*> GetAllChildren(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Refresh(); // (Public|BlueprintCallable|BlueprintEvent)
	void Clear(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Add Widget(struct UUserWidget* Widget); // (Public|BlueprintCallable|BlueprintEvent)
};

