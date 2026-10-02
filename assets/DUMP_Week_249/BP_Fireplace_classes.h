// BlueprintGeneratedClass BP_Fireplace.BP_Fireplace_C
struct ABP_Fireplace_C : ABP_FireProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* Scene_Niagara; 
	struct USceneComponent* Scene_Lights; 

	void UpdateEffects(bool Active); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateAttachedSmokeParticles(bool Active); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AttachedDeployableActorsUpdated(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Fireplace(int32_t EntryPoint); // (Final|UbergraphFunction)
};

