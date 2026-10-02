// WidgetBlueprintGeneratedClass UMG_IcarusCompassIcon.UMG_IcarusCompassIcon_C
struct UUMG_IcarusCompassIcon_C : UIcarusCompassIcon {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Image_Waypoint; 
	struct FMapIconsData CachedMapIconData_1; 
	float FadeOutOverDistance_1; 
	float DesiredOpacity; 
	struct FOrchestrationEventsEnum Event to Check; 

	void OnMapComponentVisibilityChanged(); // (Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_IcarusCompassIcon(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

