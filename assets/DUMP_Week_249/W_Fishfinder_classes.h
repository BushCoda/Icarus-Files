// WidgetBlueprintGeneratedClass W_Fishfinder.W_Fishfinder_C
struct UW_Fishfinder_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Scanning; 
	struct UBorder* FishQuailityBorder; 
	struct UImage* Grid; 
	struct UTextBlock* Quality; 
	struct USizeBox* ScanningImage; 
	struct UImage* ScanningLine; 
	struct UTextBlock* Signal; 
	struct UUMG_IcarusGrid_C* UMG_IcarusGrid; 
	struct UW_HandheldBackground_C* W_HandheldBackground; 
	struct FFishSpawnZonesRowHandle SpawnZone; 
	struct FMulticastInlineDelegate OnSonarAudioEvent; 
	struct FMulticastInlineDelegate FishFinderFinish; 

	void SequenceEvent__ENTRYPOINTW_Fishfinder_1(struct UImage* ScanningLine); // (Public|BlueprintCallable|BlueprintEvent)
	void TriggerRecalibration(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateDisplay(struct FFishSpawnZonesRowHandle Spawn); // (Public|BlueprintCallable|BlueprintEvent)
	void ScanningLine_PlayAudio(struct UImage* ScanningLine); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Recalibrate(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_W_Fishfinder(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void FishFinderFinish__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnSonarAudioEvent__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

