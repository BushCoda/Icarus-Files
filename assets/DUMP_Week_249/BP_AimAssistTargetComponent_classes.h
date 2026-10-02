// BlueprintGeneratedClass BP_AimAssistTargetComponent.BP_AimAssistTargetComponent_C
struct UBP_AimAssistTargetComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float CollisionRadiusScale; 
	float OverrideCollisionRadius; 
	bool DebugComponent; 
	struct USphereComponent* Collider; 
	float DesiredSize; 
	struct TArray<struct FName> ColliderTags; 

	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_AimAssistTargetComponent(int32_t EntryPoint); // (Final|UbergraphFunction)
};

