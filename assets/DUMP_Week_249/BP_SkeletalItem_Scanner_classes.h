// BlueprintGeneratedClass BP_SkeletalItem_Scanner.BP_SkeletalItem_Scanner_C
struct ABP_SkeletalItem_Scanner_C : ASkeletalItem {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float Blinker_LightIntensity_C4C74377490DA379A11DCB8BF8DFCB80; 
	enum class ETimelineDirection Blinker__Direction_C4C74377490DA379A11DCB8BF8DFCB80; 
	struct UTimelineComponent* Blinker; 
	struct UBP_ActionableBehaviour_Scanner_C* ScannerActionable; 
	bool EnableAudioBeep; 
	struct AIcarusPlayerCharacter* OwningPlayer; 

	bool IsScannerActive(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void PlayAudioBeep(); // (Public|BlueprintCallable|BlueprintEvent)
	struct UWidgetComponent* GetScreenWidget(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateLightMaterial(float Intensity); // (Public|BlueprintCallable|BlueprintEvent)
	void Blinker__FinishedFunc(); // (BlueprintEvent)
	void Blinker__UpdateFunc(); // (BlueprintEvent)
	void Blinker__Audio__EventFunc(); // (BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ViewModeChanged(bool bIsThirdPerson); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_Scanner(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

