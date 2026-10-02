// WidgetBlueprintGeneratedClass UMG_Hearing.UMG_Hearing_C
struct UUMG_Hearing_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* HearingLevels; 
	struct UImage* Hearing1; 
	struct UImage* Hearing10; 
	struct UImage* Hearing11; 
	struct UImage* Hearing12; 
	struct UImage* Hearing13; 
	struct UImage* Hearing14; 
	struct UImage* Hearing15; 
	struct UImage* Hearing16; 
	struct UImage* Hearing17; 
	struct UImage* Hearing2; 
	struct UImage* Hearing3; 
	struct UImage* Hearing4; 
	struct UImage* Hearing5; 
	struct UImage* Hearing6; 
	struct UImage* Hearing7; 
	struct UImage* Hearing8; 
	struct UImage* Hearing9; 
	struct UImage* HearingBase; 
	int32_t DetectionValue; 
	float LerpedDetectionPercentage; 
	bool WantsVisible; 

	void UpdateDetectionValue(int32_t NewDetectionValue); // (Public|BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_Hearing(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

