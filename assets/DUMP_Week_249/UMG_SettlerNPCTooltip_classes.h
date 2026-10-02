// WidgetBlueprintGeneratedClass UMG_SettlerNPCTooltip.UMG_SettlerNPCTooltip_C
struct UUMG_SettlerNPCTooltip_C : UW_ProjectionWidget_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* TooltipFadeIn; 
	struct UImage* Image; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_4; 
	struct UImage* Image_5; 
	struct UImage* Image_6; 
	struct UImage* Image_7; 
	struct UImage* Image_8; 
	struct UImage* Image_9; 
	struct UImage* Image_10; 
	struct UImage* Image_193; 
	struct UImage* Image_245; 
	struct UOverlay* MainOverlay; 
	struct UTextBlock* Name; 
	struct UOverlay* Overlay_Food; 
	struct UOverlay* Overlay_Health; 
	struct UOverlay* Overlay_Mood; 
	struct UOverlay* Overlay_Water; 
	struct UImage* Pointer; 
	struct UProgressBar* Progress_Food; 
	struct UProgressBar* Progress_Health; 
	struct UProgressBar* Progress_Mood; 
	struct UProgressBar* Progress_Water; 
	struct URichTextBlock* RichTextBlock_Description; 
	struct URichTextBlock* RichTextBlock_Status; 
	struct URichTextBlock* RichTextBlock_Traits; 
	struct UUMG_InteractionPrompt_C* UMG_InteractionPrompt; 
	struct UVerticalBox* VerticalBox_SkillContainer; 

	struct UUMG_SettlementNPCSkill_C* FindOrAddSkillWidget(struct FSettlementNPCSkillsRowHandle ForSkill); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateSkills(struct ASettlementNPCCharacter* ForSettlementNPC); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ProjectionItemChanged(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetProjectionActor(struct UBP_UIProjectionComponent_C* ProjectionActor); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateVisuals(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateTooltip(struct AActor* InputItem); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TickWidget(); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_SettlerNPCTooltip(int32_t EntryPoint); // (Final|UbergraphFunction)
};

