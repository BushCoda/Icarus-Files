// BlueprintGeneratedClass BP_Repair_Bench.BP_Repair_Bench_C
struct ABP_Repair_Bench_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* Scene_Lights; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UStaticMeshComponent* SM_ORB_LightBulb; 
	struct UStaticMeshComponent* SM_ORB_STN_Light_02; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct UStaticMeshComponent* Cube3; 
	struct UStaticMeshComponent* Cube2; 
	struct UStaticMeshComponent* Cube1; 
	struct UStaticMeshComponent* Cube; 
	struct UBPC_Recipe_Proxy_C* BPC_Recipe_Proxy; 
	struct USceneComponent* ProxyMeshesCrafting; 
	struct UCameraComponent* Camera; 
	struct UUMG_IcarusLinkedActorPanel_C* WidgetClassToOpen; 
	struct UResourceNetworkComponent* EnergyComponent; 
	bool HasPower; 
	float RepairThreshold; 
	struct FMulticastInlineDelegate RepairThresholdUpdated; 

	bool RepairHasShelter(struct AIcarusPlayerCharacter* CraftingPlayer); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool CanRepairItem(struct FItemData& Item); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void OnRep_RepairThreshold(); // (BlueprintCallable|BlueprintEvent)
	void SetThreshold(float RepairThreshold); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_HasPower(); // (BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void CheckPowerAndUpdate(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Repair_Bench(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void RepairThresholdUpdated__DelegateSignature(float NewThreshold); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

