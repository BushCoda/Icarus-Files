// BlueprintGeneratedClass BP_Rock_Golem_Spawner.BP_Rock_Golem_Spawner_C
struct ABP_Rock_Golem_Spawner_C : ABP_Faction_Mission_Spawner_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* ActiveAudioLoop; 
	struct UStaticMeshComponent* SM_ObjectMesh4; 
	struct UStaticMeshComponent* SM_ROCK_LC_Ledge_02; 
	struct UStaticMeshComponent* SM_ROCK_LC_MED_011; 
	struct UStaticMeshComponent* SM_ROCK_LC_MED_010; 
	struct UStaticMeshComponent* SM_ROCK_LC_MED_09; 
	struct UStaticMeshComponent* SM_ROCK_LC_MED_08; 
	struct UStaticMeshComponent* SM_ROCK_LC_MED_07; 
	struct UStaticMeshComponent* SM_ROCK_LC_MED_06; 
	struct UStaticMeshComponent* SM_ROCK_LC_SML_016; 
	struct UStaticMeshComponent* SM_ROCK_LC_SML_015; 
	struct UStaticMeshComponent* SM_ROCK_LC_SML_014; 
	struct UStaticMeshComponent* SM_ROCK_LC_SML_013; 
	struct UStaticMeshComponent* SM_ROCK_LC_SML_012; 
	struct UStaticMeshComponent* SM_ROCK_LC_SML_011; 
	struct UStaticMeshComponent* SM_ROCK_LC_SML_010; 
	struct UStaticMeshComponent* SM_ROCK_LC_SML_09; 
	struct UStaticMeshComponent* SM_ROCK_LC_SML_08; 
	struct UStaticMeshComponent* SM_ROCK_LC_SML_07; 
	struct UStaticMeshComponent* SM_ROCK_LC_SML_06; 
	struct UStaticMeshComponent* SM_ROCK_LC_SML_05; 
	struct UStaticMeshComponent* SM_ROCK_LC_SML_04; 
	struct UStaticMeshComponent* SM_ROCK_LC_SML_03; 
	struct UStaticMeshComponent* SM_GolemSpawner_Hole; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UStaticMeshComponent* BlockedMesh; 
	struct UBoxComponent* Box; 
	struct UParticleSystemComponent* ParticleSystem; 
	struct UStaticMeshComponent* SM_ObjectMesh3; 
	struct UStaticMeshComponent* SM_ObjectMesh2; 
	struct UStaticMeshComponent* SM_ObjectMesh1; 

	void OnCreatureSpawned(struct AActor* Creature); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void CustomEvent_1(struct UHighlightableComponent* Highlightable, struct UPrimitiveComponent* Component, bool bHighlighted); // (BlueprintCallable|BlueprintEvent)
	void TriggerParticle(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void DestroyUpdate(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Rock_Golem_Spawner(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

