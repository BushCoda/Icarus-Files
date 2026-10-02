// WidgetBlueprintGeneratedClass UMG_DeployableModifiersList.UMG_DeployableModifiersList_C
struct UUMG_DeployableModifiersList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UVerticalBox* Alterations; 
	struct UImage* AlterationsDivider; 
	struct UVerticalBox* Connections; 
	struct UUMG_ResourceConnectionState_C* CrudeOil; 
	struct UUMG_DeployableModifiers_C* DeployableModifiers; 
	struct UUMG_ResourceConnectionState_C* Electricity; 
	struct UUMG_ResourceConnectionState_C* Fuel; 
	struct UVerticalBox* ItemAlterations; 
	struct UVerticalBox* ItemAlterations_2; 
	struct UVerticalBox* ResourceConnections; 
	struct UUMG_ScaleableFrame_C* UMG_ScaleableFrame; 
	struct UUMG_ResourceConnectionState_C* Water; 
	struct AActor* Linked Actor; 
	bool HasContent; 
	struct UUserWidget* Auto Hide Widget if No Content; 
	enum class ESlateVisibility HasContentVisibility; 
	enum class ESlateVisibility NoContentVisibility; 

	void UpdateHasContent(); // (Public|BlueprintCallable|BlueprintEvent)
	void FixDividers(); // (Public|BlueprintCallable|BlueprintEvent)
	void InitialiseAlterations(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitialiseConnections(); // (Public|BlueprintCallable|BlueprintEvent)
	void Initialise(struct AActor* LinkedActor, struct UUserWidget* AutoHideWidgetIfNoContent); // (BlueprintCallable|BlueprintEvent)
	void OnModifiersChanged(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_DeployableModifiersList(int32_t EntryPoint); // (Final|UbergraphFunction)
};

