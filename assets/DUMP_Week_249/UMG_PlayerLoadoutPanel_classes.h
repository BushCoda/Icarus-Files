// WidgetBlueprintGeneratedClass UMG_PlayerLoadoutPanel.UMG_PlayerLoadoutPanel_C
struct UUMG_PlayerLoadoutPanel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USizeBox* Cargo; 
	struct UTextBlock* MountWarning; 
	struct UBorder* MountWarningPrompt; 
	struct UUMG_BasicButton_2_C* SuitClearButton; 
	struct UUMG_LoadoutEnvirosuit_C* UMG_LoadoutEnvirosuit; 
	struct UUMG_DropCargo_C* UMG_LoadoutSelection; 
	bool Initialised; 
	struct FMulticastInlineDelegate EnvirosuitChanged; 
	struct FTagQueriesRowHandle Query; 

	void GetPlayerLoadoutData(struct FPlayerLoadoutData& LoadoutData); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Initialise(struct UInventory* Loadout); // (Public|BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__SuitClearButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void OnEnvirosuitChanged(); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void UpdateMountWarning(); // (BlueprintCallable|BlueprintEvent)
	void OnLoadoutChanged(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_PlayerLoadoutPanel(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void EnvirosuitChanged__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

