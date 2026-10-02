// BlueprintGeneratedClass BP_FLODItemActor.BP_FLODItemActor_C
struct ABP_FLODItemActor_C : AStaticItem {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFLODRewardComponent* IcarusFLODReward; 
	struct UFLODActorComponent* IcarusFLODActor; 
	struct UInteractableComponent* Interactable; 

	void BndEvt__IcarusFLODActor_K2Node_ComponentBoundEvent_0_OnActorRecordAssigned__DelegateSignature(struct UFLODActorComponent* Component, struct FFLODActorRecordInstance& Current, struct FFLODActorRecordInstance& Previous); // (HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_FLODItemActor(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

