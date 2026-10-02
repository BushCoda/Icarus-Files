// BlueprintGeneratedClass BP_UIProjectionComponent.BP_UIProjectionComponent_C
struct UBP_UIProjectionComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct TSoftClassPtr<UObject> WidgetClass; 
	struct FMulticastInlineDelegate ProjectionUpdated; 
	struct UW_ProjectionWidget_C* Widget; 
	bool Enabled; 
	float NearbyDistanceStart; 
	float NearbyDistanceEnd; 
	struct USceneComponent* TargetComponentOverride; 
	struct FName ProjectionLocationTag; 
	bool HasPriorityVisibility; 

	void SetTargetComponent(struct USceneComponent* TargetComponentOverride); // (Public|BlueprintCallable|BlueprintEvent)
	void ForceUpdate(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_NearbyDistanceStart(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_NearbyDistanceEnd(); // (BlueprintCallable|BlueprintEvent)
	void RegisterWidget(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetWidgetLocation(struct FVector& Location); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnLoaded_D09A340442841CEDB6A7A58D706E1269(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_085089B14AC10467FBC409BEB05D5F01(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void SetWidget(struct TSoftClassPtr<UObject> Widget); // (BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_UIProjectionComponent(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void ProjectionUpdated__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

