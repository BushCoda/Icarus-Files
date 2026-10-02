// BlueprintGeneratedClass BP_Reward_Transport_Pod.BP_Reward_Transport_Pod_C
struct ABP_Reward_Transport_Pod_C : ABP_Transport_Pod_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UAudioContextComponent* AudioContext; 
	struct UNiagaraComponent* NS_FlareSmoke_Yellow; 
	struct UNiagaraComponent* NS_Flare_Yellow; 
	struct UFMODAudioComponent* FMODAudio_FlareOneShot; 
	struct UFMODAudioComponent* FMODAudio_FlareLoopFizz; 
	struct UPointLightComponent* PointLight; 
	struct USceneComponent* Scene_1; 
	struct UIcarusMapIconComponent* IcarusMapIcon; 
	float FireFlareTimeline_OverrideAlpha_E47CA7614CCCF9E436A05782351C878D; 
	float FireFlareTimeline_FlareLocation_E47CA7614CCCF9E436A05782351C878D; 
	enum class ETimelineDirection FireFlareTimeline__Direction_E47CA7614CCCF9E436A05782351C878D; 
	struct UTimelineComponent* FireFlareTimeline; 
	bool FireFlare; 

	void OnRep_FireFlare(); // (BlueprintCallable|BlueprintEvent)
	void WorldObject_Interact(struct AActor* Instigator); // (Public|BlueprintCallable|BlueprintEvent)
	void FireFlareTimeline__FinishedFunc(); // (BlueprintEvent)
	void FireFlareTimeline__UpdateFunc(); // (BlueprintEvent)
	void Flare(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnLanded(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Reward_Transport_Pod(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

