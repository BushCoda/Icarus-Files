// WidgetBlueprintGeneratedClass UMG_Boss_Button.UMG_Boss_Button_C
struct UUMG_Boss_Button_C : UIcarusWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Hover; 
	struct UBorder* Border_BG; 
	struct UVerticalBox* BossName; 
	struct UBorder* ComingSoon; 
	struct UImage* Image; 
	struct UImage* Image_Foreground; 
	struct UImage* Image_Timer; 
	struct UBorder* Lock; 
	struct UButton* MainButton; 
	struct UOverlay* MainOverlay; 
	struct UTextBlock* Name; 
	struct UTextBlock* Number; 
	struct UProgressBar* RespawnBar; 
	struct USizeBox* RespawnContainer; 
	struct UVerticalBox* RespawnInfomation; 
	struct UTextBlock* respawntext; 
	struct UTextBlock* RespawnText_Returns; 
	struct URichTextBlock* TerrainName; 
	struct UBorder* Unavialable; 
	struct UImage* WeaponImage; 
	struct UOverlay* WeaponOverlay; 
	struct UImage* WpnGradient; 
	struct UTexture2D* Weapon; 
	struct UTexture2D* Background; 
	struct UTexture2D* Foreground; 
	struct UTexture2D* Hovered; 
	struct FLivingItemShopItemsRowHandle LegendaryWeapon; 
	struct FWorldBossesRowHandle Boss; 
	struct TArray<struct FTerrainsRowHandle> Terrain; 
	bool isComingSoon; 
	bool Disabled; 
	struct FDLCPackageDataRowHandle DLC Data; 
	struct FText Prompt; 
	int32_t Difficulty; 
	struct UUMG_TerrainButtonPromptContents_C* PromptContents; 
	struct ABP_Mission_Communication_Upgradeable_C* MissionCommunicator; 
	bool bLocked; 
	struct FMulticastInlineDelegate ShowWeapon; 
	bool HideName; 
	int32_t Spawned; 
	int32_t Total; 
	struct FText AICreature Type Creature Name; 
	struct FGreatHuntCreatureInfoRowHandle GreatHuntCreature; 

	void ShouldShowWarningMessage(bool& Show); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void UpdateTerrainLock(); // (BlueprintCallable|BlueprintEvent)
	void UpdateTimer(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_Boss_Button(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void ShowWeapon__DelegateSignature(struct FLivingItemShopItemsRowHandle Weapon); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

