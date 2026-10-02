// WidgetBlueprintGeneratedClass UMG_FieldGuideResourceHowToObtain.UMG_FieldGuideResourceHowToObtain_C
struct UUMG_FieldGuideResourceHowToObtain_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Craft; 
	struct UImage* Drill; 
	struct UImage* Fishing; 
	struct UImage* Harvest; 
	struct UImage* Kill; 
	struct UImage* Mining; 
	struct UHorizontalBox* ObtainIcons; 
	struct UImage* Sledgehammer; 
	struct UImage* Workshop; 

	void ShowIconForObtain(enum class EFieldGuideItemHotToObtain HowToObtain); // (Public|BlueprintCallable|BlueprintEvent)
	void Populate HowToObtainDetail(struct FItemsStaticRowHandle ItemRow); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuideResourceHowToObtain(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

