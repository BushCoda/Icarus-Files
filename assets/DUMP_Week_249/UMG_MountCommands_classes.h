// WidgetBlueprintGeneratedClass UMG_MountCommands.UMG_MountCommands_C
struct UUMG_MountCommands_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_MountBehaviourSetting_C* Setting_Combat; 
	struct UUMG_MountBehaviourSetting_C* Setting_Grazing; 
	struct UUMG_MountBehaviourSetting_C* Setting_Movement; 
	struct UUMG_MountBehaviourSetting_C* Setting_Survival; 
	struct UUMG_ToggleButton_IconSwap_C* StandSit; 
	struct UUMG_Titlebar_C* UMG_TitlebarCommands; 
	struct UVerticalBox* VerticalBox_Cargo; 
	struct AActor* LinkedActor; 
	struct FInventoryIDEnum Inventory ID; 
	bool HideTakeAllButton; 
	struct TMap<enum class EMountCombatBehaviourState, int32_t> SupportedCombatStates; 
	struct TMap<enum class EMountMovementBehaviourState, int32_t> SupportedMovementStates; 
	struct TArray<struct FSwapButtonOption> Options; 
	struct TMap<enum class EMountConsumptionBehaviourState, int32_t> SupportedConsumptionStates; 
	struct TMap<enum class EMountGrazingBehaviourState, int32_t> SupportedGrazingStates; 

	void GetEnumForButtonIndex(struct TMap<char, int32_t> Options, int32_t Index, char& EnumByte); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void BuildSupportedStateOptions(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetLinkedActor(struct AActor* LinkedActor); // (BlueprintCallable|BlueprintEvent)
	void MovementUpdated(int32_t OptionIndex, struct FSwapButtonOption OptionData); // (BlueprintCallable|BlueprintEvent)
	void OnCombatStateChanged(int32_t OptionIndex, struct FSwapButtonOption OptionData); // (BlueprintCallable|BlueprintEvent)
	void OnConsumptionStateChanged(int32_t OptionIndex, struct FSwapButtonOption OptionData); // (BlueprintCallable|BlueprintEvent)
	void OnGrazingStateChanged(int32_t OptionIndex, struct FSwapButtonOption OptionData); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_MountCommands(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

