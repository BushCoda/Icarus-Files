// WidgetBlueprintGeneratedClass CF_BaseGrid.CF_BaseGrid_C
struct UCF_BaseGrid_C : UCF_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UCustomComboBox* GridCombo; 
	struct UUMG_IconTextButton_C* UMG_IconTextButton; 
	struct USpinBox* UV_x; 
	struct USpinBox* UV_y; 
	float UV_XValue; 
	float UV_YValue; 

	void HandleArg(int32_t Index, struct FString Arg); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdatePreview(struct TArray<struct FString>& Args); // (Event|Public|HasOutParms|BlueprintEvent)
	void BndEvt__Count_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod); // (BlueprintEvent)
	void Execute(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void Handle Execute(struct FString Grid, float UV_x, float UV_y); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__ComboBox_K2Node_ComponentBoundEvent_1_OnItemSet__DelegateSignature(struct FString NameString, struct UUserWidget* Widget); // (BlueprintEvent)
	void Handle On Item Set(struct UUserWidget* Widget); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_IconTextButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UV_Y_K2Node_ComponentBoundEvent_3_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod); // (BlueprintEvent)
	void ExecuteUbergraph_CF_BaseGrid(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

