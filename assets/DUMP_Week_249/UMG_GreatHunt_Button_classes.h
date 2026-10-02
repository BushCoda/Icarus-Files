// WidgetBlueprintGeneratedClass UMG_GreatHunt_Button.UMG_GreatHunt_Button_C
struct UUMG_GreatHunt_Button_C : UIcarusWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* RadbossHover; 
	struct UWidgetAnimation* WeaponHover; 
	struct UWidgetAnimation* ApeHover; 
	struct UWidgetAnimation* IceMammothHover; 
	struct UWidgetAnimation* GolemHover; 
	struct UImage* APE_ADD1; 
	struct UImage* APE_ADD2; 
	struct UImage* APE_ADD3; 
	struct UImage* BackgroundImage; 
	struct UImage* BannerTexture; 
	struct UBorder* Border_BG; 
	struct UImage* BossImage; 
	struct UOverlay* DLCBanner; 
	struct UImage* GOLEM_ADD1; 
	struct UImage* GOLEM_ADD2; 
	struct UImage* GOLEM_ADD3; 
	struct UImage* Image; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_348; 
	struct UImage* Image_Timer; 
	struct USizeBox* Layout; 
	struct UButton* MainButton; 
	struct UOverlay* MainOverlay; 
	struct UImage* MAMMOTH_ADD1; 
	struct UImage* MAMMOTH_ADD2; 
	struct UImage* MAMMOTH_ADD3; 
	struct UTextBlock* Name; 
	struct UBorder* OpenWorldLock; 
	struct UProgressBar* ProgressBar_53; 
	struct UImage* Radboss_Add_2; 
	struct UImage* Radboss_Add_3; 
	struct UImage* Radboss_Add_4; 
	struct UTextBlock* Region; 
	struct UProgressBar* RespawnBar; 
	struct USizeBox* RespawnInfo; 
	struct UTextBlock* respawntext; 
	struct UTextBlock* RespawnText_Returns; 
	struct UBorder* TerrainLock; 
	struct URichTextBlock* TerrainName_2; 
	struct USizeBox* Timer; 
	struct UUMG_RequiresDLCButton_C* UMG_RequiresDLCButton; 
	struct UImage* WeaponImage; 
	struct FMulticastInlineDelegate HuntSelected; 
	struct UTexture2D* Weapon; 
	struct UTexture2D* Background; 
	struct UTexture2D* Boss; 
	struct FTalentTreesRowHandle GreatHunt; 
	struct FLivingItemShopItemsRowHandle Legendary; 
	struct FDLCPackageDataRowHandle DLC Data; 
	struct FTerrainsRowHandle Terrain; 
	bool Disabled; 
	struct FText Prompt; 
	struct UUMG_TerrainButtonPromptContents_C* PromptContents; 
	struct TArray<struct FResourceAvailabilityData> AvailableResources; 
	bool bDLCLock; 
	bool bTerrainLock; 
	bool bOpenWorldLock; 
	struct FText NameText; 
	struct FGameplayTagQuery MatchingDenActorTag; 
	struct ABP_GH_DenEntrance_C* CachedDenActor; 
	struct FTimerHandle CooldownTextTimer; 

	void GetAnimation(struct UWidgetAnimation*& Animation); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ShouldShowWarningMessage(bool& Show); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void Confirm(); // (BlueprintCallable|BlueprintEvent)
	void UpdateDLCLockOverlay(); // (BlueprintCallable|BlueprintEvent)
	void UpdateTerrainLock(); // (BlueprintCallable|BlueprintEvent)
	void UpdateOpenWorldLock(); // (BlueprintCallable|BlueprintEvent)
	void UpdateBossCooldownText(); // (BlueprintCallable|BlueprintEvent)
	void Destruct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_GreatHunt_Button(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void HuntSelected__DelegateSignature(struct FTalentArchetypesRowHandle Hunt, struct FLivingItemShopItemsRowHandle Weapon); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

