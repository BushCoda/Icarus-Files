// BlueprintGeneratedClass BP_SkeletalItem_Jackhammer.BP_SkeletalItem_Jackhammer_C
struct ABP_SkeletalItem_Jackhammer_C : ASkeletalItem {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* FMODAudio; 
	struct UNiagaraComponent* NS_JackhammerActiveIdle; 
	struct UNiagaraComponent* NS_JackhammerStart; 
	struct UNiagaraComponent* NS_JackhammerHit; 
	bool IdleOn; 
	bool LastIdleOn; 
	bool InUse; 
	bool LastInUse; 
	bool DidHit; 
	bool LastDidHit; 

	void OnRep_DidHit(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_InUse(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_IdleOn(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnDynamicStateUpdated(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_Jackhammer(int32_t EntryPoint); // (Final|UbergraphFunction)
};

