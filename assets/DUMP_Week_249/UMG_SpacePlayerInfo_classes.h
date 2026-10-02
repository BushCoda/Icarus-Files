// WidgetBlueprintGeneratedClass UMG_SpacePlayerInfo.UMG_SpacePlayerInfo_C
struct UUMG_SpacePlayerInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* CharacterLevelText; 
	struct UTextBlock* PlayerLevelText; 
	struct UTextBlock* PlayerName; 
	struct USizeBox* PlayerNameBox; 
	bool Initialised; 
	struct AIcarusPlayerState* PlayerState; 

	struct FText GetCharacterLevelText(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_SpacePlayerInfo(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

