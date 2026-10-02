// BlueprintGeneratedClass BP_Stationeers_BobbleHead_Orange.BP_Stationeers_BobbleHead_Orange_C
struct ABP_Stationeers_BobbleHead_Orange_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_DEP_Bobblehead_Orange; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Base; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Head; 

	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void WiggleWiggleWiggle(); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Stationeers_BobbleHead_Orange(int32_t EntryPoint); // (Final|UbergraphFunction)
};

