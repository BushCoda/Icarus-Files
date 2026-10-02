// BlueprintGeneratedClass BP_Electric_Oxite_Dissolver.BP_Electric_Oxite_Dissolver_C
struct ABP_Electric_Oxite_Dissolver_C : ABP_Deployable_PowerToggleableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UCameraComponent* Camera; 
	struct UStaticMeshComponent* Needle_Slot9; 
	struct UStaticMeshComponent* Needle_Slot8; 
	struct UStaticMeshComponent* Needle_Slot7; 
	struct UStaticMeshComponent* Needle_Slot6; 
	struct UStaticMeshComponent* Needle_Slot5; 
	struct UStaticMeshComponent* Needle_Slot4; 
	struct UStaticMeshComponent* Needle_Slot3; 
	struct UStaticMeshComponent* Needle_Slot2; 
	struct UStaticMeshComponent* Needle_Slot1; 
	struct UStaticMeshComponent* Needle_Slot0; 
	struct UStaticMeshComponent* Needle_Large; 
	struct UFMODAudioComponent* FMOD_Active; 
	float OxygenPerSecond; 
	bool FillingTanks; 
	float DividedFlowRate; 

	void UpdateOxyDials(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateFuelDial(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_FillingTanks(); // (BlueprintCallable|BlueprintEvent)
	void Set Filling Effects(bool bIsFillingTanks); // (Public|BlueprintCallable|BlueprintEvent)
	void ActorsRequiringOxygen(int32_t& NumActors); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ShouldOxygenFlow(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void ShouldOxygenFlowDelayed(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void FillTanks(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Electric_Oxite_Dissolver(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

