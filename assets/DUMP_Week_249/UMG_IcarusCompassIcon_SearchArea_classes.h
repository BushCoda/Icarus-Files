// WidgetBlueprintGeneratedClass UMG_IcarusCompassIcon_SearchArea.UMG_IcarusCompassIcon_SearchArea_C
struct UUMG_IcarusCompassIcon_SearchArea_C : UUMG_IcarusCompassIcon_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_RadarMainScreen_C* Item; 
	bool HasBeenConstructed; 
	struct FLinearColor Cached Search Area Color; 
	bool IsWithinSearchArea; 
	struct UBPQC_SearchArea_C* SearchAreaComp; 
	struct ABP_MapSearchArea_Custom_C* SearchAreaActor; 
	int32_t CachedRadius; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnSearchAreaConstructed(); // (BlueprintCallable|BlueprintEvent)
	void CheckFadeOutDistance(); // (BlueprintCallable|BlueprintEvent)
	void Destruct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_IcarusCompassIcon_SearchArea(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

