// WidgetBlueprintGeneratedClass UMG_GreatHunt_Button_Vertical.UMG_GreatHunt_Button_Vertical_C
struct UUMG_GreatHunt_Button_Vertical_C : UIcarusWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* HoverAnimation; 
	struct UImage* BackgroundImage; 
	struct UImage* BannerTexture; 
	struct UOverlay* DLCBanner; 
	struct UBorder* DLCLock; 
	struct URichTextBlock* DLCName; 
	struct UImage* Image; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_348; 
	struct UImage* Image_Timer; 
	struct USizeBox* Layout; 
	struct UButton* MainButton; 
	struct UOverlay* MainOverlay; 
	struct UTextBlock* Name; 
	struct UBorder* OpenWorldLock; 
	struct UProgressBar* ProgressBar_53; 
	struct UTextBlock* RegionName; 
	struct UProgressBar* RespawnBar; 
	struct USizeBox* RespawnInfo; 
	struct UTextBlock* respawntext; 
	struct UTextBlock* RespawnText_Returns; 
	struct UBorder* TerrainLock; 
	struct URichTextBlock* TerrainName_2; 
	struct USizeBox* Timer; 
	struct FMulticastInlineDelegate HuntSelectedVertical; 
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
	struct FText RegionNameText; 
	struct UFMODEvent* UIHoverBossAudio; 

	void ShouldShowWarningMessage(bool& Show); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Confirm(); // (BlueprintCallable|BlueprintEvent)
	void UpdateDLCLockOverlay(); // (BlueprintCallable|BlueprintEvent)
	void UpdateTerrainLock(); // (BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void UpdateOpenWorldLock(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void UpdateBossCooldownText(); // (BlueprintCallable|BlueprintEvent)
	void Destruct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_GreatHunt_Button_Vertical(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void HuntSelectedVertical__DelegateSignature(struct FTalentArchetypesRowHandle Hunt, struct FLivingItemShopItemsRowHandle Weapon); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

