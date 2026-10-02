// WidgetBlueprintGeneratedClass UMG_Target.UMG_Target_C
struct UUMG_Target_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Image_24; 
	struct UUMG_Crosshair_C* UMG_Crosshair; 
	float CurrentAlpha; 

	void UpdateTarget(float Alpha); // (Public|BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_Target(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

