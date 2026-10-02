// WidgetBlueprintGeneratedClass W_MedicalScanner.W_MedicalScanner_C
struct UW_MedicalScanner_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Scanning; 
	struct UImage* Grid; 
	struct UProgressBar* HealthBar; 
	struct UImage* HealthBarOutline; 
	struct UOverlay* NoTarget; 
	struct UOverlay* NPC_Overlay; 
	struct USizeBox* ScanningImage; 
	struct UImage* ScanningLine; 
	struct UTextBlock* StabilityText; 
	struct UTextBlock* StabilityText_2; 
	struct UUMG_CharacterModifiers_Basic_C* UMG_CharacterModifiers_Basic; 
	struct UW_HandheldBackground_C* W_HandheldBackground; 

	struct FString GetName(struct UObject* Object); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct UWidgetComponent* GetScreenWidget(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetMedicalValues(struct AActor* Actor, float& WaterPercent, float& FoodPercent, float& OxygenPercent, int32_t& Stability, struct FString& Name); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ToPercent(int32_t Current, int32_t Max, float& Percent); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SetScannedActor(struct AActor* Actor); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_W_MedicalScanner(int32_t EntryPoint); // (Final|UbergraphFunction)
};

