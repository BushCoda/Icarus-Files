// WidgetBlueprintGeneratedClass UMG_MainMap.UMG_MainMap_C
struct UUMG_MainMap_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* MapDisabled; 
	struct UVerticalBox* DisabledVbox; 
	struct UImage* Image; 
	struct UImage* Image_60; 
	struct UHorizontalBox* KeyPrompts; 
	struct UBorder* MapDisabledBox; 
	struct UUMG_RadarMainScreen_C* UMG_RadarMainScreen; 
	struct UUMG_UserInterface_C* UserInterface; 
	bool IsMapDisabled; 

	void ConnectedPlayerInitialised(struct FConnectedPlayer& ConnectedPlayer); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void UpdateMapVisibility(); // (BlueprintCallable|BlueprintEvent)
	void OnLocalPlayerStatsChanged(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_MainMap(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

