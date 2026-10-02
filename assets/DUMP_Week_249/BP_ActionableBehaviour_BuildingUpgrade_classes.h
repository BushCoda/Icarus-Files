// BlueprintGeneratedClass BP_ActionableBehaviour_BuildingUpgrade.BP_ActionableBehaviour_BuildingUpgrade_C
struct UBP_ActionableBehaviour_BuildingUpgrade_C : UBP_ActionableBehaviour_Radial_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	enum class EBuildingResourceType SelectedResource; 
	float TraceDistance; 
	struct FModifierStatesRowHandle UnobtainableModifier; 

	void PlaySwing(struct AIcarusPlayerCharacterSurvival* TargetPlayer); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetHitFromViewTraces(struct FHitResult& OutHit); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetContextMenuItems(struct TArray<struct FContextMenuItemData>& MenuItems); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReplaceBuilding(struct ABP_Building_Base_C* BuildingToReplace, enum class EBuildingResourceType ResourceType); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void SwapBuilding(struct ABP_Building_Base_C* HitBuilding, enum class EBuildingResourceType ReplaceMentResrouce); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void MenuItemSelected(struct FName ItemIdentifier, int32_t ItemPayload); // (BlueprintCallable|BlueprintEvent)
	void PlaySwingAnimation(struct AIcarusPlayerCharacterSurvival* Player); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_BuildingUpgrade(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

