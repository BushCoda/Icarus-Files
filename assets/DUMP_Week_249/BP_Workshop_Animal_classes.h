// BlueprintGeneratedClass BP_Workshop_Animal.BP_Workshop_Animal_C
struct ABP_Workshop_Animal_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_DEP_Trap_Small_T4; 
	struct UFMODAudioComponent* SFX_AirHiss; 
	struct UNiagaraComponent* NS_CryogenicCrate; 
	struct USceneComponent* Scene; 
	struct FAISetupRowHandle AISetup; 
	struct TMap<struct FItemsStaticRowHandle, struct FAISetupRowHandle> ItemTOAI; 
	bool HasSpawned; 
	int32_t SkinIndex; 
	bool IsSmallCrate; 

	void GetTameDataForOwningNPC(struct TScriptInterface<ISpawnableAI> Target, struct FTamesRowHandle& RowHandle, bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void Multicast_OpenCage(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void DoSpawn(struct AActor* Instigator); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Workshop_Animal(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

