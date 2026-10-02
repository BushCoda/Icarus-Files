// BlueprintGeneratedClass ICriticalHitInterface.ICriticalHitInterface_C
struct UICriticalHitInterface_C : UInterface {

	bool CanKillcam(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GatherIntersections(struct AActor* Projectile, bool Debug, bool& Return, struct TArray<struct FFCHCollisionStruct>& Intersections); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetCHBounds(bool& Return, struct UBoxComponent*& Box); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetTargetHealth(bool& Return, float& Health); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ResetPrediction(bool& Return); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void PredictMovement(float Time, bool& Return); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
};

