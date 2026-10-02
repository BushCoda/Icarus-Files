// WidgetBlueprintGeneratedClass UMG_FillableProgressBar.UMG_FillableProgressBar_C
struct UUMG_FillableProgressBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Base; 
	struct UImage* Progress; 
	float CurrentProgress; 
	struct FIcarusResourcesEnum Type; 

	void SetContainerType(struct FIcarusResourcesEnum ResourceType); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void SetProgress(float Percent); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_FillableProgressBar(int32_t EntryPoint); // (Final|UbergraphFunction)
};

