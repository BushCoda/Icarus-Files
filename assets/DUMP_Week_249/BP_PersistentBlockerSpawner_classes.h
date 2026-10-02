// BlueprintGeneratedClass BP_PersistentBlockerSpawner.BP_PersistentBlockerSpawner_C
struct ABP_PersistentBlockerSpawner_C : APersistentBlockerSpawner {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* DefaultSceneRoot; 
	bool EditorVisible; 
	struct UChildActorComponent* ChildActor; 

	void UserConstructionScript(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_PersistentBlockerSpawner(int32_t EntryPoint); // (Final|UbergraphFunction)
};

