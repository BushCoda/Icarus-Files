// BlueprintGeneratedClass BP_LavaSpot_Flamethrower.BP_LavaSpot_Flamethrower_C
struct ABP_LavaSpot_Flamethrower_C : AIcarusActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* SizzleAudio; 
	struct UNiagaraComponent* NS_LavaSpot_Bubbling; 
	struct UNiagaraComponent* NS_LavaSmoke; 
	struct UNiagaraComponent* NS_Lava_Splash; 
	struct UStaticMeshComponent* SM_LC_LavaCold_05; 
	struct USceneComponent* DefaultSceneRoot; 
	float Timeline_1_NewTrack_0_BFA7F5C7455AC3DAAAE68CAF85F60BCD; 
	enum class ETimelineDirection Timeline_1__Direction_BFA7F5C7455AC3DAAAE68CAF85F60BCD; 
	struct UTimelineComponent* Timeline_2; 
	float Timeline_0_NewTrack_0_2E8BB52B4FCD302AB9D00DAAC44613F2; 
	enum class ETimelineDirection Timeline_0__Direction_2E8BB52B4FCD302AB9D00DAAC44613F2; 
	struct UTimelineComponent* Timeline_1; 
	float Edge Taper; 
	float FlowSpeed; 
	float Base to Flowing; 
	float Dryness; 
	float Base to Patchy; 
	float EdgeTaper; 
	float EdgeNoise; 
	bool IsBubbling; 

	void Timeline_0__FinishedFunc(); // (BlueprintEvent)
	void Timeline_0__UpdateFunc(); // (BlueprintEvent)
	void Timeline_1__FinishedFunc(); // (BlueprintEvent)
	void Timeline_1__UpdateFunc(); // (BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void Activate(); // (BlueprintCallable|BlueprintEvent)
	void Dry(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_LavaSpot_Flamethrower(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

