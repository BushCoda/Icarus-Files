// BlueprintGeneratedClass BP_DeployablePreview.BP_DeployablePreview_C
struct ABP_DeployablePreview_C : AStaticMeshActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetComponent* RotatorWidget; 
	struct UBoxComponent* BoundsCollider; 
	struct UStaticMesh* MeshRef; 
	float WidgetDrawSize; 
	enum class EWorldPlacementType PlacementType; 
	struct FVector ExtentOffset; 
	struct FVector OriginOffset; 
	struct FVector ExtentScale; 
	bool InitialShowRotator; 
	bool EnableShelterChecks; 
	struct UShelteredModifierComponent* ShelterModifier; 

	void CalcExtentOffset(struct FVector& ExtentOffset); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void UpdateMaterials(bool ValidPlacement); // (Public|BlueprintCallable|BlueprintEvent)
	void SetInitialRotator(bool Visible); // (Public|BlueprintCallable|BlueprintEvent)
	void ToggleRotationIndicator(bool Enabled, bool SnappingAvailable); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_DeployablePreview(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

