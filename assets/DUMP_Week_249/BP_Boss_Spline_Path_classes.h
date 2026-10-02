// BlueprintGeneratedClass BP_Boss_Spline_Path.BP_Boss_Spline_Path_C
struct ABP_Boss_Spline_Path_C : AActor {
	struct USplineComponent* Spline; 
	struct TArray<struct FBossSplinePathConnection> PathLinks; 
	struct FName SelfActorTag; 

	void ClearDebug(); // (Public|BlueprintCallable|BlueprintEvent)
	void DebugConnections(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
};

