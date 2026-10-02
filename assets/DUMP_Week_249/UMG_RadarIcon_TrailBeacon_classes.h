// WidgetBlueprintGeneratedClass UMG_RadarIcon_TrailBeacon.UMG_RadarIcon_TrailBeacon_C
struct UUMG_RadarIcon_TrailBeacon_C : UUMG_RadarIcon_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_Trail_Beacon_C* BeaconActor; 

	bool ShouldDrawPathToLinkedActor(struct AActor*& LinkedActor); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void InitialiseIconWidget(struct FMapIconsRowHandle MapIconData, struct AActor* OwningActor); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_RadarIcon_TrailBeacon(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

