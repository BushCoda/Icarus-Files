// BlueprintGeneratedClass BP_Weight.BP_Weight_C
struct UBP_Weight_C : UWeightComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct TMap<struct UShapeComponent*, struct FActorArrayStruct> OnTopOf; 
	bool SpreadWeightToBuildingNeighbors; 

	float GetWeight(struct UShapeComponent* Shape); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RemoveWeightFromBuilding(struct AActor* Building, struct UShapeComponent* Shape); // (Public|BlueprintCallable|BlueprintEvent)
	void SendWeightToBuilding(struct AActor* Building, struct UShapeComponent* Shape); // (Public|BlueprintCallable|BlueprintEvent)
	void BoundColliderEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BoundColliderBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Init(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Weight(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

