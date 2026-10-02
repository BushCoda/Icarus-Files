// WidgetBlueprintGeneratedClass W_ProjectionPopup_Player.W_ProjectionPopup_Player_C
struct UW_ProjectionPopup_Player_C : UW_ProjectionWidget_C {
	struct UImage* HostIcon; 
	struct UImage* Image_116; 
	struct UTextBlock* Name; 
	struct UImage* PlayerIcon; 
	struct UTexture2D* Icon; 
	struct APlayerState* Player State; 

	void UpdateHostImage(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateImage(struct UTexture2D* Texture); // (Public|BlueprintCallable|BlueprintEvent)
	void IsAlive(bool& Alive); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void TickEdgeScreen(struct FVector2D DirFromCentre); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateEdgeScreen(bool AtEdge); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateVisuals(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
};

