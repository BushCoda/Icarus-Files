// BlueprintGeneratedClass BP_FlowerPot_Base.BP_FlowerPot_Base_C
struct ABP_FlowerPot_Base_C : ABP_DeployableBase_C {
	struct UStaticMeshComponent* Strawflower; 
	struct UStaticMeshComponent* Poppy; 
	struct UStaticMeshComponent* Lavender; 
	struct UStaticMeshComponent* Daisy; 
	struct UStaticMeshComponent* Bluebell; 

	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
};

