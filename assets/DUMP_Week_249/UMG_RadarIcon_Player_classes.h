// WidgetBlueprintGeneratedClass UMG_RadarIcon_Player.UMG_RadarIcon_Player_C
struct UUMG_RadarIcon_Player_C : UUMG_RadarIcon_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_IcarusPlayerState_C* PlayerState; 

	bool ShouldOverrideVisibility(enum class ESlateVisibility& ForcedVisibility); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void InitialiseIconWidget(struct FMapIconsRowHandle MapIconData, struct AActor* OwningActor); // (Event|Public|BlueprintEvent)
	void InitialiseIconWithPlayerData(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_RadarIcon_Player(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

