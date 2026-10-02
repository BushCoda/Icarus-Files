// WidgetBlueprintGeneratedClass UMG_RecommendedObjects.UMG_RecommendedObjects_C
struct UUMG_RecommendedObjects_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* ActiveMounts; 
	struct UTextBlock* ActivePipes_2; 
	struct UTextBlock* ActiveWires_2; 
	struct UTextBlock* BuildingPieces; 
	struct UProgressBar* BuildingProgress; 
	struct UProgressBar* DeployableProgress; 
	struct UTextBlock* Deployables; 
	struct UProgressBar* MountProgress; 
	struct UHorizontalBox* PipeBox_2; 
	struct UProgressBar* PipeProgress_2; 
	struct UHorizontalBox* WireBox_2; 
	struct UProgressBar* WireProgress_2; 
	int32_t PipeCount; 
	int32_t WireCount; 

	void GetProgressBarColor(float Percent, struct FLinearColor& NewParam); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnWidgetUpdated(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_RecommendedObjects(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

