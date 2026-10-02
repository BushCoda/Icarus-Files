// BlueprintGeneratedClass BP_DeployableContainerBase.BP_DeployableContainerBase_C
struct ABP_DeployableContainerBase_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_IcarusLinkedActorPanel_C* WidgetClassToOpen; 
	bool ShowStoreAll; 
	bool ShowTakeAll; 
	struct UFMODEvent* PlayInteractAudio; 
	struct UFMODEvent* StopInterractAudio; 

	void PlayStopInterractAudio(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayInterractAudio(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void OnBecomeInteractedWith(); // (BlueprintCallable|BlueprintEvent)
	void OnNoLongerInteractedWith(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_DeployableContainerBase(int32_t EntryPoint); // (Final|UbergraphFunction)
};

