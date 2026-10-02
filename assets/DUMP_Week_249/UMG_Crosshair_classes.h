// WidgetBlueprintGeneratedClass UMG_Crosshair.UMG_Crosshair_C
struct UUMG_Crosshair_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Bottom; 
	struct UImage* Centre; 
	struct UImage* Left; 
	struct UOverlay* Overlay_45; 
	struct UImage* Right; 
	struct UImage* Top; 
	float MinSize; 
	float MaxSize; 
	float Scale; 
	struct UTexture2D* CentreTexture; 
	struct UTexture2D* OutsideTexture; 
	float CurrentAlpha; 
	bool BowMode; 
	struct UActorComponent* CrosshairProvider; 

	bool GetCrosshairVisibility(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ToggleBowMode(bool On); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateBowMode(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateTextures(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateCrosshairColors(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateCrosshair(float Alpha); // (Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PeriodCrosshairUpdate(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_Crosshair(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

