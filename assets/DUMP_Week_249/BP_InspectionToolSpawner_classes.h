// BlueprintGeneratedClass BP_InspectionToolSpawner.BP_InspectionToolSpawner_C
struct ABP_InspectionToolSpawner_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* Sphere; 
	struct UWidgetComponent* Widget; 
	struct USceneComponent* DefaultSceneRoot; 
	float Distance; 
	struct FVector ImpactPoint; 
	struct UPhysicalMaterial* PhysicalMaterial; 
	struct AActor* HitActor; 
	struct UPrimitiveComponent* HitComponent; 
	struct FName BoneName; 
	bool HoldTrace; 
	struct UUMG_InspectionToolPopup_C* UMGWidgetRef; 

	void DisplayWidget(); // (BlueprintCallable|BlueprintEvent)
	void KillActor(float InLifespan); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_InspectionToolSpawner(int32_t EntryPoint); // (Final|UbergraphFunction)
};

