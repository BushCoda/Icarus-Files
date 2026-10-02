// BlueprintGeneratedClass BP_BuildingAudioComponent.BP_BuildingAudioComponent_C
struct UBP_BuildingAudioComponent_C : USceneComponent {
	struct TMap<struct UFMODEvent*, struct UMultiPointAudioEmitter*> Emitters; 
	struct UFMODEvent* FireAudioEvent; 

	void GetFireAudioData(bool& HasFireAudio, float& Weighting, struct FVector& Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void RemoveUnzipAudioNode(struct USceneComponent* TargetComponent, struct UFMODEvent* FMODEvent); // (Public|BlueprintCallable|BlueprintEvent)
	void AddUnzipAudioNode(struct USceneComponent* TargetComponent, struct UFMODEvent* FMODEvent); // (Public|BlueprintCallable|BlueprintEvent)
	void RemoveEmitterNode(struct UObject* NodeObject, struct UFMODEvent* FMODEvent); // (Private|BlueprintCallable|BlueprintEvent)
	void AddEmitterNode(struct UObject* NodeObject, struct UFMODEvent* FMODEvent); // (Private|BlueprintCallable|BlueprintEvent)
	void RemoveFireAudioNode(struct UFlammableInstance* FlammableInstance); // (Public|BlueprintCallable|BlueprintEvent)
	void AddFireAudioNode(struct UFlammableInstance* FlammableInstance); // (Public|BlueprintCallable|BlueprintEvent)
	void RemoveWeatherAudio(struct UWeatherAudioComponent* WeatherAudioComponent, struct UFMODEvent* Event); // (Public|BlueprintCallable|BlueprintEvent)
	void Add Weather Audio(struct UWeatherAudioComponent* WeatherAudioComponent, struct UFMODEvent* Event); // (Public|BlueprintCallable|BlueprintEvent)
};

