// BlueprintGeneratedClass BPQ_Travel.BPQ_Travel_C
struct ABPQ_Travel_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* Location; 
	struct USphereComponent* Sphere; 
	struct USceneComponent* DefaultSceneRoot; 

	bool Check(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (HasOutParms|BlueprintEvent)
	void Overlap(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BPQ_Travel(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

