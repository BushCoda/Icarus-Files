// WidgetBlueprintGeneratedClass UMG_DangerLevel.UMG_DangerLevel_C
struct UUMG_DangerLevel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Danger1; 
	struct UImage* Danger2; 
	struct UImage* Danger3; 
	struct UImage* Danger4; 
	struct TArray<struct UImage*> Images; 
	struct FSlateColor Tint Color; 

	void SetDanger(int32_t Danger); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_DangerLevel(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

