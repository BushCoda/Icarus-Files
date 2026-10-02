// WidgetBlueprintGeneratedClass UMG_GreatHunt_Interface.UMG_GreatHunt_Interface_C
struct UUMG_GreatHunt_Interface_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* AbandonPulsing; 
	struct UWidgetAnimation* MissionHuntAnimation; 
	struct UWidgetAnimation* OpenMenu; 
	struct USizeBox* AbandonedDescription; 
	struct UTextBlock* AbandonedDescriptionText; 
	struct UOverlay* BossTitle; 
	struct UTextBlock* BossTitle_3; 
	struct UHorizontalBox* ButtonPrompts; 
	struct UVerticalBox* DescriptionBox; 
	struct UNamedSlot* GreatHuntTalentSlot; 
	struct UWidgetSwitcher* GreatHuntViewSwitcher; 
	struct UOverlay* HuntSelection; 
	struct UHorizontalBox* LegendaryItems; 
	struct UBorder* MainBorder; 
	struct UImage* menupattern; 
	struct UOverlay* MissionOverview; 
	struct UUMG_GreatHunt_MissionSelected_C* MissionSelected; 
	struct UUMG_PhysicalKeyPrompt_C* PanPrompt; 
	struct USizeBox* ProspectChanges; 
	struct UUMG_MissionBoardProspectSelected_C* ProspectSelected; 
	struct USizeBox* RegionLockDescription; 
	struct UTextBlock* RegionLockText; 
	struct UUMG_PhysicalKeyPrompt_C* SelectPrompt; 
	struct UUMG_BioLab_WeaponInfo_C* UMG_BioLab_WeaponInfo; 
	struct UUMG_GreatHunt_Description_C* UMG_GreatHunt_Description; 
	struct UUMG_GreatHunt_Description_C* UMG_GreatHunt_Description_2; 
	struct UUMG_GreatHunt_Description_C* UMG_GreatHunt_Description_3; 
	struct UUMG_GreatHunt_Description_C* UMG_GreatHunt_Description_4; 
	struct UUMG_GreatHunt_Description_C* UMG_GreatHunt_Description_5; 
	struct UUMG_GreatHunt_Description_C* UMG_GreatHunt_Description_6; 
	struct UUMG_PhysicalKeyPrompt_C* ZoomPrompt; 
	struct UInventory* Inventory; 
	struct FSessionFlagsRowHandle Session Flag; 
	struct FMulticastInlineDelegate WeaponClicked; 
	struct FLivingItemShopItemsRowHandle Item; 
	struct FText HuntText; 
	struct FTalentArchetypesRowHandle Talent Archetype; 
	bool HasSetDescription; 
	bool IsCurrentProspectsBoss; 
	bool Showing Hunt Selection; 

	void Append(struct FText Text, struct FText ToAdd, struct FText& Out); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnProspectSelectedHandler(struct FFProspectServerInfo Prospect, struct FTalentsRowHandle GreatHuntTalent, struct FText Error); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DoesGreatHuntTalentMatchTerrain(struct FTalentsRowHandle RowHandle, bool& Match, struct FText& Terrain Name); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetTalentTerrain(struct FTalentArchetypesRowHandle TalentArchetype, struct FTerrainsRowHandle& Terrain); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void DisplayRegionDescriptionText(struct FTalentArchetypesRowHandle TalentArchetype); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DisplayRegionLockText(struct FTalentArchetypesRowHandle TalentArchetype, struct FTerrainsRowHandle Terrain); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void HideGreatHuntButton(struct FTerrainsRowHandle Terrain, struct FTalentArchetypesRowHandle TalentArchetypeRow); // (Public|BlueprintCallable|BlueprintEvent)
	void UMG_GreatHunt_Interface_AutoGenFunc(struct FLivingItemShopItemsRowHandle Weapon); // (Public|BlueprintCallable|BlueprintEvent)
	int32_t GetQuestCancelDelay(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GreatHuntTalentModelUpdated(struct UTalentModelInterface_Const* Model); // (Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OperationSelected(struct FFProspectServerInfo ProspectInfo); // (BlueprintCallable|BlueprintEvent)
	void OperationCancelled(); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void RefreshAbandonedText(); // (BlueprintCallable|BlueprintEvent)
	void OnGreatHuntSelected(bool bShowingHuntSelection, struct FTalentArchetypesRowHandle TalentArchetype, struct FLivingItemShopItemsRowHandle LegendaryItem); // (BlueprintCallable|BlueprintEvent)
	void BiolabBackClicked(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_GreatHunt_Interface_ProspectSelected_K2Node_ComponentBoundEvent_1_OperationSelected__DelegateSignature(struct FFProspectServerInfo ProspectInfo); // (BlueprintEvent)
	void BndEvt__UMG_GreatHunt_Interface_ProspectSelected_K2Node_ComponentBoundEvent_2_OperationClosed__DelegateSignature(); // (BlueprintEvent)
	void ItemClicked(struct FLivingItemShopItemsRowHandle LegendaryItem); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_GreatHunt_Interface(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void WeaponClicked__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

