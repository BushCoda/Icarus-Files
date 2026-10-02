// WidgetBlueprintGeneratedClass Umg_GeneticsDisplay.Umg_GeneticsDisplay_C
struct UUmg_GeneticsDisplay_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* AccessDisplay; 
	struct UImage* Phenotype; 
	struct UTextBlock* Sex; 
	struct UHorizontalBox* SexBox; 
	struct UImage* SexImage; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; 
	struct UUmg_GeneticLineage_C* Umg_GeneticLineage; 
	struct UUmg_GeneticValues_C* Umg_GeneticValues; 
	struct UUMG_ScaleableFrame_C* UMG_ScaleableFrame; 
	struct UUMG_Titlebar_C* UMG_Titlebar; 
	struct AActor* LinkedActor; 

	void Initialise(struct AActor* LinkedActor); // (BlueprintCallable|BlueprintEvent)
	void GeneticsUpdated(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__Umg_GeneticsDisplay_UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void SexUpdated(); // (BlueprintCallable|BlueprintEvent)
	void LineageUpdated(); // (BlueprintCallable|BlueprintEvent)
	void SkinUpdated(); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_Umg_GeneticsDisplay(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

