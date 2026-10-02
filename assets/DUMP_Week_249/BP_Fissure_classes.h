// BlueprintGeneratedClass BP_Fissure.BP_Fissure_C
struct ABP_Fissure_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_Node_SuperCooledIce1; 
	struct UStaticMeshComponent* GrassBlocker; 
	struct USceneComponent* DefaultSceneRoot; 
	float EmissionExplodetimeline_NewTrack_0_18A55A244D31B5598669818705DD169A; 
	enum class ETimelineDirection EmissionExplodetimeline__Direction_18A55A244D31B5598669818705DD169A; 
	struct UTimelineComponent* EmissionExplodetimeline; 
	float EmissionTimeline_EmissionFadeOut_39187FDB4480A6309F5C30989DBD9821; 
	enum class ETimelineDirection EmissionTimeline__Direction_39187FDB4480A6309F5C30989DBD9821; 
	struct UTimelineComponent* EmissionTimeline; 
	float OpacityTimeline_Opacity_7935BDA94BF1906A24E6CEA5C64CC129; 
	enum class ETimelineDirection OpacityTimeline__Direction_7935BDA94BF1906A24E6CEA5C64CC129; 
	struct UTimelineComponent* OpacityTimeline; 
	float Z Offset; 
	struct TArray<struct FVector> Points; 
	struct FVector2D DelayRange; 
	float Increments; 
	struct USplineComponent* Spline; 
	int32_t Array Index; 
	float Return Value X (Roll); 
	struct UMaterialInstanceDynamic* MaterialInstance; 
	struct TArray<struct UStaticMesh*> FissureMeshes; 
	struct UMaterialInstance* FissureMaterial; 
	struct FVector2D XYOffset; 
	struct TArray<struct UNiagaraComponent*> ExplosionNiagara; 
	struct TArray<struct UNiagaraComponent*> IdleNiagara; 
	float ExplosionDamageRadius; 
	float ExplosionDamage; 

	void EmissionExplodetimeline__FinishedFunc(); // (BlueprintEvent)
	void EmissionExplodetimeline__UpdateFunc(); // (BlueprintEvent)
	void EmissionTimeline__FinishedFunc(); // (BlueprintEvent)
	void EmissionTimeline__UpdateFunc(); // (BlueprintEvent)
	void OpacityTimeline__FinishedFunc(); // (BlueprintEvent)
	void OpacityTimeline__UpdateFunc(); // (BlueprintEvent)
	void Start(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void DestroyFissure(); // (BlueprintCallable|BlueprintEvent)
	void ExplodeFissure(); // (BlueprintCallable|BlueprintEvent)
	void StopTimelines(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Fissure(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

