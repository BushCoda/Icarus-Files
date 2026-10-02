// BlueprintGeneratedClass BP_ActionableBehaviour_Building.BP_ActionableBehaviour_Building_C
struct UBP_ActionableBehaviour_Building_C : UBP_ActionableBehaviour_Radial_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FTimerHandle ReloadTimer; 

	void GetContextMenuItems(struct TArray<struct FContextMenuItemData>& MenuItems); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ReloadHeld(); // (BlueprintCallable|BlueprintEvent)
	void MenuItemSelected(struct FName ItemIdentifier, int32_t ItemPayload); // (BlueprintCallable|BlueprintEvent)
	void OpenRadialMenu(); // (BlueprintCallable|BlueprintEvent)
	void OnContextMenuSegmentHighlightChanged(struct UUMG_ContextMenu_Radial_Item_C* Segment); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Building(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

