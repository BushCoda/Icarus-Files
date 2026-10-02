// WidgetBlueprintGeneratedClass UMG_SpaceMenu_Cargo.UMG_SpaceMenu_Cargo_C
struct UUMG_SpaceMenu_Cargo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* AnimateIn; 
	struct UUMG_DropshipSelector_C* UMG_DropshipSelector; 
	struct UUMG_InsurancePanel_C* UMG_InsurancePanel; 
	struct UUMG_ItemsOnDropsList_C* UMG_ItemsOnDropsList; 
	struct UUMG_MetaInventory_C* UMG_MetaInventory; 
	struct UUMG_PersistentMountList_C* UMG_PersistentMountList; 
	struct UUMG_PlayerLoadoutPanel_C* UMG_PlayerLoadoutPanel; 
	bool Initialised; 

	void GetPlayerLoadoutData(struct FPlayerLoadoutData& LoadoutData); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetInsuranceEnabled(bool& Insured); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Initialise(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PlayOpenAnimation(); // (BlueprintCallable|BlueprintEvent)
	void SetPendingProspectInfo(struct FProspectInfo ProspectInfo); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_SpaceMenu_Cargo(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

