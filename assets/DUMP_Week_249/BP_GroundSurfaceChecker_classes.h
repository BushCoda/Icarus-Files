// BlueprintGeneratedClass BP_GroundSurfaceChecker.BP_GroundSurfaceChecker_C
struct UBP_GroundSurfaceChecker_C : USceneComponent {
	enum class EPhysicalSurface Surface; 
	float TraceRadius; 
	float TraceDistance; 
	float SlopeAngle; 
	struct TArray<struct AActor*> IgnoreActors; 

	void GetCurrentSurface(enum class EPhysicalSurface& Surface, float& WaterDepth, float& SlopeAngle, struct AActor*& HitActor, struct FVector& HitLocation); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
};

