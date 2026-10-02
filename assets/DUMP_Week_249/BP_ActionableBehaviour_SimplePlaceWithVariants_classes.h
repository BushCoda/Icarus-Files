// BlueprintGeneratedClass BP_ActionableBehaviour_SimplePlaceWithVariants.BP_ActionableBehaviour_SimplePlaceWithVariants_C
struct UBP_ActionableBehaviour_SimplePlaceWithVariants_C : UBP_ActionableBehaviour_SimplePlace_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UContextMenuWidget* CurrentRadialMenu; 
	struct ABP_IcarusPlayerCharacterSurvival_C* OwningPlayer; 

	void CreateMenuItem(struct AContextMenuFactory* ContextMenuFactory, struct FContextMenuItemData& ContextMenuItemData, int32_t ItemIndex); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetContextMenuItems(struct TArray<struct FContextMenuItemData>& MenuItems); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetContextMenuInfo(struct FText& MenuName, struct TSoftObjectPtr<UTexture2D>& MenuIcon); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void LocalOrServer(bool& Local, bool& Server); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetupPlayer(); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void OpenRadialMenu(); // (BlueprintCallable|BlueprintEvent)
	void CloseRadialMenu(); // (BlueprintCallable|BlueprintEvent)
	void MenuItemSelected(struct FName ItemIdentifier, int32_t ItemPayload); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_SimplePlaceWithVariants(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

