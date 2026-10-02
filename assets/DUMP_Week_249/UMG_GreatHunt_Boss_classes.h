// WidgetBlueprintGeneratedClass UMG_GreatHunt_Boss.UMG_GreatHunt_Boss_C
struct UUMG_GreatHunt_Boss_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_BasicButton_2_C* AbandonButton; 
	struct UImage* Background_; 
	struct UOverlay* Bosses; 
	struct UOverlay* CannotRequestMission; 
	struct UHorizontalBox* GH; 
	struct UScaleBox* GreatHuntMainScaleBox; 
	struct UImage* Image_2; 
	struct UVerticalBox* ItemDisplayBox; 
	struct UTextBlock* MapTitle; 
	struct UImage* Noise; 
	struct UHorizontalBox* OtherBosses; 
	struct UUMG_IcarusGrid_C* OtherBosses_Grid; 
	struct UVerticalBox* OtherHunts; 
	struct UImage* Pattern; 
	struct UTextBlock* Requested; 
	struct UUMG_BioLab_WeaponInfo_C* UMG_BioLab_WeaponInfo; 
	struct UUMG_IcarusGrid_C* UMG_IcarusGrid; 
	struct UWidgetSwitcher* WidgetSwitcher_118; 
	struct UVerticalBox* WorldBosses; 
	struct FMulticastInlineDelegate TalentArchetypeSelected; 
	struct FSessionFlagsRowHandle Session Flag; 
	struct FMulticastInlineDelegate ShowLegendaryWeapon; 
	struct UUMG_GreatHunt_Button_C* GreatHuntMain; 
	struct FVector2D OtherHuntsSpacer; 
	struct FVector2D OtherBossesSpacer; 
	struct FVector2D ItemDisplaySpacer; 
	struct FVector2D WorldBossesSpacer; 
	struct FGreatHuntCreatureInfoRowHandle DefaultGreatHunt; 
	struct TArray<struct FGreatHuntCreatureInfoRowHandle> DefaultWorldBosses; 
	struct FMulticastInlineDelegate ShowOutpostFill; 

	void SetDefaults(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Populate Buttons(bool DesignTime); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ButtonClicked(struct FLivingItemShopItemsRowHandle Weapon); // (BlueprintCallable|BlueprintEvent)
	void HuntClicked(struct FTalentArchetypesRowHandle Hunt, struct FLivingItemShopItemsRowHandle Weapon); // (BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_GreatHunt_Boss_UMG_BioLab_WeaponInfo_K2Node_ComponentBoundEvent_0_BackClicked__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_GreatHunt_Boss(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void ShowOutpostFill__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void ShowLegendaryWeapon__DelegateSignature(struct FLivingItemShopItemsRowHandle Weapon); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void TalentArchetypeSelected__DelegateSignature(struct FTalentArchetypesRowHandle Archetype, struct FLivingItemShopItemsRowHandle Weapon); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

