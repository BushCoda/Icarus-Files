// WidgetBlueprintGeneratedClass W_CreatureScanner.W_CreatureScanner_C
struct UW_CreatureScanner_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Scanning; 
	struct UOverlay* Creature; 
	struct UImage* Grid; 
	struct USizeBox* ScanningImage; 
	struct UImage* ScanningLine; 
	struct UTextBlock* Signal; 
	struct UTextBlock* Status; 
	struct UBorder* StatusBox; 
	struct UW_HandheldBackground_C* W_HandheldBackground; 
	struct FMulticastInlineDelegate OnSonarAudioEvent; 
	struct FMulticastInlineDelegate FishFinderFinish; 
	struct AActor* Scanner; 
	struct FAISetupRowHandle AI; 

	void SequenceEvent__ENTRYPOINTW_CreatureScanner_1(struct UImage* ScanningLine); // (Public|BlueprintCallable|BlueprintEvent)
	void ScanningLine_PlayAudio(struct UImage* ScanningLine); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void UpdateScannedAI(struct FAISetupRowHandle AI); // (BlueprintCallable|BlueprintEvent)
	void UpdateScanning(enum class ECreatureScanState ScanState); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_W_CreatureScanner(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void FishFinderFinish__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnSonarAudioEvent__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

