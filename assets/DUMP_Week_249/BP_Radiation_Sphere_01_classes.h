// BlueprintGeneratedClass BP_Radiation_Sphere_01.BP_Radiation_Sphere_01_C
struct ABP_Radiation_Sphere_01_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* Niagara; 
	struct UStaticMeshComponent* SM_Radiation_Sphere_01; 
	struct USceneComponent* DefaultSceneRoot; 
	float OPacity_NewTrack_0_5BAC778644436C310C7B15A254278562; 
	enum class ETimelineDirection OPacity__Direction_5BAC778644436C310C7B15A254278562; 
	struct UTimelineComponent* Opacity; 

	void OPacity__FinishedFunc(); // (BlueprintEvent)
	void OPacity__UpdateFunc(); // (BlueprintEvent)
	void SetEffectSize(int32_t Radius); // (BlueprintCallable|BlueprintEvent)
	void SetIsMoving(bool IsMoving); // (BlueprintCallable|BlueprintEvent)
	void BlendIn(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Radiation_Sphere_01(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

