// WidgetBlueprintGeneratedClass UMG_FieldGuideItem_LegendaryWeapon_Slots.UMG_FieldGuideItem_LegendaryWeapon_Slots_C
struct UUMG_FieldGuideItem_LegendaryWeapon_Slots_C : UFieldGuideItemWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_BioLab_UpgradeSlotChoice_C* 1_2; 
	struct UUMG_BioLab_UpgradeSlotChoice_C* 1_3; 
	struct UUMG_BioLab_UpgradeSlotChoice_C* 1_4; 
	struct UUMG_BioLab_UpgradeSlotChoice_C* 2_2; 
	struct UUMG_BioLab_UpgradeSlotChoice_C* 2_3; 
	struct UUMG_BioLab_UpgradeSlotChoice_C* 2_4; 
	struct UUMG_BioLab_UpgradeSlotChoice_C* 3_2; 
	struct UUMG_BioLab_UpgradeSlotChoice_C* 3_3; 
	struct UUMG_BioLab_UpgradeSlotChoice_C* 3_4; 
	struct UUMG_BioLab_UpgradeSlotChoice_C* 4_2; 
	struct UUMG_BioLab_UpgradeSlotChoice_C* 4_3; 
	struct UUMG_BioLab_UpgradeSlotChoice_C* 4_4; 
	struct UImage* Image_96; 
	struct UImage* Pin_2; 
	struct UImage* Pin_3; 
	struct UImage* Pin_4; 
	struct UImage* Pin_5; 
	struct UWidgetSwitcher* WidgetSwitcher_NA; 

	void SubItemClicked(struct FFieldGuideCategoriesRowHandle Category, struct FItemsStaticRowHandle Item); // (Public|BlueprintCallable|BlueprintEvent)
	void PopulateUpgradesView(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitFieldGuideView(struct FItemsStaticRowHandle ItemIn, struct FFieldGuideCategoriesRowHandle CategoryIn); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuideItem_LegendaryWeapon_Slots(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

