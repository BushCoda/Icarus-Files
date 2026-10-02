// WidgetBlueprintGeneratedClass UMG_AnimalLevel.UMG_AnimalLevel_C
struct UUMG_AnimalLevel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* AnimalLevel; 
	struct UTextBlock* AnimalLevelEpic; 
	struct UTextBlock* AnimalName; 
	struct UImage* divider; 
	struct UImage* divider_2; 
	struct UImage* divider_3; 
	struct UImage* divider_4; 
	struct UImage* divider_5; 
	struct UImage* divider_6; 
	struct UTextBlock* EpicAnimalName; 
	struct UBorder* EpicMob; 
	struct URetainerBox* EpicRetainer; 
	struct UImage* Image_105; 
	struct UBorder* RegularMob; 
	struct URetainerBox* RegularRetainer; 
	struct UImage* skullicon; 
	struct UCurveLinearColor* DifficultyColourCurve; 
	bool IsEpicMonster; 
	struct FText CreatureName; 
	struct FText EpicCreatureName; 

	void UpdateLevel(struct FAICreatureTypeRowHandle Creature, int32_t Level, struct FEpicCreaturesRowHandle EpicCreature, struct FText EpicName); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_AnimalLevel(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

