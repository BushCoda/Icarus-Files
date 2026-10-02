// WidgetBlueprintGeneratedClass UMG_ArmourSet.UMG_ArmourSet_C
struct UUMG_ArmourSet_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* BonusName; 
	struct UVerticalBox* Container; 
	struct UImage* divider_3; 
	struct UVerticalBox* Stats; 
	struct FArmourSetBonusRowHandle SetBonus; 
	bool Active; 
	int32_t ActivePieces; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ArmourSet(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

