// WidgetBlueprintGeneratedClass UMG_ArmourSet_Large.UMG_ArmourSet_Large_C
struct UUMG_ArmourSet_Large_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* BonusName; 
	struct UVerticalBox* Container; 
	struct UVerticalBox* Stats; 
	struct FArmourSetBonusRowHandle SetBonus; 
	bool Active; 
	int32_t ActivePieces; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ArmourSet_Large(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

