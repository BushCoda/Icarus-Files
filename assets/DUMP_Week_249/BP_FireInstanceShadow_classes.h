// BlueprintGeneratedClass BP_FireInstanceShadow.BP_FireInstanceShadow_C
struct ABP_FireInstanceShadow_C : AFireInstanceShadow {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_FireAudio_C* Audio; 
	struct ABP_FireInstance_RVTCapture_C* RVTCaptureActor; 
	struct TArray<struct UFlammableInstance*> Instance; 
	struct FMulticastInlineDelegate RemoveFireRef; 
	float DistanceBetweenFoliage; 

	void OnFlammableInstanceAdded(struct UFlammableInstance* Instance); // (Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void OnTransferredTo(struct AFireInstanceBase* Dest, struct UFlammableInstance* Instance); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void RemoveFireInstance(struct UFlammableInstance* Instance, struct UFlammableState* State); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__PropagatedMesh_K2Node_ComponentBoundEvent_1_OnConcaveHullMeshGenerated__DelegateSignature(); // (BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_FireInstanceShadow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void RemoveFireRef__DelegateSignature(struct UFlammableInstance* FlammableInstanceRef); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

