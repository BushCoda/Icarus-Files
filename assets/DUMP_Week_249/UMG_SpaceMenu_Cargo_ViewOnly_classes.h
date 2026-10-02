// WidgetBlueprintGeneratedClass UMG_SpaceMenu_Cargo_ViewOnly.UMG_SpaceMenu_Cargo_ViewOnly_C
struct UUMG_SpaceMenu_Cargo_ViewOnly_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* AnimateIn; 
	struct UImage* divider; 
	struct UImage* divider_2; 
	struct UUMG_ItemsOnDropsList_C* UMG_ItemsOnDropsList; 
	struct UUMG_MetaInventory_ViewOnly_C* UMG_MetaInventory_ViewOnly; 
	struct UUMG_MetaResourceDisplay_C* UMG_MetaResourceDisplay; 
	bool Initialised; 

	void GetPlayerLoadoutData(struct FPlayerLoadoutData& LoadoutData); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetInsuranceEnabled(bool& Insured); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Initialise(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PlayOpenAnimation(); // (BlueprintCallable|BlueprintEvent)
	void SetPendingProspectInfo(struct FProspectInfo ProspectInfo); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_SpaceMenu_Cargo_ViewOnly(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

