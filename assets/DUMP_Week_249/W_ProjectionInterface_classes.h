// WidgetBlueprintGeneratedClass W_ProjectionInterface.W_ProjectionInterface_C
struct UW_ProjectionInterface_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UCanvasPanel* ProjectionWidgetCanvas; 
	struct TArray<struct UBP_UIProjectionComponent_C*> ProjectionActors; 
	struct TArray<struct UW_ProjectionWidget_C*> ProjectionWidgets; 
	struct TArray<struct UBP_UIProjectionComponent_C*> NearbyProjectionActors; 
	int32_t MaxProjectionWidgets; 

	void ClampProjectionListToMaxSize(struct TArray<struct UActorComponent*>& NearbyProjectionActors); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ForceUpdate(); // (Public|BlueprintCallable|BlueprintEvent)
	bool ProjectionApproved(struct UBP_UIProjectionComponent_C* Component); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetPlayer(struct APawn*& Player); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateNearbyProjectionActors(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TickWidgets(); // (Public|BlueprintCallable|BlueprintEvent)
	void RemoveProjectionWidget(struct UW_ProjectionWidget_C* Widget); // (Public|BlueprintCallable|BlueprintEvent)
	void CreateProjectionWidget(struct UHuntingWidget* Class, struct UW_ProjectionWidget_C*& Return); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void AddProjectionWidget(struct UBP_UIProjectionComponent_C* ProjectionActor); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateProjectionWidgets(); // (Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_W_ProjectionInterface(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

