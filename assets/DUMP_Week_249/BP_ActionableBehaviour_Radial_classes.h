// BlueprintGeneratedClass BP_ActionableBehaviour_Radial.BP_ActionableBehaviour_Radial_C
struct UBP_ActionableBehaviour_Radial_C : UBP_ActionableBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_IcarusPlayerCharacterSurvival_C* OwningPlayer; 
	struct UContextMenuWidget* CurrentRadialMenu; 

	void CreateMenuItem(struct AContextMenuFactory* ContextMenuFactory, struct FContextMenuItemData& ContextMenuItemData, int32_t ItemIndex); // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetContextMenuInfo(struct FText& MenuName, struct TSoftObjectPtr<UTexture2D>& MenuIcon); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetContextMenuItems(struct TArray<struct FContextMenuItemData>& MenuItems); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void LocalOrServer(bool& Local, bool& Server); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetupPlayer(); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void OpenRadialMenu(); // (BlueprintCallable|BlueprintEvent)
	void CloseRadialMenu(); // (BlueprintCallable|BlueprintEvent)
	void MenuItemSelected(struct FName ItemIdentifier, int32_t ItemPayload); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Radial(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

