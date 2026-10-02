// WidgetBlueprintGeneratedClass UMG_TitleScreen_Background.UMG_TitleScreen_Background_C
struct UUMG_TitleScreen_Background_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* BackgroundParallax; 
	struct UImage* Background; 
	struct UCanvasPanel* BackLayer; 
	struct UCanvasPanel* MiddleLayer; 
	struct UImage* midground; 
	struct FVector2D SmoothingMousePosition; 
	float StartingTime; 

	void Update Smooth Mouse Position(struct FVector2D MousePosition, float DeltaTime); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateParallax(); // (Public|BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_TitleScreen_Background(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

