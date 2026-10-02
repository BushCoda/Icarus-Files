// WidgetBlueprintGeneratedClass UMG_IcarusGrid.UMG_IcarusGrid_C
struct UUMG_IcarusGrid_C : UUserWidget {
	struct UUniformGridPanel* Grid; 
	int32_t HorizontalSlots; 
	int32_t SlotCount; 

	struct TArray<struct UWidget*> GetAllChildren(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Refresh(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Clear(); // (Public|BlueprintCallable|BlueprintEvent)
	void Add Widget(struct UUserWidget* Widget); // (Public|BlueprintCallable|BlueprintEvent)
};

