// WidgetBlueprintGeneratedClass UMG_FishUnlock.UMG_FishUnlock_C
struct UUMG_FishUnlock_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* FishUnlockAnimation; 
	struct UTextBlock* CaughtTitle; 
	struct UImage* FishImage; 
	struct UOverlay* Highlight; 
	struct UImage* Image_116; 
	struct UImage* Image_229; 
	struct UTextBlock* Length; 
	struct UTextBlock* Name; 
	struct UTextBlock* Quality; 
	struct UTextBlock* Unlock; 
	struct UTextBlock* Weight; 
	struct FFishTypeTracking Tracking; 
	int32_t FishUnlockType; 

	void PopulateFishInfo(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnLoaded_8A3E72E1463B6770DBCD4A9745B4F2AD(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void Remove(); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_FishUnlock(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

