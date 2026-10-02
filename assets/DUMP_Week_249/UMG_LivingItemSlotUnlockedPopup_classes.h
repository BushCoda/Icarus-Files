// WidgetBlueprintGeneratedClass UMG_LivingItemSlotUnlockedPopup.UMG_LivingItemSlotUnlockedPopup_C
struct UUMG_LivingItemSlotUnlockedPopup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* UnlockAnimation; 
	struct UImage* ItemIcon; 
	struct UTextBlock* ItemName; 

	void PlayUnlock(struct FItemData Item); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_LivingItemSlotUnlockedPopup(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

