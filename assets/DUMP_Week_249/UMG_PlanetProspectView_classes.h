// WidgetBlueprintGeneratedClass UMG_PlanetProspectView.UMG_PlanetProspectView_C
struct UUMG_PlanetProspectView_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* ProspectFadeIn; 
	struct UImage* Landmass_2; 
	struct UImage* Landmass_3; 
	struct UImage* Landmass_4; 
	struct UImage* Landmass_5; 
	struct UImage* Landmass_6; 
	struct UImage* Landmass_7; 
	struct UCanvasPanel* LandMasses; 
	struct UBorder* PlanetBackground; 
	struct UBorder* PlanetImageBG; 
	struct UCanvasPanel* PlanetProspectContainer; 
	struct UWidgetSwitcher* ProspectTypeSwitcher; 
	struct UUMG_ProspectPin_C* UMG_ProspectPin; 
	struct UUMG_ProspectPin_C* UMG_ProspectPin_4; 
	struct UUMG_ProspectPin_C* UMG_ProspectPin_5; 
	struct UUMG_ProspectPin_C* UMG_ProspectPin_6; 
	struct UUMG_ProspectPin_C* UMG_ProspectPin_7; 
	struct UUMG_ProspectPin_C* UMG_ProspectPin_8; 
	struct UUMG_ProspectPin_C* UMG_ProspectPin_9; 
	struct UUMG_ProspectPin_C* UMG_ProspectPin_10; 
	struct UUMG_ProspectPin_C* UMG_ProspectPin_11; 
	struct UUMG_ProspectPin_C* UMG_ProspectPin_12; 
	struct UUMG_ProspectPin_C* UMG_ProspectPin_13; 
	struct UUMG_ProspectPin_C* UMG_ProspectPin_14; 
	struct UUMG_ProspectPin_C* UMG_ProspectPin_15; 
	struct UUMG_ProspectPin_C* UMG_ProspectPin_16; 
	struct TArray<struct UUMG_ProspectPin_C*> PlanetProspectWidgets; 
	struct TArray<struct FFProspectServerInfo> ProspectList; 
	bool FadedIn; 
	struct FMulticastInlineDelegate ProspectSelected; 
	struct FMulticastInlineDelegate ProspectExpired; 

	void RefreshList(struct TArray<struct FFProspectServerInfo>& Prospects); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateLandMassVisuals(bool Enabled, struct UImage* Landmass); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ProspectSelectedEvent(struct FFProspectServerInfo Prospect, bool Active); // (BlueprintCallable|BlueprintEvent)
	void ProspectExpiredEvent(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_PlanetProspectView(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void ProspectExpired__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void ProspectSelected__DelegateSignature(struct FFProspectServerInfo ProspectInfo, bool Active); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

