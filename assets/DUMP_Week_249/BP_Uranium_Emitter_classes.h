// BlueprintGeneratedClass BP_Uranium_Emitter.BP_Uranium_Emitter_C
struct ABP_Uranium_Emitter_C : AIcarusActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_Radiation_Sphere_01; 
	struct USceneComponent* DefaultSceneRoot; 
	float RadiationDistance; 
	bool EmittingRadiation; 

	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Uranium_Emitter(int32_t EntryPoint); // (Final|UbergraphFunction)
};

