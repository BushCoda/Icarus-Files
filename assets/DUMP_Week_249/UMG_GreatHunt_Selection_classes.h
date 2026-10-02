// WidgetBlueprintGeneratedClass UMG_GreatHunt_Selection.UMG_GreatHunt_Selection_C
struct UUMG_GreatHunt_Selection_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Background_; 
	struct UOverlay* Campaigns; 
	struct UHorizontalBox* GreatHunts; 
	struct UImage* Image_2; 
	struct UImage* Noise; 
	struct UImage* Pattern; 
	struct FMulticastInlineDelegate TalentArchetypeSelected; 
	struct FMulticastInlineDelegate ShowLegendaryWeapon; 
	struct FMulticastInlineDelegate ShowOutpostFill; 

	void Populate Buttons(bool DesignTime); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void HuntClicked(struct FTalentArchetypesRowHandle Hunt, struct FLivingItemShopItemsRowHandle Weapon); // (BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_GreatHunt_Selection(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void ShowOutpostFill__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void ShowLegendaryWeapon__DelegateSignature(struct FLivingItemShopItemsRowHandle Weapon); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void TalentArchetypeSelected__DelegateSignature(struct FTalentArchetypesRowHandle Archetype, struct FLivingItemShopItemsRowHandle Weapon); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

