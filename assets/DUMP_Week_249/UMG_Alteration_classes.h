// WidgetBlueprintGeneratedClass UMG_Alteration.UMG_Alteration_C
struct UUMG_Alteration_C : UUserWidget {
	struct UWidgetAnimation* NotActiveAnimation; 
	struct UWidgetAnimation* ProvidingAnimation; 
	struct UWidgetAnimation* RecievingAnimation; 
	struct UImage* AlterationIcon; 
	struct UImage* AlterationIcon_2; 
	struct UBorder* BaseBacking; 
	struct UResourceNetworkComponent* ResourceComponent; 
	struct FAlterationsRowHandle Alteration; 

	void Add Tool Tip(struct FText ToolTipText); // (Public|BlueprintCallable|BlueprintEvent)
	void Setup(struct FAlterationsRowHandle Alteration); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
};

