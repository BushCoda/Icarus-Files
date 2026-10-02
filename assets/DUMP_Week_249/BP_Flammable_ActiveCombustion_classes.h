// BlueprintGeneratedClass BP_Flammable_ActiveCombustion.BP_Flammable_ActiveCombustion_C
struct UBP_Flammable_ActiveCombustion_C : UFlammableActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	bool CanPropagateToTarget(struct FFlammableTargetIgnite Target); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void IsTargetDeployableFoundation(struct FFlammableTargetIgnite Target, bool& IsDeployableFoundation); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void IsTargetHeldByPlayer(struct FFlammableTargetIgnite Target, bool& IsOwningPlayer); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FBoxSphereBounds GetLocalBounds(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool CanPropagate(enum class EFlammablePropagationType PropagationType); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void OnFlammableInstanceAttached(struct UFlammableInstance* Instance); // (Event|Public|BlueprintEvent)
	void OnFlammableInstanceDetached(struct UFlammableInstance* Instance); // (Event|Public|BlueprintEvent)
	void OnFlammableInstanceState_Combusting_Enter(struct UFlammableInstance* Instance, struct UFlammableState* State); // (BlueprintCallable|BlueprintEvent)
	void OnFlammableInstanceState_Combusting_Exit(struct UFlammableInstance* Instance, struct UFlammableState* State); // (BlueprintCallable|BlueprintEvent)
	void OnActiveStateChanged(bool IsActive); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Flammable_ActiveCombustion(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

