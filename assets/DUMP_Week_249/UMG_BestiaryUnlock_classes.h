// WidgetBlueprintGeneratedClass UMG_BestiaryUnlock.UMG_BestiaryUnlock_C
struct UUMG_BestiaryUnlock_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* BestiaryUnlockAnimation; 
	struct UImage* BestiaryImage; 
	struct UTextBlock* Creature; 
	struct UImage* divider; 
	struct UOverlay* Highlight; 
	struct UImage* Image_473; 
	struct UTextBlock* Level; 
	struct UTextBlock* Title; 
	struct UTextBlock* Unlock; 
	struct FBestiaryDataRowHandle BestiaryGroup; 
	enum class EBestiaryUnlockPopup BestiaryUnlockType; 
	int32_t LiterialLevel; 
	struct FBestiaryData Bestiary Data; 

	void OnLoaded_BA0AE4B34EC0BDAF30B165A807A5C23E(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void Remove(); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_BestiaryUnlock(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

