// WidgetBlueprintGeneratedClass UMG_TalentTreeTitle.UMG_TalentTreeTitle_C
struct UUMG_TalentTreeTitle_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* CurrentRankTitle; 
	struct URetainerBox* Desaturator; 
	struct UImage* NextRank; 
	struct UOverlay* RankBox; 
	struct UUMG_ProgressBar_C* RankProgress; 
	struct UProgressBar* RankProgressPreview; 
	struct UTextBlock* Title; 
	struct FTalentTreesRowHandle TalentTree; 
	struct UTalentModelInterface_Const* Model; 

	void RefreshRankBar(struct UTalentModelInterface_Const* Model); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Talent Hovered(struct UUMG_Talent_Base_C* Talent); // (BlueprintCallable|BlueprintEvent)
	void Talent Unhovered(); // (BlueprintCallable|BlueprintEvent)
	void CreateTooltips(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_TalentTreeTitle(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

