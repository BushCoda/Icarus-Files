// WidgetBlueprintGeneratedClass W_ProjectionWidget.W_ProjectionWidget_C
struct UW_ProjectionWidget_C : UHuntingWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FVector2D MinSize; 
	struct FVector2D MaxSize; 
	float SizeDistanceStart; 
	float SizeDistanceEnd; 
	struct UBP_UIProjectionComponent_C* ProjectionActor; 
	struct FVector2D Alignment; 
	struct FVector2D CachedSize; 
	bool UseAutoSizing; 
	float MinAutoSize; 
	float MaxAutoSize; 
	bool UseScreenEdge; 
	float ScreenEdgeBuffer; 
	bool IsAtEdge; 

	void GetOpacityDistanceRanges(float& NearbyDistanceStart, float& NearbyDistanceEnd); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void UpdateOpacityForDistance(float DistanceToActor, float OverrideValue); // (Public|BlueprintCallable|BlueprintEvent)
	void RemoveWidget(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetOverridePlacement(struct FVector2D& Location, float& ScaleAlpha, struct FVector2D& Alignment, bool& UseOpacity); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool ShouldUseOverride(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateEdgeScreen(bool AtEdge); // (Public|BlueprintCallable|BlueprintEvent)
	void TickEdgeScreen(struct FVector2D DirFromCentre); // (Public|BlueprintCallable|BlueprintEvent)
	void SetProjectionActor(struct UBP_UIProjectionComponent_C* ProjectionActor); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateVisuals(); // (Public|BlueprintCallable|BlueprintEvent)
	void TickWidget(); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Set Scale(float Scale); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_W_ProjectionWidget(int32_t EntryPoint); // (Final|UbergraphFunction)
};

