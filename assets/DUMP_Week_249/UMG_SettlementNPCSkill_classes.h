// WidgetBlueprintGeneratedClass UMG_SettlementNPCSkill.UMG_SettlementNPCSkill_C
struct UUMG_SettlementNPCSkill_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UOverlay* DurabilityOverlay; 
	struct UHorizontalBox* HorizontalBox_Bonus; 
	struct UImage* Image_Bar; 
	struct UImage* Image_Bonus1; 
	struct UImage* Image_Bonus2; 
	struct UTextBlock* Text_Level; 
	struct UTextBlock* TextBlock_BonusMultiplier; 
	struct UTextBlock* TextBlock_Title; 
	int32_t CurrentLevel; 
	int32_t MaxLevel; 
	struct UMaterialInstanceDynamic* DynamicMaterial; 
	int32_t BoostLevel; 
	struct FSettlementNPCSkillsRowHandle Skill; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Update(int32_t CurrentLevel, int32_t MaxLevel, int32_t BoostLevel); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_SettlementNPCSkill(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

