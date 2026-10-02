// WidgetBlueprintGeneratedClass CF_GotoQuest.CF_GotoQuest_C
struct UCF_GotoQuest_C : UCF_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UComboBoxString* Marker; 
	struct UIcarusButtonTemp_C* SaveButton; 
	struct TMap<struct FString, struct AActor*> Out Actors; 

	struct AActor* GetMarker(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__CF_GotoQuest_SaveButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_CF_GotoQuest(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

