// BlueprintGeneratedClass BP_Mount_WoollyMammoth.BP_Mount_WoollyMammoth_C
struct ABP_Mount_WoollyMammoth_C : ABP_Mount_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USphereComponent* Sphere; 
	struct UStaticMeshComponent* StaticMesh9; 
	struct UStaticMeshComponent* StaticMesh8; 
	struct UStaticMeshComponent* StaticMesh7; 
	struct UStaticMeshComponent* StaticMesh6; 
	struct UStaticMeshComponent* StaticMesh5; 
	struct UStaticMeshComponent* StaticMesh4; 
	struct UStaticMeshComponent* StaticMesh3; 
	struct UStaticMeshComponent* StaticMesh2; 
	struct UStaticMeshComponent* Platform_L; 
	struct UStaticMeshComponent* Platform_R; 
	struct USceneComponent* Meshes; 
	struct UGFurComponent* GFurShort; 
	struct USceneComponent* PetTarget; 
	struct USceneComponent* HandsTarget; 
	bool DidStatsUpdate; 

	void PerformAlternateAttack(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitialiseSaddle(struct AActor* SaddleActorClass, struct FItemData SaddleItem); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct UAnimMontage* GetMontageForGameplayTag(struct FGameplayTag& Tag, struct FName& Section); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const)
	void UpdateShelterRadius(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FVector GetHandsTargetLocation(struct FVector SeatLocation); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Multicast_ActorDeath(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (Event|Public|BlueprintEvent)
	void StatsUpdated(); // (BlueprintCallable|BlueprintEvent)
	void RefreshStats(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Mount_WoollyMammoth(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

