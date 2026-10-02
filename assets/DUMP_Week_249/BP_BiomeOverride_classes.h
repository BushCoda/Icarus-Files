// BlueprintGeneratedClass BP_BiomeOverride.BP_BiomeOverride_C
struct ABP_BiomeOverride_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBoxComponent* OverrideVolume; 
	struct USceneComponent* DefaultSceneRoot; 
	struct FBiomesEnum Biome; 
	bool Debug; 

	void GetAtmosphereController(struct ABP_AtmosphereController_C*& AtmosphereController); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UserConstructionScript(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BndEvt__OverrideVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (HasOutParms|BlueprintEvent)
	void BndEvt__OverrideVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // (BlueprintEvent)
	void ExecuteUbergraph_BP_BiomeOverride(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

