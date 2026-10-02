// BlueprintGeneratedClass BP_Polymerizer.BP_Polymerizer_C
struct ABP_Polymerizer_C : ABP_ResourceNetworkProcessor_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UStaticMeshComponent* DFShadow1; 
	struct UStaticMeshComponent* DFShadow; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight; 
	struct USceneComponent* Scene_Lights; 
	struct UStaticMeshComponent* StaticMesh4; 
	struct UStaticMeshComponent* StaticMesh3; 
	struct UStaticMeshComponent* StaticMesh2; 
	struct UStaticMeshComponent* StaticMesh1; 
	struct USceneComponent* Proxy1_Anything; 
	struct UNiagaraComponent* NS_Polymerizer_Mist; 
	struct UNiagaraComponent* NS_Natural_Oil_Refiner_Spray1; 
	struct UNiagaraComponent* NS_Natural_Oil_Refiner_Spray; 
	struct UStaticMeshComponent* StaticMesh; 
	struct UFMODAudioComponent* FMODAudioLoop; 
	struct USceneComponent* ProxyMeshesCrafting; 
	struct USceneComponent* ProxyMeshesInventory; 
	struct UStaticMeshComponent* FadingOutCrate; 

	void UpdateEffects(bool EnergyFlowChanged, bool ProcessorActiveChanged); // (Public|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnNotifyEnd_F1A6F71B404653A4ABB546B8F6FA9C3A(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyBegin_F1A6F71B404653A4ABB546B8F6FA9C3A(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnInterrupted_F1A6F71B404653A4ABB546B8F6FA9C3A(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnBlendOut_F1A6F71B404653A4ABB546B8F6FA9C3A(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnCompleted_F1A6F71B404653A4ABB546B8F6FA9C3A(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void Multi_OnCraftedItem(struct FProcessingItem Item); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Polymerizer(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

