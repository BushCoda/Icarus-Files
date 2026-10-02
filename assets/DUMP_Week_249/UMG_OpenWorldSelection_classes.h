// WidgetBlueprintGeneratedClass UMG_OpenWorldSelection.UMG_OpenWorldSelection_C
struct UUMG_OpenWorldSelection_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Fade; 
	struct UUMG_BasicButton_2_C* BackButton; 
	struct UImage* BackImage; 
	struct UHorizontalBox* HorizontalBox_Terrains; 
	struct UImage* LowerGradient; 
	struct UImage* Noise; 
	struct UImage* Pattern; 
	struct UScaleBox* ScaleBox_Styx; 
	struct UUMG_OpenWorldButton_C* UMG_OpenWorldButton_ARK; 
	struct UUMG_OpenWorldButton_C* UMG_OpenWorldButton_ELY; 
	struct UUMG_OpenWorldButton_C* UMG_OpenWorldButton_OLY; 
	struct UUMG_OpenWorldButton_C* UMG_OpenWorldButton_PRO; 
	struct UUMG_OpenWorldButton_C* UMG_OpenWorldButton_STYX; 
	struct UImage* UpperGradient; 
	struct FMulticastInlineDelegate OpenWorldProspectSelected; 
	struct FMulticastInlineDelegate BackButtonPressed; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_TerrainSelection_DevelopmentProspects_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void OpenWorldSelected(struct FProspectListRowHandle Prospect); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_OpenWorldSelection_UMG_OpenWorldButton_PRO_K2Node_ComponentBoundEvent_0_ProspectSelected__DelegateSignature(struct FProspectListRowHandle Prospect); // (BlueprintEvent)
	void BndEvt__UMG_OpenWorldSelection_UMG_OpenWorldButton_STYX_K2Node_ComponentBoundEvent_2_ProspectSelected__DelegateSignature(struct FProspectListRowHandle Prospect); // (BlueprintEvent)
	void ChangeImage(struct UTexture2D* Image); // (BlueprintCallable|BlueprintEvent)
	void FadeAnimFinished(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_OpenWorldSelection(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void BackButtonPressed__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OpenWorldProspectSelected__DelegateSignature(struct FProspectListRowHandle Prospect); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

