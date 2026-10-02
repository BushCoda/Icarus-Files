// WidgetBlueprintGeneratedClass UMG_ConnectionLost.UMG_ConnectionLost_C
struct UUMG_ConnectionLost_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* ConnectionLostAnimation; 
	struct UImage* Icon; 
	struct UImage* Icon_2; 
	struct FTimerHandle TimerHandle; 

	void UpdateConnectionLost(); // (Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ConnectionLost(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

