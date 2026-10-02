// WidgetBlueprintGeneratedClass UMG_TerrainSelection.UMG_TerrainSelection_C
struct UUMG_TerrainSelection_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Fade; 
	struct UUMG_BasicButton_2_C* BackButton; 
	struct UImage* BackImage; 
	struct UUMG_BasicButton_2_C* DevelopmentProspects; 
	struct UHorizontalBox* HorizontalBox_Terrains; 
	struct UImage* LowerGradient; 
	struct UImage* Noise; 
	struct UImage* Pattern; 
	struct UUMG_TerrainButton_C* TerrainButton_ELY; 
	struct UUMG_TerrainButton_C* TerrainButton_PRO; 
	struct UUMG_TerrainButton_C* TerrainButton_STYX; 
	struct UUMG_TerrainButton_C* UMG_TerrainButton_Olympus; 
	struct UImage* UpperGradient; 
	struct FMulticastInlineDelegate TalentArchetypeSelected; 
	struct FMulticastInlineDelegate BackButtonClicked; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_TerrainSelection_DevelopmentProspects_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void TerrainSelected(struct FTalentArchetypesRowHandle Terrain); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_TerrainSelection_BackButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void OnHovered(struct UTexture2D* Image); // (BlueprintCallable|BlueprintEvent)
	void FadeAnimFinished(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_TerrainSelection(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void BackButtonClicked__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void TalentArchetypeSelected__DelegateSignature(struct FTalentArchetypesRowHandle Archetype); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

