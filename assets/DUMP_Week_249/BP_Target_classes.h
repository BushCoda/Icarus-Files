// BlueprintGeneratedClass BP_Target.BP_Target_C
struct ABP_Target_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* TargetPanel; 
	struct UTextRenderComponent* Text_Lane; 
	struct UTextRenderComponent* Text_Score; 
	struct UPointLightComponent* TargetLight; 
	struct USphereComponent* BullseyeSphere; 
	struct UStaticMeshComponent* Sphere; 
	struct UStaticMeshComponent* TargetSphere; 
	float MinDistanceRequirement; 
	struct FString Lane; 
	float HighScore; 
	float DistanceShot; 

	bool CanKillCam(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GatherIntersections(struct AActor* Projectile, bool Debug, bool& Return, struct TArray<struct FFCHCollisionStruct>& Intersections); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void PredictMovement(float Time, bool& Return); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ResetPrediction(bool& Return); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetTargetHealth(bool& Return, float& Health); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetCHBounds(bool& Return, struct UBoxComponent*& Box); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void 500mShotCheck(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateLightPosition(struct FVector position); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateScoreText(struct FString Name, float Distance); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // (HasOutParms|BlueprintEvent)
	void BndEvt__TargetPanel_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // (HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Target(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

