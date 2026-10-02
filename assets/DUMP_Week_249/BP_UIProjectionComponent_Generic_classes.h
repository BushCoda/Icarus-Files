// BlueprintGeneratedClass BP_UIProjectionComponent_Generic.BP_UIProjectionComponent_Generic_C
struct UBP_UIProjectionComponent_Generic_C : UBP_UIProjectionComponent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool IsAlive; 
	bool StatAbilityEnable; 
	float DotToSee; 
	float RangeToDotSee; 
	float RangeToCloseCircleSee; 
	bool DotSeeEnable; 
	bool CircleCloseSee; 
	struct AActor* CurrentItem; 
	float RightOffset; 
	float UpOffset; 
	bool PreviousUpdateEnabled; 
	struct UW_ProjectionWidget_C* PreviousWidgetClass; 

	void GatherBounds(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FVector GetProjectionLocation(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateEnabled(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_IsAlive(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_UIProjectionComponent_Generic(int32_t EntryPoint); // (Final|UbergraphFunction)
};

