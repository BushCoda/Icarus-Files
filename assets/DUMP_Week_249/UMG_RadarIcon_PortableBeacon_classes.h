// WidgetBlueprintGeneratedClass UMG_RadarIcon_PortableBeacon.UMG_RadarIcon_PortableBeacon_C
struct UUMG_RadarIcon_PortableBeacon_C : UUMG_RadarIcon_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_Portable_Beacon_C* BeaconReference; 

	bool ShouldOverrideVisibility(enum class ESlateVisibility& ForcedVisibility); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnLoaded_926E15924B62D4A1C5770F8FB270B976(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void InitialiseIconWidget(struct FMapIconsRowHandle MapIconData, struct AActor* OwningActor); // (Event|Public|BlueprintEvent)
	void UpdateBeaconStyle(); // (BlueprintCallable|BlueprintEvent)
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_UMG_RadarIcon_PortableBeacon(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

