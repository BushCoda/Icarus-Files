// WidgetBlueprintGeneratedClass UMG_DeployableModifiers.UMG_DeployableModifiers_C
struct UUMG_DeployableModifiers_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_IcarusGrid_C* ModifierGrid; 
	struct UVerticalBox* Modifiers; 
	struct UImage* ModifiersDivider; 
	struct UVerticalBox* ParentBox; 
	struct AActor* CachedLinkedActor; 
	int32_t ShownModifierCount; 
	int32_t HorizontalSlotCount; 
	struct FMulticastInlineDelegate OnModifiersChanged; 

	void OnModifierUpdated(struct UModifierStateComponent* ModifierState, bool WasRemoved); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitialiseSingleModifier(struct UModifierStateComponent* Target); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CleanupVisibility(); // (Public|BlueprintCallable|BlueprintEvent)
	void HasContent(bool& GotContent); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Initialize(struct AActor* LinkedActor); // (Public|BlueprintCallable|BlueprintEvent)
	void HideModifiers(); // (Public|BlueprintCallable|BlueprintEvent)
	void InitializeModifiers(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_DeployableModifiers(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OnModifiersChanged__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

