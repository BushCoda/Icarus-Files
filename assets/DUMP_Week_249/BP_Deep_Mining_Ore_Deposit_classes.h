// BlueprintGeneratedClass BP_Deep_Mining_Ore_Deposit.BP_Deep_Mining_Ore_Deposit_C
struct ABP_Deep_Mining_Ore_Deposit_C : ABP_Deep_Mining_Ore_Deposit_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UHighlightableComponent* Highlightable; 
	struct TMap<struct FOreDepositRowHandle, float> RandomDesiredRatios; 
	float CachedTotalWeight; 
	struct TMap<struct FOreDepositRowHandle, float> CachedCurrentRatios; 
	struct TArray<struct FVector> TransformsToVector; 
	struct AActor* HighestDropship; 
	struct UMaterialInterface* NodeMaterial; 
	struct FOreDepositRowHandle LocalMaterialType; 
	bool IsDesertDeposit; 
	bool IsInCave; 
	struct UMaterialInterface* RockMaterial; 

	void AssignType(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct TSoftObjectPtr<UMaterialInterface> GetNodeMaterial(struct FOreDeposit& OreDeposit); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BiomeUpdated(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_LocalMaterialType(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnLoaded_86CD52A24289457079E06B9B6B8EE0DB(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_7A08DCE545D5B147504667BA88769DFC(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void SetMaterialType(struct FOreDepositRowHandle Row); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void RerollType(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Deep_Mining_Ore_Deposit(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

