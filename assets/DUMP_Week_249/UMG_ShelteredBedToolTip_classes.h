// WidgetBlueprintGeneratedClass UMG_ShelteredBedToolTip.UMG_ShelteredBedToolTip_C
struct UUMG_ShelteredBedToolTip_C : UW_ProjectionWidget_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Corner; 
	struct UImage* Corner_2; 
	struct UImage* Corner_3; 
	struct UImage* Corner_4; 
	struct UImage* Pointer; 
	struct UTextBlock* SleepText; 
	struct UTextBlock* Text; 
	struct UTextBlock* Value; 

	void UpdateComfortLevel(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ShelteredBedToolTip(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

