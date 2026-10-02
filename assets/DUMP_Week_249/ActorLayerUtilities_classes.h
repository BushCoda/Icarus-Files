// Class ActorLayerUtilities.LayersBlueprintLibrary
struct ULayersBlueprintLibrary : UBlueprintFunctionLibrary {

	void RemoveActorFromLayer(struct AActor* InActor, struct FActorLayer& Layer); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	struct TArray<struct AActor*> GetActors(struct UObject* WorldContextObject, struct FActorLayer& ActorLayer); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void AddActorToLayer(struct AActor* InActor, struct FActorLayer& Layer); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

