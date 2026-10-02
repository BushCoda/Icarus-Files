// WidgetBlueprintGeneratedClass UMG_MoodRow.UMG_MoodRow_C
struct UUMG_MoodRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UButton* bntJoy; 
	struct UButton* bntNeutral; 
	struct UButton* bntSad; 
	struct UImage* ImgJoyHighlight; 
	struct UImage* ImgNeutralHighlight; 
	struct UImage* ImgSadHighlight; 

	void GetMoodString(struct FString& Mood); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_MoodRow_bntJoy_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_MoodRow_bntNeutral_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_MoodRow_bntSad_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_MoodRow(int32_t EntryPoint); // (Final|UbergraphFunction)
};

