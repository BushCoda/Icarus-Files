// WidgetBlueprintGeneratedClass UMG_ModifierStateContainer.UMG_ModifierStateContainer_C
struct UUMG_ModifierStateContainer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUniformGridPanel* Modifiers; 
	int32_t MaxX; 
	bool ShowTimer; 
	struct FMulticastInlineDelegate ModifiersUpdated; 
	bool UseSimpleAnimations; 
	bool IsLayoutDirty; 
	bool ShowRemoveButton; 
	struct FVector2D ModifierTranslation; 

	void SanitiseModifier(struct UUMG_ModifierState_C* Modifier); // (Public|BlueprintCallable|BlueprintEvent)
	void DirtyLayout(); // (Public|BlueprintCallable|BlueprintEvent)
	void ArrayIndexToGridPosition(int32_t InArrayIndex, int32_t& OutRow, int32_t& OutColumn); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void InsertOrderedModifierComponent(struct UUMG_ModifierState_C* Modifier, struct TArray<struct UUMG_ModifierState_C*>& OrderedList); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void ClearAllModifiers(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateTimers(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateLayout(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RemoveModifier(struct UModifierStateComponent*& Modifier Component); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AddModifier(struct UModifierStateComponent* Modifier Component, bool SkipAnimation); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnVisibilityChanged_Event_1(enum class ESlateVisibility InVisibility); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ModifierStateContainer(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void ModifiersUpdated__DelegateSignature(int32_t Modifiers); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

