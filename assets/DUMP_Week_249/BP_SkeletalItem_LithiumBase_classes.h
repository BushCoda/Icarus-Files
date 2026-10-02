// BlueprintGeneratedClass BP_SkeletalItem_LithiumBase.BP_SkeletalItem_LithiumBase_C
struct ABP_SkeletalItem_LithiumBase_C : ASkeletalItem {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* FMODAudioLoop; 
	struct UFillableComponent* Fillable; 
	int32_t MAGIC_UID; 
	int32_t ModifierID; 
	bool bIsActive; 
	bool HasEnergy; 

	bool ShouldConsumeFuel(struct FHitResult& Hit, int32_t& AmountToConsume); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnRep_HasEnergy(); // (BlueprintCallable|BlueprintEvent)
	void GetPoweredParticleSystem(struct UNiagaraComponent*& System); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void OnActiveStateChanged(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_bIsActive(); // (BlueprintCallable|BlueprintEvent)
	void HasPoweredStat(bool& HasStat); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Add Remove Powered Stat(bool Add); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateStoredUnits(); // (BlueprintCallable|BlueprintEvent)
	void ConsumeFuel(int32_t Amount); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void SetIsActive(bool State); // (BlueprintCallable|BlueprintEvent)
	void CheckPoweredState(); // (BlueprintCallable|BlueprintEvent)
	void TryToggleActive(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_LithiumBase(int32_t EntryPoint); // (Final|UbergraphFunction)
};

