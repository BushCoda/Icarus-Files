// WidgetBlueprintGeneratedClass W_ProjectionPopup_Building.W_ProjectionPopup_Building_C
struct UW_ProjectionPopup_Building_C : UW_ProjectionWidget_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UProgressBar* DurabilityBar; 
	struct UTextBlock* Name; 
	struct UImage* Pointer; 
	struct URetainerBox* RetainerBox_1; 

	enum class EViewTraceResultPriority W_ProjectionPopup_Building_AutoGenFunc(struct FViewTraceResult& Result); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateVisuals(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void UpdateBuildingVisuals(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_W_ProjectionPopup_Building(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

