// WidgetBlueprintGeneratedClass UMG_BestiaryUnlockNotifier.UMG_BestiaryUnlockNotifier_C
struct UUMG_BestiaryUnlockNotifier_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UVerticalBox* Events; 
	struct UScrollBox* Scroll; 

	void OnBestiaryUnlock(struct FBestiaryDataRowHandle Group, enum class EBestiaryUnlockPopup PopType); // (BlueprintCallable|BlueprintEvent)
	void OnFishUnlock(struct FFishTypeTracking Tracking, int32_t PopType); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_BestiaryUnlockNotifier(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

