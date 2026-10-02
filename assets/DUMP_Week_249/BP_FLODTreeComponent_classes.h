// BlueprintGeneratedClass BP_FLODTreeComponent.BP_FLODTreeComponent_C
struct UBP_FLODTreeComponent_C : UFLODActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ATreeBase* OwnerTree; 

	bool RevealImpl(struct FTransform& Transform); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool ConcealingImpl(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_FLODTreeComponent(int32_t EntryPoint); // (Final|UbergraphFunction)
};

