// BlueprintGeneratedClass BP_Mammoth_IceBall_Dummy.BP_Mammoth_IceBall_Dummy_C
struct ABP_Mammoth_IceBall_Dummy_C : ASkeletalItem {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* NS_ProjectileTrail; 
	struct UStaticMeshComponent* StaticMesh; 
	float Timeline_0_ZHeight_5CD0FA7E41A3A25D20E76F8A2FA1389F; 
	enum class ETimelineDirection Timeline_0__Direction_5CD0FA7E41A3A25D20E76F8A2FA1389F; 
	struct UTimelineComponent* Timeline_1; 
	struct FVector TargetLocation; 
	bool FinishedMoving; 

	void Timeline_0__FinishedFunc(); // (BlueprintEvent)
	void Timeline_0__UpdateFunc(); // (BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Mammoth_IceBall_Dummy(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

