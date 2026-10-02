// WidgetBlueprintGeneratedClass W_ProjectionPopup_VoxelTooltip.W_ProjectionPopup_VoxelTooltip_C
struct UW_ProjectionPopup_VoxelTooltip_C : UW_ProjectionWidget_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* Name; 
	struct UImage* OreIcon; 
	struct UImage* Pointer; 
	struct UProgressBar* ResourceBar; 
	struct URetainerBox* RetainerBox_1; 

	enum class EViewTraceResultPriority W_ProjectionPopup_Building_AutoGenFunc(struct FViewTraceResult& Result); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateVisuals(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TickWidget(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_W_ProjectionPopup_VoxelTooltip(int32_t EntryPoint); // (Final|UbergraphFunction)
};

