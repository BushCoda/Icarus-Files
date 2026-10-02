// BlueprintGeneratedClass BP_MapSearchArea_Custom.BP_MapSearchArea_Custom_C
struct ABP_MapSearchArea_Custom_C : AMapSearchAreaProxy {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UIcarusMapIconComponent* IcarusMapIcon; 
	struct USceneComponent* DefaultSceneRoot; 
	struct UUMG_RadarSquare_C* Widget; 
	bool Initialised; 
	struct FMapIconsRowHandle MapIconData; 
	struct UUMG_RadarMainScreen_C* RadarMainScreen; 
	struct UIcarusMapIconComponent* ParentIcon; 
	struct FMapIconsRowHandle MapIcon; 

	void OnRep_MapIconData(); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_8EBA724943AB38CE185D73B81B2F7D71(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_MapSearchArea_Custom(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

